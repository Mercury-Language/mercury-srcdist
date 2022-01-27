/*
** Automatically generated from `diet.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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



#line 78 "diet.m"
struct mercury__diet__member_2_p_1_env_0_s {
#line 78 "diet.m"
  MR_Word mercury__diet__member_2_p_1_env_0__TypeClassInfo_for_enum_16;
#line 78 "diet.m"
  MR_Box * mercury__diet__member_2_p_1_env_0__Elem_1;
#line 78 "diet.m"
  MR_Cont mercury__diet__member_2_p_1_env_0__cont;
#line 78 "diet.m"
  void * mercury__diet__member_2_p_1_env_0__cont_env_ptr;
#line 686 "diet.m"
  MR_bool mercury__diet__member_2_p_1_env_0__succeeded;
#line 691 "diet.m"
  MR_Integer mercury__diet__member_2_p_1_env_0__Int_12;
#line 78 "diet.m"
};


#line 111 "diet.c"
static const MR_DuFunctorDesc mercury__diet__diet__du_functor_desc_diet_1_0;

#line 114 "diet.c"
static const MR_VA_TypeInfo_Struct2 mercury__diet____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 117 "diet.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__diet__diet__pti_diet_1__pseudo_1;

#line 120 "diet.c"
static const MR_PseudoTypeInfo mercury__diet__diet__field_types_diet_1_1[4];

#line 123 "diet.c"
static const MR_ConstString mercury__diet__diet__field_names_diet_1_1[4];

#line 126 "diet.c"
static const MR_DuFunctorDesc mercury__diet__diet__du_functor_desc_diet_1_1;

#line 129 "diet.c"
static const MR_DuFunctorDescPtr mercury__diet__diet__du_stag_ordered_diet_1_0[1];

#line 132 "diet.c"
static const MR_DuFunctorDescPtr mercury__diet__diet__du_stag_ordered_diet_1_1[1];

#line 135 "diet.c"
static const MR_DuPtagLayout mercury__diet__diet__du_ptag_ordered_diet_1[2];

#line 138 "diet.c"
static const MR_DuFunctorDescPtr mercury__diet__diet__du_name_ordered_diet_1[2];

#line 141 "diet.c"
static const MR_Integer mercury__diet__diet__functor_number_map_diet_1[2];

#line 144 "diet.c"
static MR_bool MR_CALL 
mercury__diet____Unify____diet_1_0_10001(
#line 147 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 149 "diet.c"
  MR_Box mercury__diet__wrapper_arg_2,
#line 151 "diet.c"
  MR_Box mercury__diet__wrapper_arg_3);

#line 154 "diet.c"
static void MR_CALL 
mercury__diet____Compare____diet_1_0_10001(
#line 157 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 159 "diet.c"
  MR_Box * mercury__diet__wrapper_arg_2,
#line 161 "diet.c"
  MR_Box mercury__diet__wrapper_arg_3,
#line 163 "diet.c"
  MR_Box mercury__diet__wrapper_arg_4);

#line 166 "diet.c"
static MR_bool MR_CALL 
mercury__diet____Unify____interval_0_0_10001(
#line 169 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 171 "diet.c"
  MR_Box mercury__diet__wrapper_arg_2);

#line 174 "diet.c"
static void MR_CALL 
mercury__diet____Compare____interval_0_0_10001(
#line 177 "diet.c"
  MR_Box * mercury__diet__wrapper_arg_1,
#line 179 "diet.c"
  MR_Box mercury__diet__wrapper_arg_2,
#line 181 "diet.c"
  MR_Box mercury__diet__wrapper_arg_3);

#line 1657 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_53_95_95_91_49_44_32_51_44_32_53_93_95_48_5_p_0(
#line 1657 "diet.m"
  MR_Word mercury__diet__V_21_21,
#line 1657 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_17,
#line 1657 "diet.m"
  MR_Integer mercury__diet__Lo_7,
#line 1657 "diet.m"
  MR_Integer mercury__diet__Hi_8,
#line 1657 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_A_0_10,
#line 1657 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_A_11);

#line 1657 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
#line 1657 "diet.m"
  MR_Word mercury__diet__V_21_21,
#line 1657 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_17,
#line 1657 "diet.m"
  MR_Integer mercury__diet__Lo_7,
#line 1657 "diet.m"
  MR_Integer mercury__diet__Hi_8,
#line 1657 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
#line 1657 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_11);

#line 1476 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
#line 1476 "diet.m"
  MR_Word mercury__diet__V_21_21,
#line 1476 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_17,
#line 1476 "diet.m"
  MR_Integer mercury__diet__Lo_7,
#line 1476 "diet.m"
  MR_Integer mercury__diet__Hi_8,
#line 1476 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
#line 1476 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11);

#line 1505 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_117_112_50_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_7_p_0(
#line 1505 "diet.m"
  MR_Word mercury__diet__V_31_31,
#line 1505 "diet.m"
  MR_Word mercury__diet__V_32_32,
#line 1505 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_24,
#line 1505 "diet.m"
  MR_Integer mercury__diet__Lo_9,
#line 1505 "diet.m"
  MR_Integer mercury__diet__Hi_10,
#line 1505 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_A_0_13,
#line 1505 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_A_14,
#line 1505 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_B_0_15,
#line 1505 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_B_16);

#line 133 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__diet__V_20_20,
#line 133 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4);

#line 133 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__diet__V_20_20,
#line 133 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4);

#line 238 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(
#line 238 "diet.m"
  MR_Word mercury__diet__V_34_34,
#line 238 "diet.m"
  MR_Word mercury__diet__V_35_35,
#line 238 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_27,
#line 238 "diet.m"
  MR_Word mercury__diet__T_8,
#line 238 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_Acc1_0_16,
#line 238 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_Acc1_17,
#line 238 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_Acc2_0_18,
#line 238 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_Acc2_19);

#line 230 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(
#line 230 "diet.m"
  MR_Word mercury__diet__V_23_23,
#line 230 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
#line 230 "diet.m"
  MR_Word mercury__diet__T_6,
#line 230 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 230 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14);

#line 305 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(
#line 305 "diet.m"
  MR_Word mercury__diet__V_23_23,
#line 305 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
#line 305 "diet.m"
  MR_Word mercury__diet__T_6,
#line 305 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 305 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14);

#line 133 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__diet__V_18_18,
#line 133 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4);

#line 305 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(
#line 305 "diet.m"
  MR_Word mercury__diet__V_23_23,
#line 305 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
#line 305 "diet.m"
  MR_Word mercury__diet__T_6,
#line 305 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 305 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_Acc_14);

#line 218 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_56_93_95_48_4_p_0(
#line 218 "diet.m"
  MR_Word mercury__diet__V_29_29,
#line 218 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_21,
#line 218 "diet.m"
  MR_Word mercury__diet__T_6,
#line 218 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 218 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_Acc_14);

#line 133 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__diet__V_22_22,
#line 133 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 943 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_100_101_108_95_114_105_103_104_116_95_95_91_49_93_95_48_4_p_0(
#line 943 "diet.m"
  MR_Integer mercury__diet__P0_5,
#line 943 "diet.m"
  MR_Word mercury__diet__T0_6,
#line 943 "diet.m"
  MR_Integer * mercury__diet__P_7,
#line 943 "diet.m"
  MR_Word * mercury__diet__T_8);

#line 925 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_100_101_108_95_108_101_102_116_95_95_91_49_93_95_48_4_p_0(
#line 925 "diet.m"
  MR_Integer mercury__diet__P0_5,
#line 925 "diet.m"
  MR_Word mercury__diet__T0_6,
#line 925 "diet.m"
  MR_Integer * mercury__diet__P_7,
#line 925 "diet.m"
  MR_Word * mercury__diet__T_8);

#line 710 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_98_115_101_116_95_50_95_95_91_49_93_95_48_5_p_0(
#line 710 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 710 "diet.m"
  MR_Word mercury__diet__R1_8,
#line 710 "diet.m"
  MR_Tuple mercury__diet__HeadVar__3_3,
#line 710 "diet.m"
  MR_Word mercury__diet__R2_11,
#line 710 "diet.m"
  MR_Word * mercury__diet__IsSubset_12);

#line 584 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(
#line 584 "diet.m"
  MR_Word mercury__diet__T0_4,
#line 584 "diet.m"
  MR_Tuple * mercury__diet__X_5,
#line 584 "diet.m"
  MR_Word * mercury__diet__T_6);

#line 563 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_114_111_111_116_95_95_91_49_93_95_48_2_f_0(
#line 563 "diet.m"
  MR_Word mercury__diet__L_4,
#line 563 "diet.m"
  MR_Word mercury__diet__R_5);

#line 552 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_97_120_95_95_91_49_93_95_48_3_p_0(
#line 552 "diet.m"
  MR_Word mercury__diet__T0_4,
#line 552 "diet.m"
  MR_Tuple * mercury__diet__X_5,
#line 552 "diet.m"
  MR_Word * mercury__diet__T_6);

#line 541 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_95_91_49_93_95_48_3_p_0(
#line 541 "diet.m"
  MR_Word mercury__diet__T0_4,
#line 541 "diet.m"
  MR_Tuple * mercury__diet__X_5,
#line 541 "diet.m"
  MR_Word * mercury__diet__T_6);

#line 524 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(
#line 524 "diet.m"
  MR_Word mercury__diet__IsLeft_5,
#line 524 "diet.m"
  MR_Tuple mercury__diet__X_6,
#line 524 "diet.m"
  MR_Word mercury__diet__T0_7);

#line 502 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(
#line 502 "diet.m"
  MR_Tuple mercury__diet__V_5,
#line 502 "diet.m"
  MR_Word mercury__diet__L_6,
#line 502 "diet.m"
  MR_Word mercury__diet__R_7);

#line 456 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(
#line 456 "diet.m"
  MR_Tuple mercury__diet__X_5,
#line 456 "diet.m"
  MR_Word mercury__diet__L_6,
#line 456 "diet.m"
  MR_Word mercury__diet__R_7);

#line 452 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(
#line 452 "diet.m"
  MR_Tuple mercury__diet__X_5,
#line 452 "diet.m"
  MR_Word mercury__diet__L_6,
#line 452 "diet.m"
  MR_Word mercury__diet__R_7);

#line 1357 "diet.m"
static void MR_CALL 
mercury__diet__diff_helper_8_p_0(
#line 1357 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_44,
#line 1357 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 1357 "diet.m"
  MR_Word mercury__diet__Right0_11,
#line 1357 "diet.m"
  MR_Word mercury__diet__Left0_12,
#line 1357 "diet.m"
  MR_Word mercury__diet__Head0_13,
#line 1357 "diet.m"
  MR_Word mercury__diet__Stream0_14,
#line 1357 "diet.m"
  MR_Word * mercury__diet__Output_15,
#line 1357 "diet.m"
  MR_Word * mercury__diet__Head_16,
#line 1357 "diet.m"
  MR_Word * mercury__diet__Stream_17);

#line 1328 "diet.m"
static void MR_CALL 
mercury__diet__diff_6_p_0(
#line 1328 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_27,
#line 1328 "diet.m"
  MR_Word mercury__diet__Input_7,
#line 1328 "diet.m"
  MR_Word mercury__diet__Head0_8,
#line 1328 "diet.m"
  MR_Word mercury__diet__Stream0_9,
#line 1328 "diet.m"
  MR_Word * mercury__diet__Output_10,
#line 1328 "diet.m"
  MR_Word * mercury__diet__Head_11,
#line 1328 "diet.m"
  MR_Word * mercury__diet__Stream_12);

#line 1257 "diet.m"
static void MR_CALL 
mercury__diet__inter_help_8_p_0(
#line 1257 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_49,
#line 1257 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 1257 "diet.m"
  MR_Word mercury__diet__Right0_11,
#line 1257 "diet.m"
  MR_Word mercury__diet__Left0_12,
#line 1257 "diet.m"
  MR_Word mercury__diet__Head0_13,
#line 1257 "diet.m"
  MR_Word mercury__diet__Stream0_14,
#line 1257 "diet.m"
  MR_Word * mercury__diet__Result_15,
#line 1257 "diet.m"
  MR_Word * mercury__diet__Head_16,
#line 1257 "diet.m"
  MR_Word * mercury__diet__Stream_17);

#line 1227 "diet.m"
static void MR_CALL 
mercury__diet__inter_2_6_p_0(
#line 1227 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_26,
#line 1227 "diet.m"
  MR_Word mercury__diet__Input_7,
#line 1227 "diet.m"
  MR_Word mercury__diet__Head0_8,
#line 1227 "diet.m"
  MR_Word mercury__diet__Stream0_9,
#line 1227 "diet.m"
  MR_Word * mercury__diet__Result_10,
#line 1227 "diet.m"
  MR_Word * mercury__diet__Head_11,
#line 1227 "diet.m"
  MR_Word * mercury__diet__Stream_12);

#line 1137 "diet.m"
static void MR_CALL 
mercury__diet__union_helper_9_p_0(
#line 1137 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_55,
#line 1137 "diet.m"
  MR_Word mercury__diet__Left0_10,
#line 1137 "diet.m"
  MR_Tuple mercury__diet__HeadVar__2_2,
#line 1137 "diet.m"
  MR_Word mercury__diet__Right0_13,
#line 1137 "diet.m"
  MR_Word mercury__diet__Limit_14,
#line 1137 "diet.m"
  MR_Word mercury__diet__Head0_15,
#line 1137 "diet.m"
  MR_Word mercury__diet__Stream0_16,
#line 1137 "diet.m"
  MR_Word * mercury__diet__Left_17,
#line 1137 "diet.m"
  MR_Word * mercury__diet__Head_18,
#line 1137 "diet.m"
  MR_Word * mercury__diet__Stream_19);

#line 1106 "diet.m"
static void MR_CALL 
mercury__diet__union_2_7_p_0(
#line 1106 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_30,
#line 1106 "diet.m"
  MR_Word mercury__diet__Input_8,
#line 1106 "diet.m"
  MR_Word mercury__diet__Limit_9,
#line 1106 "diet.m"
  MR_Word mercury__diet__Head0_10,
#line 1106 "diet.m"
  MR_Word mercury__diet__Stream0_11,
#line 1106 "diet.m"
  MR_Word * mercury__diet__Left_12,
#line 1106 "diet.m"
  MR_Word * mercury__diet__Head_13,
#line 1106 "diet.m"
  MR_Word * mercury__diet__Stream_14);

#line 691 "diet.m"
static void MR_CALL 
mercury__diet__member_2_p_1_1(
#line 691 "diet.m"
  void * mercury__diet__env_ptr_arg);


static /* final */ const MR_Box mercury__diet_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__diet_scalar_common_2[2][4];

static /* final */ const MR_Box mercury__diet_scalar_common_3[1][3];

static /* final */ const MR_Box mercury__diet_scalar_common_4[2][5];




static /* final */ const MR_Box mercury__diet_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__int__arity0__)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
};

static /* final */ const MR_Box mercury__diet_scalar_common_2[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__diet_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__diet_scalar_common_3[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__diet_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__diet_scalar_common_2[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__diet_scalar_common_2[1])),
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
#include "table_builtin.mh"
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
#include "math.mh"
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
#include "private_builtin.mh"
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



#line 1014 "diet.c"
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

#line 1029 "diet.c"
static const MR_VA_TypeInfo_Struct2 mercury__diet____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1039 "diet.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__diet__diet__pti_diet_1__pseudo_1 = {
  &mercury__diet__diet__type_ctor_info_diet_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1047 "diet.c"
static const MR_PseudoTypeInfo mercury__diet__diet__field_types_diet_1_1[4] = {
  (MR_PseudoTypeInfo) &mercury__diet____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__diet__diet__pti_diet_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__diet__diet__pti_diet_1__pseudo_1
};

#line 1055 "diet.c"
static const MR_ConstString mercury__diet__diet__field_names_diet_1_1[4] = {
  (MR_String) "interval",
  (MR_String) "node_height",
  (MR_String) "left",
  (MR_String) "right"
};

#line 1063 "diet.c"
static const MR_DuFunctorDesc mercury__diet__diet__du_functor_desc_diet_1_1 = {
  (MR_String) "node",
  (MR_Integer) 4,
  (MR_Integer) 12,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__diet__diet__field_types_diet_1_1,
  mercury__diet__diet__field_names_diet_1_1,
  NULL,
  NULL
};

#line 1078 "diet.c"
static const MR_DuFunctorDescPtr mercury__diet__diet__du_stag_ordered_diet_1_0[1] = {
  &mercury__diet__diet__du_functor_desc_diet_1_0
};

#line 1083 "diet.c"
static const MR_DuFunctorDescPtr mercury__diet__diet__du_stag_ordered_diet_1_1[1] = {
  &mercury__diet__diet__du_functor_desc_diet_1_1
};

#line 1088 "diet.c"
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

#line 1102 "diet.c"
static const MR_DuFunctorDescPtr mercury__diet__diet__du_name_ordered_diet_1[2] = {
  &mercury__diet__diet__du_functor_desc_diet_1_0,
  &mercury__diet__diet__du_functor_desc_diet_1_1
};

#line 1108 "diet.c"
static const MR_Integer mercury__diet__diet__functor_number_map_diet_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1114 "diet.c"
const MR_TypeCtorInfo_Struct mercury__diet__diet__type_ctor_info_diet_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__diet____Unify____diet_1_0_10001)),
  ((MR_Box) (mercury__diet____Compare____diet_1_0_10001)),
  (MR_String) "diet",
  (MR_String) "diet",
  {
    mercury__diet__diet__du_name_ordered_diet_1
  },
  {
    mercury__diet__diet__du_ptag_ordered_diet_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__diet__diet__functor_number_map_diet_1
};

#line 1135 "diet.c"
const MR_TypeCtorInfo_Struct mercury__diet__diet__type_ctor_info_interval_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__diet____Unify____interval_0_0_10001)),
  ((MR_Box) (mercury__diet____Compare____interval_0_0_10001)),
  (MR_String) "diet",
  (MR_String) "interval",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__diet____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1156 "diet.c"
static MR_bool MR_CALL 
mercury__diet____Unify____diet_1_0_10001(
#line 1159 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 1161 "diet.c"
  MR_Box mercury__diet__wrapper_arg_2,
#line 1163 "diet.c"
  MR_Box mercury__diet__wrapper_arg_3)
#line 1165 "diet.c"
{
#line 1167 "diet.c"
  {
#line 1169 "diet.c"
    MR_bool mercury__diet__succeeded;

#line 1172 "diet.c"
    {
#line 1174 "diet.c"
      mercury__diet__succeeded = mercury__diet____Unify____diet_1_0(((MR_Word) mercury__diet__wrapper_arg_1), ((MR_Word) mercury__diet__wrapper_arg_2), ((MR_Word) mercury__diet__wrapper_arg_3));
    }
#line 1177 "diet.c"
    return mercury__diet__succeeded;
#line 1179 "diet.c"
  }
#line 1181 "diet.c"
}

#line 1184 "diet.c"
static void MR_CALL 
mercury__diet____Compare____diet_1_0_10001(
#line 1187 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 1189 "diet.c"
  MR_Box * mercury__diet__wrapper_arg_2,
#line 1191 "diet.c"
  MR_Box mercury__diet__wrapper_arg_3,
#line 1193 "diet.c"
  MR_Box mercury__diet__wrapper_arg_4)
#line 1195 "diet.c"
{
#line 1197 "diet.c"
  {
#line 1199 "diet.c"
    MR_Word mercury__diet__conv0_HeadVar__1_1;

#line 1202 "diet.c"
    {
#line 1204 "diet.c"
      mercury__diet____Compare____diet_1_0(((MR_Word) mercury__diet__wrapper_arg_1), &mercury__diet__conv0_HeadVar__1_1, ((MR_Word) mercury__diet__wrapper_arg_3), ((MR_Word) mercury__diet__wrapper_arg_4));
    }
#line 1207 "diet.c"
    *mercury__diet__wrapper_arg_2 = ((MR_Box) (mercury__diet__conv0_HeadVar__1_1));
#line 1209 "diet.c"
  }
#line 1211 "diet.c"
}

#line 1214 "diet.c"
static MR_bool MR_CALL 
mercury__diet____Unify____interval_0_0_10001(
#line 1217 "diet.c"
  MR_Box mercury__diet__wrapper_arg_1,
#line 1219 "diet.c"
  MR_Box mercury__diet__wrapper_arg_2)
#line 1221 "diet.c"
{
#line 1223 "diet.c"
  {
#line 1225 "diet.c"
    MR_bool mercury__diet__succeeded;

#line 1228 "diet.c"
    {
#line 1230 "diet.c"
      mercury__diet__succeeded = mercury__diet____Unify____interval_0_0(((MR_Tuple) mercury__diet__wrapper_arg_1), ((MR_Tuple) mercury__diet__wrapper_arg_2));
    }
#line 1233 "diet.c"
    return mercury__diet__succeeded;
#line 1235 "diet.c"
  }
#line 1237 "diet.c"
}

#line 1240 "diet.c"
static void MR_CALL 
mercury__diet____Compare____interval_0_0_10001(
#line 1243 "diet.c"
  MR_Box * mercury__diet__wrapper_arg_1,
#line 1245 "diet.c"
  MR_Box mercury__diet__wrapper_arg_2,
#line 1247 "diet.c"
  MR_Box mercury__diet__wrapper_arg_3)
#line 1249 "diet.c"
{
#line 1251 "diet.c"
  {
#line 1253 "diet.c"
    MR_Word mercury__diet__conv0_HeadVar__1_1;

#line 1256 "diet.c"
    {
#line 1258 "diet.c"
      mercury__diet____Compare____interval_0_0(&mercury__diet__conv0_HeadVar__1_1, ((MR_Tuple) mercury__diet__wrapper_arg_2), ((MR_Tuple) mercury__diet__wrapper_arg_3));
    }
#line 1261 "diet.c"
    *mercury__diet__wrapper_arg_1 = ((MR_Box) (mercury__diet__conv0_HeadVar__1_1));
#line 1263 "diet.c"
  }
#line 1265 "diet.c"
}

#line 1657 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_53_95_95_91_49_44_32_51_44_32_53_93_95_48_5_p_0(
#line 1657 "diet.m"
  MR_Word mercury__diet__V_21_21,
#line 1657 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_17,
#line 1657 "diet.m"
  MR_Integer mercury__diet__Lo_7,
#line 1657 "diet.m"
  MR_Integer mercury__diet__Hi_8,
#line 1657 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_A_0_10,
#line 1657 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_A_11)
#line 1657 "diet.m"
{
#line 1668 "diet.m"
  while (MR_TRUE)
#line 1668 "diet.m"
    {
#line 1668 "diet.m"
      /* tailcall optimized into a loop */
#line 1668 "diet.m"
      {
#line 1668 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_7 <= mercury__diet__Hi_8);

#line 1668 "diet.m"
        if (mercury__diet__succeeded)
#line 1666 "diet.m"
          {
#line 1666 "diet.m"
            MR_Box mercury__diet__V_12_12;
#line 1666 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_A_13_13;
#line 1666 "diet.m"
            MR_Integer mercury__diet__V_14_14;

#line 1666 "diet.m"
            {
#line 1666 "diet.m"
              mercury__diet__V_12_12 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_17, mercury__diet__Hi_8);
            }
#line 43 "list.opt"
            {
#line 43 "list.opt"
              mercury__diet__STATE_VARIABLE_A_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 43 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__diet__STATE_VARIABLE_A_13_13, 0) = mercury__diet__V_12_12;
#line 43 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__diet__STATE_VARIABLE_A_13_13, 1) = ((MR_Box) (mercury__diet__STATE_VARIABLE_A_0_10));
#line 43 "list.opt"
            }
#line 1667 "diet.m"
            mercury__diet__V_14_14 = (mercury__diet__Hi_8 - (MR_Integer) 1);
#line 1667 "diet.m"
            /* direct tailcall eliminated */
#line 1667 "diet.m"
            {
#line 1667 "diet.m"
              MR_Integer mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_14_14;
#line 1667 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_13_13;

#line 1667 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1667 "diet.m"
              mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1667 "diet.m"
            }
#line 1667 "diet.m"
            continue;
#line 1666 "diet.m"
          }
#line 1668 "diet.m"
        else
#line 1668 "diet.m"
          *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1668 "diet.m"
      }
#line 1668 "diet.m"
      break;
#line 1668 "diet.m"
    }
#line 1657 "diet.m"
}

#line 1657 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
#line 1657 "diet.m"
  MR_Word mercury__diet__V_21_21,
#line 1657 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_17,
#line 1657 "diet.m"
  MR_Integer mercury__diet__Lo_7,
#line 1657 "diet.m"
  MR_Integer mercury__diet__Hi_8,
#line 1657 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
#line 1657 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
#line 1657 "diet.m"
{
#line 1668 "diet.m"
  while (MR_TRUE)
#line 1668 "diet.m"
    {
#line 1668 "diet.m"
      /* tailcall optimized into a loop */
#line 1668 "diet.m"
      {
#line 1668 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_7 <= mercury__diet__Hi_8);

#line 1668 "diet.m"
        if (mercury__diet__succeeded)
#line 1666 "diet.m"
          {
#line 1666 "diet.m"
            MR_Box mercury__diet__V_12_12;
#line 1666 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_13_13;
#line 1666 "diet.m"
            MR_Integer mercury__diet__V_14_14;
#line 1642 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

#line 1666 "diet.m"
            {
#line 1666 "diet.m"
              mercury__diet__V_12_12 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_17, mercury__diet__Hi_8);
            }
#line 1642 "diet.m"
            mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__diet__V_21_21, (MR_Integer) 1)));
#line 1642 "diet.m"
            {
#line 1642 "diet.m"
              mercury__diet__STATE_VARIABLE_A_13_13 = mercury__diet__func_0(((MR_Box) mercury__diet__V_21_21), mercury__diet__V_12_12, mercury__diet__STATE_VARIABLE_A_0_10);
            }
#line 1667 "diet.m"
            mercury__diet__V_14_14 = (mercury__diet__Hi_8 - (MR_Integer) 1);
#line 1667 "diet.m"
            /* direct tailcall eliminated */
#line 1667 "diet.m"
            {
#line 1667 "diet.m"
              MR_Integer mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_14_14;
#line 1667 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_13_13;

#line 1667 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1667 "diet.m"
              mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1667 "diet.m"
            }
#line 1667 "diet.m"
            continue;
#line 1666 "diet.m"
          }
#line 1668 "diet.m"
        else
#line 1668 "diet.m"
          *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1668 "diet.m"
      }
#line 1668 "diet.m"
      break;
#line 1668 "diet.m"
    }
#line 1657 "diet.m"
}

#line 1476 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(
#line 1476 "diet.m"
  MR_Word mercury__diet__V_21_21,
#line 1476 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_17,
#line 1476 "diet.m"
  MR_Integer mercury__diet__Lo_7,
#line 1476 "diet.m"
  MR_Integer mercury__diet__Hi_8,
#line 1476 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
#line 1476 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
#line 1476 "diet.m"
{
#line 1487 "diet.m"
  while (MR_TRUE)
#line 1487 "diet.m"
    {
#line 1487 "diet.m"
      /* tailcall optimized into a loop */
#line 1487 "diet.m"
      {
#line 1487 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_7 <= mercury__diet__Hi_8);

#line 1487 "diet.m"
        if (mercury__diet__succeeded)
#line 1485 "diet.m"
          {
#line 1485 "diet.m"
            MR_Box mercury__diet__V_12_12;
#line 1485 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_13_13;
#line 1485 "diet.m"
            MR_Integer mercury__diet__V_14_14;
#line 1459 "diet.m"
            MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box);

#line 1485 "diet.m"
            {
#line 1485 "diet.m"
              mercury__diet__V_12_12 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_17, mercury__diet__Lo_7);
            }
#line 1459 "diet.m"
            mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__diet__V_21_21, (MR_Integer) 1)));
#line 1459 "diet.m"
            {
#line 1459 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_13_13 = mercury__diet__func_0(((MR_Box) mercury__diet__V_21_21), mercury__diet__V_12_12, mercury__diet__STATE_VARIABLE_Acc_0_10);
            }
#line 1486 "diet.m"
            mercury__diet__V_14_14 = (mercury__diet__Lo_7 + (MR_Integer) 1);
#line 1486 "diet.m"
            /* direct tailcall eliminated */
#line 1486 "diet.m"
            {
#line 1486 "diet.m"
              MR_Integer mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_14_14;
#line 1486 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_13_13;

#line 1486 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1486 "diet.m"
              mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1486 "diet.m"
            }
#line 1486 "diet.m"
            continue;
#line 1485 "diet.m"
          }
#line 1487 "diet.m"
        else
#line 1487 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1487 "diet.m"
      }
#line 1487 "diet.m"
      break;
#line 1487 "diet.m"
    }
#line 1476 "diet.m"
}

#line 1505 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_117_112_50_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_7_p_0(
#line 1505 "diet.m"
  MR_Word mercury__diet__V_31_31,
#line 1505 "diet.m"
  MR_Word mercury__diet__V_32_32,
#line 1505 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_24,
#line 1505 "diet.m"
  MR_Integer mercury__diet__Lo_9,
#line 1505 "diet.m"
  MR_Integer mercury__diet__Hi_10,
#line 1505 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_A_0_13,
#line 1505 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_A_14,
#line 1505 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_B_0_15,
#line 1505 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_B_16)
#line 1505 "diet.m"
{
#line 1522 "diet.m"
  while (MR_TRUE)
#line 1522 "diet.m"
    {
#line 1522 "diet.m"
      /* tailcall optimized into a loop */
#line 1522 "diet.m"
      {
#line 1522 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_9 <= mercury__diet__Hi_10);

#line 1522 "diet.m"
        if (mercury__diet__succeeded)
#line 1520 "diet.m"
          {
#line 1520 "diet.m"
            MR_Box mercury__diet__V_17_17;
#line 1520 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_A_18_18;
#line 1520 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_B_19_19;
#line 1520 "diet.m"
            MR_Integer mercury__diet__V_20_20;

#line 1520 "diet.m"
            {
#line 1520 "diet.m"
              mercury__diet__V_17_17 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_24, mercury__diet__Lo_9);
            }
#line 1520 "diet.m"
            {
#line 1520 "diet.m"
              mercury__diet__divide_2_6_p_0(mercury__diet__V_31_31, mercury__diet__V_32_32, mercury__diet__V_17_17, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_18_18, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_19_19);
            }
#line 1521 "diet.m"
            mercury__diet__V_20_20 = (mercury__diet__Lo_9 + (MR_Integer) 1);
#line 1521 "diet.m"
            /* direct tailcall eliminated */
#line 1521 "diet.m"
            {
#line 1521 "diet.m"
              MR_Integer mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_20_20;
#line 1521 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_18_18;
#line 1521 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_19_19;

#line 1521 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1521 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1521 "diet.m"
              mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1521 "diet.m"
            }
#line 1521 "diet.m"
            continue;
#line 1520 "diet.m"
          }
#line 1522 "diet.m"
        else
#line 1523 "diet.m"
          {
#line 1523 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1523 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1523 "diet.m"
          }
#line 1522 "diet.m"
      }
#line 1522 "diet.m"
      break;
#line 1522 "diet.m"
    }
#line 1505 "diet.m"
}

#line 133 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__diet__V_20_20,
#line 133 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4)
#line 133 "list.int"
{
#line 380 "list.opt"
  while (MR_TRUE)
#line 380 "list.opt"
    {
#line 380 "list.opt"
      /* tailcall optimized into a loop */
#line 380 "list.opt"
      {
#line 380 "list.opt"
        MR_bool mercury__diet__succeeded;

#line 380 "list.opt"
        if ((mercury__diet__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__diet__HeadVar__4_4 = mercury__diet__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Word mercury__diet__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__diet__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Word mercury__diet__STATE_VARIABLE_A_15_15_13;

#line 1089 "diet.m"
            {
#line 1089 "diet.m"
              mercury__diet__STATE_VARIABLE_A_15_15_13 = mercury__diet__union_2_f_0(mercury__diet__V_20_20, mercury__diet__H_10_9, mercury__diet__HeadVar__3_3);
            }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__T_11_10;
#line 384 "list.opt"
              MR_Word mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 384 "list.opt"
            }
#line 384 "list.opt"
            continue;
#line 382 "list.opt"
          }
#line 380 "list.opt"
      }
#line 380 "list.opt"
      break;
#line 380 "list.opt"
    }
#line 133 "list.int"
}

#line 133 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__diet__V_20_20,
#line 133 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4)
#line 133 "list.int"
{
#line 380 "list.opt"
  while (MR_TRUE)
#line 380 "list.opt"
    {
#line 380 "list.opt"
      /* tailcall optimized into a loop */
#line 380 "list.opt"
      {
#line 380 "list.opt"
        MR_bool mercury__diet__succeeded;

#line 380 "list.opt"
        if ((mercury__diet__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__diet__HeadVar__4_4 = mercury__diet__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Word mercury__diet__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__diet__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Word mercury__diet__STATE_VARIABLE_A_15_15_13;

#line 1211 "diet.m"
            {
#line 1211 "diet.m"
              mercury__diet__STATE_VARIABLE_A_15_15_13 = mercury__diet__inter_2_f_0(mercury__diet__V_20_20, mercury__diet__H_10_9, mercury__diet__HeadVar__3_3);
            }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__T_11_10;
#line 384 "list.opt"
              MR_Word mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 384 "list.opt"
            }
#line 384 "list.opt"
            continue;
#line 382 "list.opt"
          }
#line 380 "list.opt"
      }
#line 380 "list.opt"
      break;
#line 380 "list.opt"
    }
#line 133 "list.int"
}

#line 238 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(
#line 238 "diet.m"
  MR_Word mercury__diet__V_34_34,
#line 238 "diet.m"
  MR_Word mercury__diet__V_35_35,
#line 238 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_27,
#line 238 "diet.m"
  MR_Word mercury__diet__T_8,
#line 238 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_Acc1_0_16,
#line 238 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_Acc1_17,
#line 238 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_Acc2_0_18,
#line 238 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_Acc2_19)
#line 238 "diet.m"
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
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1495 "diet.m"
          {
#line 1495 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1495 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1495 "diet.m"
          }
#line 1496 "diet.m"
        else
#line 1497 "diet.m"
          {
#line 1497 "diet.m"
            MR_Integer mercury__diet__X_11;
#line 1497 "diet.m"
            MR_Integer mercury__diet__Y_12;
#line 1497 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1497 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1497 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1497 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1497 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1497 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1497 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1497 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1497 "diet.m"
            mercury__diet__X_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0)));
#line 1497 "diet.m"
            mercury__diet__Y_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1)));
#line 1498 "diet.m"
            {
#line 1498 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(mercury__diet__V_34_34, mercury__diet__V_35_35, mercury__diet__TypeClassInfo_for_enum_27, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1499 "diet.m"
            {
#line 1499 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_117_112_50_95_95_104_111_50_50_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_7_p_0(mercury__diet__V_34_34, mercury__diet__V_35_35, mercury__diet__TypeClassInfo_for_enum_27, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
            }
#line 1500 "diet.m"
            /* direct tailcall eliminated */
#line 1500 "diet.m"
            {
#line 1500 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1500 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1500 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1500 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1500 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1500 "diet.m"
              mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
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
#line 238 "diet.m"
}

#line 230 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(
#line 230 "diet.m"
  MR_Word mercury__diet__V_23_23,
#line 230 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
#line 230 "diet.m"
  MR_Word mercury__diet__T_6,
#line 230 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 230 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 230 "diet.m"
{
#line 1468 "diet.m"
  while (MR_TRUE)
#line 1468 "diet.m"
    {
#line 1468 "diet.m"
      /* tailcall optimized into a loop */
#line 1468 "diet.m"
      {
#line 1468 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1468 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1467 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1468 "diet.m"
        else
#line 1469 "diet.m"
          {
#line 1469 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1469 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1469 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1469 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1469 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1469 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1469 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1469 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1469 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1469 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1470 "diet.m"
            {
#line 1470 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(mercury__diet__V_23_23, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1471 "diet.m"
            {
#line 1471 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_50_95_95_104_111_50_51_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(mercury__diet__V_23_23, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1472 "diet.m"
            /* direct tailcall eliminated */
#line 1472 "diet.m"
            {
#line 1472 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1472 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1472 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1472 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1472 "diet.m"
            }
#line 1472 "diet.m"
            continue;
#line 1469 "diet.m"
          }
#line 1468 "diet.m"
      }
#line 1468 "diet.m"
      break;
#line 1468 "diet.m"
    }
#line 230 "diet.m"
}

#line 305 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(
#line 305 "diet.m"
  MR_Word mercury__diet__V_23_23,
#line 305 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
#line 305 "diet.m"
  MR_Word mercury__diet__T_6,
#line 305 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 305 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 305 "diet.m"
{
#line 1649 "diet.m"
  while (MR_TRUE)
#line 1649 "diet.m"
    {
#line 1649 "diet.m"
      /* tailcall optimized into a loop */
#line 1649 "diet.m"
      {
#line 1649 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1649 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1648 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1649 "diet.m"
        else
#line 1650 "diet.m"
          {
#line 1650 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1650 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1650 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1650 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1650 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1650 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1650 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1650 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1651 "diet.m"
            {
#line 1651 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(mercury__diet__V_23_23, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1652 "diet.m"
            {
#line 1652 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_52_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_5_p_0(mercury__diet__V_23_23, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1653 "diet.m"
            /* direct tailcall eliminated */
#line 1653 "diet.m"
            {
#line 1653 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1653 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1653 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1653 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1653 "diet.m"
            }
#line 1653 "diet.m"
            continue;
#line 1650 "diet.m"
          }
#line 1649 "diet.m"
      }
#line 1649 "diet.m"
      break;
#line 1649 "diet.m"
    }
#line 305 "diet.m"
}

#line 133 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__diet__V_18_18,
#line 133 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4)
#line 133 "list.int"
{
#line 380 "list.opt"
  while (MR_TRUE)
#line 380 "list.opt"
    {
#line 380 "list.opt"
      /* tailcall optimized into a loop */
#line 380 "list.opt"
      {
#line 380 "list.opt"
        MR_bool mercury__diet__succeeded;

#line 380 "list.opt"
        if ((mercury__diet__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__diet__HeadVar__4_4 = mercury__diet__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Word mercury__diet__TypeInfo_10_24;
#line 382 "list.opt"
            MR_Box mercury__diet__H_10_9 = (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0));
#line 382 "list.opt"
            MR_Word mercury__diet__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Word mercury__diet__STATE_VARIABLE_A_15_15_13;
#line 382 "list.opt"
            MR_Integer mercury__diet__V_22_22;
#line 2116 "diet.c"
            MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box);
#line 2118 "diet.c"
            MR_Box mercury__diet__conv1_V_22_22;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__V_18_18 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 2136 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_10_24  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 2143 "diet.c"
            mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__V_18_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 2145 "diet.c"
            {
#line 2147 "diet.c"
              mercury__diet__conv1_V_22_22 = mercury__diet__func_0(((MR_Box) mercury__diet__V_18_18), mercury__diet__H_10_9);
            }
#line 2150 "diet.c"
            mercury__diet__V_22_22 = ((MR_Integer) mercury__diet__conv1_V_22_22);
#line 770 "diet.m"
            {
#line 770 "diet.m"
              mercury__diet__STATE_VARIABLE_A_15_15_13 = mercury__diet__add_2_f_0(mercury__diet__TypeInfo_10_24, mercury__diet__V_22_22, mercury__diet__HeadVar__3_3);
            }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__T_11_10;
#line 384 "list.opt"
              MR_Word mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 384 "list.opt"
            }
#line 384 "list.opt"
            continue;
#line 382 "list.opt"
          }
#line 380 "list.opt"
      }
#line 380 "list.opt"
      break;
#line 380 "list.opt"
    }
#line 133 "list.int"
}

#line 305 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(
#line 305 "diet.m"
  MR_Word mercury__diet__V_23_23,
#line 305 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
#line 305 "diet.m"
  MR_Word mercury__diet__T_6,
#line 305 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 305 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_Acc_14)
#line 305 "diet.m"
{
#line 1649 "diet.m"
  while (MR_TRUE)
#line 1649 "diet.m"
    {
#line 1649 "diet.m"
      /* tailcall optimized into a loop */
#line 1649 "diet.m"
      {
#line 1649 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1649 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1648 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1649 "diet.m"
        else
#line 1650 "diet.m"
          {
#line 1650 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1650 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1650 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1650 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1650 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1650 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1650 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1650 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1650 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1650 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1651 "diet.m"
            {
#line 1651 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(mercury__diet__V_23_23, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1652 "diet.m"
            {
#line 1652 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_95_100_111_119_110_95_95_104_111_50_53_95_95_91_49_44_32_51_44_32_53_93_95_48_5_p_0(mercury__diet__V_23_23, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1653 "diet.m"
            /* direct tailcall eliminated */
#line 1653 "diet.m"
            {
#line 1653 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1653 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1653 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1653 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1653 "diet.m"
            }
#line 1653 "diet.m"
            continue;
#line 1650 "diet.m"
          }
#line 1649 "diet.m"
      }
#line 1649 "diet.m"
      break;
#line 1649 "diet.m"
    }
#line 305 "diet.m"
}

#line 218 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_56_93_95_48_4_p_0(
#line 218 "diet.m"
  MR_Word mercury__diet__V_29_29,
#line 218 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_21,
#line 218 "diet.m"
  MR_Word mercury__diet__T_6,
#line 218 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 218 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_Acc_14)
#line 218 "diet.m"
{
#line 1448 "diet.m"
  while (MR_TRUE)
#line 1448 "diet.m"
    {
#line 1448 "diet.m"
      /* tailcall optimized into a loop */
#line 1448 "diet.m"
      {
#line 1448 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1448 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1447 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1448 "diet.m"
        else
#line 1449 "diet.m"
          {
#line 1449 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1449 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1449 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1449 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1449 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1449 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1449 "diet.m"
            MR_Box mercury__diet__V_17_17;
#line 1449 "diet.m"
            MR_Box mercury__diet__V_18_18;
#line 1449 "diet.m"
            MR_Word mercury__diet__STATE_VARIABLE_Acc_19_19;
#line 1449 "diet.m"
            MR_Tuple mercury__diet__V_49_49;
#line 1449 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1449 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1449 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1450 "diet.m"
            {
#line 1450 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_56_93_95_48_4_p_0(mercury__diet__V_29_29, mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1451 "diet.m"
            {
#line 1451 "diet.m"
              mercury__diet__V_17_17 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__X_8);
            }
#line 1451 "diet.m"
            {
#line 1451 "diet.m"
              mercury__diet__V_18_18 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__Y_9);
            }
#line 1735 "diet.m"
            {
#line 1735 "diet.m"
              mercury__diet__V_49_49 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1735 "diet.m"
              MR_hl_field(MR_mktag(0), mercury__diet__V_49_49, 0) = mercury__diet__V_17_17;
#line 1735 "diet.m"
              MR_hl_field(MR_mktag(0), mercury__diet__V_49_49, 1) = mercury__diet__V_18_18;
#line 1735 "diet.m"
            }
#line 1735 "diet.m"
            {
#line 1735 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1735 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__STATE_VARIABLE_Acc_19_19, 0) = ((MR_Box) (mercury__diet__V_49_49));
#line 1735 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__STATE_VARIABLE_Acc_19_19, 1) = ((MR_Box) (mercury__diet__STATE_VARIABLE_Acc_16_16));
#line 1735 "diet.m"
            }
#line 1452 "diet.m"
            /* direct tailcall eliminated */
#line 1452 "diet.m"
            {
#line 1452 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1452 "diet.m"
              MR_Word mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_19_19;

#line 1452 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1452 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1452 "diet.m"
            }
#line 1452 "diet.m"
            continue;
#line 1449 "diet.m"
          }
#line 1448 "diet.m"
      }
#line 1448 "diet.m"
      break;
#line 1448 "diet.m"
    }
#line 218 "diet.m"
}

#line 133 "list.int"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__diet__V_22_22,
#line 133 "list.int"
  MR_Word mercury__diet__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__diet__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__diet__HeadVar__4_4)
#line 133 "list.int"
{
#line 380 "list.opt"
  while (MR_TRUE)
#line 380 "list.opt"
    {
#line 380 "list.opt"
      /* tailcall optimized into a loop */
#line 380 "list.opt"
      {
#line 380 "list.opt"
        MR_bool mercury__diet__succeeded;

#line 380 "list.opt"
        if ((mercury__diet__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__diet__HeadVar__4_4 = mercury__diet__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Tuple mercury__diet__H_10_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__diet__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Word mercury__diet__STATE_VARIABLE_A_15_15_13;
#line 382 "list.opt"
            MR_Box mercury__diet__X_25 = (MR_hl_field(MR_mktag(0), mercury__diet__H_10_9, (MR_Integer) 0));
#line 382 "list.opt"
            MR_Box mercury__diet__Y_26 = (MR_hl_field(MR_mktag(0), mercury__diet__H_10_9, (MR_Integer) 1));

#line 893 "diet.m"
            {
#line 893 "diet.m"
              mercury__diet__insert_interval_4_p_0(mercury__diet__V_22_22, mercury__diet__X_25, mercury__diet__Y_26, mercury__diet__HeadVar__3_3, &mercury__diet__STATE_VARIABLE_A_15_15_13);
            }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__T_11_10;
#line 384 "list.opt"
              MR_Word mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 384 "list.opt"
            }
#line 384 "list.opt"
            continue;
#line 382 "list.opt"
          }
#line 380 "list.opt"
      }
#line 380 "list.opt"
      break;
#line 380 "list.opt"
    }
#line 133 "list.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__diet__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 943 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_100_101_108_95_114_105_103_104_116_95_95_91_49_93_95_48_4_p_0(
#line 943 "diet.m"
  MR_Integer mercury__diet__P0_5,
#line 943 "diet.m"
  MR_Word mercury__diet__T0_6,
#line 943 "diet.m"
  MR_Integer * mercury__diet__P_7,
#line 943 "diet.m"
  MR_Word * mercury__diet__T_8)
#line 943 "diet.m"
{
#line 950 "diet.m"
  {
#line 950 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 950 "diet.m"
    if ((mercury__diet__T0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 947 "diet.m"
      {
#line 948 "diet.m"
        *mercury__diet__P_7 = mercury__diet__P0_5;
#line 949 "diet.m"
        *mercury__diet__T_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 947 "diet.m"
      }
#line 950 "diet.m"
    else
#line 951 "diet.m"
      {
#line 951 "diet.m"
        MR_Integer mercury__diet__X_9;
#line 951 "diet.m"
        MR_Integer mercury__diet__Y_10;
#line 951 "diet.m"
        MR_Word mercury__diet__Left0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 2)));
#line 951 "diet.m"
        MR_Word mercury__diet__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 3)));
#line 951 "diet.m"
        MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 0)));
#line 951 "diet.m"
        MR_Integer mercury__diet__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 1)));
#line 952 "diet.m"
        MR_Integer mercury__diet__V_16_16;

#line 951 "diet.m"
        mercury__diet__X_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 951 "diet.m"
        mercury__diet__Y_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 425 "diet.m"
        mercury__diet__V_16_16 = (mercury__diet__X_9 - (MR_Integer) 1);
#line 952 "diet.m"
        mercury__diet__succeeded = (mercury__diet__P0_5 < mercury__diet__V_16_16);
#line 955 "diet.m"
        if (mercury__diet__succeeded)
#line 953 "diet.m"
          {
#line 953 "diet.m"
            MR_Word mercury__diet__Left1_14;

#line 953 "diet.m"
            {
#line 953 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_100_101_108_95_114_105_103_104_116_95_95_91_49_93_95_48_4_p_0(mercury__diet__P0_5, mercury__diet__Left0_12, mercury__diet__P_7, &mercury__diet__Left1_14);
            }
#line 954 "diet.m"
            {
#line 954 "diet.m"
              *mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_15_15, mercury__diet__Left1_14, mercury__diet__Right_13);
            }
#line 953 "diet.m"
          }
#line 955 "diet.m"
        else
#line 956 "diet.m"
          {
#line 956 "diet.m"
            *mercury__diet__P_7 = mercury__diet__Y_10;
#line 957 "diet.m"
            *mercury__diet__T_8 = mercury__diet__Right_13;
#line 956 "diet.m"
          }
#line 951 "diet.m"
      }
#line 950 "diet.m"
  }
#line 943 "diet.m"
}

#line 925 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_100_101_108_95_108_101_102_116_95_95_91_49_93_95_48_4_p_0(
#line 925 "diet.m"
  MR_Integer mercury__diet__P0_5,
#line 925 "diet.m"
  MR_Word mercury__diet__T0_6,
#line 925 "diet.m"
  MR_Integer * mercury__diet__P_7,
#line 925 "diet.m"
  MR_Word * mercury__diet__T_8)
#line 925 "diet.m"
{
#line 932 "diet.m"
  {
#line 932 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 932 "diet.m"
    if ((mercury__diet__T0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 929 "diet.m"
      {
#line 930 "diet.m"
        *mercury__diet__P_7 = mercury__diet__P0_5;
#line 931 "diet.m"
        *mercury__diet__T_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 929 "diet.m"
      }
#line 932 "diet.m"
    else
#line 933 "diet.m"
      {
#line 933 "diet.m"
        MR_Integer mercury__diet__X_9;
#line 933 "diet.m"
        MR_Integer mercury__diet__Y_10;
#line 933 "diet.m"
        MR_Word mercury__diet__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 2)));
#line 933 "diet.m"
        MR_Word mercury__diet__Right0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 3)));
#line 933 "diet.m"
        MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 0)));
#line 933 "diet.m"
        MR_Integer mercury__diet__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_6, (MR_Integer) 1)));
#line 934 "diet.m"
        MR_Integer mercury__diet__V_16_16;

#line 933 "diet.m"
        mercury__diet__X_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 933 "diet.m"
        mercury__diet__Y_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 429 "diet.m"
        mercury__diet__V_16_16 = (mercury__diet__Y_10 + (MR_Integer) 1);
#line 934 "diet.m"
        mercury__diet__succeeded = (mercury__diet__P0_5 > mercury__diet__V_16_16);
#line 937 "diet.m"
        if (mercury__diet__succeeded)
#line 935 "diet.m"
          {
#line 935 "diet.m"
            MR_Word mercury__diet__Right1_14;

#line 935 "diet.m"
            {
#line 935 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_100_101_108_95_108_101_102_116_95_95_91_49_93_95_48_4_p_0(mercury__diet__P0_5, mercury__diet__Right0_13, mercury__diet__P_7, &mercury__diet__Right1_14);
            }
#line 936 "diet.m"
            {
#line 936 "diet.m"
              *mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_15_15, mercury__diet__Left_12, mercury__diet__Right1_14);
            }
#line 935 "diet.m"
          }
#line 937 "diet.m"
        else
#line 938 "diet.m"
          {
#line 938 "diet.m"
            *mercury__diet__P_7 = mercury__diet__X_9;
#line 939 "diet.m"
            *mercury__diet__T_8 = mercury__diet__Left_12;
#line 938 "diet.m"
          }
#line 933 "diet.m"
      }
#line 932 "diet.m"
  }
#line 925 "diet.m"
}

#line 710 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_98_115_101_116_95_50_95_95_91_49_93_95_48_5_p_0(
#line 710 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 710 "diet.m"
  MR_Word mercury__diet__R1_8,
#line 710 "diet.m"
  MR_Tuple mercury__diet__HeadVar__3_3,
#line 710 "diet.m"
  MR_Word mercury__diet__R2_11,
#line 710 "diet.m"
  MR_Word * mercury__diet__IsSubset_12)
#line 710 "diet.m"
{
#line 713 "diet.m"
  while (MR_TRUE)
#line 713 "diet.m"
    {
#line 713 "diet.m"
      /* tailcall optimized into a loop */
#line 713 "diet.m"
      {
#line 713 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 713 "diet.m"
        MR_Integer mercury__diet__X1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 0)));
#line 713 "diet.m"
        MR_Integer mercury__diet__Y1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 1)));
#line 713 "diet.m"
        MR_Integer mercury__diet__X2_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__3_3, (MR_Integer) 0)));
#line 713 "diet.m"
        MR_Integer mercury__diet__Y2_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__3_3, (MR_Integer) 1)));

#line 714 "diet.m"
        mercury__diet__succeeded = (mercury__diet__X1_6 < mercury__diet__X2_9);
#line 716 "diet.m"
        if (mercury__diet__succeeded)
#line 715 "diet.m"
          *mercury__diet__IsSubset_12 = (MR_Integer) 0;
#line 716 "diet.m"
        else
#line 725 "diet.m"
          {
#line 716 "diet.m"
            mercury__diet__succeeded = (mercury__diet__X1_6 > mercury__diet__Y2_10);
#line 725 "diet.m"
            if (mercury__diet__succeeded)
#line 720 "diet.m"
              if ((mercury__diet__R2_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 718 "diet.m"
                *mercury__diet__IsSubset_12 = (MR_Integer) 0;
#line 720 "diet.m"
              else
#line 721 "diet.m"
                {
#line 721 "diet.m"
                  MR_Tuple mercury__diet__Min2_17;
#line 721 "diet.m"
                  MR_Word mercury__diet__MinR2_18;

#line 722 "diet.m"
                  {
#line 722 "diet.m"
                    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__R2_11, &mercury__diet__Min2_17, &mercury__diet__MinR2_18);
                  }
#line 723 "diet.m"
                  /* direct tailcall eliminated */
#line 723 "diet.m"
                  {
#line 723 "diet.m"
                    MR_Tuple mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__Min2_17;
#line 723 "diet.m"
                    MR_Word mercury__diet__R2__tmp_copy_11 = mercury__diet__MinR2_18;

#line 723 "diet.m"
                    mercury__diet__R2_11 = mercury__diet__R2__tmp_copy_11;
#line 723 "diet.m"
                    mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 723 "diet.m"
                  }
#line 723 "diet.m"
                  continue;
#line 721 "diet.m"
                }
#line 725 "diet.m"
            else
#line 726 "diet.m"
              {
#line 726 "diet.m"
                MR_Word mercury__diet__Upper_19;

#line 66 "private_builtin.opt"
                mercury__diet__succeeded = (mercury__diet__Y1_7 < mercury__diet__Y2_10);
#line 69 "private_builtin.opt"
                if (mercury__diet__succeeded)
#line 68 "private_builtin.opt"
                  mercury__diet__Upper_19 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                else
#line 74 "private_builtin.opt"
                  {
#line 71 "private_builtin.opt"
                    mercury__diet__succeeded = (mercury__diet__Y1_7 == mercury__diet__Y2_10);
#line 74 "private_builtin.opt"
                    if (mercury__diet__succeeded)
#line 73 "private_builtin.opt"
                      mercury__diet__Upper_19 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                    else
#line 75 "private_builtin.opt"
                      mercury__diet__Upper_19 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                  }
#line 737 "diet.m"
                if ((mercury__diet__Upper_19 == (MR_Integer) 1))
#line 728 "diet.m"
                  if ((mercury__diet__R1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 730 "diet.m"
                    *mercury__diet__IsSubset_12 = (MR_Integer) 1;
#line 728 "diet.m"
                  else
#line 733 "diet.m"
                    {
#line 733 "diet.m"
                      MR_Tuple mercury__diet__Min1_24;
#line 733 "diet.m"
                      MR_Word mercury__diet__MinR1_25;

#line 734 "diet.m"
                      {
#line 734 "diet.m"
                        mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__R1_8, &mercury__diet__Min1_24, &mercury__diet__MinR1_25);
                      }
#line 735 "diet.m"
                      /* direct tailcall eliminated */
#line 735 "diet.m"
                      {
#line 735 "diet.m"
                        MR_Tuple mercury__diet__HeadVar__1__tmp_copy_1 = mercury__diet__Min1_24;
#line 735 "diet.m"
                        MR_Word mercury__diet__R1__tmp_copy_8 = mercury__diet__MinR1_25;

#line 735 "diet.m"
                        mercury__diet__R1_8 = mercury__diet__R1__tmp_copy_8;
#line 735 "diet.m"
                        mercury__diet__HeadVar__1_1 = mercury__diet__HeadVar__1__tmp_copy_1;
#line 735 "diet.m"
                      }
#line 735 "diet.m"
                      continue;
#line 733 "diet.m"
                    }
#line 737 "diet.m"
                else
#line 737 "diet.m"
                  if ((mercury__diet__Upper_19 == (MR_Integer) 0))
#line 738 "diet.m"
                    if ((mercury__diet__R1_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 740 "diet.m"
                      *mercury__diet__IsSubset_12 = (MR_Integer) 1;
#line 738 "diet.m"
                    else
#line 742 "diet.m"
                      if ((mercury__diet__R2_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 745 "diet.m"
                        *mercury__diet__IsSubset_12 = (MR_Integer) 0;
#line 742 "diet.m"
                      else
#line 747 "diet.m"
                        {
#line 747 "diet.m"
                          MR_Tuple mercury__diet__Min2_40;
#line 747 "diet.m"
                          MR_Word mercury__diet__MinR2_41;
#line 747 "diet.m"
                          MR_Tuple mercury__diet__Min1_42;
#line 747 "diet.m"
                          MR_Word mercury__diet__MinR1_43;

#line 749 "diet.m"
                          {
#line 749 "diet.m"
                            mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__R1_8, &mercury__diet__Min1_42, &mercury__diet__MinR1_43);
                          }
#line 750 "diet.m"
                          {
#line 750 "diet.m"
                            mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__R2_11, &mercury__diet__Min2_40, &mercury__diet__MinR2_41);
                          }
#line 751 "diet.m"
                          /* direct tailcall eliminated */
#line 751 "diet.m"
                          {
#line 751 "diet.m"
                            MR_Tuple mercury__diet__HeadVar__1__tmp_copy_1 = mercury__diet__Min1_42;
#line 751 "diet.m"
                            MR_Word mercury__diet__R1__tmp_copy_8 = mercury__diet__MinR1_43;
#line 751 "diet.m"
                            MR_Tuple mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__Min2_40;
#line 751 "diet.m"
                            MR_Word mercury__diet__R2__tmp_copy_11 = mercury__diet__MinR2_41;

#line 751 "diet.m"
                            mercury__diet__R2_11 = mercury__diet__R2__tmp_copy_11;
#line 751 "diet.m"
                            mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 751 "diet.m"
                            mercury__diet__R1_8 = mercury__diet__R1__tmp_copy_8;
#line 751 "diet.m"
                            mercury__diet__HeadVar__1_1 = mercury__diet__HeadVar__1__tmp_copy_1;
#line 751 "diet.m"
                          }
#line 751 "diet.m"
                          continue;
#line 747 "diet.m"
                        }
#line 737 "diet.m"
                  else
#line 754 "diet.m"
                    *mercury__diet__IsSubset_12 = (MR_Integer) 0;
#line 726 "diet.m"
              }
#line 725 "diet.m"
          }
#line 713 "diet.m"
      }
#line 713 "diet.m"
      break;
#line 713 "diet.m"
    }
#line 710 "diet.m"
}

#line 584 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(
#line 584 "diet.m"
  MR_Word mercury__diet__T0_4,
#line 584 "diet.m"
  MR_Tuple * mercury__diet__X_5,
#line 584 "diet.m"
  MR_Word * mercury__diet__T_6)
#line 584 "diet.m"
{
#line 589 "diet.m"
  while (MR_TRUE)
#line 589 "diet.m"
    {
#line 589 "diet.m"
      /* tailcall optimized into a loop */
#line 589 "diet.m"
      {
#line 589 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 589 "diet.m"
        MR_Word mercury__diet__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 3)));
#line 589 "diet.m"
        MR_Word mercury__diet__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 2)));
#line 589 "diet.m"
        MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 0)));
#line 588 "diet.m"
        MR_Integer mercury__diet__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 1)));

#line 589 "diet.m"
        if ((mercury__diet__V_23_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 588 "diet.m"
          {
#line 588 "diet.m"
            *mercury__diet__X_5 = mercury__diet__V_25_25;
#line 588 "diet.m"
            *mercury__diet__T_6 = mercury__diet__V_22_22;
#line 588 "diet.m"
          }
#line 589 "diet.m"
        else
#line 590 "diet.m"
          {
#line 590 "diet.m"
            MR_Tuple mercury__diet__A_10 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__V_23_23, (MR_Integer) 0)));
#line 590 "diet.m"
            MR_Word mercury__diet__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__V_23_23, (MR_Integer) 2)));
#line 590 "diet.m"
            MR_Word mercury__diet__M_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__V_23_23, (MR_Integer) 3)));
#line 590 "diet.m"
            MR_Word mercury__diet__N0_15;
#line 590 "diet.m"
            MR_Word mercury__diet__N1_16;
#line 590 "diet.m"
            MR_Integer mercury__diet__V_18_18;
#line 590 "diet.m"
            MR_Integer mercury__diet__V_19_19;
#line 590 "diet.m"
            MR_Integer mercury__diet__V_29_29;
#line 590 "diet.m"
            MR_Integer mercury__diet__V_30_30;
#line 590 "diet.m"
            MR_Integer mercury__diet__V_31_31;
#line 590 "diet.m"
            MR_Integer mercury__diet__V_49_49;
#line 590 "diet.m"
            MR_Integer mercury__diet__V_50_50;
#line 590 "diet.m"
            MR_Integer mercury__diet__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__V_23_23, (MR_Integer) 1)));

#line 445 "diet.m"
            if ((mercury__diet__M_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
              mercury__diet__V_30_30 = (MR_Integer) 0;
#line 445 "diet.m"
            else
#line 446 "diet.m"
              {
#line 446 "diet.m"
                MR_Tuple mercury__diet__V_32_32 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__M_13, (MR_Integer) 0)));
#line 446 "diet.m"
                MR_Word mercury__diet__V_34_34;
#line 446 "diet.m"
                MR_Word mercury__diet__V_35_35;

#line 446 "diet.m"
                mercury__diet__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__M_13, (MR_Integer) 1)));
#line 446 "diet.m"
                mercury__diet__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__M_13, (MR_Integer) 2)));
#line 446 "diet.m"
                mercury__diet__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__M_13, (MR_Integer) 3)));
#line 446 "diet.m"
              }
#line 445 "diet.m"
            if ((mercury__diet__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
              mercury__diet__V_31_31 = (MR_Integer) 0;
#line 445 "diet.m"
            else
#line 446 "diet.m"
              {
#line 446 "diet.m"
                MR_Tuple mercury__diet__V_36_36 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__V_22_22, (MR_Integer) 0)));
#line 446 "diet.m"
                MR_Word mercury__diet__V_38_38;
#line 446 "diet.m"
                MR_Word mercury__diet__V_39_39;

#line 446 "diet.m"
                mercury__diet__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__V_22_22, (MR_Integer) 1)));
#line 446 "diet.m"
                mercury__diet__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__V_22_22, (MR_Integer) 2)));
#line 446 "diet.m"
                mercury__diet__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__V_22_22, (MR_Integer) 3)));
#line 446 "diet.m"
              }
#line 75 "int.opt"
            mercury__diet__succeeded = (mercury__diet__V_30_30 > mercury__diet__V_31_31);
#line 78 "int.opt"
            if (mercury__diet__succeeded)
#line 77 "int.opt"
              mercury__diet__V_29_29 = mercury__diet__V_30_30;
#line 78 "int.opt"
            else
#line 79 "int.opt"
              mercury__diet__V_29_29 = mercury__diet__V_31_31;
#line 450 "diet.m"
            mercury__diet__V_18_18 = ((MR_Integer) 1 + mercury__diet__V_29_29);
#line 591 "diet.m"
            {
#line 591 "diet.m"
              mercury__diet__N0_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 591 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N0_15, 0) = ((MR_Box) (mercury__diet__V_25_25));
#line 591 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N0_15, 1) = ((MR_Box) (mercury__diet__V_18_18));
#line 591 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N0_15, 2) = ((MR_Box) (mercury__diet__M_13));
#line 591 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N0_15, 3) = ((MR_Box) (mercury__diet__V_22_22));
#line 591 "diet.m"
            }
#line 445 "diet.m"
            if ((mercury__diet__L_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
              mercury__diet__V_50_50 = (MR_Integer) 0;
#line 445 "diet.m"
            else
#line 446 "diet.m"
              {
#line 446 "diet.m"
                MR_Tuple mercury__diet__V_52_52 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_12, (MR_Integer) 0)));
#line 446 "diet.m"
                MR_Word mercury__diet__V_54_54;
#line 446 "diet.m"
                MR_Word mercury__diet__V_55_55;

#line 446 "diet.m"
                mercury__diet__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_12, (MR_Integer) 1)));
#line 446 "diet.m"
                mercury__diet__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_12, (MR_Integer) 2)));
#line 446 "diet.m"
                mercury__diet__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_12, (MR_Integer) 3)));
#line 446 "diet.m"
              }
#line 75 "int.opt"
            mercury__diet__succeeded = (mercury__diet__V_50_50 > mercury__diet__V_18_18);
#line 78 "int.opt"
            if (mercury__diet__succeeded)
#line 77 "int.opt"
              mercury__diet__V_49_49 = mercury__diet__V_50_50;
#line 78 "int.opt"
            else
#line 79 "int.opt"
              mercury__diet__V_49_49 = mercury__diet__V_18_18;
#line 450 "diet.m"
            mercury__diet__V_19_19 = ((MR_Integer) 1 + mercury__diet__V_49_49);
#line 592 "diet.m"
            {
#line 592 "diet.m"
              mercury__diet__N1_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 592 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N1_16, 0) = ((MR_Box) (mercury__diet__A_10));
#line 592 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N1_16, 1) = ((MR_Box) (mercury__diet__V_19_19));
#line 592 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N1_16, 2) = ((MR_Box) (mercury__diet__L_12));
#line 592 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__N1_16, 3) = ((MR_Box) (mercury__diet__N0_15));
#line 592 "diet.m"
            }
#line 593 "diet.m"
            /* direct tailcall eliminated */
#line 593 "diet.m"
            {
#line 593 "diet.m"
              MR_Word mercury__diet__T0__tmp_copy_4 = mercury__diet__N1_16;

#line 593 "diet.m"
              mercury__diet__T0_4 = mercury__diet__T0__tmp_copy_4;
#line 593 "diet.m"
            }
#line 593 "diet.m"
            continue;
#line 590 "diet.m"
          }
#line 589 "diet.m"
      }
#line 589 "diet.m"
      break;
#line 589 "diet.m"
    }
#line 584 "diet.m"
}

#line 563 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_114_111_111_116_95_95_91_49_93_95_48_2_f_0(
#line 563 "diet.m"
  MR_Word mercury__diet__L_4,
#line 563 "diet.m"
  MR_Word mercury__diet__R_5)
#line 563 "diet.m"
{
#line 575 "diet.m"
  {
#line 575 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 575 "diet.m"
    MR_Word mercury__diet__T_6;
#line 566 "diet.m"
    MR_Integer mercury__diet__V_18_18;
#line 566 "diet.m"
    MR_Integer mercury__diet__V_19_19;

#line 445 "diet.m"
    if ((mercury__diet__L_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
      mercury__diet__V_18_18 = (MR_Integer) 0;
#line 445 "diet.m"
    else
#line 446 "diet.m"
      {
#line 446 "diet.m"
        MR_Tuple mercury__diet__V_26_26 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_4, (MR_Integer) 0)));
#line 446 "diet.m"
        MR_Word mercury__diet__V_28_28;
#line 446 "diet.m"
        MR_Word mercury__diet__V_29_29;

#line 446 "diet.m"
        mercury__diet__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_4, (MR_Integer) 1)));
#line 446 "diet.m"
        mercury__diet__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_4, (MR_Integer) 2)));
#line 446 "diet.m"
        mercury__diet__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_4, (MR_Integer) 3)));
#line 446 "diet.m"
      }
#line 445 "diet.m"
    if ((mercury__diet__R_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
      mercury__diet__V_19_19 = (MR_Integer) 0;
#line 445 "diet.m"
    else
#line 446 "diet.m"
      {
#line 446 "diet.m"
        MR_Tuple mercury__diet__V_30_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__R_5, (MR_Integer) 0)));
#line 446 "diet.m"
        MR_Word mercury__diet__V_32_32;
#line 446 "diet.m"
        MR_Word mercury__diet__V_33_33;

#line 446 "diet.m"
        mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__R_5, (MR_Integer) 1)));
#line 446 "diet.m"
        mercury__diet__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_5, (MR_Integer) 2)));
#line 446 "diet.m"
        mercury__diet__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_5, (MR_Integer) 3)));
#line 446 "diet.m"
      }
#line 566 "diet.m"
    mercury__diet__succeeded = (mercury__diet__V_18_18 > mercury__diet__V_19_19);
#line 575 "diet.m"
    if (mercury__diet__succeeded)
#line 570 "diet.m"
      if ((mercury__diet__L_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 568 "diet.m"
        {
#line 569 "diet.m"
          {
#line 569 "diet.m"
            mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.reroot\'/2", (MR_String) "L empty");
          }
#line 568 "diet.m"
        }
#line 570 "diet.m"
      else
#line 571 "diet.m"
        {
#line 571 "diet.m"
          MR_Tuple mercury__diet__I_11;
#line 571 "diet.m"
          MR_Word mercury__diet__L1_12;

#line 572 "diet.m"
          {
#line 572 "diet.m"
            mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_97_120_95_95_91_49_93_95_48_3_p_0(mercury__diet__L_4, &mercury__diet__I_11, &mercury__diet__L1_12);
          }
#line 573 "diet.m"
          {
#line 573 "diet.m"
            return mercury__diet__T_6 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__I_11, mercury__diet__L1_12, mercury__diet__R_5);
          }
#line 571 "diet.m"
        }
#line 575 "diet.m"
    else
#line 578 "diet.m"
      if ((mercury__diet__R_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 577 "diet.m"
        mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 578 "diet.m"
      else
#line 579 "diet.m"
        {
#line 579 "diet.m"
          MR_Word mercury__diet__R1_17;
#line 579 "diet.m"
          MR_Tuple mercury__diet__I_23;

#line 580 "diet.m"
          {
#line 580 "diet.m"
            mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_95_91_49_93_95_48_3_p_0(mercury__diet__R_5, &mercury__diet__I_23, &mercury__diet__R1_17);
          }
#line 581 "diet.m"
          {
#line 581 "diet.m"
            return mercury__diet__T_6 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__I_23, mercury__diet__L_4, mercury__diet__R1_17);
          }
#line 579 "diet.m"
        }
#line 575 "diet.m"
    return mercury__diet__T_6;
#line 575 "diet.m"
  }
#line 563 "diet.m"
}

#line 552 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_97_120_95_95_91_49_93_95_48_3_p_0(
#line 552 "diet.m"
  MR_Word mercury__diet__T0_4,
#line 552 "diet.m"
  MR_Tuple * mercury__diet__X_5,
#line 552 "diet.m"
  MR_Word * mercury__diet__T_6)
#line 552 "diet.m"
{
#line 557 "diet.m"
  {
#line 557 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 557 "diet.m"
    MR_Word mercury__diet__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 3)));
#line 557 "diet.m"
    MR_Word mercury__diet__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 2)));
#line 557 "diet.m"
    MR_Tuple mercury__diet__V_23_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 0)));
#line 556 "diet.m"
    MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 1)));

#line 557 "diet.m"
    if ((mercury__diet__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 556 "diet.m"
      {
#line 556 "diet.m"
        *mercury__diet__X_5 = mercury__diet__V_23_23;
#line 556 "diet.m"
        *mercury__diet__T_6 = mercury__diet__V_21_21;
#line 556 "diet.m"
      }
#line 557 "diet.m"
    else
#line 558 "diet.m"
      {
#line 558 "diet.m"
        MR_Word mercury__diet__R1_16;

#line 559 "diet.m"
        {
#line 559 "diet.m"
          mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_97_120_95_95_91_49_93_95_48_3_p_0(mercury__diet__V_20_20, mercury__diet__X_5, &mercury__diet__R1_16);
        }
#line 560 "diet.m"
        {
#line 560 "diet.m"
          *mercury__diet__T_6 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_23_23, mercury__diet__V_21_21, mercury__diet__R1_16);
        }
#line 558 "diet.m"
      }
#line 557 "diet.m"
  }
#line 552 "diet.m"
}

#line 541 "diet.m"
static void MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_95_91_49_93_95_48_3_p_0(
#line 541 "diet.m"
  MR_Word mercury__diet__T0_4,
#line 541 "diet.m"
  MR_Tuple * mercury__diet__X_5,
#line 541 "diet.m"
  MR_Word * mercury__diet__T_6)
#line 541 "diet.m"
{
#line 546 "diet.m"
  {
#line 546 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 546 "diet.m"
    MR_Word mercury__diet__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 3)));
#line 546 "diet.m"
    MR_Word mercury__diet__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 2)));
#line 546 "diet.m"
    MR_Tuple mercury__diet__V_23_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 0)));
#line 545 "diet.m"
    MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_4, (MR_Integer) 1)));

#line 546 "diet.m"
    if ((mercury__diet__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 545 "diet.m"
      {
#line 545 "diet.m"
        *mercury__diet__X_5 = mercury__diet__V_23_23;
#line 545 "diet.m"
        *mercury__diet__T_6 = mercury__diet__V_20_20;
#line 545 "diet.m"
      }
#line 546 "diet.m"
    else
#line 547 "diet.m"
      {
#line 547 "diet.m"
        MR_Word mercury__diet__L1_16;

#line 548 "diet.m"
        {
#line 548 "diet.m"
          mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_95_91_49_93_95_48_3_p_0(mercury__diet__V_21_21, mercury__diet__X_5, &mercury__diet__L1_16);
        }
#line 549 "diet.m"
        {
#line 549 "diet.m"
          *mercury__diet__T_6 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_23_23, mercury__diet__L1_16, mercury__diet__V_20_20);
        }
#line 547 "diet.m"
      }
#line 546 "diet.m"
  }
#line 541 "diet.m"
}

#line 524 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(
#line 524 "diet.m"
  MR_Word mercury__diet__IsLeft_5,
#line 524 "diet.m"
  MR_Tuple mercury__diet__X_6,
#line 524 "diet.m"
  MR_Word mercury__diet__T0_7)
#line 524 "diet.m"
{
#line 530 "diet.m"
  {
#line 530 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 530 "diet.m"
    MR_Word mercury__diet__T_8;

#line 530 "diet.m"
    if ((mercury__diet__T0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 528 "diet.m"
      {
#line 528 "diet.m"
        MR_Word mercury__diet__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 528 "diet.m"
        MR_Word mercury__diet__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 529 "diet.m"
        {
#line 529 "diet.m"
          mercury__diet__T_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 529 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_8, 0) = ((MR_Box) (mercury__diet__X_6));
#line 529 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_8, 1) = ((MR_Box) ((MR_Integer) 1));
#line 529 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_8, 2) = ((MR_Box) (mercury__diet__V_16_16));
#line 529 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_8, 3) = ((MR_Box) (mercury__diet__V_17_17));
#line 529 "diet.m"
        }
#line 528 "diet.m"
      }
#line 530 "diet.m"
    else
#line 531 "diet.m"
      {
#line 531 "diet.m"
        MR_Tuple mercury__diet__VX_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_7, (MR_Integer) 0)));
#line 531 "diet.m"
        MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_7, (MR_Integer) 2)));
#line 531 "diet.m"
        MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_7, (MR_Integer) 3)));
#line 531 "diet.m"
        MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_7, (MR_Integer) 1)));

#line 535 "diet.m"
        if ((mercury__diet__IsLeft_5 == (MR_Integer) 0))
#line 536 "diet.m"
          {
#line 536 "diet.m"
            MR_Word mercury__diet__V_13_13;

#line 537 "diet.m"
            {
#line 537 "diet.m"
              mercury__diet__V_13_13 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(mercury__diet__IsLeft_5, mercury__diet__X_6, mercury__diet__R_12);
            }
#line 537 "diet.m"
            {
#line 537 "diet.m"
              return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__VX_9, mercury__diet__L_11, mercury__diet__V_13_13);
            }
#line 536 "diet.m"
          }
#line 535 "diet.m"
        else
#line 533 "diet.m"
          {
#line 533 "diet.m"
            MR_Word mercury__diet__V_14_14;

#line 534 "diet.m"
            {
#line 534 "diet.m"
              mercury__diet__V_14_14 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0(mercury__diet__IsLeft_5, mercury__diet__X_6, mercury__diet__L_11);
            }
#line 534 "diet.m"
            {
#line 534 "diet.m"
              return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__VX_9, mercury__diet__V_14_14, mercury__diet__R_12);
            }
#line 533 "diet.m"
          }
#line 531 "diet.m"
      }
#line 530 "diet.m"
    return mercury__diet__T_8;
#line 530 "diet.m"
  }
#line 524 "diet.m"
}

#line 502 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(
#line 502 "diet.m"
  MR_Tuple mercury__diet__V_5,
#line 502 "diet.m"
  MR_Word mercury__diet__L_6,
#line 502 "diet.m"
  MR_Word mercury__diet__R_7)
#line 502 "diet.m"
{
#line 508 "diet.m"
  {
#line 508 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 508 "diet.m"
    MR_Word mercury__diet__T_8;

#line 508 "diet.m"
    if ((mercury__diet__L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 506 "diet.m"
      {
#line 507 "diet.m"
        {
#line 507 "diet.m"
          return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0((MR_Integer) 1, mercury__diet__V_5, mercury__diet__R_7);
        }
#line 506 "diet.m"
      }
#line 508 "diet.m"
    else
#line 508 "diet.m"
      {
#line 508 "diet.m"
        MR_Word mercury__diet__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 3)));
#line 508 "diet.m"
        MR_Word mercury__diet__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 2)));
#line 508 "diet.m"
        MR_Integer mercury__diet__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 1)));
#line 508 "diet.m"
        MR_Tuple mercury__diet__V_33_33 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 0)));

#line 508 "diet.m"
        if ((mercury__diet__R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 509 "diet.m"
          {
#line 511 "diet.m"
            {
#line 511 "diet.m"
              return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_121_97_100_100_95_95_91_49_93_95_48_3_f_0((MR_Integer) 0, mercury__diet__V_5, mercury__diet__L_6);
            }
#line 509 "diet.m"
          }
#line 508 "diet.m"
        else
#line 513 "diet.m"
          {
#line 513 "diet.m"
            MR_Tuple mercury__diet__RX_17 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 0)));
#line 513 "diet.m"
            MR_Integer mercury__diet__RH_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 1)));
#line 513 "diet.m"
            MR_Word mercury__diet__RL_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 2)));
#line 513 "diet.m"
            MR_Word mercury__diet__RR_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 3)));
#line 515 "diet.m"
            MR_Integer mercury__diet__V_21_21 = (mercury__diet__RH_18 + (MR_Integer) 1);

#line 515 "diet.m"
            mercury__diet__succeeded = (mercury__diet__V_32_32 > mercury__diet__V_21_21);
#line 517 "diet.m"
            if (mercury__diet__succeeded)
#line 516 "diet.m"
              {
#line 516 "diet.m"
                MR_Word mercury__diet__V_23_23;

#line 516 "diet.m"
                {
#line 516 "diet.m"
                  mercury__diet__V_23_23 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_5, mercury__diet__V_30_30, mercury__diet__R_7);
                }
#line 516 "diet.m"
                {
#line 516 "diet.m"
                  return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_33_33, mercury__diet__V_31_31, mercury__diet__V_23_23);
                }
#line 516 "diet.m"
              }
#line 517 "diet.m"
            else
#line 519 "diet.m"
              {
#line 517 "diet.m"
                MR_Integer mercury__diet__V_24_24 = (mercury__diet__V_32_32 + (MR_Integer) 1);

#line 517 "diet.m"
                mercury__diet__succeeded = (mercury__diet__RH_18 > mercury__diet__V_24_24);
#line 519 "diet.m"
                if (mercury__diet__succeeded)
#line 518 "diet.m"
                  {
#line 518 "diet.m"
                    MR_Word mercury__diet__V_26_26;

#line 518 "diet.m"
                    {
#line 518 "diet.m"
                      mercury__diet__V_26_26 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_5, mercury__diet__L_6, mercury__diet__RL_19);
                    }
#line 518 "diet.m"
                    {
#line 518 "diet.m"
                      return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__RX_17, mercury__diet__V_26_26, mercury__diet__RR_20);
                    }
#line 518 "diet.m"
                  }
#line 519 "diet.m"
                else
#line 520 "diet.m"
                  {
#line 520 "diet.m"
                    return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_5, mercury__diet__L_6, mercury__diet__R_7);
                  }
#line 519 "diet.m"
              }
#line 513 "diet.m"
          }
#line 508 "diet.m"
      }
#line 508 "diet.m"
    return mercury__diet__T_8;
#line 508 "diet.m"
  }
#line 502 "diet.m"
}

#line 456 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_3_f_0(
#line 456 "diet.m"
  MR_Tuple mercury__diet__X_5,
#line 456 "diet.m"
  MR_Word mercury__diet__L_6,
#line 456 "diet.m"
  MR_Word mercury__diet__R_7)
#line 456 "diet.m"
{
#line 458 "diet.m"
  {
#line 458 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 458 "diet.m"
    MR_Word mercury__diet__T_8;
#line 458 "diet.m"
    MR_Integer mercury__diet__HL_9;
#line 458 "diet.m"
    MR_Integer mercury__diet__HR_10;
#line 461 "diet.m"
    MR_Integer mercury__diet__V_28_28;

#line 445 "diet.m"
    if ((mercury__diet__L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
      mercury__diet__HL_9 = (MR_Integer) 0;
#line 445 "diet.m"
    else
#line 446 "diet.m"
      {
#line 446 "diet.m"
        MR_Tuple mercury__diet__V_57_57 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 0)));
#line 446 "diet.m"
        MR_Word mercury__diet__V_59_59;
#line 446 "diet.m"
        MR_Word mercury__diet__V_60_60;

#line 446 "diet.m"
        mercury__diet__HL_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 1)));
#line 446 "diet.m"
        mercury__diet__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 2)));
#line 446 "diet.m"
        mercury__diet__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 3)));
#line 446 "diet.m"
      }
#line 445 "diet.m"
    if ((mercury__diet__R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
      mercury__diet__HR_10 = (MR_Integer) 0;
#line 445 "diet.m"
    else
#line 446 "diet.m"
      {
#line 446 "diet.m"
        MR_Tuple mercury__diet__V_61_61 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 0)));
#line 446 "diet.m"
        MR_Word mercury__diet__V_63_63;
#line 446 "diet.m"
        MR_Word mercury__diet__V_64_64;

#line 446 "diet.m"
        mercury__diet__HR_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 1)));
#line 446 "diet.m"
        mercury__diet__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 2)));
#line 446 "diet.m"
        mercury__diet__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 3)));
#line 446 "diet.m"
      }
#line 461 "diet.m"
    mercury__diet__V_28_28 = (mercury__diet__HR_10 + (MR_Integer) 1);
#line 461 "diet.m"
    mercury__diet__succeeded = (mercury__diet__HL_9 > mercury__diet__V_28_28);
#line 479 "diet.m"
    if (mercury__diet__succeeded)
#line 465 "diet.m"
      if ((mercury__diet__L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 463 "diet.m"
        {
#line 464 "diet.m"
          {
#line 464 "diet.m"
            mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.balance\'/3", (MR_String) "L empty");
          }
#line 463 "diet.m"
        }
#line 465 "diet.m"
      else
#line 466 "diet.m"
        {
#line 466 "diet.m"
          MR_Tuple mercury__diet__LVX_11 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 0)));
#line 466 "diet.m"
          MR_Word mercury__diet__LL_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 2)));
#line 466 "diet.m"
          MR_Word mercury__diet__LR_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 3)));
#line 466 "diet.m"
          MR_Integer mercury__diet__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 1)));
#line 467 "diet.m"
          MR_Integer mercury__diet__V_30_30;
#line 467 "diet.m"
          MR_Integer mercury__diet__V_31_31;

#line 445 "diet.m"
          if ((mercury__diet__LL_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
            mercury__diet__V_30_30 = (MR_Integer) 0;
#line 445 "diet.m"
          else
#line 446 "diet.m"
            {
#line 446 "diet.m"
              MR_Tuple mercury__diet__V_65_65 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__LL_13, (MR_Integer) 0)));
#line 446 "diet.m"
              MR_Word mercury__diet__V_67_67;
#line 446 "diet.m"
              MR_Word mercury__diet__V_68_68;

#line 446 "diet.m"
              mercury__diet__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__LL_13, (MR_Integer) 1)));
#line 446 "diet.m"
              mercury__diet__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LL_13, (MR_Integer) 2)));
#line 446 "diet.m"
              mercury__diet__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LL_13, (MR_Integer) 3)));
#line 446 "diet.m"
            }
#line 445 "diet.m"
          if ((mercury__diet__LR_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
            mercury__diet__V_31_31 = (MR_Integer) 0;
#line 445 "diet.m"
          else
#line 446 "diet.m"
            {
#line 446 "diet.m"
              MR_Tuple mercury__diet__V_69_69 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 0)));
#line 446 "diet.m"
              MR_Word mercury__diet__V_71_71;
#line 446 "diet.m"
              MR_Word mercury__diet__V_72_72;

#line 446 "diet.m"
              mercury__diet__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 1)));
#line 446 "diet.m"
              mercury__diet__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 2)));
#line 446 "diet.m"
              mercury__diet__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 3)));
#line 446 "diet.m"
            }
#line 467 "diet.m"
          mercury__diet__succeeded = (mercury__diet__V_30_30 >= mercury__diet__V_31_31);
#line 469 "diet.m"
          if (mercury__diet__succeeded)
#line 468 "diet.m"
            {
#line 468 "diet.m"
              MR_Word mercury__diet__V_32_32;

#line 468 "diet.m"
              {
#line 468 "diet.m"
                mercury__diet__V_32_32 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__X_5, mercury__diet__LR_14, mercury__diet__R_7);
              }
#line 468 "diet.m"
              {
#line 468 "diet.m"
                return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__LVX_11, mercury__diet__LL_13, mercury__diet__V_32_32);
              }
#line 468 "diet.m"
            }
#line 469 "diet.m"
          else
#line 473 "diet.m"
            if ((mercury__diet__LR_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 471 "diet.m"
              {
#line 472 "diet.m"
                {
#line 472 "diet.m"
                  mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.balance\'/3", (MR_String) "LR empty");
                }
#line 471 "diet.m"
              }
#line 473 "diet.m"
            else
#line 474 "diet.m"
              {
#line 474 "diet.m"
                MR_Tuple mercury__diet__LRX_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 0)));
#line 474 "diet.m"
                MR_Word mercury__diet__LRL_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 2)));
#line 474 "diet.m"
                MR_Word mercury__diet__LRR_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 3)));
#line 474 "diet.m"
                MR_Word mercury__diet__V_33_33;
#line 474 "diet.m"
                MR_Word mercury__diet__V_34_34;
#line 474 "diet.m"
                MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__LR_14, (MR_Integer) 1)));

#line 475 "diet.m"
                {
#line 475 "diet.m"
                  mercury__diet__V_33_33 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__LVX_11, mercury__diet__LL_13, mercury__diet__LRL_17);
                }
#line 475 "diet.m"
                {
#line 475 "diet.m"
                  mercury__diet__V_34_34 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__X_5, mercury__diet__LRR_18, mercury__diet__R_7);
                }
#line 475 "diet.m"
                {
#line 475 "diet.m"
                  return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__LRX_15, mercury__diet__V_33_33, mercury__diet__V_34_34);
                }
#line 474 "diet.m"
              }
#line 466 "diet.m"
        }
#line 479 "diet.m"
    else
#line 497 "diet.m"
      {
#line 479 "diet.m"
        MR_Integer mercury__diet__V_41_41 = (mercury__diet__HL_9 + (MR_Integer) 1);

#line 479 "diet.m"
        mercury__diet__succeeded = (mercury__diet__HR_10 > mercury__diet__V_41_41);
#line 497 "diet.m"
        if (mercury__diet__succeeded)
#line 483 "diet.m"
          if ((mercury__diet__R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 481 "diet.m"
            {
#line 482 "diet.m"
              {
#line 482 "diet.m"
                mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.balance\'/3", (MR_String) "R empty");
              }
#line 481 "diet.m"
            }
#line 483 "diet.m"
          else
#line 484 "diet.m"
            {
#line 484 "diet.m"
              MR_Tuple mercury__diet__RVX_19 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 0)));
#line 484 "diet.m"
              MR_Word mercury__diet__RL_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 2)));
#line 484 "diet.m"
              MR_Word mercury__diet__RR_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 3)));
#line 484 "diet.m"
              MR_Integer mercury__diet__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 1)));
#line 485 "diet.m"
              MR_Integer mercury__diet__V_43_43;
#line 485 "diet.m"
              MR_Integer mercury__diet__V_44_44;

#line 445 "diet.m"
              if ((mercury__diet__RR_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
                mercury__diet__V_43_43 = (MR_Integer) 0;
#line 445 "diet.m"
              else
#line 446 "diet.m"
                {
#line 446 "diet.m"
                  MR_Tuple mercury__diet__V_73_73 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__RR_22, (MR_Integer) 0)));
#line 446 "diet.m"
                  MR_Word mercury__diet__V_75_75;
#line 446 "diet.m"
                  MR_Word mercury__diet__V_76_76;

#line 446 "diet.m"
                  mercury__diet__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__RR_22, (MR_Integer) 1)));
#line 446 "diet.m"
                  mercury__diet__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RR_22, (MR_Integer) 2)));
#line 446 "diet.m"
                  mercury__diet__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RR_22, (MR_Integer) 3)));
#line 446 "diet.m"
                }
#line 445 "diet.m"
              if ((mercury__diet__RL_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
                mercury__diet__V_44_44 = (MR_Integer) 0;
#line 445 "diet.m"
              else
#line 446 "diet.m"
                {
#line 446 "diet.m"
                  MR_Tuple mercury__diet__V_77_77 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 0)));
#line 446 "diet.m"
                  MR_Word mercury__diet__V_79_79;
#line 446 "diet.m"
                  MR_Word mercury__diet__V_80_80;

#line 446 "diet.m"
                  mercury__diet__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 1)));
#line 446 "diet.m"
                  mercury__diet__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 2)));
#line 446 "diet.m"
                  mercury__diet__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 3)));
#line 446 "diet.m"
                }
#line 485 "diet.m"
              mercury__diet__succeeded = (mercury__diet__V_43_43 >= mercury__diet__V_44_44);
#line 487 "diet.m"
              if (mercury__diet__succeeded)
#line 486 "diet.m"
                {
#line 486 "diet.m"
                  MR_Word mercury__diet__V_45_45;

#line 486 "diet.m"
                  {
#line 486 "diet.m"
                    mercury__diet__V_45_45 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__X_5, mercury__diet__L_6, mercury__diet__RL_21);
                  }
#line 486 "diet.m"
                  {
#line 486 "diet.m"
                    return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__RVX_19, mercury__diet__V_45_45, mercury__diet__RR_22);
                  }
#line 486 "diet.m"
                }
#line 487 "diet.m"
              else
#line 491 "diet.m"
                if ((mercury__diet__RL_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 489 "diet.m"
                  {
#line 490 "diet.m"
                    {
#line 490 "diet.m"
                      mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.balance\'/3", (MR_String) "RL empty");
                    }
#line 489 "diet.m"
                  }
#line 491 "diet.m"
                else
#line 492 "diet.m"
                  {
#line 492 "diet.m"
                    MR_Tuple mercury__diet__RLX_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 0)));
#line 492 "diet.m"
                    MR_Word mercury__diet__RLL_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 2)));
#line 492 "diet.m"
                    MR_Word mercury__diet__RLR_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 3)));
#line 492 "diet.m"
                    MR_Word mercury__diet__V_46_46;
#line 492 "diet.m"
                    MR_Word mercury__diet__V_47_47;
#line 492 "diet.m"
                    MR_Integer mercury__diet__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__RL_21, (MR_Integer) 1)));

#line 493 "diet.m"
                    {
#line 493 "diet.m"
                      mercury__diet__V_46_46 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__X_5, mercury__diet__L_6, mercury__diet__RLL_25);
                    }
#line 493 "diet.m"
                    {
#line 493 "diet.m"
                      mercury__diet__V_47_47 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__RVX_19, mercury__diet__RLR_26, mercury__diet__RR_22);
                    }
#line 493 "diet.m"
                    {
#line 493 "diet.m"
                      return mercury__diet__T_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(mercury__diet__RLX_23, mercury__diet__V_46_46, mercury__diet__V_47_47);
                    }
#line 492 "diet.m"
                  }
#line 484 "diet.m"
            }
#line 497 "diet.m"
        else
#line 498 "diet.m"
          {
#line 498 "diet.m"
            MR_Integer mercury__diet__HT_27;

#line 498 "diet.m"
            mercury__diet__succeeded = (mercury__diet__HL_9 >= mercury__diet__HR_10);
#line 498 "diet.m"
            if (mercury__diet__succeeded)
#line 498 "diet.m"
              {
#line 498 "diet.m"
                mercury__diet__HT_27 = (mercury__diet__HL_9 + (MR_Integer) 1);
#line 498 "diet.m"
              }
#line 498 "diet.m"
            else
#line 498 "diet.m"
              {
#line 498 "diet.m"
                mercury__diet__HT_27 = (mercury__diet__HR_10 + (MR_Integer) 1);
#line 498 "diet.m"
              }
#line 499 "diet.m"
            {
#line 499 "diet.m"
              mercury__diet__T_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 499 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__T_8, 0) = ((MR_Box) (mercury__diet__X_5));
#line 499 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__T_8, 1) = ((MR_Box) (mercury__diet__HT_27));
#line 499 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__T_8, 2) = ((MR_Box) (mercury__diet__L_6));
#line 499 "diet.m"
              MR_hl_field(MR_mktag(1), mercury__diet__T_8, 3) = ((MR_Box) (mercury__diet__R_7));
#line 499 "diet.m"
            }
#line 498 "diet.m"
          }
#line 497 "diet.m"
      }
#line 458 "diet.m"
    return mercury__diet__T_8;
#line 458 "diet.m"
  }
#line 456 "diet.m"
}

#line 452 "diet.m"
static MR_Word MR_CALL 
mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_99_114_101_97_116_101_95_95_91_49_93_95_48_3_f_0(
#line 452 "diet.m"
  MR_Tuple mercury__diet__X_5,
#line 452 "diet.m"
  MR_Word mercury__diet__L_6,
#line 452 "diet.m"
  MR_Word mercury__diet__R_7)
#line 452 "diet.m"
{
#line 454 "diet.m"
  {
#line 454 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 454 "diet.m"
    MR_Word mercury__diet__HeadVar__4_4;
#line 454 "diet.m"
    MR_Integer mercury__diet__V_8_8;
#line 454 "diet.m"
    MR_Integer mercury__diet__V_13_13;
#line 454 "diet.m"
    MR_Integer mercury__diet__V_14_14;
#line 454 "diet.m"
    MR_Integer mercury__diet__V_15_15;

#line 445 "diet.m"
    if ((mercury__diet__L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
      mercury__diet__V_14_14 = (MR_Integer) 0;
#line 445 "diet.m"
    else
#line 446 "diet.m"
      {
#line 446 "diet.m"
        MR_Tuple mercury__diet__V_16_16 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 0)));
#line 446 "diet.m"
        MR_Word mercury__diet__V_18_18;
#line 446 "diet.m"
        MR_Word mercury__diet__V_19_19;

#line 446 "diet.m"
        mercury__diet__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 1)));
#line 446 "diet.m"
        mercury__diet__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 2)));
#line 446 "diet.m"
        mercury__diet__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__L_6, (MR_Integer) 3)));
#line 446 "diet.m"
      }
#line 445 "diet.m"
    if ((mercury__diet__R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
      mercury__diet__V_15_15 = (MR_Integer) 0;
#line 445 "diet.m"
    else
#line 446 "diet.m"
      {
#line 446 "diet.m"
        MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 0)));
#line 446 "diet.m"
        MR_Word mercury__diet__V_22_22;
#line 446 "diet.m"
        MR_Word mercury__diet__V_23_23;

#line 446 "diet.m"
        mercury__diet__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 1)));
#line 446 "diet.m"
        mercury__diet__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 2)));
#line 446 "diet.m"
        mercury__diet__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__R_7, (MR_Integer) 3)));
#line 446 "diet.m"
      }
#line 75 "int.opt"
    mercury__diet__succeeded = (mercury__diet__V_14_14 > mercury__diet__V_15_15);
#line 78 "int.opt"
    if (mercury__diet__succeeded)
#line 77 "int.opt"
      mercury__diet__V_13_13 = mercury__diet__V_14_14;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__diet__V_13_13 = mercury__diet__V_15_15;
#line 450 "diet.m"
    mercury__diet__V_8_8 = ((MR_Integer) 1 + mercury__diet__V_13_13);
#line 454 "diet.m"
    {
#line 454 "diet.m"
      mercury__diet__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 454 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__4_4, 0) = ((MR_Box) (mercury__diet__X_5));
#line 454 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__4_4, 1) = ((MR_Box) (mercury__diet__V_8_8));
#line 454 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__4_4, 2) = ((MR_Box) (mercury__diet__L_6));
#line 454 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__4_4, 3) = ((MR_Box) (mercury__diet__R_7));
#line 454 "diet.m"
    }
#line 454 "diet.m"
    return mercury__diet__HeadVar__4_4;
#line 454 "diet.m"
  }
#line 452 "diet.m"
}

#line 416 "diet.m"
void MR_CALL 
mercury__diet____Compare____interval_0_0(
#line 416 "diet.m"
  MR_Word * mercury__diet__HeadVar__1_1,
#line 416 "diet.m"
  MR_Tuple mercury__diet__HeadVar__2_2,
#line 416 "diet.m"
  MR_Tuple mercury__diet__HeadVar__3_3)
#line 416 "diet.m"
{
#line 416 "diet.m"
  {
#line 416 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 416 "diet.m"
    MR_Word mercury__diet__TypeInfo_6_6 = (MR_Word) &mercury__diet_scalar_common_2[0];
#line 416 "diet.m"
    MR_Tuple mercury__diet__Cast_HeadVar1_4 = mercury__diet__HeadVar__2_2;
#line 416 "diet.m"
    MR_Tuple mercury__diet__Cast_HeadVar2_5 = mercury__diet__HeadVar__3_3;

#line 416 "diet.m"
    {
#line 416 "diet.m"
      mercury__builtin__compare_3_p_0(mercury__diet__TypeInfo_6_6, mercury__diet__HeadVar__1_1, ((MR_Box) (mercury__diet__Cast_HeadVar1_4)), ((MR_Box) (mercury__diet__Cast_HeadVar2_5)));
#line 416 "diet.m"
      return;
    }
#line 416 "diet.m"
  }
#line 416 "diet.m"
}

#line 416 "diet.m"
MR_bool MR_CALL 
mercury__diet____Unify____interval_0_0(
#line 416 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 416 "diet.m"
  MR_Tuple mercury__diet__HeadVar__2_2)
#line 416 "diet.m"
{
#line 416 "diet.m"
  {
#line 416 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 416 "diet.m"
    MR_Word mercury__diet__TypeInfo_5_5 = (MR_Word) &mercury__diet_scalar_common_2[0];
#line 416 "diet.m"
    MR_Tuple mercury__diet__Cast_HeadVar1_3 = mercury__diet__HeadVar__1_1;
#line 416 "diet.m"
    MR_Tuple mercury__diet__Cast_HeadVar2_4 = mercury__diet__HeadVar__2_2;

#line 416 "diet.m"
    {
#line 416 "diet.m"
      return mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_5_5, ((MR_Box) (mercury__diet__Cast_HeadVar1_3)), ((MR_Box) (mercury__diet__Cast_HeadVar2_4)));
    }
#line 416 "diet.m"
    return mercury__diet__succeeded;
#line 416 "diet.m"
  }
#line 416 "diet.m"
}

#line 403 "diet.m"
void MR_CALL 
mercury__diet____Compare____diet_1_0(
#line 403 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_25,
#line 403 "diet.m"
  MR_Word * mercury__diet__HeadVar__1_1,
#line 403 "diet.m"
  MR_Word mercury__diet__HeadVar__2_2,
#line 403 "diet.m"
  MR_Word mercury__diet__HeadVar__3_3)
#line 403 "diet.m"
{
#line 403 "diet.m"
  while (MR_TRUE)
#line 403 "diet.m"
    {
#line 403 "diet.m"
      /* tailcall optimized into a loop */
#line 403 "diet.m"
      {
#line 403 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 403 "diet.m"
        MR_Integer mercury__diet__CastX_23 = (MR_Integer) mercury__diet__HeadVar__2_2;
#line 403 "diet.m"
        MR_Integer mercury__diet__CastY_24 = (MR_Integer) mercury__diet__HeadVar__3_3;

#line 403 "diet.m"
        mercury__diet__succeeded = (mercury__diet__CastX_23 == mercury__diet__CastY_24);
#line 403 "diet.m"
        if (mercury__diet__succeeded)
#line 4247 "diet.c"
          *mercury__diet__HeadVar__1_1 = (MR_Integer) 0;
#line 403 "diet.m"
        else
#line 403 "diet.m"
          if ((mercury__diet__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "diet.m"
            if ((mercury__diet__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "diet.m"
              *mercury__diet__HeadVar__1_1 = (MR_Integer) 0;
#line 403 "diet.m"
            else
#line 4259 "diet.c"
              *mercury__diet__HeadVar__1_1 = (MR_Integer) 1;
#line 403 "diet.m"
          else
#line 403 "diet.m"
            {
#line 403 "diet.m"
              MR_Word mercury__diet__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 3)));
#line 403 "diet.m"
              MR_Word mercury__diet__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 2)));
#line 403 "diet.m"
              MR_Integer mercury__diet__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 403 "diet.m"
              MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));

#line 403 "diet.m"
              if ((mercury__diet__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4276 "diet.c"
                *mercury__diet__HeadVar__1_1 = (MR_Integer) 2;
#line 403 "diet.m"
              else
#line 403 "diet.m"
                {
#line 403 "diet.m"
                  MR_Tuple mercury__diet__V_16_16 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__3_3, (MR_Integer) 0)));
#line 403 "diet.m"
                  MR_Integer mercury__diet__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__3_3, (MR_Integer) 1)));
#line 403 "diet.m"
                  MR_Word mercury__diet__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__3_3, (MR_Integer) 2)));
#line 403 "diet.m"
                  MR_Word mercury__diet__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__3_3, (MR_Integer) 3)));
#line 403 "diet.m"
                  MR_Word mercury__diet__V_20_20;
#line 403 "diet.m"
                  MR_Word mercury__diet__TypeInfo_26_26 = (MR_Word) &mercury__diet_scalar_common_2[0];

#line 403 "diet.m"
                  {
#line 403 "diet.m"
                    mercury__builtin__compare_3_p_0(mercury__diet__TypeInfo_26_26, &mercury__diet__V_20_20, ((MR_Box) (mercury__diet__V_35_35)), ((MR_Box) (mercury__diet__V_16_16)));
                  }
#line 4300 "diet.c"
                  mercury__diet__succeeded = (mercury__diet__V_20_20 == (MR_Integer) 0);
#line 403 "diet.m"
                  mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 403 "diet.m"
                  if (mercury__diet__succeeded)
#line 403 "diet.m"
                    *mercury__diet__HeadVar__1_1 = mercury__diet__V_20_20;
#line 403 "diet.m"
                  else
#line 403 "diet.m"
                    {
#line 403 "diet.m"
                      MR_Word mercury__diet__V_21_21;

#line 66 "private_builtin.opt"
                      mercury__diet__succeeded = (mercury__diet__V_34_34 < mercury__diet__V_17_17);
#line 69 "private_builtin.opt"
                      if (mercury__diet__succeeded)
#line 68 "private_builtin.opt"
                        mercury__diet__V_21_21 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                      else
#line 74 "private_builtin.opt"
                        {
#line 71 "private_builtin.opt"
                          mercury__diet__succeeded = (mercury__diet__V_34_34 == mercury__diet__V_17_17);
#line 74 "private_builtin.opt"
                          if (mercury__diet__succeeded)
#line 73 "private_builtin.opt"
                            mercury__diet__V_21_21 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                          else
#line 75 "private_builtin.opt"
                            mercury__diet__V_21_21 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                        }
#line 4337 "diet.c"
                      mercury__diet__succeeded = (mercury__diet__V_21_21 == (MR_Integer) 0);
#line 403 "diet.m"
                      mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 403 "diet.m"
                      if (mercury__diet__succeeded)
#line 403 "diet.m"
                        *mercury__diet__HeadVar__1_1 = mercury__diet__V_21_21;
#line 403 "diet.m"
                      else
#line 403 "diet.m"
                        {
#line 403 "diet.m"
                          MR_Word mercury__diet__V_22_22;

#line 403 "diet.m"
                          {
#line 403 "diet.m"
                            mercury__diet____Compare____diet_1_0(mercury__diet__TypeInfo_for_T_25, &mercury__diet__V_22_22, mercury__diet__V_33_33, mercury__diet__V_18_18);
                          }
#line 4357 "diet.c"
                          mercury__diet__succeeded = (mercury__diet__V_22_22 == (MR_Integer) 0);
#line 403 "diet.m"
                          mercury__diet__succeeded = !(mercury__diet__succeeded);
#line 403 "diet.m"
                          if (mercury__diet__succeeded)
#line 403 "diet.m"
                            *mercury__diet__HeadVar__1_1 = mercury__diet__V_22_22;
#line 403 "diet.m"
                          else
#line 403 "diet.m"
                            {
#line 403 "diet.m"
                              /* direct tailcall eliminated */
#line 403 "diet.m"
                              {
#line 403 "diet.m"
                                MR_Word mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__V_32_32;
#line 403 "diet.m"
                                MR_Word mercury__diet__HeadVar__3__tmp_copy_3 = mercury__diet__V_19_19;

#line 403 "diet.m"
                                mercury__diet__HeadVar__3_3 = mercury__diet__HeadVar__3__tmp_copy_3;
#line 403 "diet.m"
                                mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 403 "diet.m"
                              }
#line 403 "diet.m"
                              continue;
#line 403 "diet.m"
                            }
#line 403 "diet.m"
                        }
#line 403 "diet.m"
                    }
#line 403 "diet.m"
                }
#line 403 "diet.m"
            }
#line 403 "diet.m"
      }
#line 403 "diet.m"
      break;
#line 403 "diet.m"
    }
#line 403 "diet.m"
}

#line 403 "diet.m"
MR_bool MR_CALL 
mercury__diet____Unify____diet_1_0(
#line 403 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_15,
#line 403 "diet.m"
  MR_Word mercury__diet__HeadVar__1_1,
#line 403 "diet.m"
  MR_Word mercury__diet__HeadVar__2_2)
#line 403 "diet.m"
{
#line 403 "diet.m"
  while (MR_TRUE)
#line 403 "diet.m"
    {
#line 403 "diet.m"
      /* tailcall optimized into a loop */
#line 403 "diet.m"
      {
#line 403 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 403 "diet.m"
        MR_Integer mercury__diet__CastX_13 = (MR_Integer) mercury__diet__HeadVar__1_1;
#line 403 "diet.m"
        MR_Integer mercury__diet__CastY_14 = (MR_Integer) mercury__diet__HeadVar__2_2;

#line 403 "diet.m"
        mercury__diet__succeeded = (mercury__diet__CastX_13 == mercury__diet__CastY_14);
#line 403 "diet.m"
        if (mercury__diet__succeeded)
#line 403 "diet.m"
          mercury__diet__succeeded = MR_TRUE;
#line 403 "diet.m"
        else
#line 403 "diet.m"
          if ((mercury__diet__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "diet.m"
            {
#line 403 "diet.m"
              MR_Integer mercury__diet__CastX_3 = (MR_Integer) mercury__diet__HeadVar__1_1;
#line 403 "diet.m"
              MR_Integer mercury__diet__CastY_4 = (MR_Integer) mercury__diet__HeadVar__2_2;

#line 403 "diet.m"
              mercury__diet__succeeded = (mercury__diet__CastY_4 == mercury__diet__CastX_3);
#line 403 "diet.m"
            }
#line 403 "diet.m"
          else
#line 403 "diet.m"
            {
#line 403 "diet.m"
              MR_Word mercury__diet__TypeInfo_16_16;
#line 403 "diet.m"
              MR_Tuple mercury__diet__V_5_5 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 0)));
#line 403 "diet.m"
              MR_Integer mercury__diet__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 1)));
#line 403 "diet.m"
              MR_Word mercury__diet__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 2)));
#line 403 "diet.m"
              MR_Word mercury__diet__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 3)));
#line 403 "diet.m"
              MR_Tuple mercury__diet__V_9_9;
#line 403 "diet.m"
              MR_Integer mercury__diet__V_10_10;
#line 403 "diet.m"
              MR_Word mercury__diet__V_11_11;
#line 403 "diet.m"
              MR_Word mercury__diet__V_12_12;

#line 403 "diet.m"
              mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 403 "diet.m"
              if (mercury__diet__succeeded)
#line 403 "diet.m"
                {
#line 403 "diet.m"
                  mercury__diet__V_9_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
#line 403 "diet.m"
                  mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 403 "diet.m"
                  mercury__diet__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 2)));
#line 403 "diet.m"
                  mercury__diet__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 3)));
#line 4489 "diet.c"
                  mercury__diet__TypeInfo_16_16 = (MR_Word) &mercury__diet_scalar_common_2[0];
#line 4491 "diet.c"
                  {
#line 4493 "diet.c"
                    mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_16_16, ((MR_Box) (mercury__diet__V_5_5)), ((MR_Box) (mercury__diet__V_9_9)));
                  }
#line 403 "diet.m"
                  if (mercury__diet__succeeded)
#line 403 "diet.m"
                    {
#line 4500 "diet.c"
                      mercury__diet__succeeded = (mercury__diet__V_6_6 == mercury__diet__V_10_10);
#line 403 "diet.m"
                      if (mercury__diet__succeeded)
#line 403 "diet.m"
                        {
#line 4506 "diet.c"
                          {
#line 4508 "diet.c"
                            mercury__diet__succeeded = mercury__diet____Unify____diet_1_0(mercury__diet__TypeInfo_for_T_15, mercury__diet__V_7_7, mercury__diet__V_11_11);
                          }
#line 403 "diet.m"
                          if (mercury__diet__succeeded)
#line 4513 "diet.c"
                            {
#line 4515 "diet.c"
                              /* direct tailcall eliminated */
#line 4517 "diet.c"
                              {
#line 4519 "diet.c"
                                MR_Word mercury__diet__HeadVar__1__tmp_copy_1 = mercury__diet__V_8_8;
#line 4521 "diet.c"
                                MR_Word mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__V_12_12;

#line 4524 "diet.c"
                                mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 4526 "diet.c"
                                mercury__diet__HeadVar__1_1 = mercury__diet__HeadVar__1__tmp_copy_1;
#line 4528 "diet.c"
                              }
#line 4530 "diet.c"
                              continue;
#line 4532 "diet.c"
                            }
#line 403 "diet.m"
                        }
#line 403 "diet.m"
                    }
#line 403 "diet.m"
                }
#line 403 "diet.m"
            }
#line 403 "diet.m"
        return mercury__diet__succeeded;
#line 403 "diet.m"
      }
#line 403 "diet.m"
      break;
#line 403 "diet.m"
    }
#line 403 "diet.m"
}

#line 1732 "diet.m"
void MR_CALL 
mercury__diet__cons_interval_4_p_0(
#line 1732 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_9,
#line 1732 "diet.m"
  MR_Box mercury__diet__X_5,
#line 1732 "diet.m"
  MR_Box mercury__diet__Y_6,
#line 1732 "diet.m"
  MR_Word mercury__diet__L_7,
#line 1732 "diet.m"
  MR_Word * mercury__diet__HeadVar__4_4)
#line 1732 "diet.m"
{
#line 1735 "diet.m"
  {
#line 1735 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1735 "diet.m"
    MR_Tuple mercury__diet__V_8_8;

#line 1735 "diet.m"
    {
#line 1735 "diet.m"
      mercury__diet__V_8_8 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1735 "diet.m"
      MR_hl_field(MR_mktag(0), mercury__diet__V_8_8, 0) = mercury__diet__X_5;
#line 1735 "diet.m"
      MR_hl_field(MR_mktag(0), mercury__diet__V_8_8, 1) = mercury__diet__Y_6;
#line 1735 "diet.m"
    }
#line 1735 "diet.m"
    {
#line 1735 "diet.m"
      MR_Word base;
#line 1735 "diet.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1735 "diet.m"
      *mercury__diet__HeadVar__4_4 = base;
#line 1735 "diet.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_8_8));
#line 1735 "diet.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__L_7));
#line 1735 "diet.m"
    }
#line 1735 "diet.m"
  }
#line 1732 "diet.m"
}

#line 1684 "diet.m"
MR_bool MR_CALL 
mercury__diet__all_true_interval_3_p_0(
#line 1684 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_10,
#line 1684 "diet.m"
  MR_Word mercury__diet__P_4,
#line 1684 "diet.m"
  MR_Integer mercury__diet__Lo_5,
#line 1684 "diet.m"
  MR_Integer mercury__diet__Hi_6)
#line 1684 "diet.m"
{
#line 1691 "diet.m"
  while (MR_TRUE)
#line 1691 "diet.m"
    {
#line 1691 "diet.m"
      /* tailcall optimized into a loop */
#line 1691 "diet.m"
      {
#line 1691 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_5 <= mercury__diet__Hi_6);

#line 1691 "diet.m"
        if (mercury__diet__succeeded)
#line 1689 "diet.m"
          {
#line 1689 "diet.m"
            MR_Box mercury__diet__V_7_7;
#line 1689 "diet.m"
            MR_Integer mercury__diet__V_8_8;
#line 1689 "diet.m"
            MR_Integer mercury__diet__V_9_9;
#line 1689 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box);

#line 1689 "diet.m"
            {
#line 1689 "diet.m"
              mercury__diet__V_7_7 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_10, mercury__diet__Lo_5);
            }
#line 1689 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__diet__P_4, (MR_Integer) 1)));
#line 1689 "diet.m"
            {
#line 1689 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_4), mercury__diet__V_7_7);
            }
#line 1689 "diet.m"
            if (mercury__diet__succeeded)
#line 1689 "diet.m"
              {
#line 1690 "diet.m"
                mercury__diet__V_9_9 = (MR_Integer) 1;
#line 1690 "diet.m"
                mercury__diet__V_8_8 = (mercury__diet__Lo_5 + mercury__diet__V_9_9);
#line 1690 "diet.m"
                /* direct tailcall eliminated */
#line 1690 "diet.m"
                {
#line 1690 "diet.m"
                  MR_Integer mercury__diet__Lo__tmp_copy_5 = mercury__diet__V_8_8;

#line 1690 "diet.m"
                  mercury__diet__Lo_5 = mercury__diet__Lo__tmp_copy_5;
#line 1690 "diet.m"
                }
#line 1690 "diet.m"
                continue;
#line 1689 "diet.m"
              }
#line 1689 "diet.m"
          }
#line 1691 "diet.m"
        else
#line 1692 "diet.m"
          mercury__diet__succeeded = MR_TRUE;
#line 1691 "diet.m"
        return mercury__diet__succeeded;
#line 1691 "diet.m"
      }
#line 1691 "diet.m"
      break;
#line 1691 "diet.m"
    }
#line 1684 "diet.m"
}

#line 1662 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_down_5_p_5(
#line 1662 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_18,
#line 1662 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_17,
#line 1662 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1662 "diet.m"
  MR_Integer mercury__diet__Lo_7,
#line 1662 "diet.m"
  MR_Integer mercury__diet__Hi_8,
#line 1662 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
#line 1662 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
#line 1662 "diet.m"
{
#line 1668 "diet.m"
  while (MR_TRUE)
#line 1668 "diet.m"
    {
#line 1668 "diet.m"
      /* tailcall optimized into a loop */
#line 1668 "diet.m"
      {
#line 1668 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_7 <= mercury__diet__Hi_8);

#line 1668 "diet.m"
        if (mercury__diet__succeeded)
#line 1666 "diet.m"
          {
#line 1666 "diet.m"
            MR_Box mercury__diet__V_12_12;
#line 1666 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_13_13;
#line 1666 "diet.m"
            MR_Integer mercury__diet__V_14_14;
#line 1666 "diet.m"
            MR_Integer mercury__diet__V_16_16;
#line 1666 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1666 "diet.m"
            {
#line 1666 "diet.m"
              mercury__diet__V_12_12 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_17, mercury__diet__Hi_8);
            }
#line 1666 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 1666 "diet.m"
            {
#line 1666 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_6), mercury__diet__V_12_12, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_13_13);
            }
#line 1666 "diet.m"
            if (mercury__diet__succeeded)
#line 1666 "diet.m"
              {
#line 1667 "diet.m"
                mercury__diet__V_16_16 = (MR_Integer) 1;
#line 1667 "diet.m"
                mercury__diet__V_14_14 = (mercury__diet__Hi_8 - mercury__diet__V_16_16);
#line 1667 "diet.m"
                /* direct tailcall eliminated */
#line 1667 "diet.m"
                {
#line 1667 "diet.m"
                  MR_Integer mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_14_14;
#line 1667 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_13_13;

#line 1667 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1667 "diet.m"
                  mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1667 "diet.m"
                }
#line 1667 "diet.m"
                continue;
#line 1666 "diet.m"
              }
#line 1666 "diet.m"
          }
#line 1668 "diet.m"
        else
#line 1668 "diet.m"
          {
#line 1668 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1668 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1668 "diet.m"
          }
#line 1668 "diet.m"
        return mercury__diet__succeeded;
#line 1668 "diet.m"
      }
#line 1668 "diet.m"
      break;
#line 1668 "diet.m"
    }
#line 1662 "diet.m"
}

#line 1661 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_down_5_p_4(
#line 1661 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_18,
#line 1661 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_17,
#line 1661 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1661 "diet.m"
  MR_Integer mercury__diet__Lo_7,
#line 1661 "diet.m"
  MR_Integer mercury__diet__Hi_8,
#line 1661 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
#line 1661 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
#line 1661 "diet.m"
{
#line 1668 "diet.m"
  while (MR_TRUE)
#line 1668 "diet.m"
    {
#line 1668 "diet.m"
      /* tailcall optimized into a loop */
#line 1668 "diet.m"
      {
#line 1668 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_7 <= mercury__diet__Hi_8);

#line 1668 "diet.m"
        if (mercury__diet__succeeded)
#line 1666 "diet.m"
          {
#line 1666 "diet.m"
            MR_Box mercury__diet__V_12_12;
#line 1666 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_13_13;
#line 1666 "diet.m"
            MR_Integer mercury__diet__V_14_14;
#line 1666 "diet.m"
            MR_Integer mercury__diet__V_16_16;
#line 1666 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1666 "diet.m"
            {
#line 1666 "diet.m"
              mercury__diet__V_12_12 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_17, mercury__diet__Hi_8);
            }
#line 1666 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 1666 "diet.m"
            {
#line 1666 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_6), mercury__diet__V_12_12, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_13_13);
            }
#line 1666 "diet.m"
            if (mercury__diet__succeeded)
#line 1666 "diet.m"
              {
#line 1667 "diet.m"
                mercury__diet__V_16_16 = (MR_Integer) 1;
#line 1667 "diet.m"
                mercury__diet__V_14_14 = (mercury__diet__Hi_8 - mercury__diet__V_16_16);
#line 1667 "diet.m"
                /* direct tailcall eliminated */
#line 1667 "diet.m"
                {
#line 1667 "diet.m"
                  MR_Integer mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_14_14;
#line 1667 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_13_13;

#line 1667 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1667 "diet.m"
                  mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1667 "diet.m"
                }
#line 1667 "diet.m"
                continue;
#line 1666 "diet.m"
              }
#line 1666 "diet.m"
          }
#line 1668 "diet.m"
        else
#line 1668 "diet.m"
          {
#line 1668 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1668 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1668 "diet.m"
          }
#line 1668 "diet.m"
        return mercury__diet__succeeded;
#line 1668 "diet.m"
      }
#line 1668 "diet.m"
      break;
#line 1668 "diet.m"
    }
#line 1661 "diet.m"
}

#line 1660 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_down_5_p_3(
#line 1660 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_18,
#line 1660 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_17,
#line 1660 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1660 "diet.m"
  MR_Integer mercury__diet__Lo_7,
#line 1660 "diet.m"
  MR_Integer mercury__diet__Hi_8,
#line 1660 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
#line 1660 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
#line 1660 "diet.m"
{
#line 1668 "diet.m"
  while (MR_TRUE)
#line 1668 "diet.m"
    {
#line 1668 "diet.m"
      /* tailcall optimized into a loop */
#line 1668 "diet.m"
      {
#line 1668 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_7 <= mercury__diet__Hi_8);

#line 1668 "diet.m"
        if (mercury__diet__succeeded)
#line 1666 "diet.m"
          {
#line 1666 "diet.m"
            MR_Box mercury__diet__V_12_12;
#line 1666 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_13_13;
#line 1666 "diet.m"
            MR_Integer mercury__diet__V_14_14;
#line 1666 "diet.m"
            MR_Integer mercury__diet__V_16_16;
#line 1666 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1666 "diet.m"
            {
#line 1666 "diet.m"
              mercury__diet__V_12_12 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_17, mercury__diet__Hi_8);
            }
#line 1666 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 1666 "diet.m"
            {
#line 1666 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_6), mercury__diet__V_12_12, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_13_13);
            }
#line 1666 "diet.m"
            if (mercury__diet__succeeded)
#line 1666 "diet.m"
              {
#line 1667 "diet.m"
                mercury__diet__V_16_16 = (MR_Integer) 1;
#line 1667 "diet.m"
                mercury__diet__V_14_14 = (mercury__diet__Hi_8 - mercury__diet__V_16_16);
#line 1667 "diet.m"
                /* direct tailcall eliminated */
#line 1667 "diet.m"
                {
#line 1667 "diet.m"
                  MR_Integer mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_14_14;
#line 1667 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_13_13;

#line 1667 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1667 "diet.m"
                  mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1667 "diet.m"
                }
#line 1667 "diet.m"
                continue;
#line 1666 "diet.m"
              }
#line 1666 "diet.m"
          }
#line 1668 "diet.m"
        else
#line 1668 "diet.m"
          {
#line 1668 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1668 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1668 "diet.m"
          }
#line 1668 "diet.m"
        return mercury__diet__succeeded;
#line 1668 "diet.m"
      }
#line 1668 "diet.m"
      break;
#line 1668 "diet.m"
    }
#line 1660 "diet.m"
}

#line 1659 "diet.m"
void MR_CALL 
mercury__diet__fold_down_5_p_2(
#line 1659 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_18,
#line 1659 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_17,
#line 1659 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1659 "diet.m"
  MR_Integer mercury__diet__Lo_7,
#line 1659 "diet.m"
  MR_Integer mercury__diet__Hi_8,
#line 1659 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
#line 1659 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
#line 1659 "diet.m"
{
#line 1668 "diet.m"
  while (MR_TRUE)
#line 1668 "diet.m"
    {
#line 1668 "diet.m"
      /* tailcall optimized into a loop */
#line 1668 "diet.m"
      {
#line 1668 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_7 <= mercury__diet__Hi_8);

#line 1668 "diet.m"
        if (mercury__diet__succeeded)
#line 1666 "diet.m"
          {
#line 1666 "diet.m"
            MR_Box mercury__diet__V_12_12;
#line 1666 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_13_13;
#line 1666 "diet.m"
            MR_Integer mercury__diet__V_14_14;
#line 1666 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1666 "diet.m"
            {
#line 1666 "diet.m"
              mercury__diet__V_12_12 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_17, mercury__diet__Hi_8);
            }
#line 1666 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 1666 "diet.m"
            {
#line 1666 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_6), mercury__diet__V_12_12, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_13_13);
            }
#line 1667 "diet.m"
            mercury__diet__V_14_14 = (mercury__diet__Hi_8 - (MR_Integer) 1);
#line 1667 "diet.m"
            /* direct tailcall eliminated */
#line 1667 "diet.m"
            {
#line 1667 "diet.m"
              MR_Integer mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_14_14;
#line 1667 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_13_13;

#line 1667 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1667 "diet.m"
              mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1667 "diet.m"
            }
#line 1667 "diet.m"
            continue;
#line 1666 "diet.m"
          }
#line 1668 "diet.m"
        else
#line 1668 "diet.m"
          *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1668 "diet.m"
      }
#line 1668 "diet.m"
      break;
#line 1668 "diet.m"
    }
#line 1659 "diet.m"
}

#line 1658 "diet.m"
void MR_CALL 
mercury__diet__fold_down_5_p_1(
#line 1658 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_18,
#line 1658 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_17,
#line 1658 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1658 "diet.m"
  MR_Integer mercury__diet__Lo_7,
#line 1658 "diet.m"
  MR_Integer mercury__diet__Hi_8,
#line 1658 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
#line 1658 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
#line 1658 "diet.m"
{
#line 1668 "diet.m"
  while (MR_TRUE)
#line 1668 "diet.m"
    {
#line 1668 "diet.m"
      /* tailcall optimized into a loop */
#line 1668 "diet.m"
      {
#line 1668 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_7 <= mercury__diet__Hi_8);

#line 1668 "diet.m"
        if (mercury__diet__succeeded)
#line 1666 "diet.m"
          {
#line 1666 "diet.m"
            MR_Box mercury__diet__V_12_12;
#line 1666 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_13_13;
#line 1666 "diet.m"
            MR_Integer mercury__diet__V_14_14;
#line 1666 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1666 "diet.m"
            {
#line 1666 "diet.m"
              mercury__diet__V_12_12 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_17, mercury__diet__Hi_8);
            }
#line 1666 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 1666 "diet.m"
            {
#line 1666 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_6), mercury__diet__V_12_12, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_13_13);
            }
#line 1667 "diet.m"
            mercury__diet__V_14_14 = (mercury__diet__Hi_8 - (MR_Integer) 1);
#line 1667 "diet.m"
            /* direct tailcall eliminated */
#line 1667 "diet.m"
            {
#line 1667 "diet.m"
              MR_Integer mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_14_14;
#line 1667 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_13_13;

#line 1667 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1667 "diet.m"
              mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1667 "diet.m"
            }
#line 1667 "diet.m"
            continue;
#line 1666 "diet.m"
          }
#line 1668 "diet.m"
        else
#line 1668 "diet.m"
          *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1668 "diet.m"
      }
#line 1668 "diet.m"
      break;
#line 1668 "diet.m"
    }
#line 1658 "diet.m"
}

#line 1657 "diet.m"
void MR_CALL 
mercury__diet__fold_down_5_p_0(
#line 1657 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_18,
#line 1657 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_17,
#line 1657 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1657 "diet.m"
  MR_Integer mercury__diet__Lo_7,
#line 1657 "diet.m"
  MR_Integer mercury__diet__Hi_8,
#line 1657 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_10,
#line 1657 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_11)
#line 1657 "diet.m"
{
#line 1668 "diet.m"
  while (MR_TRUE)
#line 1668 "diet.m"
    {
#line 1668 "diet.m"
      /* tailcall optimized into a loop */
#line 1668 "diet.m"
      {
#line 1668 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_7 <= mercury__diet__Hi_8);

#line 1668 "diet.m"
        if (mercury__diet__succeeded)
#line 1666 "diet.m"
          {
#line 1666 "diet.m"
            MR_Box mercury__diet__V_12_12;
#line 1666 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_13_13;
#line 1666 "diet.m"
            MR_Integer mercury__diet__V_14_14;
#line 1666 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1666 "diet.m"
            {
#line 1666 "diet.m"
              mercury__diet__V_12_12 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_17, mercury__diet__Hi_8);
            }
#line 1666 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 1666 "diet.m"
            {
#line 1666 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_6), mercury__diet__V_12_12, mercury__diet__STATE_VARIABLE_A_0_10, &mercury__diet__STATE_VARIABLE_A_13_13);
            }
#line 1667 "diet.m"
            mercury__diet__V_14_14 = (mercury__diet__Hi_8 - (MR_Integer) 1);
#line 1667 "diet.m"
            /* direct tailcall eliminated */
#line 1667 "diet.m"
            {
#line 1667 "diet.m"
              MR_Integer mercury__diet__Hi__tmp_copy_8 = mercury__diet__V_14_14;
#line 1667 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_A_13_13;

#line 1667 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_10 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_10;
#line 1667 "diet.m"
              mercury__diet__Hi_8 = mercury__diet__Hi__tmp_copy_8;
#line 1667 "diet.m"
            }
#line 1667 "diet.m"
            continue;
#line 1666 "diet.m"
          }
#line 1668 "diet.m"
        else
#line 1668 "diet.m"
          *mercury__diet__STATE_VARIABLE_A_11 = mercury__diet__STATE_VARIABLE_A_0_10;
#line 1668 "diet.m"
      }
#line 1668 "diet.m"
      break;
#line 1668 "diet.m"
    }
#line 1657 "diet.m"
}

#line 1626 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up5_13_p_5(
#line 1626 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_46,
#line 1626 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_47,
#line 1626 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_48,
#line 1626 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_49,
#line 1626 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_50,
#line 1626 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_45,
#line 1626 "diet.m"
  MR_Word mercury__diet__P_14,
#line 1626 "diet.m"
  MR_Integer mercury__diet__Lo_15,
#line 1626 "diet.m"
  MR_Integer mercury__diet__Hi_16,
#line 1626 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 1626 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 1626 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 1626 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 1626 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 1626 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 1626 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 1626 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
#line 1626 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
#line 1626 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
#line 1626 "diet.m"
{
#line 1634 "diet.m"
  while (MR_TRUE)
#line 1634 "diet.m"
    {
#line 1634 "diet.m"
      /* tailcall optimized into a loop */
#line 1634 "diet.m"
      {
#line 1634 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_15 <= mercury__diet__Hi_16);

#line 1634 "diet.m"
        if (mercury__diet__succeeded)
#line 1632 "diet.m"
          {
#line 1632 "diet.m"
            MR_Box mercury__diet__V_32_32;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_33_33;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_34_34;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_35_35;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_36_36;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_37_37;
#line 1632 "diet.m"
            MR_Integer mercury__diet__V_38_38;
#line 1632 "diet.m"
            MR_Integer mercury__diet__V_44_44;
#line 1632 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1632 "diet.m"
            {
#line 1632 "diet.m"
              mercury__diet__V_32_32 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_45, mercury__diet__Lo_15);
            }
#line 1632 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
#line 1632 "diet.m"
            {
#line 1632 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_14), mercury__diet__V_32_32, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_33_33, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_34_34, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_35_35, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_36_36, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_37_37);
            }
#line 1632 "diet.m"
            if (mercury__diet__succeeded)
#line 1632 "diet.m"
              {
#line 1633 "diet.m"
                mercury__diet__V_44_44 = (MR_Integer) 1;
#line 1633 "diet.m"
                mercury__diet__V_38_38 = (mercury__diet__Lo_15 + mercury__diet__V_44_44);
#line 1633 "diet.m"
                /* direct tailcall eliminated */
#line 1633 "diet.m"
                {
#line 1633 "diet.m"
                  MR_Integer mercury__diet__Lo__tmp_copy_15 = mercury__diet__V_38_38;
#line 1633 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_33_33;
#line 1633 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_34_34;
#line 1633 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_35_35;
#line 1633 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_36_36;
#line 1633 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30 = mercury__diet__STATE_VARIABLE_E_37_37;

#line 1633 "diet.m"
                  mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30;
#line 1633 "diet.m"
                  mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1633 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1633 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1633 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1633 "diet.m"
                  mercury__diet__Lo_15 = mercury__diet__Lo__tmp_copy_15;
#line 1633 "diet.m"
                }
#line 1633 "diet.m"
                continue;
#line 1632 "diet.m"
              }
#line 1632 "diet.m"
          }
#line 1634 "diet.m"
        else
#line 1635 "diet.m"
          {
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1635 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1635 "diet.m"
          }
#line 1634 "diet.m"
        return mercury__diet__succeeded;
#line 1634 "diet.m"
      }
#line 1634 "diet.m"
      break;
#line 1634 "diet.m"
    }
#line 1626 "diet.m"
}

#line 1623 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up5_13_p_4(
#line 1623 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_46,
#line 1623 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_47,
#line 1623 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_48,
#line 1623 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_49,
#line 1623 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_50,
#line 1623 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_45,
#line 1623 "diet.m"
  MR_Word mercury__diet__P_14,
#line 1623 "diet.m"
  MR_Integer mercury__diet__Lo_15,
#line 1623 "diet.m"
  MR_Integer mercury__diet__Hi_16,
#line 1623 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 1623 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 1623 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 1623 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 1623 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 1623 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 1623 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 1623 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
#line 1623 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
#line 1623 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
#line 1623 "diet.m"
{
#line 1634 "diet.m"
  while (MR_TRUE)
#line 1634 "diet.m"
    {
#line 1634 "diet.m"
      /* tailcall optimized into a loop */
#line 1634 "diet.m"
      {
#line 1634 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_15 <= mercury__diet__Hi_16);

#line 1634 "diet.m"
        if (mercury__diet__succeeded)
#line 1632 "diet.m"
          {
#line 1632 "diet.m"
            MR_Box mercury__diet__V_32_32;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_33_33;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_34_34;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_35_35;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_36_36;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_37_37;
#line 1632 "diet.m"
            MR_Integer mercury__diet__V_38_38;
#line 1632 "diet.m"
            MR_Integer mercury__diet__V_44_44;
#line 1632 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1632 "diet.m"
            {
#line 1632 "diet.m"
              mercury__diet__V_32_32 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_45, mercury__diet__Lo_15);
            }
#line 1632 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
#line 1632 "diet.m"
            {
#line 1632 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_14), mercury__diet__V_32_32, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_33_33, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_34_34, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_35_35, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_36_36, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_37_37);
            }
#line 1632 "diet.m"
            if (mercury__diet__succeeded)
#line 1632 "diet.m"
              {
#line 1633 "diet.m"
                mercury__diet__V_44_44 = (MR_Integer) 1;
#line 1633 "diet.m"
                mercury__diet__V_38_38 = (mercury__diet__Lo_15 + mercury__diet__V_44_44);
#line 1633 "diet.m"
                /* direct tailcall eliminated */
#line 1633 "diet.m"
                {
#line 1633 "diet.m"
                  MR_Integer mercury__diet__Lo__tmp_copy_15 = mercury__diet__V_38_38;
#line 1633 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_33_33;
#line 1633 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_34_34;
#line 1633 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_35_35;
#line 1633 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_36_36;
#line 1633 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30 = mercury__diet__STATE_VARIABLE_E_37_37;

#line 1633 "diet.m"
                  mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30;
#line 1633 "diet.m"
                  mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1633 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1633 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1633 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1633 "diet.m"
                  mercury__diet__Lo_15 = mercury__diet__Lo__tmp_copy_15;
#line 1633 "diet.m"
                }
#line 1633 "diet.m"
                continue;
#line 1632 "diet.m"
              }
#line 1632 "diet.m"
          }
#line 1634 "diet.m"
        else
#line 1635 "diet.m"
          {
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1635 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1635 "diet.m"
          }
#line 1634 "diet.m"
        return mercury__diet__succeeded;
#line 1634 "diet.m"
      }
#line 1634 "diet.m"
      break;
#line 1634 "diet.m"
    }
#line 1623 "diet.m"
}

#line 1620 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up5_13_p_3(
#line 1620 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_46,
#line 1620 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_47,
#line 1620 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_48,
#line 1620 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_49,
#line 1620 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_50,
#line 1620 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_45,
#line 1620 "diet.m"
  MR_Word mercury__diet__P_14,
#line 1620 "diet.m"
  MR_Integer mercury__diet__Lo_15,
#line 1620 "diet.m"
  MR_Integer mercury__diet__Hi_16,
#line 1620 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 1620 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 1620 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 1620 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 1620 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 1620 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 1620 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 1620 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
#line 1620 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
#line 1620 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
#line 1620 "diet.m"
{
#line 1634 "diet.m"
  while (MR_TRUE)
#line 1634 "diet.m"
    {
#line 1634 "diet.m"
      /* tailcall optimized into a loop */
#line 1634 "diet.m"
      {
#line 1634 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_15 <= mercury__diet__Hi_16);

#line 1634 "diet.m"
        if (mercury__diet__succeeded)
#line 1632 "diet.m"
          {
#line 1632 "diet.m"
            MR_Box mercury__diet__V_32_32;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_33_33;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_34_34;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_35_35;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_36_36;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_37_37;
#line 1632 "diet.m"
            MR_Integer mercury__diet__V_38_38;
#line 1632 "diet.m"
            MR_Integer mercury__diet__V_44_44;
#line 1632 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1632 "diet.m"
            {
#line 1632 "diet.m"
              mercury__diet__V_32_32 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_45, mercury__diet__Lo_15);
            }
#line 1632 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
#line 1632 "diet.m"
            {
#line 1632 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_14), mercury__diet__V_32_32, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_33_33, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_34_34, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_35_35, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_36_36, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_37_37);
            }
#line 1632 "diet.m"
            if (mercury__diet__succeeded)
#line 1632 "diet.m"
              {
#line 1633 "diet.m"
                mercury__diet__V_44_44 = (MR_Integer) 1;
#line 1633 "diet.m"
                mercury__diet__V_38_38 = (mercury__diet__Lo_15 + mercury__diet__V_44_44);
#line 1633 "diet.m"
                /* direct tailcall eliminated */
#line 1633 "diet.m"
                {
#line 1633 "diet.m"
                  MR_Integer mercury__diet__Lo__tmp_copy_15 = mercury__diet__V_38_38;
#line 1633 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_33_33;
#line 1633 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_34_34;
#line 1633 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_35_35;
#line 1633 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_36_36;
#line 1633 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30 = mercury__diet__STATE_VARIABLE_E_37_37;

#line 1633 "diet.m"
                  mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30;
#line 1633 "diet.m"
                  mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1633 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1633 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1633 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1633 "diet.m"
                  mercury__diet__Lo_15 = mercury__diet__Lo__tmp_copy_15;
#line 1633 "diet.m"
                }
#line 1633 "diet.m"
                continue;
#line 1632 "diet.m"
              }
#line 1632 "diet.m"
          }
#line 1634 "diet.m"
        else
#line 1635 "diet.m"
          {
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1635 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1635 "diet.m"
          }
#line 1634 "diet.m"
        return mercury__diet__succeeded;
#line 1634 "diet.m"
      }
#line 1634 "diet.m"
      break;
#line 1634 "diet.m"
    }
#line 1620 "diet.m"
}

#line 1617 "diet.m"
void MR_CALL 
mercury__diet__fold_up5_13_p_2(
#line 1617 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_46,
#line 1617 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_47,
#line 1617 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_48,
#line 1617 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_49,
#line 1617 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_50,
#line 1617 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_45,
#line 1617 "diet.m"
  MR_Word mercury__diet__P_14,
#line 1617 "diet.m"
  MR_Integer mercury__diet__Lo_15,
#line 1617 "diet.m"
  MR_Integer mercury__diet__Hi_16,
#line 1617 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 1617 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 1617 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 1617 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 1617 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 1617 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 1617 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 1617 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
#line 1617 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
#line 1617 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
#line 1617 "diet.m"
{
#line 1634 "diet.m"
  while (MR_TRUE)
#line 1634 "diet.m"
    {
#line 1634 "diet.m"
      /* tailcall optimized into a loop */
#line 1634 "diet.m"
      {
#line 1634 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_15 <= mercury__diet__Hi_16);

#line 1634 "diet.m"
        if (mercury__diet__succeeded)
#line 1632 "diet.m"
          {
#line 1632 "diet.m"
            MR_Box mercury__diet__V_32_32;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_33_33;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_34_34;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_35_35;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_36_36;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_37_37;
#line 1632 "diet.m"
            MR_Integer mercury__diet__V_38_38;
#line 1632 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1632 "diet.m"
            {
#line 1632 "diet.m"
              mercury__diet__V_32_32 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_45, mercury__diet__Lo_15);
            }
#line 1632 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
#line 1632 "diet.m"
            {
#line 1632 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_14), mercury__diet__V_32_32, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_33_33, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_34_34, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_35_35, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_36_36, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_37_37);
            }
#line 1633 "diet.m"
            mercury__diet__V_38_38 = (mercury__diet__Lo_15 + (MR_Integer) 1);
#line 1633 "diet.m"
            /* direct tailcall eliminated */
#line 1633 "diet.m"
            {
#line 1633 "diet.m"
              MR_Integer mercury__diet__Lo__tmp_copy_15 = mercury__diet__V_38_38;
#line 1633 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_33_33;
#line 1633 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_34_34;
#line 1633 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_35_35;
#line 1633 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_36_36;
#line 1633 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30 = mercury__diet__STATE_VARIABLE_E_37_37;

#line 1633 "diet.m"
              mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30;
#line 1633 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1633 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1633 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1633 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1633 "diet.m"
              mercury__diet__Lo_15 = mercury__diet__Lo__tmp_copy_15;
#line 1633 "diet.m"
            }
#line 1633 "diet.m"
            continue;
#line 1632 "diet.m"
          }
#line 1634 "diet.m"
        else
#line 1635 "diet.m"
          {
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1635 "diet.m"
          }
#line 1634 "diet.m"
      }
#line 1634 "diet.m"
      break;
#line 1634 "diet.m"
    }
#line 1617 "diet.m"
}

#line 1614 "diet.m"
void MR_CALL 
mercury__diet__fold_up5_13_p_1(
#line 1614 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_46,
#line 1614 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_47,
#line 1614 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_48,
#line 1614 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_49,
#line 1614 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_50,
#line 1614 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_45,
#line 1614 "diet.m"
  MR_Word mercury__diet__P_14,
#line 1614 "diet.m"
  MR_Integer mercury__diet__Lo_15,
#line 1614 "diet.m"
  MR_Integer mercury__diet__Hi_16,
#line 1614 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 1614 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 1614 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 1614 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 1614 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 1614 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 1614 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 1614 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
#line 1614 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
#line 1614 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
#line 1614 "diet.m"
{
#line 1634 "diet.m"
  while (MR_TRUE)
#line 1634 "diet.m"
    {
#line 1634 "diet.m"
      /* tailcall optimized into a loop */
#line 1634 "diet.m"
      {
#line 1634 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_15 <= mercury__diet__Hi_16);

#line 1634 "diet.m"
        if (mercury__diet__succeeded)
#line 1632 "diet.m"
          {
#line 1632 "diet.m"
            MR_Box mercury__diet__V_32_32;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_33_33;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_34_34;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_35_35;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_36_36;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_37_37;
#line 1632 "diet.m"
            MR_Integer mercury__diet__V_38_38;
#line 1632 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1632 "diet.m"
            {
#line 1632 "diet.m"
              mercury__diet__V_32_32 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_45, mercury__diet__Lo_15);
            }
#line 1632 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
#line 1632 "diet.m"
            {
#line 1632 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_14), mercury__diet__V_32_32, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_33_33, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_34_34, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_35_35, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_36_36, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_37_37);
            }
#line 1633 "diet.m"
            mercury__diet__V_38_38 = (mercury__diet__Lo_15 + (MR_Integer) 1);
#line 1633 "diet.m"
            /* direct tailcall eliminated */
#line 1633 "diet.m"
            {
#line 1633 "diet.m"
              MR_Integer mercury__diet__Lo__tmp_copy_15 = mercury__diet__V_38_38;
#line 1633 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_33_33;
#line 1633 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_34_34;
#line 1633 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_35_35;
#line 1633 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_36_36;
#line 1633 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30 = mercury__diet__STATE_VARIABLE_E_37_37;

#line 1633 "diet.m"
              mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30;
#line 1633 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1633 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1633 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1633 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1633 "diet.m"
              mercury__diet__Lo_15 = mercury__diet__Lo__tmp_copy_15;
#line 1633 "diet.m"
            }
#line 1633 "diet.m"
            continue;
#line 1632 "diet.m"
          }
#line 1634 "diet.m"
        else
#line 1635 "diet.m"
          {
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1635 "diet.m"
          }
#line 1634 "diet.m"
      }
#line 1634 "diet.m"
      break;
#line 1634 "diet.m"
    }
#line 1614 "diet.m"
}

#line 1611 "diet.m"
void MR_CALL 
mercury__diet__fold_up5_13_p_0(
#line 1611 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_46,
#line 1611 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_47,
#line 1611 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_48,
#line 1611 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_49,
#line 1611 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_50,
#line 1611 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_45,
#line 1611 "diet.m"
  MR_Word mercury__diet__P_14,
#line 1611 "diet.m"
  MR_Integer mercury__diet__Lo_15,
#line 1611 "diet.m"
  MR_Integer mercury__diet__Hi_16,
#line 1611 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 1611 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 1611 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 1611 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 1611 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 1611 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 1611 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 1611 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29,
#line 1611 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_30,
#line 1611 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_31)
#line 1611 "diet.m"
{
#line 1634 "diet.m"
  while (MR_TRUE)
#line 1634 "diet.m"
    {
#line 1634 "diet.m"
      /* tailcall optimized into a loop */
#line 1634 "diet.m"
      {
#line 1634 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_15 <= mercury__diet__Hi_16);

#line 1634 "diet.m"
        if (mercury__diet__succeeded)
#line 1632 "diet.m"
          {
#line 1632 "diet.m"
            MR_Box mercury__diet__V_32_32;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_33_33;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_34_34;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_35_35;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_36_36;
#line 1632 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_37_37;
#line 1632 "diet.m"
            MR_Integer mercury__diet__V_38_38;
#line 1632 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1632 "diet.m"
            {
#line 1632 "diet.m"
              mercury__diet__V_32_32 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_45, mercury__diet__Lo_15);
            }
#line 1632 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_14, (MR_Integer) 1)));
#line 1632 "diet.m"
            {
#line 1632 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_14), mercury__diet__V_32_32, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_33_33, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_34_34, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_35_35, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_36_36, mercury__diet__STATE_VARIABLE_E_0_30, &mercury__diet__STATE_VARIABLE_E_37_37);
            }
#line 1633 "diet.m"
            mercury__diet__V_38_38 = (mercury__diet__Lo_15 + (MR_Integer) 1);
#line 1633 "diet.m"
            /* direct tailcall eliminated */
#line 1633 "diet.m"
            {
#line 1633 "diet.m"
              MR_Integer mercury__diet__Lo__tmp_copy_15 = mercury__diet__V_38_38;
#line 1633 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_33_33;
#line 1633 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_34_34;
#line 1633 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_35_35;
#line 1633 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_36_36;
#line 1633 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30 = mercury__diet__STATE_VARIABLE_E_37_37;

#line 1633 "diet.m"
              mercury__diet__STATE_VARIABLE_E_0_30 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_30;
#line 1633 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1633 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1633 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1633 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1633 "diet.m"
              mercury__diet__Lo_15 = mercury__diet__Lo__tmp_copy_15;
#line 1633 "diet.m"
            }
#line 1633 "diet.m"
            continue;
#line 1632 "diet.m"
          }
#line 1634 "diet.m"
        else
#line 1635 "diet.m"
          {
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_31 = mercury__diet__STATE_VARIABLE_E_0_30;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1635 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1635 "diet.m"
          }
#line 1634 "diet.m"
      }
#line 1634 "diet.m"
      break;
#line 1634 "diet.m"
    }
#line 1611 "diet.m"
}

#line 1585 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up4_11_p_5(
#line 1585 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_39,
#line 1585 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_40,
#line 1585 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_41,
#line 1585 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_42,
#line 1585 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_38,
#line 1585 "diet.m"
  MR_Word mercury__diet__P_12,
#line 1585 "diet.m"
  MR_Integer mercury__diet__Lo_13,
#line 1585 "diet.m"
  MR_Integer mercury__diet__Hi_14,
#line 1585 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
#line 1585 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
#line 1585 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
#line 1585 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
#line 1585 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
#line 1585 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
#line 1585 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
#line 1585 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
#line 1585 "diet.m"
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
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_13 <= mercury__diet__Hi_14);

#line 1592 "diet.m"
        if (mercury__diet__succeeded)
#line 1590 "diet.m"
          {
#line 1590 "diet.m"
            MR_Box mercury__diet__V_27_27;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_28_28;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_29_29;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_30_30;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_31_31;
#line 1590 "diet.m"
            MR_Integer mercury__diet__V_32_32;
#line 1590 "diet.m"
            MR_Integer mercury__diet__V_37_37;
#line 1590 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1590 "diet.m"
            {
#line 1590 "diet.m"
              mercury__diet__V_27_27 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_38, mercury__diet__Lo_13);
            }
#line 1590 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
#line 1590 "diet.m"
            {
#line 1590 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_12), mercury__diet__V_27_27, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_28_28, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_29_29, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_30_30, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_31_31);
            }
#line 1590 "diet.m"
            if (mercury__diet__succeeded)
#line 1590 "diet.m"
              {
#line 1591 "diet.m"
                mercury__diet__V_37_37 = (MR_Integer) 1;
#line 1591 "diet.m"
                mercury__diet__V_32_32 = (mercury__diet__Lo_13 + mercury__diet__V_37_37);
#line 1591 "diet.m"
                /* direct tailcall eliminated */
#line 1591 "diet.m"
                {
#line 1591 "diet.m"
                  MR_Integer mercury__diet__Lo__tmp_copy_13 = mercury__diet__V_32_32;
#line 1591 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_A_28_28;
#line 1591 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_B_29_29;
#line 1591 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_C_30_30;
#line 1591 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_D_31_31;

#line 1591 "diet.m"
                  mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25;
#line 1591 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23;
#line 1591 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21;
#line 1591 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19;
#line 1591 "diet.m"
                  mercury__diet__Lo_13 = mercury__diet__Lo__tmp_copy_13;
#line 1591 "diet.m"
                }
#line 1591 "diet.m"
                continue;
#line 1590 "diet.m"
              }
#line 1590 "diet.m"
          }
#line 1592 "diet.m"
        else
#line 1593 "diet.m"
          {
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
#line 1593 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
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
#line 1585 "diet.m"
}

#line 1583 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up4_11_p_4(
#line 1583 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_39,
#line 1583 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_40,
#line 1583 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_41,
#line 1583 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_42,
#line 1583 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_38,
#line 1583 "diet.m"
  MR_Word mercury__diet__P_12,
#line 1583 "diet.m"
  MR_Integer mercury__diet__Lo_13,
#line 1583 "diet.m"
  MR_Integer mercury__diet__Hi_14,
#line 1583 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
#line 1583 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
#line 1583 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
#line 1583 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
#line 1583 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
#line 1583 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
#line 1583 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
#line 1583 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
#line 1583 "diet.m"
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
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_13 <= mercury__diet__Hi_14);

#line 1592 "diet.m"
        if (mercury__diet__succeeded)
#line 1590 "diet.m"
          {
#line 1590 "diet.m"
            MR_Box mercury__diet__V_27_27;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_28_28;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_29_29;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_30_30;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_31_31;
#line 1590 "diet.m"
            MR_Integer mercury__diet__V_32_32;
#line 1590 "diet.m"
            MR_Integer mercury__diet__V_37_37;
#line 1590 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1590 "diet.m"
            {
#line 1590 "diet.m"
              mercury__diet__V_27_27 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_38, mercury__diet__Lo_13);
            }
#line 1590 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
#line 1590 "diet.m"
            {
#line 1590 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_12), mercury__diet__V_27_27, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_28_28, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_29_29, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_30_30, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_31_31);
            }
#line 1590 "diet.m"
            if (mercury__diet__succeeded)
#line 1590 "diet.m"
              {
#line 1591 "diet.m"
                mercury__diet__V_37_37 = (MR_Integer) 1;
#line 1591 "diet.m"
                mercury__diet__V_32_32 = (mercury__diet__Lo_13 + mercury__diet__V_37_37);
#line 1591 "diet.m"
                /* direct tailcall eliminated */
#line 1591 "diet.m"
                {
#line 1591 "diet.m"
                  MR_Integer mercury__diet__Lo__tmp_copy_13 = mercury__diet__V_32_32;
#line 1591 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_A_28_28;
#line 1591 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_B_29_29;
#line 1591 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_C_30_30;
#line 1591 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_D_31_31;

#line 1591 "diet.m"
                  mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25;
#line 1591 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23;
#line 1591 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21;
#line 1591 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19;
#line 1591 "diet.m"
                  mercury__diet__Lo_13 = mercury__diet__Lo__tmp_copy_13;
#line 1591 "diet.m"
                }
#line 1591 "diet.m"
                continue;
#line 1590 "diet.m"
              }
#line 1590 "diet.m"
          }
#line 1592 "diet.m"
        else
#line 1593 "diet.m"
          {
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
#line 1593 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
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
#line 1583 "diet.m"
}

#line 1581 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up4_11_p_3(
#line 1581 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_39,
#line 1581 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_40,
#line 1581 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_41,
#line 1581 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_42,
#line 1581 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_38,
#line 1581 "diet.m"
  MR_Word mercury__diet__P_12,
#line 1581 "diet.m"
  MR_Integer mercury__diet__Lo_13,
#line 1581 "diet.m"
  MR_Integer mercury__diet__Hi_14,
#line 1581 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
#line 1581 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
#line 1581 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
#line 1581 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
#line 1581 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
#line 1581 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
#line 1581 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
#line 1581 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
#line 1581 "diet.m"
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
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_13 <= mercury__diet__Hi_14);

#line 1592 "diet.m"
        if (mercury__diet__succeeded)
#line 1590 "diet.m"
          {
#line 1590 "diet.m"
            MR_Box mercury__diet__V_27_27;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_28_28;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_29_29;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_30_30;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_31_31;
#line 1590 "diet.m"
            MR_Integer mercury__diet__V_32_32;
#line 1590 "diet.m"
            MR_Integer mercury__diet__V_37_37;
#line 1590 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1590 "diet.m"
            {
#line 1590 "diet.m"
              mercury__diet__V_27_27 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_38, mercury__diet__Lo_13);
            }
#line 1590 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
#line 1590 "diet.m"
            {
#line 1590 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_12), mercury__diet__V_27_27, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_28_28, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_29_29, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_30_30, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_31_31);
            }
#line 1590 "diet.m"
            if (mercury__diet__succeeded)
#line 1590 "diet.m"
              {
#line 1591 "diet.m"
                mercury__diet__V_37_37 = (MR_Integer) 1;
#line 1591 "diet.m"
                mercury__diet__V_32_32 = (mercury__diet__Lo_13 + mercury__diet__V_37_37);
#line 1591 "diet.m"
                /* direct tailcall eliminated */
#line 1591 "diet.m"
                {
#line 1591 "diet.m"
                  MR_Integer mercury__diet__Lo__tmp_copy_13 = mercury__diet__V_32_32;
#line 1591 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_A_28_28;
#line 1591 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_B_29_29;
#line 1591 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_C_30_30;
#line 1591 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_D_31_31;

#line 1591 "diet.m"
                  mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25;
#line 1591 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23;
#line 1591 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21;
#line 1591 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19;
#line 1591 "diet.m"
                  mercury__diet__Lo_13 = mercury__diet__Lo__tmp_copy_13;
#line 1591 "diet.m"
                }
#line 1591 "diet.m"
                continue;
#line 1590 "diet.m"
              }
#line 1590 "diet.m"
          }
#line 1592 "diet.m"
        else
#line 1593 "diet.m"
          {
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
#line 1593 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
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
#line 1581 "diet.m"
}

#line 1579 "diet.m"
void MR_CALL 
mercury__diet__fold_up4_11_p_2(
#line 1579 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_39,
#line 1579 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_40,
#line 1579 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_41,
#line 1579 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_42,
#line 1579 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_38,
#line 1579 "diet.m"
  MR_Word mercury__diet__P_12,
#line 1579 "diet.m"
  MR_Integer mercury__diet__Lo_13,
#line 1579 "diet.m"
  MR_Integer mercury__diet__Hi_14,
#line 1579 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
#line 1579 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
#line 1579 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
#line 1579 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
#line 1579 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
#line 1579 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
#line 1579 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
#line 1579 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
#line 1579 "diet.m"
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
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_13 <= mercury__diet__Hi_14);

#line 1592 "diet.m"
        if (mercury__diet__succeeded)
#line 1590 "diet.m"
          {
#line 1590 "diet.m"
            MR_Box mercury__diet__V_27_27;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_28_28;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_29_29;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_30_30;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_31_31;
#line 1590 "diet.m"
            MR_Integer mercury__diet__V_32_32;
#line 1590 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1590 "diet.m"
            {
#line 1590 "diet.m"
              mercury__diet__V_27_27 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_38, mercury__diet__Lo_13);
            }
#line 1590 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
#line 1590 "diet.m"
            {
#line 1590 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_12), mercury__diet__V_27_27, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_28_28, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_29_29, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_30_30, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_31_31);
            }
#line 1591 "diet.m"
            mercury__diet__V_32_32 = (mercury__diet__Lo_13 + (MR_Integer) 1);
#line 1591 "diet.m"
            /* direct tailcall eliminated */
#line 1591 "diet.m"
            {
#line 1591 "diet.m"
              MR_Integer mercury__diet__Lo__tmp_copy_13 = mercury__diet__V_32_32;
#line 1591 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_A_28_28;
#line 1591 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_B_29_29;
#line 1591 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_C_30_30;
#line 1591 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_D_31_31;

#line 1591 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25;
#line 1591 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23;
#line 1591 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21;
#line 1591 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19;
#line 1591 "diet.m"
              mercury__diet__Lo_13 = mercury__diet__Lo__tmp_copy_13;
#line 1591 "diet.m"
            }
#line 1591 "diet.m"
            continue;
#line 1590 "diet.m"
          }
#line 1592 "diet.m"
        else
#line 1593 "diet.m"
          {
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
#line 1593 "diet.m"
          }
#line 1592 "diet.m"
      }
#line 1592 "diet.m"
      break;
#line 1592 "diet.m"
    }
#line 1579 "diet.m"
}

#line 1577 "diet.m"
void MR_CALL 
mercury__diet__fold_up4_11_p_1(
#line 1577 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_39,
#line 1577 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_40,
#line 1577 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_41,
#line 1577 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_42,
#line 1577 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_38,
#line 1577 "diet.m"
  MR_Word mercury__diet__P_12,
#line 1577 "diet.m"
  MR_Integer mercury__diet__Lo_13,
#line 1577 "diet.m"
  MR_Integer mercury__diet__Hi_14,
#line 1577 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
#line 1577 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
#line 1577 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
#line 1577 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
#line 1577 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
#line 1577 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
#line 1577 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
#line 1577 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
#line 1577 "diet.m"
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
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_13 <= mercury__diet__Hi_14);

#line 1592 "diet.m"
        if (mercury__diet__succeeded)
#line 1590 "diet.m"
          {
#line 1590 "diet.m"
            MR_Box mercury__diet__V_27_27;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_28_28;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_29_29;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_30_30;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_31_31;
#line 1590 "diet.m"
            MR_Integer mercury__diet__V_32_32;
#line 1590 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1590 "diet.m"
            {
#line 1590 "diet.m"
              mercury__diet__V_27_27 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_38, mercury__diet__Lo_13);
            }
#line 1590 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
#line 1590 "diet.m"
            {
#line 1590 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_12), mercury__diet__V_27_27, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_28_28, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_29_29, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_30_30, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_31_31);
            }
#line 1591 "diet.m"
            mercury__diet__V_32_32 = (mercury__diet__Lo_13 + (MR_Integer) 1);
#line 1591 "diet.m"
            /* direct tailcall eliminated */
#line 1591 "diet.m"
            {
#line 1591 "diet.m"
              MR_Integer mercury__diet__Lo__tmp_copy_13 = mercury__diet__V_32_32;
#line 1591 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_A_28_28;
#line 1591 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_B_29_29;
#line 1591 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_C_30_30;
#line 1591 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_D_31_31;

#line 1591 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25;
#line 1591 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23;
#line 1591 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21;
#line 1591 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19;
#line 1591 "diet.m"
              mercury__diet__Lo_13 = mercury__diet__Lo__tmp_copy_13;
#line 1591 "diet.m"
            }
#line 1591 "diet.m"
            continue;
#line 1590 "diet.m"
          }
#line 1592 "diet.m"
        else
#line 1593 "diet.m"
          {
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
#line 1593 "diet.m"
          }
#line 1592 "diet.m"
      }
#line 1592 "diet.m"
      break;
#line 1592 "diet.m"
    }
#line 1577 "diet.m"
}

#line 1575 "diet.m"
void MR_CALL 
mercury__diet__fold_up4_11_p_0(
#line 1575 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_39,
#line 1575 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_40,
#line 1575 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_41,
#line 1575 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_42,
#line 1575 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_38,
#line 1575 "diet.m"
  MR_Word mercury__diet__P_12,
#line 1575 "diet.m"
  MR_Integer mercury__diet__Lo_13,
#line 1575 "diet.m"
  MR_Integer mercury__diet__Hi_14,
#line 1575 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_19,
#line 1575 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_20,
#line 1575 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_21,
#line 1575 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_22,
#line 1575 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_23,
#line 1575 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_24,
#line 1575 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_25,
#line 1575 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_26)
#line 1575 "diet.m"
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
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_13 <= mercury__diet__Hi_14);

#line 1592 "diet.m"
        if (mercury__diet__succeeded)
#line 1590 "diet.m"
          {
#line 1590 "diet.m"
            MR_Box mercury__diet__V_27_27;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_28_28;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_29_29;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_30_30;
#line 1590 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_31_31;
#line 1590 "diet.m"
            MR_Integer mercury__diet__V_32_32;
#line 1590 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1590 "diet.m"
            {
#line 1590 "diet.m"
              mercury__diet__V_27_27 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_38, mercury__diet__Lo_13);
            }
#line 1590 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_12, (MR_Integer) 1)));
#line 1590 "diet.m"
            {
#line 1590 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_12), mercury__diet__V_27_27, mercury__diet__STATE_VARIABLE_A_0_19, &mercury__diet__STATE_VARIABLE_A_28_28, mercury__diet__STATE_VARIABLE_B_0_21, &mercury__diet__STATE_VARIABLE_B_29_29, mercury__diet__STATE_VARIABLE_C_0_23, &mercury__diet__STATE_VARIABLE_C_30_30, mercury__diet__STATE_VARIABLE_D_0_25, &mercury__diet__STATE_VARIABLE_D_31_31);
            }
#line 1591 "diet.m"
            mercury__diet__V_32_32 = (mercury__diet__Lo_13 + (MR_Integer) 1);
#line 1591 "diet.m"
            /* direct tailcall eliminated */
#line 1591 "diet.m"
            {
#line 1591 "diet.m"
              MR_Integer mercury__diet__Lo__tmp_copy_13 = mercury__diet__V_32_32;
#line 1591 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_A_28_28;
#line 1591 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_B_29_29;
#line 1591 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_C_30_30;
#line 1591 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_D_31_31;

#line 1591 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_25 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_25;
#line 1591 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_23 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_23;
#line 1591 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_21 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_21;
#line 1591 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_19 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_19;
#line 1591 "diet.m"
              mercury__diet__Lo_13 = mercury__diet__Lo__tmp_copy_13;
#line 1591 "diet.m"
            }
#line 1591 "diet.m"
            continue;
#line 1590 "diet.m"
          }
#line 1592 "diet.m"
        else
#line 1593 "diet.m"
          {
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_26 = mercury__diet__STATE_VARIABLE_D_0_25;
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_24 = mercury__diet__STATE_VARIABLE_C_0_23;
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_22 = mercury__diet__STATE_VARIABLE_B_0_21;
#line 1593 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_20 = mercury__diet__STATE_VARIABLE_A_0_19;
#line 1593 "diet.m"
          }
#line 1592 "diet.m"
      }
#line 1592 "diet.m"
      break;
#line 1592 "diet.m"
    }
#line 1575 "diet.m"
}

#line 1550 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up3_9_p_5(
#line 1550 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_32,
#line 1550 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_33,
#line 1550 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc3_34,
#line 1550 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_31,
#line 1550 "diet.m"
  MR_Word mercury__diet__P_10,
#line 1550 "diet.m"
  MR_Integer mercury__diet__Lo_11,
#line 1550 "diet.m"
  MR_Integer mercury__diet__Hi_12,
#line 1550 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
#line 1550 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
#line 1550 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
#line 1550 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
#line 1550 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
#line 1550 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
#line 1550 "diet.m"
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
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_11 <= mercury__diet__Hi_12);

#line 1557 "diet.m"
        if (mercury__diet__succeeded)
#line 1555 "diet.m"
          {
#line 1555 "diet.m"
            MR_Box mercury__diet__V_22_22;
#line 1555 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_23_23;
#line 1555 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_24_24;
#line 1555 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_25_25;
#line 1555 "diet.m"
            MR_Integer mercury__diet__V_26_26;
#line 1555 "diet.m"
            MR_Integer mercury__diet__V_30_30;
#line 1555 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1555 "diet.m"
            {
#line 1555 "diet.m"
              mercury__diet__V_22_22 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_31, mercury__diet__Lo_11);
            }
#line 1555 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
#line 1555 "diet.m"
            {
#line 1555 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_10), mercury__diet__V_22_22, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_23_23, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_24_24, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_25_25);
            }
#line 1555 "diet.m"
            if (mercury__diet__succeeded)
#line 1555 "diet.m"
              {
#line 1556 "diet.m"
                mercury__diet__V_30_30 = (MR_Integer) 1;
#line 1556 "diet.m"
                mercury__diet__V_26_26 = (mercury__diet__Lo_11 + mercury__diet__V_30_30);
#line 1556 "diet.m"
                /* direct tailcall eliminated */
#line 1556 "diet.m"
                {
#line 1556 "diet.m"
                  MR_Integer mercury__diet__Lo__tmp_copy_11 = mercury__diet__V_26_26;
#line 1556 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_A_23_23;
#line 1556 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_B_24_24;
#line 1556 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__diet__STATE_VARIABLE_C_25_25;

#line 1556 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20;
#line 1556 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18;
#line 1556 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16;
#line 1556 "diet.m"
                  mercury__diet__Lo_11 = mercury__diet__Lo__tmp_copy_11;
#line 1556 "diet.m"
                }
#line 1556 "diet.m"
                continue;
#line 1555 "diet.m"
              }
#line 1555 "diet.m"
          }
#line 1557 "diet.m"
        else
#line 1558 "diet.m"
          {
#line 1558 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
#line 1558 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
#line 1558 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
#line 1558 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
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
#line 1550 "diet.m"
}

#line 1548 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up3_9_p_4(
#line 1548 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_32,
#line 1548 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_33,
#line 1548 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc3_34,
#line 1548 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_31,
#line 1548 "diet.m"
  MR_Word mercury__diet__P_10,
#line 1548 "diet.m"
  MR_Integer mercury__diet__Lo_11,
#line 1548 "diet.m"
  MR_Integer mercury__diet__Hi_12,
#line 1548 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
#line 1548 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
#line 1548 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
#line 1548 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
#line 1548 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
#line 1548 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
#line 1548 "diet.m"
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
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_11 <= mercury__diet__Hi_12);

#line 1557 "diet.m"
        if (mercury__diet__succeeded)
#line 1555 "diet.m"
          {
#line 1555 "diet.m"
            MR_Box mercury__diet__V_22_22;
#line 1555 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_23_23;
#line 1555 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_24_24;
#line 1555 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_25_25;
#line 1555 "diet.m"
            MR_Integer mercury__diet__V_26_26;
#line 1555 "diet.m"
            MR_Integer mercury__diet__V_30_30;
#line 1555 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1555 "diet.m"
            {
#line 1555 "diet.m"
              mercury__diet__V_22_22 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_31, mercury__diet__Lo_11);
            }
#line 1555 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
#line 1555 "diet.m"
            {
#line 1555 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_10), mercury__diet__V_22_22, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_23_23, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_24_24, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_25_25);
            }
#line 1555 "diet.m"
            if (mercury__diet__succeeded)
#line 1555 "diet.m"
              {
#line 1556 "diet.m"
                mercury__diet__V_30_30 = (MR_Integer) 1;
#line 1556 "diet.m"
                mercury__diet__V_26_26 = (mercury__diet__Lo_11 + mercury__diet__V_30_30);
#line 1556 "diet.m"
                /* direct tailcall eliminated */
#line 1556 "diet.m"
                {
#line 1556 "diet.m"
                  MR_Integer mercury__diet__Lo__tmp_copy_11 = mercury__diet__V_26_26;
#line 1556 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_A_23_23;
#line 1556 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_B_24_24;
#line 1556 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__diet__STATE_VARIABLE_C_25_25;

#line 1556 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20;
#line 1556 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18;
#line 1556 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16;
#line 1556 "diet.m"
                  mercury__diet__Lo_11 = mercury__diet__Lo__tmp_copy_11;
#line 1556 "diet.m"
                }
#line 1556 "diet.m"
                continue;
#line 1555 "diet.m"
              }
#line 1555 "diet.m"
          }
#line 1557 "diet.m"
        else
#line 1558 "diet.m"
          {
#line 1558 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
#line 1558 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
#line 1558 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
#line 1558 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
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
#line 1548 "diet.m"
}

#line 1546 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up3_9_p_3(
#line 1546 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_32,
#line 1546 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_33,
#line 1546 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc3_34,
#line 1546 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_31,
#line 1546 "diet.m"
  MR_Word mercury__diet__P_10,
#line 1546 "diet.m"
  MR_Integer mercury__diet__Lo_11,
#line 1546 "diet.m"
  MR_Integer mercury__diet__Hi_12,
#line 1546 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
#line 1546 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
#line 1546 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
#line 1546 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
#line 1546 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
#line 1546 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
#line 1546 "diet.m"
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
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_11 <= mercury__diet__Hi_12);

#line 1557 "diet.m"
        if (mercury__diet__succeeded)
#line 1555 "diet.m"
          {
#line 1555 "diet.m"
            MR_Box mercury__diet__V_22_22;
#line 1555 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_23_23;
#line 1555 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_24_24;
#line 1555 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_25_25;
#line 1555 "diet.m"
            MR_Integer mercury__diet__V_26_26;
#line 1555 "diet.m"
            MR_Integer mercury__diet__V_30_30;
#line 1555 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1555 "diet.m"
            {
#line 1555 "diet.m"
              mercury__diet__V_22_22 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_31, mercury__diet__Lo_11);
            }
#line 1555 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
#line 1555 "diet.m"
            {
#line 1555 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_10), mercury__diet__V_22_22, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_23_23, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_24_24, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_25_25);
            }
#line 1555 "diet.m"
            if (mercury__diet__succeeded)
#line 1555 "diet.m"
              {
#line 1556 "diet.m"
                mercury__diet__V_30_30 = (MR_Integer) 1;
#line 1556 "diet.m"
                mercury__diet__V_26_26 = (mercury__diet__Lo_11 + mercury__diet__V_30_30);
#line 1556 "diet.m"
                /* direct tailcall eliminated */
#line 1556 "diet.m"
                {
#line 1556 "diet.m"
                  MR_Integer mercury__diet__Lo__tmp_copy_11 = mercury__diet__V_26_26;
#line 1556 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_A_23_23;
#line 1556 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_B_24_24;
#line 1556 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__diet__STATE_VARIABLE_C_25_25;

#line 1556 "diet.m"
                  mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20;
#line 1556 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18;
#line 1556 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16;
#line 1556 "diet.m"
                  mercury__diet__Lo_11 = mercury__diet__Lo__tmp_copy_11;
#line 1556 "diet.m"
                }
#line 1556 "diet.m"
                continue;
#line 1555 "diet.m"
              }
#line 1555 "diet.m"
          }
#line 1557 "diet.m"
        else
#line 1558 "diet.m"
          {
#line 1558 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
#line 1558 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
#line 1558 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
#line 1558 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
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
#line 1546 "diet.m"
}

#line 1544 "diet.m"
void MR_CALL 
mercury__diet__fold_up3_9_p_2(
#line 1544 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_32,
#line 1544 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_33,
#line 1544 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc3_34,
#line 1544 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_31,
#line 1544 "diet.m"
  MR_Word mercury__diet__P_10,
#line 1544 "diet.m"
  MR_Integer mercury__diet__Lo_11,
#line 1544 "diet.m"
  MR_Integer mercury__diet__Hi_12,
#line 1544 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
#line 1544 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
#line 1544 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
#line 1544 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
#line 1544 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
#line 1544 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
#line 1544 "diet.m"
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
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_11 <= mercury__diet__Hi_12);

#line 1557 "diet.m"
        if (mercury__diet__succeeded)
#line 1555 "diet.m"
          {
#line 1555 "diet.m"
            MR_Box mercury__diet__V_22_22;
#line 1555 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_23_23;
#line 1555 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_24_24;
#line 1555 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_25_25;
#line 1555 "diet.m"
            MR_Integer mercury__diet__V_26_26;
#line 1555 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1555 "diet.m"
            {
#line 1555 "diet.m"
              mercury__diet__V_22_22 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_31, mercury__diet__Lo_11);
            }
#line 1555 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
#line 1555 "diet.m"
            {
#line 1555 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_10), mercury__diet__V_22_22, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_23_23, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_24_24, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_25_25);
            }
#line 1556 "diet.m"
            mercury__diet__V_26_26 = (mercury__diet__Lo_11 + (MR_Integer) 1);
#line 1556 "diet.m"
            /* direct tailcall eliminated */
#line 1556 "diet.m"
            {
#line 1556 "diet.m"
              MR_Integer mercury__diet__Lo__tmp_copy_11 = mercury__diet__V_26_26;
#line 1556 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_A_23_23;
#line 1556 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_B_24_24;
#line 1556 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__diet__STATE_VARIABLE_C_25_25;

#line 1556 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20;
#line 1556 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18;
#line 1556 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16;
#line 1556 "diet.m"
              mercury__diet__Lo_11 = mercury__diet__Lo__tmp_copy_11;
#line 1556 "diet.m"
            }
#line 1556 "diet.m"
            continue;
#line 1555 "diet.m"
          }
#line 1557 "diet.m"
        else
#line 1558 "diet.m"
          {
#line 1558 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
#line 1558 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
#line 1558 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
#line 1558 "diet.m"
          }
#line 1557 "diet.m"
      }
#line 1557 "diet.m"
      break;
#line 1557 "diet.m"
    }
#line 1544 "diet.m"
}

#line 1542 "diet.m"
void MR_CALL 
mercury__diet__fold_up3_9_p_1(
#line 1542 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_32,
#line 1542 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_33,
#line 1542 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc3_34,
#line 1542 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_31,
#line 1542 "diet.m"
  MR_Word mercury__diet__P_10,
#line 1542 "diet.m"
  MR_Integer mercury__diet__Lo_11,
#line 1542 "diet.m"
  MR_Integer mercury__diet__Hi_12,
#line 1542 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
#line 1542 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
#line 1542 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
#line 1542 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
#line 1542 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
#line 1542 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
#line 1542 "diet.m"
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
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_11 <= mercury__diet__Hi_12);

#line 1557 "diet.m"
        if (mercury__diet__succeeded)
#line 1555 "diet.m"
          {
#line 1555 "diet.m"
            MR_Box mercury__diet__V_22_22;
#line 1555 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_23_23;
#line 1555 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_24_24;
#line 1555 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_25_25;
#line 1555 "diet.m"
            MR_Integer mercury__diet__V_26_26;
#line 1555 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1555 "diet.m"
            {
#line 1555 "diet.m"
              mercury__diet__V_22_22 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_31, mercury__diet__Lo_11);
            }
#line 1555 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
#line 1555 "diet.m"
            {
#line 1555 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_10), mercury__diet__V_22_22, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_23_23, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_24_24, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_25_25);
            }
#line 1556 "diet.m"
            mercury__diet__V_26_26 = (mercury__diet__Lo_11 + (MR_Integer) 1);
#line 1556 "diet.m"
            /* direct tailcall eliminated */
#line 1556 "diet.m"
            {
#line 1556 "diet.m"
              MR_Integer mercury__diet__Lo__tmp_copy_11 = mercury__diet__V_26_26;
#line 1556 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_A_23_23;
#line 1556 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_B_24_24;
#line 1556 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__diet__STATE_VARIABLE_C_25_25;

#line 1556 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20;
#line 1556 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18;
#line 1556 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16;
#line 1556 "diet.m"
              mercury__diet__Lo_11 = mercury__diet__Lo__tmp_copy_11;
#line 1556 "diet.m"
            }
#line 1556 "diet.m"
            continue;
#line 1555 "diet.m"
          }
#line 1557 "diet.m"
        else
#line 1558 "diet.m"
          {
#line 1558 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
#line 1558 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
#line 1558 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
#line 1558 "diet.m"
          }
#line 1557 "diet.m"
      }
#line 1557 "diet.m"
      break;
#line 1557 "diet.m"
    }
#line 1542 "diet.m"
}

#line 1540 "diet.m"
void MR_CALL 
mercury__diet__fold_up3_9_p_0(
#line 1540 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_32,
#line 1540 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_33,
#line 1540 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc3_34,
#line 1540 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_31,
#line 1540 "diet.m"
  MR_Word mercury__diet__P_10,
#line 1540 "diet.m"
  MR_Integer mercury__diet__Lo_11,
#line 1540 "diet.m"
  MR_Integer mercury__diet__Hi_12,
#line 1540 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_16,
#line 1540 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_17,
#line 1540 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_18,
#line 1540 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_19,
#line 1540 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_20,
#line 1540 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_21)
#line 1540 "diet.m"
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
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_11 <= mercury__diet__Hi_12);

#line 1557 "diet.m"
        if (mercury__diet__succeeded)
#line 1555 "diet.m"
          {
#line 1555 "diet.m"
            MR_Box mercury__diet__V_22_22;
#line 1555 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_23_23;
#line 1555 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_24_24;
#line 1555 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_25_25;
#line 1555 "diet.m"
            MR_Integer mercury__diet__V_26_26;
#line 1555 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1555 "diet.m"
            {
#line 1555 "diet.m"
              mercury__diet__V_22_22 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_31, mercury__diet__Lo_11);
            }
#line 1555 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_10, (MR_Integer) 1)));
#line 1555 "diet.m"
            {
#line 1555 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_10), mercury__diet__V_22_22, mercury__diet__STATE_VARIABLE_A_0_16, &mercury__diet__STATE_VARIABLE_A_23_23, mercury__diet__STATE_VARIABLE_B_0_18, &mercury__diet__STATE_VARIABLE_B_24_24, mercury__diet__STATE_VARIABLE_C_0_20, &mercury__diet__STATE_VARIABLE_C_25_25);
            }
#line 1556 "diet.m"
            mercury__diet__V_26_26 = (mercury__diet__Lo_11 + (MR_Integer) 1);
#line 1556 "diet.m"
            /* direct tailcall eliminated */
#line 1556 "diet.m"
            {
#line 1556 "diet.m"
              MR_Integer mercury__diet__Lo__tmp_copy_11 = mercury__diet__V_26_26;
#line 1556 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_A_23_23;
#line 1556 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_B_24_24;
#line 1556 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20 = mercury__diet__STATE_VARIABLE_C_25_25;

#line 1556 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_20 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_20;
#line 1556 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_18 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_18;
#line 1556 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_16 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_16;
#line 1556 "diet.m"
              mercury__diet__Lo_11 = mercury__diet__Lo__tmp_copy_11;
#line 1556 "diet.m"
            }
#line 1556 "diet.m"
            continue;
#line 1555 "diet.m"
          }
#line 1557 "diet.m"
        else
#line 1558 "diet.m"
          {
#line 1558 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_21 = mercury__diet__STATE_VARIABLE_C_0_20;
#line 1558 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_19 = mercury__diet__STATE_VARIABLE_B_0_18;
#line 1558 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_17 = mercury__diet__STATE_VARIABLE_A_0_16;
#line 1558 "diet.m"
          }
#line 1557 "diet.m"
      }
#line 1557 "diet.m"
      break;
#line 1557 "diet.m"
    }
#line 1540 "diet.m"
}

#line 1515 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up2_7_p_5(
#line 1515 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_25,
#line 1515 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_26,
#line 1515 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_24,
#line 1515 "diet.m"
  MR_Word mercury__diet__P_8,
#line 1515 "diet.m"
  MR_Integer mercury__diet__Lo_9,
#line 1515 "diet.m"
  MR_Integer mercury__diet__Hi_10,
#line 1515 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
#line 1515 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
#line 1515 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
#line 1515 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
#line 1515 "diet.m"
{
#line 1522 "diet.m"
  while (MR_TRUE)
#line 1522 "diet.m"
    {
#line 1522 "diet.m"
      /* tailcall optimized into a loop */
#line 1522 "diet.m"
      {
#line 1522 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_9 <= mercury__diet__Hi_10);

#line 1522 "diet.m"
        if (mercury__diet__succeeded)
#line 1520 "diet.m"
          {
#line 1520 "diet.m"
            MR_Box mercury__diet__V_17_17;
#line 1520 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_18_18;
#line 1520 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_19_19;
#line 1520 "diet.m"
            MR_Integer mercury__diet__V_20_20;
#line 1520 "diet.m"
            MR_Integer mercury__diet__V_23_23;
#line 1520 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1520 "diet.m"
            {
#line 1520 "diet.m"
              mercury__diet__V_17_17 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_24, mercury__diet__Lo_9);
            }
#line 1520 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
#line 1520 "diet.m"
            {
#line 1520 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_8), mercury__diet__V_17_17, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_18_18, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_19_19);
            }
#line 1520 "diet.m"
            if (mercury__diet__succeeded)
#line 1520 "diet.m"
              {
#line 1521 "diet.m"
                mercury__diet__V_23_23 = (MR_Integer) 1;
#line 1521 "diet.m"
                mercury__diet__V_20_20 = (mercury__diet__Lo_9 + mercury__diet__V_23_23);
#line 1521 "diet.m"
                /* direct tailcall eliminated */
#line 1521 "diet.m"
                {
#line 1521 "diet.m"
                  MR_Integer mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_20_20;
#line 1521 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_18_18;
#line 1521 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_19_19;

#line 1521 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1521 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1521 "diet.m"
                  mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1521 "diet.m"
                }
#line 1521 "diet.m"
                continue;
#line 1520 "diet.m"
              }
#line 1520 "diet.m"
          }
#line 1522 "diet.m"
        else
#line 1523 "diet.m"
          {
#line 1523 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1523 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1523 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1523 "diet.m"
          }
#line 1522 "diet.m"
        return mercury__diet__succeeded;
#line 1522 "diet.m"
      }
#line 1522 "diet.m"
      break;
#line 1522 "diet.m"
    }
#line 1515 "diet.m"
}

#line 1513 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up2_7_p_4(
#line 1513 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_25,
#line 1513 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_26,
#line 1513 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_24,
#line 1513 "diet.m"
  MR_Word mercury__diet__P_8,
#line 1513 "diet.m"
  MR_Integer mercury__diet__Lo_9,
#line 1513 "diet.m"
  MR_Integer mercury__diet__Hi_10,
#line 1513 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
#line 1513 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
#line 1513 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
#line 1513 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
#line 1513 "diet.m"
{
#line 1522 "diet.m"
  while (MR_TRUE)
#line 1522 "diet.m"
    {
#line 1522 "diet.m"
      /* tailcall optimized into a loop */
#line 1522 "diet.m"
      {
#line 1522 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_9 <= mercury__diet__Hi_10);

#line 1522 "diet.m"
        if (mercury__diet__succeeded)
#line 1520 "diet.m"
          {
#line 1520 "diet.m"
            MR_Box mercury__diet__V_17_17;
#line 1520 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_18_18;
#line 1520 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_19_19;
#line 1520 "diet.m"
            MR_Integer mercury__diet__V_20_20;
#line 1520 "diet.m"
            MR_Integer mercury__diet__V_23_23;
#line 1520 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1520 "diet.m"
            {
#line 1520 "diet.m"
              mercury__diet__V_17_17 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_24, mercury__diet__Lo_9);
            }
#line 1520 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
#line 1520 "diet.m"
            {
#line 1520 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_8), mercury__diet__V_17_17, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_18_18, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_19_19);
            }
#line 1520 "diet.m"
            if (mercury__diet__succeeded)
#line 1520 "diet.m"
              {
#line 1521 "diet.m"
                mercury__diet__V_23_23 = (MR_Integer) 1;
#line 1521 "diet.m"
                mercury__diet__V_20_20 = (mercury__diet__Lo_9 + mercury__diet__V_23_23);
#line 1521 "diet.m"
                /* direct tailcall eliminated */
#line 1521 "diet.m"
                {
#line 1521 "diet.m"
                  MR_Integer mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_20_20;
#line 1521 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_18_18;
#line 1521 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_19_19;

#line 1521 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1521 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1521 "diet.m"
                  mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1521 "diet.m"
                }
#line 1521 "diet.m"
                continue;
#line 1520 "diet.m"
              }
#line 1520 "diet.m"
          }
#line 1522 "diet.m"
        else
#line 1523 "diet.m"
          {
#line 1523 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1523 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1523 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1523 "diet.m"
          }
#line 1522 "diet.m"
        return mercury__diet__succeeded;
#line 1522 "diet.m"
      }
#line 1522 "diet.m"
      break;
#line 1522 "diet.m"
    }
#line 1513 "diet.m"
}

#line 1511 "diet.m"
MR_bool MR_CALL 
mercury__diet__fold_up2_7_p_3(
#line 1511 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_25,
#line 1511 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_26,
#line 1511 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_24,
#line 1511 "diet.m"
  MR_Word mercury__diet__P_8,
#line 1511 "diet.m"
  MR_Integer mercury__diet__Lo_9,
#line 1511 "diet.m"
  MR_Integer mercury__diet__Hi_10,
#line 1511 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
#line 1511 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
#line 1511 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
#line 1511 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
#line 1511 "diet.m"
{
#line 1522 "diet.m"
  while (MR_TRUE)
#line 1522 "diet.m"
    {
#line 1522 "diet.m"
      /* tailcall optimized into a loop */
#line 1522 "diet.m"
      {
#line 1522 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_9 <= mercury__diet__Hi_10);

#line 1522 "diet.m"
        if (mercury__diet__succeeded)
#line 1520 "diet.m"
          {
#line 1520 "diet.m"
            MR_Box mercury__diet__V_17_17;
#line 1520 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_18_18;
#line 1520 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_19_19;
#line 1520 "diet.m"
            MR_Integer mercury__diet__V_20_20;
#line 1520 "diet.m"
            MR_Integer mercury__diet__V_23_23;
#line 1520 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1520 "diet.m"
            {
#line 1520 "diet.m"
              mercury__diet__V_17_17 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_24, mercury__diet__Lo_9);
            }
#line 1520 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
#line 1520 "diet.m"
            {
#line 1520 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_8), mercury__diet__V_17_17, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_18_18, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_19_19);
            }
#line 1520 "diet.m"
            if (mercury__diet__succeeded)
#line 1520 "diet.m"
              {
#line 1521 "diet.m"
                mercury__diet__V_23_23 = (MR_Integer) 1;
#line 1521 "diet.m"
                mercury__diet__V_20_20 = (mercury__diet__Lo_9 + mercury__diet__V_23_23);
#line 1521 "diet.m"
                /* direct tailcall eliminated */
#line 1521 "diet.m"
                {
#line 1521 "diet.m"
                  MR_Integer mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_20_20;
#line 1521 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_18_18;
#line 1521 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_19_19;

#line 1521 "diet.m"
                  mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1521 "diet.m"
                  mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1521 "diet.m"
                  mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1521 "diet.m"
                }
#line 1521 "diet.m"
                continue;
#line 1520 "diet.m"
              }
#line 1520 "diet.m"
          }
#line 1522 "diet.m"
        else
#line 1523 "diet.m"
          {
#line 1523 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1523 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1523 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1523 "diet.m"
          }
#line 1522 "diet.m"
        return mercury__diet__succeeded;
#line 1522 "diet.m"
      }
#line 1522 "diet.m"
      break;
#line 1522 "diet.m"
    }
#line 1511 "diet.m"
}

#line 1509 "diet.m"
void MR_CALL 
mercury__diet__fold_up2_7_p_2(
#line 1509 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_25,
#line 1509 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_26,
#line 1509 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_24,
#line 1509 "diet.m"
  MR_Word mercury__diet__P_8,
#line 1509 "diet.m"
  MR_Integer mercury__diet__Lo_9,
#line 1509 "diet.m"
  MR_Integer mercury__diet__Hi_10,
#line 1509 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
#line 1509 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
#line 1509 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
#line 1509 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
#line 1509 "diet.m"
{
#line 1522 "diet.m"
  while (MR_TRUE)
#line 1522 "diet.m"
    {
#line 1522 "diet.m"
      /* tailcall optimized into a loop */
#line 1522 "diet.m"
      {
#line 1522 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_9 <= mercury__diet__Hi_10);

#line 1522 "diet.m"
        if (mercury__diet__succeeded)
#line 1520 "diet.m"
          {
#line 1520 "diet.m"
            MR_Box mercury__diet__V_17_17;
#line 1520 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_18_18;
#line 1520 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_19_19;
#line 1520 "diet.m"
            MR_Integer mercury__diet__V_20_20;
#line 1520 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1520 "diet.m"
            {
#line 1520 "diet.m"
              mercury__diet__V_17_17 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_24, mercury__diet__Lo_9);
            }
#line 1520 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
#line 1520 "diet.m"
            {
#line 1520 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_8), mercury__diet__V_17_17, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_18_18, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_19_19);
            }
#line 1521 "diet.m"
            mercury__diet__V_20_20 = (mercury__diet__Lo_9 + (MR_Integer) 1);
#line 1521 "diet.m"
            /* direct tailcall eliminated */
#line 1521 "diet.m"
            {
#line 1521 "diet.m"
              MR_Integer mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_20_20;
#line 1521 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_18_18;
#line 1521 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_19_19;

#line 1521 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1521 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1521 "diet.m"
              mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1521 "diet.m"
            }
#line 1521 "diet.m"
            continue;
#line 1520 "diet.m"
          }
#line 1522 "diet.m"
        else
#line 1523 "diet.m"
          {
#line 1523 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1523 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1523 "diet.m"
          }
#line 1522 "diet.m"
      }
#line 1522 "diet.m"
      break;
#line 1522 "diet.m"
    }
#line 1509 "diet.m"
}

#line 1507 "diet.m"
void MR_CALL 
mercury__diet__fold_up2_7_p_1(
#line 1507 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_25,
#line 1507 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_26,
#line 1507 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_24,
#line 1507 "diet.m"
  MR_Word mercury__diet__P_8,
#line 1507 "diet.m"
  MR_Integer mercury__diet__Lo_9,
#line 1507 "diet.m"
  MR_Integer mercury__diet__Hi_10,
#line 1507 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
#line 1507 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
#line 1507 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
#line 1507 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
#line 1507 "diet.m"
{
#line 1522 "diet.m"
  while (MR_TRUE)
#line 1522 "diet.m"
    {
#line 1522 "diet.m"
      /* tailcall optimized into a loop */
#line 1522 "diet.m"
      {
#line 1522 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_9 <= mercury__diet__Hi_10);

#line 1522 "diet.m"
        if (mercury__diet__succeeded)
#line 1520 "diet.m"
          {
#line 1520 "diet.m"
            MR_Box mercury__diet__V_17_17;
#line 1520 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_18_18;
#line 1520 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_19_19;
#line 1520 "diet.m"
            MR_Integer mercury__diet__V_20_20;
#line 1520 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1520 "diet.m"
            {
#line 1520 "diet.m"
              mercury__diet__V_17_17 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_24, mercury__diet__Lo_9);
            }
#line 1520 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
#line 1520 "diet.m"
            {
#line 1520 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_8), mercury__diet__V_17_17, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_18_18, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_19_19);
            }
#line 1521 "diet.m"
            mercury__diet__V_20_20 = (mercury__diet__Lo_9 + (MR_Integer) 1);
#line 1521 "diet.m"
            /* direct tailcall eliminated */
#line 1521 "diet.m"
            {
#line 1521 "diet.m"
              MR_Integer mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_20_20;
#line 1521 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_18_18;
#line 1521 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_19_19;

#line 1521 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1521 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1521 "diet.m"
              mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1521 "diet.m"
            }
#line 1521 "diet.m"
            continue;
#line 1520 "diet.m"
          }
#line 1522 "diet.m"
        else
#line 1523 "diet.m"
          {
#line 1523 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1523 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1523 "diet.m"
          }
#line 1522 "diet.m"
      }
#line 1522 "diet.m"
      break;
#line 1522 "diet.m"
    }
#line 1507 "diet.m"
}

#line 1505 "diet.m"
void MR_CALL 
mercury__diet__fold_up2_7_p_0(
#line 1505 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc1_25,
#line 1505 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc2_26,
#line 1505 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_24,
#line 1505 "diet.m"
  MR_Word mercury__diet__P_8,
#line 1505 "diet.m"
  MR_Integer mercury__diet__Lo_9,
#line 1505 "diet.m"
  MR_Integer mercury__diet__Hi_10,
#line 1505 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_13,
#line 1505 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_14,
#line 1505 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_15,
#line 1505 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_16)
#line 1505 "diet.m"
{
#line 1522 "diet.m"
  while (MR_TRUE)
#line 1522 "diet.m"
    {
#line 1522 "diet.m"
      /* tailcall optimized into a loop */
#line 1522 "diet.m"
      {
#line 1522 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_9 <= mercury__diet__Hi_10);

#line 1522 "diet.m"
        if (mercury__diet__succeeded)
#line 1520 "diet.m"
          {
#line 1520 "diet.m"
            MR_Box mercury__diet__V_17_17;
#line 1520 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_18_18;
#line 1520 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_19_19;
#line 1520 "diet.m"
            MR_Integer mercury__diet__V_20_20;
#line 1520 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

#line 1520 "diet.m"
            {
#line 1520 "diet.m"
              mercury__diet__V_17_17 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_24, mercury__diet__Lo_9);
            }
#line 1520 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_8, (MR_Integer) 1)));
#line 1520 "diet.m"
            {
#line 1520 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_8), mercury__diet__V_17_17, mercury__diet__STATE_VARIABLE_A_0_13, &mercury__diet__STATE_VARIABLE_A_18_18, mercury__diet__STATE_VARIABLE_B_0_15, &mercury__diet__STATE_VARIABLE_B_19_19);
            }
#line 1521 "diet.m"
            mercury__diet__V_20_20 = (mercury__diet__Lo_9 + (MR_Integer) 1);
#line 1521 "diet.m"
            /* direct tailcall eliminated */
#line 1521 "diet.m"
            {
#line 1521 "diet.m"
              MR_Integer mercury__diet__Lo__tmp_copy_9 = mercury__diet__V_20_20;
#line 1521 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_A_18_18;
#line 1521 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15 = mercury__diet__STATE_VARIABLE_B_19_19;

#line 1521 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_15 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_15;
#line 1521 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_13 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_13;
#line 1521 "diet.m"
              mercury__diet__Lo_9 = mercury__diet__Lo__tmp_copy_9;
#line 1521 "diet.m"
            }
#line 1521 "diet.m"
            continue;
#line 1520 "diet.m"
          }
#line 1522 "diet.m"
        else
#line 1523 "diet.m"
          {
#line 1523 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_16 = mercury__diet__STATE_VARIABLE_B_0_15;
#line 1523 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_14 = mercury__diet__STATE_VARIABLE_A_0_13;
#line 1523 "diet.m"
          }
#line 1522 "diet.m"
      }
#line 1522 "diet.m"
      break;
#line 1522 "diet.m"
    }
#line 1505 "diet.m"
}

#line 1481 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl_2_5_p_5(
#line 1481 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc_18,
#line 1481 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_17,
#line 1481 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1481 "diet.m"
  MR_Integer mercury__diet__Lo_7,
#line 1481 "diet.m"
  MR_Integer mercury__diet__Hi_8,
#line 1481 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
#line 1481 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
#line 1481 "diet.m"
{
#line 1487 "diet.m"
  while (MR_TRUE)
#line 1487 "diet.m"
    {
#line 1487 "diet.m"
      /* tailcall optimized into a loop */
#line 1487 "diet.m"
      {
#line 1487 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_7 <= mercury__diet__Hi_8);

#line 1487 "diet.m"
        if (mercury__diet__succeeded)
#line 1485 "diet.m"
          {
#line 1485 "diet.m"
            MR_Box mercury__diet__V_12_12;
#line 1485 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_13_13;
#line 1485 "diet.m"
            MR_Integer mercury__diet__V_14_14;
#line 1485 "diet.m"
            MR_Integer mercury__diet__V_16_16;
#line 1485 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1485 "diet.m"
            {
#line 1485 "diet.m"
              mercury__diet__V_12_12 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_17, mercury__diet__Lo_7);
            }
#line 1485 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 1485 "diet.m"
            {
#line 1485 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_6), mercury__diet__V_12_12, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_13_13);
            }
#line 1485 "diet.m"
            if (mercury__diet__succeeded)
#line 1485 "diet.m"
              {
#line 1486 "diet.m"
                mercury__diet__V_16_16 = (MR_Integer) 1;
#line 1486 "diet.m"
                mercury__diet__V_14_14 = (mercury__diet__Lo_7 + mercury__diet__V_16_16);
#line 1486 "diet.m"
                /* direct tailcall eliminated */
#line 1486 "diet.m"
                {
#line 1486 "diet.m"
                  MR_Integer mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_14_14;
#line 1486 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_13_13;

#line 1486 "diet.m"
                  mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1486 "diet.m"
                  mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1486 "diet.m"
                }
#line 1486 "diet.m"
                continue;
#line 1485 "diet.m"
              }
#line 1485 "diet.m"
          }
#line 1487 "diet.m"
        else
#line 1487 "diet.m"
          {
#line 1487 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1487 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1487 "diet.m"
          }
#line 1487 "diet.m"
        return mercury__diet__succeeded;
#line 1487 "diet.m"
      }
#line 1487 "diet.m"
      break;
#line 1487 "diet.m"
    }
#line 1481 "diet.m"
}

#line 1480 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl_2_5_p_4(
#line 1480 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc_18,
#line 1480 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_17,
#line 1480 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1480 "diet.m"
  MR_Integer mercury__diet__Lo_7,
#line 1480 "diet.m"
  MR_Integer mercury__diet__Hi_8,
#line 1480 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
#line 1480 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
#line 1480 "diet.m"
{
#line 1487 "diet.m"
  while (MR_TRUE)
#line 1487 "diet.m"
    {
#line 1487 "diet.m"
      /* tailcall optimized into a loop */
#line 1487 "diet.m"
      {
#line 1487 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_7 <= mercury__diet__Hi_8);

#line 1487 "diet.m"
        if (mercury__diet__succeeded)
#line 1485 "diet.m"
          {
#line 1485 "diet.m"
            MR_Box mercury__diet__V_12_12;
#line 1485 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_13_13;
#line 1485 "diet.m"
            MR_Integer mercury__diet__V_14_14;
#line 1485 "diet.m"
            MR_Integer mercury__diet__V_16_16;
#line 1485 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1485 "diet.m"
            {
#line 1485 "diet.m"
              mercury__diet__V_12_12 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_17, mercury__diet__Lo_7);
            }
#line 1485 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 1485 "diet.m"
            {
#line 1485 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_6), mercury__diet__V_12_12, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_13_13);
            }
#line 1485 "diet.m"
            if (mercury__diet__succeeded)
#line 1485 "diet.m"
              {
#line 1486 "diet.m"
                mercury__diet__V_16_16 = (MR_Integer) 1;
#line 1486 "diet.m"
                mercury__diet__V_14_14 = (mercury__diet__Lo_7 + mercury__diet__V_16_16);
#line 1486 "diet.m"
                /* direct tailcall eliminated */
#line 1486 "diet.m"
                {
#line 1486 "diet.m"
                  MR_Integer mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_14_14;
#line 1486 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_13_13;

#line 1486 "diet.m"
                  mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1486 "diet.m"
                  mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1486 "diet.m"
                }
#line 1486 "diet.m"
                continue;
#line 1485 "diet.m"
              }
#line 1485 "diet.m"
          }
#line 1487 "diet.m"
        else
#line 1487 "diet.m"
          {
#line 1487 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1487 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1487 "diet.m"
          }
#line 1487 "diet.m"
        return mercury__diet__succeeded;
#line 1487 "diet.m"
      }
#line 1487 "diet.m"
      break;
#line 1487 "diet.m"
    }
#line 1480 "diet.m"
}

#line 1479 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl_2_5_p_3(
#line 1479 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc_18,
#line 1479 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_17,
#line 1479 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1479 "diet.m"
  MR_Integer mercury__diet__Lo_7,
#line 1479 "diet.m"
  MR_Integer mercury__diet__Hi_8,
#line 1479 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
#line 1479 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
#line 1479 "diet.m"
{
#line 1487 "diet.m"
  while (MR_TRUE)
#line 1487 "diet.m"
    {
#line 1487 "diet.m"
      /* tailcall optimized into a loop */
#line 1487 "diet.m"
      {
#line 1487 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_7 <= mercury__diet__Hi_8);

#line 1487 "diet.m"
        if (mercury__diet__succeeded)
#line 1485 "diet.m"
          {
#line 1485 "diet.m"
            MR_Box mercury__diet__V_12_12;
#line 1485 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_13_13;
#line 1485 "diet.m"
            MR_Integer mercury__diet__V_14_14;
#line 1485 "diet.m"
            MR_Integer mercury__diet__V_16_16;
#line 1485 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1485 "diet.m"
            {
#line 1485 "diet.m"
              mercury__diet__V_12_12 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_17, mercury__diet__Lo_7);
            }
#line 1485 "diet.m"
            mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 1485 "diet.m"
            {
#line 1485 "diet.m"
              mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_6), mercury__diet__V_12_12, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_13_13);
            }
#line 1485 "diet.m"
            if (mercury__diet__succeeded)
#line 1485 "diet.m"
              {
#line 1486 "diet.m"
                mercury__diet__V_16_16 = (MR_Integer) 1;
#line 1486 "diet.m"
                mercury__diet__V_14_14 = (mercury__diet__Lo_7 + mercury__diet__V_16_16);
#line 1486 "diet.m"
                /* direct tailcall eliminated */
#line 1486 "diet.m"
                {
#line 1486 "diet.m"
                  MR_Integer mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_14_14;
#line 1486 "diet.m"
                  MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_13_13;

#line 1486 "diet.m"
                  mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1486 "diet.m"
                  mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1486 "diet.m"
                }
#line 1486 "diet.m"
                continue;
#line 1485 "diet.m"
              }
#line 1485 "diet.m"
          }
#line 1487 "diet.m"
        else
#line 1487 "diet.m"
          {
#line 1487 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1487 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1487 "diet.m"
          }
#line 1487 "diet.m"
        return mercury__diet__succeeded;
#line 1487 "diet.m"
      }
#line 1487 "diet.m"
      break;
#line 1487 "diet.m"
    }
#line 1479 "diet.m"
}

#line 1478 "diet.m"
void MR_CALL 
mercury__diet__foldl_2_5_p_2(
#line 1478 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc_18,
#line 1478 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_17,
#line 1478 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1478 "diet.m"
  MR_Integer mercury__diet__Lo_7,
#line 1478 "diet.m"
  MR_Integer mercury__diet__Hi_8,
#line 1478 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
#line 1478 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
#line 1478 "diet.m"
{
#line 1487 "diet.m"
  while (MR_TRUE)
#line 1487 "diet.m"
    {
#line 1487 "diet.m"
      /* tailcall optimized into a loop */
#line 1487 "diet.m"
      {
#line 1487 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_7 <= mercury__diet__Hi_8);

#line 1487 "diet.m"
        if (mercury__diet__succeeded)
#line 1485 "diet.m"
          {
#line 1485 "diet.m"
            MR_Box mercury__diet__V_12_12;
#line 1485 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_13_13;
#line 1485 "diet.m"
            MR_Integer mercury__diet__V_14_14;
#line 1485 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1485 "diet.m"
            {
#line 1485 "diet.m"
              mercury__diet__V_12_12 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_17, mercury__diet__Lo_7);
            }
#line 1485 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 1485 "diet.m"
            {
#line 1485 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_6), mercury__diet__V_12_12, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_13_13);
            }
#line 1486 "diet.m"
            mercury__diet__V_14_14 = (mercury__diet__Lo_7 + (MR_Integer) 1);
#line 1486 "diet.m"
            /* direct tailcall eliminated */
#line 1486 "diet.m"
            {
#line 1486 "diet.m"
              MR_Integer mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_14_14;
#line 1486 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_13_13;

#line 1486 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1486 "diet.m"
              mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1486 "diet.m"
            }
#line 1486 "diet.m"
            continue;
#line 1485 "diet.m"
          }
#line 1487 "diet.m"
        else
#line 1487 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1487 "diet.m"
      }
#line 1487 "diet.m"
      break;
#line 1487 "diet.m"
    }
#line 1478 "diet.m"
}

#line 1477 "diet.m"
void MR_CALL 
mercury__diet__foldl_2_5_p_1(
#line 1477 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc_18,
#line 1477 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_17,
#line 1477 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1477 "diet.m"
  MR_Integer mercury__diet__Lo_7,
#line 1477 "diet.m"
  MR_Integer mercury__diet__Hi_8,
#line 1477 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
#line 1477 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
#line 1477 "diet.m"
{
#line 1487 "diet.m"
  while (MR_TRUE)
#line 1487 "diet.m"
    {
#line 1487 "diet.m"
      /* tailcall optimized into a loop */
#line 1487 "diet.m"
      {
#line 1487 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_7 <= mercury__diet__Hi_8);

#line 1487 "diet.m"
        if (mercury__diet__succeeded)
#line 1485 "diet.m"
          {
#line 1485 "diet.m"
            MR_Box mercury__diet__V_12_12;
#line 1485 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_13_13;
#line 1485 "diet.m"
            MR_Integer mercury__diet__V_14_14;
#line 1485 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1485 "diet.m"
            {
#line 1485 "diet.m"
              mercury__diet__V_12_12 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_17, mercury__diet__Lo_7);
            }
#line 1485 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 1485 "diet.m"
            {
#line 1485 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_6), mercury__diet__V_12_12, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_13_13);
            }
#line 1486 "diet.m"
            mercury__diet__V_14_14 = (mercury__diet__Lo_7 + (MR_Integer) 1);
#line 1486 "diet.m"
            /* direct tailcall eliminated */
#line 1486 "diet.m"
            {
#line 1486 "diet.m"
              MR_Integer mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_14_14;
#line 1486 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_13_13;

#line 1486 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1486 "diet.m"
              mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1486 "diet.m"
            }
#line 1486 "diet.m"
            continue;
#line 1485 "diet.m"
          }
#line 1487 "diet.m"
        else
#line 1487 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1487 "diet.m"
      }
#line 1487 "diet.m"
      break;
#line 1487 "diet.m"
    }
#line 1477 "diet.m"
}

#line 1476 "diet.m"
void MR_CALL 
mercury__diet__foldl_2_5_p_0(
#line 1476 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_Acc_18,
#line 1476 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_17,
#line 1476 "diet.m"
  MR_Word mercury__diet__P_6,
#line 1476 "diet.m"
  MR_Integer mercury__diet__Lo_7,
#line 1476 "diet.m"
  MR_Integer mercury__diet__Hi_8,
#line 1476 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_10,
#line 1476 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_11)
#line 1476 "diet.m"
{
#line 1487 "diet.m"
  while (MR_TRUE)
#line 1487 "diet.m"
    {
#line 1487 "diet.m"
      /* tailcall optimized into a loop */
#line 1487 "diet.m"
      {
#line 1487 "diet.m"
        MR_bool mercury__diet__succeeded = (mercury__diet__Lo_7 <= mercury__diet__Hi_8);

#line 1487 "diet.m"
        if (mercury__diet__succeeded)
#line 1485 "diet.m"
          {
#line 1485 "diet.m"
            MR_Box mercury__diet__V_12_12;
#line 1485 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_13_13;
#line 1485 "diet.m"
            MR_Integer mercury__diet__V_14_14;
#line 1485 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1485 "diet.m"
            {
#line 1485 "diet.m"
              mercury__diet__V_12_12 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_17, mercury__diet__Lo_7);
            }
#line 1485 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_6, (MR_Integer) 1)));
#line 1485 "diet.m"
            {
#line 1485 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_6), mercury__diet__V_12_12, mercury__diet__STATE_VARIABLE_Acc_0_10, &mercury__diet__STATE_VARIABLE_Acc_13_13);
            }
#line 1486 "diet.m"
            mercury__diet__V_14_14 = (mercury__diet__Lo_7 + (MR_Integer) 1);
#line 1486 "diet.m"
            /* direct tailcall eliminated */
#line 1486 "diet.m"
            {
#line 1486 "diet.m"
              MR_Integer mercury__diet__Lo__tmp_copy_7 = mercury__diet__V_14_14;
#line 1486 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10 = mercury__diet__STATE_VARIABLE_Acc_13_13;

#line 1486 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_10 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_10;
#line 1486 "diet.m"
              mercury__diet__Lo_7 = mercury__diet__Lo__tmp_copy_7;
#line 1486 "diet.m"
            }
#line 1486 "diet.m"
            continue;
#line 1485 "diet.m"
          }
#line 1487 "diet.m"
        else
#line 1487 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_11 = mercury__diet__STATE_VARIABLE_Acc_0_10;
#line 1487 "diet.m"
      }
#line 1487 "diet.m"
      break;
#line 1487 "diet.m"
    }
#line 1476 "diet.m"
}

#line 1418 "diet.m"
void MR_CALL 
mercury__diet__count_3_p_0(
#line 1418 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_18,
#line 1418 "diet.m"
  MR_Word mercury__diet__T_4,
#line 1418 "diet.m"
  MR_Integer mercury__diet__Acc0_5,
#line 1418 "diet.m"
  MR_Integer * mercury__diet__Acc_6)
#line 1418 "diet.m"
{
#line 1424 "diet.m"
  while (MR_TRUE)
#line 1424 "diet.m"
    {
#line 1424 "diet.m"
      /* tailcall optimized into a loop */
#line 1424 "diet.m"
      {
#line 1424 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1424 "diet.m"
        if ((mercury__diet__T_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1423 "diet.m"
          *mercury__diet__Acc_6 = mercury__diet__Acc0_5;
#line 1424 "diet.m"
        else
#line 1425 "diet.m"
          {
#line 1425 "diet.m"
            MR_Integer mercury__diet__X_7;
#line 1425 "diet.m"
            MR_Integer mercury__diet__Y_8;
#line 1425 "diet.m"
            MR_Word mercury__diet__L_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_4, (MR_Integer) 2)));
#line 1425 "diet.m"
            MR_Word mercury__diet__R_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_4, (MR_Integer) 3)));
#line 1425 "diet.m"
            MR_Integer mercury__diet__Acc1_12;
#line 1425 "diet.m"
            MR_Integer mercury__diet__Acc2_13;
#line 1425 "diet.m"
            MR_Tuple mercury__diet__V_14_14 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_4, (MR_Integer) 0)));
#line 1425 "diet.m"
            MR_Integer mercury__diet__V_15_15;
#line 1425 "diet.m"
            MR_Integer mercury__diet__V_16_16;
#line 1425 "diet.m"
            MR_Integer mercury__diet__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_4, (MR_Integer) 1)));

#line 1425 "diet.m"
            mercury__diet__X_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_14_14, (MR_Integer) 0)));
#line 1425 "diet.m"
            mercury__diet__Y_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_14_14, (MR_Integer) 1)));
#line 1426 "diet.m"
            mercury__diet__V_16_16 = ((MR_Integer) 1 + mercury__diet__Y_8);
#line 1426 "diet.m"
            mercury__diet__V_15_15 = (mercury__diet__V_16_16 - mercury__diet__X_7);
#line 1426 "diet.m"
            mercury__diet__Acc1_12 = (mercury__diet__Acc0_5 + mercury__diet__V_15_15);
#line 1427 "diet.m"
            {
#line 1427 "diet.m"
              mercury__diet__count_3_p_0(mercury__diet__TypeInfo_for_T_18, mercury__diet__L_10, mercury__diet__Acc1_12, &mercury__diet__Acc2_13);
            }
#line 1428 "diet.m"
            /* direct tailcall eliminated */
#line 1428 "diet.m"
            {
#line 1428 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_4 = mercury__diet__R_11;
#line 1428 "diet.m"
              MR_Integer mercury__diet__Acc0__tmp_copy_5 = mercury__diet__Acc2_13;

#line 1428 "diet.m"
              mercury__diet__Acc0_5 = mercury__diet__Acc0__tmp_copy_5;
#line 1428 "diet.m"
              mercury__diet__T_4 = mercury__diet__T__tmp_copy_4;
#line 1428 "diet.m"
            }
#line 1428 "diet.m"
            continue;
#line 1425 "diet.m"
          }
#line 1424 "diet.m"
      }
#line 1424 "diet.m"
      break;
#line 1424 "diet.m"
    }
#line 1418 "diet.m"
}

#line 1398 "diet.m"
void MR_CALL 
mercury__diet__divide_2_6_p_0(
#line 1398 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_17,
#line 1398 "diet.m"
  MR_Word mercury__diet__Pred_7,
#line 1398 "diet.m"
  MR_Box mercury__diet__Elem_8,
#line 1398 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_TrueSet_0_11,
#line 1398 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_TrueSet_12,
#line 1398 "diet.m"
  MR_Word mercury__diet__STATE_VARIABLE_FalseSet_0_13,
#line 1398 "diet.m"
  MR_Word * mercury__diet__STATE_VARIABLE_FalseSet_14)
#line 1398 "diet.m"
{
#line 1403 "diet.m"
  {
#line 1403 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1401 "diet.m"
    MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__diet__Pred_7, (MR_Integer) 1)));

#line 1401 "diet.m"
    {
#line 1401 "diet.m"
      mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__Pred_7), mercury__diet__Elem_8);
    }
#line 1403 "diet.m"
    if (mercury__diet__succeeded)
#line 1402 "diet.m"
      {
#line 1402 "diet.m"
        MR_Word mercury__diet__TypeInfo_10_23;
#line 1402 "diet.m"
        MR_Integer mercury__diet__V_21_21;
#line 9244 "diet.c"
        MR_Box MR_CALL (* mercury__diet__func_1)(MR_Box, MR_Box);
#line 9246 "diet.c"
        MR_Box mercury__diet__conv2_V_21_21;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__divide_2_6_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9264 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_10_23  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 9271 "diet.c"
        mercury__diet__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9273 "diet.c"
        {
#line 9275 "diet.c"
          mercury__diet__conv2_V_21_21 = mercury__diet__func_1(((MR_Box) mercury__diet__TypeClassInfo_for_enum_17), mercury__diet__Elem_8);
        }
#line 9278 "diet.c"
        mercury__diet__V_21_21 = ((MR_Integer) mercury__diet__conv2_V_21_21);
#line 770 "diet.m"
        {
#line 770 "diet.m"
          *mercury__diet__STATE_VARIABLE_TrueSet_12 = mercury__diet__add_2_f_0(mercury__diet__TypeInfo_10_23, mercury__diet__V_21_21, mercury__diet__STATE_VARIABLE_TrueSet_0_11);
        }
#line 1402 "diet.m"
        *mercury__diet__STATE_VARIABLE_FalseSet_14 = mercury__diet__STATE_VARIABLE_FalseSet_0_13;
#line 1402 "diet.m"
      }
#line 1403 "diet.m"
    else
#line 1404 "diet.m"
      {
#line 1404 "diet.m"
        MR_Word mercury__diet__TypeInfo_10_29;
#line 1404 "diet.m"
        MR_Integer mercury__diet__V_27_27;
#line 9297 "diet.c"
        MR_Box MR_CALL (* mercury__diet__func_3)(MR_Box, MR_Box);
#line 9299 "diet.c"
        MR_Box mercury__diet__conv4_V_27_27;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__divide_2_6_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_enum_17 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 9317 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_10_29  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 9324 "diet.c"
        mercury__diet__func_3 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9326 "diet.c"
        {
#line 9328 "diet.c"
          mercury__diet__conv4_V_27_27 = mercury__diet__func_3(((MR_Box) mercury__diet__TypeClassInfo_for_enum_17), mercury__diet__Elem_8);
        }
#line 9331 "diet.c"
        mercury__diet__V_27_27 = ((MR_Integer) mercury__diet__conv4_V_27_27);
#line 770 "diet.m"
        {
#line 770 "diet.m"
          *mercury__diet__STATE_VARIABLE_FalseSet_14 = mercury__diet__add_2_f_0(mercury__diet__TypeInfo_10_29, mercury__diet__V_27_27, mercury__diet__STATE_VARIABLE_FalseSet_0_13);
        }
#line 1404 "diet.m"
        *mercury__diet__STATE_VARIABLE_TrueSet_12 = mercury__diet__STATE_VARIABLE_TrueSet_0_11;
#line 1404 "diet.m"
      }
#line 1403 "diet.m"
  }
#line 1398 "diet.m"
}

#line 1357 "diet.m"
static void MR_CALL 
mercury__diet__diff_helper_8_p_0(
#line 1357 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_44,
#line 1357 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 1357 "diet.m"
  MR_Word mercury__diet__Right0_11,
#line 1357 "diet.m"
  MR_Word mercury__diet__Left0_12,
#line 1357 "diet.m"
  MR_Word mercury__diet__Head0_13,
#line 1357 "diet.m"
  MR_Word mercury__diet__Stream0_14,
#line 1357 "diet.m"
  MR_Word * mercury__diet__Output_15,
#line 1357 "diet.m"
  MR_Word * mercury__diet__Head_16,
#line 1357 "diet.m"
  MR_Word * mercury__diet__Stream_17)
#line 1357 "diet.m"
{
#line 1362 "diet.m"
  while (MR_TRUE)
#line 1362 "diet.m"
    {
#line 1362 "diet.m"
      /* tailcall optimized into a loop */
#line 1362 "diet.m"
      {
#line 1362 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 1362 "diet.m"
        MR_Integer mercury__diet__A_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 0)));
#line 1362 "diet.m"
        MR_Integer mercury__diet__B_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 1)));

#line 1368 "diet.m"
        if ((mercury__diet__Head0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1364 "diet.m"
          {
#line 1365 "diet.m"
            {
#line 1365 "diet.m"
              *mercury__diet__Output_15 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__HeadVar__1_1, mercury__diet__Left0_12, mercury__diet__Right0_11);
            }
#line 1366 "diet.m"
            *mercury__diet__Head_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1367 "diet.m"
            *mercury__diet__Stream_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1364 "diet.m"
          }
#line 1368 "diet.m"
        else
#line 1369 "diet.m"
          {
#line 1369 "diet.m"
            MR_Integer mercury__diet__X_18;
#line 1369 "diet.m"
            MR_Integer mercury__diet__Y_19;
#line 1369 "diet.m"
            MR_Tuple mercury__diet__V_24_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_13, (MR_Integer) 0)));

#line 1369 "diet.m"
            mercury__diet__X_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 0)));
#line 1369 "diet.m"
            mercury__diet__Y_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 1)));
#line 1370 "diet.m"
            mercury__diet__succeeded = (mercury__diet__Y_19 < mercury__diet__A_9);
#line 1374 "diet.m"
            if (mercury__diet__succeeded)
#line 1371 "diet.m"
              {
#line 1371 "diet.m"
                MR_Word mercury__diet__Head1_20;
#line 1371 "diet.m"
                MR_Word mercury__diet__Stream1_21;

#line 603 "diet.m"
                if ((mercury__diet__Stream0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 600 "diet.m"
                  {
#line 601 "diet.m"
                    mercury__diet__Head1_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "diet.m"
                    mercury__diet__Stream1_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 600 "diet.m"
                  }
#line 603 "diet.m"
                else
#line 604 "diet.m"
                  {
#line 604 "diet.m"
                    MR_Tuple mercury__diet__X_52;

#line 605 "diet.m"
                    {
#line 605 "diet.m"
                      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__Stream0_14, &mercury__diet__X_52, &mercury__diet__Stream1_21);
                    }
#line 606 "diet.m"
                    {
#line 606 "diet.m"
                      mercury__diet__Head1_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 606 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__Head1_20, 0) = ((MR_Box) (mercury__diet__X_52));
#line 606 "diet.m"
                    }
#line 604 "diet.m"
                  }
#line 1372 "diet.m"
                /* direct tailcall eliminated */
#line 1372 "diet.m"
                {
#line 1372 "diet.m"
                  MR_Word mercury__diet__Head0__tmp_copy_13 = mercury__diet__Head1_20;
#line 1372 "diet.m"
                  MR_Word mercury__diet__Stream0__tmp_copy_14 = mercury__diet__Stream1_21;

#line 1372 "diet.m"
                  mercury__diet__Stream0_14 = mercury__diet__Stream0__tmp_copy_14;
#line 1372 "diet.m"
                  mercury__diet__Head0_13 = mercury__diet__Head0__tmp_copy_13;
#line 1372 "diet.m"
                }
#line 1372 "diet.m"
                continue;
#line 1371 "diet.m"
              }
#line 1374 "diet.m"
            else
#line 1377 "diet.m"
              {
#line 1374 "diet.m"
                mercury__diet__succeeded = (mercury__diet__B_10 < mercury__diet__X_18);
#line 1377 "diet.m"
                if (mercury__diet__succeeded)
#line 1375 "diet.m"
                  {
#line 1375 "diet.m"
                    MR_Word mercury__diet__Right1_22;

#line 1375 "diet.m"
                    {
#line 1375 "diet.m"
                      mercury__diet__diff_6_p_0(mercury__diet__TypeInfo_for_T_44, mercury__diet__Right0_11, mercury__diet__Head0_13, mercury__diet__Stream0_14, &mercury__diet__Right1_22, mercury__diet__Head_16, mercury__diet__Stream_17);
                    }
#line 1376 "diet.m"
                    {
#line 1376 "diet.m"
                      *mercury__diet__Output_15 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__HeadVar__1_1, mercury__diet__Left0_12, mercury__diet__Right1_22);
                    }
#line 1375 "diet.m"
                  }
#line 1377 "diet.m"
                else
#line 1381 "diet.m"
                  {
#line 1377 "diet.m"
                    mercury__diet__succeeded = (mercury__diet__A_9 < mercury__diet__X_18);
#line 1381 "diet.m"
                    if (mercury__diet__succeeded)
#line 1378 "diet.m"
                      {
#line 1378 "diet.m"
                        MR_Word mercury__diet__Left1_23;
#line 1378 "diet.m"
                        MR_Tuple mercury__diet__V_27_27;
#line 1378 "diet.m"
                        MR_Integer mercury__diet__V_28_28 = (mercury__diet__X_18 - (MR_Integer) 1);
#line 1378 "diet.m"
                        MR_Tuple mercury__diet__V_29_29;

#line 1378 "diet.m"
                        {
#line 1378 "diet.m"
                          mercury__diet__V_27_27 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1378 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, 0) = ((MR_Box) (mercury__diet__A_9));
#line 1378 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, 1) = ((MR_Box) (mercury__diet__V_28_28));
#line 1378 "diet.m"
                        }
#line 1378 "diet.m"
                        {
#line 1378 "diet.m"
                          mercury__diet__Left1_23 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeInfo_for_T_44, mercury__diet__V_27_27, mercury__diet__Left0_12);
                        }
#line 1379 "diet.m"
                        {
#line 1379 "diet.m"
                          mercury__diet__V_29_29 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1379 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_29_29, 0) = ((MR_Box) (mercury__diet__X_18));
#line 1379 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_29_29, 1) = ((MR_Box) (mercury__diet__B_10));
#line 1379 "diet.m"
                        }
#line 1379 "diet.m"
                        /* direct tailcall eliminated */
#line 1379 "diet.m"
                        {
#line 1379 "diet.m"
                          MR_Tuple mercury__diet__HeadVar__1__tmp_copy_1 = mercury__diet__V_29_29;
#line 1379 "diet.m"
                          MR_Word mercury__diet__Left0__tmp_copy_12 = mercury__diet__Left1_23;

#line 1379 "diet.m"
                          mercury__diet__Left0_12 = mercury__diet__Left0__tmp_copy_12;
#line 1379 "diet.m"
                          mercury__diet__HeadVar__1_1 = mercury__diet__HeadVar__1__tmp_copy_1;
#line 1379 "diet.m"
                        }
#line 1379 "diet.m"
                        continue;
#line 1378 "diet.m"
                      }
#line 1381 "diet.m"
                    else
#line 1385 "diet.m"
                      {
#line 1381 "diet.m"
                        mercury__diet__succeeded = (mercury__diet__Y_19 < mercury__diet__B_10);
#line 1385 "diet.m"
                        if (mercury__diet__succeeded)
#line 1382 "diet.m"
                          {
#line 1382 "diet.m"
                            MR_Tuple mercury__diet__V_30_30;
#line 1382 "diet.m"
                            MR_Integer mercury__diet__V_31_31;
#line 1382 "diet.m"
                            MR_Word mercury__diet__Head1_33;
#line 1382 "diet.m"
                            MR_Word mercury__diet__Stream1_34;

#line 603 "diet.m"
                            if ((mercury__diet__Stream0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 600 "diet.m"
                              {
#line 601 "diet.m"
                                mercury__diet__Head1_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "diet.m"
                                mercury__diet__Stream1_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 600 "diet.m"
                              }
#line 603 "diet.m"
                            else
#line 604 "diet.m"
                              {
#line 604 "diet.m"
                                MR_Tuple mercury__diet__X_62;

#line 605 "diet.m"
                                {
#line 605 "diet.m"
                                  mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__Stream0_14, &mercury__diet__X_62, &mercury__diet__Stream1_34);
                                }
#line 606 "diet.m"
                                {
#line 606 "diet.m"
                                  mercury__diet__Head1_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 606 "diet.m"
                                  MR_hl_field(MR_mktag(1), mercury__diet__Head1_33, 0) = ((MR_Box) (mercury__diet__X_62));
#line 606 "diet.m"
                                }
#line 604 "diet.m"
                              }
#line 429 "diet.m"
                            mercury__diet__V_31_31 = (mercury__diet__Y_19 + (MR_Integer) 1);
#line 1383 "diet.m"
                            {
#line 1383 "diet.m"
                              mercury__diet__V_30_30 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1383 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, 0) = ((MR_Box) (mercury__diet__V_31_31));
#line 1383 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, 1) = ((MR_Box) (mercury__diet__B_10));
#line 1383 "diet.m"
                            }
#line 1383 "diet.m"
                            /* direct tailcall eliminated */
#line 1383 "diet.m"
                            {
#line 1383 "diet.m"
                              MR_Tuple mercury__diet__HeadVar__1__tmp_copy_1 = mercury__diet__V_30_30;
#line 1383 "diet.m"
                              MR_Word mercury__diet__Head0__tmp_copy_13 = mercury__diet__Head1_33;
#line 1383 "diet.m"
                              MR_Word mercury__diet__Stream0__tmp_copy_14 = mercury__diet__Stream1_34;

#line 1383 "diet.m"
                              mercury__diet__Stream0_14 = mercury__diet__Stream0__tmp_copy_14;
#line 1383 "diet.m"
                              mercury__diet__Head0_13 = mercury__diet__Head0__tmp_copy_13;
#line 1383 "diet.m"
                              mercury__diet__HeadVar__1_1 = mercury__diet__HeadVar__1__tmp_copy_1;
#line 1383 "diet.m"
                            }
#line 1383 "diet.m"
                            continue;
#line 1382 "diet.m"
                          }
#line 1385 "diet.m"
                        else
#line 1386 "diet.m"
                          {
#line 1386 "diet.m"
                            MR_Word mercury__diet__Right1_35;
#line 566 "diet.m"
                            MR_Integer mercury__diet__V_79_79;
#line 566 "diet.m"
                            MR_Integer mercury__diet__V_80_80;

#line 1386 "diet.m"
                            {
#line 1386 "diet.m"
                              mercury__diet__diff_6_p_0(mercury__diet__TypeInfo_for_T_44, mercury__diet__Right0_11, mercury__diet__Head0_13, mercury__diet__Stream0_14, &mercury__diet__Right1_35, mercury__diet__Head_16, mercury__diet__Stream_17);
                            }
#line 445 "diet.m"
                            if ((mercury__diet__Left0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
                              mercury__diet__V_79_79 = (MR_Integer) 0;
#line 445 "diet.m"
                            else
#line 446 "diet.m"
                              {
#line 446 "diet.m"
                                MR_Tuple mercury__diet__V_86_86 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Left0_12, (MR_Integer) 0)));
#line 446 "diet.m"
                                MR_Word mercury__diet__V_88_88;
#line 446 "diet.m"
                                MR_Word mercury__diet__V_89_89;

#line 446 "diet.m"
                                mercury__diet__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Left0_12, (MR_Integer) 1)));
#line 446 "diet.m"
                                mercury__diet__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Left0_12, (MR_Integer) 2)));
#line 446 "diet.m"
                                mercury__diet__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Left0_12, (MR_Integer) 3)));
#line 446 "diet.m"
                              }
#line 445 "diet.m"
                            if ((mercury__diet__Right1_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
                              mercury__diet__V_80_80 = (MR_Integer) 0;
#line 445 "diet.m"
                            else
#line 446 "diet.m"
                              {
#line 446 "diet.m"
                                MR_Tuple mercury__diet__V_90_90 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Right1_35, (MR_Integer) 0)));
#line 446 "diet.m"
                                MR_Word mercury__diet__V_92_92;
#line 446 "diet.m"
                                MR_Word mercury__diet__V_93_93;

#line 446 "diet.m"
                                mercury__diet__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Right1_35, (MR_Integer) 1)));
#line 446 "diet.m"
                                mercury__diet__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Right1_35, (MR_Integer) 2)));
#line 446 "diet.m"
                                mercury__diet__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Right1_35, (MR_Integer) 3)));
#line 446 "diet.m"
                              }
#line 566 "diet.m"
                            mercury__diet__succeeded = (mercury__diet__V_79_79 > mercury__diet__V_80_80);
#line 575 "diet.m"
                            if (mercury__diet__succeeded)
#line 570 "diet.m"
                              if ((mercury__diet__Left0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 568 "diet.m"
                                {
#line 569 "diet.m"
                                  {
#line 569 "diet.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.reroot\'/2", (MR_String) "L empty");
#line 569 "diet.m"
                                    return;
                                  }
#line 568 "diet.m"
                                }
#line 570 "diet.m"
                              else
#line 571 "diet.m"
                                {
#line 571 "diet.m"
                                  MR_Tuple mercury__diet__I_72;
#line 571 "diet.m"
                                  MR_Word mercury__diet__L1_73;

#line 572 "diet.m"
                                  {
#line 572 "diet.m"
                                    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_97_120_95_95_91_49_93_95_48_3_p_0(mercury__diet__Left0_12, &mercury__diet__I_72, &mercury__diet__L1_73);
                                  }
#line 573 "diet.m"
                                  {
#line 573 "diet.m"
                                    *mercury__diet__Output_15 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__I_72, mercury__diet__L1_73, mercury__diet__Right1_35);
                                  }
#line 571 "diet.m"
                                }
#line 575 "diet.m"
                            else
#line 578 "diet.m"
                              if ((mercury__diet__Right1_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 577 "diet.m"
                                *mercury__diet__Output_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 578 "diet.m"
                              else
#line 579 "diet.m"
                                {
#line 579 "diet.m"
                                  MR_Word mercury__diet__R1_78;
#line 579 "diet.m"
                                  MR_Tuple mercury__diet__I_84;

#line 580 "diet.m"
                                  {
#line 580 "diet.m"
                                    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_95_91_49_93_95_48_3_p_0(mercury__diet__Right1_35, &mercury__diet__I_84, &mercury__diet__R1_78);
                                  }
#line 581 "diet.m"
                                  {
#line 581 "diet.m"
                                    *mercury__diet__Output_15 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__I_84, mercury__diet__Left0_12, mercury__diet__R1_78);
                                  }
#line 579 "diet.m"
                                }
#line 1386 "diet.m"
                          }
#line 1385 "diet.m"
                      }
#line 1381 "diet.m"
                  }
#line 1377 "diet.m"
              }
#line 1369 "diet.m"
          }
#line 1362 "diet.m"
      }
#line 1362 "diet.m"
      break;
#line 1362 "diet.m"
    }
#line 1357 "diet.m"
}

#line 1328 "diet.m"
static void MR_CALL 
mercury__diet__diff_6_p_0(
#line 1328 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_27,
#line 1328 "diet.m"
  MR_Word mercury__diet__Input_7,
#line 1328 "diet.m"
  MR_Word mercury__diet__Head0_8,
#line 1328 "diet.m"
  MR_Word mercury__diet__Stream0_9,
#line 1328 "diet.m"
  MR_Word * mercury__diet__Output_10,
#line 1328 "diet.m"
  MR_Word * mercury__diet__Head_11,
#line 1328 "diet.m"
  MR_Word * mercury__diet__Stream_12)
#line 1328 "diet.m"
{
#line 1337 "diet.m"
  {
#line 1337 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1337 "diet.m"
    if ((mercury__diet__Head0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1333 "diet.m"
      {
#line 1334 "diet.m"
        *mercury__diet__Output_10 = mercury__diet__Input_7;
#line 1335 "diet.m"
        *mercury__diet__Head_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1336 "diet.m"
        *mercury__diet__Stream_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1333 "diet.m"
      }
#line 1337 "diet.m"
    else
#line 1337 "diet.m"
      {
#line 1337 "diet.m"
        MR_Tuple mercury__diet__V_28_28 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_8, (MR_Integer) 0)));

#line 1337 "diet.m"
        if ((mercury__diet__Input_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1338 "diet.m"
          {
#line 1340 "diet.m"
            *mercury__diet__Output_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1341 "diet.m"
            *mercury__diet__Head_11 = mercury__diet__Head0_8;
#line 1342 "diet.m"
            *mercury__diet__Stream_12 = mercury__diet__Stream0_9;
#line 1338 "diet.m"
          }
#line 1337 "diet.m"
        else
#line 1344 "diet.m"
          {
#line 1344 "diet.m"
            MR_Integer mercury__diet__X_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, (MR_Integer) 0)));
#line 1344 "diet.m"
            MR_Integer mercury__diet__A_16;
#line 1344 "diet.m"
            MR_Word mercury__diet__Left0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 2)));
#line 1344 "diet.m"
            MR_Word mercury__diet__Right0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 3)));
#line 1344 "diet.m"
            MR_Word mercury__diet__Left1_21;
#line 1344 "diet.m"
            MR_Word mercury__diet__Head1_22;
#line 1344 "diet.m"
            MR_Word mercury__diet__Stream1_23;
#line 1344 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 0)));
#line 1344 "diet.m"
            MR_Integer mercury__diet___Y_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, (MR_Integer) 1)));
#line 1345 "diet.m"
            MR_Integer mercury__diet__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 1)));
#line 1345 "diet.m"
            MR_Integer mercury__diet__B_17;

#line 1345 "diet.m"
            mercury__diet__A_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0)));
#line 1345 "diet.m"
            mercury__diet__B_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1)));
#line 1346 "diet.m"
            mercury__diet__succeeded = (mercury__diet__X_14 < mercury__diet__A_16);
#line 1348 "diet.m"
            if (mercury__diet__succeeded)
#line 1347 "diet.m"
              {
#line 1347 "diet.m"
                mercury__diet__diff_6_p_0(mercury__diet__TypeInfo_for_T_27, mercury__diet__Left0_19, mercury__diet__Head0_8, mercury__diet__Stream0_9, &mercury__diet__Left1_21, &mercury__diet__Head1_22, &mercury__diet__Stream1_23);
              }
#line 1348 "diet.m"
            else
#line 1349 "diet.m"
              {
#line 1349 "diet.m"
                mercury__diet__Left1_21 = mercury__diet__Left0_19;
#line 1350 "diet.m"
                mercury__diet__Head1_22 = mercury__diet__Head0_8;
#line 1351 "diet.m"
                mercury__diet__Stream1_23 = mercury__diet__Stream0_9;
#line 1349 "diet.m"
              }
#line 1353 "diet.m"
            {
#line 1353 "diet.m"
              mercury__diet__diff_helper_8_p_0(mercury__diet__TypeInfo_for_T_27, mercury__diet__V_25_25, mercury__diet__Right0_20, mercury__diet__Left1_21, mercury__diet__Head1_22, mercury__diet__Stream1_23, mercury__diet__Output_10, mercury__diet__Head_11, mercury__diet__Stream_12);
#line 1353 "diet.m"
              return;
            }
#line 1344 "diet.m"
          }
#line 1337 "diet.m"
      }
#line 1337 "diet.m"
  }
#line 1328 "diet.m"
}

#line 1257 "diet.m"
static void MR_CALL 
mercury__diet__inter_help_8_p_0(
#line 1257 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_49,
#line 1257 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 1257 "diet.m"
  MR_Word mercury__diet__Right0_11,
#line 1257 "diet.m"
  MR_Word mercury__diet__Left0_12,
#line 1257 "diet.m"
  MR_Word mercury__diet__Head0_13,
#line 1257 "diet.m"
  MR_Word mercury__diet__Stream0_14,
#line 1257 "diet.m"
  MR_Word * mercury__diet__Result_15,
#line 1257 "diet.m"
  MR_Word * mercury__diet__Head_16,
#line 1257 "diet.m"
  MR_Word * mercury__diet__Stream_17)
#line 1257 "diet.m"
{
#line 1262 "diet.m"
  while (MR_TRUE)
#line 1262 "diet.m"
    {
#line 1262 "diet.m"
      /* tailcall optimized into a loop */
#line 1262 "diet.m"
      {
#line 1262 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 1262 "diet.m"
        MR_Integer mercury__diet__A_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 0)));
#line 1262 "diet.m"
        MR_Integer mercury__diet__B_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 1)));

#line 1268 "diet.m"
        if ((mercury__diet__Head0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1264 "diet.m"
          {
#line 1265 "diet.m"
            *mercury__diet__Result_15 = mercury__diet__Left0_12;
#line 1266 "diet.m"
            *mercury__diet__Head_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1267 "diet.m"
            *mercury__diet__Stream_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1264 "diet.m"
          }
#line 1268 "diet.m"
        else
#line 1269 "diet.m"
          {
#line 1269 "diet.m"
            MR_Integer mercury__diet__X_18;
#line 1269 "diet.m"
            MR_Integer mercury__diet__Y_19;
#line 1269 "diet.m"
            MR_Tuple mercury__diet__V_28_28 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_13, (MR_Integer) 0)));

#line 1269 "diet.m"
            mercury__diet__X_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, (MR_Integer) 0)));
#line 1269 "diet.m"
            mercury__diet__Y_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, (MR_Integer) 1)));
#line 1270 "diet.m"
            mercury__diet__succeeded = (mercury__diet__Y_19 < mercury__diet__A_9);
#line 1282 "diet.m"
            if (mercury__diet__succeeded)
#line 1276 "diet.m"
              if ((mercury__diet__Stream0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1272 "diet.m"
                {
#line 1273 "diet.m"
                  *mercury__diet__Result_15 = mercury__diet__Left0_12;
#line 1274 "diet.m"
                  *mercury__diet__Head_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1275 "diet.m"
                  *mercury__diet__Stream_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1272 "diet.m"
                }
#line 1276 "diet.m"
              else
#line 1277 "diet.m"
                {
#line 1277 "diet.m"
                  MR_Tuple mercury__diet__Head1_24;
#line 1277 "diet.m"
                  MR_Word mercury__diet__Stream1_25;
#line 1277 "diet.m"
                  MR_Word mercury__diet__V_30_30;

#line 1278 "diet.m"
                  {
#line 1278 "diet.m"
                    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__Stream0_14, &mercury__diet__Head1_24, &mercury__diet__Stream1_25);
                  }
#line 1279 "diet.m"
                  {
#line 1279 "diet.m"
                    mercury__diet__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1279 "diet.m"
                    MR_hl_field(MR_mktag(1), mercury__diet__V_30_30, 0) = ((MR_Box) (mercury__diet__Head1_24));
#line 1279 "diet.m"
                  }
#line 1279 "diet.m"
                  /* direct tailcall eliminated */
#line 1279 "diet.m"
                  {
#line 1279 "diet.m"
                    MR_Word mercury__diet__Head0__tmp_copy_13 = mercury__diet__V_30_30;
#line 1279 "diet.m"
                    MR_Word mercury__diet__Stream0__tmp_copy_14 = mercury__diet__Stream1_25;

#line 1279 "diet.m"
                    mercury__diet__Stream0_14 = mercury__diet__Stream0__tmp_copy_14;
#line 1279 "diet.m"
                    mercury__diet__Head0_13 = mercury__diet__Head0__tmp_copy_13;
#line 1279 "diet.m"
                  }
#line 1279 "diet.m"
                  continue;
#line 1277 "diet.m"
                }
#line 1282 "diet.m"
            else
#line 1287 "diet.m"
              {
#line 1282 "diet.m"
                mercury__diet__succeeded = (mercury__diet__B_10 < mercury__diet__X_18);
#line 1287 "diet.m"
                if (mercury__diet__succeeded)
#line 1283 "diet.m"
                  {
#line 1283 "diet.m"
                    MR_Word mercury__diet__Right1_26;
#line 566 "diet.m"
                    MR_Integer mercury__diet__V_64_64;
#line 566 "diet.m"
                    MR_Integer mercury__diet__V_65_65;

#line 1283 "diet.m"
                    {
#line 1283 "diet.m"
                      mercury__diet__inter_2_6_p_0(mercury__diet__TypeInfo_for_T_49, mercury__diet__Right0_11, mercury__diet__Head0_13, mercury__diet__Stream0_14, &mercury__diet__Right1_26, mercury__diet__Head_16, mercury__diet__Stream_17);
                    }
#line 445 "diet.m"
                    if ((mercury__diet__Left0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
                      mercury__diet__V_64_64 = (MR_Integer) 0;
#line 445 "diet.m"
                    else
#line 446 "diet.m"
                      {
#line 446 "diet.m"
                        MR_Tuple mercury__diet__V_71_71 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Left0_12, (MR_Integer) 0)));
#line 446 "diet.m"
                        MR_Word mercury__diet__V_73_73;
#line 446 "diet.m"
                        MR_Word mercury__diet__V_74_74;

#line 446 "diet.m"
                        mercury__diet__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Left0_12, (MR_Integer) 1)));
#line 446 "diet.m"
                        mercury__diet__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Left0_12, (MR_Integer) 2)));
#line 446 "diet.m"
                        mercury__diet__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Left0_12, (MR_Integer) 3)));
#line 446 "diet.m"
                      }
#line 445 "diet.m"
                    if ((mercury__diet__Right1_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
                      mercury__diet__V_65_65 = (MR_Integer) 0;
#line 445 "diet.m"
                    else
#line 446 "diet.m"
                      {
#line 446 "diet.m"
                        MR_Tuple mercury__diet__V_75_75 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Right1_26, (MR_Integer) 0)));
#line 446 "diet.m"
                        MR_Word mercury__diet__V_77_77;
#line 446 "diet.m"
                        MR_Word mercury__diet__V_78_78;

#line 446 "diet.m"
                        mercury__diet__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Right1_26, (MR_Integer) 1)));
#line 446 "diet.m"
                        mercury__diet__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Right1_26, (MR_Integer) 2)));
#line 446 "diet.m"
                        mercury__diet__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Right1_26, (MR_Integer) 3)));
#line 446 "diet.m"
                      }
#line 566 "diet.m"
                    mercury__diet__succeeded = (mercury__diet__V_64_64 > mercury__diet__V_65_65);
#line 575 "diet.m"
                    if (mercury__diet__succeeded)
#line 570 "diet.m"
                      if ((mercury__diet__Left0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 568 "diet.m"
                        {
#line 569 "diet.m"
                          {
#line 569 "diet.m"
                            mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.reroot\'/2", (MR_String) "L empty");
#line 569 "diet.m"
                            return;
                          }
#line 568 "diet.m"
                        }
#line 570 "diet.m"
                      else
#line 571 "diet.m"
                        {
#line 571 "diet.m"
                          MR_Tuple mercury__diet__I_57;
#line 571 "diet.m"
                          MR_Word mercury__diet__L1_58;

#line 572 "diet.m"
                          {
#line 572 "diet.m"
                            mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_97_120_95_95_91_49_93_95_48_3_p_0(mercury__diet__Left0_12, &mercury__diet__I_57, &mercury__diet__L1_58);
                          }
#line 573 "diet.m"
                          {
#line 573 "diet.m"
                            *mercury__diet__Result_15 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__I_57, mercury__diet__L1_58, mercury__diet__Right1_26);
                          }
#line 571 "diet.m"
                        }
#line 575 "diet.m"
                    else
#line 578 "diet.m"
                      if ((mercury__diet__Right1_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 577 "diet.m"
                        *mercury__diet__Result_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 578 "diet.m"
                      else
#line 579 "diet.m"
                        {
#line 579 "diet.m"
                          MR_Word mercury__diet__R1_63;
#line 579 "diet.m"
                          MR_Tuple mercury__diet__I_69;

#line 580 "diet.m"
                          {
#line 580 "diet.m"
                            mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_95_91_49_93_95_48_3_p_0(mercury__diet__Right1_26, &mercury__diet__I_69, &mercury__diet__R1_63);
                          }
#line 581 "diet.m"
                          {
#line 581 "diet.m"
                            *mercury__diet__Result_15 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__I_69, mercury__diet__Left0_12, mercury__diet__R1_63);
                          }
#line 579 "diet.m"
                        }
#line 1283 "diet.m"
                  }
#line 1287 "diet.m"
                else
#line 1292 "diet.m"
                  {
#line 1287 "diet.m"
                    MR_Integer mercury__diet__V_31_31;

#line 433 "diet.m"
                    mercury__diet__succeeded = (mercury__diet__Y_19 < mercury__diet__B_10);
#line 433 "diet.m"
                    if (mercury__diet__succeeded)
#line 425 "diet.m"
                      {
#line 425 "diet.m"
                        mercury__diet__V_31_31 = (mercury__diet__B_10 - (MR_Integer) 1);
#line 425 "diet.m"
                      }
#line 433 "diet.m"
                    else
#line 433 "diet.m"
                      mercury__diet__V_31_31 = mercury__diet__B_10;
#line 1287 "diet.m"
                    mercury__diet__succeeded = (mercury__diet__Y_19 >= mercury__diet__V_31_31);
#line 1292 "diet.m"
                    if (mercury__diet__succeeded)
#line 1288 "diet.m"
                      {
#line 1288 "diet.m"
                        MR_Tuple mercury__diet__V_32_32;
#line 1288 "diet.m"
                        MR_Integer mercury__diet__V_33_33;
#line 1288 "diet.m"
                        MR_Integer mercury__diet__V_34_34;
#line 1288 "diet.m"
                        MR_Word mercury__diet__Right1_43;

#line 1288 "diet.m"
                        {
#line 1288 "diet.m"
                          mercury__diet__inter_2_6_p_0(mercury__diet__TypeInfo_for_T_49, mercury__diet__Right0_11, mercury__diet__Head0_13, mercury__diet__Stream0_14, &mercury__diet__Right1_43, mercury__diet__Head_16, mercury__diet__Stream_17);
                        }
#line 75 "int.opt"
                        mercury__diet__succeeded = (mercury__diet__X_18 > mercury__diet__A_9);
#line 78 "int.opt"
                        if (mercury__diet__succeeded)
#line 77 "int.opt"
                          mercury__diet__V_33_33 = mercury__diet__X_18;
#line 78 "int.opt"
                        else
#line 79 "int.opt"
                          mercury__diet__V_33_33 = mercury__diet__A_9;
#line 85 "int.opt"
                        mercury__diet__succeeded = (mercury__diet__Y_19 < mercury__diet__B_10);
#line 88 "int.opt"
                        if (mercury__diet__succeeded)
#line 87 "int.opt"
                          mercury__diet__V_34_34 = mercury__diet__Y_19;
#line 88 "int.opt"
                        else
#line 89 "int.opt"
                          mercury__diet__V_34_34 = mercury__diet__B_10;
#line 1289 "diet.m"
                        {
#line 1289 "diet.m"
                          mercury__diet__V_32_32 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1289 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_32_32, 0) = ((MR_Box) (mercury__diet__V_33_33));
#line 1289 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_32_32, 1) = ((MR_Box) (mercury__diet__V_34_34));
#line 1289 "diet.m"
                        }
#line 1289 "diet.m"
                        {
#line 1289 "diet.m"
                          *mercury__diet__Result_15 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_32_32, mercury__diet__Left0_12, mercury__diet__Right1_43);
                        }
#line 1288 "diet.m"
                      }
#line 1292 "diet.m"
                    else
#line 1293 "diet.m"
                      {
#line 1293 "diet.m"
                        MR_Word mercury__diet__Left1_27;
#line 1293 "diet.m"
                        MR_Tuple mercury__diet__V_35_35;
#line 1293 "diet.m"
                        MR_Integer mercury__diet__V_36_36;
#line 1293 "diet.m"
                        MR_Tuple mercury__diet__V_37_37;
#line 1293 "diet.m"
                        MR_Integer mercury__diet__V_38_38;

#line 1293 "diet.m"
                        {
#line 1293 "diet.m"
                          mercury__diet__V_36_36 = mercury__int__max_2_f_0(mercury__diet__X_18, mercury__diet__A_9);
                        }
#line 1293 "diet.m"
                        {
#line 1293 "diet.m"
                          mercury__diet__V_35_35 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1293 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, 0) = ((MR_Box) (mercury__diet__V_36_36));
#line 1293 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, 1) = ((MR_Box) (mercury__diet__Y_19));
#line 1293 "diet.m"
                        }
#line 1293 "diet.m"
                        {
#line 1293 "diet.m"
                          mercury__diet__Left1_27 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeInfo_for_T_49, mercury__diet__V_35_35, mercury__diet__Left0_12);
                        }
#line 429 "diet.m"
                        mercury__diet__V_38_38 = (mercury__diet__Y_19 + (MR_Integer) 1);
#line 1294 "diet.m"
                        {
#line 1294 "diet.m"
                          mercury__diet__V_37_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1294 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_37_37, 0) = ((MR_Box) (mercury__diet__V_38_38));
#line 1294 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_37_37, 1) = ((MR_Box) (mercury__diet__B_10));
#line 1294 "diet.m"
                        }
#line 1294 "diet.m"
                        /* direct tailcall eliminated */
#line 1294 "diet.m"
                        {
#line 1294 "diet.m"
                          MR_Tuple mercury__diet__HeadVar__1__tmp_copy_1 = mercury__diet__V_37_37;
#line 1294 "diet.m"
                          MR_Word mercury__diet__Left0__tmp_copy_12 = mercury__diet__Left1_27;

#line 1294 "diet.m"
                          mercury__diet__Left0_12 = mercury__diet__Left0__tmp_copy_12;
#line 1294 "diet.m"
                          mercury__diet__HeadVar__1_1 = mercury__diet__HeadVar__1__tmp_copy_1;
#line 1294 "diet.m"
                        }
#line 1294 "diet.m"
                        continue;
#line 1293 "diet.m"
                      }
#line 1292 "diet.m"
                  }
#line 1287 "diet.m"
              }
#line 1269 "diet.m"
          }
#line 1262 "diet.m"
      }
#line 1262 "diet.m"
      break;
#line 1262 "diet.m"
    }
#line 1257 "diet.m"
}

#line 1227 "diet.m"
static void MR_CALL 
mercury__diet__inter_2_6_p_0(
#line 1227 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_26,
#line 1227 "diet.m"
  MR_Word mercury__diet__Input_7,
#line 1227 "diet.m"
  MR_Word mercury__diet__Head0_8,
#line 1227 "diet.m"
  MR_Word mercury__diet__Stream0_9,
#line 1227 "diet.m"
  MR_Word * mercury__diet__Result_10,
#line 1227 "diet.m"
  MR_Word * mercury__diet__Head_11,
#line 1227 "diet.m"
  MR_Word * mercury__diet__Stream_12)
#line 1227 "diet.m"
{
#line 1236 "diet.m"
  {
#line 1236 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1236 "diet.m"
    if ((mercury__diet__Head0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1232 "diet.m"
      {
#line 1233 "diet.m"
        *mercury__diet__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1234 "diet.m"
        *mercury__diet__Head_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1235 "diet.m"
        *mercury__diet__Stream_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1232 "diet.m"
      }
#line 1236 "diet.m"
    else
#line 1237 "diet.m"
      {
#line 1237 "diet.m"
        MR_Integer mercury__diet__X_13;
#line 1237 "diet.m"
        MR_Tuple mercury__diet__V_23_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_8, (MR_Integer) 0)));
#line 1237 "diet.m"
        MR_Integer mercury__diet___Y_14;

#line 1237 "diet.m"
        mercury__diet__X_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_23_23, (MR_Integer) 0)));
#line 1237 "diet.m"
        mercury__diet___Y_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_23_23, (MR_Integer) 1)));
#line 1243 "diet.m"
        if ((mercury__diet__Input_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1239 "diet.m"
          {
#line 1240 "diet.m"
            *mercury__diet__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1241 "diet.m"
            *mercury__diet__Head_11 = mercury__diet__Head0_8;
#line 1242 "diet.m"
            *mercury__diet__Stream_12 = mercury__diet__Stream0_9;
#line 1239 "diet.m"
          }
#line 1243 "diet.m"
        else
#line 1244 "diet.m"
          {
#line 1244 "diet.m"
            MR_Integer mercury__diet__A_15;
#line 1244 "diet.m"
            MR_Word mercury__diet__Left0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 2)));
#line 1244 "diet.m"
            MR_Word mercury__diet__Right0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 3)));
#line 1244 "diet.m"
            MR_Word mercury__diet__Left1_20;
#line 1244 "diet.m"
            MR_Word mercury__diet__Head1_21;
#line 1244 "diet.m"
            MR_Word mercury__diet__Stream1_22;
#line 1244 "diet.m"
            MR_Tuple mercury__diet__V_24_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 0)));
#line 1244 "diet.m"
            MR_Integer mercury__diet__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Input_7, (MR_Integer) 1)));
#line 1244 "diet.m"
            MR_Integer mercury__diet__B_16;

#line 1244 "diet.m"
            mercury__diet__A_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 0)));
#line 1244 "diet.m"
            mercury__diet__B_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 1)));
#line 1245 "diet.m"
            mercury__diet__succeeded = (mercury__diet__X_13 < mercury__diet__A_15);
#line 1247 "diet.m"
            if (mercury__diet__succeeded)
#line 1246 "diet.m"
              {
#line 1246 "diet.m"
                mercury__diet__inter_2_6_p_0(mercury__diet__TypeInfo_for_T_26, mercury__diet__Left0_18, mercury__diet__Head0_8, mercury__diet__Stream0_9, &mercury__diet__Left1_20, &mercury__diet__Head1_21, &mercury__diet__Stream1_22);
              }
#line 1247 "diet.m"
            else
#line 1248 "diet.m"
              {
#line 1248 "diet.m"
                mercury__diet__Left1_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1249 "diet.m"
                mercury__diet__Head1_21 = mercury__diet__Head0_8;
#line 1250 "diet.m"
                mercury__diet__Stream1_22 = mercury__diet__Stream0_9;
#line 1248 "diet.m"
              }
#line 1252 "diet.m"
            {
#line 1252 "diet.m"
              mercury__diet__inter_help_8_p_0(mercury__diet__TypeInfo_for_T_26, mercury__diet__V_24_24, mercury__diet__Right0_19, mercury__diet__Left1_20, mercury__diet__Head1_21, mercury__diet__Stream1_22, mercury__diet__Result_10, mercury__diet__Head_11, mercury__diet__Stream_12);
#line 1252 "diet.m"
              return;
            }
#line 1244 "diet.m"
          }
#line 1237 "diet.m"
      }
#line 1236 "diet.m"
  }
#line 1227 "diet.m"
}

#line 1213 "diet.m"
MR_Word MR_CALL 
mercury__diet__inter_2_f_0(
#line 1213 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_18,
#line 1213 "diet.m"
  MR_Word mercury__diet__Input_4,
#line 1213 "diet.m"
  MR_Word mercury__diet__Stream0_5)
#line 1213 "diet.m"
{
#line 1218 "diet.m"
  while (MR_TRUE)
#line 1218 "diet.m"
    {
#line 1218 "diet.m"
      /* tailcall optimized into a loop */
#line 1218 "diet.m"
      {
#line 1218 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 1218 "diet.m"
        MR_Word mercury__diet__Result_6;
#line 1216 "diet.m"
        MR_Integer mercury__diet__V_15_15;
#line 1216 "diet.m"
        MR_Integer mercury__diet__V_16_16;

#line 445 "diet.m"
        if ((mercury__diet__Stream0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
          mercury__diet__V_15_15 = (MR_Integer) 0;
#line 445 "diet.m"
        else
#line 446 "diet.m"
          {
#line 446 "diet.m"
            MR_Tuple mercury__diet__V_19_19 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 0)));
#line 446 "diet.m"
            MR_Word mercury__diet__V_21_21;
#line 446 "diet.m"
            MR_Word mercury__diet__V_22_22;

#line 446 "diet.m"
            mercury__diet__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 1)));
#line 446 "diet.m"
            mercury__diet__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 2)));
#line 446 "diet.m"
            mercury__diet__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 3)));
#line 446 "diet.m"
          }
#line 445 "diet.m"
        if ((mercury__diet__Input_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
          mercury__diet__V_16_16 = (MR_Integer) 0;
#line 445 "diet.m"
        else
#line 446 "diet.m"
          {
#line 446 "diet.m"
            MR_Tuple mercury__diet__V_23_23 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 0)));
#line 446 "diet.m"
            MR_Word mercury__diet__V_25_25;
#line 446 "diet.m"
            MR_Word mercury__diet__V_26_26;

#line 446 "diet.m"
            mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 1)));
#line 446 "diet.m"
            mercury__diet__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 2)));
#line 446 "diet.m"
            mercury__diet__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 3)));
#line 446 "diet.m"
          }
#line 1216 "diet.m"
        mercury__diet__succeeded = (mercury__diet__V_15_15 > mercury__diet__V_16_16);
#line 1218 "diet.m"
        if (mercury__diet__succeeded)
#line 1217 "diet.m"
          {
#line 1217 "diet.m"
            /* direct tailcall eliminated */
#line 1217 "diet.m"
            {
#line 1217 "diet.m"
              MR_Word mercury__diet__Input__tmp_copy_4 = mercury__diet__Stream0_5;
#line 1217 "diet.m"
              MR_Word mercury__diet__Stream0__tmp_copy_5 = mercury__diet__Input_4;

#line 1217 "diet.m"
              mercury__diet__Stream0_5 = mercury__diet__Stream0__tmp_copy_5;
#line 1217 "diet.m"
              mercury__diet__Input_4 = mercury__diet__Input__tmp_copy_4;
#line 1217 "diet.m"
            }
#line 1217 "diet.m"
            continue;
#line 1217 "diet.m"
          }
#line 1218 "diet.m"
        else
#line 1221 "diet.m"
          if ((mercury__diet__Stream0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1220 "diet.m"
            mercury__diet__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1221 "diet.m"
          else
#line 1222 "diet.m"
            {
#line 1222 "diet.m"
              MR_Tuple mercury__diet__Head_11;
#line 1222 "diet.m"
              MR_Word mercury__diet__Stream_12;
#line 1222 "diet.m"
              MR_Word mercury__diet__V_17_17;
#line 1224 "diet.m"
              MR_Word mercury__diet__V_13_13;
#line 1224 "diet.m"
              MR_Word mercury__diet__V_14_14;

#line 1223 "diet.m"
              {
#line 1223 "diet.m"
                mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__Stream0_5, &mercury__diet__Head_11, &mercury__diet__Stream_12);
              }
#line 1224 "diet.m"
              {
#line 1224 "diet.m"
                mercury__diet__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1224 "diet.m"
                MR_hl_field(MR_mktag(1), mercury__diet__V_17_17, 0) = ((MR_Box) (mercury__diet__Head_11));
#line 1224 "diet.m"
              }
#line 1224 "diet.m"
              {
#line 1224 "diet.m"
                mercury__diet__inter_2_6_p_0(mercury__diet__TypeInfo_for_T_18, mercury__diet__Input_4, mercury__diet__V_17_17, mercury__diet__Stream_12, &mercury__diet__Result_6, &mercury__diet__V_13_13, &mercury__diet__V_14_14);
              }
#line 1222 "diet.m"
            }
#line 1218 "diet.m"
        return mercury__diet__Result_6;
#line 1218 "diet.m"
      }
#line 1218 "diet.m"
      break;
#line 1218 "diet.m"
    }
#line 1213 "diet.m"
}

#line 1137 "diet.m"
static void MR_CALL 
mercury__diet__union_helper_9_p_0(
#line 1137 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_55,
#line 1137 "diet.m"
  MR_Word mercury__diet__Left0_10,
#line 1137 "diet.m"
  MR_Tuple mercury__diet__HeadVar__2_2,
#line 1137 "diet.m"
  MR_Word mercury__diet__Right0_13,
#line 1137 "diet.m"
  MR_Word mercury__diet__Limit_14,
#line 1137 "diet.m"
  MR_Word mercury__diet__Head0_15,
#line 1137 "diet.m"
  MR_Word mercury__diet__Stream0_16,
#line 1137 "diet.m"
  MR_Word * mercury__diet__Left_17,
#line 1137 "diet.m"
  MR_Word * mercury__diet__Head_18,
#line 1137 "diet.m"
  MR_Word * mercury__diet__Stream_19)
#line 1137 "diet.m"
{
#line 1142 "diet.m"
  while (MR_TRUE)
#line 1142 "diet.m"
    {
#line 1142 "diet.m"
      /* tailcall optimized into a loop */
#line 1142 "diet.m"
      {
#line 1142 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 1142 "diet.m"
        MR_Integer mercury__diet__A_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
#line 1142 "diet.m"
        MR_Integer mercury__diet__B_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));

#line 1148 "diet.m"
        if ((mercury__diet__Head0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1144 "diet.m"
          {
#line 1145 "diet.m"
            {
#line 1145 "diet.m"
              *mercury__diet__Left_17 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__HeadVar__2_2, mercury__diet__Left0_10, mercury__diet__Right0_13);
            }
#line 1146 "diet.m"
            *mercury__diet__Head_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1147 "diet.m"
            *mercury__diet__Stream_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1144 "diet.m"
          }
#line 1148 "diet.m"
        else
#line 1149 "diet.m"
          {
#line 1149 "diet.m"
            MR_Integer mercury__diet__X_20;
#line 1149 "diet.m"
            MR_Integer mercury__diet__Y_21;
#line 1149 "diet.m"
            MR_Tuple mercury__diet__V_26_26 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_15, (MR_Integer) 0)));
#line 1151 "diet.m"
            MR_Integer mercury__diet__V_27_27;
#line 1151 "diet.m"
            MR_Integer mercury__diet__V_57_57;

#line 1149 "diet.m"
            mercury__diet__X_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_26_26, (MR_Integer) 0)));
#line 1149 "diet.m"
            mercury__diet__Y_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_26_26, (MR_Integer) 1)));
#line 1151 "diet.m"
            mercury__diet__succeeded = (mercury__diet__Y_21 < mercury__diet__A_11);
#line 1151 "diet.m"
            if (mercury__diet__succeeded)
#line 1151 "diet.m"
              {
#line 425 "diet.m"
                mercury__diet__V_57_57 = (MR_Integer) 1;
#line 425 "diet.m"
                mercury__diet__V_27_27 = (mercury__diet__A_11 - mercury__diet__V_57_57);
#line 1152 "diet.m"
                mercury__diet__succeeded = (mercury__diet__Y_21 < mercury__diet__V_27_27);
#line 1151 "diet.m"
              }
#line 1158 "diet.m"
            if (mercury__diet__succeeded)
#line 1154 "diet.m"
              {
#line 1154 "diet.m"
                MR_Word mercury__diet__Left1_22;
#line 1154 "diet.m"
                MR_Word mercury__diet__Head1_23;
#line 1154 "diet.m"
                MR_Word mercury__diet__Stream1_24;

#line 1154 "diet.m"
                {
#line 1154 "diet.m"
                  mercury__diet__Left1_22 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeInfo_for_T_55, mercury__diet__V_26_26, mercury__diet__Left0_10);
                }
#line 603 "diet.m"
                if ((mercury__diet__Stream0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 600 "diet.m"
                  {
#line 601 "diet.m"
                    mercury__diet__Head1_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "diet.m"
                    mercury__diet__Stream1_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 600 "diet.m"
                  }
#line 603 "diet.m"
                else
#line 604 "diet.m"
                  {
#line 604 "diet.m"
                    MR_Tuple mercury__diet__X_65;

#line 605 "diet.m"
                    {
#line 605 "diet.m"
                      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__Stream0_16, &mercury__diet__X_65, &mercury__diet__Stream1_24);
                    }
#line 606 "diet.m"
                    {
#line 606 "diet.m"
                      mercury__diet__Head1_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 606 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__Head1_23, 0) = ((MR_Box) (mercury__diet__X_65));
#line 606 "diet.m"
                    }
#line 604 "diet.m"
                  }
#line 1156 "diet.m"
                /* direct tailcall eliminated */
#line 1156 "diet.m"
                {
#line 1156 "diet.m"
                  MR_Word mercury__diet__Left0__tmp_copy_10 = mercury__diet__Left1_22;
#line 1156 "diet.m"
                  MR_Word mercury__diet__Head0__tmp_copy_15 = mercury__diet__Head1_23;
#line 1156 "diet.m"
                  MR_Word mercury__diet__Stream0__tmp_copy_16 = mercury__diet__Stream1_24;

#line 1156 "diet.m"
                  mercury__diet__Stream0_16 = mercury__diet__Stream0__tmp_copy_16;
#line 1156 "diet.m"
                  mercury__diet__Head0_15 = mercury__diet__Head0__tmp_copy_15;
#line 1156 "diet.m"
                  mercury__diet__Left0_10 = mercury__diet__Left0__tmp_copy_10;
#line 1156 "diet.m"
                }
#line 1156 "diet.m"
                continue;
#line 1154 "diet.m"
              }
#line 1158 "diet.m"
            else
#line 1167 "diet.m"
              {
#line 1159 "diet.m"
                MR_Integer mercury__diet__V_30_30;
#line 1159 "diet.m"
                MR_Integer mercury__diet__V_67_67;

#line 1159 "diet.m"
                mercury__diet__succeeded = (mercury__diet__X_20 > mercury__diet__B_12);
#line 1159 "diet.m"
                if (mercury__diet__succeeded)
#line 1159 "diet.m"
                  {
#line 429 "diet.m"
                    mercury__diet__V_67_67 = (MR_Integer) 1;
#line 429 "diet.m"
                    mercury__diet__V_30_30 = (mercury__diet__B_12 + mercury__diet__V_67_67);
#line 1160 "diet.m"
                    mercury__diet__succeeded = (mercury__diet__X_20 > mercury__diet__V_30_30);
#line 1159 "diet.m"
                  }
#line 1167 "diet.m"
                if (mercury__diet__succeeded)
#line 1163 "diet.m"
                  {
#line 1163 "diet.m"
                    MR_Word mercury__diet__Right1_25;

#line 1162 "diet.m"
                    {
#line 1162 "diet.m"
                      mercury__diet__union_2_7_p_0(mercury__diet__TypeInfo_for_T_55, mercury__diet__Right0_13, mercury__diet__Limit_14, mercury__diet__Head0_15, mercury__diet__Stream0_16, &mercury__diet__Right1_25, mercury__diet__Head_18, mercury__diet__Stream_19);
                    }
#line 1164 "diet.m"
                    {
#line 1164 "diet.m"
                      *mercury__diet__Left_17 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__HeadVar__2_2, mercury__diet__Left0_10, mercury__diet__Right1_25);
                    }
#line 1163 "diet.m"
                  }
#line 1167 "diet.m"
                else
#line 1173 "diet.m"
                  {
#line 1168 "diet.m"
                    mercury__diet__succeeded = (mercury__diet__B_12 >= mercury__diet__Y_21);
#line 1173 "diet.m"
                    if (mercury__diet__succeeded)
#line 1170 "diet.m"
                      {
#line 1170 "diet.m"
                        MR_Tuple mercury__diet__V_32_32;
#line 1170 "diet.m"
                        MR_Integer mercury__diet__V_33_33;
#line 1170 "diet.m"
                        MR_Word mercury__diet__Head1_42;
#line 1170 "diet.m"
                        MR_Word mercury__diet__Stream1_43;

#line 603 "diet.m"
                        if ((mercury__diet__Stream0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 600 "diet.m"
                          {
#line 601 "diet.m"
                            mercury__diet__Head1_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "diet.m"
                            mercury__diet__Stream1_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 600 "diet.m"
                          }
#line 603 "diet.m"
                        else
#line 604 "diet.m"
                          {
#line 604 "diet.m"
                            MR_Tuple mercury__diet__X_75;

#line 605 "diet.m"
                            {
#line 605 "diet.m"
                              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__Stream0_16, &mercury__diet__X_75, &mercury__diet__Stream1_43);
                            }
#line 606 "diet.m"
                            {
#line 606 "diet.m"
                              mercury__diet__Head1_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 606 "diet.m"
                              MR_hl_field(MR_mktag(1), mercury__diet__Head1_42, 0) = ((MR_Box) (mercury__diet__X_75));
#line 606 "diet.m"
                            }
#line 604 "diet.m"
                          }
#line 85 "int.opt"
                        mercury__diet__succeeded = (mercury__diet__A_11 < mercury__diet__X_20);
#line 88 "int.opt"
                        if (mercury__diet__succeeded)
#line 87 "int.opt"
                          mercury__diet__V_33_33 = mercury__diet__A_11;
#line 88 "int.opt"
                        else
#line 89 "int.opt"
                          mercury__diet__V_33_33 = mercury__diet__X_20;
#line 1171 "diet.m"
                        {
#line 1171 "diet.m"
                          mercury__diet__V_32_32 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1171 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_32_32, 0) = ((MR_Box) (mercury__diet__V_33_33));
#line 1171 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_32_32, 1) = ((MR_Box) (mercury__diet__B_12));
#line 1171 "diet.m"
                        }
#line 1171 "diet.m"
                        /* direct tailcall eliminated */
#line 1171 "diet.m"
                        {
#line 1171 "diet.m"
                          MR_Tuple mercury__diet__HeadVar__2__tmp_copy_2 = mercury__diet__V_32_32;
#line 1171 "diet.m"
                          MR_Word mercury__diet__Head0__tmp_copy_15 = mercury__diet__Head1_42;
#line 1171 "diet.m"
                          MR_Word mercury__diet__Stream0__tmp_copy_16 = mercury__diet__Stream1_43;

#line 1171 "diet.m"
                          mercury__diet__Stream0_16 = mercury__diet__Stream0__tmp_copy_16;
#line 1171 "diet.m"
                          mercury__diet__Head0_15 = mercury__diet__Head0__tmp_copy_15;
#line 1171 "diet.m"
                          mercury__diet__HeadVar__2_2 = mercury__diet__HeadVar__2__tmp_copy_2;
#line 1171 "diet.m"
                        }
#line 1171 "diet.m"
                        continue;
#line 1170 "diet.m"
                      }
#line 1173 "diet.m"
                    else
#line 1179 "diet.m"
                      {
#line 1190 "diet.m"
                        MR_Integer mercury__diet__U_83;

#line 1190 "diet.m"
                        mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Limit_14)) == (MR_mktag((MR_Integer) 1)));
#line 1190 "diet.m"
                        if (mercury__diet__succeeded)
#line 1190 "diet.m"
                          {
#line 1190 "diet.m"
                            mercury__diet__U_83 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Limit_14, (MR_Integer) 0)));
#line 1191 "diet.m"
                            mercury__diet__succeeded = (mercury__diet__Y_21 >= mercury__diet__U_83);
#line 1190 "diet.m"
                          }
#line 1179 "diet.m"
                        if (mercury__diet__succeeded)
#line 1176 "diet.m"
                          {
#line 1176 "diet.m"
                            MR_Tuple mercury__diet__V_34_34;
#line 1176 "diet.m"
                            MR_Integer mercury__diet__V_35_35;

#line 1176 "diet.m"
                            *mercury__diet__Left_17 = mercury__diet__Left0_10;
#line 85 "int.opt"
                            mercury__diet__succeeded = (mercury__diet__A_11 < mercury__diet__X_20);
#line 88 "int.opt"
                            if (mercury__diet__succeeded)
#line 87 "int.opt"
                              mercury__diet__V_35_35 = mercury__diet__A_11;
#line 88 "int.opt"
                            else
#line 89 "int.opt"
                              mercury__diet__V_35_35 = mercury__diet__X_20;
#line 1177 "diet.m"
                            {
#line 1177 "diet.m"
                              mercury__diet__V_34_34 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1177 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_34_34, 0) = ((MR_Box) (mercury__diet__V_35_35));
#line 1177 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_34_34, 1) = ((MR_Box) (mercury__diet__Y_21));
#line 1177 "diet.m"
                            }
#line 1177 "diet.m"
                            {
#line 1177 "diet.m"
                              MR_Word base;
#line 1177 "diet.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "diet.m"
                              *mercury__diet__Head_18 = base;
#line 1177 "diet.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_34_34));
#line 1177 "diet.m"
                            }
#line 1178 "diet.m"
                            *mercury__diet__Stream_19 = mercury__diet__Stream0_16;
#line 1176 "diet.m"
                          }
#line 1179 "diet.m"
                        else
#line 1181 "diet.m"
                          {
#line 1181 "diet.m"
                            MR_Word mercury__diet__V_36_36;
#line 1181 "diet.m"
                            MR_Tuple mercury__diet__V_37_37;
#line 1181 "diet.m"
                            MR_Integer mercury__diet__V_38_38;
#line 1181 "diet.m"
                            MR_Word mercury__diet__Right1_46;

#line 85 "int.opt"
                            mercury__diet__succeeded = (mercury__diet__A_11 < mercury__diet__X_20);
#line 88 "int.opt"
                            if (mercury__diet__succeeded)
#line 87 "int.opt"
                              mercury__diet__V_38_38 = mercury__diet__A_11;
#line 88 "int.opt"
                            else
#line 89 "int.opt"
                              mercury__diet__V_38_38 = mercury__diet__X_20;
#line 1180 "diet.m"
                            {
#line 1180 "diet.m"
                              mercury__diet__V_37_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1180 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_37_37, 0) = ((MR_Box) (mercury__diet__V_38_38));
#line 1180 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_37_37, 1) = ((MR_Box) (mercury__diet__Y_21));
#line 1180 "diet.m"
                            }
#line 1180 "diet.m"
                            {
#line 1180 "diet.m"
                              mercury__diet__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1180 "diet.m"
                              MR_hl_field(MR_mktag(1), mercury__diet__V_36_36, 0) = ((MR_Box) (mercury__diet__V_37_37));
#line 1180 "diet.m"
                            }
#line 1180 "diet.m"
                            {
#line 1180 "diet.m"
                              mercury__diet__union_2_7_p_0(mercury__diet__TypeInfo_for_T_55, mercury__diet__Right0_13, mercury__diet__Limit_14, mercury__diet__V_36_36, mercury__diet__Stream0_16, &mercury__diet__Right1_46, mercury__diet__Head_18, mercury__diet__Stream_19);
                            }
#line 1182 "diet.m"
                            {
#line 1182 "diet.m"
                              *mercury__diet__Left_17 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_114_111_111_116_95_95_91_49_93_95_48_2_f_0(mercury__diet__Left0_10, mercury__diet__Right1_46);
                            }
#line 1181 "diet.m"
                          }
#line 1179 "diet.m"
                      }
#line 1173 "diet.m"
                  }
#line 1167 "diet.m"
              }
#line 1149 "diet.m"
          }
#line 1142 "diet.m"
      }
#line 1142 "diet.m"
      break;
#line 1142 "diet.m"
    }
#line 1137 "diet.m"
}

#line 1106 "diet.m"
static void MR_CALL 
mercury__diet__union_2_7_p_0(
#line 1106 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_30,
#line 1106 "diet.m"
  MR_Word mercury__diet__Input_8,
#line 1106 "diet.m"
  MR_Word mercury__diet__Limit_9,
#line 1106 "diet.m"
  MR_Word mercury__diet__Head0_10,
#line 1106 "diet.m"
  MR_Word mercury__diet__Stream0_11,
#line 1106 "diet.m"
  MR_Word * mercury__diet__Left_12,
#line 1106 "diet.m"
  MR_Word * mercury__diet__Head_13,
#line 1106 "diet.m"
  MR_Word * mercury__diet__Stream_14)
#line 1106 "diet.m"
{
#line 1115 "diet.m"
  {
#line 1115 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1115 "diet.m"
    if ((mercury__diet__Head0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1111 "diet.m"
      {
#line 1112 "diet.m"
        *mercury__diet__Left_12 = mercury__diet__Input_8;
#line 1113 "diet.m"
        *mercury__diet__Head_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1114 "diet.m"
        *mercury__diet__Stream_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1111 "diet.m"
      }
#line 1115 "diet.m"
    else
#line 1116 "diet.m"
      {
#line 1116 "diet.m"
        MR_Integer mercury__diet__X_15;
#line 1116 "diet.m"
        MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head0_10, (MR_Integer) 0)));
#line 1116 "diet.m"
        MR_Integer mercury__diet___Y_16;

#line 1116 "diet.m"
        mercury__diet__X_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0)));
#line 1116 "diet.m"
        mercury__diet___Y_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1)));
#line 1122 "diet.m"
        if ((mercury__diet__Input_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1118 "diet.m"
          {
#line 1119 "diet.m"
            *mercury__diet__Left_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1120 "diet.m"
            *mercury__diet__Head_13 = mercury__diet__Head0_10;
#line 1121 "diet.m"
            *mercury__diet__Stream_14 = mercury__diet__Stream0_11;
#line 1118 "diet.m"
          }
#line 1122 "diet.m"
        else
#line 1123 "diet.m"
          {
#line 1123 "diet.m"
            MR_Integer mercury__diet__A_17;
#line 1123 "diet.m"
            MR_Word mercury__diet__Left0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_8, (MR_Integer) 2)));
#line 1123 "diet.m"
            MR_Word mercury__diet__Right0_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_8, (MR_Integer) 3)));
#line 1123 "diet.m"
            MR_Word mercury__diet__Left1_22;
#line 1123 "diet.m"
            MR_Word mercury__diet__Head1_23;
#line 1123 "diet.m"
            MR_Word mercury__diet__Stream1_24;
#line 1123 "diet.m"
            MR_Tuple mercury__diet__V_26_26 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Input_8, (MR_Integer) 0)));
#line 1123 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Input_8, (MR_Integer) 1)));
#line 1123 "diet.m"
            MR_Integer mercury__diet__B_18;

#line 1123 "diet.m"
            mercury__diet__A_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_26_26, (MR_Integer) 0)));
#line 1123 "diet.m"
            mercury__diet__B_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_26_26, (MR_Integer) 1)));
#line 1124 "diet.m"
            mercury__diet__succeeded = (mercury__diet__X_15 < mercury__diet__A_17);
#line 1127 "diet.m"
            if (mercury__diet__succeeded)
#line 1125 "diet.m"
              {
#line 1125 "diet.m"
                MR_Word mercury__diet__V_27_27;
#line 1125 "diet.m"
                MR_Integer mercury__diet__V_28_28 = (mercury__diet__A_17 - (MR_Integer) 1);

#line 1125 "diet.m"
                {
#line 1125 "diet.m"
                  mercury__diet__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "diet.m"
                  MR_hl_field(MR_mktag(1), mercury__diet__V_27_27, 0) = ((MR_Box) (mercury__diet__V_28_28));
#line 1125 "diet.m"
                }
#line 1125 "diet.m"
                {
#line 1125 "diet.m"
                  mercury__diet__union_2_7_p_0(mercury__diet__TypeInfo_for_T_30, mercury__diet__Left0_20, mercury__diet__V_27_27, mercury__diet__Head0_10, mercury__diet__Stream0_11, &mercury__diet__Left1_22, &mercury__diet__Head1_23, &mercury__diet__Stream1_24);
                }
#line 1125 "diet.m"
              }
#line 1127 "diet.m"
            else
#line 1128 "diet.m"
              {
#line 1128 "diet.m"
                mercury__diet__Left1_22 = mercury__diet__Left0_20;
#line 1129 "diet.m"
                mercury__diet__Head1_23 = mercury__diet__Head0_10;
#line 1130 "diet.m"
                mercury__diet__Stream1_24 = mercury__diet__Stream0_11;
#line 1128 "diet.m"
              }
#line 1132 "diet.m"
            {
#line 1132 "diet.m"
              mercury__diet__union_helper_9_p_0(mercury__diet__TypeInfo_for_T_30, mercury__diet__Left1_22, mercury__diet__V_26_26, mercury__diet__Right0_21, mercury__diet__Limit_9, mercury__diet__Head1_23, mercury__diet__Stream1_24, mercury__diet__Left_12, mercury__diet__Head_13, mercury__diet__Stream_14);
#line 1132 "diet.m"
              return;
            }
#line 1123 "diet.m"
          }
#line 1116 "diet.m"
      }
#line 1115 "diet.m"
  }
#line 1106 "diet.m"
}

#line 1055 "diet.m"
void MR_CALL 
mercury__diet__split_2_5_p_0(
#line 1055 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_25,
#line 1055 "diet.m"
  MR_Integer mercury__diet__X_6,
#line 1055 "diet.m"
  MR_Word mercury__diet__Set_7,
#line 1055 "diet.m"
  MR_Word * mercury__diet__Lesser_8,
#line 1055 "diet.m"
  MR_Word * mercury__diet__IsPresent_9,
#line 1055 "diet.m"
  MR_Word * mercury__diet__Greater_10)
#line 1055 "diet.m"
{
#line 1064 "diet.m"
  {
#line 1064 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1064 "diet.m"
    if ((mercury__diet__Set_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1060 "diet.m"
      {
#line 1061 "diet.m"
        *mercury__diet__IsPresent_9 = (MR_Integer) 0;
#line 1062 "diet.m"
        *mercury__diet__Lesser_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1063 "diet.m"
        *mercury__diet__Greater_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1060 "diet.m"
      }
#line 1064 "diet.m"
    else
#line 1065 "diet.m"
      {
#line 1065 "diet.m"
        MR_Integer mercury__diet__A_11;
#line 1065 "diet.m"
        MR_Integer mercury__diet__B_12;
#line 1065 "diet.m"
        MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_7, (MR_Integer) 2)));
#line 1065 "diet.m"
        MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_7, (MR_Integer) 3)));
#line 1065 "diet.m"
        MR_Tuple mercury__diet__V_18_18 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set_7, (MR_Integer) 0)));
#line 1065 "diet.m"
        MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set_7, (MR_Integer) 1)));

#line 1065 "diet.m"
        mercury__diet__A_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_18_18, (MR_Integer) 0)));
#line 1065 "diet.m"
        mercury__diet__B_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_18_18, (MR_Integer) 1)));
#line 1066 "diet.m"
        mercury__diet__succeeded = (mercury__diet__X_6 < mercury__diet__A_11);
#line 1069 "diet.m"
        if (mercury__diet__succeeded)
#line 1067 "diet.m"
          {
#line 1067 "diet.m"
            MR_Word mercury__diet__RL_16;

#line 1067 "diet.m"
            {
#line 1067 "diet.m"
              mercury__diet__split_2_5_p_0(mercury__diet__TypeInfo_for_T_25, mercury__diet__X_6, mercury__diet__L_14, mercury__diet__Lesser_8, mercury__diet__IsPresent_9, &mercury__diet__RL_16);
            }
#line 1068 "diet.m"
            {
#line 1068 "diet.m"
              *mercury__diet__Greater_10 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_18_18, mercury__diet__RL_16, mercury__diet__R_15);
            }
#line 1067 "diet.m"
          }
#line 1069 "diet.m"
        else
#line 1072 "diet.m"
          {
#line 1069 "diet.m"
            mercury__diet__succeeded = (mercury__diet__B_12 < mercury__diet__X_6);
#line 1072 "diet.m"
            if (mercury__diet__succeeded)
#line 1070 "diet.m"
              {
#line 1070 "diet.m"
                MR_Word mercury__diet__LR_17;

#line 1070 "diet.m"
                {
#line 1070 "diet.m"
                  mercury__diet__split_2_5_p_0(mercury__diet__TypeInfo_for_T_25, mercury__diet__X_6, mercury__diet__R_15, &mercury__diet__LR_17, mercury__diet__IsPresent_9, mercury__diet__Greater_10);
                }
#line 1071 "diet.m"
                {
#line 1071 "diet.m"
                  *mercury__diet__Lesser_8 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_18_18, mercury__diet__L_14, mercury__diet__LR_17);
                }
#line 1070 "diet.m"
              }
#line 1072 "diet.m"
            else
#line 1073 "diet.m"
              {
#line 1073 "diet.m"
                *mercury__diet__IsPresent_9 = (MR_Integer) 1;
#line 1074 "diet.m"
                mercury__diet__succeeded = (mercury__diet__X_6 == mercury__diet__A_11);
#line 1076 "diet.m"
                if (mercury__diet__succeeded)
#line 1075 "diet.m"
                  *mercury__diet__Lesser_8 = mercury__diet__L_14;
#line 1076 "diet.m"
                else
#line 1077 "diet.m"
                  {
#line 1077 "diet.m"
                    MR_Tuple mercury__diet__V_21_21;
#line 1077 "diet.m"
                    MR_Integer mercury__diet__V_22_22 = (mercury__diet__X_6 - (MR_Integer) 1);

#line 1077 "diet.m"
                    {
#line 1077 "diet.m"
                      mercury__diet__V_21_21 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1077 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_21_21, 0) = ((MR_Box) (mercury__diet__A_11));
#line 1077 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_21_21, 1) = ((MR_Box) (mercury__diet__V_22_22));
#line 1077 "diet.m"
                    }
#line 1077 "diet.m"
                    {
#line 1077 "diet.m"
                      *mercury__diet__Lesser_8 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeInfo_for_T_25, mercury__diet__V_21_21, mercury__diet__L_14);
                    }
#line 1077 "diet.m"
                  }
#line 1079 "diet.m"
                mercury__diet__succeeded = (mercury__diet__X_6 == mercury__diet__B_12);
#line 1081 "diet.m"
                if (mercury__diet__succeeded)
#line 1080 "diet.m"
                  *mercury__diet__Greater_10 = mercury__diet__R_15;
#line 1081 "diet.m"
                else
#line 1082 "diet.m"
                  {
#line 1082 "diet.m"
                    MR_Tuple mercury__diet__V_23_23;
#line 1082 "diet.m"
                    MR_Integer mercury__diet__V_24_24 = (mercury__diet__X_6 + (MR_Integer) 1);

#line 1082 "diet.m"
                    {
#line 1082 "diet.m"
                      mercury__diet__V_23_23 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1082 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_23_23, 0) = ((MR_Box) (mercury__diet__V_24_24));
#line 1082 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_23_23, 1) = ((MR_Box) (mercury__diet__B_12));
#line 1082 "diet.m"
                    }
#line 1082 "diet.m"
                    {
#line 1082 "diet.m"
                      *mercury__diet__Greater_10 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeInfo_for_T_25, mercury__diet__V_23_23, mercury__diet__R_15);
                    }
#line 1082 "diet.m"
                  }
#line 1073 "diet.m"
              }
#line 1072 "diet.m"
          }
#line 1065 "diet.m"
      }
#line 1064 "diet.m"
  }
#line 1055 "diet.m"
}

#line 986 "diet.m"
MR_bool MR_CALL 
mercury__diet__remove_2_3_p_0(
#line 986 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_30,
#line 986 "diet.m"
  MR_Integer mercury__diet__HeadVar__1_1,
#line 986 "diet.m"
  MR_Word mercury__diet__HeadVar__2_2,
#line 986 "diet.m"
  MR_Word * mercury__diet__HeadVar__3_3)
#line 986 "diet.m"
{
#line 11388 "diet.c"
  {
#line 11390 "diet.c"
    MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 11392 "diet.c"
    MR_Integer mercury__diet__X_9;
#line 11394 "diet.c"
    MR_Integer mercury__diet__Y_10;
#line 11396 "diet.c"
    MR_Integer mercury__diet__H_11;
#line 11398 "diet.c"
    MR_Word mercury__diet__Left_12;
#line 11400 "diet.c"
    MR_Word mercury__diet__Right_13;
#line 11402 "diet.c"
    MR_Word mercury__diet__CZX_14;
#line 11404 "diet.c"
    MR_Tuple mercury__diet__V_32_32;

#line 11407 "diet.c"
    if (mercury__diet__succeeded)
#line 11409 "diet.c"
      {
#line 11411 "diet.c"
        mercury__diet__V_32_32 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 0)));
#line 11413 "diet.c"
        mercury__diet__H_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 1)));
#line 11415 "diet.c"
        mercury__diet__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 2)));
#line 11417 "diet.c"
        mercury__diet__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, (MR_Integer) 3)));
#line 991 "diet.m"
        mercury__diet__X_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_32_32, (MR_Integer) 0)));
#line 991 "diet.m"
        mercury__diet__Y_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_32_32, (MR_Integer) 1)));
#line 66 "private_builtin.opt"
        mercury__diet__succeeded = (mercury__diet__HeadVar__1_1 < mercury__diet__X_9);
#line 69 "private_builtin.opt"
        if (mercury__diet__succeeded)
#line 68 "private_builtin.opt"
          mercury__diet__CZX_14 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
        else
#line 74 "private_builtin.opt"
          {
#line 71 "private_builtin.opt"
            mercury__diet__succeeded = (mercury__diet__HeadVar__1_1 == mercury__diet__X_9);
#line 74 "private_builtin.opt"
            if (mercury__diet__succeeded)
#line 73 "private_builtin.opt"
              mercury__diet__CZX_14 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
            else
#line 75 "private_builtin.opt"
              mercury__diet__CZX_14 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
          }
#line 997 "diet.m"
        if ((mercury__diet__CZX_14 == (MR_Integer) 1))
#line 994 "diet.m"
          {
#line 994 "diet.m"
            MR_Word mercury__diet__L_15;

#line 995 "diet.m"
            {
#line 995 "diet.m"
              mercury__diet__succeeded = mercury__diet__remove_2_3_p_0(mercury__diet__TypeInfo_for_T_30, mercury__diet__HeadVar__1_1, mercury__diet__Left_12, &mercury__diet__L_15);
            }
#line 994 "diet.m"
            if (mercury__diet__succeeded)
#line 994 "diet.m"
              {
#line 996 "diet.m"
                {
#line 996 "diet.m"
                  *mercury__diet__HeadVar__3_3 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_32_32, mercury__diet__L_15, mercury__diet__Right_13);
                }
#line 996 "diet.m"
                mercury__diet__succeeded = MR_TRUE;
#line 994 "diet.m"
              }
#line 994 "diet.m"
          }
#line 997 "diet.m"
        else
#line 1000 "diet.m"
          {
#line 1000 "diet.m"
            MR_Word mercury__diet__CZY_16;

#line 66 "private_builtin.opt"
            mercury__diet__succeeded = (mercury__diet__HeadVar__1_1 < mercury__diet__Y_10);
#line 69 "private_builtin.opt"
            if (mercury__diet__succeeded)
#line 68 "private_builtin.opt"
              mercury__diet__CZY_16 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
            else
#line 74 "private_builtin.opt"
              {
#line 71 "private_builtin.opt"
                mercury__diet__succeeded = (mercury__diet__HeadVar__1_1 == mercury__diet__Y_10);
#line 74 "private_builtin.opt"
                if (mercury__diet__succeeded)
#line 73 "private_builtin.opt"
                  mercury__diet__CZY_16 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                else
#line 75 "private_builtin.opt"
                  mercury__diet__CZY_16 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
              }
#line 1011 "diet.m"
            if ((mercury__diet__CZY_16 == (MR_Integer) 1))
#line 1016 "diet.m"
              {
#line 1016 "diet.m"
                if ((mercury__diet__CZX_14 == (MR_Integer) 0))
#line 1014 "diet.m"
                  {
#line 1014 "diet.m"
                    MR_Tuple mercury__diet__V_25_25;
#line 1014 "diet.m"
                    MR_Integer mercury__diet__V_26_26 = (mercury__diet__X_9 + (MR_Integer) 1);

#line 1015 "diet.m"
                    {
#line 1015 "diet.m"
                      mercury__diet__V_25_25 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1015 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, 0) = ((MR_Box) (mercury__diet__V_26_26));
#line 1015 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, 1) = ((MR_Box) (mercury__diet__Y_10));
#line 1015 "diet.m"
                    }
#line 1015 "diet.m"
                    {
#line 1015 "diet.m"
                      MR_Word base;
#line 1015 "diet.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "diet.m"
                      *mercury__diet__HeadVar__3_3 = base;
#line 1015 "diet.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_25_25));
#line 1015 "diet.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_11));
#line 1015 "diet.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_12));
#line 1015 "diet.m"
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_13));
#line 1015 "diet.m"
                    }
#line 1014 "diet.m"
                  }
#line 1016 "diet.m"
                else
#line 1017 "diet.m"
                  {
#line 1017 "diet.m"
                    MR_Tuple mercury__diet__V_20_20;
#line 1017 "diet.m"
                    MR_Integer mercury__diet__V_21_21 = (mercury__diet__HeadVar__1_1 + (MR_Integer) 1);
#line 1017 "diet.m"
                    MR_Word mercury__diet__V_22_22;
#line 1017 "diet.m"
                    MR_Tuple mercury__diet__V_23_23;
#line 1017 "diet.m"
                    MR_Integer mercury__diet__V_24_24;

#line 1018 "diet.m"
                    {
#line 1018 "diet.m"
                      mercury__diet__V_20_20 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1018 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, 0) = ((MR_Box) (mercury__diet__V_21_21));
#line 1018 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, 1) = ((MR_Box) (mercury__diet__Y_10));
#line 1018 "diet.m"
                    }
#line 425 "diet.m"
                    mercury__diet__V_24_24 = (mercury__diet__HeadVar__1_1 - (MR_Integer) 1);
#line 1018 "diet.m"
                    {
#line 1018 "diet.m"
                      mercury__diet__V_23_23 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1018 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_23_23, 0) = ((MR_Box) (mercury__diet__X_9));
#line 1018 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_23_23, 1) = ((MR_Box) (mercury__diet__V_24_24));
#line 1018 "diet.m"
                    }
#line 1018 "diet.m"
                    {
#line 1018 "diet.m"
                      mercury__diet__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1018 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__V_22_22, 0) = ((MR_Box) (mercury__diet__V_23_23));
#line 1018 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__V_22_22, 1) = ((MR_Box) (mercury__diet__H_11));
#line 1018 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__V_22_22, 2) = ((MR_Box) (mercury__diet__Left_12));
#line 1018 "diet.m"
                      MR_hl_field(MR_mktag(1), mercury__diet__V_22_22, 3) = ((MR_Box) (mercury__diet__Right_13));
#line 1018 "diet.m"
                    }
#line 1018 "diet.m"
                    {
#line 1018 "diet.m"
                      *mercury__diet__HeadVar__3_3 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeInfo_for_T_30, mercury__diet__V_20_20, mercury__diet__V_22_22);
                    }
#line 1017 "diet.m"
                  }
#line 1016 "diet.m"
                mercury__diet__succeeded = MR_TRUE;
#line 1016 "diet.m"
              }
#line 1011 "diet.m"
            else
#line 1011 "diet.m"
              if ((mercury__diet__CZY_16 == (MR_Integer) 0))
#line 1007 "diet.m"
                {
#line 1007 "diet.m"
                  if ((mercury__diet__CZX_14 == (MR_Integer) 0))
#line 575 "diet.m"
                    {
#line 566 "diet.m"
                      MR_Integer mercury__diet__V_62_62;
#line 566 "diet.m"
                      MR_Integer mercury__diet__V_63_63;

#line 445 "diet.m"
                      if ((mercury__diet__Left_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
                        mercury__diet__V_62_62 = (MR_Integer) 0;
#line 445 "diet.m"
                      else
#line 446 "diet.m"
                        {
#line 446 "diet.m"
                          MR_Tuple mercury__diet__V_69_69 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Left_12, (MR_Integer) 0)));
#line 446 "diet.m"
                          MR_Word mercury__diet__V_71_71;
#line 446 "diet.m"
                          MR_Word mercury__diet__V_72_72;

#line 446 "diet.m"
                          mercury__diet__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Left_12, (MR_Integer) 1)));
#line 446 "diet.m"
                          mercury__diet__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Left_12, (MR_Integer) 2)));
#line 446 "diet.m"
                          mercury__diet__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Left_12, (MR_Integer) 3)));
#line 446 "diet.m"
                        }
#line 445 "diet.m"
                      if ((mercury__diet__Right_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
                        mercury__diet__V_63_63 = (MR_Integer) 0;
#line 445 "diet.m"
                      else
#line 446 "diet.m"
                        {
#line 446 "diet.m"
                          MR_Tuple mercury__diet__V_73_73 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Right_13, (MR_Integer) 0)));
#line 446 "diet.m"
                          MR_Word mercury__diet__V_75_75;
#line 446 "diet.m"
                          MR_Word mercury__diet__V_76_76;

#line 446 "diet.m"
                          mercury__diet__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Right_13, (MR_Integer) 1)));
#line 446 "diet.m"
                          mercury__diet__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Right_13, (MR_Integer) 2)));
#line 446 "diet.m"
                          mercury__diet__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Right_13, (MR_Integer) 3)));
#line 446 "diet.m"
                        }
#line 566 "diet.m"
                      mercury__diet__succeeded = (mercury__diet__V_62_62 > mercury__diet__V_63_63);
#line 575 "diet.m"
                      if (mercury__diet__succeeded)
#line 570 "diet.m"
                        if ((mercury__diet__Left_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 568 "diet.m"
                          {
#line 569 "diet.m"
                            {
#line 569 "diet.m"
                              mercury__require__unexpected_3_p_0((MR_String) "diet", (MR_String) "function \140diet.reroot\'/2", (MR_String) "L empty");
                            }
#line 568 "diet.m"
                          }
#line 570 "diet.m"
                        else
#line 571 "diet.m"
                          {
#line 571 "diet.m"
                            MR_Tuple mercury__diet__I_55;
#line 571 "diet.m"
                            MR_Word mercury__diet__L1_56;

#line 572 "diet.m"
                            {
#line 572 "diet.m"
                              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_97_120_95_95_91_49_93_95_48_3_p_0(mercury__diet__Left_12, &mercury__diet__I_55, &mercury__diet__L1_56);
                            }
#line 573 "diet.m"
                            {
#line 573 "diet.m"
                              *mercury__diet__HeadVar__3_3 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__I_55, mercury__diet__L1_56, mercury__diet__Right_13);
                            }
#line 571 "diet.m"
                          }
#line 575 "diet.m"
                      else
#line 578 "diet.m"
                        if ((mercury__diet__Right_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 577 "diet.m"
                          *mercury__diet__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 578 "diet.m"
                        else
#line 579 "diet.m"
                          {
#line 579 "diet.m"
                            MR_Word mercury__diet__R1_61;
#line 579 "diet.m"
                            MR_Tuple mercury__diet__I_67;

#line 580 "diet.m"
                            {
#line 580 "diet.m"
                              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_95_91_49_93_95_48_3_p_0(mercury__diet__Right_13, &mercury__diet__I_67, &mercury__diet__R1_61);
                            }
#line 581 "diet.m"
                            {
#line 581 "diet.m"
                              *mercury__diet__HeadVar__3_3 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__I_67, mercury__diet__Left_12, mercury__diet__R1_61);
                            }
#line 579 "diet.m"
                          }
#line 575 "diet.m"
                    }
#line 1007 "diet.m"
                  else
#line 1008 "diet.m"
                    {
#line 1008 "diet.m"
                      MR_Tuple mercury__diet__V_27_27;
#line 1008 "diet.m"
                      MR_Integer mercury__diet__V_28_28 = (mercury__diet__Y_10 - (MR_Integer) 1);

#line 1009 "diet.m"
                      {
#line 1009 "diet.m"
                        mercury__diet__V_27_27 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1009 "diet.m"
                        MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, 0) = ((MR_Box) (mercury__diet__X_9));
#line 1009 "diet.m"
                        MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, 1) = ((MR_Box) (mercury__diet__V_28_28));
#line 1009 "diet.m"
                      }
#line 1009 "diet.m"
                      {
#line 1009 "diet.m"
                        MR_Word base;
#line 1009 "diet.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "diet.m"
                        *mercury__diet__HeadVar__3_3 = base;
#line 1009 "diet.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_27_27));
#line 1009 "diet.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_11));
#line 1009 "diet.m"
                        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_12));
#line 1009 "diet.m"
                        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_13));
#line 1009 "diet.m"
                      }
#line 1008 "diet.m"
                    }
#line 1007 "diet.m"
                  mercury__diet__succeeded = MR_TRUE;
#line 1007 "diet.m"
                }
#line 1011 "diet.m"
              else
#line 1021 "diet.m"
                {
#line 1021 "diet.m"
                  MR_Word mercury__diet__R_17;

#line 1022 "diet.m"
                  {
#line 1022 "diet.m"
                    mercury__diet__succeeded = mercury__diet__remove_2_3_p_0(mercury__diet__TypeInfo_for_T_30, mercury__diet__HeadVar__1_1, mercury__diet__Right_13, &mercury__diet__R_17);
                  }
#line 1021 "diet.m"
                  if (mercury__diet__succeeded)
#line 1021 "diet.m"
                    {
#line 1023 "diet.m"
                      {
#line 1023 "diet.m"
                        *mercury__diet__HeadVar__3_3 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_32_32, mercury__diet__Left_12, mercury__diet__R_17);
                      }
#line 1023 "diet.m"
                      mercury__diet__succeeded = MR_TRUE;
#line 1021 "diet.m"
                    }
#line 1021 "diet.m"
                }
#line 1000 "diet.m"
          }
#line 11804 "diet.c"
      }
#line 11806 "diet.c"
    return mercury__diet__succeeded;
#line 11808 "diet.c"
  }
#line 986 "diet.m"
}

#line 895 "diet.m"
MR_Word MR_CALL 
mercury__diet__do_insert_2_f_0(
#line 895 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_26,
#line 895 "diet.m"
  MR_Tuple mercury__diet__PQ_4,
#line 895 "diet.m"
  MR_Word mercury__diet__T0_5)
#line 895 "diet.m"
{
#line 897 "diet.m"
  {
#line 897 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 897 "diet.m"
    MR_Word mercury__diet__T_6;
#line 897 "diet.m"
    MR_Integer mercury__diet__P_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__PQ_4, (MR_Integer) 0)));
#line 897 "diet.m"
    MR_Integer mercury__diet__Q_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__PQ_4, (MR_Integer) 1)));

#line 902 "diet.m"
    if ((mercury__diet__T0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 441 "diet.m"
      {
#line 441 "diet.m"
        MR_Word mercury__diet__V_29_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 441 "diet.m"
        MR_Word mercury__diet__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 441 "diet.m"
        {
#line 441 "diet.m"
          mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 441 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__PQ_4));
#line 441 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) ((MR_Integer) 1));
#line 441 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__V_29_29));
#line 441 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__V_30_30));
#line 441 "diet.m"
        }
#line 441 "diet.m"
      }
#line 902 "diet.m"
    else
#line 903 "diet.m"
      {
#line 903 "diet.m"
        MR_Integer mercury__diet__X0_9;
#line 903 "diet.m"
        MR_Integer mercury__diet__Y0_10;
#line 903 "diet.m"
        MR_Word mercury__diet__Left0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 2)));
#line 903 "diet.m"
        MR_Word mercury__diet__Right0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 3)));
#line 903 "diet.m"
        MR_Tuple mercury__diet__V_18_18 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 0)));
#line 903 "diet.m"
        MR_Integer mercury__diet__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 1)));
#line 904 "diet.m"
        MR_Integer mercury__diet__V_19_19;

#line 903 "diet.m"
        mercury__diet__X0_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_18_18, (MR_Integer) 0)));
#line 903 "diet.m"
        mercury__diet__Y0_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_18_18, (MR_Integer) 1)));
#line 425 "diet.m"
        mercury__diet__V_19_19 = (mercury__diet__X0_9 - (MR_Integer) 1);
#line 904 "diet.m"
        mercury__diet__succeeded = (mercury__diet__Q_8 < mercury__diet__V_19_19);
#line 906 "diet.m"
        if (mercury__diet__succeeded)
#line 905 "diet.m"
          {
#line 905 "diet.m"
            MR_Word mercury__diet__V_21_21;

#line 905 "diet.m"
            {
#line 905 "diet.m"
              mercury__diet__V_21_21 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeInfo_for_T_26, mercury__diet__PQ_4, mercury__diet__Left0_12);
            }
#line 905 "diet.m"
            {
#line 905 "diet.m"
              return mercury__diet__T_6 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_18_18, mercury__diet__V_21_21, mercury__diet__Right0_13);
            }
#line 905 "diet.m"
          }
#line 906 "diet.m"
        else
#line 908 "diet.m"
          {
#line 906 "diet.m"
            MR_Integer mercury__diet__V_22_22 = (mercury__diet__Y0_10 + (MR_Integer) 1);

#line 906 "diet.m"
            mercury__diet__succeeded = (mercury__diet__P_7 > mercury__diet__V_22_22);
#line 908 "diet.m"
            if (mercury__diet__succeeded)
#line 907 "diet.m"
              {
#line 907 "diet.m"
                MR_Word mercury__diet__V_24_24;

#line 907 "diet.m"
                {
#line 907 "diet.m"
                  mercury__diet__V_24_24 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeInfo_for_T_26, mercury__diet__PQ_4, mercury__diet__Right0_13);
                }
#line 907 "diet.m"
                {
#line 907 "diet.m"
                  return mercury__diet__T_6 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_18_18, mercury__diet__Left0_12, mercury__diet__V_24_24);
                }
#line 907 "diet.m"
              }
#line 908 "diet.m"
            else
#line 914 "diet.m"
              {
#line 914 "diet.m"
                MR_Integer mercury__diet__X1_14;
#line 914 "diet.m"
                MR_Word mercury__diet__Left1_15;
#line 914 "diet.m"
                MR_Integer mercury__diet__Y1_16;
#line 914 "diet.m"
                MR_Word mercury__diet__Right1_17;
#line 914 "diet.m"
                MR_Tuple mercury__diet__V_25_25;

#line 909 "diet.m"
                mercury__diet__succeeded = (mercury__diet__P_7 >= mercury__diet__X0_9);
#line 912 "diet.m"
                if (mercury__diet__succeeded)
#line 910 "diet.m"
                  {
#line 910 "diet.m"
                    mercury__diet__X1_14 = mercury__diet__X0_9;
#line 911 "diet.m"
                    mercury__diet__Left1_15 = mercury__diet__Left0_12;
#line 910 "diet.m"
                  }
#line 912 "diet.m"
                else
#line 913 "diet.m"
                  {
#line 913 "diet.m"
                    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_100_101_108_95_108_101_102_116_95_95_91_49_93_95_48_4_p_0(mercury__diet__P_7, mercury__diet__Left0_12, &mercury__diet__X1_14, &mercury__diet__Left1_15);
                  }
#line 915 "diet.m"
                mercury__diet__succeeded = (mercury__diet__Q_8 <= mercury__diet__Y0_10);
#line 918 "diet.m"
                if (mercury__diet__succeeded)
#line 916 "diet.m"
                  {
#line 916 "diet.m"
                    mercury__diet__Y1_16 = mercury__diet__Y0_10;
#line 917 "diet.m"
                    mercury__diet__Right1_17 = mercury__diet__Right0_13;
#line 916 "diet.m"
                  }
#line 918 "diet.m"
                else
#line 919 "diet.m"
                  {
#line 919 "diet.m"
                    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_110_100_95_100_101_108_95_114_105_103_104_116_95_95_91_49_93_95_48_4_p_0(mercury__diet__Q_8, mercury__diet__Right0_13, &mercury__diet__Y1_16, &mercury__diet__Right1_17);
                  }
#line 921 "diet.m"
                {
#line 921 "diet.m"
                  mercury__diet__V_25_25 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 921 "diet.m"
                  MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, 0) = ((MR_Box) (mercury__diet__X1_14));
#line 921 "diet.m"
                  MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, 1) = ((MR_Box) (mercury__diet__Y1_16));
#line 921 "diet.m"
                }
#line 921 "diet.m"
                {
#line 921 "diet.m"
                  return mercury__diet__T_6 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_25_25, mercury__diet__Left1_15, mercury__diet__Right1_17);
                }
#line 914 "diet.m"
              }
#line 908 "diet.m"
          }
#line 903 "diet.m"
      }
#line 897 "diet.m"
    return mercury__diet__T_6;
#line 897 "diet.m"
  }
#line 895 "diet.m"
}

#line 889 "diet.m"
void MR_CALL 
mercury__diet__insert_interval_3_p_0(
#line 889 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_8,
#line 889 "diet.m"
  MR_Tuple mercury__diet__HeadVar__1_1,
#line 889 "diet.m"
  MR_Word mercury__diet__Set0_6,
#line 889 "diet.m"
  MR_Word * mercury__diet__Set_7)
#line 889 "diet.m"
{
#line 892 "diet.m"
  {
#line 892 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 892 "diet.m"
    MR_Box mercury__diet__X_4 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 0));
#line 892 "diet.m"
    MR_Box mercury__diet__Y_5 = (MR_hl_field(MR_mktag(0), mercury__diet__HeadVar__1_1, (MR_Integer) 1));

#line 893 "diet.m"
    {
#line 893 "diet.m"
      mercury__diet__insert_interval_4_p_0(mercury__diet__TypeClassInfo_for_enum_8, mercury__diet__X_4, mercury__diet__Y_5, mercury__diet__Set0_6, mercury__diet__Set_7);
#line 893 "diet.m"
      return;
    }
#line 892 "diet.m"
  }
#line 889 "diet.m"
}

#line 822 "diet.m"
MR_bool MR_CALL 
mercury__diet__add_new_3_p_0(
#line 822 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_52,
#line 822 "diet.m"
  MR_Integer mercury__diet__P_4,
#line 822 "diet.m"
  MR_Word mercury__diet__T0_5,
#line 822 "diet.m"
  MR_Word * mercury__diet__T_6)
#line 822 "diet.m"
{
#line 828 "diet.m"
  {
#line 828 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 828 "diet.m"
    if ((mercury__diet__T0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 826 "diet.m"
      {
#line 826 "diet.m"
        MR_Tuple mercury__diet__V_37_37;
#line 826 "diet.m"
        MR_Word mercury__diet__V_40_40;
#line 826 "diet.m"
        MR_Word mercury__diet__V_41_41;

#line 827 "diet.m"
        {
#line 827 "diet.m"
          mercury__diet__V_37_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 827 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_37_37, 0) = ((MR_Box) (mercury__diet__P_4));
#line 827 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_37_37, 1) = ((MR_Box) (mercury__diet__P_4));
#line 827 "diet.m"
        }
#line 827 "diet.m"
        mercury__diet__V_40_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 827 "diet.m"
        mercury__diet__V_41_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 827 "diet.m"
        {
#line 827 "diet.m"
          MR_Word base;
#line 827 "diet.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 827 "diet.m"
          *mercury__diet__T_6 = base;
#line 827 "diet.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_37_37));
#line 827 "diet.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 827 "diet.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__V_40_40));
#line 827 "diet.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__V_41_41));
#line 827 "diet.m"
        }
#line 826 "diet.m"
        mercury__diet__succeeded = MR_TRUE;
#line 826 "diet.m"
      }
#line 828 "diet.m"
    else
#line 829 "diet.m"
      {
#line 829 "diet.m"
        MR_Integer mercury__diet__X_7;
#line 829 "diet.m"
        MR_Integer mercury__diet__Y_8;
#line 829 "diet.m"
        MR_Integer mercury__diet__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 1)));
#line 829 "diet.m"
        MR_Word mercury__diet__Left_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 2)));
#line 829 "diet.m"
        MR_Word mercury__diet__Right_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 3)));
#line 829 "diet.m"
        MR_Tuple mercury__diet__V_24_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 0)));

#line 829 "diet.m"
        mercury__diet__X_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 0)));
#line 829 "diet.m"
        mercury__diet__Y_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 1)));
#line 830 "diet.m"
        mercury__diet__succeeded = (mercury__diet__P_4 >= mercury__diet__X_7);
#line 851 "diet.m"
        if (mercury__diet__succeeded)
#line 834 "diet.m"
          {
#line 831 "diet.m"
            mercury__diet__succeeded = (mercury__diet__P_4 <= mercury__diet__Y_8);
#line 834 "diet.m"
            if (mercury__diet__succeeded)
#line 833 "diet.m"
              mercury__diet__succeeded = MR_FALSE;
#line 834 "diet.m"
            else
#line 837 "diet.m"
              {
#line 834 "diet.m"
                MR_Integer mercury__diet__V_25_25 = (mercury__diet__Y_8 + (MR_Integer) 1);

#line 834 "diet.m"
                mercury__diet__succeeded = (mercury__diet__P_4 > mercury__diet__V_25_25);
#line 837 "diet.m"
                if (mercury__diet__succeeded)
#line 835 "diet.m"
                  {
#line 835 "diet.m"
                    MR_Word mercury__diet__R_12;

#line 835 "diet.m"
                    {
#line 835 "diet.m"
                      mercury__diet__succeeded = mercury__diet__add_new_3_p_0(mercury__diet__TypeInfo_for_T_52, mercury__diet__P_4, mercury__diet__Right_11, &mercury__diet__R_12);
                    }
#line 835 "diet.m"
                    if (mercury__diet__succeeded)
#line 835 "diet.m"
                      {
#line 836 "diet.m"
                        {
#line 836 "diet.m"
                          *mercury__diet__T_6 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_24_24, mercury__diet__Left_10, mercury__diet__R_12);
                        }
#line 836 "diet.m"
                        mercury__diet__succeeded = MR_TRUE;
#line 835 "diet.m"
                      }
#line 835 "diet.m"
                  }
#line 837 "diet.m"
                else
#line 841 "diet.m"
                  {
#line 841 "diet.m"
                    if ((mercury__diet__Right_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 839 "diet.m"
                      {
#line 839 "diet.m"
                        MR_Tuple mercury__diet__V_30_30;

#line 840 "diet.m"
                        {
#line 840 "diet.m"
                          mercury__diet__V_30_30 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 840 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, 0) = ((MR_Box) (mercury__diet__X_7));
#line 840 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, 1) = ((MR_Box) (mercury__diet__P_4));
#line 840 "diet.m"
                        }
#line 840 "diet.m"
                        {
#line 840 "diet.m"
                          MR_Word base;
#line 840 "diet.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 840 "diet.m"
                          *mercury__diet__T_6 = base;
#line 840 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_30_30));
#line 840 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_9));
#line 840 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 840 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 840 "diet.m"
                        }
#line 839 "diet.m"
                      }
#line 841 "diet.m"
                    else
#line 842 "diet.m"
                      {
#line 842 "diet.m"
                        MR_Integer mercury__diet__U_17;
#line 842 "diet.m"
                        MR_Integer mercury__diet__V_18;
#line 842 "diet.m"
                        MR_Tuple mercury__diet__V_27_27;
#line 842 "diet.m"
                        MR_Word mercury__diet__R_42;
#line 844 "diet.m"
                        MR_Integer mercury__diet__V_53_53;

#line 843 "diet.m"
                        {
#line 843 "diet.m"
                          mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_95_91_49_93_95_48_3_p_0(mercury__diet__Right_11, &mercury__diet__V_27_27, &mercury__diet__R_42);
                        }
#line 843 "diet.m"
                        mercury__diet__U_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, (MR_Integer) 0)));
#line 843 "diet.m"
                        mercury__diet__V_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_27_27, (MR_Integer) 1)));
#line 425 "diet.m"
                        mercury__diet__V_53_53 = (mercury__diet__U_17 - (MR_Integer) 1);
#line 844 "diet.m"
                        mercury__diet__succeeded = (mercury__diet__P_4 == mercury__diet__V_53_53);
#line 846 "diet.m"
                        if (mercury__diet__succeeded)
#line 845 "diet.m"
                          {
#line 845 "diet.m"
                            MR_Tuple mercury__diet__V_28_28;

#line 845 "diet.m"
                            {
#line 845 "diet.m"
                              mercury__diet__V_28_28 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 845 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, 0) = ((MR_Box) (mercury__diet__X_7));
#line 845 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, 1) = ((MR_Box) (mercury__diet__V_18));
#line 845 "diet.m"
                            }
#line 845 "diet.m"
                            {
#line 845 "diet.m"
                              *mercury__diet__T_6 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_28_28, mercury__diet__Left_10, mercury__diet__R_42);
                            }
#line 845 "diet.m"
                          }
#line 846 "diet.m"
                        else
#line 847 "diet.m"
                          {
#line 847 "diet.m"
                            MR_Tuple mercury__diet__V_29_29;

#line 847 "diet.m"
                            {
#line 847 "diet.m"
                              mercury__diet__V_29_29 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 847 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_29_29, 0) = ((MR_Box) (mercury__diet__X_7));
#line 847 "diet.m"
                              MR_hl_field(MR_mktag(0), mercury__diet__V_29_29, 1) = ((MR_Box) (mercury__diet__P_4));
#line 847 "diet.m"
                            }
#line 847 "diet.m"
                            {
#line 847 "diet.m"
                              MR_Word base;
#line 847 "diet.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 847 "diet.m"
                              *mercury__diet__T_6 = base;
#line 847 "diet.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_29_29));
#line 847 "diet.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_9));
#line 847 "diet.m"
                              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 847 "diet.m"
                              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 847 "diet.m"
                            }
#line 847 "diet.m"
                          }
#line 842 "diet.m"
                      }
#line 841 "diet.m"
                    mercury__diet__succeeded = MR_TRUE;
#line 841 "diet.m"
                  }
#line 837 "diet.m"
              }
#line 834 "diet.m"
          }
#line 851 "diet.m"
        else
#line 854 "diet.m"
          {
#line 851 "diet.m"
            MR_Integer mercury__diet__V_31_31 = (mercury__diet__X_7 - (MR_Integer) 1);

#line 851 "diet.m"
            mercury__diet__succeeded = (mercury__diet__P_4 < mercury__diet__V_31_31);
#line 854 "diet.m"
            if (mercury__diet__succeeded)
#line 852 "diet.m"
              {
#line 852 "diet.m"
                MR_Word mercury__diet__L_19;

#line 852 "diet.m"
                {
#line 852 "diet.m"
                  mercury__diet__succeeded = mercury__diet__add_new_3_p_0(mercury__diet__TypeInfo_for_T_52, mercury__diet__P_4, mercury__diet__Left_10, &mercury__diet__L_19);
                }
#line 852 "diet.m"
                if (mercury__diet__succeeded)
#line 852 "diet.m"
                  {
#line 853 "diet.m"
                    {
#line 853 "diet.m"
                      *mercury__diet__T_6 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_24_24, mercury__diet__L_19, mercury__diet__Right_11);
                    }
#line 853 "diet.m"
                    mercury__diet__succeeded = MR_TRUE;
#line 852 "diet.m"
                  }
#line 852 "diet.m"
              }
#line 854 "diet.m"
            else
#line 858 "diet.m"
              {
#line 858 "diet.m"
                if ((mercury__diet__Left_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 856 "diet.m"
                  {
#line 856 "diet.m"
                    MR_Tuple mercury__diet__V_36_36;

#line 857 "diet.m"
                    {
#line 857 "diet.m"
                      mercury__diet__V_36_36 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 857 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_36_36, 0) = ((MR_Box) (mercury__diet__P_4));
#line 857 "diet.m"
                      MR_hl_field(MR_mktag(0), mercury__diet__V_36_36, 1) = ((MR_Box) (mercury__diet__Y_8));
#line 857 "diet.m"
                    }
#line 857 "diet.m"
                    {
#line 857 "diet.m"
                      MR_Word base;
#line 857 "diet.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 857 "diet.m"
                      *mercury__diet__T_6 = base;
#line 857 "diet.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_36_36));
#line 857 "diet.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_9));
#line 857 "diet.m"
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 857 "diet.m"
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 857 "diet.m"
                    }
#line 856 "diet.m"
                  }
#line 858 "diet.m"
                else
#line 859 "diet.m"
                  {
#line 859 "diet.m"
                    MR_Tuple mercury__diet__V_33_33;
#line 859 "diet.m"
                    MR_Integer mercury__diet__V_45;
#line 859 "diet.m"
                    MR_Word mercury__diet__L_46;
#line 860 "diet.m"
                    MR_Integer mercury__diet__U_44;
#line 861 "diet.m"
                    MR_Integer mercury__diet__V_54_54;

#line 860 "diet.m"
                    {
#line 860 "diet.m"
                      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_97_120_95_95_91_49_93_95_48_3_p_0(mercury__diet__Left_10, &mercury__diet__V_33_33, &mercury__diet__L_46);
                    }
#line 860 "diet.m"
                    mercury__diet__U_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_33_33, (MR_Integer) 0)));
#line 860 "diet.m"
                    mercury__diet__V_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_33_33, (MR_Integer) 1)));
#line 429 "diet.m"
                    mercury__diet__V_54_54 = (mercury__diet__V_45 + (MR_Integer) 1);
#line 861 "diet.m"
                    mercury__diet__succeeded = (mercury__diet__P_4 == mercury__diet__V_54_54);
#line 863 "diet.m"
                    if (mercury__diet__succeeded)
#line 862 "diet.m"
                      {
#line 862 "diet.m"
                        *mercury__diet__T_6 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_33_33, mercury__diet__L_46, mercury__diet__Right_11);
                      }
#line 863 "diet.m"
                    else
#line 864 "diet.m"
                      {
#line 864 "diet.m"
                        MR_Tuple mercury__diet__V_35_35;

#line 864 "diet.m"
                        {
#line 864 "diet.m"
                          mercury__diet__V_35_35 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 864 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, 0) = ((MR_Box) (mercury__diet__P_4));
#line 864 "diet.m"
                          MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, 1) = ((MR_Box) (mercury__diet__Y_8));
#line 864 "diet.m"
                        }
#line 864 "diet.m"
                        {
#line 864 "diet.m"
                          MR_Word base;
#line 864 "diet.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 864 "diet.m"
                          *mercury__diet__T_6 = base;
#line 864 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__diet__V_35_35));
#line 864 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__diet__H_9));
#line 864 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 864 "diet.m"
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 864 "diet.m"
                        }
#line 864 "diet.m"
                      }
#line 859 "diet.m"
                  }
#line 858 "diet.m"
                mercury__diet__succeeded = MR_TRUE;
#line 858 "diet.m"
              }
#line 854 "diet.m"
          }
#line 829 "diet.m"
      }
#line 828 "diet.m"
    return mercury__diet__succeeded;
#line 828 "diet.m"
  }
#line 822 "diet.m"
}

#line 772 "diet.m"
MR_Word MR_CALL 
mercury__diet__add_2_f_0(
#line 772 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_50,
#line 772 "diet.m"
  MR_Integer mercury__diet__P_4,
#line 772 "diet.m"
  MR_Word mercury__diet__T0_5)
#line 772 "diet.m"
{
#line 778 "diet.m"
  {
#line 778 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 778 "diet.m"
    MR_Word mercury__diet__T_6;

#line 778 "diet.m"
    if ((mercury__diet__T0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 776 "diet.m"
      {
#line 776 "diet.m"
        MR_Tuple mercury__diet__V_39_39;
#line 776 "diet.m"
        MR_Word mercury__diet__V_42_42;
#line 776 "diet.m"
        MR_Word mercury__diet__V_43_43;

#line 777 "diet.m"
        {
#line 777 "diet.m"
          mercury__diet__V_39_39 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 777 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_39_39, 0) = ((MR_Box) (mercury__diet__P_4));
#line 777 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_39_39, 1) = ((MR_Box) (mercury__diet__P_4));
#line 777 "diet.m"
        }
#line 777 "diet.m"
        mercury__diet__V_42_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 777 "diet.m"
        mercury__diet__V_43_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 777 "diet.m"
        {
#line 777 "diet.m"
          mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 777 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__V_39_39));
#line 777 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) ((MR_Integer) 1));
#line 777 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__V_42_42));
#line 777 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__V_43_43));
#line 777 "diet.m"
        }
#line 776 "diet.m"
      }
#line 778 "diet.m"
    else
#line 779 "diet.m"
      {
#line 779 "diet.m"
        MR_Integer mercury__diet__X_7;
#line 779 "diet.m"
        MR_Integer mercury__diet__Y_8;
#line 779 "diet.m"
        MR_Integer mercury__diet__H_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 1)));
#line 779 "diet.m"
        MR_Word mercury__diet__Left_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 2)));
#line 779 "diet.m"
        MR_Word mercury__diet__Right_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 3)));
#line 779 "diet.m"
        MR_Tuple mercury__diet__V_24_24 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T0_5, (MR_Integer) 0)));

#line 779 "diet.m"
        mercury__diet__X_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 0)));
#line 779 "diet.m"
        mercury__diet__Y_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_24_24, (MR_Integer) 1)));
#line 780 "diet.m"
        mercury__diet__succeeded = (mercury__diet__P_4 >= mercury__diet__X_7);
#line 799 "diet.m"
        if (mercury__diet__succeeded)
#line 783 "diet.m"
          {
#line 781 "diet.m"
            mercury__diet__succeeded = (mercury__diet__P_4 <= mercury__diet__Y_8);
#line 783 "diet.m"
            if (mercury__diet__succeeded)
#line 782 "diet.m"
              mercury__diet__T_6 = mercury__diet__T0_5;
#line 783 "diet.m"
            else
#line 785 "diet.m"
              {
#line 783 "diet.m"
                MR_Integer mercury__diet__V_25_25 = (mercury__diet__Y_8 + (MR_Integer) 1);

#line 783 "diet.m"
                mercury__diet__succeeded = (mercury__diet__P_4 > mercury__diet__V_25_25);
#line 785 "diet.m"
                if (mercury__diet__succeeded)
#line 784 "diet.m"
                  {
#line 784 "diet.m"
                    MR_Word mercury__diet__V_27_27;

#line 784 "diet.m"
                    {
#line 784 "diet.m"
                      mercury__diet__V_27_27 = mercury__diet__add_2_f_0(mercury__diet__TypeInfo_for_T_50, mercury__diet__P_4, mercury__diet__Right_11);
                    }
#line 784 "diet.m"
                    {
#line 784 "diet.m"
                      return mercury__diet__T_6 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_24_24, mercury__diet__Left_10, mercury__diet__V_27_27);
                    }
#line 784 "diet.m"
                  }
#line 785 "diet.m"
                else
#line 789 "diet.m"
                  if ((mercury__diet__Right_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 787 "diet.m"
                    {
#line 787 "diet.m"
                      MR_Tuple mercury__diet__V_31_31;

#line 788 "diet.m"
                      {
#line 788 "diet.m"
                        mercury__diet__V_31_31 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 788 "diet.m"
                        MR_hl_field(MR_mktag(0), mercury__diet__V_31_31, 0) = ((MR_Box) (mercury__diet__X_7));
#line 788 "diet.m"
                        MR_hl_field(MR_mktag(0), mercury__diet__V_31_31, 1) = ((MR_Box) (mercury__diet__P_4));
#line 788 "diet.m"
                      }
#line 788 "diet.m"
                      {
#line 788 "diet.m"
                        mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 788 "diet.m"
                        MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__V_31_31));
#line 788 "diet.m"
                        MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) (mercury__diet__H_9));
#line 788 "diet.m"
                        MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 788 "diet.m"
                        MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 788 "diet.m"
                      }
#line 787 "diet.m"
                    }
#line 789 "diet.m"
                  else
#line 790 "diet.m"
                    {
#line 790 "diet.m"
                      MR_Integer mercury__diet__U_16;
#line 790 "diet.m"
                      MR_Integer mercury__diet__V_17;
#line 790 "diet.m"
                      MR_Word mercury__diet__R_18;
#line 790 "diet.m"
                      MR_Tuple mercury__diet__V_28_28;
#line 792 "diet.m"
                      MR_Integer mercury__diet__V_51_51;

#line 791 "diet.m"
                      {
#line 791 "diet.m"
                        mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_95_91_49_93_95_48_3_p_0(mercury__diet__Right_11, &mercury__diet__V_28_28, &mercury__diet__R_18);
                      }
#line 791 "diet.m"
                      mercury__diet__U_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, (MR_Integer) 0)));
#line 791 "diet.m"
                      mercury__diet__V_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_28_28, (MR_Integer) 1)));
#line 425 "diet.m"
                      mercury__diet__V_51_51 = (mercury__diet__U_16 - (MR_Integer) 1);
#line 792 "diet.m"
                      mercury__diet__succeeded = (mercury__diet__P_4 == mercury__diet__V_51_51);
#line 794 "diet.m"
                      if (mercury__diet__succeeded)
#line 793 "diet.m"
                        {
#line 793 "diet.m"
                          MR_Tuple mercury__diet__V_29_29;

#line 793 "diet.m"
                          {
#line 793 "diet.m"
                            mercury__diet__V_29_29 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 793 "diet.m"
                            MR_hl_field(MR_mktag(0), mercury__diet__V_29_29, 0) = ((MR_Box) (mercury__diet__X_7));
#line 793 "diet.m"
                            MR_hl_field(MR_mktag(0), mercury__diet__V_29_29, 1) = ((MR_Box) (mercury__diet__V_17));
#line 793 "diet.m"
                          }
#line 793 "diet.m"
                          {
#line 793 "diet.m"
                            return mercury__diet__T_6 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_29_29, mercury__diet__Left_10, mercury__diet__R_18);
                          }
#line 793 "diet.m"
                        }
#line 794 "diet.m"
                      else
#line 795 "diet.m"
                        {
#line 795 "diet.m"
                          MR_Tuple mercury__diet__V_30_30;

#line 795 "diet.m"
                          {
#line 795 "diet.m"
                            mercury__diet__V_30_30 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 795 "diet.m"
                            MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, 0) = ((MR_Box) (mercury__diet__X_7));
#line 795 "diet.m"
                            MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, 1) = ((MR_Box) (mercury__diet__P_4));
#line 795 "diet.m"
                          }
#line 795 "diet.m"
                          {
#line 795 "diet.m"
                            mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 795 "diet.m"
                            MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__V_30_30));
#line 795 "diet.m"
                            MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) (mercury__diet__H_9));
#line 795 "diet.m"
                            MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 795 "diet.m"
                            MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 795 "diet.m"
                          }
#line 795 "diet.m"
                        }
#line 790 "diet.m"
                    }
#line 785 "diet.m"
              }
#line 783 "diet.m"
          }
#line 799 "diet.m"
        else
#line 801 "diet.m"
          {
#line 799 "diet.m"
            MR_Integer mercury__diet__V_32_32 = (mercury__diet__X_7 - (MR_Integer) 1);

#line 799 "diet.m"
            mercury__diet__succeeded = (mercury__diet__P_4 < mercury__diet__V_32_32);
#line 801 "diet.m"
            if (mercury__diet__succeeded)
#line 800 "diet.m"
              {
#line 800 "diet.m"
                MR_Word mercury__diet__V_34_34;

#line 800 "diet.m"
                {
#line 800 "diet.m"
                  mercury__diet__V_34_34 = mercury__diet__add_2_f_0(mercury__diet__TypeInfo_for_T_50, mercury__diet__P_4, mercury__diet__Left_10);
                }
#line 800 "diet.m"
                {
#line 800 "diet.m"
                  return mercury__diet__T_6 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_24_24, mercury__diet__V_34_34, mercury__diet__Right_11);
                }
#line 800 "diet.m"
              }
#line 801 "diet.m"
            else
#line 805 "diet.m"
              if ((mercury__diet__Left_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 803 "diet.m"
                {
#line 803 "diet.m"
                  MR_Tuple mercury__diet__V_38_38;

#line 804 "diet.m"
                  {
#line 804 "diet.m"
                    mercury__diet__V_38_38 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 804 "diet.m"
                    MR_hl_field(MR_mktag(0), mercury__diet__V_38_38, 0) = ((MR_Box) (mercury__diet__P_4));
#line 804 "diet.m"
                    MR_hl_field(MR_mktag(0), mercury__diet__V_38_38, 1) = ((MR_Box) (mercury__diet__Y_8));
#line 804 "diet.m"
                  }
#line 804 "diet.m"
                  {
#line 804 "diet.m"
                    mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 804 "diet.m"
                    MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__V_38_38));
#line 804 "diet.m"
                    MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) (mercury__diet__H_9));
#line 804 "diet.m"
                    MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 804 "diet.m"
                    MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 804 "diet.m"
                  }
#line 803 "diet.m"
                }
#line 805 "diet.m"
              else
#line 806 "diet.m"
                {
#line 806 "diet.m"
                  MR_Word mercury__diet__L_23;
#line 806 "diet.m"
                  MR_Tuple mercury__diet__V_35_35;
#line 806 "diet.m"
                  MR_Integer mercury__diet__U_44;
#line 806 "diet.m"
                  MR_Integer mercury__diet__V_45;
#line 808 "diet.m"
                  MR_Integer mercury__diet__V_52_52;

#line 807 "diet.m"
                  {
#line 807 "diet.m"
                    mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_97_120_95_95_91_49_93_95_48_3_p_0(mercury__diet__Left_10, &mercury__diet__V_35_35, &mercury__diet__L_23);
                  }
#line 807 "diet.m"
                  mercury__diet__U_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0)));
#line 807 "diet.m"
                  mercury__diet__V_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1)));
#line 429 "diet.m"
                  mercury__diet__V_52_52 = (mercury__diet__V_45 + (MR_Integer) 1);
#line 808 "diet.m"
                  mercury__diet__succeeded = (mercury__diet__P_4 == mercury__diet__V_52_52);
#line 810 "diet.m"
                  if (mercury__diet__succeeded)
#line 809 "diet.m"
                    {
#line 809 "diet.m"
                      MR_Tuple mercury__diet__V_36_36;

#line 809 "diet.m"
                      {
#line 809 "diet.m"
                        mercury__diet__V_36_36 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 809 "diet.m"
                        MR_hl_field(MR_mktag(0), mercury__diet__V_36_36, 0) = ((MR_Box) (mercury__diet__U_44));
#line 809 "diet.m"
                        MR_hl_field(MR_mktag(0), mercury__diet__V_36_36, 1) = ((MR_Box) (mercury__diet__Y_8));
#line 809 "diet.m"
                      }
#line 809 "diet.m"
                      {
#line 809 "diet.m"
                        return mercury__diet__T_6 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__V_36_36, mercury__diet__L_23, mercury__diet__Right_11);
                      }
#line 809 "diet.m"
                    }
#line 810 "diet.m"
                  else
#line 811 "diet.m"
                    {
#line 811 "diet.m"
                      MR_Tuple mercury__diet__V_37_37;

#line 811 "diet.m"
                      {
#line 811 "diet.m"
                        mercury__diet__V_37_37 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 811 "diet.m"
                        MR_hl_field(MR_mktag(0), mercury__diet__V_37_37, 0) = ((MR_Box) (mercury__diet__P_4));
#line 811 "diet.m"
                        MR_hl_field(MR_mktag(0), mercury__diet__V_37_37, 1) = ((MR_Box) (mercury__diet__Y_8));
#line 811 "diet.m"
                      }
#line 811 "diet.m"
                      {
#line 811 "diet.m"
                        mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 811 "diet.m"
                        MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__V_37_37));
#line 811 "diet.m"
                        MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) (mercury__diet__H_9));
#line 811 "diet.m"
                        MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__Left_10));
#line 811 "diet.m"
                        MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__Right_11));
#line 811 "diet.m"
                      }
#line 811 "diet.m"
                    }
#line 806 "diet.m"
                }
#line 801 "diet.m"
          }
#line 779 "diet.m"
      }
#line 778 "diet.m"
    return mercury__diet__T_6;
#line 778 "diet.m"
  }
#line 772 "diet.m"
}

#line 668 "diet.m"
MR_bool MR_CALL 
mercury__diet__contains_2_2_p_0(
#line 668 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_11,
#line 668 "diet.m"
  MR_Word mercury__diet__T_3,
#line 668 "diet.m"
  MR_Integer mercury__diet__Z_4)
#line 668 "diet.m"
{
#line 670 "diet.m"
  while (MR_TRUE)
#line 670 "diet.m"
    {
#line 670 "diet.m"
      /* tailcall optimized into a loop */
#line 670 "diet.m"
      {
#line 670 "diet.m"
        MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__T_3)) == (MR_mktag((MR_Integer) 1)));
#line 670 "diet.m"
        MR_Integer mercury__diet__X_5;
#line 670 "diet.m"
        MR_Integer mercury__diet__Y_6;
#line 670 "diet.m"
        MR_Word mercury__diet__L_8;
#line 670 "diet.m"
        MR_Word mercury__diet__R_9;
#line 670 "diet.m"
        MR_Tuple mercury__diet__V_10_10;
#line 671 "diet.m"
        MR_Integer mercury__diet__V_7_7;

#line 671 "diet.m"
        if (mercury__diet__succeeded)
#line 671 "diet.m"
          {
#line 671 "diet.m"
            mercury__diet__V_10_10 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_3, (MR_Integer) 0)));
#line 671 "diet.m"
            mercury__diet__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_3, (MR_Integer) 1)));
#line 671 "diet.m"
            mercury__diet__L_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_3, (MR_Integer) 2)));
#line 671 "diet.m"
            mercury__diet__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_3, (MR_Integer) 3)));
#line 671 "diet.m"
            mercury__diet__X_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_10_10, (MR_Integer) 0)));
#line 671 "diet.m"
            mercury__diet__Y_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_10_10, (MR_Integer) 1)));
#line 672 "diet.m"
            mercury__diet__succeeded = (mercury__diet__Z_4 < mercury__diet__X_5);
#line 674 "diet.m"
            if (mercury__diet__succeeded)
#line 673 "diet.m"
              {
#line 673 "diet.m"
                /* direct tailcall eliminated */
#line 673 "diet.m"
                {
#line 673 "diet.m"
                  MR_Word mercury__diet__T__tmp_copy_3 = mercury__diet__L_8;

#line 673 "diet.m"
                  mercury__diet__T_3 = mercury__diet__T__tmp_copy_3;
#line 673 "diet.m"
                }
#line 673 "diet.m"
                continue;
#line 673 "diet.m"
              }
#line 674 "diet.m"
            else
#line 676 "diet.m"
              {
#line 674 "diet.m"
                mercury__diet__succeeded = (mercury__diet__Z_4 > mercury__diet__Y_6);
#line 676 "diet.m"
                if (mercury__diet__succeeded)
#line 675 "diet.m"
                  {
#line 675 "diet.m"
                    /* direct tailcall eliminated */
#line 675 "diet.m"
                    {
#line 675 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_3 = mercury__diet__R_9;

#line 675 "diet.m"
                      mercury__diet__T_3 = mercury__diet__T__tmp_copy_3;
#line 675 "diet.m"
                    }
#line 675 "diet.m"
                    continue;
#line 675 "diet.m"
                  }
#line 676 "diet.m"
                else
#line 677 "diet.m"
                  mercury__diet__succeeded = MR_TRUE;
#line 676 "diet.m"
              }
#line 671 "diet.m"
          }
#line 670 "diet.m"
        return mercury__diet__succeeded;
#line 670 "diet.m"
      }
#line 670 "diet.m"
      break;
#line 670 "diet.m"
    }
#line 668 "diet.m"
}

#line 611 "diet.m"
void MR_CALL 
mercury__diet__unexpected_interval_3_p_0(
#line 611 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_17,
#line 611 "diet.m"
  MR_String mercury__diet__PredName_4,
#line 611 "diet.m"
  MR_Box mercury__diet__X_5,
#line 611 "diet.m"
  MR_Box mercury__diet__Y_6)
#line 611 "diet.m"
{
#line 613 "diet.m"
  {
#line 613 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 613 "diet.m"
    MR_Word mercury__diet__TypeCtorInfo_13_31;
#line 613 "diet.m"
    MR_Word mercury__diet__TypeClassInfo_for_op_table_40;
#line 613 "diet.m"
    MR_Word mercury__diet__TypeCtorInfo_13_56;
#line 613 "diet.m"
    MR_Word mercury__diet__TypeClassInfo_for_op_table_65;
#line 613 "diet.m"
    MR_String mercury__diet__V_8_8;
#line 613 "diet.m"
    MR_String mercury__diet__V_10_10;
#line 613 "diet.m"
    MR_String mercury__diet__V_11_11;
#line 613 "diet.m"
    MR_String mercury__diet__V_12_12;
#line 613 "diet.m"
    MR_String mercury__diet__V_14_14;
#line 613 "diet.m"
    MR_String mercury__diet__V_15_15;
#line 613 "diet.m"
    MR_Word mercury__diet__V_10_28;
#line 613 "diet.m"
    MR_Word mercury__diet__RevStrings_9_29;
#line 613 "diet.m"
    MR_Word mercury__diet__V_11_30;
#line 613 "diet.m"
    MR_Integer mercury__diet__Priority_10_37;
#line 613 "diet.m"
    MR_Integer mercury__diet__V_13_38;
#line 613 "diet.m"
    MR_Word mercury__diet__V_10_53;
#line 613 "diet.m"
    MR_Word mercury__diet__RevStrings_9_54;
#line 613 "diet.m"
    MR_Word mercury__diet__V_11_55;
#line 613 "diet.m"
    MR_Integer mercury__diet__Priority_10_62;
#line 613 "diet.m"
    MR_Integer mercury__diet__V_13_63;
#line 13068 "diet.c"
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box);
#line 13070 "diet.c"
    MR_Box mercury__diet__conv1_V_13_38;
#line 13072 "diet.c"
    MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);
#line 13074 "diet.c"
    MR_Box mercury__diet__conv3_V_13_63;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 22 "string.to_string.opt"
    mercury__diet__V_10_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 13081 "diet.c"
    mercury__diet__TypeClassInfo_for_op_table_40 = (MR_Word) &mercury__diet_scalar_common_1[1];
#line 13083 "diet.c"
    mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_op_table_40, (MR_Integer) 0)), (MR_Integer) 12)));
#line 13085 "diet.c"
    {
#line 13087 "diet.c"
      mercury__diet__conv1_V_13_38 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_op_table_40), ((MR_Box) ((MR_Integer) 0)));
    }
#line 13090 "diet.c"
    mercury__diet__V_13_38 = ((MR_Integer) mercury__diet__conv1_V_13_38);
#line 27 "string.to_string.opt"
    mercury__diet__Priority_10_37 = (mercury__diet__V_13_38 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__diet__TypeInfo_for_T_17, (MR_Integer) 1, mercury__diet__Priority_10_37, mercury__diet__X_5, mercury__diet__V_10_28, &mercury__diet__RevStrings_9_29);
    }
#line 13099 "diet.c"
    mercury__diet__TypeCtorInfo_13_31 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__diet__TypeCtorInfo_13_31, mercury__diet__RevStrings_9_29, &mercury__diet__V_11_30);
    }
#line 24 "string.to_string.opt"
    {
#line 24 "string.to_string.opt"
      mercury__diet__V_11_11 = mercury__string__append_list_1_f_0(mercury__diet__V_11_30);
    }
#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 22 "string.to_string.opt"
    mercury__diet__V_10_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 13115 "diet.c"
    mercury__diet__TypeClassInfo_for_op_table_65 = (MR_Word) &mercury__diet_scalar_common_1[1];
#line 13117 "diet.c"
    mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_op_table_65, (MR_Integer) 0)), (MR_Integer) 12)));
#line 13119 "diet.c"
    {
#line 13121 "diet.c"
      mercury__diet__conv3_V_13_63 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_op_table_65), ((MR_Box) ((MR_Integer) 0)));
    }
#line 13124 "diet.c"
    mercury__diet__V_13_63 = ((MR_Integer) mercury__diet__conv3_V_13_63);
#line 27 "string.to_string.opt"
    mercury__diet__Priority_10_62 = (mercury__diet__V_13_63 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__diet__TypeInfo_for_T_17, (MR_Integer) 1, mercury__diet__Priority_10_62, mercury__diet__Y_6, mercury__diet__V_10_53, &mercury__diet__RevStrings_9_54);
    }
#line 13133 "diet.c"
    mercury__diet__TypeCtorInfo_13_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__diet__TypeCtorInfo_13_56, mercury__diet__RevStrings_9_54, &mercury__diet__V_11_55);
    }
#line 24 "string.to_string.opt"
    {
#line 24 "string.to_string.opt"
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
#line 614 "diet.m"
    {
#line 614 "diet.m"
      mercury__require__unexpected_3_p_0((MR_String) "diet", mercury__diet__PredName_4, mercury__diet__V_8_8);
#line 614 "diet.m"
      return;
    }
#line 613 "diet.m"
  }
#line 611 "diet.m"
}

#line 439 "diet.m"
MR_Word MR_CALL 
mercury__diet__singleton_1_f_0(
#line 439 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_7,
#line 439 "diet.m"
  MR_Tuple mercury__diet__Z_3)
#line 439 "diet.m"
{
#line 441 "diet.m"
  {
#line 441 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 441 "diet.m"
    MR_Word mercury__diet__HeadVar__2_2;
#line 441 "diet.m"
    MR_Word mercury__diet__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 441 "diet.m"
    MR_Word mercury__diet__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 441 "diet.m"
    {
#line 441 "diet.m"
      mercury__diet__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 441 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 0) = ((MR_Box) (mercury__diet__Z_3));
#line 441 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 1));
#line 441 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 2) = ((MR_Box) (mercury__diet__V_5_5));
#line 441 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__2_2, 3) = ((MR_Box) (mercury__diet__V_6_6));
#line 441 "diet.m"
    }
#line 441 "diet.m"
    return mercury__diet__HeadVar__2_2;
#line 441 "diet.m"
  }
#line 439 "diet.m"
}

#line 362 "diet.m"
void MR_CALL 
mercury__diet__from_interval_list_2_p_0(
#line 362 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_7,
#line 362 "diet.m"
  MR_Word mercury__diet__List_3,
#line 362 "diet.m"
  MR_Word * mercury__diet__Set_4)
#line 362 "diet.m"
{
#line 1737 "diet.m"
  {
#line 1737 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1737 "diet.m"
    MR_Word mercury__diet__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1738 "diet.m"
    {
#line 1738 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_49_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_enum_7, mercury__diet__List_3, mercury__diet__V_6_6, mercury__diet__Set_4);
#line 1738 "diet.m"
      return;
    }
#line 1737 "diet.m"
  }
#line 362 "diet.m"
}

#line 354 "diet.m"
void MR_CALL 
mercury__diet__to_sorted_interval_list_2_p_0(
#line 354 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_7,
#line 354 "diet.m"
  MR_Word mercury__diet__Set_3,
#line 354 "diet.m"
  MR_Word * mercury__diet__List_4)
#line 354 "diet.m"
{
#line 1729 "diet.m"
  {
#line 1729 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1729 "diet.m"
    MR_Word mercury__diet__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1730 "diet.m"
    {
#line 1730 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_105_110_116_101_114_118_97_108_115_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_56_93_95_48_4_p_0(mercury__diet__TypeClassInfo_for_enum_7, mercury__diet__TypeClassInfo_for_enum_7, mercury__diet__Set_3, mercury__diet__V_6_6, mercury__diet__List_4);
#line 1730 "diet.m"
      return;
    }
#line 1729 "diet.m"
  }
#line 354 "diet.m"
}

#line 348 "diet.m"
void MR_CALL 
mercury__diet__to_sorted_list_2_p_0(
#line 348 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_7,
#line 348 "diet.m"
  MR_Word mercury__diet__T_3,
#line 348 "diet.m"
  MR_Word * mercury__diet__List_4)
#line 348 "diet.m"
{
#line 1726 "diet.m"
  {
#line 1726 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1726 "diet.m"
    MR_Word mercury__diet__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1727 "diet.m"
    {
#line 1727 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(mercury__diet__TypeClassInfo_for_enum_7, mercury__diet__TypeClassInfo_for_enum_7, mercury__diet__T_3, mercury__diet__V_6_6, mercury__diet__List_4);
#line 1727 "diet.m"
      return;
    }
#line 1726 "diet.m"
  }
#line 348 "diet.m"
}

#line 347 "diet.m"
MR_Word MR_CALL 
mercury__diet__to_sorted_list_1_f_0(
#line 347 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_5,
#line 347 "diet.m"
  MR_Word mercury__diet__T_3)
#line 347 "diet.m"
{
#line 1726 "diet.m"
  {
#line 1726 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1726 "diet.m"
    MR_Word mercury__diet__List_4;
#line 1726 "diet.m"
    MR_Word mercury__diet__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1727 "diet.m"
    {
#line 1727 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_51_95_95_91_49_44_32_51_44_32_53_93_95_48_4_p_0(mercury__diet__TypeClassInfo_for_enum_5, mercury__diet__TypeClassInfo_for_enum_5, mercury__diet__T_3, mercury__diet__V_9_9, &mercury__diet__List_4);
    }
#line 1726 "diet.m"
    return mercury__diet__List_4;
#line 1726 "diet.m"
  }
#line 347 "diet.m"
}

#line 342 "diet.m"
void MR_CALL 
mercury__diet__sorted_list_to_set_2_p_0(
#line 342 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_5,
#line 342 "diet.m"
  MR_Word mercury__diet__List_3,
#line 342 "diet.m"
  MR_Word * mercury__diet__Set_4)
#line 342 "diet.m"
{
#line 1721 "diet.m"
  {
#line 1721 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1721 "diet.m"
    {
#line 1721 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_enum_5, mercury__diet__List_3, mercury__diet__Set_4);
#line 1721 "diet.m"
      return;
    }
#line 1721 "diet.m"
  }
#line 342 "diet.m"
}

#line 341 "diet.m"
MR_Word MR_CALL 
mercury__diet__sorted_list_to_set_1_f_0(
#line 341 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_5,
#line 341 "diet.m"
  MR_Word mercury__diet__List_3)
#line 341 "diet.m"
{
#line 1721 "diet.m"
  {
#line 1721 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1721 "diet.m"
    MR_Word mercury__diet__Set_4;

#line 1721 "diet.m"
    {
#line 1721 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_enum_5, mercury__diet__List_3, &mercury__diet__Set_4);
    }
#line 1721 "diet.m"
    return mercury__diet__Set_4;
#line 1721 "diet.m"
  }
#line 341 "diet.m"
}

#line 336 "diet.m"
void MR_CALL 
mercury__diet__from_list_2_p_0(
#line 336 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_5,
#line 336 "diet.m"
  MR_Word mercury__diet__List_3,
#line 336 "diet.m"
  MR_Word * mercury__diet__Set_4)
#line 336 "diet.m"
{
#line 1715 "diet.m"
  {
#line 1715 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1715 "diet.m"
    {
#line 1715 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_enum_5, mercury__diet__List_3, mercury__diet__Set_4);
#line 1715 "diet.m"
      return;
    }
#line 1715 "diet.m"
  }
#line 336 "diet.m"
}

#line 335 "diet.m"
MR_Word MR_CALL 
mercury__diet__from_list_1_f_0(
#line 335 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_5,
#line 335 "diet.m"
  MR_Word mercury__diet__List_3)
#line 335 "diet.m"
{
#line 1712 "diet.m"
  {
#line 1712 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1712 "diet.m"
    MR_Word mercury__diet__Set_4;

#line 1712 "diet.m"
    {
#line 1712 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_enum_5, mercury__diet__List_3, &mercury__diet__Set_4);
    }
#line 1712 "diet.m"
    return mercury__diet__Set_4;
#line 1712 "diet.m"
  }
#line 335 "diet.m"
}

#line 333 "diet.m"
void MR_CALL 
mercury__diet__list_to_set_2_p_0(
#line 333 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_7,
#line 333 "diet.m"
  MR_Word mercury__diet__List_3,
#line 333 "diet.m"
  MR_Word * mercury__diet__Set_4)
#line 333 "diet.m"
{
#line 1708 "diet.m"
  {
#line 1708 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1708 "diet.m"
    MR_Word mercury__diet__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1709 "diet.m"
    {
#line 1709 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_enum_7, mercury__diet__List_3, mercury__diet__V_6_6, mercury__diet__Set_4);
#line 1709 "diet.m"
      return;
    }
#line 1708 "diet.m"
  }
#line 333 "diet.m"
}

#line 332 "diet.m"
MR_Word MR_CALL 
mercury__diet__list_to_set_1_f_0(
#line 332 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_5,
#line 332 "diet.m"
  MR_Word mercury__diet__List_3)
#line 332 "diet.m"
{
#line 1706 "diet.m"
  {
#line 1706 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1706 "diet.m"
    MR_Word mercury__diet__Set_4;

#line 1706 "diet.m"
    {
#line 1706 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_enum_5, mercury__diet__List_3, &mercury__diet__Set_4);
    }
#line 1706 "diet.m"
    return mercury__diet__Set_4;
#line 1706 "diet.m"
  }
#line 332 "diet.m"
}

#line 328 "diet.m"
void MR_CALL 
mercury__diet__filter_4_p_0(
#line 328 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_9,
#line 328 "diet.m"
  MR_Word mercury__diet__Pred_5,
#line 328 "diet.m"
  MR_Word mercury__diet__Set_6,
#line 328 "diet.m"
  MR_Word * mercury__diet__TrueSet_7,
#line 328 "diet.m"
  MR_Word * mercury__diet__FalseSet_8)
#line 328 "diet.m"
{
#line 1701 "diet.m"
  {
#line 1701 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1701 "diet.m"
    {
#line 1701 "diet.m"
      mercury__diet__divide_4_p_0(mercury__diet__TypeClassInfo_for_enum_9, mercury__diet__Pred_5, mercury__diet__Set_6, mercury__diet__TrueSet_7, mercury__diet__FalseSet_8);
#line 1701 "diet.m"
      return;
    }
#line 1701 "diet.m"
  }
#line 328 "diet.m"
}

#line 322 "diet.m"
MR_Word MR_CALL 
mercury__diet__filter_2_f_0(
#line 322 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_8,
#line 322 "diet.m"
  MR_Word mercury__diet__Pred_4,
#line 322 "diet.m"
  MR_Word mercury__diet__Set_5)
#line 322 "diet.m"
{
#line 1698 "diet.m"
  {
#line 1698 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1698 "diet.m"
    MR_Word mercury__diet__TrueSet_6;
#line 1698 "diet.m"
    MR_Word mercury__diet___FalseSet_7;

#line 1698 "diet.m"
    {
#line 1698 "diet.m"
      mercury__diet__divide_4_p_0(mercury__diet__TypeClassInfo_for_enum_8, mercury__diet__Pred_4, mercury__diet__Set_5, &mercury__diet__TrueSet_6, &mercury__diet___FalseSet_7);
    }
#line 1698 "diet.m"
    return mercury__diet__TrueSet_6;
#line 1698 "diet.m"
  }
#line 322 "diet.m"
}

#line 315 "diet.m"
MR_bool MR_CALL 
mercury__diet__all_true_2_p_0(
#line 315 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_11,
#line 315 "diet.m"
  MR_Word mercury__diet__P_3,
#line 315 "diet.m"
  MR_Word mercury__diet__Set_4)
#line 315 "diet.m"
{
#line 1676 "diet.m"
  while (MR_TRUE)
#line 1676 "diet.m"
    {
#line 1676 "diet.m"
      /* tailcall optimized into a loop */
#line 1676 "diet.m"
      {
#line 1676 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1676 "diet.m"
        if ((mercury__diet__Set_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1676 "diet.m"
          mercury__diet__succeeded = MR_TRUE;
#line 1676 "diet.m"
        else
#line 1678 "diet.m"
          {
#line 1678 "diet.m"
            MR_Integer mercury__diet__X_5;
#line 1678 "diet.m"
            MR_Integer mercury__diet__Y_6;
#line 1678 "diet.m"
            MR_Word mercury__diet__L_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_4, (MR_Integer) 2)));
#line 1678 "diet.m"
            MR_Word mercury__diet__R_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_4, (MR_Integer) 3)));
#line 1678 "diet.m"
            MR_Tuple mercury__diet__V_10_10 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set_4, (MR_Integer) 0)));
#line 1678 "diet.m"
            MR_Integer mercury__diet__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set_4, (MR_Integer) 1)));

#line 1678 "diet.m"
            mercury__diet__X_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_10_10, (MR_Integer) 0)));
#line 1678 "diet.m"
            mercury__diet__Y_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_10_10, (MR_Integer) 1)));
#line 1679 "diet.m"
            {
#line 1679 "diet.m"
              mercury__diet__succeeded = mercury__diet__all_true_2_p_0(mercury__diet__TypeClassInfo_for_enum_11, mercury__diet__P_3, mercury__diet__L_8);
            }
#line 1678 "diet.m"
            if (mercury__diet__succeeded)
#line 1678 "diet.m"
              {
#line 1680 "diet.m"
                {
#line 1680 "diet.m"
                  mercury__diet__succeeded = mercury__diet__all_true_interval_3_p_0(mercury__diet__TypeClassInfo_for_enum_11, mercury__diet__P_3, mercury__diet__X_5, mercury__diet__Y_6);
                }
#line 1678 "diet.m"
                if (mercury__diet__succeeded)
#line 1681 "diet.m"
                  {
#line 1681 "diet.m"
                    /* direct tailcall eliminated */
#line 1681 "diet.m"
                    {
#line 1681 "diet.m"
                      MR_Word mercury__diet__Set__tmp_copy_4 = mercury__diet__R_9;

#line 1681 "diet.m"
                      mercury__diet__Set_4 = mercury__diet__Set__tmp_copy_4;
#line 1681 "diet.m"
                    }
#line 1681 "diet.m"
                    continue;
#line 1681 "diet.m"
                  }
#line 1678 "diet.m"
              }
#line 1678 "diet.m"
          }
#line 1676 "diet.m"
        return mercury__diet__succeeded;
#line 1676 "diet.m"
      }
#line 1676 "diet.m"
      break;
#line 1676 "diet.m"
    }
#line 315 "diet.m"
}

#line 310 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldr_4_p_5(
#line 310 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 310 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
#line 310 "diet.m"
  MR_Word mercury__diet__P_5,
#line 310 "diet.m"
  MR_Word mercury__diet__T_6,
#line 310 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 310 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 310 "diet.m"
{
#line 1649 "diet.m"
  while (MR_TRUE)
#line 1649 "diet.m"
    {
#line 1649 "diet.m"
      /* tailcall optimized into a loop */
#line 1649 "diet.m"
      {
#line 1649 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1649 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1648 "diet.m"
          {
#line 1648 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1648 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1648 "diet.m"
          }
#line 1649 "diet.m"
        else
#line 1650 "diet.m"
          {
#line 1650 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1650 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1650 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1650 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1650 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1650 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1650 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1650 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1651 "diet.m"
            {
#line 1651 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldr_4_p_5(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1650 "diet.m"
            if (mercury__diet__succeeded)
#line 1650 "diet.m"
              {
#line 1652 "diet.m"
                {
#line 1652 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_down_5_p_5(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1650 "diet.m"
                if (mercury__diet__succeeded)
#line 1653 "diet.m"
                  {
#line 1653 "diet.m"
                    /* direct tailcall eliminated */
#line 1653 "diet.m"
                    {
#line 1653 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1653 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1653 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1653 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1653 "diet.m"
                    }
#line 1653 "diet.m"
                    continue;
#line 1653 "diet.m"
                  }
#line 1650 "diet.m"
              }
#line 1650 "diet.m"
          }
#line 1649 "diet.m"
        return mercury__diet__succeeded;
#line 1649 "diet.m"
      }
#line 1649 "diet.m"
      break;
#line 1649 "diet.m"
    }
#line 310 "diet.m"
}

#line 309 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldr_4_p_4(
#line 309 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 309 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
#line 309 "diet.m"
  MR_Word mercury__diet__P_5,
#line 309 "diet.m"
  MR_Word mercury__diet__T_6,
#line 309 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 309 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 309 "diet.m"
{
#line 1649 "diet.m"
  while (MR_TRUE)
#line 1649 "diet.m"
    {
#line 1649 "diet.m"
      /* tailcall optimized into a loop */
#line 1649 "diet.m"
      {
#line 1649 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1649 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1648 "diet.m"
          {
#line 1648 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1648 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1648 "diet.m"
          }
#line 1649 "diet.m"
        else
#line 1650 "diet.m"
          {
#line 1650 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1650 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1650 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1650 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1650 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1650 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1650 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1650 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1651 "diet.m"
            {
#line 1651 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldr_4_p_4(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1650 "diet.m"
            if (mercury__diet__succeeded)
#line 1650 "diet.m"
              {
#line 1652 "diet.m"
                {
#line 1652 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_down_5_p_4(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1650 "diet.m"
                if (mercury__diet__succeeded)
#line 1653 "diet.m"
                  {
#line 1653 "diet.m"
                    /* direct tailcall eliminated */
#line 1653 "diet.m"
                    {
#line 1653 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1653 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1653 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1653 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1653 "diet.m"
                    }
#line 1653 "diet.m"
                    continue;
#line 1653 "diet.m"
                  }
#line 1650 "diet.m"
              }
#line 1650 "diet.m"
          }
#line 1649 "diet.m"
        return mercury__diet__succeeded;
#line 1649 "diet.m"
      }
#line 1649 "diet.m"
      break;
#line 1649 "diet.m"
    }
#line 309 "diet.m"
}

#line 308 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldr_4_p_3(
#line 308 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 308 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
#line 308 "diet.m"
  MR_Word mercury__diet__P_5,
#line 308 "diet.m"
  MR_Word mercury__diet__T_6,
#line 308 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 308 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 308 "diet.m"
{
#line 1649 "diet.m"
  while (MR_TRUE)
#line 1649 "diet.m"
    {
#line 1649 "diet.m"
      /* tailcall optimized into a loop */
#line 1649 "diet.m"
      {
#line 1649 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1649 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1648 "diet.m"
          {
#line 1648 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1648 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1648 "diet.m"
          }
#line 1649 "diet.m"
        else
#line 1650 "diet.m"
          {
#line 1650 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1650 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1650 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1650 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1650 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1650 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1650 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1650 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1651 "diet.m"
            {
#line 1651 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldr_4_p_3(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1650 "diet.m"
            if (mercury__diet__succeeded)
#line 1650 "diet.m"
              {
#line 1652 "diet.m"
                {
#line 1652 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_down_5_p_3(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1650 "diet.m"
                if (mercury__diet__succeeded)
#line 1653 "diet.m"
                  {
#line 1653 "diet.m"
                    /* direct tailcall eliminated */
#line 1653 "diet.m"
                    {
#line 1653 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1653 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1653 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1653 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1653 "diet.m"
                    }
#line 1653 "diet.m"
                    continue;
#line 1653 "diet.m"
                  }
#line 1650 "diet.m"
              }
#line 1650 "diet.m"
          }
#line 1649 "diet.m"
        return mercury__diet__succeeded;
#line 1649 "diet.m"
      }
#line 1649 "diet.m"
      break;
#line 1649 "diet.m"
    }
#line 308 "diet.m"
}

#line 307 "diet.m"
void MR_CALL 
mercury__diet__foldr_4_p_2(
#line 307 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 307 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
#line 307 "diet.m"
  MR_Word mercury__diet__P_5,
#line 307 "diet.m"
  MR_Word mercury__diet__T_6,
#line 307 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 307 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 307 "diet.m"
{
#line 1649 "diet.m"
  while (MR_TRUE)
#line 1649 "diet.m"
    {
#line 1649 "diet.m"
      /* tailcall optimized into a loop */
#line 1649 "diet.m"
      {
#line 1649 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1649 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1648 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1649 "diet.m"
        else
#line 1650 "diet.m"
          {
#line 1650 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1650 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1650 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1650 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1650 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1650 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1650 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1650 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1651 "diet.m"
            {
#line 1651 "diet.m"
              mercury__diet__foldr_4_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1652 "diet.m"
            {
#line 1652 "diet.m"
              mercury__diet__fold_down_5_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1653 "diet.m"
            /* direct tailcall eliminated */
#line 1653 "diet.m"
            {
#line 1653 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1653 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1653 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1653 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1653 "diet.m"
            }
#line 1653 "diet.m"
            continue;
#line 1650 "diet.m"
          }
#line 1649 "diet.m"
      }
#line 1649 "diet.m"
      break;
#line 1649 "diet.m"
    }
#line 307 "diet.m"
}

#line 306 "diet.m"
void MR_CALL 
mercury__diet__foldr_4_p_1(
#line 306 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 306 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
#line 306 "diet.m"
  MR_Word mercury__diet__P_5,
#line 306 "diet.m"
  MR_Word mercury__diet__T_6,
#line 306 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 306 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 306 "diet.m"
{
#line 1649 "diet.m"
  while (MR_TRUE)
#line 1649 "diet.m"
    {
#line 1649 "diet.m"
      /* tailcall optimized into a loop */
#line 1649 "diet.m"
      {
#line 1649 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1649 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1648 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1649 "diet.m"
        else
#line 1650 "diet.m"
          {
#line 1650 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1650 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1650 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1650 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1650 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1650 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1650 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1650 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1651 "diet.m"
            {
#line 1651 "diet.m"
              mercury__diet__foldr_4_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1652 "diet.m"
            {
#line 1652 "diet.m"
              mercury__diet__fold_down_5_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1653 "diet.m"
            /* direct tailcall eliminated */
#line 1653 "diet.m"
            {
#line 1653 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1653 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1653 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1653 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1653 "diet.m"
            }
#line 1653 "diet.m"
            continue;
#line 1650 "diet.m"
          }
#line 1649 "diet.m"
      }
#line 1649 "diet.m"
      break;
#line 1649 "diet.m"
    }
#line 306 "diet.m"
}

#line 305 "diet.m"
void MR_CALL 
mercury__diet__foldr_4_p_0(
#line 305 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 305 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
#line 305 "diet.m"
  MR_Word mercury__diet__P_5,
#line 305 "diet.m"
  MR_Word mercury__diet__T_6,
#line 305 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 305 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 305 "diet.m"
{
#line 1649 "diet.m"
  while (MR_TRUE)
#line 1649 "diet.m"
    {
#line 1649 "diet.m"
      /* tailcall optimized into a loop */
#line 1649 "diet.m"
      {
#line 1649 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1649 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1648 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1649 "diet.m"
        else
#line 1650 "diet.m"
          {
#line 1650 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1650 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1650 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1650 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1650 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1650 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1650 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1650 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1650 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1651 "diet.m"
            {
#line 1651 "diet.m"
              mercury__diet__foldr_4_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1652 "diet.m"
            {
#line 1652 "diet.m"
              mercury__diet__fold_down_5_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1653 "diet.m"
            /* direct tailcall eliminated */
#line 1653 "diet.m"
            {
#line 1653 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1653 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1653 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1653 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1653 "diet.m"
            }
#line 1653 "diet.m"
            continue;
#line 1650 "diet.m"
          }
#line 1649 "diet.m"
      }
#line 1649 "diet.m"
      break;
#line 1649 "diet.m"
    }
#line 305 "diet.m"
}

#line 302 "diet.m"
MR_Box MR_CALL 
mercury__diet__foldr_3_f_0(
#line 302 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 302 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
#line 302 "diet.m"
  MR_Word mercury__diet__F_5,
#line 302 "diet.m"
  MR_Word mercury__diet__Set_6,
#line 302 "diet.m"
  MR_Box mercury__diet__Acc0_7)
#line 302 "diet.m"
{
#line 1644 "diet.m"
  {
#line 1644 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1644 "diet.m"
    MR_Box mercury__diet__Acc_8;

#line 1644 "diet.m"
    {
#line 1644 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_53_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(mercury__diet__F_5, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__Set_6, mercury__diet__Acc0_7, &mercury__diet__Acc_8);
    }
#line 1644 "diet.m"
    return mercury__diet__Acc_8;
#line 1644 "diet.m"
  }
#line 302 "diet.m"
}

#line 298 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl5_12_p_5(
#line 298 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_52,
#line 298 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_53,
#line 298 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_54,
#line 298 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_55,
#line 298 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_56,
#line 298 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_51,
#line 298 "diet.m"
  MR_Word mercury__diet__P_13,
#line 298 "diet.m"
  MR_Word mercury__diet__T_14,
#line 298 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_25,
#line 298 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_26,
#line 298 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_27,
#line 298 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_28,
#line 298 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_29,
#line 298 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_30,
#line 298 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_31,
#line 298 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_32,
#line 298 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_33,
#line 298 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_34)
#line 298 "diet.m"
{
#line 1601 "diet.m"
  while (MR_TRUE)
#line 1601 "diet.m"
    {
#line 1601 "diet.m"
      /* tailcall optimized into a loop */
#line 1601 "diet.m"
      {
#line 1601 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1601 "diet.m"
        if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1600 "diet.m"
          {
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
#line 1600 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1600 "diet.m"
          }
#line 1601 "diet.m"
        else
#line 1602 "diet.m"
          {
#line 1602 "diet.m"
            MR_Integer mercury__diet__X_20;
#line 1602 "diet.m"
            MR_Integer mercury__diet__Y_21;
#line 1602 "diet.m"
            MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
#line 1602 "diet.m"
            MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
#line 1602 "diet.m"
            MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
#line 1602 "diet.m"
            MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

#line 1602 "diet.m"
            mercury__diet__X_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0)));
#line 1602 "diet.m"
            mercury__diet__Y_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1)));
#line 1603 "diet.m"
            {
#line 1603 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl5_12_p_5(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_enum_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
            }
#line 1602 "diet.m"
            if (mercury__diet__succeeded)
#line 1602 "diet.m"
              {
#line 1604 "diet.m"
                {
#line 1604 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up5_13_p_5(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_enum_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
                }
#line 1602 "diet.m"
                if (mercury__diet__succeeded)
#line 1605 "diet.m"
                  {
#line 1605 "diet.m"
                    /* direct tailcall eliminated */
#line 1605 "diet.m"
                    {
#line 1605 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_14 = mercury__diet__R_24;
#line 1605 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_A_41_41;
#line 1605 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27 = mercury__diet__STATE_VARIABLE_B_42_42;
#line 1605 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29 = mercury__diet__STATE_VARIABLE_C_43_43;
#line 1605 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31 = mercury__diet__STATE_VARIABLE_D_44_44;
#line 1605 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33 = mercury__diet__STATE_VARIABLE_E_45_45;

#line 1605 "diet.m"
                      mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33;
#line 1605 "diet.m"
                      mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31;
#line 1605 "diet.m"
                      mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29;
#line 1605 "diet.m"
                      mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27;
#line 1605 "diet.m"
                      mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25;
#line 1605 "diet.m"
                      mercury__diet__T_14 = mercury__diet__T__tmp_copy_14;
#line 1605 "diet.m"
                    }
#line 1605 "diet.m"
                    continue;
#line 1605 "diet.m"
                  }
#line 1602 "diet.m"
              }
#line 1602 "diet.m"
          }
#line 1601 "diet.m"
        return mercury__diet__succeeded;
#line 1601 "diet.m"
      }
#line 1601 "diet.m"
      break;
#line 1601 "diet.m"
    }
#line 298 "diet.m"
}

#line 295 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl5_12_p_4(
#line 295 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_52,
#line 295 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_53,
#line 295 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_54,
#line 295 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_55,
#line 295 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_56,
#line 295 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_51,
#line 295 "diet.m"
  MR_Word mercury__diet__P_13,
#line 295 "diet.m"
  MR_Word mercury__diet__T_14,
#line 295 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_25,
#line 295 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_26,
#line 295 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_27,
#line 295 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_28,
#line 295 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_29,
#line 295 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_30,
#line 295 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_31,
#line 295 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_32,
#line 295 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_33,
#line 295 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_34)
#line 295 "diet.m"
{
#line 1601 "diet.m"
  while (MR_TRUE)
#line 1601 "diet.m"
    {
#line 1601 "diet.m"
      /* tailcall optimized into a loop */
#line 1601 "diet.m"
      {
#line 1601 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1601 "diet.m"
        if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1600 "diet.m"
          {
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
#line 1600 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1600 "diet.m"
          }
#line 1601 "diet.m"
        else
#line 1602 "diet.m"
          {
#line 1602 "diet.m"
            MR_Integer mercury__diet__X_20;
#line 1602 "diet.m"
            MR_Integer mercury__diet__Y_21;
#line 1602 "diet.m"
            MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
#line 1602 "diet.m"
            MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
#line 1602 "diet.m"
            MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
#line 1602 "diet.m"
            MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

#line 1602 "diet.m"
            mercury__diet__X_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0)));
#line 1602 "diet.m"
            mercury__diet__Y_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1)));
#line 1603 "diet.m"
            {
#line 1603 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl5_12_p_4(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_enum_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
            }
#line 1602 "diet.m"
            if (mercury__diet__succeeded)
#line 1602 "diet.m"
              {
#line 1604 "diet.m"
                {
#line 1604 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up5_13_p_4(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_enum_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
                }
#line 1602 "diet.m"
                if (mercury__diet__succeeded)
#line 1605 "diet.m"
                  {
#line 1605 "diet.m"
                    /* direct tailcall eliminated */
#line 1605 "diet.m"
                    {
#line 1605 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_14 = mercury__diet__R_24;
#line 1605 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_A_41_41;
#line 1605 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27 = mercury__diet__STATE_VARIABLE_B_42_42;
#line 1605 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29 = mercury__diet__STATE_VARIABLE_C_43_43;
#line 1605 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31 = mercury__diet__STATE_VARIABLE_D_44_44;
#line 1605 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33 = mercury__diet__STATE_VARIABLE_E_45_45;

#line 1605 "diet.m"
                      mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33;
#line 1605 "diet.m"
                      mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31;
#line 1605 "diet.m"
                      mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29;
#line 1605 "diet.m"
                      mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27;
#line 1605 "diet.m"
                      mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25;
#line 1605 "diet.m"
                      mercury__diet__T_14 = mercury__diet__T__tmp_copy_14;
#line 1605 "diet.m"
                    }
#line 1605 "diet.m"
                    continue;
#line 1605 "diet.m"
                  }
#line 1602 "diet.m"
              }
#line 1602 "diet.m"
          }
#line 1601 "diet.m"
        return mercury__diet__succeeded;
#line 1601 "diet.m"
      }
#line 1601 "diet.m"
      break;
#line 1601 "diet.m"
    }
#line 295 "diet.m"
}

#line 292 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl5_12_p_3(
#line 292 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_52,
#line 292 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_53,
#line 292 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_54,
#line 292 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_55,
#line 292 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_56,
#line 292 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_51,
#line 292 "diet.m"
  MR_Word mercury__diet__P_13,
#line 292 "diet.m"
  MR_Word mercury__diet__T_14,
#line 292 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_25,
#line 292 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_26,
#line 292 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_27,
#line 292 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_28,
#line 292 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_29,
#line 292 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_30,
#line 292 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_31,
#line 292 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_32,
#line 292 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_33,
#line 292 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_34)
#line 292 "diet.m"
{
#line 1601 "diet.m"
  while (MR_TRUE)
#line 1601 "diet.m"
    {
#line 1601 "diet.m"
      /* tailcall optimized into a loop */
#line 1601 "diet.m"
      {
#line 1601 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1601 "diet.m"
        if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1600 "diet.m"
          {
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
#line 1600 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1600 "diet.m"
          }
#line 1601 "diet.m"
        else
#line 1602 "diet.m"
          {
#line 1602 "diet.m"
            MR_Integer mercury__diet__X_20;
#line 1602 "diet.m"
            MR_Integer mercury__diet__Y_21;
#line 1602 "diet.m"
            MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
#line 1602 "diet.m"
            MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
#line 1602 "diet.m"
            MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
#line 1602 "diet.m"
            MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

#line 1602 "diet.m"
            mercury__diet__X_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0)));
#line 1602 "diet.m"
            mercury__diet__Y_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1)));
#line 1603 "diet.m"
            {
#line 1603 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl5_12_p_3(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_enum_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
            }
#line 1602 "diet.m"
            if (mercury__diet__succeeded)
#line 1602 "diet.m"
              {
#line 1604 "diet.m"
                {
#line 1604 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up5_13_p_3(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_enum_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
                }
#line 1602 "diet.m"
                if (mercury__diet__succeeded)
#line 1605 "diet.m"
                  {
#line 1605 "diet.m"
                    /* direct tailcall eliminated */
#line 1605 "diet.m"
                    {
#line 1605 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_14 = mercury__diet__R_24;
#line 1605 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_A_41_41;
#line 1605 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27 = mercury__diet__STATE_VARIABLE_B_42_42;
#line 1605 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29 = mercury__diet__STATE_VARIABLE_C_43_43;
#line 1605 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31 = mercury__diet__STATE_VARIABLE_D_44_44;
#line 1605 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33 = mercury__diet__STATE_VARIABLE_E_45_45;

#line 1605 "diet.m"
                      mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33;
#line 1605 "diet.m"
                      mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31;
#line 1605 "diet.m"
                      mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29;
#line 1605 "diet.m"
                      mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27;
#line 1605 "diet.m"
                      mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25;
#line 1605 "diet.m"
                      mercury__diet__T_14 = mercury__diet__T__tmp_copy_14;
#line 1605 "diet.m"
                    }
#line 1605 "diet.m"
                    continue;
#line 1605 "diet.m"
                  }
#line 1602 "diet.m"
              }
#line 1602 "diet.m"
          }
#line 1601 "diet.m"
        return mercury__diet__succeeded;
#line 1601 "diet.m"
      }
#line 1601 "diet.m"
      break;
#line 1601 "diet.m"
    }
#line 292 "diet.m"
}

#line 289 "diet.m"
void MR_CALL 
mercury__diet__foldl5_12_p_2(
#line 289 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_52,
#line 289 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_53,
#line 289 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_54,
#line 289 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_55,
#line 289 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_56,
#line 289 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_51,
#line 289 "diet.m"
  MR_Word mercury__diet__P_13,
#line 289 "diet.m"
  MR_Word mercury__diet__T_14,
#line 289 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_25,
#line 289 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_26,
#line 289 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_27,
#line 289 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_28,
#line 289 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_29,
#line 289 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_30,
#line 289 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_31,
#line 289 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_32,
#line 289 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_33,
#line 289 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_34)
#line 289 "diet.m"
{
#line 1601 "diet.m"
  while (MR_TRUE)
#line 1601 "diet.m"
    {
#line 1601 "diet.m"
      /* tailcall optimized into a loop */
#line 1601 "diet.m"
      {
#line 1601 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1601 "diet.m"
        if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1600 "diet.m"
          {
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
#line 1600 "diet.m"
          }
#line 1601 "diet.m"
        else
#line 1602 "diet.m"
          {
#line 1602 "diet.m"
            MR_Integer mercury__diet__X_20;
#line 1602 "diet.m"
            MR_Integer mercury__diet__Y_21;
#line 1602 "diet.m"
            MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
#line 1602 "diet.m"
            MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
#line 1602 "diet.m"
            MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
#line 1602 "diet.m"
            MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

#line 1602 "diet.m"
            mercury__diet__X_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0)));
#line 1602 "diet.m"
            mercury__diet__Y_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1)));
#line 1603 "diet.m"
            {
#line 1603 "diet.m"
              mercury__diet__foldl5_12_p_2(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_enum_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
            }
#line 1604 "diet.m"
            {
#line 1604 "diet.m"
              mercury__diet__fold_up5_13_p_2(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_enum_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
            }
#line 1605 "diet.m"
            /* direct tailcall eliminated */
#line 1605 "diet.m"
            {
#line 1605 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_14 = mercury__diet__R_24;
#line 1605 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_A_41_41;
#line 1605 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27 = mercury__diet__STATE_VARIABLE_B_42_42;
#line 1605 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29 = mercury__diet__STATE_VARIABLE_C_43_43;
#line 1605 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31 = mercury__diet__STATE_VARIABLE_D_44_44;
#line 1605 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33 = mercury__diet__STATE_VARIABLE_E_45_45;

#line 1605 "diet.m"
              mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33;
#line 1605 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31;
#line 1605 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29;
#line 1605 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27;
#line 1605 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25;
#line 1605 "diet.m"
              mercury__diet__T_14 = mercury__diet__T__tmp_copy_14;
#line 1605 "diet.m"
            }
#line 1605 "diet.m"
            continue;
#line 1602 "diet.m"
          }
#line 1601 "diet.m"
      }
#line 1601 "diet.m"
      break;
#line 1601 "diet.m"
    }
#line 289 "diet.m"
}

#line 286 "diet.m"
void MR_CALL 
mercury__diet__foldl5_12_p_1(
#line 286 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_52,
#line 286 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_53,
#line 286 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_54,
#line 286 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_55,
#line 286 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_56,
#line 286 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_51,
#line 286 "diet.m"
  MR_Word mercury__diet__P_13,
#line 286 "diet.m"
  MR_Word mercury__diet__T_14,
#line 286 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_25,
#line 286 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_26,
#line 286 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_27,
#line 286 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_28,
#line 286 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_29,
#line 286 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_30,
#line 286 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_31,
#line 286 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_32,
#line 286 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_33,
#line 286 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_34)
#line 286 "diet.m"
{
#line 1601 "diet.m"
  while (MR_TRUE)
#line 1601 "diet.m"
    {
#line 1601 "diet.m"
      /* tailcall optimized into a loop */
#line 1601 "diet.m"
      {
#line 1601 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1601 "diet.m"
        if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1600 "diet.m"
          {
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
#line 1600 "diet.m"
          }
#line 1601 "diet.m"
        else
#line 1602 "diet.m"
          {
#line 1602 "diet.m"
            MR_Integer mercury__diet__X_20;
#line 1602 "diet.m"
            MR_Integer mercury__diet__Y_21;
#line 1602 "diet.m"
            MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
#line 1602 "diet.m"
            MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
#line 1602 "diet.m"
            MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
#line 1602 "diet.m"
            MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

#line 1602 "diet.m"
            mercury__diet__X_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0)));
#line 1602 "diet.m"
            mercury__diet__Y_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1)));
#line 1603 "diet.m"
            {
#line 1603 "diet.m"
              mercury__diet__foldl5_12_p_1(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_enum_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
            }
#line 1604 "diet.m"
            {
#line 1604 "diet.m"
              mercury__diet__fold_up5_13_p_1(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_enum_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
            }
#line 1605 "diet.m"
            /* direct tailcall eliminated */
#line 1605 "diet.m"
            {
#line 1605 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_14 = mercury__diet__R_24;
#line 1605 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_A_41_41;
#line 1605 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27 = mercury__diet__STATE_VARIABLE_B_42_42;
#line 1605 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29 = mercury__diet__STATE_VARIABLE_C_43_43;
#line 1605 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31 = mercury__diet__STATE_VARIABLE_D_44_44;
#line 1605 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33 = mercury__diet__STATE_VARIABLE_E_45_45;

#line 1605 "diet.m"
              mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33;
#line 1605 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31;
#line 1605 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29;
#line 1605 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27;
#line 1605 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25;
#line 1605 "diet.m"
              mercury__diet__T_14 = mercury__diet__T__tmp_copy_14;
#line 1605 "diet.m"
            }
#line 1605 "diet.m"
            continue;
#line 1602 "diet.m"
          }
#line 1601 "diet.m"
      }
#line 1601 "diet.m"
      break;
#line 1601 "diet.m"
    }
#line 286 "diet.m"
}

#line 283 "diet.m"
void MR_CALL 
mercury__diet__foldl5_12_p_0(
#line 283 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_52,
#line 283 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_53,
#line 283 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_54,
#line 283 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_55,
#line 283 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_E_56,
#line 283 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_51,
#line 283 "diet.m"
  MR_Word mercury__diet__P_13,
#line 283 "diet.m"
  MR_Word mercury__diet__T_14,
#line 283 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_25,
#line 283 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_26,
#line 283 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_27,
#line 283 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_28,
#line 283 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_29,
#line 283 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_30,
#line 283 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_31,
#line 283 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_32,
#line 283 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_E_0_33,
#line 283 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_E_34)
#line 283 "diet.m"
{
#line 1601 "diet.m"
  while (MR_TRUE)
#line 1601 "diet.m"
    {
#line 1601 "diet.m"
      /* tailcall optimized into a loop */
#line 1601 "diet.m"
      {
#line 1601 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1601 "diet.m"
        if ((mercury__diet__T_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1600 "diet.m"
          {
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_26 = mercury__diet__STATE_VARIABLE_A_0_25;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_28 = mercury__diet__STATE_VARIABLE_B_0_27;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_30 = mercury__diet__STATE_VARIABLE_C_0_29;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_32 = mercury__diet__STATE_VARIABLE_D_0_31;
#line 1600 "diet.m"
            *mercury__diet__STATE_VARIABLE_E_34 = mercury__diet__STATE_VARIABLE_E_0_33;
#line 1600 "diet.m"
          }
#line 1601 "diet.m"
        else
#line 1602 "diet.m"
          {
#line 1602 "diet.m"
            MR_Integer mercury__diet__X_20;
#line 1602 "diet.m"
            MR_Integer mercury__diet__Y_21;
#line 1602 "diet.m"
            MR_Word mercury__diet__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 2)));
#line 1602 "diet.m"
            MR_Word mercury__diet__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 3)));
#line 1602 "diet.m"
            MR_Tuple mercury__diet__V_35_35 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 0)));
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_36_36;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_37_37;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_38_38;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_39_39;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_40_40;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_41_41;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_42_42;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_43_43;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_44_44;
#line 1602 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_E_45_45;
#line 1602 "diet.m"
            MR_Integer mercury__diet__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_14, (MR_Integer) 1)));

#line 1602 "diet.m"
            mercury__diet__X_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 0)));
#line 1602 "diet.m"
            mercury__diet__Y_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_35_35, (MR_Integer) 1)));
#line 1603 "diet.m"
            {
#line 1603 "diet.m"
              mercury__diet__foldl5_12_p_0(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_enum_51, mercury__diet__P_13, mercury__diet__L_23, mercury__diet__STATE_VARIABLE_A_0_25, &mercury__diet__STATE_VARIABLE_A_36_36, mercury__diet__STATE_VARIABLE_B_0_27, &mercury__diet__STATE_VARIABLE_B_37_37, mercury__diet__STATE_VARIABLE_C_0_29, &mercury__diet__STATE_VARIABLE_C_38_38, mercury__diet__STATE_VARIABLE_D_0_31, &mercury__diet__STATE_VARIABLE_D_39_39, mercury__diet__STATE_VARIABLE_E_0_33, &mercury__diet__STATE_VARIABLE_E_40_40);
            }
#line 1604 "diet.m"
            {
#line 1604 "diet.m"
              mercury__diet__fold_up5_13_p_0(mercury__diet__TypeInfo_for_A_52, mercury__diet__TypeInfo_for_B_53, mercury__diet__TypeInfo_for_C_54, mercury__diet__TypeInfo_for_D_55, mercury__diet__TypeInfo_for_E_56, mercury__diet__TypeClassInfo_for_enum_51, mercury__diet__P_13, mercury__diet__X_20, mercury__diet__Y_21, mercury__diet__STATE_VARIABLE_A_36_36, &mercury__diet__STATE_VARIABLE_A_41_41, mercury__diet__STATE_VARIABLE_B_37_37, &mercury__diet__STATE_VARIABLE_B_42_42, mercury__diet__STATE_VARIABLE_C_38_38, &mercury__diet__STATE_VARIABLE_C_43_43, mercury__diet__STATE_VARIABLE_D_39_39, &mercury__diet__STATE_VARIABLE_D_44_44, mercury__diet__STATE_VARIABLE_E_40_40, &mercury__diet__STATE_VARIABLE_E_45_45);
            }
#line 1605 "diet.m"
            /* direct tailcall eliminated */
#line 1605 "diet.m"
            {
#line 1605 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_14 = mercury__diet__R_24;
#line 1605 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25 = mercury__diet__STATE_VARIABLE_A_41_41;
#line 1605 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27 = mercury__diet__STATE_VARIABLE_B_42_42;
#line 1605 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29 = mercury__diet__STATE_VARIABLE_C_43_43;
#line 1605 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31 = mercury__diet__STATE_VARIABLE_D_44_44;
#line 1605 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33 = mercury__diet__STATE_VARIABLE_E_45_45;

#line 1605 "diet.m"
              mercury__diet__STATE_VARIABLE_E_0_33 = mercury__diet__STATE_VARIABLE_E_0__tmp_copy_33;
#line 1605 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_31 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_31;
#line 1605 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_29 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_29;
#line 1605 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_27 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_27;
#line 1605 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_25 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_25;
#line 1605 "diet.m"
              mercury__diet__T_14 = mercury__diet__T__tmp_copy_14;
#line 1605 "diet.m"
            }
#line 1605 "diet.m"
            continue;
#line 1602 "diet.m"
          }
#line 1601 "diet.m"
      }
#line 1601 "diet.m"
      break;
#line 1601 "diet.m"
    }
#line 283 "diet.m"
}

#line 278 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl4_10_p_5(
#line 278 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 278 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 278 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 278 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 278 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_43,
#line 278 "diet.m"
  MR_Word mercury__diet__P_11,
#line 278 "diet.m"
  MR_Word mercury__diet__T_12,
#line 278 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 278 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 278 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 278 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 278 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 278 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 278 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 278 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29)
#line 278 "diet.m"
{
#line 1566 "diet.m"
  while (MR_TRUE)
#line 1566 "diet.m"
    {
#line 1566 "diet.m"
      /* tailcall optimized into a loop */
#line 1566 "diet.m"
      {
#line 1566 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1566 "diet.m"
        if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1565 "diet.m"
          {
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1565 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1565 "diet.m"
          }
#line 1566 "diet.m"
        else
#line 1567 "diet.m"
          {
#line 1567 "diet.m"
            MR_Integer mercury__diet__X_17;
#line 1567 "diet.m"
            MR_Integer mercury__diet__Y_18;
#line 1567 "diet.m"
            MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
#line 1567 "diet.m"
            MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
#line 1567 "diet.m"
            MR_Tuple mercury__diet__V_30_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
#line 1567 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

#line 1567 "diet.m"
            mercury__diet__X_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 0)));
#line 1567 "diet.m"
            mercury__diet__Y_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 1)));
#line 1568 "diet.m"
            {
#line 1568 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl4_10_p_5(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_enum_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
            }
#line 1567 "diet.m"
            if (mercury__diet__succeeded)
#line 1567 "diet.m"
              {
#line 1569 "diet.m"
                {
#line 1569 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up4_11_p_5(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_enum_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
                }
#line 1567 "diet.m"
                if (mercury__diet__succeeded)
#line 1570 "diet.m"
                  {
#line 1570 "diet.m"
                    /* direct tailcall eliminated */
#line 1570 "diet.m"
                    {
#line 1570 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_12 = mercury__diet__R_21;
#line 1570 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_35_35;
#line 1570 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_36_36;
#line 1570 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_37_37;
#line 1570 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_38_38;

#line 1570 "diet.m"
                      mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1570 "diet.m"
                      mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1570 "diet.m"
                      mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1570 "diet.m"
                      mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1570 "diet.m"
                      mercury__diet__T_12 = mercury__diet__T__tmp_copy_12;
#line 1570 "diet.m"
                    }
#line 1570 "diet.m"
                    continue;
#line 1570 "diet.m"
                  }
#line 1567 "diet.m"
              }
#line 1567 "diet.m"
          }
#line 1566 "diet.m"
        return mercury__diet__succeeded;
#line 1566 "diet.m"
      }
#line 1566 "diet.m"
      break;
#line 1566 "diet.m"
    }
#line 278 "diet.m"
}

#line 276 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl4_10_p_4(
#line 276 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 276 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 276 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 276 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 276 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_43,
#line 276 "diet.m"
  MR_Word mercury__diet__P_11,
#line 276 "diet.m"
  MR_Word mercury__diet__T_12,
#line 276 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 276 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 276 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 276 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 276 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 276 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 276 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 276 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29)
#line 276 "diet.m"
{
#line 1566 "diet.m"
  while (MR_TRUE)
#line 1566 "diet.m"
    {
#line 1566 "diet.m"
      /* tailcall optimized into a loop */
#line 1566 "diet.m"
      {
#line 1566 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1566 "diet.m"
        if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1565 "diet.m"
          {
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1565 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1565 "diet.m"
          }
#line 1566 "diet.m"
        else
#line 1567 "diet.m"
          {
#line 1567 "diet.m"
            MR_Integer mercury__diet__X_17;
#line 1567 "diet.m"
            MR_Integer mercury__diet__Y_18;
#line 1567 "diet.m"
            MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
#line 1567 "diet.m"
            MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
#line 1567 "diet.m"
            MR_Tuple mercury__diet__V_30_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
#line 1567 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

#line 1567 "diet.m"
            mercury__diet__X_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 0)));
#line 1567 "diet.m"
            mercury__diet__Y_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 1)));
#line 1568 "diet.m"
            {
#line 1568 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl4_10_p_4(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_enum_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
            }
#line 1567 "diet.m"
            if (mercury__diet__succeeded)
#line 1567 "diet.m"
              {
#line 1569 "diet.m"
                {
#line 1569 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up4_11_p_4(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_enum_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
                }
#line 1567 "diet.m"
                if (mercury__diet__succeeded)
#line 1570 "diet.m"
                  {
#line 1570 "diet.m"
                    /* direct tailcall eliminated */
#line 1570 "diet.m"
                    {
#line 1570 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_12 = mercury__diet__R_21;
#line 1570 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_35_35;
#line 1570 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_36_36;
#line 1570 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_37_37;
#line 1570 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_38_38;

#line 1570 "diet.m"
                      mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1570 "diet.m"
                      mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1570 "diet.m"
                      mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1570 "diet.m"
                      mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1570 "diet.m"
                      mercury__diet__T_12 = mercury__diet__T__tmp_copy_12;
#line 1570 "diet.m"
                    }
#line 1570 "diet.m"
                    continue;
#line 1570 "diet.m"
                  }
#line 1567 "diet.m"
              }
#line 1567 "diet.m"
          }
#line 1566 "diet.m"
        return mercury__diet__succeeded;
#line 1566 "diet.m"
      }
#line 1566 "diet.m"
      break;
#line 1566 "diet.m"
    }
#line 276 "diet.m"
}

#line 274 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl4_10_p_3(
#line 274 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 274 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 274 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 274 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 274 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_43,
#line 274 "diet.m"
  MR_Word mercury__diet__P_11,
#line 274 "diet.m"
  MR_Word mercury__diet__T_12,
#line 274 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 274 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 274 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 274 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 274 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 274 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 274 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 274 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29)
#line 274 "diet.m"
{
#line 1566 "diet.m"
  while (MR_TRUE)
#line 1566 "diet.m"
    {
#line 1566 "diet.m"
      /* tailcall optimized into a loop */
#line 1566 "diet.m"
      {
#line 1566 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1566 "diet.m"
        if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1565 "diet.m"
          {
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1565 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1565 "diet.m"
          }
#line 1566 "diet.m"
        else
#line 1567 "diet.m"
          {
#line 1567 "diet.m"
            MR_Integer mercury__diet__X_17;
#line 1567 "diet.m"
            MR_Integer mercury__diet__Y_18;
#line 1567 "diet.m"
            MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
#line 1567 "diet.m"
            MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
#line 1567 "diet.m"
            MR_Tuple mercury__diet__V_30_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
#line 1567 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

#line 1567 "diet.m"
            mercury__diet__X_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 0)));
#line 1567 "diet.m"
            mercury__diet__Y_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 1)));
#line 1568 "diet.m"
            {
#line 1568 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl4_10_p_3(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_enum_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
            }
#line 1567 "diet.m"
            if (mercury__diet__succeeded)
#line 1567 "diet.m"
              {
#line 1569 "diet.m"
                {
#line 1569 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up4_11_p_3(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_enum_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
                }
#line 1567 "diet.m"
                if (mercury__diet__succeeded)
#line 1570 "diet.m"
                  {
#line 1570 "diet.m"
                    /* direct tailcall eliminated */
#line 1570 "diet.m"
                    {
#line 1570 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_12 = mercury__diet__R_21;
#line 1570 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_35_35;
#line 1570 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_36_36;
#line 1570 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_37_37;
#line 1570 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_38_38;

#line 1570 "diet.m"
                      mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1570 "diet.m"
                      mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1570 "diet.m"
                      mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1570 "diet.m"
                      mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1570 "diet.m"
                      mercury__diet__T_12 = mercury__diet__T__tmp_copy_12;
#line 1570 "diet.m"
                    }
#line 1570 "diet.m"
                    continue;
#line 1570 "diet.m"
                  }
#line 1567 "diet.m"
              }
#line 1567 "diet.m"
          }
#line 1566 "diet.m"
        return mercury__diet__succeeded;
#line 1566 "diet.m"
      }
#line 1566 "diet.m"
      break;
#line 1566 "diet.m"
    }
#line 274 "diet.m"
}

#line 272 "diet.m"
void MR_CALL 
mercury__diet__foldl4_10_p_2(
#line 272 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 272 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 272 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 272 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 272 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_43,
#line 272 "diet.m"
  MR_Word mercury__diet__P_11,
#line 272 "diet.m"
  MR_Word mercury__diet__T_12,
#line 272 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 272 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 272 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 272 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 272 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 272 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 272 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 272 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29)
#line 272 "diet.m"
{
#line 1566 "diet.m"
  while (MR_TRUE)
#line 1566 "diet.m"
    {
#line 1566 "diet.m"
      /* tailcall optimized into a loop */
#line 1566 "diet.m"
      {
#line 1566 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1566 "diet.m"
        if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1565 "diet.m"
          {
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1565 "diet.m"
          }
#line 1566 "diet.m"
        else
#line 1567 "diet.m"
          {
#line 1567 "diet.m"
            MR_Integer mercury__diet__X_17;
#line 1567 "diet.m"
            MR_Integer mercury__diet__Y_18;
#line 1567 "diet.m"
            MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
#line 1567 "diet.m"
            MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
#line 1567 "diet.m"
            MR_Tuple mercury__diet__V_30_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
#line 1567 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

#line 1567 "diet.m"
            mercury__diet__X_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 0)));
#line 1567 "diet.m"
            mercury__diet__Y_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 1)));
#line 1568 "diet.m"
            {
#line 1568 "diet.m"
              mercury__diet__foldl4_10_p_2(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_enum_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
            }
#line 1569 "diet.m"
            {
#line 1569 "diet.m"
              mercury__diet__fold_up4_11_p_2(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_enum_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
            }
#line 1570 "diet.m"
            /* direct tailcall eliminated */
#line 1570 "diet.m"
            {
#line 1570 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_12 = mercury__diet__R_21;
#line 1570 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_35_35;
#line 1570 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_36_36;
#line 1570 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_37_37;
#line 1570 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_38_38;

#line 1570 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1570 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1570 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1570 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1570 "diet.m"
              mercury__diet__T_12 = mercury__diet__T__tmp_copy_12;
#line 1570 "diet.m"
            }
#line 1570 "diet.m"
            continue;
#line 1567 "diet.m"
          }
#line 1566 "diet.m"
      }
#line 1566 "diet.m"
      break;
#line 1566 "diet.m"
    }
#line 272 "diet.m"
}

#line 270 "diet.m"
void MR_CALL 
mercury__diet__foldl4_10_p_1(
#line 270 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 270 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 270 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 270 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 270 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_43,
#line 270 "diet.m"
  MR_Word mercury__diet__P_11,
#line 270 "diet.m"
  MR_Word mercury__diet__T_12,
#line 270 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 270 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 270 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 270 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 270 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 270 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 270 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 270 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29)
#line 270 "diet.m"
{
#line 1566 "diet.m"
  while (MR_TRUE)
#line 1566 "diet.m"
    {
#line 1566 "diet.m"
      /* tailcall optimized into a loop */
#line 1566 "diet.m"
      {
#line 1566 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1566 "diet.m"
        if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1565 "diet.m"
          {
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1565 "diet.m"
          }
#line 1566 "diet.m"
        else
#line 1567 "diet.m"
          {
#line 1567 "diet.m"
            MR_Integer mercury__diet__X_17;
#line 1567 "diet.m"
            MR_Integer mercury__diet__Y_18;
#line 1567 "diet.m"
            MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
#line 1567 "diet.m"
            MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
#line 1567 "diet.m"
            MR_Tuple mercury__diet__V_30_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
#line 1567 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

#line 1567 "diet.m"
            mercury__diet__X_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 0)));
#line 1567 "diet.m"
            mercury__diet__Y_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 1)));
#line 1568 "diet.m"
            {
#line 1568 "diet.m"
              mercury__diet__foldl4_10_p_1(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_enum_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
            }
#line 1569 "diet.m"
            {
#line 1569 "diet.m"
              mercury__diet__fold_up4_11_p_1(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_enum_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
            }
#line 1570 "diet.m"
            /* direct tailcall eliminated */
#line 1570 "diet.m"
            {
#line 1570 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_12 = mercury__diet__R_21;
#line 1570 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_35_35;
#line 1570 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_36_36;
#line 1570 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_37_37;
#line 1570 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_38_38;

#line 1570 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1570 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1570 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1570 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1570 "diet.m"
              mercury__diet__T_12 = mercury__diet__T__tmp_copy_12;
#line 1570 "diet.m"
            }
#line 1570 "diet.m"
            continue;
#line 1567 "diet.m"
          }
#line 1566 "diet.m"
      }
#line 1566 "diet.m"
      break;
#line 1566 "diet.m"
    }
#line 270 "diet.m"
}

#line 268 "diet.m"
void MR_CALL 
mercury__diet__foldl4_10_p_0(
#line 268 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_44,
#line 268 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_45,
#line 268 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_46,
#line 268 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_D_47,
#line 268 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_43,
#line 268 "diet.m"
  MR_Word mercury__diet__P_11,
#line 268 "diet.m"
  MR_Word mercury__diet__T_12,
#line 268 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_A_0_22,
#line 268 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_A_23,
#line 268 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_B_0_24,
#line 268 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_B_25,
#line 268 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_C_0_26,
#line 268 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_C_27,
#line 268 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_D_0_28,
#line 268 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_D_29)
#line 268 "diet.m"
{
#line 1566 "diet.m"
  while (MR_TRUE)
#line 1566 "diet.m"
    {
#line 1566 "diet.m"
      /* tailcall optimized into a loop */
#line 1566 "diet.m"
      {
#line 1566 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1566 "diet.m"
        if ((mercury__diet__T_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1565 "diet.m"
          {
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_A_23 = mercury__diet__STATE_VARIABLE_A_0_22;
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_B_25 = mercury__diet__STATE_VARIABLE_B_0_24;
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_C_27 = mercury__diet__STATE_VARIABLE_C_0_26;
#line 1565 "diet.m"
            *mercury__diet__STATE_VARIABLE_D_29 = mercury__diet__STATE_VARIABLE_D_0_28;
#line 1565 "diet.m"
          }
#line 1566 "diet.m"
        else
#line 1567 "diet.m"
          {
#line 1567 "diet.m"
            MR_Integer mercury__diet__X_17;
#line 1567 "diet.m"
            MR_Integer mercury__diet__Y_18;
#line 1567 "diet.m"
            MR_Word mercury__diet__L_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 2)));
#line 1567 "diet.m"
            MR_Word mercury__diet__R_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 3)));
#line 1567 "diet.m"
            MR_Tuple mercury__diet__V_30_30 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 0)));
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_31_31;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_32_32;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_33_33;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_34_34;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_A_35_35;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_B_36_36;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_C_37_37;
#line 1567 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_D_38_38;
#line 1567 "diet.m"
            MR_Integer mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_12, (MR_Integer) 1)));

#line 1567 "diet.m"
            mercury__diet__X_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 0)));
#line 1567 "diet.m"
            mercury__diet__Y_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_30_30, (MR_Integer) 1)));
#line 1568 "diet.m"
            {
#line 1568 "diet.m"
              mercury__diet__foldl4_10_p_0(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_enum_43, mercury__diet__P_11, mercury__diet__L_20, mercury__diet__STATE_VARIABLE_A_0_22, &mercury__diet__STATE_VARIABLE_A_31_31, mercury__diet__STATE_VARIABLE_B_0_24, &mercury__diet__STATE_VARIABLE_B_32_32, mercury__diet__STATE_VARIABLE_C_0_26, &mercury__diet__STATE_VARIABLE_C_33_33, mercury__diet__STATE_VARIABLE_D_0_28, &mercury__diet__STATE_VARIABLE_D_34_34);
            }
#line 1569 "diet.m"
            {
#line 1569 "diet.m"
              mercury__diet__fold_up4_11_p_0(mercury__diet__TypeInfo_for_A_44, mercury__diet__TypeInfo_for_B_45, mercury__diet__TypeInfo_for_C_46, mercury__diet__TypeInfo_for_D_47, mercury__diet__TypeClassInfo_for_enum_43, mercury__diet__P_11, mercury__diet__X_17, mercury__diet__Y_18, mercury__diet__STATE_VARIABLE_A_31_31, &mercury__diet__STATE_VARIABLE_A_35_35, mercury__diet__STATE_VARIABLE_B_32_32, &mercury__diet__STATE_VARIABLE_B_36_36, mercury__diet__STATE_VARIABLE_C_33_33, &mercury__diet__STATE_VARIABLE_C_37_37, mercury__diet__STATE_VARIABLE_D_34_34, &mercury__diet__STATE_VARIABLE_D_38_38);
            }
#line 1570 "diet.m"
            /* direct tailcall eliminated */
#line 1570 "diet.m"
            {
#line 1570 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_12 = mercury__diet__R_21;
#line 1570 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22 = mercury__diet__STATE_VARIABLE_A_35_35;
#line 1570 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24 = mercury__diet__STATE_VARIABLE_B_36_36;
#line 1570 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26 = mercury__diet__STATE_VARIABLE_C_37_37;
#line 1570 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28 = mercury__diet__STATE_VARIABLE_D_38_38;

#line 1570 "diet.m"
              mercury__diet__STATE_VARIABLE_D_0_28 = mercury__diet__STATE_VARIABLE_D_0__tmp_copy_28;
#line 1570 "diet.m"
              mercury__diet__STATE_VARIABLE_C_0_26 = mercury__diet__STATE_VARIABLE_C_0__tmp_copy_26;
#line 1570 "diet.m"
              mercury__diet__STATE_VARIABLE_B_0_24 = mercury__diet__STATE_VARIABLE_B_0__tmp_copy_24;
#line 1570 "diet.m"
              mercury__diet__STATE_VARIABLE_A_0_22 = mercury__diet__STATE_VARIABLE_A_0__tmp_copy_22;
#line 1570 "diet.m"
              mercury__diet__T_12 = mercury__diet__T__tmp_copy_12;
#line 1570 "diet.m"
            }
#line 1570 "diet.m"
            continue;
#line 1567 "diet.m"
          }
#line 1566 "diet.m"
      }
#line 1566 "diet.m"
      break;
#line 1566 "diet.m"
    }
#line 268 "diet.m"
}

#line 263 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl3_8_p_5(
#line 263 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_36,
#line 263 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_37,
#line 263 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_38,
#line 263 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_35,
#line 263 "diet.m"
  MR_Word mercury__diet__P_9,
#line 263 "diet.m"
  MR_Word mercury__diet__T_10,
#line 263 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_19,
#line 263 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_20,
#line 263 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_21,
#line 263 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_22,
#line 263 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc3_0_23,
#line 263 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc3_24)
#line 263 "diet.m"
{
#line 1531 "diet.m"
  while (MR_TRUE)
#line 1531 "diet.m"
    {
#line 1531 "diet.m"
      /* tailcall optimized into a loop */
#line 1531 "diet.m"
      {
#line 1531 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1531 "diet.m"
        if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1530 "diet.m"
          {
#line 1530 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
#line 1530 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
#line 1530 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
#line 1530 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1530 "diet.m"
          }
#line 1531 "diet.m"
        else
#line 1532 "diet.m"
          {
#line 1532 "diet.m"
            MR_Integer mercury__diet__X_14;
#line 1532 "diet.m"
            MR_Integer mercury__diet__Y_15;
#line 1532 "diet.m"
            MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
#line 1532 "diet.m"
            MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
#line 1532 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
#line 1532 "diet.m"
            MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

#line 1532 "diet.m"
            mercury__diet__X_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0)));
#line 1532 "diet.m"
            mercury__diet__Y_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1)));
#line 1533 "diet.m"
            {
#line 1533 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl3_8_p_5(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_enum_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
            }
#line 1532 "diet.m"
            if (mercury__diet__succeeded)
#line 1532 "diet.m"
              {
#line 1534 "diet.m"
                {
#line 1534 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up3_9_p_5(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_enum_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
                }
#line 1532 "diet.m"
                if (mercury__diet__succeeded)
#line 1535 "diet.m"
                  {
#line 1535 "diet.m"
                    /* direct tailcall eliminated */
#line 1535 "diet.m"
                    {
#line 1535 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_10 = mercury__diet__R_18;
#line 1535 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1535 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1535 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

#line 1535 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23;
#line 1535 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21;
#line 1535 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19;
#line 1535 "diet.m"
                      mercury__diet__T_10 = mercury__diet__T__tmp_copy_10;
#line 1535 "diet.m"
                    }
#line 1535 "diet.m"
                    continue;
#line 1535 "diet.m"
                  }
#line 1532 "diet.m"
              }
#line 1532 "diet.m"
          }
#line 1531 "diet.m"
        return mercury__diet__succeeded;
#line 1531 "diet.m"
      }
#line 1531 "diet.m"
      break;
#line 1531 "diet.m"
    }
#line 263 "diet.m"
}

#line 261 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl3_8_p_4(
#line 261 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_36,
#line 261 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_37,
#line 261 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_38,
#line 261 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_35,
#line 261 "diet.m"
  MR_Word mercury__diet__P_9,
#line 261 "diet.m"
  MR_Word mercury__diet__T_10,
#line 261 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_19,
#line 261 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_20,
#line 261 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_21,
#line 261 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_22,
#line 261 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc3_0_23,
#line 261 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc3_24)
#line 261 "diet.m"
{
#line 1531 "diet.m"
  while (MR_TRUE)
#line 1531 "diet.m"
    {
#line 1531 "diet.m"
      /* tailcall optimized into a loop */
#line 1531 "diet.m"
      {
#line 1531 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1531 "diet.m"
        if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1530 "diet.m"
          {
#line 1530 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
#line 1530 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
#line 1530 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
#line 1530 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1530 "diet.m"
          }
#line 1531 "diet.m"
        else
#line 1532 "diet.m"
          {
#line 1532 "diet.m"
            MR_Integer mercury__diet__X_14;
#line 1532 "diet.m"
            MR_Integer mercury__diet__Y_15;
#line 1532 "diet.m"
            MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
#line 1532 "diet.m"
            MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
#line 1532 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
#line 1532 "diet.m"
            MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

#line 1532 "diet.m"
            mercury__diet__X_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0)));
#line 1532 "diet.m"
            mercury__diet__Y_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1)));
#line 1533 "diet.m"
            {
#line 1533 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl3_8_p_4(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_enum_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
            }
#line 1532 "diet.m"
            if (mercury__diet__succeeded)
#line 1532 "diet.m"
              {
#line 1534 "diet.m"
                {
#line 1534 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up3_9_p_4(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_enum_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
                }
#line 1532 "diet.m"
                if (mercury__diet__succeeded)
#line 1535 "diet.m"
                  {
#line 1535 "diet.m"
                    /* direct tailcall eliminated */
#line 1535 "diet.m"
                    {
#line 1535 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_10 = mercury__diet__R_18;
#line 1535 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1535 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1535 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

#line 1535 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23;
#line 1535 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21;
#line 1535 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19;
#line 1535 "diet.m"
                      mercury__diet__T_10 = mercury__diet__T__tmp_copy_10;
#line 1535 "diet.m"
                    }
#line 1535 "diet.m"
                    continue;
#line 1535 "diet.m"
                  }
#line 1532 "diet.m"
              }
#line 1532 "diet.m"
          }
#line 1531 "diet.m"
        return mercury__diet__succeeded;
#line 1531 "diet.m"
      }
#line 1531 "diet.m"
      break;
#line 1531 "diet.m"
    }
#line 261 "diet.m"
}

#line 259 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl3_8_p_3(
#line 259 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_36,
#line 259 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_37,
#line 259 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_38,
#line 259 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_35,
#line 259 "diet.m"
  MR_Word mercury__diet__P_9,
#line 259 "diet.m"
  MR_Word mercury__diet__T_10,
#line 259 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_19,
#line 259 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_20,
#line 259 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_21,
#line 259 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_22,
#line 259 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc3_0_23,
#line 259 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc3_24)
#line 259 "diet.m"
{
#line 1531 "diet.m"
  while (MR_TRUE)
#line 1531 "diet.m"
    {
#line 1531 "diet.m"
      /* tailcall optimized into a loop */
#line 1531 "diet.m"
      {
#line 1531 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1531 "diet.m"
        if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1530 "diet.m"
          {
#line 1530 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
#line 1530 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
#line 1530 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
#line 1530 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1530 "diet.m"
          }
#line 1531 "diet.m"
        else
#line 1532 "diet.m"
          {
#line 1532 "diet.m"
            MR_Integer mercury__diet__X_14;
#line 1532 "diet.m"
            MR_Integer mercury__diet__Y_15;
#line 1532 "diet.m"
            MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
#line 1532 "diet.m"
            MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
#line 1532 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
#line 1532 "diet.m"
            MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

#line 1532 "diet.m"
            mercury__diet__X_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0)));
#line 1532 "diet.m"
            mercury__diet__Y_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1)));
#line 1533 "diet.m"
            {
#line 1533 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl3_8_p_3(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_enum_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
            }
#line 1532 "diet.m"
            if (mercury__diet__succeeded)
#line 1532 "diet.m"
              {
#line 1534 "diet.m"
                {
#line 1534 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up3_9_p_3(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_enum_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
                }
#line 1532 "diet.m"
                if (mercury__diet__succeeded)
#line 1535 "diet.m"
                  {
#line 1535 "diet.m"
                    /* direct tailcall eliminated */
#line 1535 "diet.m"
                    {
#line 1535 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_10 = mercury__diet__R_18;
#line 1535 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1535 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1535 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

#line 1535 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23;
#line 1535 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21;
#line 1535 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19;
#line 1535 "diet.m"
                      mercury__diet__T_10 = mercury__diet__T__tmp_copy_10;
#line 1535 "diet.m"
                    }
#line 1535 "diet.m"
                    continue;
#line 1535 "diet.m"
                  }
#line 1532 "diet.m"
              }
#line 1532 "diet.m"
          }
#line 1531 "diet.m"
        return mercury__diet__succeeded;
#line 1531 "diet.m"
      }
#line 1531 "diet.m"
      break;
#line 1531 "diet.m"
    }
#line 259 "diet.m"
}

#line 257 "diet.m"
void MR_CALL 
mercury__diet__foldl3_8_p_2(
#line 257 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_36,
#line 257 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_37,
#line 257 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_38,
#line 257 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_35,
#line 257 "diet.m"
  MR_Word mercury__diet__P_9,
#line 257 "diet.m"
  MR_Word mercury__diet__T_10,
#line 257 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_19,
#line 257 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_20,
#line 257 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_21,
#line 257 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_22,
#line 257 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc3_0_23,
#line 257 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc3_24)
#line 257 "diet.m"
{
#line 1531 "diet.m"
  while (MR_TRUE)
#line 1531 "diet.m"
    {
#line 1531 "diet.m"
      /* tailcall optimized into a loop */
#line 1531 "diet.m"
      {
#line 1531 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1531 "diet.m"
        if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1530 "diet.m"
          {
#line 1530 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
#line 1530 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
#line 1530 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
#line 1530 "diet.m"
          }
#line 1531 "diet.m"
        else
#line 1532 "diet.m"
          {
#line 1532 "diet.m"
            MR_Integer mercury__diet__X_14;
#line 1532 "diet.m"
            MR_Integer mercury__diet__Y_15;
#line 1532 "diet.m"
            MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
#line 1532 "diet.m"
            MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
#line 1532 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
#line 1532 "diet.m"
            MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

#line 1532 "diet.m"
            mercury__diet__X_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0)));
#line 1532 "diet.m"
            mercury__diet__Y_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1)));
#line 1533 "diet.m"
            {
#line 1533 "diet.m"
              mercury__diet__foldl3_8_p_2(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_enum_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
            }
#line 1534 "diet.m"
            {
#line 1534 "diet.m"
              mercury__diet__fold_up3_9_p_2(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_enum_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
            }
#line 1535 "diet.m"
            /* direct tailcall eliminated */
#line 1535 "diet.m"
            {
#line 1535 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_10 = mercury__diet__R_18;
#line 1535 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1535 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1535 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

#line 1535 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23;
#line 1535 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21;
#line 1535 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19;
#line 1535 "diet.m"
              mercury__diet__T_10 = mercury__diet__T__tmp_copy_10;
#line 1535 "diet.m"
            }
#line 1535 "diet.m"
            continue;
#line 1532 "diet.m"
          }
#line 1531 "diet.m"
      }
#line 1531 "diet.m"
      break;
#line 1531 "diet.m"
    }
#line 257 "diet.m"
}

#line 255 "diet.m"
void MR_CALL 
mercury__diet__foldl3_8_p_1(
#line 255 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_36,
#line 255 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_37,
#line 255 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_38,
#line 255 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_35,
#line 255 "diet.m"
  MR_Word mercury__diet__P_9,
#line 255 "diet.m"
  MR_Word mercury__diet__T_10,
#line 255 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_19,
#line 255 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_20,
#line 255 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_21,
#line 255 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_22,
#line 255 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc3_0_23,
#line 255 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc3_24)
#line 255 "diet.m"
{
#line 1531 "diet.m"
  while (MR_TRUE)
#line 1531 "diet.m"
    {
#line 1531 "diet.m"
      /* tailcall optimized into a loop */
#line 1531 "diet.m"
      {
#line 1531 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1531 "diet.m"
        if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1530 "diet.m"
          {
#line 1530 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
#line 1530 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
#line 1530 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
#line 1530 "diet.m"
          }
#line 1531 "diet.m"
        else
#line 1532 "diet.m"
          {
#line 1532 "diet.m"
            MR_Integer mercury__diet__X_14;
#line 1532 "diet.m"
            MR_Integer mercury__diet__Y_15;
#line 1532 "diet.m"
            MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
#line 1532 "diet.m"
            MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
#line 1532 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
#line 1532 "diet.m"
            MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

#line 1532 "diet.m"
            mercury__diet__X_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0)));
#line 1532 "diet.m"
            mercury__diet__Y_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1)));
#line 1533 "diet.m"
            {
#line 1533 "diet.m"
              mercury__diet__foldl3_8_p_1(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_enum_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
            }
#line 1534 "diet.m"
            {
#line 1534 "diet.m"
              mercury__diet__fold_up3_9_p_1(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_enum_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
            }
#line 1535 "diet.m"
            /* direct tailcall eliminated */
#line 1535 "diet.m"
            {
#line 1535 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_10 = mercury__diet__R_18;
#line 1535 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1535 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1535 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

#line 1535 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23;
#line 1535 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21;
#line 1535 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19;
#line 1535 "diet.m"
              mercury__diet__T_10 = mercury__diet__T__tmp_copy_10;
#line 1535 "diet.m"
            }
#line 1535 "diet.m"
            continue;
#line 1532 "diet.m"
          }
#line 1531 "diet.m"
      }
#line 1531 "diet.m"
      break;
#line 1531 "diet.m"
    }
#line 255 "diet.m"
}

#line 253 "diet.m"
void MR_CALL 
mercury__diet__foldl3_8_p_0(
#line 253 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_36,
#line 253 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_37,
#line 253 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_C_38,
#line 253 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_35,
#line 253 "diet.m"
  MR_Word mercury__diet__P_9,
#line 253 "diet.m"
  MR_Word mercury__diet__T_10,
#line 253 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_19,
#line 253 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_20,
#line 253 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_21,
#line 253 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_22,
#line 253 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc3_0_23,
#line 253 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc3_24)
#line 253 "diet.m"
{
#line 1531 "diet.m"
  while (MR_TRUE)
#line 1531 "diet.m"
    {
#line 1531 "diet.m"
      /* tailcall optimized into a loop */
#line 1531 "diet.m"
      {
#line 1531 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1531 "diet.m"
        if ((mercury__diet__T_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1530 "diet.m"
          {
#line 1530 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_20 = mercury__diet__STATE_VARIABLE_Acc1_0_19;
#line 1530 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_22 = mercury__diet__STATE_VARIABLE_Acc2_0_21;
#line 1530 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc3_24 = mercury__diet__STATE_VARIABLE_Acc3_0_23;
#line 1530 "diet.m"
          }
#line 1531 "diet.m"
        else
#line 1532 "diet.m"
          {
#line 1532 "diet.m"
            MR_Integer mercury__diet__X_14;
#line 1532 "diet.m"
            MR_Integer mercury__diet__Y_15;
#line 1532 "diet.m"
            MR_Word mercury__diet__L_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 2)));
#line 1532 "diet.m"
            MR_Word mercury__diet__R_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 3)));
#line 1532 "diet.m"
            MR_Tuple mercury__diet__V_25_25 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 0)));
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_26_26;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_27_27;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_28_28;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1532 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc3_31_31;
#line 1532 "diet.m"
            MR_Integer mercury__diet__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_10, (MR_Integer) 1)));

#line 1532 "diet.m"
            mercury__diet__X_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 0)));
#line 1532 "diet.m"
            mercury__diet__Y_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_25_25, (MR_Integer) 1)));
#line 1533 "diet.m"
            {
#line 1533 "diet.m"
              mercury__diet__foldl3_8_p_0(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_enum_35, mercury__diet__P_9, mercury__diet__L_17, mercury__diet__STATE_VARIABLE_Acc1_0_19, &mercury__diet__STATE_VARIABLE_Acc1_26_26, mercury__diet__STATE_VARIABLE_Acc2_0_21, &mercury__diet__STATE_VARIABLE_Acc2_27_27, mercury__diet__STATE_VARIABLE_Acc3_0_23, &mercury__diet__STATE_VARIABLE_Acc3_28_28);
            }
#line 1534 "diet.m"
            {
#line 1534 "diet.m"
              mercury__diet__fold_up3_9_p_0(mercury__diet__TypeInfo_for_A_36, mercury__diet__TypeInfo_for_B_37, mercury__diet__TypeInfo_for_C_38, mercury__diet__TypeClassInfo_for_enum_35, mercury__diet__P_9, mercury__diet__X_14, mercury__diet__Y_15, mercury__diet__STATE_VARIABLE_Acc1_26_26, &mercury__diet__STATE_VARIABLE_Acc1_29_29, mercury__diet__STATE_VARIABLE_Acc2_27_27, &mercury__diet__STATE_VARIABLE_Acc2_30_30, mercury__diet__STATE_VARIABLE_Acc3_28_28, &mercury__diet__STATE_VARIABLE_Acc3_31_31);
            }
#line 1535 "diet.m"
            /* direct tailcall eliminated */
#line 1535 "diet.m"
            {
#line 1535 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_10 = mercury__diet__R_18;
#line 1535 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19 = mercury__diet__STATE_VARIABLE_Acc1_29_29;
#line 1535 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21 = mercury__diet__STATE_VARIABLE_Acc2_30_30;
#line 1535 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23 = mercury__diet__STATE_VARIABLE_Acc3_31_31;

#line 1535 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc3_0_23 = mercury__diet__STATE_VARIABLE_Acc3_0__tmp_copy_23;
#line 1535 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_21 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_21;
#line 1535 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_19 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_19;
#line 1535 "diet.m"
              mercury__diet__T_10 = mercury__diet__T__tmp_copy_10;
#line 1535 "diet.m"
            }
#line 1535 "diet.m"
            continue;
#line 1532 "diet.m"
          }
#line 1531 "diet.m"
      }
#line 1531 "diet.m"
      break;
#line 1531 "diet.m"
    }
#line 253 "diet.m"
}

#line 248 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl2_6_p_5(
#line 248 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_28,
#line 248 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_29,
#line 248 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_27,
#line 248 "diet.m"
  MR_Word mercury__diet__P_7,
#line 248 "diet.m"
  MR_Word mercury__diet__T_8,
#line 248 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_16,
#line 248 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_17,
#line 248 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_18,
#line 248 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_19)
#line 248 "diet.m"
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
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1495 "diet.m"
          {
#line 1495 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1495 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1495 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1495 "diet.m"
          }
#line 1496 "diet.m"
        else
#line 1497 "diet.m"
          {
#line 1497 "diet.m"
            MR_Integer mercury__diet__X_11;
#line 1497 "diet.m"
            MR_Integer mercury__diet__Y_12;
#line 1497 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1497 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1497 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1497 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1497 "diet.m"
            mercury__diet__X_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0)));
#line 1497 "diet.m"
            mercury__diet__Y_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1)));
#line 1498 "diet.m"
            {
#line 1498 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl2_6_p_5(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_enum_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1497 "diet.m"
            if (mercury__diet__succeeded)
#line 1497 "diet.m"
              {
#line 1499 "diet.m"
                {
#line 1499 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up2_7_p_5(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_enum_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
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
                      MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1500 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1500 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1500 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1500 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1500 "diet.m"
                      mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
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
#line 248 "diet.m"
}

#line 246 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl2_6_p_4(
#line 246 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_28,
#line 246 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_29,
#line 246 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_27,
#line 246 "diet.m"
  MR_Word mercury__diet__P_7,
#line 246 "diet.m"
  MR_Word mercury__diet__T_8,
#line 246 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_16,
#line 246 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_17,
#line 246 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_18,
#line 246 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_19)
#line 246 "diet.m"
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
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1495 "diet.m"
          {
#line 1495 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1495 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1495 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1495 "diet.m"
          }
#line 1496 "diet.m"
        else
#line 1497 "diet.m"
          {
#line 1497 "diet.m"
            MR_Integer mercury__diet__X_11;
#line 1497 "diet.m"
            MR_Integer mercury__diet__Y_12;
#line 1497 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1497 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1497 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1497 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1497 "diet.m"
            mercury__diet__X_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0)));
#line 1497 "diet.m"
            mercury__diet__Y_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1)));
#line 1498 "diet.m"
            {
#line 1498 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl2_6_p_4(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_enum_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1497 "diet.m"
            if (mercury__diet__succeeded)
#line 1497 "diet.m"
              {
#line 1499 "diet.m"
                {
#line 1499 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up2_7_p_4(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_enum_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
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
                      MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1500 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1500 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1500 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1500 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1500 "diet.m"
                      mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
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
#line 246 "diet.m"
}

#line 244 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl2_6_p_3(
#line 244 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_28,
#line 244 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_29,
#line 244 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_27,
#line 244 "diet.m"
  MR_Word mercury__diet__P_7,
#line 244 "diet.m"
  MR_Word mercury__diet__T_8,
#line 244 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_16,
#line 244 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_17,
#line 244 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_18,
#line 244 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_19)
#line 244 "diet.m"
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
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1495 "diet.m"
          {
#line 1495 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1495 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1495 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1495 "diet.m"
          }
#line 1496 "diet.m"
        else
#line 1497 "diet.m"
          {
#line 1497 "diet.m"
            MR_Integer mercury__diet__X_11;
#line 1497 "diet.m"
            MR_Integer mercury__diet__Y_12;
#line 1497 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1497 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1497 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1497 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1497 "diet.m"
            mercury__diet__X_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0)));
#line 1497 "diet.m"
            mercury__diet__Y_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1)));
#line 1498 "diet.m"
            {
#line 1498 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl2_6_p_3(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_enum_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1497 "diet.m"
            if (mercury__diet__succeeded)
#line 1497 "diet.m"
              {
#line 1499 "diet.m"
                {
#line 1499 "diet.m"
                  mercury__diet__succeeded = mercury__diet__fold_up2_7_p_3(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_enum_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
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
                      MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1500 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1500 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1500 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1500 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1500 "diet.m"
                      mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
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
#line 244 "diet.m"
}

#line 242 "diet.m"
void MR_CALL 
mercury__diet__foldl2_6_p_2(
#line 242 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_28,
#line 242 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_29,
#line 242 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_27,
#line 242 "diet.m"
  MR_Word mercury__diet__P_7,
#line 242 "diet.m"
  MR_Word mercury__diet__T_8,
#line 242 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_16,
#line 242 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_17,
#line 242 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_18,
#line 242 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_19)
#line 242 "diet.m"
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
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1495 "diet.m"
          {
#line 1495 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1495 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1495 "diet.m"
          }
#line 1496 "diet.m"
        else
#line 1497 "diet.m"
          {
#line 1497 "diet.m"
            MR_Integer mercury__diet__X_11;
#line 1497 "diet.m"
            MR_Integer mercury__diet__Y_12;
#line 1497 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1497 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1497 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1497 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1497 "diet.m"
            mercury__diet__X_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0)));
#line 1497 "diet.m"
            mercury__diet__Y_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1)));
#line 1498 "diet.m"
            {
#line 1498 "diet.m"
              mercury__diet__foldl2_6_p_2(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_enum_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1499 "diet.m"
            {
#line 1499 "diet.m"
              mercury__diet__fold_up2_7_p_2(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_enum_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
            }
#line 1500 "diet.m"
            /* direct tailcall eliminated */
#line 1500 "diet.m"
            {
#line 1500 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1500 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1500 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1500 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1500 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1500 "diet.m"
              mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
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
#line 242 "diet.m"
}

#line 240 "diet.m"
void MR_CALL 
mercury__diet__foldl2_6_p_1(
#line 240 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_28,
#line 240 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_29,
#line 240 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_27,
#line 240 "diet.m"
  MR_Word mercury__diet__P_7,
#line 240 "diet.m"
  MR_Word mercury__diet__T_8,
#line 240 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_16,
#line 240 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_17,
#line 240 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_18,
#line 240 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_19)
#line 240 "diet.m"
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
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1495 "diet.m"
          {
#line 1495 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1495 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1495 "diet.m"
          }
#line 1496 "diet.m"
        else
#line 1497 "diet.m"
          {
#line 1497 "diet.m"
            MR_Integer mercury__diet__X_11;
#line 1497 "diet.m"
            MR_Integer mercury__diet__Y_12;
#line 1497 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1497 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1497 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1497 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1497 "diet.m"
            mercury__diet__X_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0)));
#line 1497 "diet.m"
            mercury__diet__Y_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1)));
#line 1498 "diet.m"
            {
#line 1498 "diet.m"
              mercury__diet__foldl2_6_p_1(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_enum_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1499 "diet.m"
            {
#line 1499 "diet.m"
              mercury__diet__fold_up2_7_p_1(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_enum_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
            }
#line 1500 "diet.m"
            /* direct tailcall eliminated */
#line 1500 "diet.m"
            {
#line 1500 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1500 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1500 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1500 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1500 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1500 "diet.m"
              mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
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
#line 240 "diet.m"
}

#line 238 "diet.m"
void MR_CALL 
mercury__diet__foldl2_6_p_0(
#line 238 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_28,
#line 238 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_B_29,
#line 238 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_27,
#line 238 "diet.m"
  MR_Word mercury__diet__P_7,
#line 238 "diet.m"
  MR_Word mercury__diet__T_8,
#line 238 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc1_0_16,
#line 238 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc1_17,
#line 238 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc2_0_18,
#line 238 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc2_19)
#line 238 "diet.m"
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
        if ((mercury__diet__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1495 "diet.m"
          {
#line 1495 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc1_17 = mercury__diet__STATE_VARIABLE_Acc1_0_16;
#line 1495 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc2_19 = mercury__diet__STATE_VARIABLE_Acc2_0_18;
#line 1495 "diet.m"
          }
#line 1496 "diet.m"
        else
#line 1497 "diet.m"
          {
#line 1497 "diet.m"
            MR_Integer mercury__diet__X_11;
#line 1497 "diet.m"
            MR_Integer mercury__diet__Y_12;
#line 1497 "diet.m"
            MR_Word mercury__diet__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 2)));
#line 1497 "diet.m"
            MR_Word mercury__diet__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 3)));
#line 1497 "diet.m"
            MR_Tuple mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 0)));
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_21_21;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_22_22;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1497 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc2_24_24;
#line 1497 "diet.m"
            MR_Integer mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_8, (MR_Integer) 1)));

#line 1497 "diet.m"
            mercury__diet__X_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 0)));
#line 1497 "diet.m"
            mercury__diet__Y_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_20_20, (MR_Integer) 1)));
#line 1498 "diet.m"
            {
#line 1498 "diet.m"
              mercury__diet__foldl2_6_p_0(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_enum_27, mercury__diet__P_7, mercury__diet__L_14, mercury__diet__STATE_VARIABLE_Acc1_0_16, &mercury__diet__STATE_VARIABLE_Acc1_21_21, mercury__diet__STATE_VARIABLE_Acc2_0_18, &mercury__diet__STATE_VARIABLE_Acc2_22_22);
            }
#line 1499 "diet.m"
            {
#line 1499 "diet.m"
              mercury__diet__fold_up2_7_p_0(mercury__diet__TypeInfo_for_A_28, mercury__diet__TypeInfo_for_B_29, mercury__diet__TypeClassInfo_for_enum_27, mercury__diet__P_7, mercury__diet__X_11, mercury__diet__Y_12, mercury__diet__STATE_VARIABLE_Acc1_21_21, &mercury__diet__STATE_VARIABLE_Acc1_23_23, mercury__diet__STATE_VARIABLE_Acc2_22_22, &mercury__diet__STATE_VARIABLE_Acc2_24_24);
            }
#line 1500 "diet.m"
            /* direct tailcall eliminated */
#line 1500 "diet.m"
            {
#line 1500 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_8 = mercury__diet__R_15;
#line 1500 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16 = mercury__diet__STATE_VARIABLE_Acc1_23_23;
#line 1500 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18 = mercury__diet__STATE_VARIABLE_Acc2_24_24;

#line 1500 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc2_0_18 = mercury__diet__STATE_VARIABLE_Acc2_0__tmp_copy_18;
#line 1500 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc1_0_16 = mercury__diet__STATE_VARIABLE_Acc1_0__tmp_copy_16;
#line 1500 "diet.m"
              mercury__diet__T_8 = mercury__diet__T__tmp_copy_8;
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
#line 238 "diet.m"
}

#line 235 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl_4_p_5(
#line 235 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 235 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
#line 235 "diet.m"
  MR_Word mercury__diet__P_5,
#line 235 "diet.m"
  MR_Word mercury__diet__T_6,
#line 235 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 235 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 235 "diet.m"
{
#line 1468 "diet.m"
  while (MR_TRUE)
#line 1468 "diet.m"
    {
#line 1468 "diet.m"
      /* tailcall optimized into a loop */
#line 1468 "diet.m"
      {
#line 1468 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1468 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1467 "diet.m"
          {
#line 1467 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1467 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1467 "diet.m"
          }
#line 1468 "diet.m"
        else
#line 1469 "diet.m"
          {
#line 1469 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1469 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1469 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1469 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1469 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1469 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1469 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1469 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1469 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1469 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1470 "diet.m"
            {
#line 1470 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl_4_p_5(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1469 "diet.m"
            if (mercury__diet__succeeded)
#line 1469 "diet.m"
              {
#line 1471 "diet.m"
                {
#line 1471 "diet.m"
                  mercury__diet__succeeded = mercury__diet__foldl_2_5_p_5(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1469 "diet.m"
                if (mercury__diet__succeeded)
#line 1472 "diet.m"
                  {
#line 1472 "diet.m"
                    /* direct tailcall eliminated */
#line 1472 "diet.m"
                    {
#line 1472 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1472 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1472 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1472 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1472 "diet.m"
                    }
#line 1472 "diet.m"
                    continue;
#line 1472 "diet.m"
                  }
#line 1469 "diet.m"
              }
#line 1469 "diet.m"
          }
#line 1468 "diet.m"
        return mercury__diet__succeeded;
#line 1468 "diet.m"
      }
#line 1468 "diet.m"
      break;
#line 1468 "diet.m"
    }
#line 235 "diet.m"
}

#line 234 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl_4_p_4(
#line 234 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 234 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
#line 234 "diet.m"
  MR_Word mercury__diet__P_5,
#line 234 "diet.m"
  MR_Word mercury__diet__T_6,
#line 234 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 234 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 234 "diet.m"
{
#line 1468 "diet.m"
  while (MR_TRUE)
#line 1468 "diet.m"
    {
#line 1468 "diet.m"
      /* tailcall optimized into a loop */
#line 1468 "diet.m"
      {
#line 1468 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1468 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1467 "diet.m"
          {
#line 1467 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1467 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1467 "diet.m"
          }
#line 1468 "diet.m"
        else
#line 1469 "diet.m"
          {
#line 1469 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1469 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1469 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1469 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1469 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1469 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1469 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1469 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1469 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1469 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1470 "diet.m"
            {
#line 1470 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl_4_p_4(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1469 "diet.m"
            if (mercury__diet__succeeded)
#line 1469 "diet.m"
              {
#line 1471 "diet.m"
                {
#line 1471 "diet.m"
                  mercury__diet__succeeded = mercury__diet__foldl_2_5_p_4(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1469 "diet.m"
                if (mercury__diet__succeeded)
#line 1472 "diet.m"
                  {
#line 1472 "diet.m"
                    /* direct tailcall eliminated */
#line 1472 "diet.m"
                    {
#line 1472 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1472 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1472 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1472 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1472 "diet.m"
                    }
#line 1472 "diet.m"
                    continue;
#line 1472 "diet.m"
                  }
#line 1469 "diet.m"
              }
#line 1469 "diet.m"
          }
#line 1468 "diet.m"
        return mercury__diet__succeeded;
#line 1468 "diet.m"
      }
#line 1468 "diet.m"
      break;
#line 1468 "diet.m"
    }
#line 234 "diet.m"
}

#line 233 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl_4_p_3(
#line 233 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 233 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
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
#line 1468 "diet.m"
  while (MR_TRUE)
#line 1468 "diet.m"
    {
#line 1468 "diet.m"
      /* tailcall optimized into a loop */
#line 1468 "diet.m"
      {
#line 1468 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1468 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1467 "diet.m"
          {
#line 1467 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1467 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1467 "diet.m"
          }
#line 1468 "diet.m"
        else
#line 1469 "diet.m"
          {
#line 1469 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1469 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1469 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1469 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1469 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1469 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1469 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1469 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1469 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1469 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1470 "diet.m"
            {
#line 1470 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl_4_p_3(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1469 "diet.m"
            if (mercury__diet__succeeded)
#line 1469 "diet.m"
              {
#line 1471 "diet.m"
                {
#line 1471 "diet.m"
                  mercury__diet__succeeded = mercury__diet__foldl_2_5_p_3(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
                }
#line 1469 "diet.m"
                if (mercury__diet__succeeded)
#line 1472 "diet.m"
                  {
#line 1472 "diet.m"
                    /* direct tailcall eliminated */
#line 1472 "diet.m"
                    {
#line 1472 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1472 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1472 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1472 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1472 "diet.m"
                    }
#line 1472 "diet.m"
                    continue;
#line 1472 "diet.m"
                  }
#line 1469 "diet.m"
              }
#line 1469 "diet.m"
          }
#line 1468 "diet.m"
        return mercury__diet__succeeded;
#line 1468 "diet.m"
      }
#line 1468 "diet.m"
      break;
#line 1468 "diet.m"
    }
#line 233 "diet.m"
}

#line 232 "diet.m"
void MR_CALL 
mercury__diet__foldl_4_p_2(
#line 232 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 232 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
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
#line 1468 "diet.m"
  while (MR_TRUE)
#line 1468 "diet.m"
    {
#line 1468 "diet.m"
      /* tailcall optimized into a loop */
#line 1468 "diet.m"
      {
#line 1468 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1468 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1467 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1468 "diet.m"
        else
#line 1469 "diet.m"
          {
#line 1469 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1469 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1469 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1469 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1469 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1469 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1469 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1469 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1469 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1469 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1470 "diet.m"
            {
#line 1470 "diet.m"
              mercury__diet__foldl_4_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1471 "diet.m"
            {
#line 1471 "diet.m"
              mercury__diet__foldl_2_5_p_2(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1472 "diet.m"
            /* direct tailcall eliminated */
#line 1472 "diet.m"
            {
#line 1472 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1472 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1472 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1472 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1472 "diet.m"
            }
#line 1472 "diet.m"
            continue;
#line 1469 "diet.m"
          }
#line 1468 "diet.m"
      }
#line 1468 "diet.m"
      break;
#line 1468 "diet.m"
    }
#line 232 "diet.m"
}

#line 231 "diet.m"
void MR_CALL 
mercury__diet__foldl_4_p_1(
#line 231 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 231 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
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
#line 1468 "diet.m"
  while (MR_TRUE)
#line 1468 "diet.m"
    {
#line 1468 "diet.m"
      /* tailcall optimized into a loop */
#line 1468 "diet.m"
      {
#line 1468 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1468 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1467 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1468 "diet.m"
        else
#line 1469 "diet.m"
          {
#line 1469 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1469 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1469 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1469 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1469 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1469 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1469 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1469 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1469 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1469 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1470 "diet.m"
            {
#line 1470 "diet.m"
              mercury__diet__foldl_4_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1471 "diet.m"
            {
#line 1471 "diet.m"
              mercury__diet__foldl_2_5_p_1(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1472 "diet.m"
            /* direct tailcall eliminated */
#line 1472 "diet.m"
            {
#line 1472 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1472 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1472 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1472 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1472 "diet.m"
            }
#line 1472 "diet.m"
            continue;
#line 1469 "diet.m"
          }
#line 1468 "diet.m"
      }
#line 1468 "diet.m"
      break;
#line 1468 "diet.m"
    }
#line 231 "diet.m"
}

#line 230 "diet.m"
void MR_CALL 
mercury__diet__foldl_4_p_0(
#line 230 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 230 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
#line 230 "diet.m"
  MR_Word mercury__diet__P_5,
#line 230 "diet.m"
  MR_Word mercury__diet__T_6,
#line 230 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 230 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 230 "diet.m"
{
#line 1468 "diet.m"
  while (MR_TRUE)
#line 1468 "diet.m"
    {
#line 1468 "diet.m"
      /* tailcall optimized into a loop */
#line 1468 "diet.m"
      {
#line 1468 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1468 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1467 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1468 "diet.m"
        else
#line 1469 "diet.m"
          {
#line 1469 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1469 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1469 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1469 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1469 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1469 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1469 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_17_17;
#line 1469 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));

#line 1469 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1469 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1470 "diet.m"
            {
#line 1470 "diet.m"
              mercury__diet__foldl_4_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1471 "diet.m"
            {
#line 1471 "diet.m"
              mercury__diet__foldl_2_5_p_0(mercury__diet__TypeInfo_for_A_20, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__P_5, mercury__diet__X_8, mercury__diet__Y_9, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_17_17);
            }
#line 1472 "diet.m"
            /* direct tailcall eliminated */
#line 1472 "diet.m"
            {
#line 1472 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1472 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_17_17;

#line 1472 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1472 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1472 "diet.m"
            }
#line 1472 "diet.m"
            continue;
#line 1469 "diet.m"
          }
#line 1468 "diet.m"
      }
#line 1468 "diet.m"
      break;
#line 1468 "diet.m"
    }
#line 230 "diet.m"
}

#line 227 "diet.m"
MR_Box MR_CALL 
mercury__diet__foldl_3_f_0(
#line 227 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_20,
#line 227 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
#line 227 "diet.m"
  MR_Word mercury__diet__F_5,
#line 227 "diet.m"
  MR_Word mercury__diet__Set_6,
#line 227 "diet.m"
  MR_Box mercury__diet__Acc0_7)
#line 227 "diet.m"
{
#line 1461 "diet.m"
  {
#line 1461 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1461 "diet.m"
    MR_Box mercury__diet__Acc_8;

#line 1461 "diet.m"
    {
#line 1461 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_54_95_95_91_49_44_32_50_44_32_52_44_32_54_93_95_48_4_p_0(mercury__diet__F_5, mercury__diet__TypeClassInfo_for_enum_19, mercury__diet__Set_6, mercury__diet__Acc0_7, &mercury__diet__Acc_8);
    }
#line 1461 "diet.m"
    return mercury__diet__Acc_8;
#line 1461 "diet.m"
  }
#line 227 "diet.m"
}

#line 220 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldr_intervals_4_p_2(
#line 220 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_22,
#line 220 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_21,
#line 220 "diet.m"
  MR_Word mercury__diet__P_5,
#line 220 "diet.m"
  MR_Word mercury__diet__T_6,
#line 220 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 220 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 220 "diet.m"
{
#line 1448 "diet.m"
  while (MR_TRUE)
#line 1448 "diet.m"
    {
#line 1448 "diet.m"
      /* tailcall optimized into a loop */
#line 1448 "diet.m"
      {
#line 1448 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1448 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1447 "diet.m"
          {
#line 1447 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1447 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1447 "diet.m"
          }
#line 1448 "diet.m"
        else
#line 1449 "diet.m"
          {
#line 1449 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1449 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1449 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1449 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1449 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1449 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1449 "diet.m"
            MR_Box mercury__diet__V_17_17;
#line 1449 "diet.m"
            MR_Box mercury__diet__V_18_18;
#line 1449 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_19_19;
#line 1449 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
#line 1451 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1449 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1449 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1450 "diet.m"
            {
#line 1450 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldr_intervals_4_p_2(mercury__diet__TypeInfo_for_A_22, mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1449 "diet.m"
            if (mercury__diet__succeeded)
#line 1449 "diet.m"
              {
#line 1451 "diet.m"
                {
#line 1451 "diet.m"
                  mercury__diet__V_17_17 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__X_8);
                }
#line 1451 "diet.m"
                {
#line 1451 "diet.m"
                  mercury__diet__V_18_18 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__Y_9);
                }
#line 1451 "diet.m"
                mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
#line 1451 "diet.m"
                {
#line 1451 "diet.m"
                  mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__V_17_17, mercury__diet__V_18_18, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_19_19);
                }
#line 1449 "diet.m"
                if (mercury__diet__succeeded)
#line 1452 "diet.m"
                  {
#line 1452 "diet.m"
                    /* direct tailcall eliminated */
#line 1452 "diet.m"
                    {
#line 1452 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1452 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_19_19;

#line 1452 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1452 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1452 "diet.m"
                    }
#line 1452 "diet.m"
                    continue;
#line 1452 "diet.m"
                  }
#line 1449 "diet.m"
              }
#line 1449 "diet.m"
          }
#line 1448 "diet.m"
        return mercury__diet__succeeded;
#line 1448 "diet.m"
      }
#line 1448 "diet.m"
      break;
#line 1448 "diet.m"
    }
#line 220 "diet.m"
}

#line 219 "diet.m"
void MR_CALL 
mercury__diet__foldr_intervals_4_p_1(
#line 219 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_22,
#line 219 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_21,
#line 219 "diet.m"
  MR_Word mercury__diet__P_5,
#line 219 "diet.m"
  MR_Word mercury__diet__T_6,
#line 219 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 219 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 219 "diet.m"
{
#line 1448 "diet.m"
  while (MR_TRUE)
#line 1448 "diet.m"
    {
#line 1448 "diet.m"
      /* tailcall optimized into a loop */
#line 1448 "diet.m"
      {
#line 1448 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1448 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1447 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1448 "diet.m"
        else
#line 1449 "diet.m"
          {
#line 1449 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1449 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1449 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1449 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1449 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1449 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1449 "diet.m"
            MR_Box mercury__diet__V_17_17;
#line 1449 "diet.m"
            MR_Box mercury__diet__V_18_18;
#line 1449 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_19_19;
#line 1449 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
#line 1451 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1449 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1449 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1450 "diet.m"
            {
#line 1450 "diet.m"
              mercury__diet__foldr_intervals_4_p_1(mercury__diet__TypeInfo_for_A_22, mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1451 "diet.m"
            {
#line 1451 "diet.m"
              mercury__diet__V_17_17 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__X_8);
            }
#line 1451 "diet.m"
            {
#line 1451 "diet.m"
              mercury__diet__V_18_18 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__Y_9);
            }
#line 1451 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
#line 1451 "diet.m"
            {
#line 1451 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__V_17_17, mercury__diet__V_18_18, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_19_19);
            }
#line 1452 "diet.m"
            /* direct tailcall eliminated */
#line 1452 "diet.m"
            {
#line 1452 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1452 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_19_19;

#line 1452 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1452 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1452 "diet.m"
            }
#line 1452 "diet.m"
            continue;
#line 1449 "diet.m"
          }
#line 1448 "diet.m"
      }
#line 1448 "diet.m"
      break;
#line 1448 "diet.m"
    }
#line 219 "diet.m"
}

#line 218 "diet.m"
void MR_CALL 
mercury__diet__foldr_intervals_4_p_0(
#line 218 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_22,
#line 218 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_21,
#line 218 "diet.m"
  MR_Word mercury__diet__P_5,
#line 218 "diet.m"
  MR_Word mercury__diet__T_6,
#line 218 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 218 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 218 "diet.m"
{
#line 1448 "diet.m"
  while (MR_TRUE)
#line 1448 "diet.m"
    {
#line 1448 "diet.m"
      /* tailcall optimized into a loop */
#line 1448 "diet.m"
      {
#line 1448 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1448 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1447 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1448 "diet.m"
        else
#line 1449 "diet.m"
          {
#line 1449 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1449 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1449 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1449 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1449 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1449 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1449 "diet.m"
            MR_Box mercury__diet__V_17_17;
#line 1449 "diet.m"
            MR_Box mercury__diet__V_18_18;
#line 1449 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_19_19;
#line 1449 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
#line 1451 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1449 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1449 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1450 "diet.m"
            {
#line 1450 "diet.m"
              mercury__diet__foldr_intervals_4_p_0(mercury__diet__TypeInfo_for_A_22, mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__P_5, mercury__diet__R_12, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1451 "diet.m"
            {
#line 1451 "diet.m"
              mercury__diet__V_17_17 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__X_8);
            }
#line 1451 "diet.m"
            {
#line 1451 "diet.m"
              mercury__diet__V_18_18 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__Y_9);
            }
#line 1451 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
#line 1451 "diet.m"
            {
#line 1451 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__V_17_17, mercury__diet__V_18_18, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_19_19);
            }
#line 1452 "diet.m"
            /* direct tailcall eliminated */
#line 1452 "diet.m"
            {
#line 1452 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__L_11;
#line 1452 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_19_19;

#line 1452 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1452 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1452 "diet.m"
            }
#line 1452 "diet.m"
            continue;
#line 1449 "diet.m"
          }
#line 1448 "diet.m"
      }
#line 1448 "diet.m"
      break;
#line 1448 "diet.m"
    }
#line 218 "diet.m"
}

#line 210 "diet.m"
MR_bool MR_CALL 
mercury__diet__foldl_intervals_4_p_2(
#line 210 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_22,
#line 210 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_21,
#line 210 "diet.m"
  MR_Word mercury__diet__P_5,
#line 210 "diet.m"
  MR_Word mercury__diet__T_6,
#line 210 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 210 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 210 "diet.m"
{
#line 1436 "diet.m"
  while (MR_TRUE)
#line 1436 "diet.m"
    {
#line 1436 "diet.m"
      /* tailcall optimized into a loop */
#line 1436 "diet.m"
      {
#line 1436 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1436 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1435 "diet.m"
          {
#line 1435 "diet.m"
            *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1435 "diet.m"
            mercury__diet__succeeded = MR_TRUE;
#line 1435 "diet.m"
          }
#line 1436 "diet.m"
        else
#line 1437 "diet.m"
          {
#line 1437 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1437 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1437 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1437 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1437 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1437 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1437 "diet.m"
            MR_Box mercury__diet__V_17_17;
#line 1437 "diet.m"
            MR_Box mercury__diet__V_18_18;
#line 1437 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_19_19;
#line 1437 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
#line 1439 "diet.m"
            MR_bool MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1437 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1437 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1438 "diet.m"
            {
#line 1438 "diet.m"
              mercury__diet__succeeded = mercury__diet__foldl_intervals_4_p_2(mercury__diet__TypeInfo_for_A_22, mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1437 "diet.m"
            if (mercury__diet__succeeded)
#line 1437 "diet.m"
              {
#line 1439 "diet.m"
                {
#line 1439 "diet.m"
                  mercury__diet__V_17_17 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__X_8);
                }
#line 1439 "diet.m"
                {
#line 1439 "diet.m"
                  mercury__diet__V_18_18 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__Y_9);
                }
#line 1439 "diet.m"
                mercury__diet__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
#line 1439 "diet.m"
                {
#line 1439 "diet.m"
                  mercury__diet__succeeded = mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__V_17_17, mercury__diet__V_18_18, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_19_19);
                }
#line 1437 "diet.m"
                if (mercury__diet__succeeded)
#line 1440 "diet.m"
                  {
#line 1440 "diet.m"
                    /* direct tailcall eliminated */
#line 1440 "diet.m"
                    {
#line 1440 "diet.m"
                      MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1440 "diet.m"
                      MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_19_19;

#line 1440 "diet.m"
                      mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1440 "diet.m"
                      mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1440 "diet.m"
                    }
#line 1440 "diet.m"
                    continue;
#line 1440 "diet.m"
                  }
#line 1437 "diet.m"
              }
#line 1437 "diet.m"
          }
#line 1436 "diet.m"
        return mercury__diet__succeeded;
#line 1436 "diet.m"
      }
#line 1436 "diet.m"
      break;
#line 1436 "diet.m"
    }
#line 210 "diet.m"
}

#line 209 "diet.m"
void MR_CALL 
mercury__diet__foldl_intervals_4_p_1(
#line 209 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_22,
#line 209 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_21,
#line 209 "diet.m"
  MR_Word mercury__diet__P_5,
#line 209 "diet.m"
  MR_Word mercury__diet__T_6,
#line 209 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 209 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 209 "diet.m"
{
#line 1436 "diet.m"
  while (MR_TRUE)
#line 1436 "diet.m"
    {
#line 1436 "diet.m"
      /* tailcall optimized into a loop */
#line 1436 "diet.m"
      {
#line 1436 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1436 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1435 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1436 "diet.m"
        else
#line 1437 "diet.m"
          {
#line 1437 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1437 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1437 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1437 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1437 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1437 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1437 "diet.m"
            MR_Box mercury__diet__V_17_17;
#line 1437 "diet.m"
            MR_Box mercury__diet__V_18_18;
#line 1437 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_19_19;
#line 1437 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
#line 1439 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1437 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1437 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1438 "diet.m"
            {
#line 1438 "diet.m"
              mercury__diet__foldl_intervals_4_p_1(mercury__diet__TypeInfo_for_A_22, mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1439 "diet.m"
            {
#line 1439 "diet.m"
              mercury__diet__V_17_17 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__X_8);
            }
#line 1439 "diet.m"
            {
#line 1439 "diet.m"
              mercury__diet__V_18_18 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__Y_9);
            }
#line 1439 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
#line 1439 "diet.m"
            {
#line 1439 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__V_17_17, mercury__diet__V_18_18, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_19_19);
            }
#line 1440 "diet.m"
            /* direct tailcall eliminated */
#line 1440 "diet.m"
            {
#line 1440 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1440 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_19_19;

#line 1440 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1440 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1440 "diet.m"
            }
#line 1440 "diet.m"
            continue;
#line 1437 "diet.m"
          }
#line 1436 "diet.m"
      }
#line 1436 "diet.m"
      break;
#line 1436 "diet.m"
    }
#line 209 "diet.m"
}

#line 208 "diet.m"
void MR_CALL 
mercury__diet__foldl_intervals_4_p_0(
#line 208 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_A_22,
#line 208 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_21,
#line 208 "diet.m"
  MR_Word mercury__diet__P_5,
#line 208 "diet.m"
  MR_Word mercury__diet__T_6,
#line 208 "diet.m"
  MR_Box mercury__diet__STATE_VARIABLE_Acc_0_13,
#line 208 "diet.m"
  MR_Box * mercury__diet__STATE_VARIABLE_Acc_14)
#line 208 "diet.m"
{
#line 1436 "diet.m"
  while (MR_TRUE)
#line 1436 "diet.m"
    {
#line 1436 "diet.m"
      /* tailcall optimized into a loop */
#line 1436 "diet.m"
      {
#line 1436 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 1436 "diet.m"
        if ((mercury__diet__T_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1435 "diet.m"
          *mercury__diet__STATE_VARIABLE_Acc_14 = mercury__diet__STATE_VARIABLE_Acc_0_13;
#line 1436 "diet.m"
        else
#line 1437 "diet.m"
          {
#line 1437 "diet.m"
            MR_Integer mercury__diet__X_8;
#line 1437 "diet.m"
            MR_Integer mercury__diet__Y_9;
#line 1437 "diet.m"
            MR_Word mercury__diet__L_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 2)));
#line 1437 "diet.m"
            MR_Word mercury__diet__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 3)));
#line 1437 "diet.m"
            MR_Tuple mercury__diet__V_15_15 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 0)));
#line 1437 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_16_16;
#line 1437 "diet.m"
            MR_Box mercury__diet__V_17_17;
#line 1437 "diet.m"
            MR_Box mercury__diet__V_18_18;
#line 1437 "diet.m"
            MR_Box mercury__diet__STATE_VARIABLE_Acc_19_19;
#line 1437 "diet.m"
            MR_Integer mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T_6, (MR_Integer) 1)));
#line 1439 "diet.m"
            void MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

#line 1437 "diet.m"
            mercury__diet__X_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 0)));
#line 1437 "diet.m"
            mercury__diet__Y_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_15_15, (MR_Integer) 1)));
#line 1438 "diet.m"
            {
#line 1438 "diet.m"
              mercury__diet__foldl_intervals_4_p_0(mercury__diet__TypeInfo_for_A_22, mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__P_5, mercury__diet__L_11, mercury__diet__STATE_VARIABLE_Acc_0_13, &mercury__diet__STATE_VARIABLE_Acc_16_16);
            }
#line 1439 "diet.m"
            {
#line 1439 "diet.m"
              mercury__diet__V_17_17 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__X_8);
            }
#line 1439 "diet.m"
            {
#line 1439 "diet.m"
              mercury__diet__V_18_18 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_21, mercury__diet__Y_9);
            }
#line 1439 "diet.m"
            mercury__diet__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__diet__P_5, (MR_Integer) 1)));
#line 1439 "diet.m"
            {
#line 1439 "diet.m"
              mercury__diet__func_0(((MR_Box) mercury__diet__P_5), mercury__diet__V_17_17, mercury__diet__V_18_18, mercury__diet__STATE_VARIABLE_Acc_16_16, &mercury__diet__STATE_VARIABLE_Acc_19_19);
            }
#line 1440 "diet.m"
            /* direct tailcall eliminated */
#line 1440 "diet.m"
            {
#line 1440 "diet.m"
              MR_Word mercury__diet__T__tmp_copy_6 = mercury__diet__R_12;
#line 1440 "diet.m"
              MR_Box mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13 = mercury__diet__STATE_VARIABLE_Acc_19_19;

#line 1440 "diet.m"
              mercury__diet__STATE_VARIABLE_Acc_0_13 = mercury__diet__STATE_VARIABLE_Acc_0__tmp_copy_13;
#line 1440 "diet.m"
              mercury__diet__T_6 = mercury__diet__T__tmp_copy_6;
#line 1440 "diet.m"
            }
#line 1440 "diet.m"
            continue;
#line 1437 "diet.m"
          }
#line 1436 "diet.m"
      }
#line 1436 "diet.m"
      break;
#line 1436 "diet.m"
    }
#line 208 "diet.m"
}

#line 201 "diet.m"
MR_Integer MR_CALL 
mercury__diet__count_1_f_0(
#line 201 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_6,
#line 201 "diet.m"
  MR_Word mercury__diet__T_3)
#line 201 "diet.m"
{
#line 1415 "diet.m"
  {
#line 1415 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1415 "diet.m"
    MR_Integer mercury__diet__Count_4;
#line 1415 "diet.m"
    MR_Word mercury__diet__TypeInfo_8_8;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__count_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_enum_6 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 19274 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_8_8  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 1416 "diet.m"
    {
#line 1416 "diet.m"
      mercury__diet__count_3_p_0(mercury__diet__TypeInfo_8_8, mercury__diet__T_3, (MR_Integer) 0, &mercury__diet__Count_4);
    }
#line 1415 "diet.m"
    return mercury__diet__Count_4;
#line 1415 "diet.m"
  }
#line 201 "diet.m"
}

#line 196 "diet.m"
void MR_CALL 
mercury__diet__divide_by_set_4_p_0(
#line 196 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_9,
#line 196 "diet.m"
  MR_Word mercury__diet__DivideBySet_5,
#line 196 "diet.m"
  MR_Word mercury__diet__Set_6,
#line 196 "diet.m"
  MR_Word * mercury__diet__InPart_7,
#line 196 "diet.m"
  MR_Word * mercury__diet__OutPart_8)
#line 196 "diet.m"
{
#line 1409 "diet.m"
  {
#line 1409 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1409 "diet.m"
    MR_Word mercury__diet__TypeInfo_11_11;
#line 1409 "diet.m"
    MR_Word mercury__diet__TypeInfo_12_12;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_enum_9 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 19332 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_11_11  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 1211 "diet.m"
    {
#line 1211 "diet.m"
      *mercury__diet__InPart_7 = mercury__diet__inter_2_f_0(mercury__diet__TypeInfo_11_11, mercury__diet__Set_6, mercury__diet__DivideBySet_5);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__divide_by_set_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_enum_9 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 19359 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_12_12  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 1317 "diet.m"
    if ((mercury__diet__Set_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1315 "diet.m"
      *mercury__diet__OutPart_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1317 "diet.m"
    else
#line 1317 "diet.m"
      if ((mercury__diet__DivideBySet_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1320 "diet.m"
        *mercury__diet__OutPart_8 = mercury__diet__Set_6;
#line 1317 "diet.m"
      else
#line 1322 "diet.m"
        {
#line 1322 "diet.m"
          MR_Tuple mercury__diet__Head_30;
#line 1322 "diet.m"
          MR_Word mercury__diet__Stream_31;
#line 1322 "diet.m"
          MR_Word mercury__diet__V_34_34;
#line 1325 "diet.m"
          MR_Word mercury__diet___RemHead_32;
#line 1325 "diet.m"
          MR_Word mercury__diet___RemStream_33;

#line 1324 "diet.m"
          {
#line 1324 "diet.m"
            mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__DivideBySet_5, &mercury__diet__Head_30, &mercury__diet__Stream_31);
          }
#line 1325 "diet.m"
          {
#line 1325 "diet.m"
            mercury__diet__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1325 "diet.m"
            MR_hl_field(MR_mktag(1), mercury__diet__V_34_34, 0) = ((MR_Box) (mercury__diet__Head_30));
#line 1325 "diet.m"
          }
#line 1325 "diet.m"
          {
#line 1325 "diet.m"
            mercury__diet__diff_6_p_0(mercury__diet__TypeInfo_12_12, mercury__diet__Set_6, mercury__diet__V_34_34, mercury__diet__Stream_31, mercury__diet__OutPart_8, &mercury__diet___RemHead_32, &mercury__diet___RemStream_33);
          }
#line 1322 "diet.m"
        }
#line 1409 "diet.m"
  }
#line 196 "diet.m"
}

#line 189 "diet.m"
void MR_CALL 
mercury__diet__divide_4_p_0(
#line 189 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_12,
#line 189 "diet.m"
  MR_Word mercury__diet__Pred_5,
#line 189 "diet.m"
  MR_Word mercury__diet__Set_6,
#line 189 "diet.m"
  MR_Word * mercury__diet__TrueSet_7,
#line 189 "diet.m"
  MR_Word * mercury__diet__FalseSet_8)
#line 189 "diet.m"
{
#line 1393 "diet.m"
  {
#line 1393 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1393 "diet.m"
    MR_Word mercury__diet__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1393 "diet.m"
    MR_Word mercury__diet__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 1395 "diet.m"
    {
#line 1395 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_50_95_95_104_111_49_55_95_95_91_49_44_32_50_44_32_53_44_32_54_44_32_56_93_95_48_6_p_0(mercury__diet__TypeClassInfo_for_enum_12, mercury__diet__Pred_5, mercury__diet__TypeClassInfo_for_enum_12, mercury__diet__Set_6, mercury__diet__V_10_10, mercury__diet__TrueSet_7, mercury__diet__V_11_11, mercury__diet__FalseSet_8);
#line 1395 "diet.m"
      return;
    }
#line 1393 "diet.m"
  }
#line 189 "diet.m"
}

#line 183 "diet.m"
void MR_CALL 
mercury__diet__difference_3_p_0(
#line 183 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_24,
#line 183 "diet.m"
  MR_Word mercury__diet__SetA_4,
#line 183 "diet.m"
  MR_Word mercury__diet__SetB_5,
#line 183 "diet.m"
  MR_Word * mercury__diet__Set_6)
#line 183 "diet.m"
{
#line 1317 "diet.m"
  {
#line 1317 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1317 "diet.m"
    if ((mercury__diet__SetA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1315 "diet.m"
      *mercury__diet__Set_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1317 "diet.m"
    else
#line 1317 "diet.m"
      if ((mercury__diet__SetB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1320 "diet.m"
        *mercury__diet__Set_6 = mercury__diet__SetA_4;
#line 1317 "diet.m"
      else
#line 1322 "diet.m"
        {
#line 1322 "diet.m"
          MR_Tuple mercury__diet__Head_19;
#line 1322 "diet.m"
          MR_Word mercury__diet__Stream_20;
#line 1322 "diet.m"
          MR_Word mercury__diet__V_23_23;
#line 1325 "diet.m"
          MR_Word mercury__diet___RemHead_21;
#line 1325 "diet.m"
          MR_Word mercury__diet___RemStream_22;

#line 1324 "diet.m"
          {
#line 1324 "diet.m"
            mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__SetB_5, &mercury__diet__Head_19, &mercury__diet__Stream_20);
          }
#line 1325 "diet.m"
          {
#line 1325 "diet.m"
            mercury__diet__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1325 "diet.m"
            MR_hl_field(MR_mktag(1), mercury__diet__V_23_23, 0) = ((MR_Box) (mercury__diet__Head_19));
#line 1325 "diet.m"
          }
#line 1325 "diet.m"
          {
#line 1325 "diet.m"
            mercury__diet__diff_6_p_0(mercury__diet__TypeInfo_for_T_24, mercury__diet__SetA_4, mercury__diet__V_23_23, mercury__diet__Stream_20, mercury__diet__Set_6, &mercury__diet___RemHead_21, &mercury__diet___RemStream_22);
          }
#line 1322 "diet.m"
        }
#line 1317 "diet.m"
  }
#line 183 "diet.m"
}

#line 182 "diet.m"
MR_Word MR_CALL 
mercury__diet__difference_2_f_0(
#line 182 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_7,
#line 182 "diet.m"
  MR_Word mercury__diet__SetA_4,
#line 182 "diet.m"
  MR_Word mercury__diet__SetB_5)
#line 182 "diet.m"
{
#line 1317 "diet.m"
  {
#line 1317 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1317 "diet.m"
    MR_Word mercury__diet__Set_6;

#line 1317 "diet.m"
    if ((mercury__diet__SetA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1315 "diet.m"
      mercury__diet__Set_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1317 "diet.m"
    else
#line 1317 "diet.m"
      if ((mercury__diet__SetB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1320 "diet.m"
        mercury__diet__Set_6 = mercury__diet__SetA_4;
#line 1317 "diet.m"
      else
#line 1322 "diet.m"
        {
#line 1322 "diet.m"
          MR_Tuple mercury__diet__Head_23;
#line 1322 "diet.m"
          MR_Word mercury__diet__Stream_24;
#line 1322 "diet.m"
          MR_Word mercury__diet__V_27_27;
#line 1325 "diet.m"
          MR_Word mercury__diet___RemHead_25;
#line 1325 "diet.m"
          MR_Word mercury__diet___RemStream_26;

#line 1324 "diet.m"
          {
#line 1324 "diet.m"
            mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__SetB_5, &mercury__diet__Head_23, &mercury__diet__Stream_24);
          }
#line 1325 "diet.m"
          {
#line 1325 "diet.m"
            mercury__diet__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1325 "diet.m"
            MR_hl_field(MR_mktag(1), mercury__diet__V_27_27, 0) = ((MR_Box) (mercury__diet__Head_23));
#line 1325 "diet.m"
          }
#line 1325 "diet.m"
          {
#line 1325 "diet.m"
            mercury__diet__diff_6_p_0(mercury__diet__TypeInfo_for_T_7, mercury__diet__SetA_4, mercury__diet__V_27_27, mercury__diet__Stream_24, &mercury__diet__Set_6, &mercury__diet___RemHead_25, &mercury__diet___RemStream_26);
          }
#line 1322 "diet.m"
        }
#line 1317 "diet.m"
    return mercury__diet__Set_6;
#line 1317 "diet.m"
  }
#line 182 "diet.m"
}

#line 177 "diet.m"
void MR_CALL 
mercury__diet__intersect_list_2_p_0(
#line 177 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_7,
#line 177 "diet.m"
  MR_Word mercury__diet__HeadVar__1_1,
#line 177 "diet.m"
  MR_Word * mercury__diet__HeadVar__2_2)
#line 177 "diet.m"
{
#line 1304 "diet.m"
  {
#line 1304 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1304 "diet.m"
    if ((mercury__diet__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 620 "diet.m"
      *mercury__diet__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1304 "diet.m"
    else
#line 1305 "diet.m"
      {
#line 1305 "diet.m"
        MR_Word mercury__diet__Set0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 0)));
#line 1305 "diet.m"
        MR_Word mercury__diet__Sets_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 1)));

#line 1306 "diet.m"
        {
#line 1306 "diet.m"
          mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__diet__TypeInfo_for_T_7, mercury__diet__Sets_4, mercury__diet__Set0_3, mercury__diet__HeadVar__2_2);
#line 1306 "diet.m"
          return;
        }
#line 1305 "diet.m"
      }
#line 1304 "diet.m"
  }
#line 177 "diet.m"
}

#line 176 "diet.m"
MR_Word MR_CALL 
mercury__diet__intersect_list_1_f_0(
#line 176 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_5,
#line 176 "diet.m"
  MR_Word mercury__diet__Sets_3)
#line 176 "diet.m"
{
#line 1304 "diet.m"
  {
#line 1304 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1304 "diet.m"
    MR_Word mercury__diet__Set_4;

#line 1304 "diet.m"
    if ((mercury__diet__Sets_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 620 "diet.m"
      mercury__diet__Set_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1304 "diet.m"
    else
#line 1305 "diet.m"
      {
#line 1305 "diet.m"
        MR_Word mercury__diet__Set0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Sets_3, (MR_Integer) 0)));
#line 1305 "diet.m"
        MR_Word mercury__diet__Sets_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Sets_3, (MR_Integer) 1)));

#line 1306 "diet.m"
        {
#line 1306 "diet.m"
          mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__diet__TypeInfo_for_T_5, mercury__diet__Sets_7, mercury__diet__Set0_6, &mercury__diet__Set_4);
        }
#line 1305 "diet.m"
      }
#line 1304 "diet.m"
    return mercury__diet__Set_4;
#line 1304 "diet.m"
  }
#line 176 "diet.m"
}

#line 171 "diet.m"
void MR_CALL 
mercury__diet__intersect_3_p_0(
#line 171 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_6,
#line 171 "diet.m"
  MR_Word mercury__diet__SetA_4,
#line 171 "diet.m"
  MR_Word mercury__diet__SetB_5,
#line 171 "diet.m"
  MR_Word * mercury__diet__HeadVar__3_3)
#line 171 "diet.m"
{
#line 1211 "diet.m"
  {
#line 1211 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1211 "diet.m"
    {
#line 1211 "diet.m"
      *mercury__diet__HeadVar__3_3 = mercury__diet__inter_2_f_0(mercury__diet__TypeInfo_for_T_6, mercury__diet__SetA_4, mercury__diet__SetB_5);
    }
#line 1211 "diet.m"
  }
#line 171 "diet.m"
}

#line 170 "diet.m"
MR_Word MR_CALL 
mercury__diet__intersect_2_f_0(
#line 170 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_6,
#line 170 "diet.m"
  MR_Word mercury__diet__SetA_4,
#line 170 "diet.m"
  MR_Word mercury__diet__SetB_5)
#line 170 "diet.m"
{
#line 1209 "diet.m"
  {
#line 1209 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1209 "diet.m"
    MR_Word mercury__diet__HeadVar__3_3;

#line 1209 "diet.m"
    {
#line 1209 "diet.m"
      return mercury__diet__HeadVar__3_3 = mercury__diet__inter_2_f_0(mercury__diet__TypeInfo_for_T_6, mercury__diet__SetA_4, mercury__diet__SetB_5);
    }
#line 1209 "diet.m"
    return mercury__diet__HeadVar__3_3;
#line 1209 "diet.m"
  }
#line 170 "diet.m"
}

#line 165 "diet.m"
void MR_CALL 
mercury__diet__union_list_2_p_0(
#line 165 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_8,
#line 165 "diet.m"
  MR_Word mercury__diet__Sets_3,
#line 165 "diet.m"
  MR_Word * mercury__diet__Set_4)
#line 165 "diet.m"
{
#line 1202 "diet.m"
  {
#line 1202 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1202 "diet.m"
    if ((mercury__diet__Sets_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1201 "diet.m"
      *mercury__diet__Set_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1202 "diet.m"
    else
#line 1203 "diet.m"
      {
#line 1203 "diet.m"
        MR_Word mercury__diet__SetA_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Sets_3, (MR_Integer) 0)));
#line 1203 "diet.m"
        MR_Word mercury__diet__SetBs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Sets_3, (MR_Integer) 1)));

#line 1204 "diet.m"
        {
#line 1204 "diet.m"
          mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__diet__TypeInfo_for_T_8, mercury__diet__SetBs_6, mercury__diet__SetA_5, mercury__diet__Set_4);
#line 1204 "diet.m"
          return;
        }
#line 1203 "diet.m"
      }
#line 1202 "diet.m"
  }
#line 165 "diet.m"
}

#line 164 "diet.m"
MR_Word MR_CALL 
mercury__diet__union_list_1_f_0(
#line 164 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_5,
#line 164 "diet.m"
  MR_Word mercury__diet__Sets_3)
#line 164 "diet.m"
{
#line 1202 "diet.m"
  {
#line 1202 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1202 "diet.m"
    MR_Word mercury__diet__Set_4;

#line 1202 "diet.m"
    if ((mercury__diet__Sets_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1201 "diet.m"
      mercury__diet__Set_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1202 "diet.m"
    else
#line 1203 "diet.m"
      {
#line 1203 "diet.m"
        MR_Word mercury__diet__SetA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Sets_3, (MR_Integer) 0)));
#line 1203 "diet.m"
        MR_Word mercury__diet__SetBs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Sets_3, (MR_Integer) 1)));

#line 1204 "diet.m"
        {
#line 1204 "diet.m"
          mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__diet__TypeInfo_for_T_5, mercury__diet__SetBs_9, mercury__diet__SetA_8, &mercury__diet__Set_4);
        }
#line 1203 "diet.m"
      }
#line 1202 "diet.m"
    return mercury__diet__Set_4;
#line 1202 "diet.m"
  }
#line 164 "diet.m"
}

#line 160 "diet.m"
void MR_CALL 
mercury__diet__union_3_p_0(
#line 160 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_6,
#line 160 "diet.m"
  MR_Word mercury__diet__DietA_4,
#line 160 "diet.m"
  MR_Word mercury__diet__DietB_5,
#line 160 "diet.m"
  MR_Word * mercury__diet__HeadVar__3_3)
#line 160 "diet.m"
{
#line 1089 "diet.m"
  {
#line 1089 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 1089 "diet.m"
    {
#line 1089 "diet.m"
      *mercury__diet__HeadVar__3_3 = mercury__diet__union_2_f_0(mercury__diet__TypeInfo_for_T_6, mercury__diet__DietA_4, mercury__diet__DietB_5);
    }
#line 1089 "diet.m"
  }
#line 160 "diet.m"
}

#line 159 "diet.m"
MR_Word MR_CALL 
mercury__diet__union_2_f_0(
#line 159 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_16,
#line 159 "diet.m"
  MR_Word mercury__diet__Input_4,
#line 159 "diet.m"
  MR_Word mercury__diet__Stream0_5)
#line 159 "diet.m"
{
#line 1094 "diet.m"
  while (MR_TRUE)
#line 1094 "diet.m"
    {
#line 1094 "diet.m"
      /* tailcall optimized into a loop */
#line 1094 "diet.m"
      {
#line 1094 "diet.m"
        MR_bool mercury__diet__succeeded;
#line 1094 "diet.m"
        MR_Word mercury__diet__Result_6;
#line 1092 "diet.m"
        MR_Integer mercury__diet__V_13_13;
#line 1092 "diet.m"
        MR_Integer mercury__diet__V_14_14;

#line 445 "diet.m"
        if ((mercury__diet__Stream0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
          mercury__diet__V_13_13 = (MR_Integer) 0;
#line 445 "diet.m"
        else
#line 446 "diet.m"
          {
#line 446 "diet.m"
            MR_Tuple mercury__diet__V_17_17 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 0)));
#line 446 "diet.m"
            MR_Word mercury__diet__V_19_19;
#line 446 "diet.m"
            MR_Word mercury__diet__V_20_20;

#line 446 "diet.m"
            mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 1)));
#line 446 "diet.m"
            mercury__diet__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 2)));
#line 446 "diet.m"
            mercury__diet__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Stream0_5, (MR_Integer) 3)));
#line 446 "diet.m"
          }
#line 445 "diet.m"
        if ((mercury__diet__Input_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "diet.m"
          mercury__diet__V_14_14 = (MR_Integer) 0;
#line 445 "diet.m"
        else
#line 446 "diet.m"
          {
#line 446 "diet.m"
            MR_Tuple mercury__diet__V_21_21 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 0)));
#line 446 "diet.m"
            MR_Word mercury__diet__V_23_23;
#line 446 "diet.m"
            MR_Word mercury__diet__V_24_24;

#line 446 "diet.m"
            mercury__diet__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 1)));
#line 446 "diet.m"
            mercury__diet__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 2)));
#line 446 "diet.m"
            mercury__diet__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Input_4, (MR_Integer) 3)));
#line 446 "diet.m"
          }
#line 1092 "diet.m"
        mercury__diet__succeeded = (mercury__diet__V_13_13 > mercury__diet__V_14_14);
#line 1094 "diet.m"
        if (mercury__diet__succeeded)
#line 1093 "diet.m"
          {
#line 1093 "diet.m"
            /* direct tailcall eliminated */
#line 1093 "diet.m"
            {
#line 1093 "diet.m"
              MR_Word mercury__diet__Input__tmp_copy_4 = mercury__diet__Stream0_5;
#line 1093 "diet.m"
              MR_Word mercury__diet__Stream0__tmp_copy_5 = mercury__diet__Input_4;

#line 1093 "diet.m"
              mercury__diet__Stream0_5 = mercury__diet__Stream0__tmp_copy_5;
#line 1093 "diet.m"
              mercury__diet__Input_4 = mercury__diet__Input__tmp_copy_4;
#line 1093 "diet.m"
            }
#line 1093 "diet.m"
            continue;
#line 1093 "diet.m"
          }
#line 1094 "diet.m"
        else
#line 1095 "diet.m"
          {
#line 1095 "diet.m"
            MR_Word mercury__diet__Head1_7;
#line 1095 "diet.m"
            MR_Word mercury__diet__Stream1_8;
#line 1095 "diet.m"
            MR_Word mercury__diet__Left2_9;
#line 1095 "diet.m"
            MR_Word mercury__diet__Head2_10;
#line 1095 "diet.m"
            MR_Word mercury__diet__Stream2_11;
#line 1095 "diet.m"
            MR_Word mercury__diet__V_15_15;

#line 603 "diet.m"
            if ((mercury__diet__Stream0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 600 "diet.m"
              {
#line 601 "diet.m"
                mercury__diet__Head1_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "diet.m"
                mercury__diet__Stream1_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 600 "diet.m"
              }
#line 603 "diet.m"
            else
#line 604 "diet.m"
              {
#line 604 "diet.m"
                MR_Tuple mercury__diet__X_32;

#line 605 "diet.m"
                {
#line 605 "diet.m"
                  mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__Stream0_5, &mercury__diet__X_32, &mercury__diet__Stream1_8);
                }
#line 606 "diet.m"
                {
#line 606 "diet.m"
                  mercury__diet__Head1_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 606 "diet.m"
                  MR_hl_field(MR_mktag(1), mercury__diet__Head1_7, 0) = ((MR_Box) (mercury__diet__X_32));
#line 606 "diet.m"
                }
#line 604 "diet.m"
              }
#line 1096 "diet.m"
            mercury__diet__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1096 "diet.m"
            {
#line 1096 "diet.m"
              mercury__diet__union_2_7_p_0(mercury__diet__TypeInfo_for_T_16, mercury__diet__Input_4, mercury__diet__V_15_15, mercury__diet__Head1_7, mercury__diet__Stream1_8, &mercury__diet__Left2_9, &mercury__diet__Head2_10, &mercury__diet__Stream2_11);
            }
#line 1100 "diet.m"
            if ((mercury__diet__Head2_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1099 "diet.m"
              mercury__diet__Result_6 = mercury__diet__Left2_9;
#line 1100 "diet.m"
            else
#line 1101 "diet.m"
              {
#line 1101 "diet.m"
                MR_Tuple mercury__diet__I_12 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Head2_10, (MR_Integer) 0)));

#line 1102 "diet.m"
                {
#line 1102 "diet.m"
                  return mercury__diet__Result_6 = mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_106_111_105_110_95_95_91_49_93_95_48_3_f_0(mercury__diet__I_12, mercury__diet__Left2_9, mercury__diet__Stream2_11);
                }
#line 1101 "diet.m"
              }
#line 1095 "diet.m"
          }
#line 1094 "diet.m"
        return mercury__diet__Result_6;
#line 1094 "diet.m"
      }
#line 1094 "diet.m"
      break;
#line 1094 "diet.m"
    }
#line 159 "diet.m"
}

#line 153 "diet.m"
void MR_CALL 
mercury__diet__split_5_p_0(
#line 153 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_12,
#line 153 "diet.m"
  MR_Box mercury__diet__Elem_6,
#line 153 "diet.m"
  MR_Word mercury__diet__Set_7,
#line 153 "diet.m"
  MR_Word * mercury__diet__Lesser_8,
#line 153 "diet.m"
  MR_Word * mercury__diet__IsPresent_9,
#line 153 "diet.m"
  MR_Word * mercury__diet__Greater_10)
#line 153 "diet.m"
{
#line 1052 "diet.m"
  {
#line 1052 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1052 "diet.m"
    MR_Word mercury__diet__TypeInfo_14_14;
#line 1052 "diet.m"
    MR_Integer mercury__diet__V_11_11;
#line 20059 "diet.c"
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_12, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20061 "diet.c"
    MR_Box mercury__diet__conv1_V_11_11;

#line 20064 "diet.c"
    {
#line 20066 "diet.c"
      mercury__diet__conv1_V_11_11 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_enum_12), mercury__diet__Elem_6);
    }
#line 20069 "diet.c"
    mercury__diet__V_11_11 = ((MR_Integer) mercury__diet__conv1_V_11_11);
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__split_5_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_enum_12 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 20086 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_14_14  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 1053 "diet.m"
    {
#line 1053 "diet.m"
      mercury__diet__split_2_5_p_0(mercury__diet__TypeInfo_14_14, mercury__diet__V_11_11, mercury__diet__Set_7, mercury__diet__Lesser_8, mercury__diet__IsPresent_9, mercury__diet__Greater_10);
#line 1053 "diet.m"
      return;
    }
#line 1052 "diet.m"
  }
#line 153 "diet.m"
}

#line 146 "diet.m"
MR_bool MR_CALL 
mercury__diet__remove_least_3_p_0(
#line 146 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_16,
#line 146 "diet.m"
  MR_Box * mercury__diet__HeadVar__1_1,
#line 146 "diet.m"
  MR_Word mercury__diet__Set0_5,
#line 146 "diet.m"
  MR_Word * mercury__diet__Set_6)
#line 146 "diet.m"
{
#line 1036 "diet.m"
  {
#line 1036 "diet.m"
    MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Set0_5)) == (MR_mktag((MR_Integer) 1)));
#line 1036 "diet.m"
    MR_Integer mercury__diet__X_4;
#line 1036 "diet.m"
    MR_Integer mercury__diet__Y_11;
#line 1036 "diet.m"
    MR_Word mercury__diet__Stream_12;
#line 1036 "diet.m"
    MR_Tuple mercury__diet__V_13_13;
#line 1036 "diet.m"
    MR_Integer mercury__diet__PolyConst1_17;
#line 20132 "diet.c"
    MR_Tuple mercury__diet__V_20_20;
#line 20134 "diet.c"
    MR_Integer mercury__diet__V_21_21;
#line 20136 "diet.c"
    MR_Word mercury__diet__V_22_22;
#line 20138 "diet.c"
    MR_Word mercury__diet__V_23_23;

#line 20141 "diet.c"
    if (mercury__diet__succeeded)
#line 20143 "diet.c"
      {
#line 20145 "diet.c"
        mercury__diet__V_20_20 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 0)));
#line 20147 "diet.c"
        mercury__diet__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 1)));
#line 20149 "diet.c"
        mercury__diet__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 2)));
#line 20151 "diet.c"
        mercury__diet__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 3)));
#line 20153 "diet.c"
        mercury__diet__PolyConst1_17 = (MR_Integer) 1;
#line 1042 "diet.m"
        {
#line 1042 "diet.m"
          mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_95_91_49_93_95_48_3_p_0(mercury__diet__Set0_5, &mercury__diet__V_13_13, &mercury__diet__Stream_12);
        }
#line 1042 "diet.m"
        mercury__diet__X_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_13_13, (MR_Integer) 0)));
#line 1042 "diet.m"
        mercury__diet__Y_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_13_13, (MR_Integer) 1)));
#line 1043 "diet.m"
        mercury__diet__succeeded = (mercury__diet__X_4 == mercury__diet__Y_11);
#line 1045 "diet.m"
        if (mercury__diet__succeeded)
#line 1044 "diet.m"
          *mercury__diet__Set_6 = mercury__diet__Stream_12;
#line 1045 "diet.m"
        else
#line 1046 "diet.m"
          {
#line 1046 "diet.m"
            MR_Word mercury__diet__TypeInfo_19_19;
#line 1046 "diet.m"
            MR_Tuple mercury__diet__V_14_14;
#line 1046 "diet.m"
            MR_Integer mercury__diet__V_15_15;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__remove_least_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_enum_16 ;
	Index =  mercury__diet__PolyConst1_17 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 20196 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_19_19  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 429 "diet.m"
            mercury__diet__V_15_15 = (mercury__diet__X_4 + (MR_Integer) 1);
#line 1046 "diet.m"
            {
#line 1046 "diet.m"
              mercury__diet__V_14_14 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1046 "diet.m"
              MR_hl_field(MR_mktag(0), mercury__diet__V_14_14, 0) = ((MR_Box) (mercury__diet__V_15_15));
#line 1046 "diet.m"
              MR_hl_field(MR_mktag(0), mercury__diet__V_14_14, 1) = ((MR_Box) (mercury__diet__Y_11));
#line 1046 "diet.m"
            }
#line 1046 "diet.m"
            {
#line 1046 "diet.m"
              *mercury__diet__Set_6 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeInfo_19_19, mercury__diet__V_14_14, mercury__diet__Stream_12);
            }
#line 1046 "diet.m"
          }
#line 1036 "diet.m"
        {
#line 1036 "diet.m"
          *mercury__diet__HeadVar__1_1 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_16, mercury__diet__X_4);
        }
#line 1036 "diet.m"
        mercury__diet__succeeded = MR_TRUE;
#line 20229 "diet.c"
      }
#line 1036 "diet.m"
    return mercury__diet__succeeded;
#line 1036 "diet.m"
  }
#line 146 "diet.m"
}

#line 139 "diet.m"
MR_bool MR_CALL 
mercury__diet__remove_list_3_p_0(
#line 139 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_8,
#line 139 "diet.m"
  MR_Word mercury__diet__X_4,
#line 139 "diet.m"
  MR_Word mercury__diet__Set0_5,
#line 139 "diet.m"
  MR_Word * mercury__diet__Set_6)
#line 139 "diet.m"
{
#line 1029 "diet.m"
  {
#line 1029 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 1029 "diet.m"
    MR_Word mercury__diet__TypeInfo_11_11;
#line 1029 "diet.m"
    MR_Word mercury__diet__SetX_7;

#line 1030 "diet.m"
    {
#line 1030 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_enum_8, mercury__diet__X_4, &mercury__diet__SetX_7);
    }
#line 702 "diet.m"
    if ((mercury__diet__SetX_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 701 "diet.m"
      mercury__diet__succeeded = MR_TRUE;
#line 702 "diet.m"
    else
#line 703 "diet.m"
      {
#line 703 "diet.m"
        MR_Tuple mercury__diet__XY1_22;
#line 703 "diet.m"
        MR_Word mercury__diet__R1_23;
#line 703 "diet.m"
        MR_Tuple mercury__diet__XY2_24;
#line 703 "diet.m"
        MR_Word mercury__diet__R2_25;
#line 703 "diet.m"
        MR_Word mercury__diet__V_26_26;
#line 703 "diet.m"
        MR_Word mercury__diet__V_27_27;
#line 704 "diet.m"
        MR_Tuple mercury__diet__V_18_18;
#line 704 "diet.m"
        MR_Integer mercury__diet__V_19_19;
#line 704 "diet.m"
        MR_Word mercury__diet__V_20_20;
#line 704 "diet.m"
        MR_Word mercury__diet__V_21_21;

#line 704 "diet.m"
        mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Set0_5)) == (MR_mktag((MR_Integer) 1)));
#line 704 "diet.m"
        if (mercury__diet__succeeded)
#line 704 "diet.m"
          {
#line 704 "diet.m"
            mercury__diet__V_18_18 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 0)));
#line 704 "diet.m"
            mercury__diet__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 1)));
#line 704 "diet.m"
            mercury__diet__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 2)));
#line 704 "diet.m"
            mercury__diet__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set0_5, (MR_Integer) 3)));
#line 705 "diet.m"
            {
#line 705 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__SetX_7, &mercury__diet__XY1_22, &mercury__diet__R1_23);
            }
#line 706 "diet.m"
            {
#line 706 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__Set0_5, &mercury__diet__XY2_24, &mercury__diet__R2_25);
            }
#line 707 "diet.m"
            mercury__diet__V_26_26 = (MR_Integer) 1;
#line 707 "diet.m"
            {
#line 707 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_98_115_101_116_95_50_95_95_91_49_93_95_48_5_p_0(mercury__diet__XY1_22, mercury__diet__R1_23, mercury__diet__XY2_24, mercury__diet__R2_25, &mercury__diet__V_27_27);
            }
#line 707 "diet.m"
            mercury__diet__succeeded = (mercury__diet__V_26_26 == mercury__diet__V_27_27);
#line 704 "diet.m"
          }
#line 703 "diet.m"
      }
#line 1029 "diet.m"
    if (mercury__diet__succeeded)
#line 1029 "diet.m"
      {
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__remove_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_enum_8 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 20350 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_11_11  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 1317 "diet.m"
        if ((mercury__diet__Set0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1315 "diet.m"
          *mercury__diet__Set_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1317 "diet.m"
        else
#line 1317 "diet.m"
          if ((mercury__diet__SetX_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1320 "diet.m"
            *mercury__diet__Set_6 = mercury__diet__Set0_5;
#line 1317 "diet.m"
          else
#line 1322 "diet.m"
            {
#line 1322 "diet.m"
              MR_Tuple mercury__diet__Head_43;
#line 1322 "diet.m"
              MR_Word mercury__diet__Stream_44;
#line 1322 "diet.m"
              MR_Word mercury__diet__V_47_47;
#line 1325 "diet.m"
              MR_Word mercury__diet___RemHead_45;
#line 1325 "diet.m"
              MR_Word mercury__diet___RemStream_46;

#line 1324 "diet.m"
              {
#line 1324 "diet.m"
                mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__SetX_7, &mercury__diet__Head_43, &mercury__diet__Stream_44);
              }
#line 1325 "diet.m"
              {
#line 1325 "diet.m"
                mercury__diet__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1325 "diet.m"
                MR_hl_field(MR_mktag(1), mercury__diet__V_47_47, 0) = ((MR_Box) (mercury__diet__Head_43));
#line 1325 "diet.m"
              }
#line 1325 "diet.m"
              {
#line 1325 "diet.m"
                mercury__diet__diff_6_p_0(mercury__diet__TypeInfo_11_11, mercury__diet__Set0_5, mercury__diet__V_47_47, mercury__diet__Stream_44, mercury__diet__Set_6, &mercury__diet___RemHead_45, &mercury__diet___RemStream_46);
              }
#line 1322 "diet.m"
            }
#line 1317 "diet.m"
        mercury__diet__succeeded = MR_TRUE;
#line 1029 "diet.m"
      }
#line 1029 "diet.m"
    return mercury__diet__succeeded;
#line 1029 "diet.m"
  }
#line 139 "diet.m"
}

#line 132 "diet.m"
MR_bool MR_CALL 
mercury__diet__remove_3_p_0(
#line 132 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_8,
#line 132 "diet.m"
  MR_Box mercury__diet__Elem_4,
#line 132 "diet.m"
  MR_Word mercury__diet__Set0_5,
#line 132 "diet.m"
  MR_Word * mercury__diet__Set_6)
#line 132 "diet.m"
{
#line 983 "diet.m"
  {
#line 983 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 983 "diet.m"
    MR_Word mercury__diet__TypeInfo_10_10;
#line 983 "diet.m"
    MR_Integer mercury__diet__V_7_7;
#line 20434 "diet.c"
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_8, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20436 "diet.c"
    MR_Box mercury__diet__conv1_V_7_7;

#line 20439 "diet.c"
    {
#line 20441 "diet.c"
      mercury__diet__conv1_V_7_7 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_enum_8), mercury__diet__Elem_4);
    }
#line 20444 "diet.c"
    mercury__diet__V_7_7 = ((MR_Integer) mercury__diet__conv1_V_7_7);
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__remove_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_enum_8 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 20461 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_10_10  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 984 "diet.m"
    {
#line 984 "diet.m"
      return mercury__diet__succeeded = mercury__diet__remove_2_3_p_0(mercury__diet__TypeInfo_10_10, mercury__diet__V_7_7, mercury__diet__Set0_5, mercury__diet__Set_6);
    }
#line 983 "diet.m"
    return mercury__diet__succeeded;
#line 983 "diet.m"
  }
#line 132 "diet.m"
}

#line 125 "diet.m"
void MR_CALL 
mercury__diet__delete_list_3_p_0(
#line 125 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_8,
#line 125 "diet.m"
  MR_Word mercury__diet__List_4,
#line 125 "diet.m"
  MR_Word mercury__diet__Set0_5,
#line 125 "diet.m"
  MR_Word * mercury__diet__Set_6)
#line 125 "diet.m"
{
#line 978 "diet.m"
  {
#line 978 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 978 "diet.m"
    MR_Word mercury__diet__TypeInfo_10_10;
#line 978 "diet.m"
    MR_Word mercury__diet__V_7_7;

#line 1706 "diet.m"
    {
#line 1706 "diet.m"
      mercury__diet__list_to_set_2_p_0(mercury__diet__TypeClassInfo_for_enum_8, mercury__diet__List_4, &mercury__diet__V_7_7);
    }
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__delete_list_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_enum_8 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 20522 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_10_10  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 1317 "diet.m"
    if ((mercury__diet__Set0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1315 "diet.m"
      *mercury__diet__Set_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1317 "diet.m"
    else
#line 1317 "diet.m"
      if ((mercury__diet__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1320 "diet.m"
        *mercury__diet__Set_6 = mercury__diet__Set0_5;
#line 1317 "diet.m"
      else
#line 1322 "diet.m"
        {
#line 1322 "diet.m"
          MR_Tuple mercury__diet__Head_28;
#line 1322 "diet.m"
          MR_Word mercury__diet__Stream_29;
#line 1322 "diet.m"
          MR_Word mercury__diet__V_32_32;
#line 1325 "diet.m"
          MR_Word mercury__diet___RemHead_30;
#line 1325 "diet.m"
          MR_Word mercury__diet___RemStream_31;

#line 1324 "diet.m"
          {
#line 1324 "diet.m"
            mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__V_7_7, &mercury__diet__Head_28, &mercury__diet__Stream_29);
          }
#line 1325 "diet.m"
          {
#line 1325 "diet.m"
            mercury__diet__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1325 "diet.m"
            MR_hl_field(MR_mktag(1), mercury__diet__V_32_32, 0) = ((MR_Box) (mercury__diet__Head_28));
#line 1325 "diet.m"
          }
#line 1325 "diet.m"
          {
#line 1325 "diet.m"
            mercury__diet__diff_6_p_0(mercury__diet__TypeInfo_10_10, mercury__diet__Set0_5, mercury__diet__V_32_32, mercury__diet__Stream_29, mercury__diet__Set_6, &mercury__diet___RemHead_30, &mercury__diet___RemStream_31);
          }
#line 1322 "diet.m"
        }
#line 978 "diet.m"
  }
#line 125 "diet.m"
}

#line 124 "diet.m"
MR_Word MR_CALL 
mercury__diet__delete_list_2_f_0(
#line 124 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_7,
#line 124 "diet.m"
  MR_Word mercury__diet__Set0_4,
#line 124 "diet.m"
  MR_Word mercury__diet__List_5)
#line 124 "diet.m"
{
#line 976 "diet.m"
  {
#line 976 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 976 "diet.m"
    MR_Word mercury__diet__Set_6;

#line 976 "diet.m"
    {
#line 976 "diet.m"
      mercury__diet__delete_list_3_p_0(mercury__diet__TypeClassInfo_for_enum_7, mercury__diet__List_5, mercury__diet__Set0_4, &mercury__diet__Set_6);
    }
#line 976 "diet.m"
    return mercury__diet__Set_6;
#line 976 "diet.m"
  }
#line 124 "diet.m"
}

#line 118 "diet.m"
void MR_CALL 
mercury__diet__delete_3_p_0(
#line 118 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_8,
#line 118 "diet.m"
  MR_Box mercury__diet__Elem_4,
#line 118 "diet.m"
  MR_Word mercury__diet__Set0_5,
#line 118 "diet.m"
  MR_Word * mercury__diet__Set_6)
#line 118 "diet.m"
{
#line 969 "diet.m"
  {
#line 969 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 969 "diet.m"
    MR_Word mercury__diet__Set1_7;
#line 983 "diet.m"
    MR_Word mercury__diet__TypeInfo_10_14;
#line 983 "diet.m"
    MR_Integer mercury__diet__V_12_12;
#line 20632 "diet.c"
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_8, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20634 "diet.c"
    MR_Box mercury__diet__conv1_V_12_12;

#line 20637 "diet.c"
    {
#line 20639 "diet.c"
      mercury__diet__conv1_V_12_12 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_enum_8), mercury__diet__Elem_4);
    }
#line 20642 "diet.c"
    mercury__diet__V_12_12 = ((MR_Integer) mercury__diet__conv1_V_12_12);
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__delete_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_enum_8 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 20659 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_10_14  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 984 "diet.m"
    {
#line 984 "diet.m"
      mercury__diet__succeeded = mercury__diet__remove_2_3_p_0(mercury__diet__TypeInfo_10_14, mercury__diet__V_12_12, mercury__diet__Set0_5, &mercury__diet__Set1_7);
    }
#line 969 "diet.m"
    if (mercury__diet__succeeded)
#line 968 "diet.m"
      *mercury__diet__Set_6 = mercury__diet__Set1_7;
#line 969 "diet.m"
    else
#line 970 "diet.m"
      *mercury__diet__Set_6 = mercury__diet__Set0_5;
#line 969 "diet.m"
  }
#line 118 "diet.m"
}

#line 117 "diet.m"
MR_Word MR_CALL 
mercury__diet__delete_2_f_0(
#line 117 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_7,
#line 117 "diet.m"
  MR_Word mercury__diet__Set0_4,
#line 117 "diet.m"
  MR_Box mercury__diet__Elem_5)
#line 117 "diet.m"
{
#line 969 "diet.m"
  {
#line 969 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 969 "diet.m"
    MR_Word mercury__diet__Set_6;
#line 969 "diet.m"
    MR_Word mercury__diet__Set1_11;
#line 983 "diet.m"
    MR_Word mercury__diet__TypeInfo_10_17;
#line 983 "diet.m"
    MR_Integer mercury__diet__V_15_15;
#line 20707 "diet.c"
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_7, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20709 "diet.c"
    MR_Box mercury__diet__conv1_V_15_15;

#line 20712 "diet.c"
    {
#line 20714 "diet.c"
      mercury__diet__conv1_V_15_15 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_enum_7), mercury__diet__Elem_5);
    }
#line 20717 "diet.c"
    mercury__diet__V_15_15 = ((MR_Integer) mercury__diet__conv1_V_15_15);
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__delete_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_enum_7 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 20734 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_10_17  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 984 "diet.m"
    {
#line 984 "diet.m"
      mercury__diet__succeeded = mercury__diet__remove_2_3_p_0(mercury__diet__TypeInfo_10_17, mercury__diet__V_15_15, mercury__diet__Set0_4, &mercury__diet__Set1_11);
    }
#line 969 "diet.m"
    if (mercury__diet__succeeded)
#line 968 "diet.m"
      mercury__diet__Set_6 = mercury__diet__Set1_11;
#line 969 "diet.m"
    else
#line 970 "diet.m"
      mercury__diet__Set_6 = mercury__diet__Set0_4;
#line 969 "diet.m"
    return mercury__diet__Set_6;
#line 969 "diet.m"
  }
#line 117 "diet.m"
}

#line 109 "diet.m"
void MR_CALL 
mercury__diet__insert_interval_4_p_0(
#line 109 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_13,
#line 109 "diet.m"
  MR_Box mercury__diet__X_5,
#line 109 "diet.m"
  MR_Box mercury__diet__Y_6,
#line 109 "diet.m"
  MR_Word mercury__diet__Set0_7,
#line 109 "diet.m"
  MR_Word * mercury__diet__Set_8)
#line 109 "diet.m"
{
#line 880 "diet.m"
  {
#line 880 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 880 "diet.m"
    MR_Integer mercury__diet__P_9;
#line 880 "diet.m"
    MR_Integer mercury__diet__Q_10;
#line 20784 "diet.c"
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_13, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20786 "diet.c"
    MR_Box mercury__diet__conv1_P_9;
#line 20788 "diet.c"
    MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);
#line 20790 "diet.c"
    MR_Box mercury__diet__conv3_Q_10;

#line 20793 "diet.c"
    {
#line 20795 "diet.c"
      mercury__diet__conv1_P_9 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_enum_13), mercury__diet__X_5);
    }
#line 20798 "diet.c"
    mercury__diet__P_9 = ((MR_Integer) mercury__diet__conv1_P_9);
#line 20800 "diet.c"
    mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_13, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20802 "diet.c"
    {
#line 20804 "diet.c"
      mercury__diet__conv3_Q_10 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_enum_13), mercury__diet__Y_6);
    }
#line 20807 "diet.c"
    mercury__diet__Q_10 = ((MR_Integer) mercury__diet__conv3_Q_10);
#line 883 "diet.m"
    mercury__diet__succeeded = (mercury__diet__P_9 <= mercury__diet__Q_10);
#line 885 "diet.m"
    if (mercury__diet__succeeded)
#line 884 "diet.m"
      {
#line 884 "diet.m"
        MR_Word mercury__diet__TypeInfo_15_15;
#line 884 "diet.m"
        MR_Tuple mercury__diet__V_11_11;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__insert_interval_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 20835 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_15_15  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 884 "diet.m"
        {
#line 884 "diet.m"
          mercury__diet__V_11_11 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 884 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_11_11, 0) = ((MR_Box) (mercury__diet__P_9));
#line 884 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_11_11, 1) = ((MR_Box) (mercury__diet__Q_10));
#line 884 "diet.m"
        }
#line 884 "diet.m"
        {
#line 884 "diet.m"
          *mercury__diet__Set_8 = mercury__diet__do_insert_2_f_0(mercury__diet__TypeInfo_15_15, mercury__diet__V_11_11, mercury__diet__Set0_7);
        }
#line 884 "diet.m"
      }
#line 885 "diet.m"
    else
#line 886 "diet.m"
      {
#line 886 "diet.m"
        MR_Word mercury__diet__TypeInfo_17_17;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__insert_interval_4_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_enum_13 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 20881 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_17_17  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 886 "diet.m"
        {
#line 886 "diet.m"
          mercury__diet__unexpected_interval_3_p_0(mercury__diet__TypeInfo_17_17, (MR_String) "predicate \140diet.insert_interval\'/4", mercury__diet__X_5, mercury__diet__Y_6);
#line 886 "diet.m"
          return;
        }
#line 886 "diet.m"
      }
#line 880 "diet.m"
  }
#line 109 "diet.m"
}

#line 103 "diet.m"
void MR_CALL 
mercury__diet__insert_list_3_p_0(
#line 103 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_8,
#line 103 "diet.m"
  MR_Word mercury__diet__Elems_4,
#line 103 "diet.m"
  MR_Word mercury__diet__Set0_5,
#line 103 "diet.m"
  MR_Word * mercury__diet__Set_6)
#line 103 "diet.m"
{
#line 876 "diet.m"
  {
#line 876 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 876 "diet.m"
    {
#line 876 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_enum_8, mercury__diet__Elems_4, mercury__diet__Set0_5, mercury__diet__Set_6);
#line 876 "diet.m"
      return;
    }
#line 876 "diet.m"
  }
#line 103 "diet.m"
}

#line 102 "diet.m"
MR_Word MR_CALL 
mercury__diet__insert_list_2_f_0(
#line 102 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_7,
#line 102 "diet.m"
  MR_Word mercury__diet__Set0_4,
#line 102 "diet.m"
  MR_Word mercury__diet__Elems_5)
#line 102 "diet.m"
{
#line 876 "diet.m"
  {
#line 876 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 876 "diet.m"
    MR_Word mercury__diet__Set_6;

#line 876 "diet.m"
    {
#line 876 "diet.m"
      mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_52_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__list_0(mercury__diet__TypeClassInfo_for_enum_7, mercury__diet__Elems_5, mercury__diet__Set0_4, &mercury__diet__Set_6);
    }
#line 876 "diet.m"
    return mercury__diet__Set_6;
#line 876 "diet.m"
  }
#line 102 "diet.m"
}

#line 97 "diet.m"
MR_bool MR_CALL 
mercury__diet__insert_new_3_p_0(
#line 97 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_8,
#line 97 "diet.m"
  MR_Box mercury__diet__Elem_4,
#line 97 "diet.m"
  MR_Word mercury__diet__Set0_5,
#line 97 "diet.m"
  MR_Word * mercury__diet__Set_6)
#line 97 "diet.m"
{
#line 819 "diet.m"
  {
#line 819 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 819 "diet.m"
    MR_Word mercury__diet__TypeInfo_10_10;
#line 819 "diet.m"
    MR_Integer mercury__diet__V_7_7;
#line 20983 "diet.c"
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_8, (MR_Integer) 0)), (MR_Integer) 5)));
#line 20985 "diet.c"
    MR_Box mercury__diet__conv1_V_7_7;

#line 20988 "diet.c"
    {
#line 20990 "diet.c"
      mercury__diet__conv1_V_7_7 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_enum_8), mercury__diet__Elem_4);
    }
#line 20993 "diet.c"
    mercury__diet__V_7_7 = ((MR_Integer) mercury__diet__conv1_V_7_7);
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__insert_new_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_enum_8 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 21010 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_10_10  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 820 "diet.m"
    {
#line 820 "diet.m"
      return mercury__diet__succeeded = mercury__diet__add_new_3_p_0(mercury__diet__TypeInfo_10_10, mercury__diet__V_7_7, mercury__diet__Set0_5, mercury__diet__Set_6);
    }
#line 819 "diet.m"
    return mercury__diet__succeeded;
#line 819 "diet.m"
  }
#line 97 "diet.m"
}

#line 92 "diet.m"
void MR_CALL 
mercury__diet__insert_3_p_0(
#line 92 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_8,
#line 92 "diet.m"
  MR_Box mercury__diet__Elem_4,
#line 92 "diet.m"
  MR_Word mercury__diet__Set0_5,
#line 92 "diet.m"
  MR_Word * mercury__diet__Set_6)
#line 92 "diet.m"
{
#line 769 "diet.m"
  {
#line 769 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 769 "diet.m"
    MR_Word mercury__diet__TypeInfo_10_10;
#line 769 "diet.m"
    MR_Integer mercury__diet__V_7_7;
#line 21050 "diet.c"
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box);
#line 21052 "diet.c"
    MR_Box mercury__diet__conv1_V_7_7;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__insert_3_p_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_enum_8 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 21070 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_10_10  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 21077 "diet.c"
    mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_8, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21079 "diet.c"
    {
#line 21081 "diet.c"
      mercury__diet__conv1_V_7_7 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_enum_8), mercury__diet__Elem_4);
    }
#line 21084 "diet.c"
    mercury__diet__V_7_7 = ((MR_Integer) mercury__diet__conv1_V_7_7);
#line 770 "diet.m"
    {
#line 770 "diet.m"
      *mercury__diet__Set_6 = mercury__diet__add_2_f_0(mercury__diet__TypeInfo_10_10, mercury__diet__V_7_7, mercury__diet__Set0_5);
    }
#line 769 "diet.m"
  }
#line 92 "diet.m"
}

#line 91 "diet.m"
MR_Word MR_CALL 
mercury__diet__insert_2_f_0(
#line 91 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_7,
#line 91 "diet.m"
  MR_Word mercury__diet__Set0_4,
#line 91 "diet.m"
  MR_Box mercury__diet__Elem_5)
#line 91 "diet.m"
{
#line 769 "diet.m"
  {
#line 769 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 769 "diet.m"
    MR_Word mercury__diet__Set_6;
#line 769 "diet.m"
    MR_Word mercury__diet__TypeInfo_10_13;
#line 769 "diet.m"
    MR_Integer mercury__diet__V_11_11;
#line 21117 "diet.c"
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box);
#line 21119 "diet.c"
    MR_Box mercury__diet__conv1_V_11_11;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__insert_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_enum_7 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 21137 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_10_13  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 21144 "diet.c"
    mercury__diet__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_7, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21146 "diet.c"
    {
#line 21148 "diet.c"
      mercury__diet__conv1_V_11_11 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_enum_7), mercury__diet__Elem_5);
    }
#line 21151 "diet.c"
    mercury__diet__V_11_11 = ((MR_Integer) mercury__diet__conv1_V_11_11);
#line 770 "diet.m"
    {
#line 770 "diet.m"
      return mercury__diet__Set_6 = mercury__diet__add_2_f_0(mercury__diet__TypeInfo_10_13, mercury__diet__V_11_11, mercury__diet__Set0_4);
    }
#line 769 "diet.m"
    return mercury__diet__Set_6;
#line 769 "diet.m"
  }
#line 91 "diet.m"
}

#line 86 "diet.m"
MR_bool MR_CALL 
mercury__diet__superset_2_p_0(
#line 86 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_5,
#line 86 "diet.m"
  MR_Word mercury__diet__Superset_3,
#line 86 "diet.m"
  MR_Word mercury__diet__Set_4)
#line 86 "diet.m"
{
#line 702 "diet.m"
  {
#line 702 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 702 "diet.m"
    if ((mercury__diet__Set_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 701 "diet.m"
      mercury__diet__succeeded = MR_TRUE;
#line 702 "diet.m"
    else
#line 703 "diet.m"
      {
#line 703 "diet.m"
        MR_Tuple mercury__diet__XY1_16;
#line 703 "diet.m"
        MR_Word mercury__diet__R1_17;
#line 703 "diet.m"
        MR_Tuple mercury__diet__XY2_18;
#line 703 "diet.m"
        MR_Word mercury__diet__R2_19;
#line 703 "diet.m"
        MR_Word mercury__diet__V_20_20;
#line 703 "diet.m"
        MR_Word mercury__diet__V_21_21;
#line 704 "diet.m"
        MR_Tuple mercury__diet__V_12_12;
#line 704 "diet.m"
        MR_Integer mercury__diet__V_13_13;
#line 704 "diet.m"
        MR_Word mercury__diet__V_14_14;
#line 704 "diet.m"
        MR_Word mercury__diet__V_15_15;

#line 704 "diet.m"
        mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Superset_3)) == (MR_mktag((MR_Integer) 1)));
#line 704 "diet.m"
        if (mercury__diet__succeeded)
#line 704 "diet.m"
          {
#line 704 "diet.m"
            mercury__diet__V_12_12 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Superset_3, (MR_Integer) 0)));
#line 704 "diet.m"
            mercury__diet__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Superset_3, (MR_Integer) 1)));
#line 704 "diet.m"
            mercury__diet__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Superset_3, (MR_Integer) 2)));
#line 704 "diet.m"
            mercury__diet__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Superset_3, (MR_Integer) 3)));
#line 705 "diet.m"
            {
#line 705 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__Set_4, &mercury__diet__XY1_16, &mercury__diet__R1_17);
            }
#line 706 "diet.m"
            {
#line 706 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__Superset_3, &mercury__diet__XY2_18, &mercury__diet__R2_19);
            }
#line 707 "diet.m"
            mercury__diet__V_20_20 = (MR_Integer) 1;
#line 707 "diet.m"
            {
#line 707 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_98_115_101_116_95_50_95_95_91_49_93_95_48_5_p_0(mercury__diet__XY1_16, mercury__diet__R1_17, mercury__diet__XY2_18, mercury__diet__R2_19, &mercury__diet__V_21_21);
            }
#line 707 "diet.m"
            mercury__diet__succeeded = (mercury__diet__V_20_20 == mercury__diet__V_21_21);
#line 704 "diet.m"
          }
#line 703 "diet.m"
      }
#line 702 "diet.m"
    return mercury__diet__succeeded;
#line 702 "diet.m"
  }
#line 86 "diet.m"
}

#line 82 "diet.m"
MR_bool MR_CALL 
mercury__diet__subset_2_p_0(
#line 82 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_18,
#line 82 "diet.m"
  MR_Word mercury__diet__T1_3,
#line 82 "diet.m"
  MR_Word mercury__diet__T2_4)
#line 82 "diet.m"
{
#line 702 "diet.m"
  {
#line 702 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 702 "diet.m"
    if ((mercury__diet__T1_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 701 "diet.m"
      mercury__diet__succeeded = MR_TRUE;
#line 702 "diet.m"
    else
#line 703 "diet.m"
      {
#line 703 "diet.m"
        MR_Tuple mercury__diet__XY1_13;
#line 703 "diet.m"
        MR_Word mercury__diet__R1_14;
#line 703 "diet.m"
        MR_Tuple mercury__diet__XY2_15;
#line 703 "diet.m"
        MR_Word mercury__diet__R2_16;
#line 703 "diet.m"
        MR_Word mercury__diet__V_17_17;
#line 703 "diet.m"
        MR_Word mercury__diet__V_19_19;
#line 704 "diet.m"
        MR_Tuple mercury__diet__V_9_9;
#line 704 "diet.m"
        MR_Integer mercury__diet__V_10_10;
#line 704 "diet.m"
        MR_Word mercury__diet__V_11_11;
#line 704 "diet.m"
        MR_Word mercury__diet__V_12_12;

#line 704 "diet.m"
        mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__T2_4)) == (MR_mktag((MR_Integer) 1)));
#line 704 "diet.m"
        if (mercury__diet__succeeded)
#line 704 "diet.m"
          {
#line 704 "diet.m"
            mercury__diet__V_9_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 0)));
#line 704 "diet.m"
            mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 1)));
#line 704 "diet.m"
            mercury__diet__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 2)));
#line 704 "diet.m"
            mercury__diet__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 3)));
#line 705 "diet.m"
            {
#line 705 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__T1_3, &mercury__diet__XY1_13, &mercury__diet__R1_14);
            }
#line 706 "diet.m"
            {
#line 706 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__T2_4, &mercury__diet__XY2_15, &mercury__diet__R2_16);
            }
#line 707 "diet.m"
            mercury__diet__V_17_17 = (MR_Integer) 1;
#line 707 "diet.m"
            {
#line 707 "diet.m"
              mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_117_98_115_101_116_95_50_95_95_91_49_93_95_48_5_p_0(mercury__diet__XY1_13, mercury__diet__R1_14, mercury__diet__XY2_15, mercury__diet__R2_16, &mercury__diet__V_19_19);
            }
#line 707 "diet.m"
            mercury__diet__succeeded = (mercury__diet__V_17_17 == mercury__diet__V_19_19);
#line 704 "diet.m"
          }
#line 703 "diet.m"
      }
#line 702 "diet.m"
    return mercury__diet__succeeded;
#line 702 "diet.m"
  }
#line 82 "diet.m"
}

#line 691 "diet.m"
static void MR_CALL 
mercury__diet__member_2_p_1_1(
#line 691 "diet.m"
  void * mercury__diet__env_ptr_arg)
#line 691 "diet.m"
{
#line 691 "diet.m"
  {
#line 691 "diet.m"
    struct mercury__diet__member_2_p_1_env_0_s * mercury__diet__env_ptr = (struct mercury__diet__member_2_p_1_env_0_s *) mercury__diet__env_ptr_arg;

#line 691 "diet.m"
    {
#line 21357 "diet.c"
      MR_bool MR_CALL (* mercury__diet__func_4)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (mercury__diet__env_ptr)->mercury__diet__member_2_p_1_env_0__TypeClassInfo_for_enum_16, (MR_Integer) 0)), (MR_Integer) 6)));

#line 21360 "diet.c"
      {
#line 21362 "diet.c"
        (mercury__diet__env_ptr)->mercury__diet__member_2_p_1_env_0__succeeded = mercury__diet__func_4(((MR_Box) (mercury__diet__env_ptr)->mercury__diet__member_2_p_1_env_0__TypeClassInfo_for_enum_16), ((MR_Box) ((mercury__diet__env_ptr)->mercury__diet__member_2_p_1_env_0__Int_12)), (mercury__diet__env_ptr)->mercury__diet__member_2_p_1_env_0__Elem_1);
      }
#line 21365 "diet.c"
      if ((mercury__diet__env_ptr)->mercury__diet__member_2_p_1_env_0__succeeded)
#line 21367 "diet.c"
        {
#line 21369 "diet.c"
          ((mercury__diet__env_ptr)->mercury__diet__member_2_p_1_env_0__cont)((mercury__diet__env_ptr)->mercury__diet__member_2_p_1_env_0__cont_env_ptr);
#line 21371 "diet.c"
          return;
        }
#line 691 "diet.m"
    }
#line 691 "diet.m"
  }
#line 691 "diet.m"
}

#line 78 "diet.m"
void MR_CALL 
mercury__diet__member_2_p_1(
#line 78 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_16,
#line 78 "diet.m"
  MR_Box * mercury__diet__Elem_1,
#line 78 "diet.m"
  MR_Word mercury__diet__Set_2,
#line 78 "diet.m"
  MR_Cont mercury__diet__cont,
#line 78 "diet.m"
  void * mercury__diet__cont_env_ptr)
#line 78 "diet.m"
{
#line 78 "diet.m"
  {
#line 78 "diet.m"
    struct mercury__diet__member_2_p_1_env_0_s mercury__diet__env;

#line 78 "diet.m"
    (mercury__diet__env).mercury__diet__member_2_p_1_env_0__TypeClassInfo_for_enum_16 = mercury__diet__TypeClassInfo_for_enum_16;
#line 78 "diet.m"
    (mercury__diet__env).mercury__diet__member_2_p_1_env_0__Elem_1 = mercury__diet__Elem_1;
#line 78 "diet.m"
    (mercury__diet__env).mercury__diet__member_2_p_1_env_0__cont = mercury__diet__cont;
#line 78 "diet.m"
    (mercury__diet__env).mercury__diet__member_2_p_1_env_0__cont_env_ptr = mercury__diet__cont_env_ptr;
#line 686 "diet.m"
    while (MR_TRUE)
#line 686 "diet.m"
      {
#line 686 "diet.m"
        /* tailcall optimized into a loop */
#line 686 "diet.m"
        {
#line 686 "diet.m"
          MR_Integer mercury__diet__X_7;
#line 686 "diet.m"
          MR_Integer mercury__diet__Y_8;
#line 686 "diet.m"
          MR_Word mercury__diet__Left_10;
#line 686 "diet.m"
          MR_Word mercury__diet__Right_11;
#line 686 "diet.m"
          MR_Tuple mercury__diet__V_13_13;
#line 687 "diet.m"
          MR_Integer mercury__diet__V_9_9;

#line 687 "diet.m"
          (mercury__diet__env).mercury__diet__member_2_p_1_env_0__succeeded = ((MR_tag((MR_Word) mercury__diet__Set_2)) == (MR_mktag((MR_Integer) 1)));
#line 687 "diet.m"
          if ((mercury__diet__env).mercury__diet__member_2_p_1_env_0__succeeded)
#line 687 "diet.m"
            {
#line 687 "diet.m"
              mercury__diet__V_13_13 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set_2, (MR_Integer) 0)));
#line 687 "diet.m"
              mercury__diet__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set_2, (MR_Integer) 1)));
#line 687 "diet.m"
              mercury__diet__Left_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_2, (MR_Integer) 2)));
#line 687 "diet.m"
              mercury__diet__Right_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_2, (MR_Integer) 3)));
#line 687 "diet.m"
              mercury__diet__X_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_13_13, (MR_Integer) 0)));
#line 687 "diet.m"
              mercury__diet__Y_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_13_13, (MR_Integer) 1)));
#line 689 "diet.m"
              {
#line 689 "diet.m"
                mercury__diet__member_2_p_1((mercury__diet__env).mercury__diet__member_2_p_1_env_0__TypeClassInfo_for_enum_16, (mercury__diet__env).mercury__diet__member_2_p_1_env_0__Elem_1, mercury__diet__Left_10, (mercury__diet__env).mercury__diet__member_2_p_1_env_0__cont, (mercury__diet__env).mercury__diet__member_2_p_1_env_0__cont_env_ptr);
              }
#line 691 "diet.m"
              {
#line 691 "diet.m"
                MR_Word mercury__diet__TypeClassInfo_for_enum_17 = (MR_Word) &mercury__diet_scalar_common_1[0];
#line 691 "diet.m"
                MR_Word mercury__diet__TypeClassInfo_for_enum_18;
#line 691 "diet.m"
                MR_Integer mercury__diet__V_14_14;
#line 691 "diet.m"
                MR_Integer mercury__diet__V_15_15;
#line 21463 "diet.c"
                MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_17, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21465 "diet.c"
                MR_Box mercury__diet__conv1_V_14_14;
#line 21467 "diet.c"
                MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);
#line 21469 "diet.c"
                MR_Box mercury__diet__conv3_V_15_15;

#line 21472 "diet.c"
                {
#line 21474 "diet.c"
                  mercury__diet__conv1_V_14_14 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_enum_17), ((MR_Box) (mercury__diet__X_7)));
                }
#line 21477 "diet.c"
                mercury__diet__V_14_14 = ((MR_Integer) mercury__diet__conv1_V_14_14);
#line 21479 "diet.c"
                mercury__diet__TypeClassInfo_for_enum_18 = (MR_Word) &mercury__diet_scalar_common_1[0];
#line 21481 "diet.c"
                mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_18, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21483 "diet.c"
                {
#line 21485 "diet.c"
                  mercury__diet__conv3_V_15_15 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_enum_18), ((MR_Box) (mercury__diet__Y_8)));
                }
#line 21488 "diet.c"
                mercury__diet__V_15_15 = ((MR_Integer) mercury__diet__conv3_V_15_15);
#line 691 "diet.m"
                {
#line 691 "diet.m"
                  mercury__int__nondet_int_in_range_3_p_0(mercury__diet__V_14_14, mercury__diet__V_15_15, &(mercury__diet__env).mercury__diet__member_2_p_1_env_0__Int_12, mercury__diet__member_2_p_1_1, &mercury__diet__env);
                }
#line 691 "diet.m"
              }
#line 694 "diet.m"
              {
#line 694 "diet.m"
                /* direct tailcall eliminated */
#line 694 "diet.m"
                {
#line 694 "diet.m"
                  MR_Word mercury__diet__Set__tmp_copy_2 = mercury__diet__Right_11;

#line 694 "diet.m"
                  mercury__diet__Set_2 = mercury__diet__Set__tmp_copy_2;
#line 694 "diet.m"
                }
#line 694 "diet.m"
                continue;
#line 694 "diet.m"
              }
#line 687 "diet.m"
            }
#line 686 "diet.m"
        }
#line 686 "diet.m"
        break;
#line 686 "diet.m"
      }
#line 78 "diet.m"
  }
#line 78 "diet.m"
}

#line 77 "diet.m"
MR_bool MR_CALL 
mercury__diet__member_2_p_0(
#line 77 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_16,
#line 77 "diet.m"
  MR_Box mercury__diet__Elem_1,
#line 77 "diet.m"
  MR_Word mercury__diet__Set_2)
#line 77 "diet.m"
{
#line 665 "diet.m"
  {
#line 665 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 665 "diet.m"
    MR_Integer mercury__diet__V_21_21;
#line 21544 "diet.c"
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21546 "diet.c"
    MR_Box mercury__diet__conv1_V_21_21;

#line 21549 "diet.c"
    {
#line 21551 "diet.c"
      mercury__diet__conv1_V_21_21 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_enum_16), mercury__diet__Elem_1);
    }
#line 21554 "diet.c"
    mercury__diet__V_21_21 = ((MR_Integer) mercury__diet__conv1_V_21_21);
#line 666 "diet.m"
    {
#line 666 "diet.m"
      return mercury__diet__succeeded = mercury__diet__contains_2_2_p_0(mercury__diet__TypeClassInfo_for_enum_16, mercury__diet__Set_2, mercury__diet__V_21_21);
    }
#line 665 "diet.m"
    return mercury__diet__succeeded;
#line 665 "diet.m"
  }
#line 77 "diet.m"
}

#line 72 "diet.m"
MR_bool MR_CALL 
mercury__diet__contains_2_p_0(
#line 72 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_6,
#line 72 "diet.m"
  MR_Word mercury__diet__T_3,
#line 72 "diet.m"
  MR_Box mercury__diet__Z_4)
#line 72 "diet.m"
{
#line 665 "diet.m"
  {
#line 665 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 665 "diet.m"
    MR_Integer mercury__diet__V_5_5;
#line 21585 "diet.c"
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_6, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21587 "diet.c"
    MR_Box mercury__diet__conv1_V_5_5;

#line 21590 "diet.c"
    {
#line 21592 "diet.c"
      mercury__diet__conv1_V_5_5 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_enum_6), mercury__diet__Z_4);
    }
#line 21595 "diet.c"
    mercury__diet__V_5_5 = ((MR_Integer) mercury__diet__conv1_V_5_5);
#line 666 "diet.m"
    {
#line 666 "diet.m"
      return mercury__diet__succeeded = mercury__diet__contains_2_2_p_0(mercury__diet__TypeClassInfo_for_enum_6, mercury__diet__T_3, mercury__diet__V_5_5);
    }
#line 665 "diet.m"
    return mercury__diet__succeeded;
#line 665 "diet.m"
  }
#line 72 "diet.m"
}

#line 68 "diet.m"
MR_bool MR_CALL 
mercury__diet__is_singleton_2_p_0(
#line 68 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_11,
#line 68 "diet.m"
  MR_Word mercury__diet__Set_3,
#line 68 "diet.m"
  MR_Box * mercury__diet__Elem_4)
#line 68 "diet.m"
{
#line 659 "diet.m"
  {
#line 659 "diet.m"
    MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__Set_3)) == (MR_mktag((MR_Integer) 1)));
#line 659 "diet.m"
    MR_Integer mercury__diet__X_5;
#line 659 "diet.m"
    MR_Tuple mercury__diet__V_7_7;
#line 659 "diet.m"
    MR_Integer mercury__diet__V_8_8;
#line 659 "diet.m"
    MR_Word mercury__diet__V_9_9;
#line 659 "diet.m"
    MR_Word mercury__diet__V_10_10;
#line 660 "diet.m"
    MR_Integer mercury__diet__V_6_6;

#line 660 "diet.m"
    if (mercury__diet__succeeded)
#line 660 "diet.m"
      {
#line 660 "diet.m"
        mercury__diet__V_7_7 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__Set_3, (MR_Integer) 0)));
#line 660 "diet.m"
        mercury__diet__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__Set_3, (MR_Integer) 1)));
#line 660 "diet.m"
        mercury__diet__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_3, (MR_Integer) 2)));
#line 660 "diet.m"
        mercury__diet__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__Set_3, (MR_Integer) 3)));
#line 660 "diet.m"
        mercury__diet__X_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_7_7, (MR_Integer) 0)));
#line 660 "diet.m"
        mercury__diet__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__diet__V_7_7, (MR_Integer) 1)));
#line 660 "diet.m"
        mercury__diet__succeeded = (mercury__diet__V_8_8 == mercury__diet__X_5);
#line 659 "diet.m"
        if (mercury__diet__succeeded)
#line 659 "diet.m"
          {
#line 660 "diet.m"
            mercury__diet__succeeded = (mercury__diet__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 659 "diet.m"
            if (mercury__diet__succeeded)
#line 659 "diet.m"
              {
#line 660 "diet.m"
                mercury__diet__succeeded = (mercury__diet__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 659 "diet.m"
                if (mercury__diet__succeeded)
#line 659 "diet.m"
                  {
#line 661 "diet.m"
                    {
#line 661 "diet.m"
                      *mercury__diet__Elem_4 = mercury__enum__det_from_int_1_f_0(mercury__diet__TypeClassInfo_for_enum_11, mercury__diet__X_5);
                    }
#line 661 "diet.m"
                    mercury__diet__succeeded = MR_TRUE;
#line 659 "diet.m"
                  }
#line 659 "diet.m"
              }
#line 659 "diet.m"
          }
#line 660 "diet.m"
      }
#line 659 "diet.m"
    return mercury__diet__succeeded;
#line 659 "diet.m"
  }
#line 68 "diet.m"
}

#line 63 "diet.m"
MR_Word MR_CALL 
mercury__diet__make_interval_set_2_f_0(
#line 63 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_11,
#line 63 "diet.m"
  MR_Box mercury__diet__X_4,
#line 63 "diet.m"
  MR_Box mercury__diet__Y_5)
#line 63 "diet.m"
{
#line 650 "diet.m"
  {
#line 650 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 650 "diet.m"
    MR_Word mercury__diet__T_6;
#line 650 "diet.m"
    MR_Integer mercury__diet__P_7;
#line 650 "diet.m"
    MR_Integer mercury__diet__Q_8;
#line 21714 "diet.c"
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_11, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21716 "diet.c"
    MR_Box mercury__diet__conv1_P_7;
#line 21718 "diet.c"
    MR_Box MR_CALL (* mercury__diet__func_2)(MR_Box, MR_Box);
#line 21720 "diet.c"
    MR_Box mercury__diet__conv3_Q_8;

#line 21723 "diet.c"
    {
#line 21725 "diet.c"
      mercury__diet__conv1_P_7 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_enum_11), mercury__diet__X_4);
    }
#line 21728 "diet.c"
    mercury__diet__P_7 = ((MR_Integer) mercury__diet__conv1_P_7);
#line 21730 "diet.c"
    mercury__diet__func_2 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_11, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21732 "diet.c"
    {
#line 21734 "diet.c"
      mercury__diet__conv3_Q_8 = mercury__diet__func_2(((MR_Box) mercury__diet__TypeClassInfo_for_enum_11), mercury__diet__Y_5);
    }
#line 21737 "diet.c"
    mercury__diet__Q_8 = ((MR_Integer) mercury__diet__conv3_Q_8);
#line 653 "diet.m"
    mercury__diet__succeeded = (mercury__diet__P_7 <= mercury__diet__Q_8);
#line 655 "diet.m"
    if (mercury__diet__succeeded)
#line 654 "diet.m"
      {
#line 654 "diet.m"
        MR_Tuple mercury__diet__V_9_9;
#line 654 "diet.m"
        MR_Word mercury__diet__V_18_18;
#line 654 "diet.m"
        MR_Word mercury__diet__V_19_19;
#line 133 "private_builtin.opt"
        MR_Word mercury__diet__TypeInfo_13_13;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__make_interval_set_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 21769 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_13_13  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 654 "diet.m"
        {
#line 654 "diet.m"
          mercury__diet__V_9_9 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 654 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_9_9, 0) = ((MR_Box) (mercury__diet__P_7));
#line 654 "diet.m"
          MR_hl_field(MR_mktag(0), mercury__diet__V_9_9, 1) = ((MR_Box) (mercury__diet__Q_8));
#line 654 "diet.m"
        }
#line 441 "diet.m"
        mercury__diet__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 441 "diet.m"
        mercury__diet__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 441 "diet.m"
        {
#line 441 "diet.m"
          mercury__diet__T_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 441 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 0) = ((MR_Box) (mercury__diet__V_9_9));
#line 441 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 1) = ((MR_Box) ((MR_Integer) 1));
#line 441 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 2) = ((MR_Box) (mercury__diet__V_18_18));
#line 441 "diet.m"
          MR_hl_field(MR_mktag(1), mercury__diet__T_6, 3) = ((MR_Box) (mercury__diet__V_19_19));
#line 441 "diet.m"
        }
#line 654 "diet.m"
      }
#line 655 "diet.m"
    else
#line 656 "diet.m"
      {
#line 656 "diet.m"
        MR_Word mercury__diet__TypeInfo_15_15;

#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__make_interval_set_2_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_enum_11 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 21828 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_15_15  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 656 "diet.m"
        {
#line 656 "diet.m"
          mercury__diet__unexpected_interval_3_p_0(mercury__diet__TypeInfo_15_15, (MR_String) "function \140diet.make_interval_set\'/2", mercury__diet__X_4, mercury__diet__Y_5);
        }
#line 656 "diet.m"
      }
#line 650 "diet.m"
    return mercury__diet__T_6;
#line 650 "diet.m"
  }
#line 63 "diet.m"
}

#line 58 "diet.m"
MR_Word MR_CALL 
mercury__diet__make_singleton_set_1_f_0(
#line 58 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_8,
#line 58 "diet.m"
  MR_Box mercury__diet__X_3)
#line 58 "diet.m"
{
#line 646 "diet.m"
  {
#line 646 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 646 "diet.m"
    MR_Word mercury__diet__T_4;
#line 646 "diet.m"
    MR_Integer mercury__diet__I_5;
#line 646 "diet.m"
    MR_Tuple mercury__diet__V_6_6;
#line 646 "diet.m"
    MR_Word mercury__diet__V_13_13;
#line 646 "diet.m"
    MR_Word mercury__diet__V_14_14;
#line 21872 "diet.c"
    MR_Box MR_CALL (* mercury__diet__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__diet__TypeClassInfo_for_enum_8, (MR_Integer) 0)), (MR_Integer) 5)));
#line 21874 "diet.c"
    MR_Box mercury__diet__conv1_I_5;
#line 133 "private_builtin.opt"
    MR_Word mercury__diet__TypeInfo_10_10;

#line 21879 "diet.c"
    {
#line 21881 "diet.c"
      mercury__diet__conv1_I_5 = mercury__diet__func_0(((MR_Box) mercury__diet__TypeClassInfo_for_enum_8), mercury__diet__X_3);
    }
#line 21884 "diet.c"
    mercury__diet__I_5 = ((MR_Integer) mercury__diet__conv1_I_5);
#line 133 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__diet__make_singleton_set_1_f_0

	MR_Word TypeClassInfo;
	MR_Integer Index;
	MR_Word TypeInfo;

	TypeClassInfo =  mercury__diet__TypeClassInfo_for_enum_8 ;
	Index =  (MR_Integer) 1 ;
		{
#line 133 "private_builtin.opt"

    TypeInfo = MR_typeclass_info_param_type_info(TypeClassInfo, Index);

#line 21901 "diet.c"

		;}
#undef MR_PROC_LABEL
	 mercury__diet__TypeInfo_10_10  = TypeInfo;
#line 133 "private_builtin.opt"
}
#line 648 "diet.m"
    {
#line 648 "diet.m"
      mercury__diet__V_6_6 = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 648 "diet.m"
      MR_hl_field(MR_mktag(0), mercury__diet__V_6_6, 0) = ((MR_Box) (mercury__diet__I_5));
#line 648 "diet.m"
      MR_hl_field(MR_mktag(0), mercury__diet__V_6_6, 1) = ((MR_Box) (mercury__diet__I_5));
#line 648 "diet.m"
    }
#line 441 "diet.m"
    mercury__diet__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 441 "diet.m"
    mercury__diet__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 441 "diet.m"
    {
#line 441 "diet.m"
      mercury__diet__T_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 441 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__T_4, 0) = ((MR_Box) (mercury__diet__V_6_6));
#line 441 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__T_4, 1) = ((MR_Box) ((MR_Integer) 1));
#line 441 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__T_4, 2) = ((MR_Box) (mercury__diet__V_13_13));
#line 441 "diet.m"
      MR_hl_field(MR_mktag(1), mercury__diet__T_4, 3) = ((MR_Box) (mercury__diet__V_14_14));
#line 441 "diet.m"
    }
#line 646 "diet.m"
    return mercury__diet__T_4;
#line 646 "diet.m"
  }
#line 58 "diet.m"
}

#line 53 "diet.m"
MR_bool MR_CALL 
mercury__diet__equal_2_p_0(
#line 53 "diet.m"
  MR_Word mercury__diet__TypeClassInfo_for_enum_19,
#line 53 "diet.m"
  MR_Word mercury__diet__T1_3,
#line 53 "diet.m"
  MR_Word mercury__diet__T2_4)
#line 53 "diet.m"
{
#line 634 "diet.m"
  while (MR_TRUE)
#line 634 "diet.m"
    {
#line 634 "diet.m"
      /* tailcall optimized into a loop */
#line 634 "diet.m"
      {
#line 634 "diet.m"
        MR_bool mercury__diet__succeeded;

#line 634 "diet.m"
        if ((mercury__diet__T1_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 635 "diet.m"
          mercury__diet__succeeded = (mercury__diet__T2_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 634 "diet.m"
        else
#line 637 "diet.m"
          {
#line 637 "diet.m"
            MR_Word mercury__diet__TypeInfo_24_24;
#line 637 "diet.m"
            MR_Word mercury__diet__R1_15;
#line 637 "diet.m"
            MR_Word mercury__diet__R2_16;
#line 637 "diet.m"
            MR_Tuple mercury__diet__V_17_17;
#line 637 "diet.m"
            MR_Tuple mercury__diet__V_23_23;
#line 638 "diet.m"
            MR_Tuple mercury__diet__V_9_9;
#line 638 "diet.m"
            MR_Integer mercury__diet__V_10_10;
#line 638 "diet.m"
            MR_Word mercury__diet__V_11_11;
#line 638 "diet.m"
            MR_Word mercury__diet__V_12_12;

#line 638 "diet.m"
            mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__T2_4)) == (MR_mktag((MR_Integer) 1)));
#line 638 "diet.m"
            if (mercury__diet__succeeded)
#line 638 "diet.m"
              {
#line 638 "diet.m"
                mercury__diet__V_9_9 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 0)));
#line 638 "diet.m"
                mercury__diet__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 1)));
#line 638 "diet.m"
                mercury__diet__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 2)));
#line 638 "diet.m"
                mercury__diet__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__T2_4, (MR_Integer) 3)));
#line 639 "diet.m"
                {
#line 639 "diet.m"
                  mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__T1_3, &mercury__diet__V_17_17, &mercury__diet__R1_15);
                }
#line 640 "diet.m"
                {
#line 640 "diet.m"
                  mercury__diet__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_97_107_101_95_109_105_110_95_105_116_101_114_95_95_91_49_93_95_48_3_p_0(mercury__diet__T2_4, &mercury__diet__V_23_23, &mercury__diet__R2_16);
                }
#line 22016 "diet.c"
                mercury__diet__TypeInfo_24_24 = (MR_Word) &mercury__diet_scalar_common_2[0];
#line 640 "diet.m"
                {
#line 640 "diet.m"
                  mercury__diet__succeeded = mercury__builtin__unify_2_p_0(mercury__diet__TypeInfo_24_24, ((MR_Box) (mercury__diet__V_17_17)), ((MR_Box) (mercury__diet__V_23_23)));
                }
#line 637 "diet.m"
                if (mercury__diet__succeeded)
#line 641 "diet.m"
                  {
#line 641 "diet.m"
                    /* direct tailcall eliminated */
#line 641 "diet.m"
                    {
#line 641 "diet.m"
                      MR_Word mercury__diet__T1__tmp_copy_3 = mercury__diet__R1_15;
#line 641 "diet.m"
                      MR_Word mercury__diet__T2__tmp_copy_4 = mercury__diet__R2_16;

#line 641 "diet.m"
                      mercury__diet__T2_4 = mercury__diet__T2__tmp_copy_4;
#line 641 "diet.m"
                      mercury__diet__T1_3 = mercury__diet__T1__tmp_copy_3;
#line 641 "diet.m"
                    }
#line 641 "diet.m"
                    continue;
#line 641 "diet.m"
                  }
#line 638 "diet.m"
              }
#line 637 "diet.m"
          }
#line 634 "diet.m"
        return mercury__diet__succeeded;
#line 634 "diet.m"
      }
#line 634 "diet.m"
      break;
#line 634 "diet.m"
    }
#line 53 "diet.m"
}

#line 48 "diet.m"
MR_bool MR_CALL 
mercury__diet__is_non_empty_1_p_0(
#line 48 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_6,
#line 48 "diet.m"
  MR_Word mercury__diet__HeadVar__1_1)
#line 48 "diet.m"
{
#line 628 "diet.m"
  {
#line 628 "diet.m"
    MR_bool mercury__diet__succeeded = ((MR_tag((MR_Word) mercury__diet__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 628 "diet.m"
    MR_Tuple mercury__diet__V_2_2;
#line 628 "diet.m"
    MR_Integer mercury__diet__V_3_3;
#line 628 "diet.m"
    MR_Word mercury__diet__V_4_4;
#line 628 "diet.m"
    MR_Word mercury__diet__V_5_5;

#line 628 "diet.m"
    if (mercury__diet__succeeded)
#line 628 "diet.m"
      {
#line 628 "diet.m"
        mercury__diet__V_2_2 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 0)));
#line 628 "diet.m"
        mercury__diet__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 1)));
#line 628 "diet.m"
        mercury__diet__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 2)));
#line 628 "diet.m"
        mercury__diet__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__diet__HeadVar__1_1, (MR_Integer) 3)));
#line 628 "diet.m"
      }
#line 628 "diet.m"
    return mercury__diet__succeeded;
#line 628 "diet.m"
  }
#line 48 "diet.m"
}

#line 46 "diet.m"
MR_bool MR_CALL 
mercury__diet__is_empty_1_p_0(
#line 46 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_2,
#line 46 "diet.m"
  MR_Word mercury__diet__HeadVar__1_1)
#line 46 "diet.m"
{
#line 626 "diet.m"
  {
#line 626 "diet.m"
    MR_bool mercury__diet__succeeded = (mercury__diet__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 626 "diet.m"
    return mercury__diet__succeeded;
#line 626 "diet.m"
  }
#line 46 "diet.m"
}

#line 44 "diet.m"
void MR_CALL 
mercury__diet__empty_1_p_1(
#line 44 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_2,
#line 44 "diet.m"
  MR_Word * mercury__diet__HeadVar__1_1)
#line 44 "diet.m"
{
#line 620 "diet.m"
  {
#line 620 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 620 "diet.m"
    *mercury__diet__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 620 "diet.m"
  }
#line 44 "diet.m"
}

#line 43 "diet.m"
MR_bool MR_CALL 
mercury__diet__empty_1_p_0(
#line 43 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_2,
#line 43 "diet.m"
  MR_Word mercury__diet__HeadVar__1_1)
#line 43 "diet.m"
{
#line 624 "diet.m"
  {
#line 624 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 624 "diet.m"
    MR_Word mercury__diet__V_3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 624 "diet.m"
    {
#line 624 "diet.m"
      return mercury__diet__succeeded = mercury__diet____Unify____diet_1_0(mercury__diet__TypeInfo_for_T_2, mercury__diet__HeadVar__1_1, mercury__diet__V_3_3);
    }
#line 624 "diet.m"
    return mercury__diet__succeeded;
#line 624 "diet.m"
  }
#line 43 "diet.m"
}

#line 40 "diet.m"
void MR_CALL 
mercury__diet__init_1_p_0(
#line 40 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_2,
#line 40 "diet.m"
  MR_Word * mercury__diet__HeadVar__1_1)
#line 40 "diet.m"
{
#line 622 "diet.m"
  {
#line 622 "diet.m"
    MR_bool mercury__diet__succeeded;

#line 622 "diet.m"
    *mercury__diet__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 622 "diet.m"
  }
#line 40 "diet.m"
}

#line 39 "diet.m"
MR_Word MR_CALL 
mercury__diet__init_0_f_0(
#line 39 "diet.m"
  MR_Word mercury__diet__TypeInfo_for_T_2)
#line 39 "diet.m"
{
#line 620 "diet.m"
  {
#line 620 "diet.m"
    MR_bool mercury__diet__succeeded;
#line 620 "diet.m"
    MR_Word mercury__diet__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 620 "diet.m"
    return mercury__diet__HeadVar__1_1;
#line 620 "diet.m"
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
	MR_register_type_ctor_info(&mercury__diet__diet__type_ctor_info_interval_0);
}

void mercury__diet__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module diet. */
