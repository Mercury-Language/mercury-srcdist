/*
** Automatically generated from `string.m'
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


/* :- module string. */
/* :- implementation. */

/*
INIT mercury__string__init
ENDINIT
*/

#include "string.mih"
#include "string.mh"


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



struct mercury__string__mercury_append_3_p_3_env_0_s {
  MR_String * mercury__string__mercury_append_3_p_3_env_0__X_4;
  MR_String * mercury__string__mercury_append_3_p_3_env_0__Y_5;
  MR_Cont mercury__string__mercury_append_3_p_3_env_0__cont;
  void * mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr;
  MR_bool mercury__string__mercury_append_3_p_3_env_0__succeeded;
  MR_Word mercury__string__mercury_append_3_p_3_env_0__XList_7;
  MR_Word mercury__string__mercury_append_3_p_3_env_0__YList_8;
};

struct mercury__string__foldr_between_2_6_p_4_env_0_s {
  MR_Word mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18;
  MR_Word mercury__string__foldr_between_2_6_p_4_env_0__Closure_7;
  MR_String mercury__string__foldr_between_2_6_p_4_env_0__String_8;
  MR_Integer mercury__string__foldr_between_2_6_p_4_env_0__Start_9;
  MR_Box * mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15;
  MR_Cont mercury__string__foldr_between_2_6_p_4_env_0__cont;
  void * mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr;
  MR_Integer mercury__string__foldr_between_2_6_p_4_env_0__J_12;
  MR_Box mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16;
};

struct mercury__string__foldr_between_2_6_p_3_env_0_s {
  MR_Word mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18;
  MR_Word mercury__string__foldr_between_2_6_p_3_env_0__Closure_7;
  MR_String mercury__string__foldr_between_2_6_p_3_env_0__String_8;
  MR_Integer mercury__string__foldr_between_2_6_p_3_env_0__Start_9;
  MR_Box * mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15;
  MR_Cont mercury__string__foldr_between_2_6_p_3_env_0__cont;
  void * mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr;
  MR_Integer mercury__string__foldr_between_2_6_p_3_env_0__J_12;
  MR_Box mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16;
};

struct mercury__string__foldl2_between_2_8_p_5_env_0_s {
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25;
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26;
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9;
  MR_String mercury__string__foldl2_between_2_8_p_5_env_0__String_10;
  MR_Integer mercury__string__foldl2_between_2_8_p_5_env_0__End_12;
  MR_Box * mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18;
  MR_Box * mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20;
  MR_Cont mercury__string__foldl2_between_2_8_p_5_env_0__cont;
  void * mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr;
  MR_Integer mercury__string__foldl2_between_2_8_p_5_env_0__J_15;
  MR_Box mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21;
  MR_Box mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22;
};

struct mercury__string__foldl2_between_2_8_p_4_env_0_s {
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25;
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26;
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9;
  MR_String mercury__string__foldl2_between_2_8_p_4_env_0__String_10;
  MR_Integer mercury__string__foldl2_between_2_8_p_4_env_0__End_12;
  MR_Box * mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18;
  MR_Box * mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20;
  MR_Cont mercury__string__foldl2_between_2_8_p_4_env_0__cont;
  void * mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr;
  MR_Integer mercury__string__foldl2_between_2_8_p_4_env_0__J_15;
  MR_Box mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21;
  MR_Box mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22;
};

struct mercury__string__foldl_between_2_6_p_4_env_0_s {
  MR_Word mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18;
  MR_Word mercury__string__foldl_between_2_6_p_4_env_0__Closure_7;
  MR_String mercury__string__foldl_between_2_6_p_4_env_0__String_8;
  MR_Integer mercury__string__foldl_between_2_6_p_4_env_0__End_10;
  MR_Box * mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15;
  MR_Cont mercury__string__foldl_between_2_6_p_4_env_0__cont;
  void * mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr;
  MR_Integer mercury__string__foldl_between_2_6_p_4_env_0__J_12;
  MR_Box mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16;
};

struct mercury__string__foldl_between_2_6_p_3_env_0_s {
  MR_Word mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18;
  MR_Word mercury__string__foldl_between_2_6_p_3_env_0__Closure_7;
  MR_String mercury__string__foldl_between_2_6_p_3_env_0__String_8;
  MR_Integer mercury__string__foldl_between_2_6_p_3_env_0__End_10;
  MR_Box * mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15;
  MR_Cont mercury__string__foldl_between_2_6_p_3_env_0__cont;
  void * mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr;
  MR_Integer mercury__string__foldl_between_2_6_p_3_env_0__J_12;
  MR_Box mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16;
};


static const MR_FA_TypeInfo_Struct1 mercury__string__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_0[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_justified_column_0_0;

static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_1[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_justified_column_0_1;

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_0[1];

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_1[1];

static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_justified_column_0[2];

static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_justified_column_0[2];

static const MR_Integer mercury__string__string__functor_number_map_justified_column_0[2];

static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_0;

static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_1;

static const MR_EnumFunctorDescPtr mercury__string__string__enum_value_ordered_justify_sense_0[2];

static const MR_EnumFunctorDescPtr mercury__string__string__enum_name_ordered_justify_sense_0[2];

static const MR_Integer mercury__string__string__functor_number_map_justify_sense_0[2];

static const MR_Integer mercury__string__string__functor_number_map_line_0[1];

static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_line_0;

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_0[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_0;

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_1[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_1;

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_2[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_2;

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_3[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_3;

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_0[1];

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_1[1];

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_2[1];

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_3[1];

static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_poly_type_0[4];

static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_poly_type_0[4];

static const MR_Integer mercury__string__string__functor_number_map_poly_type_0[4];

static const MR_Integer mercury__string__string__functor_number_map_text_file_0[1];

static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_text_file_0;

static MR_Integer MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__string__mercury_append_3_p_3_1(
  void * mercury__string__env_ptr_arg);

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0_5(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0_4(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0_3(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0_2(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0_1(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0_5(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0_4(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0_3(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0_2(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0_1(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_1_f_0_5(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_1_f_0_4(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_1_f_0_3(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_1_f_0_2(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_1_f_0_1(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_accumulator_1_f_0_5(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_accumulator_1_f_0_4(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_accumulator_1_f_0_3(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_accumulator_1_f_0_2(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_accumulator_1_f_0_1(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3);

static MR_Word MR_CALL 
mercury__string__map__ho12_2_f_in__list_0(
  MR_Word mercury__string__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__string__map__ho11_2_f_in__list_0(
  MR_Word mercury__string__HeadVar__2_2);

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_52_93_95_48_4_p_in__list_0(
  MR_String mercury__string__Var_20,
  MR_Word mercury__string__HeadVar__2_2,
  MR_Word mercury__string__HeadVar__3_3,
  MR_Word * mercury__string__HeadVar__4_4);

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_51_95_95_91_50_93_95_48_3_f_in__list_0(
  MR_String mercury__string__Var_36,
  MR_Word mercury__string__HeadVar__2_2,
  MR_Word mercury__string__HeadVar__3_3);

static MR_Word MR_CALL 
mercury__string__map__ho14_2_f_in__list_0(
  MR_Word mercury__string__HeadVar__2_2);

static void MR_CALL 
mercury__string__foldl__ho9_4_p_in__list_0(
  MR_Word mercury__string__HeadVar__2_2,
  MR_Integer mercury__string__HeadVar__3_3,
  MR_Integer * mercury__string__HeadVar__4_4);

static MR_Word MR_CALL 
mercury__string__map_corresponding__ho13_3_f_in__list_0(
  MR_Word mercury__string__HeadVar__2_2,
  MR_Word mercury__string__HeadVar__3_3);

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_56_95_95_91_51_93_95_48_2_f_in__list_0(
  MR_Char mercury__string__Var_12,
  MR_Integer mercury__string__Var_13,
  MR_Word mercury__string__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0(
  MR_Char mercury__string__Var_12,
  MR_Integer mercury__string__Var_13,
  MR_Word mercury__string__HeadVar__2_2);

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word mercury__string__Var_20,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__I_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

static void MR_CALL 
mercury__string__foldr_between_2_6_p_4_1(
  void * mercury__string__env_ptr_arg);

static void MR_CALL 
mercury__string__foldr_between_2_6_p_3_1(
  void * mercury__string__env_ptr_arg);

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word mercury__string__Var_20,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__I_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word mercury__string__Var_20,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__I_9,
  MR_Integer mercury__string__End_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

static void MR_CALL 
mercury__string__foldl2_between_2_8_p_5_1(
  void * mercury__string__env_ptr_arg);

static void MR_CALL 
mercury__string__foldl2_between_2_8_p_4_1(
  void * mercury__string__env_ptr_arg);

static void MR_CALL 
mercury__string__foldl_between_2_6_p_4_1(
  void * mercury__string__env_ptr_arg);

static void MR_CALL 
mercury__string__foldl_between_2_6_p_3_1(
  void * mercury__string__env_ptr_arg);

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word mercury__string__Var_20,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__I_9,
  MR_Integer mercury__string__End_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_48_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_String mercury__string__Var_12,
  MR_Word mercury__string__HeadVar__2_2);

static MR_String MR_CALL 
mercury__string__IntroducedFrom__func__word_wrap_loop__5046__1_2_f_0(
  MR_String mercury__string__WordSep_2,
  MR_String mercury__string__LambdaHeadVar__1_60);

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_49_95_95_91_49_44_32_51_93_95_48_6_p_0(
  MR_String mercury__string__Var_21,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__I_9,
  MR_Integer mercury__string__End_10,
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15);

static void MR_CALL 
mercury__string__suffix_length_loop__ho35_4_p_0(
  MR_String mercury__string__S_6,
  MR_Integer mercury__string__I_7,
  MR_Integer * mercury__string__Index_8);

static void MR_CALL 
mercury__string__prefix_length_loop__ho34_4_p_0(
  MR_String mercury__string__S_6,
  MR_Integer mercury__string__I_7,
  MR_Integer * mercury__string__Index_8);

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_51_95_95_91_50_93_95_48_6_p_0(
  MR_Char mercury__string__Var_25,
  MR_String mercury__string__Str_8,
  MR_Integer mercury__string__CurPos_9,
  MR_Integer mercury__string__PastSegEnd_10,
  MR_Word mercury__string__STATE_VARIABLE_Segments_0_16,
  MR_Word * mercury__string__STATE_VARIABLE_Segments_17);

static void MR_CALL 
mercury__string__words_loop__ho38_4_p_0(
  MR_String mercury__string__String_6,
  MR_Integer mercury__string__WordStartPos_7,
  MR_Word * mercury__string__Words_8);

static void MR_CALL 
mercury__string__skip_to_word_end__ho47_4_p_0(
  MR_String mercury__string__String_6,
  MR_Integer mercury__string__CurPos_7,
  MR_Integer * mercury__string__PastWordEndPos_8);

static void MR_CALL 
mercury__string__skip_to_next_word_start__ho37_4_p_0(
  MR_String mercury__string__String_6,
  MR_Integer mercury__string__CurPos_7,
  MR_Integer * mercury__string__NextWordStartPos_8);

static MR_bool MR_CALL 
mercury__string__all_match_loop__ho32_3_p_0(
  MR_String mercury__string__String_5,
  MR_Integer mercury__string__Cur_6);

static void MR_CALL 
mercury__string__foldr_between_2__ho49_6_p_0(
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__I_10,
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15);

static void MR_CALL 
mercury__string__foldr_between_2__ho50_6_p_0(
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__I_10,
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15);

static MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0_10001(
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2);

static void MR_CALL 
mercury__string____Compare____justified_column_0_0_10001(
  MR_Box * mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0_10001(
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2);

static void MR_CALL 
mercury__string____Compare____justify_sense_0_0_10001(
  MR_Box * mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string____Unify____line_0_0_10001(
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2);

static void MR_CALL 
mercury__string____Compare____line_0_0_10001(
  MR_Box * mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0_10001(
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2);

static void MR_CALL 
mercury__string____Compare____poly_type_0_0_10001(
  MR_Box * mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box mercury__string__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0_10001(
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2);

static void MR_CALL 
mercury__string____Compare____text_file_0_0_10001(
  MR_Box * mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box mercury__string__wrapper_arg_3);


static /* final */ const MR_Box mercury__string_scalar_common_1[5][2];

static /* final */ const MR_Box mercury__string_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__string_scalar_common_3[17][4];

static /* final */ const MR_Box mercury__string_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__string_scalar_common_5[1][1];

static /* final */ const MR_Box mercury__string_scalar_common_6[1][7];




static /* final */ const MR_Box mercury__string_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__string_scalar_common_5[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 45)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__string_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string_scalar_common_3[17][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__string_scalar_common_6[0])),
    ((MR_Box) (mercury__string__base_accumulator_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 10))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__string_scalar_common_6[0])),
    ((MR_Box) (mercury__string__base_accumulator_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 16))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__string_scalar_common_6[0])),
    ((MR_Box) (mercury__string__base_accumulator_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__string_scalar_common_6[0])),
    ((MR_Box) (mercury__string__base_accumulator_1_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__string_scalar_common_6[0])),
    ((MR_Box) (mercury__string__base_negative_accumulator_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 10))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__string_scalar_common_6[0])),
    ((MR_Box) (mercury__string__base_negative_accumulator_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 16))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__string_scalar_common_6[0])),
    ((MR_Box) (mercury__string__base_negative_accumulator_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__string_scalar_common_6[0])),
    ((MR_Box) (mercury__string__base_negative_accumulator_1_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__string_scalar_common_6[0])),
    ((MR_Box) (mercury__string__base_accumulator_underscore_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 10))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__string_scalar_common_6[0])),
    ((MR_Box) (mercury__string__base_accumulator_underscore_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 16))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__string_scalar_common_6[0])),
    ((MR_Box) (mercury__string__base_accumulator_underscore_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__string_scalar_common_6[0])),
    ((MR_Box) (mercury__string__base_accumulator_underscore_1_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__string_scalar_common_6[0])),
    ((MR_Box) (mercury__string__base_negative_accumulator_underscore_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 10))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__string_scalar_common_6[0])),
    ((MR_Box) (mercury__string__base_negative_accumulator_underscore_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 16))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__string_scalar_common_6[0])),
    ((MR_Box) (mercury__string__base_negative_accumulator_underscore_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__string_scalar_common_6[0])),
    ((MR_Box) (mercury__string__base_negative_accumulator_underscore_1_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box mercury__string_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "\""))
  },
};

static /* final */ const MR_Box mercury__string_scalar_common_6[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
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

#line 5590 "string.m"
MR_bool 
ML_string_to_float(
  MR_String mercury__string__FloatString_1,
  MR_Float * mercury__string__FloatVal_2)
#line 5590 "string.m"
{
#line 5590 "string.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mercury__string__to_float_2_p_0((MR_String) mercury__string__FloatString_1, (MR_Float *) mercury__string__FloatVal_2);
	return ret_value;
}


static const MR_FA_TypeInfo_Struct1 mercury__string__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__string__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_justified_column_0_0 = {
  (MR_String) "left",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__string__string__field_types_justified_column_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__string__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_justified_column_0_1 = {
  (MR_String) "right",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__string__string__field_types_justified_column_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_0[1] = {
  &mercury__string__string__du_functor_desc_justified_column_0_0
};

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_1[1] = {
  &mercury__string__string__du_functor_desc_justified_column_0_1
};

static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_justified_column_0[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_justified_column_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_justified_column_0_1
  }
};

static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_justified_column_0[2] = {
  &mercury__string__string__du_functor_desc_justified_column_0_0,
  &mercury__string__string__du_functor_desc_justified_column_0_1
};

static const MR_Integer mercury__string__string__functor_number_map_justified_column_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_justified_column_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string____Unify____justified_column_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____justified_column_0_0_10001)),
  (MR_String) "string",
  (MR_String) "justified_column",
  {     mercury__string__string__du_name_ordered_justified_column_0 },
  {     mercury__string__string__du_ptag_ordered_justified_column_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__string__functor_number_map_justified_column_0
};

static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_0 = {
  (MR_String) "just_left",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_1 = {
  (MR_String) "just_right",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr mercury__string__string__enum_value_ordered_justify_sense_0[2] = {
  &mercury__string__string__enum_functor_desc_justify_sense_0_0,
  &mercury__string__string__enum_functor_desc_justify_sense_0_1
};

static const MR_EnumFunctorDescPtr mercury__string__string__enum_name_ordered_justify_sense_0[2] = {
  &mercury__string__string__enum_functor_desc_justify_sense_0_0,
  &mercury__string__string__enum_functor_desc_justify_sense_0_1
};

static const MR_Integer mercury__string__string__functor_number_map_justify_sense_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_justify_sense_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string____Unify____justify_sense_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____justify_sense_0_0_10001)),
  (MR_String) "string",
  (MR_String) "justify_sense",
  {     mercury__string__string__enum_name_ordered_justify_sense_0 },
  {     mercury__string__string__enum_value_ordered_justify_sense_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__string__functor_number_map_justify_sense_0
};

static const MR_Integer mercury__string__string__functor_number_map_line_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_line_0 = {
  (MR_String) "line",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_line_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__string____Unify____line_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____line_0_0_10001)),
  (MR_String) "string",
  (MR_String) "line",
  {     &mercury__string__string__notag_functor_desc_line_0 },
  {     &mercury__string__string__notag_functor_desc_line_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__string__functor_number_map_line_0
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_0 = {
  (MR_String) "f",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__string__string__field_types_poly_type_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_1 = {
  (MR_String) "i",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__string__string__field_types_poly_type_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_2 = {
  (MR_String) "s",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__string__string__field_types_poly_type_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_3 = {
  (MR_String) "c",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mercury__string__string__field_types_poly_type_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_0[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_0
};

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_1[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_1
};

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_2[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_2
};

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_3[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_3
};

static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_poly_type_0[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_poly_type_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_poly_type_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_poly_type_0_2
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_poly_type_0_3
  }
};

static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_poly_type_0[4] = {
  &mercury__string__string__du_functor_desc_poly_type_0_3,
  &mercury__string__string__du_functor_desc_poly_type_0_0,
  &mercury__string__string__du_functor_desc_poly_type_0_1,
  &mercury__string__string__du_functor_desc_poly_type_0_2
};

static const MR_Integer mercury__string__string__functor_number_map_poly_type_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_poly_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string____Unify____poly_type_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____poly_type_0_0_10001)),
  (MR_String) "string",
  (MR_String) "poly_type",
  {     mercury__string__string__du_name_ordered_poly_type_0 },
  {     mercury__string__string__du_ptag_ordered_poly_type_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__string__string__functor_number_map_poly_type_0
};

static const MR_Integer mercury__string__string__functor_number_map_text_file_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_text_file_0 = {
  (MR_String) "text_file",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_text_file_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__string____Unify____text_file_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____text_file_0_0_10001)),
  (MR_String) "string",
  (MR_String) "text_file",
  {     &mercury__string__string__notag_functor_desc_text_file_0 },
  {     &mercury__string__string__notag_functor_desc_text_file_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__string__functor_number_map_text_file_0
};

static MR_Integer MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__string____Compare____text_file_0_0(
  MR_Word * mercury__string__HeadVar__1_1,
  MR_Word mercury__string__HeadVar__2_2,
  MR_Word mercury__string__HeadVar__3_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__CastX_6 = (MR_Integer) mercury__string__HeadVar__2_2;
    MR_Integer mercury__string__CastY_7 = (MR_Integer) mercury__string__HeadVar__3_3;

    mercury__string__succeeded = (mercury__string__CastX_6 == mercury__string__CastY_7);
    if (mercury__string__succeeded)
      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String mercury__string__ArgX1_4 = (MR_String) mercury__string__HeadVar__2_2;
      MR_String mercury__string__ArgY1_5 = (MR_String) mercury__string__HeadVar__3_3;
      MR_Integer mercury__string__V_7_12;

{
#define MR_PROC_LABEL mercury__string____Compare____text_file_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__ArgX1_4 ;
	S2 =  mercury__string__ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_12  = Res;
}
      mercury__string__succeeded = (mercury__string__V_7_12 < (MR_Integer) 0);
      if (mercury__string__succeeded)
        *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        mercury__string__succeeded = (mercury__string__V_7_12 == (MR_Integer) 0);
        if (mercury__string__succeeded)
          *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0(
  MR_Word mercury__string__HeadVar__1_1,
  MR_Word mercury__string__HeadVar__2_2)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__CastX_5 = (MR_Integer) mercury__string__HeadVar__1_1;
    MR_Integer mercury__string__CastY_6 = (MR_Integer) mercury__string__HeadVar__2_2;

    mercury__string__succeeded = (mercury__string__CastX_5 == mercury__string__CastY_6);
    if (mercury__string__succeeded)
      mercury__string__succeeded = MR_TRUE;
    else
    {
      MR_String mercury__string__ArgX1_3 = (MR_String) mercury__string__HeadVar__1_1;
      MR_String mercury__string__ArgY1_4 = (MR_String) mercury__string__HeadVar__2_2;

      mercury__string__succeeded = (strcmp(mercury__string__ArgX1_3, mercury__string__ArgY1_4) == 0);
    }
    return mercury__string__succeeded;
  }
}

void MR_CALL 
mercury__string____Compare____poly_type_0_0(
  MR_Word * mercury__string__HeadVar__1_1,
  MR_Word mercury__string__HeadVar__2_2,
  MR_Word mercury__string__HeadVar__3_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__CastX_36 = (MR_Integer) mercury__string__HeadVar__2_2;
    MR_Integer mercury__string__CastY_37 = (MR_Integer) mercury__string__HeadVar__3_3;

    mercury__string__succeeded = (mercury__string__CastX_36 == mercury__string__CastY_37);
    if (mercury__string__succeeded)
      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__string__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Float mercury__string__Var_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__string__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Float mercury__string__ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__string__succeeded = (mercury__string__Var_43 < mercury__string__ArgY1_5);
                  if (mercury__string__succeeded)
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    mercury__string__succeeded = (mercury__string__Var_43 > mercury__string__ArgY1_5);
                    if (mercury__string__succeeded)
                      *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 1:
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mercury__string__Var_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__string__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer mercury__string__ArgY1_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__string__succeeded = (mercury__string__Var_44 < mercury__string__ArgY1_15);
                  if (mercury__string__succeeded)
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    mercury__string__succeeded = (mercury__string__Var_44 == mercury__string__ArgY1_15);
                    if (mercury__string__succeeded)
                      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 2:
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mercury__string__Var_45 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__string__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String mercury__string__ArgY1_25 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__string__V_7_60;

{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__Var_45 ;
	S2 =  mercury__string__ArgY1_25 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_60  = Res;
}
                  mercury__string__succeeded = (mercury__string__V_7_60 < (MR_Integer) 0);
                  if (mercury__string__succeeded)
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    mercury__string__succeeded = (mercury__string__V_7_60 == (MR_Integer) 0);
                    if (mercury__string__succeeded)
                      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 3:
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Char mercury__string__Var_42 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__string__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Char mercury__string__ArgY1_35 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__string__V_7_49;
                  MR_Integer mercury__string__V_8_50;

{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__Var_42 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_49  = Int;
}
{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__ArgY1_35 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_50  = Int;
}
                  mercury__string__succeeded = (mercury__string__V_7_49 < mercury__string__V_8_50);
                  if (mercury__string__succeeded)
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    mercury__string__succeeded = (mercury__string__V_7_49 == mercury__string__V_8_50);
                    if (mercury__string__succeeded)
                      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0(
  MR_Word mercury__string__HeadVar__1_1,
  MR_Word mercury__string__HeadVar__2_2)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__CastX_11 = (MR_Integer) mercury__string__HeadVar__1_1;
    MR_Integer mercury__string__CastY_12 = (MR_Integer) mercury__string__HeadVar__2_2;

    mercury__string__succeeded = (mercury__string__CastX_11 == mercury__string__CastY_12);
    if (mercury__string__succeeded)
      mercury__string__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__string__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Float mercury__string__ArgX1_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
            MR_Float mercury__string__ArgY1_4;

            mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (mercury__string__succeeded)
            {
              mercury__string__ArgY1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
              mercury__string__succeeded = (mercury__string__ArgX1_3 == mercury__string__ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer mercury__string__ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__string__ArgY1_6;

            mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__string__succeeded)
            {
              mercury__string__ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
              mercury__string__succeeded = (mercury__string__ArgX1_5 == mercury__string__ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mercury__string__ArgX1_7 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__string__ArgY1_8;

            mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__string__succeeded)
            {
              mercury__string__ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
              mercury__string__succeeded = (strcmp(mercury__string__ArgX1_7, mercury__string__ArgY1_8) == 0);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Char mercury__string__ArgX1_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
            MR_Char mercury__string__ArgY1_10;

            mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (mercury__string__succeeded)
            {
              mercury__string__ArgY1_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
              mercury__string__succeeded = (mercury__string__ArgX1_9 == mercury__string__ArgY1_10);
            }
          }
          break;
      }
    return mercury__string__succeeded;
  }
}

void MR_CALL 
mercury__string____Compare____line_0_0(
  MR_Word * mercury__string__HeadVar__1_1,
  MR_Word mercury__string__HeadVar__2_2,
  MR_Word mercury__string__HeadVar__3_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__CastX_6 = (MR_Integer) mercury__string__HeadVar__2_2;
    MR_Integer mercury__string__CastY_7 = (MR_Integer) mercury__string__HeadVar__3_3;

    mercury__string__succeeded = (mercury__string__CastX_6 == mercury__string__CastY_7);
    if (mercury__string__succeeded)
      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String mercury__string__ArgX1_4 = (MR_String) mercury__string__HeadVar__2_2;
      MR_String mercury__string__ArgY1_5 = (MR_String) mercury__string__HeadVar__3_3;
      MR_Integer mercury__string__V_7_12;

{
#define MR_PROC_LABEL mercury__string____Compare____line_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__ArgX1_4 ;
	S2 =  mercury__string__ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_12  = Res;
}
      mercury__string__succeeded = (mercury__string__V_7_12 < (MR_Integer) 0);
      if (mercury__string__succeeded)
        *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        mercury__string__succeeded = (mercury__string__V_7_12 == (MR_Integer) 0);
        if (mercury__string__succeeded)
          *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
        else
          *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string____Unify____line_0_0(
  MR_Word mercury__string__HeadVar__1_1,
  MR_Word mercury__string__HeadVar__2_2)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__CastX_5 = (MR_Integer) mercury__string__HeadVar__1_1;
    MR_Integer mercury__string__CastY_6 = (MR_Integer) mercury__string__HeadVar__2_2;

    mercury__string__succeeded = (mercury__string__CastX_5 == mercury__string__CastY_6);
    if (mercury__string__succeeded)
      mercury__string__succeeded = MR_TRUE;
    else
    {
      MR_String mercury__string__ArgX1_3 = (MR_String) mercury__string__HeadVar__1_1;
      MR_String mercury__string__ArgY1_4 = (MR_String) mercury__string__HeadVar__2_2;

      mercury__string__succeeded = (strcmp(mercury__string__ArgX1_3, mercury__string__ArgY1_4) == 0);
    }
    return mercury__string__succeeded;
  }
}

void MR_CALL 
mercury__string____Compare____justify_sense_0_0(
  MR_Word * mercury__string__HeadVar__1_1,
  MR_Word mercury__string__HeadVar__2_2,
  MR_Word mercury__string__HeadVar__3_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__Cast_HeadVar1_4 = (MR_Integer) mercury__string__HeadVar__2_2;
    MR_Integer mercury__string__Cast_HeadVar2_5 = (MR_Integer) mercury__string__HeadVar__3_3;

    mercury__string__succeeded = (mercury__string__Cast_HeadVar1_4 < mercury__string__Cast_HeadVar2_5);
    if (mercury__string__succeeded)
      *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__string__succeeded = (mercury__string__Cast_HeadVar1_4 == mercury__string__Cast_HeadVar2_5);
      if (mercury__string__succeeded)
        *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0(
  MR_Word mercury__string__HeadVar__2_1,
  MR_Word mercury__string__HeadVar__2_2)
{
  {
    MR_bool mercury__string__succeeded = (mercury__string__HeadVar__2_1 == mercury__string__HeadVar__2_2);

    return mercury__string__succeeded;
  }
}

void MR_CALL 
mercury__string____Compare____justified_column_0_0(
  MR_Word * mercury__string__HeadVar__1_1,
  MR_Word mercury__string__HeadVar__2_2,
  MR_Word mercury__string__HeadVar__3_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__CastX_12 = (MR_Integer) mercury__string__HeadVar__2_2;
    MR_Integer mercury__string__CastY_13 = (MR_Integer) mercury__string__HeadVar__3_3;

    mercury__string__succeeded = (mercury__string__CastX_12 == mercury__string__CastY_13);
    if (mercury__string__succeeded)
      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word mercury__string__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word mercury__string__TypeInfo_15_15 = (MR_Word) &mercury__string_scalar_common_1[0];
        MR_Word mercury__string__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

        mercury__builtin__compare_3_p_0(mercury__string__TypeInfo_15_15, mercury__string__HeadVar__1_1, ((MR_Box) (mercury__string__Var_16)), ((MR_Box) (mercury__string__ArgY1_5)));
      }
      else
        *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word mercury__string__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
        *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word mercury__string__TypeInfo_14_14 = (MR_Word) &mercury__string_scalar_common_1[0];
        MR_Word mercury__string__ArgY1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

        mercury__builtin__compare_3_p_0(mercury__string__TypeInfo_14_14, mercury__string__HeadVar__1_1, ((MR_Box) (mercury__string__Var_17)), ((MR_Box) (mercury__string__ArgY1_11)));
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0(
  MR_Word mercury__string__HeadVar__1_1,
  MR_Word mercury__string__HeadVar__2_2)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__CastX_7 = (MR_Integer) mercury__string__HeadVar__1_1;
    MR_Integer mercury__string__CastY_8 = (MR_Integer) mercury__string__HeadVar__2_2;

    mercury__string__succeeded = (mercury__string__CastX_7 == mercury__string__CastY_8);
    if (mercury__string__succeeded)
      mercury__string__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__string__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word mercury__string__TypeInfo_9_9;
      MR_Word mercury__string__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mercury__string__ArgY1_4;

      mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (mercury__string__succeeded)
      {
        mercury__string__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
        mercury__string__TypeInfo_9_9 = (MR_Word) &mercury__string_scalar_common_1[0];
        mercury__string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__TypeInfo_9_9, ((MR_Box) (mercury__string__ArgX1_3)), ((MR_Box) (mercury__string__ArgY1_4)));
      }
    }
    else
    {
      MR_Word mercury__string__TypeInfo_10_10;
      MR_Word mercury__string__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mercury__string__ArgY1_6;

      mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (mercury__string__succeeded)
      {
        mercury__string__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
        mercury__string__TypeInfo_10_10 = (MR_Word) &mercury__string_scalar_common_1[0];
        mercury__string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__TypeInfo_10_10, ((MR_Box) (mercury__string__ArgX1_5)), ((MR_Box) (mercury__string__ArgY1_6)));
      }
    }
    return mercury__string__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__string__max_precision_0_f_0(void)
{
  {
    MR_Integer mercury__string__HeadVar__1_1 = ((MR_Integer) 15 + (MR_Integer) 2);

    return mercury__string__HeadVar__1_1;
  }
}

MR_Integer MR_CALL 
mercury__string__min_precision_0_f_0(void)
{
  {
    return (MR_Integer) 15;
  }
}

MR_String MR_CALL 
mercury__string__float_to_string_loop_2_f_0(
  MR_Integer mercury__string__Prec_4,
  MR_Float mercury__string__Float_5)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;
      MR_String mercury__string__String_6;
      MR_String mercury__string__Tmp_7;
      MR_String mercury__string__Var_8;
      MR_Word mercury__string__Var_9;
      MR_String mercury__string__Var_11;
      MR_String mercury__string__Var_12;
      MR_Word mercury__string__Var_14;
      MR_Word mercury__string__Var_15;
      MR_Integer mercury__string__Var_18;

      mercury__string__int_to_base_string_3_p_0(mercury__string__Prec_4, (MR_Integer) 10, &mercury__string__Var_12);
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Var_12 ;
	S2 =  (MR_String) "g" ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_11  = S3;
}
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "%#." ;
	S2 =  mercury__string__Var_11 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_8  = S3;
}
      {
        mercury__string__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__string__Var_14, 0) = MR_box_float(mercury__string__Float_5);
      }
      mercury__string__Var_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__string__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__string__Var_9, 0) = ((MR_Box) (mercury__string__Var_14));
        MR_hl_field(MR_mktag(1), mercury__string__Var_9, 1) = ((MR_Box) (mercury__string__Var_15));
      }
      mercury__string__format__format_impl_3_p_0(mercury__string__Var_8, mercury__string__Var_9, &mercury__string__Tmp_7);
      mercury__string__Var_18 = ((MR_Integer) 15 + (MR_Integer) 2);
      mercury__string__succeeded = (mercury__string__Prec_4 == mercury__string__Var_18);
      if (mercury__string__succeeded)
        mercury__string__String_6 = mercury__string__Tmp_7;
      else
      {
        MR_Float mercury__string__Var_19;

{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__Tmp_7 ;
		{
{
    /*
    ** The %c checks for any erroneous characters appearing after the float;
    ** if there are then sscanf() will return 2 rather than 1.
    */
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        /* MR_TRUE if sscanf succeeds, MR_FALSE otherwise */
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Var_19  = FloatVal;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = (mercury__string__Float_5 == mercury__string__Var_19);
        if (mercury__string__succeeded)
          mercury__string__String_6 = mercury__string__Tmp_7;
        else
        {
          MR_Integer mercury__string__Var_16 = (mercury__string__Prec_4 + (MR_Integer) 1);

          /* direct tailcall eliminated */
          {
            MR_Integer mercury__string__next_value_of_Prec_4 = mercury__string__Var_16;

            mercury__string__Prec_4 = mercury__string__next_value_of_Prec_4;
          }
          continue;
        }
      }
      return mercury__string__String_6;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__string__accumulate_negative_int_underscore_4_p_0(
  MR_Integer mercury__string__Base_5,
  MR_Char mercury__string__Char_6,
  MR_Integer mercury__string__N0_7,
  MR_Integer * mercury__string__N_8)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__M_9;

    mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__Base_5, mercury__string__Char_6, &mercury__string__M_9);
    if (mercury__string__succeeded)
    {
      MR_Integer mercury__string__Var_10 = (mercury__string__Base_5 * mercury__string__N0_7);

      *mercury__string__N_8 = (mercury__string__Var_10 - mercury__string__M_9);
      mercury__string__succeeded = (*mercury__string__N_8 <= mercury__string__N0_7);
    }
    else
    {
      mercury__string__succeeded = (mercury__string__Char_6 == (MR_Char) 95);
      if (mercury__string__succeeded)
      {
        *mercury__string__N_8 = mercury__string__N0_7;
        mercury__string__succeeded = MR_TRUE;
      }
    }
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__accumulate_int_underscore_4_p_0(
  MR_Integer mercury__string__Base_5,
  MR_Char mercury__string__Char_6,
  MR_Integer mercury__string__N0_7,
  MR_Integer * mercury__string__N_8)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__M_9;

    mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__Base_5, mercury__string__Char_6, &mercury__string__M_9);
    if (mercury__string__succeeded)
    {
      MR_Integer mercury__string__Var_10 = (mercury__string__Base_5 * mercury__string__N0_7);

      *mercury__string__N_8 = (mercury__string__Var_10 + mercury__string__M_9);
      mercury__string__succeeded = (mercury__string__N0_7 <= *mercury__string__N_8);
    }
    else
    {
      mercury__string__succeeded = (mercury__string__Char_6 == (MR_Char) 95);
      if (mercury__string__succeeded)
      {
        *mercury__string__N_8 = mercury__string__N0_7;
        mercury__string__succeeded = MR_TRUE;
      }
    }
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__accumulate_negative_int_4_p_0(
  MR_Integer mercury__string__Base_5,
  MR_Char mercury__string__Char_6,
  MR_Integer mercury__string__N0_7,
  MR_Integer * mercury__string__N_8)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__M_9;
    MR_Integer mercury__string__Var_10;

    mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__Base_5, mercury__string__Char_6, &mercury__string__M_9);
    if (mercury__string__succeeded)
    {
      mercury__string__Var_10 = (mercury__string__Base_5 * mercury__string__N0_7);
      *mercury__string__N_8 = (mercury__string__Var_10 - mercury__string__M_9);
      mercury__string__succeeded = (*mercury__string__N_8 <= mercury__string__N0_7);
    }
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__accumulate_int_4_p_0(
  MR_Integer mercury__string__Base_5,
  MR_Char mercury__string__Char_6,
  MR_Integer mercury__string__N0_7,
  MR_Integer * mercury__string__N_8)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__M_9;
    MR_Integer mercury__string__Var_10;

    mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__Base_5, mercury__string__Char_6, &mercury__string__M_9);
    if (mercury__string__succeeded)
    {
      mercury__string__Var_10 = (mercury__string__Base_5 * mercury__string__N0_7);
      *mercury__string__N_8 = (mercury__string__Var_10 + mercury__string__M_9);
      mercury__string__succeeded = (mercury__string__N0_7 <= *mercury__string__N_8);
    }
    return mercury__string__succeeded;
  }
}

void MR_CALL 
mercury__string__max_str_length_3_p_0(
  MR_String mercury__string__Str_4,
  MR_Integer mercury__string__PrevMaxLen_5,
  MR_Integer * mercury__string__MaxLen_6)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__Length_7;

    mercury__string__count_codepoints_2_p_0(mercury__string__Str_4, &mercury__string__Length_7);
    mercury__string__succeeded = (mercury__string__Length_7 > mercury__string__PrevMaxLen_5);
    if (mercury__string__succeeded)
      *mercury__string__MaxLen_6 = mercury__string__Length_7;
    else
      *mercury__string__MaxLen_6 = mercury__string__PrevMaxLen_5;
  }
}

MR_String MR_CALL 
mercury__string__lpad_3_f_0(
  MR_Char mercury__string__Chr_5,
  MR_Integer mercury__string__N_6,
  MR_String mercury__string__Str_7)
{
  {
    MR_bool mercury__string__succeeded;
    MR_String mercury__string__HeadVar__4_4;
    MR_Integer mercury__string__Length_16;

    mercury__string__count_codepoints_2_p_0(mercury__string__Str_7, &mercury__string__Length_16);
    mercury__string__succeeded = (mercury__string__Length_16 < mercury__string__N_6);
    if (mercury__string__succeeded)
    {
      MR_Integer mercury__string__Count_17 = (mercury__string__N_6 - mercury__string__Length_16);
      MR_String mercury__string__PadString_18;

      mercury__string__duplicate_char_3_p_0(mercury__string__Chr_5, mercury__string__Count_17, &mercury__string__PadString_18);
{
#define MR_PROC_LABEL mercury__string__lpad_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_18 ;
	S2 =  mercury__string__Str_7 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
}
    }
    else
      mercury__string__HeadVar__4_4 = mercury__string__Str_7;
    return mercury__string__HeadVar__4_4;
  }
}

MR_String MR_CALL 
mercury__string__rpad_3_f_0(
  MR_Char mercury__string__Chr_5,
  MR_Integer mercury__string__N_6,
  MR_String mercury__string__Str_7)
{
  {
    MR_bool mercury__string__succeeded;
    MR_String mercury__string__HeadVar__4_4;
    MR_Integer mercury__string__Length_16;

    mercury__string__count_codepoints_2_p_0(mercury__string__Str_7, &mercury__string__Length_16);
    mercury__string__succeeded = (mercury__string__Length_16 < mercury__string__N_6);
    if (mercury__string__succeeded)
    {
      MR_Integer mercury__string__Count_17 = (mercury__string__N_6 - mercury__string__Length_16);
      MR_String mercury__string__PadString_18;

      mercury__string__duplicate_char_3_p_0(mercury__string__Chr_5, mercury__string__Count_17, &mercury__string__PadString_18);
{
#define MR_PROC_LABEL mercury__string__rpad_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str_7 ;
	S2 =  mercury__string__PadString_18 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
}
    }
    else
      mercury__string__HeadVar__4_4 = mercury__string__Str_7;
    return mercury__string__HeadVar__4_4;
  }
}

MR_String MR_CALL 
mercury__string__join_rev_columns_3_f_0(
  MR_String mercury__string__Separator_5,
  MR_String mercury__string__Col1_6,
  MR_String mercury__string__Col2_7)
{
  {
    MR_String mercury__string__HeadVar__4_4;
    MR_String mercury__string__Var_8;

{
#define MR_PROC_LABEL mercury__string__join_rev_columns_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Separator_5 ;
	S2 =  mercury__string__Col1_6 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_8  = S3;
}
{
#define MR_PROC_LABEL mercury__string__join_rev_columns_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Col2_7 ;
	S2 =  mercury__string__Var_8 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
}
    return mercury__string__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__string__project_column_strings_1_f_0(
  MR_Word mercury__string__HeadVar__1_1)
{
  {
    MR_Word mercury__string__Strings_2;
    MR_Word mercury__string__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__string__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 1)));

    if (((MR_tag((MR_Word) mercury__string__Var_10)) == (MR_mktag((MR_Integer) 0))))
      mercury__string__Strings_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__Var_10, (MR_Integer) 0)));
    else
      mercury__string__Strings_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__Var_10, (MR_Integer) 0)));
    return mercury__string__Strings_2;
  }
}

void MR_CALL 
mercury__string__char_list_to_lower_2_p_0(
  MR_Word mercury__string__HeadVar__1_1,
  MR_Word * mercury__string__HeadVar__2_2)
{
  {
    MR_bool mercury__string__succeeded;

    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Char mercury__string__X_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mercury__string__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
      MR_Char mercury__string__Y_5;
      MR_Word mercury__string__Ys_6;
      MR_Char mercury__string__V_5_9;

      mercury__string__succeeded = mercury__char__lower_upper_2_p_1(&mercury__string__V_5_9, mercury__string__X_3);
      if (mercury__string__succeeded)
        mercury__string__Y_5 = mercury__string__V_5_9;
      else
        mercury__string__Y_5 = mercury__string__X_3;
      mercury__string__char_list_to_lower_2_p_0(mercury__string__Xs_4, &mercury__string__Ys_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *mercury__string__HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__Y_5));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Ys_6));
      }
    }
  }
}

void MR_CALL 
mercury__string__char_list_to_upper_2_p_0(
  MR_Word mercury__string__HeadVar__1_1,
  MR_Word * mercury__string__HeadVar__2_2)
{
  {
    MR_bool mercury__string__succeeded;

    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Char mercury__string__X_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mercury__string__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
      MR_Char mercury__string__Y_5;
      MR_Word mercury__string__Ys_6;
      MR_Char mercury__string__V_5_9;

      mercury__string__succeeded = mercury__char__lower_upper_2_p_0(mercury__string__X_3, &mercury__string__V_5_9);
      if (mercury__string__succeeded)
        mercury__string__Y_5 = mercury__string__V_5_9;
      else
        mercury__string__Y_5 = mercury__string__X_3;
      mercury__string__char_list_to_upper_2_p_0(mercury__string__Xs_4, &mercury__string__Ys_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *mercury__string__HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__Y_5));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Ys_6));
      }
    }
  }
}

MR_Word MR_CALL 
mercury__string__between_loop_3_f_0(
  MR_Integer mercury__string__I_5,
  MR_Integer mercury__string__End_6,
  MR_String mercury__string__Str_7)
{
  {
    MR_bool mercury__string__succeeded = (mercury__string__I_5 < mercury__string__End_6);
    MR_Word mercury__string__Chars_8;
    MR_Integer mercury__string__J_9;
    MR_Char mercury__string__C_10;

    if (mercury__string__succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__between_loop_3_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_7 ;
	Index =  mercury__string__I_5 ;
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
	 mercury__string__J_9  = NextIndex;
	 mercury__string__C_10  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
        mercury__string__succeeded = (mercury__string__J_9 <= mercury__string__End_6);
    }
    if (mercury__string__succeeded)
    {
      MR_Word mercury__string__Cs_11;

      mercury__string__Cs_11 = mercury__string__between_loop_3_f_0(mercury__string__J_9, mercury__string__End_6, mercury__string__Str_7);
      {
        mercury__string__Chars_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__string__Chars_8, 0) = ((MR_Box) (MR_Word) (mercury__string__C_10));
        MR_hl_field(MR_mktag(1), mercury__string__Chars_8, 1) = ((MR_Box) (mercury__string__Cs_11));
      }
    }
    else
      mercury__string__Chars_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return mercury__string__Chars_8;
  }
}

MR_String MR_CALL 
mercury__string__join_list_loop_2_f_0(
  MR_String mercury__string__Sep_1,
  MR_Word mercury__string__HeadVar__2_2)
{
  {
    MR_String mercury__string__HeadVar__3_3;

    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__string__HeadVar__3_3 = (MR_String) "";
    else
    {
      MR_String mercury__string__H_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__string__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
      MR_String mercury__string__Var_8;
      MR_String mercury__string__Var_9;

      mercury__string__Var_9 = mercury__string__join_list_loop_2_f_0(mercury__string__Sep_1, mercury__string__T_7);
{
#define MR_PROC_LABEL mercury__string__join_list_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__H_6 ;
	S2 =  mercury__string__Var_9 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_8  = S3;
}
{
#define MR_PROC_LABEL mercury__string__join_list_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Sep_1 ;
	S2 =  mercury__string__Var_8 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__3_3  = S3;
}
    }
    return mercury__string__HeadVar__3_3;
  }
}

static void MR_CALL 
mercury__string__mercury_append_3_p_3_1(
  void * mercury__string__env_ptr_arg)
{
  {
    struct mercury__string__mercury_append_3_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__mercury_append_3_p_3_env_0_s *) mercury__string__env_ptr_arg;

    {
      MR_String mercury__string__Str0_27;
      MR_String mercury__string__Str0_38;

      (mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded = mercury__string__semidet_from_char_list_2_p_0((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__XList_7, &mercury__string__Str0_27);
      if ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded)
        *((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__X_4) = mercury__string__Str0_27;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_char_list\'/2", (MR_String) "null character in list");
          return;
        }
      }
      (mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded = mercury__string__semidet_from_char_list_2_p_0((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__YList_8, &mercury__string__Str0_38);
      if ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded)
        *((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__Y_5) = mercury__string__Str0_38;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_char_list\'/2", (MR_String) "null character in list");
          return;
        }
      }
      ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__cont)((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__string__mercury_append_3_p_3(
  MR_String * mercury__string__X_4,
  MR_String * mercury__string__Y_5,
  MR_String mercury__string__Z_6,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    struct mercury__string__mercury_append_3_p_3_env_0_s mercury__string__env;

    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__X_4 = mercury__string__X_4;
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__Y_5 = mercury__string__Y_5;
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__cont = mercury__string__cont;
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
    {
      MR_Word mercury__string__TypeCtorInfo_10_10;
      MR_Word mercury__string__ZList_9;

{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_3

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
}
      mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
      mercury__list__append_3_p_4(mercury__string__TypeCtorInfo_10_10, &(mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__XList_7, &(mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__YList_8, mercury__string__ZList_9, mercury__string__mercury_append_3_p_3_1, &mercury__string__env);
    }
  }
}

void MR_CALL 
mercury__string__mercury_append_3_p_2(
  MR_String mercury__string__X_4,
  MR_String mercury__string__Y_5,
  MR_String * mercury__string__Z_6)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Word mercury__string__TypeCtorInfo_10_10;
    MR_Word mercury__string__XList_7;
    MR_Word mercury__string__YList_8;
    MR_Word mercury__string__ZList_9;
    MR_String mercury__string__Str0_35;

{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_2

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
}
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_2

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Y_5 ;
		{
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__YList_8  = CharList;
}
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
    mercury__list__append_3_p_1(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, mercury__string__YList_8, &mercury__string__ZList_9);
    mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ZList_9, &mercury__string__Str0_35);
    if (mercury__string__succeeded)
      *mercury__string__Z_6 = mercury__string__Str0_35;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_char_list\'/2", (MR_String) "null character in list");
        return;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string__mercury_append_3_p_1(
  MR_String mercury__string__X_4,
  MR_String * mercury__string__Y_5,
  MR_String mercury__string__Z_6)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Word mercury__string__TypeCtorInfo_10_10;
    MR_Word mercury__string__XList_7;
    MR_Word mercury__string__YList_8;
    MR_Word mercury__string__ZList_9;
    MR_String mercury__string__Str0_35;

{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
}
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
}
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
    mercury__string__succeeded = mercury__list__append_3_p_3(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, &mercury__string__YList_8, mercury__string__ZList_9);
    if (mercury__string__succeeded)
    {
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__YList_8, &mercury__string__Str0_35);
      if (mercury__string__succeeded)
        *mercury__string__Y_5 = mercury__string__Str0_35;
      else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_char_list\'/2", (MR_String) "null character in list");
      }
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__mercury_append_3_p_0(
  MR_String mercury__string__X_4,
  MR_String mercury__string__Y_5,
  MR_String mercury__string__Z_6)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Word mercury__string__TypeCtorInfo_10_10;
    MR_Word mercury__string__XList_7;
    MR_Word mercury__string__YList_8;
    MR_Word mercury__string__ZList_9;

{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
}
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Y_5 ;
		{
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__YList_8  = CharList;
}
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
}
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
    mercury__string__succeeded = mercury__list__append_3_p_2(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, mercury__string__YList_8, mercury__string__ZList_9);
    return mercury__string__succeeded;
  }
}

void MR_CALL 
mercury__string__append_ooi_3_p_0(
  MR_String * mercury__string__S1_4,
  MR_String * mercury__string__S2_5,
  MR_String mercury__string__S3_6,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_Integer mercury__string__S3Len_7;

{
#define MR_PROC_LABEL mercury__string__append_ooi_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S3_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__S3Len_7  = Length;
}
    mercury__string__append_ooi_2_5_p_0((MR_Integer) 0, mercury__string__S3Len_7, mercury__string__S1_4, mercury__string__S2_5, mercury__string__S3_6, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__append_iio_3_p_0(
  MR_String mercury__string__S1_1,
  MR_String mercury__string__S2_2,
  MR_String * mercury__string__S3_3)
{
  {
{
#define MR_PROC_LABEL mercury__string__append_iio_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_1 ;
	S2 =  mercury__string__S2_2 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S3_3  = S3;
}
  }
}

MR_bool MR_CALL 
mercury__string__append_ioi_3_p_0(
  MR_String mercury__string__S1_1,
  MR_String * mercury__string__S2_2,
  MR_String mercury__string__S3_3)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__append_ioi_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__S1_1 ;
	S3 =  mercury__string__S3_3 ;
		{
{
    size_t len_1, len_2, len_3;

    len_1 = strlen(S1);
    if (strncmp(S1, S3, len_1) != 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        len_3 = strlen(S3);
        len_2 = len_3 - len_1;
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(S2, len_2, MR_ALLOC_ID);
        strcpy(S2, S3 + len_1);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__S2_2  = S2;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__append_iii_3_p_0(
  MR_String mercury__string__S1_1,
  MR_String mercury__string__S2_2,
  MR_String mercury__string__S3_3)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__append_iii_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__S1_1 ;
	S2 =  mercury__string__S2_2 ;
	S3 =  mercury__string__S3_3 ;
		{
{
    size_t len_1 = strlen(S1);
    SUCCESS_INDICATOR = (
        strncmp(S1, S3, len_1) == 0 &&
        strcmp(S2, S3 + len_1) == 0
    );
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__sub_string_search_start_loop_6_p_0(
  MR_String mercury__string__String_7,
  MR_String mercury__string__SubString_8,
  MR_Integer mercury__string__I_9,
  MR_Integer mercury__string__Len_10,
  MR_Integer mercury__string__SubLen_11,
  MR_Integer * mercury__string__Index_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__Len_10);
      MR_Integer mercury__string__Var_13;
      MR_String mercury__string__Var_17;

      if (mercury__string__succeeded)
      {
        mercury__string__Var_13 = (mercury__string__I_9 + mercury__string__SubLen_11);
        mercury__string__between_4_p_0(mercury__string__String_7, mercury__string__I_9, mercury__string__Var_13, &mercury__string__Var_17);
        mercury__string__succeeded = (strcmp(mercury__string__SubString_8, mercury__string__Var_17) == 0);
        if (mercury__string__succeeded)
        {
          *mercury__string__Index_12 = mercury__string__I_9;
          mercury__string__succeeded = MR_TRUE;
        }
        else
        {
          MR_Integer mercury__string__Var_14 = (mercury__string__I_9 + (MR_Integer) 1);

          /* direct tailcall eliminated */
          {
            MR_Integer mercury__string__next_value_of_I_9 = mercury__string__Var_14;

            mercury__string__I_9 = mercury__string__next_value_of_I_9;
          }
          continue;
        }
      }
      return mercury__string__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__string__contains_char_3_p_0(
  MR_String mercury__string__Str_4,
  MR_Char mercury__string__Char_5,
  MR_Integer mercury__string__I_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;
      MR_Integer mercury__string__J_7;
      MR_Char mercury__string__IndexChar_8;

{
#define MR_PROC_LABEL mercury__string__contains_char_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_4 ;
	Index =  mercury__string__I_6 ;
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
	 mercury__string__J_7  = NextIndex;
	 mercury__string__IndexChar_8  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
      {
        mercury__string__succeeded = (mercury__string__IndexChar_8 == mercury__string__Char_5);
        if (mercury__string__succeeded)
          mercury__string__succeeded = MR_TRUE;
        else
        {
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__string__next_value_of_I_6 = mercury__string__J_7;

            mercury__string__I_6 = mercury__string__next_value_of_I_6;
          }
          continue;
        }
      }
      return mercury__string__succeeded;
    }
    break;
  }
}

MR_Integer MR_CALL 
mercury__string__keep_30_bits_1_f_0(
  MR_Integer mercury__string__N_3)
{
  {
    MR_Integer mercury__string__HeadVar__2_2;
    MR_Integer mercury__string__Var_4;
    MR_Integer mercury__string__Var_5 = ((MR_Integer) 1 << (MR_Integer) 30);

    mercury__string__Var_4 = (mercury__string__Var_5 - (MR_Integer) 1);
    mercury__string__HeadVar__2_2 = (mercury__string__N_3 & mercury__string__Var_4);
    return mercury__string__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__string__codepoint_offset_loop_5_p_0(
  MR_String mercury__string__String_6,
  MR_Integer mercury__string__Offset_7,
  MR_Integer mercury__string__Length_8,
  MR_Integer mercury__string__N_9,
  MR_Integer * mercury__string__Index_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__Offset_7 < mercury__string__Length_8);

      if (mercury__string__succeeded)
      {
        mercury__string__succeeded = (mercury__string__N_9 == (MR_Integer) 0);
        if (mercury__string__succeeded)
        {
          *mercury__string__Index_10 = mercury__string__Offset_7;
          mercury__string__succeeded = MR_TRUE;
        }
        else
        {
          MR_Integer mercury__string__NextOffset_11;
          MR_Integer mercury__string__Var_13;
          MR_Integer mercury__string__Var_14;
          MR_Char mercury__string__Var_12;

{
#define MR_PROC_LABEL mercury__string__codepoint_offset_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Offset_7 ;
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
	 mercury__string__NextOffset_11  = NextIndex;
	 mercury__string__Var_12  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
          if (mercury__string__succeeded)
          {
            mercury__string__Var_14 = (MR_Integer) 1;
            mercury__string__Var_13 = (mercury__string__N_9 - mercury__string__Var_14);
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__string__next_value_of_Offset_7 = mercury__string__NextOffset_11;
              MR_Integer mercury__string__next_value_of_N_9 = mercury__string__Var_13;

              mercury__string__Offset_7 = mercury__string__next_value_of_Offset_7;
              mercury__string__N_9 = mercury__string__next_value_of_N_9;
            }
            continue;
          }
        }
      }
      return mercury__string__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__string__count_utf8_code_units_2_3_p_0(
  MR_Char mercury__string__Char_4,
  MR_Integer mercury__string__STATE_VARIABLE_Length_0_8,
  MR_Integer * mercury__string__STATE_VARIABLE_Length_9)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__CharInt_6;

{
#define MR_PROC_LABEL mercury__string__count_utf8_code_units_2_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__Char_4 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__CharInt_6  = Int;
}
    mercury__string__succeeded = (mercury__string__CharInt_6 <= (MR_Integer) 127);
    if (mercury__string__succeeded)
    {
      *mercury__string__STATE_VARIABLE_Length_9 = (mercury__string__STATE_VARIABLE_Length_0_8 + (MR_Integer) 1);
    }
    else
    {
      MR_Word mercury__string__UTF8_7;

      mercury__string__succeeded = mercury__char__to_utf8_2_p_0(mercury__string__Char_4, &mercury__string__UTF8_7);
      if (mercury__string__succeeded)
      {
        MR_Word mercury__string__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        MR_Integer mercury__string__Var_14;

        mercury__list__length_acc_3_p_0(mercury__string__TypeCtorInfo_17_17, mercury__string__UTF8_7, (MR_Integer) 0, &mercury__string__Var_14);
        *mercury__string__STATE_VARIABLE_Length_9 = (mercury__string__STATE_VARIABLE_Length_0_8 + mercury__string__Var_14);
      }
      else
      {
        {
          mercury__require__error_2_p_0((MR_String) "predicate \140string.count_utf8_code_units_2\'/3", (MR_String) "char.to_utf8 failed");
          return;
        }
      }
    }
  }
}

void MR_CALL 
mercury__string__count_codepoints_loop_4_p_0(
  MR_String mercury__string__String_5,
  MR_Integer mercury__string__I_6,
  MR_Integer mercury__string__Count0_7,
  MR_Integer * mercury__string__Count_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;
      MR_Integer mercury__string__J_9;
      MR_Char mercury__string__Var_10;

{
#define MR_PROC_LABEL mercury__string__count_codepoints_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_5 ;
	Index =  mercury__string__I_6 ;
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
	 mercury__string__J_9  = NextIndex;
	 mercury__string__Var_10  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
      {
        MR_Integer mercury__string__Var_11 = (mercury__string__Count0_7 + (MR_Integer) 1);

        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_I_6 = mercury__string__J_9;
          MR_Integer mercury__string__next_value_of_Count0_7 = mercury__string__Var_11;

          mercury__string__I_6 = mercury__string__next_value_of_I_6;
          mercury__string__Count0_7 = mercury__string__next_value_of_Count0_7;
        }
        continue;
      }
      else
        *mercury__string__Count_8 = mercury__string__Count0_7;
    }
    break;
  }
}

void MR_CALL 
mercury__string__unsafe_set_char_non_null_4_p_0(
  MR_Char mercury__string__Ch_1,
  MR_Integer mercury__string__Index_2,
  MR_String mercury__string__Str0_3,
  MR_String * mercury__string__Str_4)
{
  {
{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_non_null_4_p_0

	MR_Char Ch;
	MR_Integer Index;
	MR_String Str0;
	MR_String Str;

	Ch =  mercury__string__Ch_1 ;
	Index =  mercury__string__Index_2 ;
	Str0 =  mercury__string__Str0_3 ;
		{

    size_t len = strlen(Str0);
    if (MR_is_ascii(Str0[Index]) && MR_is_ascii(Ch)) {
        /* Fast path. */
        MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
        strcpy(Str, Str0);
        Str[Index] = Ch;
    } else {
        int oldc = MR_utf8_get(Str0, Index);
        size_t oldwidth = MR_utf8_width(oldc);
        size_t newwidth = MR_utf8_width(Ch);
        size_t newlen;
        size_t tailofs;

        newlen = len - oldwidth + newwidth;
        MR_allocate_aligned_string_msg(Str, newlen, MR_ALLOC_ID);
        MR_memcpy(Str, Str0, Index);
        MR_utf8_encode(Str + Index, Ch);
        strcpy(Str + Index + newwidth, Str0 + Index + oldwidth);
    }


		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_4  = Str;
}
  }
}

MR_bool MR_CALL 
mercury__string__set_char_non_null_4_p_0(
  MR_Char mercury__string__Ch_1,
  MR_Integer mercury__string__Index_2,
  MR_String mercury__string__Str0_3,
  MR_String * mercury__string__Str_4)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__set_char_non_null_4_p_0

	MR_Char Ch;
	MR_Integer Index;
	MR_String Str0;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Ch =  mercury__string__Ch_1 ;
	Index =  mercury__string__Index_2 ;
	Str0 =  mercury__string__Str0_3 ;
		{

    size_t len = strlen(Str0);
    if ((MR_Unsigned) Index >= len) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else if (MR_is_ascii(Str0[Index]) && MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = MR_TRUE;
        MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
        strcpy(Str, Str0);
        Str[Index] = Ch;
    } else {
        int oldc = MR_utf8_get(Str0, Index);
        if (oldc < 0) {
            SUCCESS_INDICATOR = MR_FALSE;
        } else {
            size_t oldwidth = MR_utf8_width(oldc);
            size_t newwidth = MR_utf8_width(Ch);
            size_t newlen;

            newlen = len - oldwidth + newwidth;
            MR_allocate_aligned_string_msg(Str, newlen, MR_ALLOC_ID);
            MR_memcpy(Str, Str0, Index);
            MR_utf8_encode(Str + Index, Ch);
            strcpy(Str + Index + newwidth, Str0 + Index + oldwidth);
            SUCCESS_INDICATOR = MR_TRUE;
        }
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_4  = Str;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__index_check_2_p_0(
  MR_Integer mercury__string__Index_1,
  MR_Integer mercury__string__Length_2)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__index_check_2_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_1 ;
	Length =  mercury__string__Length_2 ;
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
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__unsafe_index_2_3_p_0(
  MR_String mercury__string__Str_1,
  MR_Integer mercury__string__Index_2,
  MR_Char * mercury__string__Ch_3)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__unsafe_index_2_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Index =  mercury__string__Index_2 ;
		{

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Ch_3  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__utf8_is_trail_byte_1_p_0(
  MR_Integer mercury__string__C_2)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__Var_3 = (mercury__string__C_2 & (MR_Integer) 192);

    mercury__string__succeeded = (mercury__string__Var_3 == (MR_Integer) 128);
    return mercury__string__succeeded;
  }
}

void MR_CALL 
mercury__string__to_char_list_forward_2_p_0(
  MR_String mercury__string__Str_1,
  MR_Word * mercury__string__CharList_2)
{
  {
{
#define MR_PROC_LABEL mercury__string__to_char_list_forward_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_1 ;
		{
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__CharList_2  = CharList;
}
  }
}

MR_bool MR_CALL 
mercury__string__internal_encoding_is_utf8_0_p_0(void)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__internal_encoding_is_utf8_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__base_string_to_int_underscore_3_p_0(
  MR_Integer mercury__string__Base_4,
  MR_String mercury__string__String_5,
  MR_Integer * mercury__string__Int_6)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Char mercury__string__Char_7;
    MR_Integer mercury__string__End_8;
    MR_Integer mercury__string__Len_27;
    MR_Char mercury__string__CharPrime_39;

{
#define MR_PROC_LABEL mercury__string__base_string_to_int_underscore_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_27  = Length;
}
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_underscore_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__string__Len_27 ;
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
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_underscore_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_5 ;
	Index =  (MR_Integer) 0 ;
		{

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_39  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
        mercury__string__Char_7 = mercury__string__CharPrime_39;
      else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.unsafe_index\'/3", (MR_String) "illegal sequence");
      }
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_underscore_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__End_8  = Length;
}
      mercury__string__succeeded = (mercury__string__Char_7 == (MR_Char) 45);
      if (mercury__string__succeeded)
      {
        MR_Word mercury__string__TypeCtorInfo_21_21;
        MR_Word mercury__string__Var_11;
        MR_Integer mercury__string__Var_12;
        MR_Integer mercury__string__Var_13;
        MR_Box mercury__string__conv0_Int_6;

        mercury__string__succeeded = (mercury__string__End_8 > (MR_Integer) 1);
        if (mercury__string__succeeded)
        {
          mercury__string__Var_11 = mercury__string__base_negative_accumulator_underscore_1_f_0(mercury__string__Base_4);
          mercury__string__Var_12 = (MR_Integer) 1;
          mercury__string__Var_13 = (MR_Integer) 0;
          mercury__string__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          mercury__string__succeeded = mercury__string__foldl_between_6_p_2(mercury__string__TypeCtorInfo_21_21, mercury__string__Var_11, mercury__string__String_5, mercury__string__Var_12, mercury__string__End_8, ((MR_Box) (mercury__string__Var_13)), &mercury__string__conv0_Int_6);
          if (mercury__string__succeeded)
          {
            *mercury__string__Int_6 = ((MR_Integer) mercury__string__conv0_Int_6);
            mercury__string__succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        mercury__string__succeeded = (mercury__string__Char_7 == (MR_Char) 43);
        if (mercury__string__succeeded)
        {
          MR_Word mercury__string__TypeCtorInfo_22_22;
          MR_Word mercury__string__Var_15;
          MR_Integer mercury__string__Var_16;
          MR_Integer mercury__string__Var_17;
          MR_Box mercury__string__conv1_Int_6;

          mercury__string__succeeded = (mercury__string__End_8 > (MR_Integer) 1);
          if (mercury__string__succeeded)
          {
            mercury__string__Var_15 = mercury__string__base_accumulator_underscore_1_f_0(mercury__string__Base_4);
            mercury__string__Var_16 = (MR_Integer) 1;
            mercury__string__Var_17 = (MR_Integer) 0;
            mercury__string__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            mercury__string__succeeded = mercury__string__foldl_between_6_p_2(mercury__string__TypeCtorInfo_22_22, mercury__string__Var_15, mercury__string__String_5, mercury__string__Var_16, mercury__string__End_8, ((MR_Box) (mercury__string__Var_17)), &mercury__string__conv1_Int_6);
            if (mercury__string__succeeded)
            {
              *mercury__string__Int_6 = ((MR_Integer) mercury__string__conv1_Int_6);
              mercury__string__succeeded = MR_TRUE;
            }
          }
        }
        else
        {
          MR_Word mercury__string__TypeCtorInfo_23_23;
          MR_Word mercury__string__Var_18;
          MR_Box mercury__string__conv2_Int_6;

          mercury__string__Var_18 = mercury__string__base_accumulator_underscore_1_f_0(mercury__string__Base_4);
          mercury__string__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          mercury__string__succeeded = mercury__string__foldl_between_6_p_2(mercury__string__TypeCtorInfo_23_23, mercury__string__Var_18, mercury__string__String_5, (MR_Integer) 0, mercury__string__End_8, ((MR_Box) ((MR_Integer) 0)), &mercury__string__conv2_Int_6);
          if (mercury__string__succeeded)
          {
            *mercury__string__Int_6 = ((MR_Integer) mercury__string__conv2_Int_6);
            mercury__string__succeeded = MR_TRUE;
          }
        }
      }
    }
    return mercury__string__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0_5(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__closure = mercury__string__closure_arg;
    MR_Integer mercury__string__conv4_N_8;

    mercury__string__succeeded = mercury__string__accumulate_negative_int_underscore_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mercury__string__wrapper_arg_1), ((MR_Integer) mercury__string__wrapper_arg_2), &mercury__string__conv4_N_8);
    if (mercury__string__succeeded)
    {
      *mercury__string__wrapper_arg_3 = ((MR_Box) (mercury__string__conv4_N_8));
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0_4(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__closure = mercury__string__closure_arg;
    MR_Integer mercury__string__conv3_N_8;

    mercury__string__succeeded = mercury__string__accumulate_negative_int_underscore_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mercury__string__wrapper_arg_1), ((MR_Integer) mercury__string__wrapper_arg_2), &mercury__string__conv3_N_8);
    if (mercury__string__succeeded)
    {
      *mercury__string__wrapper_arg_3 = ((MR_Box) (mercury__string__conv3_N_8));
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0_3(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__closure = mercury__string__closure_arg;
    MR_Integer mercury__string__conv2_N_8;

    mercury__string__succeeded = mercury__string__accumulate_negative_int_underscore_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mercury__string__wrapper_arg_1), ((MR_Integer) mercury__string__wrapper_arg_2), &mercury__string__conv2_N_8);
    if (mercury__string__succeeded)
    {
      *mercury__string__wrapper_arg_3 = ((MR_Box) (mercury__string__conv2_N_8));
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0_2(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__closure = mercury__string__closure_arg;
    MR_Integer mercury__string__conv1_N_8;

    mercury__string__succeeded = mercury__string__accumulate_negative_int_underscore_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mercury__string__wrapper_arg_1), ((MR_Integer) mercury__string__wrapper_arg_2), &mercury__string__conv1_N_8);
    if (mercury__string__succeeded)
    {
      *mercury__string__wrapper_arg_3 = ((MR_Box) (mercury__string__conv1_N_8));
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0_1(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__closure = mercury__string__closure_arg;
    MR_Integer mercury__string__conv0_N_8;

    mercury__string__succeeded = mercury__string__accumulate_negative_int_underscore_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mercury__string__wrapper_arg_1), ((MR_Integer) mercury__string__wrapper_arg_2), &mercury__string__conv0_N_8);
    if (mercury__string__succeeded)
    {
      *mercury__string__wrapper_arg_3 = ((MR_Box) (mercury__string__conv0_N_8));
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

MR_Word MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0(
  MR_Integer mercury__string__Base_3)
{
  {
    MR_bool mercury__string__succeeded = (mercury__string__Base_3 == (MR_Integer) 10);
    MR_Word mercury__string__Pred_4;

    if (mercury__string__succeeded)
    {
      mercury__string__Pred_4 = (MR_Word) &mercury__string_scalar_common_3[13];
    }
    else
    {
      mercury__string__succeeded = (mercury__string__Base_3 == (MR_Integer) 16);
      if (mercury__string__succeeded)
      {
        mercury__string__Pred_4 = (MR_Word) &mercury__string_scalar_common_3[14];
      }
      else
      {
        mercury__string__succeeded = (mercury__string__Base_3 == (MR_Integer) 8);
        if (mercury__string__succeeded)
        {
          mercury__string__Pred_4 = (MR_Word) &mercury__string_scalar_common_3[15];
        }
        else
        {
          mercury__string__succeeded = (mercury__string__Base_3 == (MR_Integer) 2);
          if (mercury__string__succeeded)
          {
            mercury__string__Pred_4 = (MR_Word) &mercury__string_scalar_common_3[16];
          }
          else
            {
              mercury__string__Pred_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__string__Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), mercury__string__Pred_4, 1) = ((MR_Box) (mercury__string__base_negative_accumulator_underscore_1_f_0_5));
              MR_hl_field(MR_mktag(0), mercury__string__Pred_4, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), mercury__string__Pred_4, 3) = ((MR_Box) (mercury__string__Base_3));
            }
        }
      }
    }
    return mercury__string__Pred_4;
  }
}

static MR_bool MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0_5(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__closure = mercury__string__closure_arg;
    MR_Integer mercury__string__conv4_N_8;

    mercury__string__succeeded = mercury__string__accumulate_int_underscore_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mercury__string__wrapper_arg_1), ((MR_Integer) mercury__string__wrapper_arg_2), &mercury__string__conv4_N_8);
    if (mercury__string__succeeded)
    {
      *mercury__string__wrapper_arg_3 = ((MR_Box) (mercury__string__conv4_N_8));
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0_4(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__closure = mercury__string__closure_arg;
    MR_Integer mercury__string__conv3_N_8;

    mercury__string__succeeded = mercury__string__accumulate_int_underscore_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mercury__string__wrapper_arg_1), ((MR_Integer) mercury__string__wrapper_arg_2), &mercury__string__conv3_N_8);
    if (mercury__string__succeeded)
    {
      *mercury__string__wrapper_arg_3 = ((MR_Box) (mercury__string__conv3_N_8));
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0_3(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__closure = mercury__string__closure_arg;
    MR_Integer mercury__string__conv2_N_8;

    mercury__string__succeeded = mercury__string__accumulate_int_underscore_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mercury__string__wrapper_arg_1), ((MR_Integer) mercury__string__wrapper_arg_2), &mercury__string__conv2_N_8);
    if (mercury__string__succeeded)
    {
      *mercury__string__wrapper_arg_3 = ((MR_Box) (mercury__string__conv2_N_8));
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0_2(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__closure = mercury__string__closure_arg;
    MR_Integer mercury__string__conv1_N_8;

    mercury__string__succeeded = mercury__string__accumulate_int_underscore_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mercury__string__wrapper_arg_1), ((MR_Integer) mercury__string__wrapper_arg_2), &mercury__string__conv1_N_8);
    if (mercury__string__succeeded)
    {
      *mercury__string__wrapper_arg_3 = ((MR_Box) (mercury__string__conv1_N_8));
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0_1(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__closure = mercury__string__closure_arg;
    MR_Integer mercury__string__conv0_N_8;

    mercury__string__succeeded = mercury__string__accumulate_int_underscore_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mercury__string__wrapper_arg_1), ((MR_Integer) mercury__string__wrapper_arg_2), &mercury__string__conv0_N_8);
    if (mercury__string__succeeded)
    {
      *mercury__string__wrapper_arg_3 = ((MR_Box) (mercury__string__conv0_N_8));
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

MR_Word MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0(
  MR_Integer mercury__string__Base_3)
{
  {
    MR_bool mercury__string__succeeded = (mercury__string__Base_3 == (MR_Integer) 10);
    MR_Word mercury__string__Pred_4;

    if (mercury__string__succeeded)
    {
      mercury__string__Pred_4 = (MR_Word) &mercury__string_scalar_common_3[9];
    }
    else
    {
      mercury__string__succeeded = (mercury__string__Base_3 == (MR_Integer) 16);
      if (mercury__string__succeeded)
      {
        mercury__string__Pred_4 = (MR_Word) &mercury__string_scalar_common_3[10];
      }
      else
      {
        mercury__string__succeeded = (mercury__string__Base_3 == (MR_Integer) 8);
        if (mercury__string__succeeded)
        {
          mercury__string__Pred_4 = (MR_Word) &mercury__string_scalar_common_3[11];
        }
        else
        {
          mercury__string__succeeded = (mercury__string__Base_3 == (MR_Integer) 2);
          if (mercury__string__succeeded)
          {
            mercury__string__Pred_4 = (MR_Word) &mercury__string_scalar_common_3[12];
          }
          else
            {
              mercury__string__Pred_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__string__Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), mercury__string__Pred_4, 1) = ((MR_Box) (mercury__string__base_accumulator_underscore_1_f_0_5));
              MR_hl_field(MR_mktag(0), mercury__string__Pred_4, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), mercury__string__Pred_4, 3) = ((MR_Box) (mercury__string__Base_3));
            }
        }
      }
    }
    return mercury__string__Pred_4;
  }
}

void MR_CALL 
mercury__string__format_3_p_0(
  MR_String mercury__string__FormatString_4,
  MR_Word mercury__string__PolyList_5,
  MR_String * mercury__string__String_6)
{
  mercury__string__format__format_impl_3_p_0(mercury__string__FormatString_4, mercury__string__PolyList_5, mercury__string__String_6);
}

MR_String MR_CALL 
mercury__string__format_2_f_0(
  MR_String mercury__string__S1_4,
  MR_Word mercury__string__PT_5)
{
  {
    MR_String mercury__string__S2_6;

    mercury__string__format__format_impl_3_p_0(mercury__string__S1_4, mercury__string__PT_5, &mercury__string__S2_6);
    return mercury__string__S2_6;
  }
}

void MR_CALL 
mercury__string__string_ops_noncanon_4_p_3(
  MR_Word mercury__string__TypeInfo_for_T_9,
  MR_Word mercury__string__NonCanon_5,
  MR_Box mercury__string__X_7,
  MR_String * mercury__string__String_8)
{
  {
    MR_Word mercury__string__TypeCtorInfo_13_17;
    MR_Word mercury__string__TypeClassInfo_for_op_table_26 = (MR_Word) &mercury__string_scalar_common_1[1];
    MR_Word mercury__string__V_10_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__string__V_9_15;
    MR_Word mercury__string__V_11_16;
    MR_Integer mercury__string__V_10_23;
    MR_Integer mercury__string__V_13_24;
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__string__conv1_V_13_24;

    mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
    mercury__string__V_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__V_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__V_9_15);
    mercury__string__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_17, mercury__string__V_9_15, &mercury__string__V_11_16);
    *mercury__string__String_8 = mercury__string__append_list_1_f_0(mercury__string__V_11_16);
  }
}

void MR_CALL 
mercury__string__string_ops_noncanon_4_p_2(
  MR_Word mercury__string__TypeInfo_for_T_9,
  MR_Word mercury__string__NonCanon_5,
  MR_Box mercury__string__X_7,
  MR_String * mercury__string__String_8)
{
  {
    MR_Word mercury__string__TypeCtorInfo_13_17;
    MR_Word mercury__string__TypeClassInfo_for_op_table_26 = (MR_Word) &mercury__string_scalar_common_1[1];
    MR_Word mercury__string__V_10_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__string__V_9_15;
    MR_Word mercury__string__V_11_16;
    MR_Integer mercury__string__V_10_23;
    MR_Integer mercury__string__V_13_24;
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__string__conv1_V_13_24;

    mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
    mercury__string__V_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__V_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__V_9_15);
    mercury__string__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_17, mercury__string__V_9_15, &mercury__string__V_11_16);
    *mercury__string__String_8 = mercury__string__append_list_1_f_0(mercury__string__V_11_16);
  }
}

void MR_CALL 
mercury__string__string_ops_noncanon_4_p_1(
  MR_Word mercury__string__TypeInfo_for_T_9,
  MR_Word mercury__string__NonCanon_5,
  MR_Box mercury__string__X_7,
  MR_String * mercury__string__String_8)
{
  {
    MR_Word mercury__string__TypeCtorInfo_13_17;
    MR_Word mercury__string__TypeClassInfo_for_op_table_26 = (MR_Word) &mercury__string_scalar_common_1[1];
    MR_Word mercury__string__V_10_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__string__V_9_15;
    MR_Word mercury__string__V_11_16;
    MR_Integer mercury__string__V_10_23;
    MR_Integer mercury__string__V_13_24;
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__string__conv1_V_13_24;

    mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
    mercury__string__V_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__V_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__V_9_15);
    mercury__string__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_17, mercury__string__V_9_15, &mercury__string__V_11_16);
    *mercury__string__String_8 = mercury__string__append_list_1_f_0(mercury__string__V_11_16);
  }
}

void MR_CALL 
mercury__string__string_ops_noncanon_4_p_0(
  MR_Word mercury__string__TypeInfo_for_T_9,
  MR_Word mercury__string__NonCanon_5,
  MR_Box mercury__string__X_7,
  MR_String * mercury__string__String_8)
{
  {
    MR_Word mercury__string__TypeCtorInfo_13_17;
    MR_Word mercury__string__TypeClassInfo_for_op_table_26 = (MR_Word) &mercury__string_scalar_common_1[1];
    MR_Word mercury__string__V_10_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__string__V_9_15;
    MR_Word mercury__string__V_11_16;
    MR_Integer mercury__string__V_10_23;
    MR_Integer mercury__string__V_13_24;
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__string__conv1_V_13_24;

    mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
    mercury__string__V_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__V_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__V_9_15);
    mercury__string__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_17, mercury__string__V_9_15, &mercury__string__V_11_16);
    *mercury__string__String_8 = mercury__string__append_list_1_f_0(mercury__string__V_11_16);
  }
}

MR_String MR_CALL 
mercury__string__string_ops_2_f_0(
  MR_Word mercury__string__TypeInfo_for_T_6,
  MR_Box mercury__string__X_5)
{
  {
    MR_String mercury__string__HeadVar__3_3;
    MR_Word mercury__string__TypeCtorInfo_13_18;
    MR_Word mercury__string__TypeClassInfo_for_op_table_27 = (MR_Word) &mercury__string_scalar_common_1[1];
    MR_Word mercury__string__V_10_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__string__V_9_16;
    MR_Word mercury__string__V_11_17;
    MR_Integer mercury__string__V_10_24;
    MR_Integer mercury__string__V_13_25;
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_27, (MR_Integer) 0)), (MR_Integer) 12)));
    MR_Box mercury__string__conv1_V_13_25;

    mercury__string__conv1_V_13_25 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_27), ((MR_Box) ((MR_Integer) 0)));
    mercury__string__V_13_25 = ((MR_Integer) mercury__string__conv1_V_13_25);
    mercury__string__V_10_24 = (mercury__string__V_13_25 + (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_6, (MR_Integer) 1, mercury__string__V_10_24, mercury__string__X_5, mercury__string__V_10_15, &mercury__string__V_9_16);
    mercury__string__TypeCtorInfo_13_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_18, mercury__string__V_9_16, &mercury__string__V_11_17);
    mercury__string__HeadVar__3_3 = mercury__string__append_list_1_f_0(mercury__string__V_11_17);
    return mercury__string__HeadVar__3_3;
  }
}

MR_String MR_CALL 
mercury__string__string_1_f_0(
  MR_Word mercury__string__TypeInfo_for_T_4,
  MR_Box mercury__string__X_3)
{
  {
    MR_String mercury__string__HeadVar__2_2;
    MR_Word mercury__string__TypeCtorInfo_13_16;
    MR_Word mercury__string__TypeClassInfo_for_op_table_25;
    MR_Word mercury__string__V_10_13;
    MR_Word mercury__string__V_9_14;
    MR_Word mercury__string__V_11_15;
    MR_Integer mercury__string__V_10_22;
    MR_Integer mercury__string__V_13_23;
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);
    MR_Box mercury__string__conv1_V_13_23;

    mercury__private_builtin__dummy_var = (MR_Integer) 0;
    mercury__string__V_10_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__string__TypeClassInfo_for_op_table_25 = (MR_Word) &mercury__string_scalar_common_1[1];
    mercury__string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_25, (MR_Integer) 0)), (MR_Integer) 12)));
    mercury__string__conv1_V_13_23 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_25), ((MR_Box) ((MR_Integer) 0)));
    mercury__string__V_13_23 = ((MR_Integer) mercury__string__conv1_V_13_23);
    mercury__string__V_10_22 = (mercury__string__V_13_23 + (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_4, (MR_Integer) 1, mercury__string__V_10_22, mercury__string__X_3, mercury__string__V_10_13, &mercury__string__V_9_14);
    mercury__string__TypeCtorInfo_13_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_16, mercury__string__V_9_14, &mercury__string__V_11_15);
    mercury__string__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__string__V_11_15);
    return mercury__string__HeadVar__2_2;
  }
}

MR_String MR_CALL 
mercury__string__from_c_pointer_1_f_0(
  MR_Word mercury__string__P_3)
{
  {
    MR_String mercury__string__S_4;
    MR_Integer mercury__string__Int_7 = (MR_Integer) mercury__string__P_3;
    MR_String mercury__string__Var_9;
    MR_String mercury__string__Var_10;

    mercury__string__int_to_base_string_3_p_0(mercury__string__Int_7, (MR_Integer) 16, &mercury__string__Var_10);
{
#define MR_PROC_LABEL mercury__string__from_c_pointer_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Var_10 ;
	S2 =  (MR_String) ")" ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_9  = S3;
}
{
#define MR_PROC_LABEL mercury__string__from_c_pointer_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__Var_9 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__S_4  = S3;
}
    return mercury__string__S_4;
  }
}

void MR_CALL 
mercury__string__c_pointer_to_string_2_p_0(
  MR_Word mercury__string__C_Pointer_3,
  MR_String * mercury__string__Str_4)
{
  {
    MR_Integer mercury__string__Int_5 = (MR_Integer) mercury__string__C_Pointer_3;
    MR_String mercury__string__Var_7;
    MR_String mercury__string__Var_8;

    mercury__string__int_to_base_string_3_p_0(mercury__string__Int_5, (MR_Integer) 16, &mercury__string__Var_8);
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_2_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Var_8 ;
	S2 =  (MR_String) ")" ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_7  = S3;
}
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_2_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__Var_7 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_4  = S3;
}
  }
}

MR_String MR_CALL 
mercury__string__c_pointer_to_string_1_f_0(
  MR_Word mercury__string__P_3)
{
  {
    MR_String mercury__string__S_4;
    MR_Integer mercury__string__Int_7 = (MR_Integer) mercury__string__P_3;
    MR_String mercury__string__Var_9;
    MR_String mercury__string__Var_10;

    mercury__string__int_to_base_string_3_p_0(mercury__string__Int_7, (MR_Integer) 16, &mercury__string__Var_10);
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Var_10 ;
	S2 =  (MR_String) ")" ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_9  = S3;
}
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__Var_9 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__S_4  = S3;
}
    return mercury__string__S_4;
  }
}

MR_String MR_CALL 
mercury__string__from_float_1_f_0(
  MR_Float mercury__string__Float_3)
{
  {
    MR_String mercury__string__HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__string__from_float_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Float_3 ;
		{
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__2_2  = Str;
}
    return mercury__string__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__string__float_to_string_2_p_0(
  MR_Float mercury__string__Flt_1,
  MR_String * mercury__string__Str_2)
{
  {
{
#define MR_PROC_LABEL mercury__string__float_to_string_2_p_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Flt_1 ;
		{
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_2  = Str;
}
  }
}

MR_String MR_CALL 
mercury__string__float_to_string_1_f_0(
  MR_Float mercury__string__Float_3)
{
  {
    MR_String mercury__string__S2_4;

{
#define MR_PROC_LABEL mercury__string__float_to_string_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Float_3 ;
		{
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_4  = Str;
}
    return mercury__string__S2_4;
  }
}

MR_String MR_CALL 
mercury__string__uint_to_string_1_f_0(
  MR_Unsigned mercury__string__U_1)
{
  {
    MR_String mercury__string__Str_2;

{
#define MR_PROC_LABEL mercury__string__uint_to_string_1_f_0

	MR_Unsigned U;
	MR_String Str;

	U =  mercury__string__U_1 ;
		{

    char buffer[21];
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "u", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Str_2  = Str;
}
    return mercury__string__Str_2;
  }
}

MR_String MR_CALL 
mercury__string__int_to_string_thousands_1_f_0(
  MR_Integer mercury__string__N_3)
{
  {
    MR_String mercury__string__HeadVar__2_2;

    mercury__string__HeadVar__2_2 = mercury__string__int_to_base_string_group_4_f_0(mercury__string__N_3, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    return mercury__string__HeadVar__2_2;
  }
}

MR_String MR_CALL 
mercury__string__int_to_base_string_group_4_f_0(
  MR_Integer mercury__string__N_6,
  MR_Integer mercury__string__Base_7,
  MR_Integer mercury__string__GroupLength_8,
  MR_String mercury__string__Sep_9)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 2 <= mercury__string__Base_7);
    MR_String mercury__string__Str_10;
    MR_Integer mercury__string__Var_12;

    if (mercury__string__succeeded)
    {
      mercury__string__Var_12 = (MR_Integer) 36;
      mercury__string__succeeded = (mercury__string__Base_7 <= mercury__string__Var_12);
    }
    if (!(mercury__string__succeeded))
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140string.int_to_base_string_group\'/4", (MR_String) "invalid base");
    }
    mercury__string__int_to_base_string_group_1_5_p_0(mercury__string__N_6, mercury__string__Base_7, mercury__string__GroupLength_8, mercury__string__Sep_9, &mercury__string__Str_10);
    return mercury__string__Str_10;
  }
}

void MR_CALL 
mercury__string__int_to_base_string_group_1_5_p_0(
  MR_Integer mercury__string__N_6,
  MR_Integer mercury__string__Base_7,
  MR_Integer mercury__string__GroupLength_8,
  MR_String mercury__string__Sep_9,
  MR_String * mercury__string__Str_10)
{
  {
    MR_bool mercury__string__succeeded = (mercury__string__N_6 < (MR_Integer) 0);

    if (mercury__string__succeeded)
    {
      MR_String mercury__string__Str1_11;

      mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__N_6, mercury__string__Base_7, (MR_Integer) 0, mercury__string__GroupLength_8, mercury__string__Sep_9, &mercury__string__Str1_11);
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_1_5_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "-" ;
	S2 =  mercury__string__Str1_11 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_10  = S3;
}
    }
    else
    {
      MR_Integer mercury__string__N1_12 = ((MR_Integer) 0 - mercury__string__N_6);

      mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__N1_12, mercury__string__Base_7, (MR_Integer) 0, mercury__string__GroupLength_8, mercury__string__Sep_9, mercury__string__Str_10);
    }
  }
}

void MR_CALL 
mercury__string__int_to_base_string_group_2_6_p_0(
  MR_Integer mercury__string__NegN_7,
  MR_Integer mercury__string__Base_8,
  MR_Integer mercury__string__Curr_9,
  MR_Integer mercury__string__GroupLength_10,
  MR_String mercury__string__Sep_11,
  MR_String * mercury__string__Str_12)
{
  {
    MR_bool mercury__string__succeeded = (mercury__string__Curr_9 == mercury__string__GroupLength_10);
    MR_Integer mercury__string__Var_19;

    if (mercury__string__succeeded)
    {
      mercury__string__Var_19 = (MR_Integer) 0;
      mercury__string__succeeded = (mercury__string__GroupLength_10 > mercury__string__Var_19);
    }
    if (mercury__string__succeeded)
    {
      MR_String mercury__string__Str1_13;

      mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__NegN_7, mercury__string__Base_8, (MR_Integer) 0, mercury__string__GroupLength_10, mercury__string__Sep_11, &mercury__string__Str1_13);
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str1_13 ;
	S2 =  mercury__string__Sep_11 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_12  = S3;
}
    }
    else
    {
      MR_Integer mercury__string__Var_21 = ((MR_Integer) 0 - mercury__string__Base_8);

      mercury__string__succeeded = (mercury__string__NegN_7 > mercury__string__Var_21);
      if (mercury__string__succeeded)
      {
        MR_Integer mercury__string__N_14 = ((MR_Integer) 0 - mercury__string__NegN_7);
        MR_Char mercury__string__DigitChar_15;

        mercury__string__DigitChar_15 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_8, mercury__string__N_14);
        mercury__string__char_to_string_2_p_0(mercury__string__DigitChar_15, mercury__string__Str_12);
      }
      else
      {
        MR_Integer mercury__string__NegN1_16;
        MR_Integer mercury__string__N10_17;
        MR_String mercury__string__DigitString_18;
        MR_Integer mercury__string__Var_22;
        MR_Integer mercury__string__Var_23;
        MR_String mercury__string__Str1_25;
        MR_Char mercury__string__DigitChar_26;

{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

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
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = (mercury__string__Base_8 == (MR_Integer) 0);
        if (mercury__string__succeeded)
        {
          MR_Word mercury__string__TypeCtorInfo_9_48 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
          MR_Word mercury__string__V_7_46 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

          {
            mercury__exception__throw_1_p_0(mercury__string__TypeCtorInfo_9_48, ((MR_Box) (mercury__string__V_7_46)));
            return;
          }
        }
        else
          mercury__string__NegN1_16 = (mercury__string__NegN_7 / mercury__string__Base_8);
        mercury__string__Var_22 = (mercury__string__NegN1_16 * mercury__string__Base_8);
        mercury__string__N10_17 = (mercury__string__Var_22 - mercury__string__NegN_7);
        mercury__string__DigitChar_26 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_8, mercury__string__N10_17);
        mercury__string__char_to_string_2_p_0(mercury__string__DigitChar_26, &mercury__string__DigitString_18);
        mercury__string__Var_23 = (mercury__string__Curr_9 + (MR_Integer) 1);
        mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__NegN1_16, mercury__string__Base_8, mercury__string__Var_23, mercury__string__GroupLength_10, mercury__string__Sep_11, &mercury__string__Str1_25);
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str1_25 ;
	S2 =  mercury__string__DigitString_18 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_12  = S3;
}
      }
    }
  }
}

MR_String MR_CALL 
mercury__string__int_to_base_string_2_f_0(
  MR_Integer mercury__string__N1_4,
  MR_Integer mercury__string__N2_5)
{
  {
    MR_String mercury__string__S2_6;

    mercury__string__int_to_base_string_3_p_0(mercury__string__N1_4, mercury__string__N2_5, &mercury__string__S2_6);
    return mercury__string__S2_6;
  }
}

MR_String MR_CALL 
mercury__string__from_int_1_f_0(
  MR_Integer mercury__string__N_3)
{
  {
    MR_String mercury__string__HeadVar__2_2;

    mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, &mercury__string__HeadVar__2_2);
    return mercury__string__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__string__int_to_string_2_p_0(
  MR_Integer mercury__string__N_3,
  MR_String * mercury__string__Str_4)
{
  {
    mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, mercury__string__Str_4);
  }
}

MR_String MR_CALL 
mercury__string__int_to_string_1_f_0(
  MR_Integer mercury__string__N_3)
{
  {
    MR_String mercury__string__S1_4;

    mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, &mercury__string__S1_4);
    return mercury__string__S1_4;
  }
}

void MR_CALL 
mercury__string__int_to_base_string_3_p_0(
  MR_Integer mercury__string__N_4,
  MR_Integer mercury__string__Base_5,
  MR_String * mercury__string__Str_6)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 2 <= mercury__string__Base_5);
    MR_Integer mercury__string__Var_8;

    if (mercury__string__succeeded)
    {
      mercury__string__Var_8 = (MR_Integer) 36;
      mercury__string__succeeded = (mercury__string__Base_5 <= mercury__string__Var_8);
    }
    if (!(mercury__string__succeeded))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.int_to_base_string\'/3", (MR_String) "invalid base");
        return;
      }
    }
    mercury__string__int_to_base_string_1_3_p_0(mercury__string__N_4, mercury__string__Base_5, mercury__string__Str_6);
  }
}

void MR_CALL 
mercury__string__int_to_base_string_1_3_p_0(
  MR_Integer mercury__string__N_4,
  MR_Integer mercury__string__Base_5,
  MR_String * mercury__string__Str_6)
{
  {
    MR_bool mercury__string__succeeded = (mercury__string__N_4 < (MR_Integer) 0);
    MR_Word mercury__string__RevChars_7;
    MR_String mercury__string__Str0_17;

    if (mercury__string__succeeded)
    {
      MR_Word mercury__string__Var_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_1[4]);
      MR_Word mercury__string__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

      mercury__string__int_to_base_string_2_4_p_0(mercury__string__N_4, mercury__string__Base_5, mercury__string__Var_10, &mercury__string__RevChars_7);
    }
    else
    {
      MR_Integer mercury__string__NegN_8 = ((MR_Integer) 0 - mercury__string__N_4);
      MR_Word mercury__string__Var_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

      mercury__string__int_to_base_string_2_4_p_0(mercury__string__NegN_8, mercury__string__Base_5, mercury__string__Var_14, &mercury__string__RevChars_7);
    }
    mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__RevChars_7, &mercury__string__Str0_17);
    if (mercury__string__succeeded)
      *mercury__string__Str_6 = mercury__string__Str0_17;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_rev_char_list\'/2", (MR_String) "null character in list");
        return;
      }
    }
  }
}

void MR_CALL 
mercury__string__int_to_base_string_2_4_p_0(
  MR_Integer mercury__string__NegN_5,
  MR_Integer mercury__string__Base_6,
  MR_Word mercury__string__STATE_VARIABLE_RevChars_0_12,
  MR_Word * mercury__string__STATE_VARIABLE_RevChars_13)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__Var_14 = ((MR_Integer) 0 - mercury__string__Base_6);

    mercury__string__succeeded = (mercury__string__NegN_5 > mercury__string__Var_14);
    if (mercury__string__succeeded)
    {
      MR_Integer mercury__string__N_8 = ((MR_Integer) 0 - mercury__string__NegN_5);
      MR_Char mercury__string__DigitChar_9;

      mercury__string__DigitChar_9 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_6, mercury__string__N_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *mercury__string__STATE_VARIABLE_RevChars_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevChars_0_12));
      }
    }
    else
    {
      MR_Integer mercury__string__NegN1_10;
      MR_Integer mercury__string__N10_11;
      MR_Integer mercury__string__Var_16;
      MR_Word mercury__string__STATE_VARIABLE_RevChars_17_17;
      MR_Char mercury__string__DigitChar_19;

{
#define MR_PROC_LABEL mercury__string__int_to_base_string_2_4_p_0

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
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
        mercury__string__succeeded = (mercury__string__Base_6 == (MR_Integer) 0);
      if (mercury__string__succeeded)
      {
        MR_Word mercury__string__TypeCtorInfo_9_25 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
        MR_Word mercury__string__V_7_23 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

        {
          mercury__exception__throw_1_p_0(mercury__string__TypeCtorInfo_9_25, ((MR_Box) (mercury__string__V_7_23)));
          return;
        }
      }
      else
        mercury__string__NegN1_10 = (mercury__string__NegN_5 / mercury__string__Base_6);
      mercury__string__Var_16 = (mercury__string__NegN1_10 * mercury__string__Base_6);
      mercury__string__N10_11 = (mercury__string__Var_16 - mercury__string__NegN_5);
      mercury__string__DigitChar_19 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_6, mercury__string__N10_11);
      mercury__string__int_to_base_string_2_4_p_0(mercury__string__NegN1_10, mercury__string__Base_6, mercury__string__STATE_VARIABLE_RevChars_0_12, &mercury__string__STATE_VARIABLE_RevChars_17_17);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *mercury__string__STATE_VARIABLE_RevChars_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevChars_17_17));
      }
    }
  }
}

MR_String MR_CALL 
mercury__string__from_char_1_f_0(
  MR_Char mercury__string__Char_3)
{
  {
    MR_String mercury__string__HeadVar__2_2;

    mercury__string__char_to_string_2_p_0(mercury__string__Char_3, &mercury__string__HeadVar__2_2);
    return mercury__string__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__string__char_to_string_2_p_1(
  MR_Char * mercury__string__Char_3,
  MR_String mercury__string__String_4)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Word mercury__string__TypeInfo_8_8;
    MR_Word mercury__string__Var_5;
    MR_Word mercury__string__Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__string__Var_7;

{
#define MR_PROC_LABEL mercury__string__char_to_string_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__String_4 ;
		{
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_5  = CharList;
}
    mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__Var_5)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__string__succeeded)
    {
      *mercury__string__Char_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__Var_5, (MR_Integer) 0)));
      mercury__string__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__Var_5, (MR_Integer) 1)));
      mercury__string__TypeInfo_8_8 = (MR_Word) &mercury__string_scalar_common_1[2];
      mercury__string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__TypeInfo_8_8, ((MR_Box) (mercury__string__Var_6)), ((MR_Box) (mercury__string__Var_7)));
    }
    return mercury__string__succeeded;
  }
}

MR_String MR_CALL 
mercury__string__char_to_string_1_f_0(
  MR_Char mercury__string__C_3)
{
  {
    MR_String mercury__string__S1_4;

    mercury__string__char_to_string_2_p_0(mercury__string__C_3, &mercury__string__S1_4);
    return mercury__string__S1_4;
  }
}

MR_Float MR_CALL 
mercury__string__det_to_float_1_f_0(
  MR_String mercury__string__FloatString_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Float mercury__string__Float_4;
    MR_Float mercury__string__FloatPrime_5;

{
#define MR_PROC_LABEL mercury__string__det_to_float_1_f_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__FloatString_3 ;
		{
{
    /*
    ** The %c checks for any erroneous characters appearing after the float;
    ** if there are then sscanf() will return 2 rather than 1.
    */
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        /* MR_TRUE if sscanf succeeds, MR_FALSE otherwise */
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__FloatPrime_5  = FloatVal;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
      mercury__string__Float_4 = mercury__string__FloatPrime_5;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140string.det_to_float\'/1", (MR_String) "conversion failed.");
    }
    return mercury__string__Float_4;
  }
}

MR_bool MR_CALL 
mercury__string__to_float_2_p_0(
  MR_String mercury__string__FloatString_1,
  MR_Float * mercury__string__FloatVal_2)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__to_float_2_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__FloatString_1 ;
		{
{
    /*
    ** The %c checks for any erroneous characters appearing after the float;
    ** if there are then sscanf() will return 2 rather than 1.
    */
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        /* MR_TRUE if sscanf succeeds, MR_FALSE otherwise */
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__FloatVal_2  = FloatVal;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__string__det_base_string_to_int_2_f_0(
  MR_Integer mercury__string__Base_4,
  MR_String mercury__string__S_5)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__N_6;
    MR_Integer mercury__string__N0_7;

    mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__string__Base_4, mercury__string__S_5, &mercury__string__N0_7);
    if (mercury__string__succeeded)
      mercury__string__N_6 = mercury__string__N0_7;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140string.det_base_string_to_int\'/2", (MR_String) "conversion failed");
    }
    return mercury__string__N_6;
  }
}

MR_Integer MR_CALL 
mercury__string__det_to_int_1_f_0(
  MR_String mercury__string__S_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__HeadVar__2_2;
    MR_Integer mercury__string__N0_8;

    mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, mercury__string__S_3, &mercury__string__N0_8);
    if (mercury__string__succeeded)
      mercury__string__HeadVar__2_2 = mercury__string__N0_8;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140string.det_base_string_to_int\'/2", (MR_String) "conversion failed");
    }
    return mercury__string__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__string__to_int_2_p_0(
  MR_String mercury__string__String_3,
  MR_Integer * mercury__string__Int_4)
{
  {
    MR_bool mercury__string__succeeded;

    mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, mercury__string__String_3, mercury__string__Int_4);
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__base_string_to_int_3_p_0(
  MR_Integer mercury__string__Base_4,
  MR_String mercury__string__String_5,
  MR_Integer * mercury__string__Int_6)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Char mercury__string__Char_7;
    MR_Integer mercury__string__End_8;
    MR_Integer mercury__string__Len_27;
    MR_Char mercury__string__CharPrime_39;

{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_27  = Length;
}
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__string__Len_27 ;
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
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_5 ;
	Index =  (MR_Integer) 0 ;
		{

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_39  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
        mercury__string__Char_7 = mercury__string__CharPrime_39;
      else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.unsafe_index\'/3", (MR_String) "illegal sequence");
      }
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__End_8  = Length;
}
      mercury__string__succeeded = (mercury__string__Char_7 == (MR_Char) 45);
      if (mercury__string__succeeded)
      {
        MR_Word mercury__string__TypeCtorInfo_21_21;
        MR_Word mercury__string__Var_11;
        MR_Integer mercury__string__Var_12;
        MR_Integer mercury__string__Var_13;
        MR_Box mercury__string__conv0_Int_6;

        mercury__string__succeeded = (mercury__string__End_8 > (MR_Integer) 1);
        if (mercury__string__succeeded)
        {
          mercury__string__Var_11 = mercury__string__base_negative_accumulator_1_f_0(mercury__string__Base_4);
          mercury__string__Var_12 = (MR_Integer) 1;
          mercury__string__Var_13 = (MR_Integer) 0;
          mercury__string__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          mercury__string__succeeded = mercury__string__foldl_between_6_p_2(mercury__string__TypeCtorInfo_21_21, mercury__string__Var_11, mercury__string__String_5, mercury__string__Var_12, mercury__string__End_8, ((MR_Box) (mercury__string__Var_13)), &mercury__string__conv0_Int_6);
          if (mercury__string__succeeded)
          {
            *mercury__string__Int_6 = ((MR_Integer) mercury__string__conv0_Int_6);
            mercury__string__succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        mercury__string__succeeded = (mercury__string__Char_7 == (MR_Char) 43);
        if (mercury__string__succeeded)
        {
          MR_Word mercury__string__TypeCtorInfo_22_22;
          MR_Word mercury__string__Var_15;
          MR_Integer mercury__string__Var_16;
          MR_Integer mercury__string__Var_17;
          MR_Box mercury__string__conv1_Int_6;

          mercury__string__succeeded = (mercury__string__End_8 > (MR_Integer) 1);
          if (mercury__string__succeeded)
          {
            mercury__string__Var_15 = mercury__string__base_accumulator_1_f_0(mercury__string__Base_4);
            mercury__string__Var_16 = (MR_Integer) 1;
            mercury__string__Var_17 = (MR_Integer) 0;
            mercury__string__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
            mercury__string__succeeded = mercury__string__foldl_between_6_p_2(mercury__string__TypeCtorInfo_22_22, mercury__string__Var_15, mercury__string__String_5, mercury__string__Var_16, mercury__string__End_8, ((MR_Box) (mercury__string__Var_17)), &mercury__string__conv1_Int_6);
            if (mercury__string__succeeded)
            {
              *mercury__string__Int_6 = ((MR_Integer) mercury__string__conv1_Int_6);
              mercury__string__succeeded = MR_TRUE;
            }
          }
        }
        else
        {
          MR_Word mercury__string__TypeCtorInfo_23_23;
          MR_Word mercury__string__Var_18;
          MR_Box mercury__string__conv2_Int_6;

          mercury__string__Var_18 = mercury__string__base_accumulator_1_f_0(mercury__string__Base_4);
          mercury__string__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          mercury__string__succeeded = mercury__string__foldl_between_6_p_2(mercury__string__TypeCtorInfo_23_23, mercury__string__Var_18, mercury__string__String_5, (MR_Integer) 0, mercury__string__End_8, ((MR_Box) ((MR_Integer) 0)), &mercury__string__conv2_Int_6);
          if (mercury__string__succeeded)
          {
            *mercury__string__Int_6 = ((MR_Integer) mercury__string__conv2_Int_6);
            mercury__string__succeeded = MR_TRUE;
          }
        }
      }
    }
    return mercury__string__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_1_f_0_5(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__closure = mercury__string__closure_arg;
    MR_Integer mercury__string__conv4_N_8;

    mercury__string__succeeded = mercury__string__accumulate_negative_int_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mercury__string__wrapper_arg_1), ((MR_Integer) mercury__string__wrapper_arg_2), &mercury__string__conv4_N_8);
    if (mercury__string__succeeded)
    {
      *mercury__string__wrapper_arg_3 = ((MR_Box) (mercury__string__conv4_N_8));
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_1_f_0_4(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__closure = mercury__string__closure_arg;
    MR_Integer mercury__string__conv3_N_8;

    mercury__string__succeeded = mercury__string__accumulate_negative_int_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mercury__string__wrapper_arg_1), ((MR_Integer) mercury__string__wrapper_arg_2), &mercury__string__conv3_N_8);
    if (mercury__string__succeeded)
    {
      *mercury__string__wrapper_arg_3 = ((MR_Box) (mercury__string__conv3_N_8));
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_1_f_0_3(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__closure = mercury__string__closure_arg;
    MR_Integer mercury__string__conv2_N_8;

    mercury__string__succeeded = mercury__string__accumulate_negative_int_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mercury__string__wrapper_arg_1), ((MR_Integer) mercury__string__wrapper_arg_2), &mercury__string__conv2_N_8);
    if (mercury__string__succeeded)
    {
      *mercury__string__wrapper_arg_3 = ((MR_Box) (mercury__string__conv2_N_8));
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_1_f_0_2(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__closure = mercury__string__closure_arg;
    MR_Integer mercury__string__conv1_N_8;

    mercury__string__succeeded = mercury__string__accumulate_negative_int_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mercury__string__wrapper_arg_1), ((MR_Integer) mercury__string__wrapper_arg_2), &mercury__string__conv1_N_8);
    if (mercury__string__succeeded)
    {
      *mercury__string__wrapper_arg_3 = ((MR_Box) (mercury__string__conv1_N_8));
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_1_f_0_1(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__closure = mercury__string__closure_arg;
    MR_Integer mercury__string__conv0_N_8;

    mercury__string__succeeded = mercury__string__accumulate_negative_int_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mercury__string__wrapper_arg_1), ((MR_Integer) mercury__string__wrapper_arg_2), &mercury__string__conv0_N_8);
    if (mercury__string__succeeded)
    {
      *mercury__string__wrapper_arg_3 = ((MR_Box) (mercury__string__conv0_N_8));
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

MR_Word MR_CALL 
mercury__string__base_negative_accumulator_1_f_0(
  MR_Integer mercury__string__Base_3)
{
  {
    MR_bool mercury__string__succeeded = (mercury__string__Base_3 == (MR_Integer) 10);
    MR_Word mercury__string__Pred_4;

    if (mercury__string__succeeded)
    {
      mercury__string__Pred_4 = (MR_Word) &mercury__string_scalar_common_3[5];
    }
    else
    {
      mercury__string__succeeded = (mercury__string__Base_3 == (MR_Integer) 16);
      if (mercury__string__succeeded)
      {
        mercury__string__Pred_4 = (MR_Word) &mercury__string_scalar_common_3[6];
      }
      else
      {
        mercury__string__succeeded = (mercury__string__Base_3 == (MR_Integer) 8);
        if (mercury__string__succeeded)
        {
          mercury__string__Pred_4 = (MR_Word) &mercury__string_scalar_common_3[7];
        }
        else
        {
          mercury__string__succeeded = (mercury__string__Base_3 == (MR_Integer) 2);
          if (mercury__string__succeeded)
          {
            mercury__string__Pred_4 = (MR_Word) &mercury__string_scalar_common_3[8];
          }
          else
            {
              mercury__string__Pred_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__string__Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), mercury__string__Pred_4, 1) = ((MR_Box) (mercury__string__base_negative_accumulator_1_f_0_5));
              MR_hl_field(MR_mktag(0), mercury__string__Pred_4, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), mercury__string__Pred_4, 3) = ((MR_Box) (mercury__string__Base_3));
            }
        }
      }
    }
    return mercury__string__Pred_4;
  }
}

static MR_bool MR_CALL 
mercury__string__base_accumulator_1_f_0_5(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__closure = mercury__string__closure_arg;
    MR_Integer mercury__string__conv4_N_8;

    mercury__string__succeeded = mercury__string__accumulate_int_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mercury__string__wrapper_arg_1), ((MR_Integer) mercury__string__wrapper_arg_2), &mercury__string__conv4_N_8);
    if (mercury__string__succeeded)
    {
      *mercury__string__wrapper_arg_3 = ((MR_Box) (mercury__string__conv4_N_8));
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_accumulator_1_f_0_4(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__closure = mercury__string__closure_arg;
    MR_Integer mercury__string__conv3_N_8;

    mercury__string__succeeded = mercury__string__accumulate_int_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mercury__string__wrapper_arg_1), ((MR_Integer) mercury__string__wrapper_arg_2), &mercury__string__conv3_N_8);
    if (mercury__string__succeeded)
    {
      *mercury__string__wrapper_arg_3 = ((MR_Box) (mercury__string__conv3_N_8));
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_accumulator_1_f_0_3(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__closure = mercury__string__closure_arg;
    MR_Integer mercury__string__conv2_N_8;

    mercury__string__succeeded = mercury__string__accumulate_int_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mercury__string__wrapper_arg_1), ((MR_Integer) mercury__string__wrapper_arg_2), &mercury__string__conv2_N_8);
    if (mercury__string__succeeded)
    {
      *mercury__string__wrapper_arg_3 = ((MR_Box) (mercury__string__conv2_N_8));
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_accumulator_1_f_0_2(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__closure = mercury__string__closure_arg;
    MR_Integer mercury__string__conv1_N_8;

    mercury__string__succeeded = mercury__string__accumulate_int_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mercury__string__wrapper_arg_1), ((MR_Integer) mercury__string__wrapper_arg_2), &mercury__string__conv1_N_8);
    if (mercury__string__succeeded)
    {
      *mercury__string__wrapper_arg_3 = ((MR_Box) (mercury__string__conv1_N_8));
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_accumulator_1_f_0_1(
  MR_Box mercury__string__closure_arg,
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box * mercury__string__wrapper_arg_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__closure = mercury__string__closure_arg;
    MR_Integer mercury__string__conv0_N_8;

    mercury__string__succeeded = mercury__string__accumulate_int_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mercury__string__wrapper_arg_1), ((MR_Integer) mercury__string__wrapper_arg_2), &mercury__string__conv0_N_8);
    if (mercury__string__succeeded)
    {
      *mercury__string__wrapper_arg_3 = ((MR_Box) (mercury__string__conv0_N_8));
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

MR_Word MR_CALL 
mercury__string__base_accumulator_1_f_0(
  MR_Integer mercury__string__Base_3)
{
  {
    MR_bool mercury__string__succeeded = (mercury__string__Base_3 == (MR_Integer) 10);
    MR_Word mercury__string__Pred_4;

    if (mercury__string__succeeded)
    {
      mercury__string__Pred_4 = (MR_Word) &mercury__string_scalar_common_3[1];
    }
    else
    {
      mercury__string__succeeded = (mercury__string__Base_3 == (MR_Integer) 16);
      if (mercury__string__succeeded)
      {
        mercury__string__Pred_4 = (MR_Word) &mercury__string_scalar_common_3[2];
      }
      else
      {
        mercury__string__succeeded = (mercury__string__Base_3 == (MR_Integer) 8);
        if (mercury__string__succeeded)
        {
          mercury__string__Pred_4 = (MR_Word) &mercury__string_scalar_common_3[3];
        }
        else
        {
          mercury__string__succeeded = (mercury__string__Base_3 == (MR_Integer) 2);
          if (mercury__string__succeeded)
          {
            mercury__string__Pred_4 = (MR_Word) &mercury__string_scalar_common_3[4];
          }
          else
            {
              mercury__string__Pred_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__string__Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_6[0]));
              MR_hl_field(MR_mktag(0), mercury__string__Pred_4, 1) = ((MR_Box) (mercury__string__base_accumulator_1_f_0_5));
              MR_hl_field(MR_mktag(0), mercury__string__Pred_4, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), mercury__string__Pred_4, 3) = ((MR_Box) (mercury__string__Base_3));
            }
        }
      }
    }
    return mercury__string__Pred_4;
  }
}

MR_Word MR_CALL 
mercury__string__string_to_doc_1_f_0(
  MR_String mercury__string__S_3)
{
  {
    MR_Word mercury__string__HeadVar__2_2;
    MR_Word mercury__string__Var_4;
    MR_Word mercury__string__Var_5 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_5[0]);
    MR_Word mercury__string__Var_7;
    MR_Word mercury__string__Var_8;
    MR_Word mercury__string__Var_9;
    MR_Word mercury__string__Var_12;

    {
      mercury__string__Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__Var_8, 0) = ((MR_Box) (mercury__string__S_3));
    }
    mercury__string__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__string__Var_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_1[3]);
    {
      mercury__string__Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__Var_7, 0) = ((MR_Box) (mercury__string__Var_8));
      MR_hl_field(MR_mktag(1), mercury__string__Var_7, 1) = ((MR_Box) (mercury__string__Var_9));
    }
    {
      mercury__string__Var_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__Var_4, 0) = ((MR_Box) (mercury__string__Var_5));
      MR_hl_field(MR_mktag(1), mercury__string__Var_4, 1) = ((MR_Box) (mercury__string__Var_7));
    }
    {
      mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__string__HeadVar__2_2, 0) = ((MR_Box) (mercury__string__Var_4));
    }
    return mercury__string__HeadVar__2_2;
  }
}

MR_String MR_CALL 
mercury__string__format_table_max_2_f_0(
  MR_Word mercury__string__ColumnsLimits_4,
  MR_String mercury__string__Separator_5)
{
  {
    MR_String mercury__string__Table_6;
    MR_Word mercury__string__TypeCtorInfo_23_23;
    MR_Word mercury__string__MaxWidthsSenses_7;
    MR_Word mercury__string__Columns_8;
    MR_Integer mercury__string__SepLen_9;
    MR_Word mercury__string__RevRows_10;
    MR_Word mercury__string__Rows_11;
    MR_Word mercury__string__Var_14;

    mercury__string__MaxWidthsSenses_7 = mercury__string__map__ho12_2_f_in__list_0(mercury__string__ColumnsLimits_4);
    mercury__string__Columns_8 = mercury__string__map__ho11_2_f_in__list_0(mercury__string__ColumnsLimits_4);
    mercury__string__count_codepoints_2_p_0(mercury__string__Separator_5, &mercury__string__SepLen_9);
    mercury__string__Var_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__string__generate_rows_6_p_0(mercury__string__MaxWidthsSenses_7, mercury__string__Separator_5, mercury__string__SepLen_9, mercury__string__Columns_8, mercury__string__Var_14, &mercury__string__RevRows_10);
    mercury__string__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_23_23, mercury__string__RevRows_10, &mercury__string__Rows_11);
    mercury__string__Table_6 = mercury__string__join_list_2_f_0((MR_String) "\n", mercury__string__Rows_11);
    return mercury__string__Table_6;
  }
}

static MR_Word MR_CALL 
mercury__string__map__ho12_2_f_in__list_0(
  MR_Word mercury__string__HeadVar__2_2)
{
  {
    MR_Word mercury__string__HeadVar__3_3;

    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word mercury__string__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__string__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__string__V_8_8;
      MR_Word mercury__string__V_9_9;

      mercury__string__V_8_8 = mercury__string__find_max_length_with_limit_1_f_0(mercury__string__V_6_6);
      mercury__string__V_9_9 = mercury__string__map__ho12_2_f_in__list_0(mercury__string__V_7_7);
      {
        mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
        MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
      }
    }
    return mercury__string__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__string__find_max_length_with_limit_1_f_0(
  MR_Word mercury__string__HeadVar__1_1)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Word mercury__string__HeadVar__2_2;
    MR_Word mercury__string__JustColumn_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__string__MaybeLimit_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__string__Sense_5;
    MR_Integer mercury__string__MaxLength_6;
    MR_Word mercury__string__Strings_7;
    MR_Integer mercury__string__MaxLength0_8;

    if (((MR_tag((MR_Word) mercury__string__JustColumn_3)) == (MR_mktag((MR_Integer) 0))))
    {
      mercury__string__Strings_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__JustColumn_3, (MR_Integer) 0)));
      mercury__string__Sense_5 = (MR_Integer) 0;
    }
    else
    {
      mercury__string__Strings_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__JustColumn_3, (MR_Integer) 0)));
      mercury__string__Sense_5 = (MR_Integer) 1;
    }
    mercury__string__foldl__ho9_4_p_in__list_0(mercury__string__Strings_7, (MR_Integer) 0, &mercury__string__MaxLength0_8);
    if ((mercury__string__MaybeLimit_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__string__MaxLength_6 = mercury__string__MaxLength0_8;
    else
    {
      MR_Integer mercury__string__Limit_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__MaybeLimit_4, (MR_Integer) 0)));

      mercury__string__succeeded = (mercury__string__MaxLength0_8 > mercury__string__Limit_9);
      if (mercury__string__succeeded)
        mercury__string__MaxLength_6 = mercury__string__Limit_9;
      else
        mercury__string__MaxLength_6 = mercury__string__MaxLength0_8;
    }
    {
      mercury__string__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, 0) = ((MR_Box) (mercury__string__Sense_5));
      MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, 1) = ((MR_Box) (mercury__string__MaxLength_6));
    }
    return mercury__string__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
mercury__string__map__ho11_2_f_in__list_0(
  MR_Word mercury__string__HeadVar__2_2)
{
  {
    MR_Word mercury__string__HeadVar__3_3;

    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word mercury__string__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__string__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__string__V_8_8;
      MR_Word mercury__string__V_9_9;
      MR_Word mercury__string__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_6_6, (MR_Integer) 0)));
      MR_Word mercury__string__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_6_6, (MR_Integer) 1)));

      if (((MR_tag((MR_Word) mercury__string__Var_19)) == (MR_mktag((MR_Integer) 0))))
        mercury__string__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__Var_19, (MR_Integer) 0)));
      else
        mercury__string__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__Var_19, (MR_Integer) 0)));
      mercury__string__V_9_9 = mercury__string__map__ho11_2_f_in__list_0(mercury__string__V_7_7);
      {
        mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
        MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
      }
    }
    return mercury__string__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__string__generate_rows_6_p_0(
  MR_Word mercury__string__MaxWidthsSenses_7,
  MR_String mercury__string__Separator_8,
  MR_Integer mercury__string__SepLen_9,
  MR_Word mercury__string__Columns0_10,
  MR_Word mercury__string__STATE_VARIABLE_RevRows_0_15,
  MR_Word * mercury__string__STATE_VARIABLE_RevRows_16)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;

      mercury__string__succeeded = mercury__string__all_empty_1_p_0(mercury__string__Columns0_10);
      if (mercury__string__succeeded)
        *mercury__string__STATE_VARIABLE_RevRows_16 = mercury__string__STATE_VARIABLE_RevRows_0_15;
      else
      {
        MR_Word mercury__string__Line_12;
        MR_Word mercury__string__Columns_13;
        MR_String mercury__string__Row_14;
        MR_Word mercury__string__STATE_VARIABLE_RevRows_18_18;

        mercury__string__get_next_line_3_p_0(mercury__string__Columns0_10, &mercury__string__Line_12, &mercury__string__Columns_13);
        mercury__string__pad_row_6_p_0(mercury__string__MaxWidthsSenses_7, mercury__string__Line_12, mercury__string__Separator_8, mercury__string__SepLen_9, (MR_Integer) 0, &mercury__string__Row_14);
        {
          mercury__string__STATE_VARIABLE_RevRows_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevRows_18_18, 0) = ((MR_Box) (mercury__string__Row_14));
          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevRows_18_18, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevRows_0_15));
        }
        /* direct tailcall eliminated */
        {
          MR_Word mercury__string__next_value_of_Columns0_10 = mercury__string__Columns_13;
          MR_Word mercury__string__next_value_of_STATE_VARIABLE_RevRows_0_15 = mercury__string__STATE_VARIABLE_RevRows_18_18;

          mercury__string__Columns0_10 = mercury__string__next_value_of_Columns0_10;
          mercury__string__STATE_VARIABLE_RevRows_0_15 = mercury__string__next_value_of_STATE_VARIABLE_RevRows_0_15;
        }
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__pad_row_6_p_0(
  MR_Word mercury__string__HeadVar__1_1,
  MR_Word mercury__string__HeadVar__2_2,
  MR_String mercury__string__Separator_3,
  MR_Integer mercury__string__SepLen_4,
  MR_Integer mercury__string__CurColumn_5,
  MR_String * mercury__string__HeadVar__6_6)
{
  {
    MR_bool mercury__string__succeeded;

    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__string__HeadVar__6_6 = (MR_String) "";
      else
      {
        {
          mercury__require__error_2_p_0((MR_String) "predicate \140string.pad_row\'/6", (MR_String) "list length mismatch");
          return;
        }
      }
    else
    {
      MR_Word mercury__string__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mercury__string__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));

      if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__error_2_p_0((MR_String) "predicate \140string.pad_row\'/6", (MR_String) "list length mismatch");
          return;
        }
      }
      else
      {
        MR_Word mercury__string__Justify_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__Var_55, (MR_Integer) 0)));
        MR_Integer mercury__string__MaxWidth_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__Var_55, (MR_Integer) 1)));
        MR_String mercury__string__ColumnStr0_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__string__ColumnStrs0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mercury__string__NextColumn_19;
        MR_String mercury__string__LineRest_20;
        MR_Integer mercury__string__Var_27 = (mercury__string__CurColumn_5 + mercury__string__MaxWidth_11);
        MR_Integer mercury__string__Var_28;

        mercury__string__NextColumn_19 = (mercury__string__Var_27 + mercury__string__SepLen_4);
        mercury__string__pad_row_6_p_0(mercury__string__Var_54, mercury__string__ColumnStrs0_14, mercury__string__Separator_3, mercury__string__SepLen_4, mercury__string__NextColumn_19, &mercury__string__LineRest_20);
        mercury__string__count_codepoints_2_p_0(mercury__string__ColumnStr0_13, &mercury__string__Var_28);
        mercury__string__succeeded = (mercury__string__Var_28 <= mercury__string__MaxWidth_11);
        if (mercury__string__succeeded)
        {
          MR_String mercury__string__ColumnStr_21;

          switch (mercury__string__Justify_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__string__Length_66;

                mercury__string__count_codepoints_2_p_0(mercury__string__ColumnStr0_13, &mercury__string__Length_66);
                mercury__string__succeeded = (mercury__string__Length_66 < mercury__string__MaxWidth_11);
                if (mercury__string__succeeded)
                {
                  MR_Integer mercury__string__Count_67 = (mercury__string__MaxWidth_11 - mercury__string__Length_66);
                  MR_String mercury__string__PadString_68;

                  mercury__string__duplicate_char_3_p_0((MR_Char) 32, mercury__string__Count_67, &mercury__string__PadString_68);
{
#define MR_PROC_LABEL mercury__string__pad_row_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__ColumnStr0_13 ;
	S2 =  mercury__string__PadString_68 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__ColumnStr_21  = S3;
}
                }
                else
                  mercury__string__ColumnStr_21 = mercury__string__ColumnStr0_13;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__string__ColumnStr_21 = mercury__string__pad_left_3_f_0(mercury__string__ColumnStr0_13, (MR_Char) 32, mercury__string__MaxWidth_11);
              }
              break;
          }
          if ((mercury__string__Var_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mercury__string__HeadVar__6_6 = mercury__string__ColumnStr_21;
          else
          {
            MR_String mercury__string__Var_31;

            mercury__string__Var_31 = mercury__string__f_43_43_2_f_0(mercury__string__Separator_3, mercury__string__LineRest_20);
            *mercury__string__HeadVar__6_6 = mercury__string__f_43_43_2_f_0(mercury__string__ColumnStr_21, mercury__string__Var_31);
          }
        }
        else
        if ((mercury__string__Var_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__string__HeadVar__6_6 = mercury__string__ColumnStr0_13;
        else
        {
          MR_String mercury__string__Var_32;
          MR_String mercury__string__Var_33;
          MR_String mercury__string__Var_35;
          MR_String mercury__string__Var_36;

          mercury__string__duplicate_char_3_p_0((MR_Char) 32, mercury__string__NextColumn_19, &mercury__string__Var_36);
          mercury__string__Var_35 = mercury__string__f_43_43_2_f_0(mercury__string__Var_36, mercury__string__LineRest_20);
          mercury__string__Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "\n", mercury__string__Var_35);
          mercury__string__Var_32 = mercury__string__f_43_43_2_f_0(mercury__string__Separator_3, mercury__string__Var_33);
          *mercury__string__HeadVar__6_6 = mercury__string__f_43_43_2_f_0(mercury__string__ColumnStr0_13, mercury__string__Var_32);
        }
      }
    }
  }
}

void MR_CALL 
mercury__string__get_next_line_3_p_0(
  MR_Word mercury__string__HeadVar__1_1,
  MR_Word * mercury__string__HeadVar__2_2,
  MR_Word * mercury__string__HeadVar__3_3)
{
  if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
  else
  {
    MR_Word mercury__string__Column_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__string__Columns_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
    MR_String mercury__string__ColumnTop_6;
    MR_Word mercury__string__ColumnTops_7;
    MR_Word mercury__string__ColumnRest_8;
    MR_Word mercury__string__ColumnRests_9;

    if ((mercury__string__Column_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__error_2_p_0((MR_String) "predicate \140string.get_next_line\'/3", (MR_String) "list length mismatch");
        return;
      }
    }
    else
    {
      mercury__string__ColumnTop_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__Column_4, (MR_Integer) 0)));
      mercury__string__ColumnRest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__Column_4, (MR_Integer) 1)));
    }
    mercury__string__get_next_line_3_p_0(mercury__string__Columns_5, &mercury__string__ColumnTops_7, &mercury__string__ColumnRests_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *mercury__string__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__ColumnTop_6));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__ColumnTops_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *mercury__string__HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__ColumnRest_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__ColumnRests_9));
    }
  }
}

MR_bool MR_CALL 
mercury__string__all_empty_1_p_0(
  MR_Word mercury__string__HeadVar__1_1)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;

      if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        mercury__string__succeeded = MR_TRUE;
      else
      {
        MR_Word mercury__string__List_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__string__Lists_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));

        mercury__string__succeeded = (mercury__string__List_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mercury__string__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Word mercury__string__next_value_of_HeadVar__1_1 = mercury__string__Lists_3;

            mercury__string__HeadVar__1_1 = mercury__string__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      }
      return mercury__string__succeeded;
    }
    break;
  }
}

MR_String MR_CALL 
mercury__string__format_table_2_f_0(
  MR_Word mercury__string__Columns_4,
  MR_String mercury__string__Separator_5)
{
  {
    MR_String mercury__string__Table_6;
    MR_Word mercury__string__MaxWidths_7;
    MR_Word mercury__string__PaddedColumns_8;
    MR_Word mercury__string__Rows_11;

    mercury__string__MaxWidths_7 = mercury__string__map__ho14_2_f_in__list_0(mercury__string__Columns_4);
    mercury__string__PaddedColumns_8 = mercury__string__map_corresponding__ho13_3_f_in__list_0(mercury__string__MaxWidths_7, mercury__string__Columns_4);
    if ((mercury__string__PaddedColumns_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__string__Rows_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word mercury__string__PaddedHead_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__PaddedColumns_8, (MR_Integer) 0)));
      MR_Word mercury__string__PaddedTail_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__PaddedColumns_8, (MR_Integer) 1)));

      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_52_93_95_48_4_p_in__list_0(mercury__string__Separator_5, mercury__string__PaddedTail_10, mercury__string__PaddedHead_9, &mercury__string__Rows_11);
    }
    mercury__string__Table_6 = mercury__string__join_list_2_f_0((MR_String) "\n", mercury__string__Rows_11);
    return mercury__string__Table_6;
  }
}

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_52_93_95_48_4_p_in__list_0(
  MR_String mercury__string__Var_20,
  MR_Word mercury__string__HeadVar__2_2,
  MR_Word mercury__string__HeadVar__3_3,
  MR_Word * mercury__string__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__string__HeadVar__4_4 = mercury__string__HeadVar__3_3;
    else
    {
      MR_Word mercury__string__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__string__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__string__V_15_13;

      mercury__string__V_15_13 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_51_95_95_91_50_93_95_48_3_f_in__list_0(mercury__string__Var_20, mercury__string__V_10_9, mercury__string__HeadVar__3_3);
      /* direct tailcall eliminated */
      {
        MR_Word mercury__string__next_value_of_HeadVar__2_2 = mercury__string__V_11_10;
        MR_Word mercury__string__next_value_of_HeadVar__3_3 = mercury__string__V_15_13;

        mercury__string__HeadVar__2_2 = mercury__string__next_value_of_HeadVar__2_2;
        mercury__string__HeadVar__3_3 = mercury__string__next_value_of_HeadVar__3_3;
      }
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_51_95_95_91_50_93_95_48_3_f_in__list_0(
  MR_String mercury__string__Var_36,
  MR_Word mercury__string__HeadVar__2_2,
  MR_Word mercury__string__HeadVar__3_3)
{
  {
    MR_Word mercury__string__HeadVar__4_4;

    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        mercury__string__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
      }
    else
    {
      MR_Word mercury__string__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
      MR_String mercury__string__Var_35 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

      if ((mercury__string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
      }
      else
      {
        MR_String mercury__string__V_21_23 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__string__V_22_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 1)));
        MR_String mercury__string__V_23_25;
        MR_Word mercury__string__V_24_26;
        MR_String mercury__string__Var_48;

{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_51_95_95_91_50_93_95_48_3_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Var_36 ;
	S2 =  mercury__string__Var_35 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_48  = S3;
}
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_51_95_95_91_50_93_95_48_3_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_21_23 ;
	S2 =  mercury__string__Var_48 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_23_25  = S3;
}
        mercury__string__V_24_26 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_51_95_95_91_50_93_95_48_3_f_in__list_0(mercury__string__Var_36, mercury__string__Var_34, mercury__string__V_22_24);
        {
          mercury__string__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_4, 0) = ((MR_Box) (mercury__string__V_23_25));
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_4, 1) = ((MR_Box) (mercury__string__V_24_26));
        }
      }
    }
    return mercury__string__HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mercury__string__map__ho14_2_f_in__list_0(
  MR_Word mercury__string__HeadVar__2_2)
{
  {
    MR_Word mercury__string__HeadVar__3_3;

    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word mercury__string__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__string__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer mercury__string__V_8_8;
      MR_Word mercury__string__V_9_9;

      mercury__string__V_8_8 = mercury__string__find_max_length_1_f_0(mercury__string__V_6_6);
      mercury__string__V_9_9 = mercury__string__map__ho14_2_f_in__list_0(mercury__string__V_7_7);
      {
        mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
        MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
      }
    }
    return mercury__string__HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__string__find_max_length_1_f_0(
  MR_Word mercury__string__JustColumn_3)
{
  {
    MR_Integer mercury__string__MaxLength_4;
    MR_Word mercury__string__Strings_5;

    if (((MR_tag((MR_Word) mercury__string__JustColumn_3)) == (MR_mktag((MR_Integer) 0))))
      mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__JustColumn_3, (MR_Integer) 0)));
    else
      mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__JustColumn_3, (MR_Integer) 0)));
    mercury__string__foldl__ho9_4_p_in__list_0(mercury__string__Strings_5, (MR_Integer) 0, &mercury__string__MaxLength_4);
    return mercury__string__MaxLength_4;
  }
}

static void MR_CALL 
mercury__string__foldl__ho9_4_p_in__list_0(
  MR_Word mercury__string__HeadVar__2_2,
  MR_Integer mercury__string__HeadVar__3_3,
  MR_Integer * mercury__string__HeadVar__4_4)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;

      if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__string__HeadVar__4_4 = mercury__string__HeadVar__3_3;
      else
      {
        MR_String mercury__string__V_10_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__string__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
        MR_Integer mercury__string__V_15_13;
        MR_Integer mercury__string__Length_19;

        mercury__string__count_codepoints_2_p_0(mercury__string__V_10_9, &mercury__string__Length_19);
        mercury__string__succeeded = (mercury__string__Length_19 > mercury__string__HeadVar__3_3);
        if (mercury__string__succeeded)
          mercury__string__V_15_13 = mercury__string__Length_19;
        else
          mercury__string__V_15_13 = mercury__string__HeadVar__3_3;
        /* direct tailcall eliminated */
        {
          MR_Word mercury__string__next_value_of_HeadVar__2_2 = mercury__string__V_11_10;
          MR_Integer mercury__string__next_value_of_HeadVar__3_3 = mercury__string__V_15_13;

          mercury__string__HeadVar__2_2 = mercury__string__next_value_of_HeadVar__2_2;
          mercury__string__HeadVar__3_3 = mercury__string__next_value_of_HeadVar__3_3;
        }
        continue;
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__string__map_corresponding__ho13_3_f_in__list_0(
  MR_Word mercury__string__HeadVar__2_2,
  MR_Word mercury__string__HeadVar__3_3)
{
  {
    MR_Word mercury__string__HeadVar__4_4;

    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        mercury__string__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
      }
    else
    {
      MR_Word mercury__string__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer mercury__string__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

      if ((mercury__string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
      }
      else
      {
        MR_Word mercury__string__V_21_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__string__V_22_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__string__V_23_25;
        MR_Word mercury__string__V_24_26;

        mercury__string__V_23_25 = mercury__string__pad_column_2_f_0(mercury__string__Var_35, mercury__string__V_21_23);
        mercury__string__V_24_26 = mercury__string__map_corresponding__ho13_3_f_in__list_0(mercury__string__Var_34, mercury__string__V_22_24);
        {
          mercury__string__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_4, 0) = ((MR_Box) (mercury__string__V_23_25));
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_4, 1) = ((MR_Box) (mercury__string__V_24_26));
        }
      }
    }
    return mercury__string__HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__string__pad_column_2_f_0(
  MR_Integer mercury__string__Width_1,
  MR_Word mercury__string__HeadVar__2_2)
{
  {
    MR_Word mercury__string__HeadVar__3_3;

    if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

      mercury__string__HeadVar__3_3 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_56_95_95_91_51_93_95_48_2_f_in__list_0((MR_Char) 32, mercury__string__Width_1, mercury__string__Strings_5);
    }
    else
    {
      MR_Word mercury__string__Strings_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

      mercury__string__HeadVar__3_3 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0((MR_Char) 32, mercury__string__Width_1, mercury__string__Strings_9);
    }
    return mercury__string__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_56_95_95_91_51_93_95_48_2_f_in__list_0(
  MR_Char mercury__string__Var_12,
  MR_Integer mercury__string__Var_13,
  MR_Word mercury__string__HeadVar__2_2)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Word mercury__string__HeadVar__3_3;

    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_String mercury__string__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__string__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
      MR_String mercury__string__V_8_8;
      MR_Word mercury__string__V_9_9;
      MR_Integer mercury__string__Length_25;

      mercury__string__count_codepoints_2_p_0(mercury__string__V_6_6, &mercury__string__Length_25);
      mercury__string__succeeded = (mercury__string__Length_25 < mercury__string__Var_13);
      if (mercury__string__succeeded)
      {
        MR_Integer mercury__string__Count_26 = (mercury__string__Var_13 - mercury__string__Length_25);
        MR_String mercury__string__PadString_27;

        mercury__string__duplicate_char_3_p_0(mercury__string__Var_12, mercury__string__Count_26, &mercury__string__PadString_27);
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_56_95_95_91_51_93_95_48_2_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_6_6 ;
	S2 =  mercury__string__PadString_27 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
}
      }
      else
        mercury__string__V_8_8 = mercury__string__V_6_6;
      mercury__string__V_9_9 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_56_95_95_91_51_93_95_48_2_f_in__list_0(mercury__string__Var_12, mercury__string__Var_13, mercury__string__V_7_7);
      {
        mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
        MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
      }
    }
    return mercury__string__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0(
  MR_Char mercury__string__Var_12,
  MR_Integer mercury__string__Var_13,
  MR_Word mercury__string__HeadVar__2_2)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Word mercury__string__HeadVar__3_3;

    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_String mercury__string__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__string__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
      MR_String mercury__string__V_8_8;
      MR_Word mercury__string__V_9_9;
      MR_Integer mercury__string__Length_25;

      mercury__string__count_codepoints_2_p_0(mercury__string__V_6_6, &mercury__string__Length_25);
      mercury__string__succeeded = (mercury__string__Length_25 < mercury__string__Var_13);
      if (mercury__string__succeeded)
      {
        MR_Integer mercury__string__Count_26 = (mercury__string__Var_13 - mercury__string__Length_25);
        MR_String mercury__string__PadString_27;

        mercury__string__duplicate_char_3_p_0(mercury__string__Var_12, mercury__string__Count_26, &mercury__string__PadString_27);
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_27 ;
	S2 =  mercury__string__V_6_6 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
}
      }
      else
        mercury__string__V_8_8 = mercury__string__V_6_6;
      mercury__string__V_9_9 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0(mercury__string__Var_12, mercury__string__Var_13, mercury__string__V_7_7);
      {
        mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
        MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
      }
    }
    return mercury__string__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__string__foldr_substring_6_p_4(
  MR_Word mercury__string__TypeInfo_for_T_17,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__Count_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_Integer mercury__string__ClampStart_12;
    MR_Integer mercury__string__ClampEnd_13;

    mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    mercury__string__foldr_between_6_p_4(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldr_substring_6_p_3(
  MR_Word mercury__string__TypeInfo_for_T_17,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__Count_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_Integer mercury__string__ClampStart_12;
    MR_Integer mercury__string__ClampEnd_13;

    mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    mercury__string__foldr_between_6_p_3(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

MR_bool MR_CALL 
mercury__string__foldr_substring_6_p_2(
  MR_Word mercury__string__TypeInfo_for_T_17,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__Count_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__ClampStart_12;
    MR_Integer mercury__string__ClampEnd_13;

    mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    mercury__string__succeeded = mercury__string__foldr_between_6_p_2(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    return mercury__string__succeeded;
  }
}

void MR_CALL 
mercury__string__foldr_substring_6_p_1(
  MR_Word mercury__string__TypeInfo_for_T_17,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__Count_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  {
    MR_Integer mercury__string__ClampStart_12;
    MR_Integer mercury__string__ClampEnd_13;

    mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    mercury__string__foldr_between_6_p_1(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
  }
}

void MR_CALL 
mercury__string__foldr_substring_6_p_0(
  MR_Word mercury__string__TypeInfo_for_T_17,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__Count_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  {
    MR_Integer mercury__string__ClampStart_12;
    MR_Integer mercury__string__ClampEnd_13;

    mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    mercury__string__foldr_between_6_p_0(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
  }
}

MR_Box MR_CALL 
mercury__string__foldr_substring_5_f_0(
  MR_Word mercury__string__TypeInfo_for_T_15,
  MR_Word mercury__string__F_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__Count_10,
  MR_Box mercury__string__Acc0_11)
{
  {
    MR_Box mercury__string__Acc_12;
    MR_Integer mercury__string__ClampStart_13;
    MR_Integer mercury__string__ClampEnd_14;

    mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    mercury__string__Acc_12 = mercury__string__foldr_between_5_f_0(mercury__string__TypeInfo_for_T_15, mercury__string__F_7, mercury__string__String_8, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, mercury__string__Acc0_11);
    return mercury__string__Acc_12;
  }
}

MR_Box MR_CALL 
mercury__string__foldr_between_5_f_0(
  MR_Word mercury__string__TypeInfo_for_T_23,
  MR_Word mercury__string__F_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__Count_10,
  MR_Box mercury__string__Acc0_11)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_9);
    MR_Box mercury__string__Acc_12;
    MR_Integer mercury__string__Start_31;
    MR_Integer mercury__string__End_32;
    MR_Integer mercury__string__Var_34;

    if (mercury__string__succeeded)
      mercury__string__Start_31 = (MR_Integer) 0;
    else
      mercury__string__Start_31 = mercury__string__Start_9;
{
#define MR_PROC_LABEL mercury__string__foldr_between_5_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_34  = Length;
}
    mercury__string__succeeded = (mercury__string__Count_10 < mercury__string__Var_34);
    if (mercury__string__succeeded)
      mercury__string__End_32 = mercury__string__Count_10;
    else
      mercury__string__End_32 = mercury__string__Var_34;
    mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_7, mercury__string__String_8, mercury__string__Start_31, mercury__string__End_32, mercury__string__Acc0_11, &mercury__string__Acc_12);
    return mercury__string__Acc_12;
  }
}

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word mercury__string__Var_20,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__I_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
      MR_Integer mercury__string__J_12;
      MR_Char mercury__string__Char_13;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_10 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
      }
      if (mercury__string__succeeded)
      {
        MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
        MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__Var_20, (MR_Integer) 1)));

        mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__Var_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_I_10 = mercury__string__J_12;
          MR_Box mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

          mercury__string__I_10 = mercury__string__next_value_of_I_10;
          mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14;
        }
        continue;
      }
      else
        *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
    }
    break;
  }
}

void MR_CALL 
mercury__string__foldr_4_p_4(
  MR_Word mercury__string__TypeInfo_for_T_13,
  MR_Word mercury__string__Closure_5,
  MR_String mercury__string__String_6,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_Integer mercury__string__Var_11;

{
#define MR_PROC_LABEL mercury__string__foldr_4_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_11  = Length;
}
    mercury__string__foldr_between_6_p_4(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Var_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldr_between_6_p_4(
  MR_Word mercury__string__TypeInfo_for_T_19,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start0_9,
  MR_Integer mercury__string__End0_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
    MR_Integer mercury__string__Start_12;
    MR_Integer mercury__string__End_13;
    MR_Integer mercury__string__Var_17;

    if (mercury__string__succeeded)
      mercury__string__Start_12 = (MR_Integer) 0;
    else
      mercury__string__Start_12 = mercury__string__Start0_9;
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_17  = Length;
}
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__Var_17);
    if (mercury__string__succeeded)
      mercury__string__End_13 = mercury__string__End0_10;
    else
      mercury__string__End_13 = mercury__string__Var_17;
    mercury__string__foldr_between_2_6_p_4(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__string__foldr_between_2_6_p_4_1(
  void * mercury__string__env_ptr_arg)
{
  {
    struct mercury__string__foldr_between_2_6_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldr_between_2_6_p_4_env_0_s *) mercury__string__env_ptr_arg;

    mercury__string__foldr_between_2_6_p_4((mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__Start_9, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldr_between_2_6_p_4(
  MR_Word mercury__string__TypeInfo_for_T_18,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__I_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    struct mercury__string__foldr_between_2_6_p_4_env_0_s mercury__string__env;

    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18 = mercury__string__TypeInfo_for_T_18;
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7 = mercury__string__Closure_7;
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__String_8 = mercury__string__String_8;
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9 = mercury__string__Start_9;
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont = mercury__string__cont;
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9);
      MR_Char mercury__string__Char_13;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldr_between_2_6_p_4

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__String_8 ;
	Index =  mercury__string__I_10 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = ((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__J_12 >= (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9);
      }
      if (mercury__string__succeeded)
      {
        void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7, (MR_Integer) 1)));

        mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldr_between_2_6_p_4_1, &mercury__string__env);
      }
      else
      {
        *((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
        ((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont)((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr);
      }
    }
  }
}

void MR_CALL 
mercury__string__foldr_4_p_3(
  MR_Word mercury__string__TypeInfo_for_T_13,
  MR_Word mercury__string__Closure_5,
  MR_String mercury__string__String_6,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_Integer mercury__string__Var_11;

{
#define MR_PROC_LABEL mercury__string__foldr_4_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_11  = Length;
}
    mercury__string__foldr_between_6_p_3(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Var_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldr_between_6_p_3(
  MR_Word mercury__string__TypeInfo_for_T_19,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start0_9,
  MR_Integer mercury__string__End0_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
    MR_Integer mercury__string__Start_12;
    MR_Integer mercury__string__End_13;
    MR_Integer mercury__string__Var_17;

    if (mercury__string__succeeded)
      mercury__string__Start_12 = (MR_Integer) 0;
    else
      mercury__string__Start_12 = mercury__string__Start0_9;
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_17  = Length;
}
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__Var_17);
    if (mercury__string__succeeded)
      mercury__string__End_13 = mercury__string__End0_10;
    else
      mercury__string__End_13 = mercury__string__Var_17;
    mercury__string__foldr_between_2_6_p_3(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__string__foldr_between_2_6_p_3_1(
  void * mercury__string__env_ptr_arg)
{
  {
    struct mercury__string__foldr_between_2_6_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldr_between_2_6_p_3_env_0_s *) mercury__string__env_ptr_arg;

    mercury__string__foldr_between_2_6_p_3((mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__Start_9, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldr_between_2_6_p_3(
  MR_Word mercury__string__TypeInfo_for_T_18,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__I_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    struct mercury__string__foldr_between_2_6_p_3_env_0_s mercury__string__env;

    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18 = mercury__string__TypeInfo_for_T_18;
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7 = mercury__string__Closure_7;
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__String_8 = mercury__string__String_8;
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9 = mercury__string__Start_9;
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont = mercury__string__cont;
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9);
      MR_Char mercury__string__Char_13;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldr_between_2_6_p_3

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__String_8 ;
	Index =  mercury__string__I_10 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = ((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__J_12 >= (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9);
      }
      if (mercury__string__succeeded)
      {
        void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7, (MR_Integer) 1)));

        mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldr_between_2_6_p_3_1, &mercury__string__env);
      }
      else
      {
        *((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
        ((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont)((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string__foldr_4_p_2(
  MR_Word mercury__string__TypeInfo_for_T_13,
  MR_Word mercury__string__Closure_5,
  MR_String mercury__string__String_6,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__Var_11;

{
#define MR_PROC_LABEL mercury__string__foldr_4_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_11  = Length;
}
    mercury__string__succeeded = mercury__string__foldr_between_6_p_2(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Var_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__foldr_between_6_p_2(
  MR_Word mercury__string__TypeInfo_for_T_19,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start0_9,
  MR_Integer mercury__string__End0_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
    MR_Integer mercury__string__Start_12;
    MR_Integer mercury__string__End_13;
    MR_Integer mercury__string__Var_17;

    if (mercury__string__succeeded)
      mercury__string__Start_12 = (MR_Integer) 0;
    else
      mercury__string__Start_12 = mercury__string__Start0_9;
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_17  = Length;
}
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__Var_17);
    if (mercury__string__succeeded)
      mercury__string__End_13 = mercury__string__End0_10;
    else
      mercury__string__End_13 = mercury__string__Var_17;
    mercury__string__succeeded = mercury__string__foldr_between_2_6_p_2(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__foldr_between_2_6_p_2(
  MR_Word mercury__string__TypeInfo_for_T_18,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__I_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
      MR_Integer mercury__string__J_12;
      MR_Char mercury__string__Char_13;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldr_between_2_6_p_2

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_10 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
      }
      if (mercury__string__succeeded)
      {
        MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

        mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
        if (mercury__string__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__string__next_value_of_I_10 = mercury__string__J_12;
            MR_Box mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

            mercury__string__I_10 = mercury__string__next_value_of_I_10;
            mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14;
          }
          continue;
        }
      }
      else
      {
        *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
        mercury__string__succeeded = MR_TRUE;
      }
      return mercury__string__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__string__foldr_4_p_1(
  MR_Word mercury__string__TypeInfo_for_T_13,
  MR_Word mercury__string__Closure_5,
  MR_String mercury__string__String_6,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9)
{
  {
    MR_Integer mercury__string__Var_11;

{
#define MR_PROC_LABEL mercury__string__foldr_4_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_11  = Length;
}
    mercury__string__foldr_between_6_p_1(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Var_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
  }
}

void MR_CALL 
mercury__string__foldr_between_6_p_1(
  MR_Word mercury__string__TypeInfo_for_T_19,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start0_9,
  MR_Integer mercury__string__End0_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
    MR_Integer mercury__string__Start_12;
    MR_Integer mercury__string__End_13;
    MR_Integer mercury__string__Var_17;

    if (mercury__string__succeeded)
      mercury__string__Start_12 = (MR_Integer) 0;
    else
      mercury__string__Start_12 = mercury__string__Start0_9;
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_17  = Length;
}
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__Var_17);
    if (mercury__string__succeeded)
      mercury__string__End_13 = mercury__string__End0_10;
    else
      mercury__string__End_13 = mercury__string__Var_17;
    mercury__string__foldr_between_2_6_p_1(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
  }
}

void MR_CALL 
mercury__string__foldr_between_2_6_p_1(
  MR_Word mercury__string__TypeInfo_for_T_18,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__I_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
      MR_Integer mercury__string__J_12;
      MR_Char mercury__string__Char_13;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldr_between_2_6_p_1

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_10 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
      }
      if (mercury__string__succeeded)
      {
        MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
        void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

        mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_I_10 = mercury__string__J_12;
          MR_Box mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

          mercury__string__I_10 = mercury__string__next_value_of_I_10;
          mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14;
        }
        continue;
      }
      else
        *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
    }
    break;
  }
}

void MR_CALL 
mercury__string__foldr_4_p_0(
  MR_Word mercury__string__TypeInfo_for_T_13,
  MR_Word mercury__string__Closure_5,
  MR_String mercury__string__String_6,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9)
{
  {
    MR_Integer mercury__string__Var_11;

{
#define MR_PROC_LABEL mercury__string__foldr_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_11  = Length;
}
    mercury__string__foldr_between_6_p_0(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Var_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
  }
}

void MR_CALL 
mercury__string__foldr_between_6_p_0(
  MR_Word mercury__string__TypeInfo_for_T_19,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start0_9,
  MR_Integer mercury__string__End0_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
    MR_Integer mercury__string__Start_12;
    MR_Integer mercury__string__End_13;
    MR_Integer mercury__string__Var_17;

    if (mercury__string__succeeded)
      mercury__string__Start_12 = (MR_Integer) 0;
    else
      mercury__string__Start_12 = mercury__string__Start0_9;
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_17  = Length;
}
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__Var_17);
    if (mercury__string__succeeded)
      mercury__string__End_13 = mercury__string__End0_10;
    else
      mercury__string__End_13 = mercury__string__Var_17;
    mercury__string__foldr_between_2_6_p_0(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
  }
}

void MR_CALL 
mercury__string__foldr_between_2_6_p_0(
  MR_Word mercury__string__TypeInfo_for_T_18,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__I_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
      MR_Integer mercury__string__J_12;
      MR_Char mercury__string__Char_13;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldr_between_2_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_10 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
      }
      if (mercury__string__succeeded)
      {
        MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
        void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

        mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_I_10 = mercury__string__J_12;
          MR_Box mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

          mercury__string__I_10 = mercury__string__next_value_of_I_10;
          mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14;
        }
        continue;
      }
      else
        *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__string__foldr_3_f_0(
  MR_Word mercury__string__TypeInfo_for_T_19,
  MR_Word mercury__string__F_5,
  MR_String mercury__string__String_6,
  MR_Box mercury__string__Acc0_7)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__Acc_8;
    MR_Integer mercury__string__Var_26;
    MR_Integer mercury__string__End_41;
    MR_Integer mercury__string__Var_43;

{
#define MR_PROC_LABEL mercury__string__foldr_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_26  = Length;
}
{
#define MR_PROC_LABEL mercury__string__foldr_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_43  = Length;
}
    mercury__string__succeeded = (mercury__string__Var_26 < mercury__string__Var_43);
    if (mercury__string__succeeded)
      mercury__string__End_41 = mercury__string__Var_26;
    else
      mercury__string__End_41 = mercury__string__Var_43;
    mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__End_41, mercury__string__Acc0_7, &mercury__string__Acc_8);
    return mercury__string__Acc_8;
  }
}

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word mercury__string__Var_20,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__I_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
      MR_Integer mercury__string__J_12;
      MR_Char mercury__string__Char_13;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_10 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
      }
      if (mercury__string__succeeded)
      {
        MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
        MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__Var_20, (MR_Integer) 1)));

        mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__Var_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_I_10 = mercury__string__J_12;
          MR_Box mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

          mercury__string__I_10 = mercury__string__next_value_of_I_10;
          mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14;
        }
        continue;
      }
      else
        *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
    }
    break;
  }
}

void MR_CALL 
mercury__string__foldl2_substring_8_p_5(
  MR_Word mercury__string__TypeInfo_for_A_23,
  MR_Word mercury__string__TypeInfo_for_B_24,
  MR_Word mercury__string__Closure_9,
  MR_String mercury__string__String_10,
  MR_Integer mercury__string__Start_11,
  MR_Integer mercury__string__Count_12,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_Integer mercury__string__ClampStart_15;
    MR_Integer mercury__string__ClampEnd_16;

    mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    mercury__string__foldl2_between_8_p_5(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldl2_substring_8_p_4(
  MR_Word mercury__string__TypeInfo_for_A_23,
  MR_Word mercury__string__TypeInfo_for_B_24,
  MR_Word mercury__string__Closure_9,
  MR_String mercury__string__String_10,
  MR_Integer mercury__string__Start_11,
  MR_Integer mercury__string__Count_12,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_Integer mercury__string__ClampStart_15;
    MR_Integer mercury__string__ClampEnd_16;

    mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    mercury__string__foldl2_between_8_p_4(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

MR_bool MR_CALL 
mercury__string__foldl2_substring_8_p_3(
  MR_Word mercury__string__TypeInfo_for_A_23,
  MR_Word mercury__string__TypeInfo_for_B_24,
  MR_Word mercury__string__Closure_9,
  MR_String mercury__string__String_10,
  MR_Integer mercury__string__Start_11,
  MR_Integer mercury__string__Count_12,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__ClampStart_15;
    MR_Integer mercury__string__ClampEnd_16;

    mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    mercury__string__succeeded = mercury__string__foldl2_between_8_p_3(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
    return mercury__string__succeeded;
  }
}

void MR_CALL 
mercury__string__foldl2_substring_8_p_2(
  MR_Word mercury__string__TypeInfo_for_A_23,
  MR_Word mercury__string__TypeInfo_for_B_24,
  MR_Word mercury__string__Closure_9,
  MR_String mercury__string__String_10,
  MR_Integer mercury__string__Start_11,
  MR_Integer mercury__string__Count_12,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
{
  {
    MR_Integer mercury__string__ClampStart_15;
    MR_Integer mercury__string__ClampEnd_16;

    mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    mercury__string__foldl2_between_8_p_2(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
  }
}

void MR_CALL 
mercury__string__foldl2_substring_8_p_1(
  MR_Word mercury__string__TypeInfo_for_A_23,
  MR_Word mercury__string__TypeInfo_for_B_24,
  MR_Word mercury__string__Closure_9,
  MR_String mercury__string__String_10,
  MR_Integer mercury__string__Start_11,
  MR_Integer mercury__string__Count_12,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
{
  {
    MR_Integer mercury__string__ClampStart_15;
    MR_Integer mercury__string__ClampEnd_16;

    mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    mercury__string__foldl2_between_8_p_1(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
  }
}

void MR_CALL 
mercury__string__foldl2_substring_8_p_0(
  MR_Word mercury__string__TypeInfo_for_A_23,
  MR_Word mercury__string__TypeInfo_for_B_24,
  MR_Word mercury__string__Closure_9,
  MR_String mercury__string__String_10,
  MR_Integer mercury__string__Start_11,
  MR_Integer mercury__string__Count_12,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
{
  {
    MR_Integer mercury__string__ClampStart_15;
    MR_Integer mercury__string__ClampEnd_16;

    mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    mercury__string__foldl2_between_8_p_0(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
  }
}

void MR_CALL 
mercury__string__foldl_substring_6_p_4(
  MR_Word mercury__string__TypeInfo_for_A_17,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__Count_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_Integer mercury__string__ClampStart_12;
    MR_Integer mercury__string__ClampEnd_13;

    mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    mercury__string__foldl_between_6_p_4(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldl_substring_6_p_3(
  MR_Word mercury__string__TypeInfo_for_A_17,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__Count_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_Integer mercury__string__ClampStart_12;
    MR_Integer mercury__string__ClampEnd_13;

    mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    mercury__string__foldl_between_6_p_3(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

MR_bool MR_CALL 
mercury__string__foldl_substring_6_p_2(
  MR_Word mercury__string__TypeInfo_for_A_17,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__Count_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__ClampStart_12;
    MR_Integer mercury__string__ClampEnd_13;

    mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    mercury__string__succeeded = mercury__string__foldl_between_6_p_2(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    return mercury__string__succeeded;
  }
}

void MR_CALL 
mercury__string__foldl_substring_6_p_1(
  MR_Word mercury__string__TypeInfo_for_A_17,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__Count_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  {
    MR_Integer mercury__string__ClampStart_12;
    MR_Integer mercury__string__ClampEnd_13;

    mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    mercury__string__foldl_between_6_p_1(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
  }
}

void MR_CALL 
mercury__string__foldl_substring_6_p_0(
  MR_Word mercury__string__TypeInfo_for_A_17,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__Count_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  {
    MR_Integer mercury__string__ClampStart_12;
    MR_Integer mercury__string__ClampEnd_13;

    mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    mercury__string__foldl_between_6_p_0(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
  }
}

MR_Box MR_CALL 
mercury__string__foldl_substring_5_f_0(
  MR_Word mercury__string__TypeInfo_for_A_15,
  MR_Word mercury__string__F_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__Count_10,
  MR_Box mercury__string__Acc0_11)
{
  {
    MR_Box mercury__string__Acc_12;
    MR_Integer mercury__string__ClampStart_13;
    MR_Integer mercury__string__ClampEnd_14;

    mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    mercury__string__Acc_12 = mercury__string__foldl_between_5_f_0(mercury__string__TypeInfo_for_A_15, mercury__string__F_7, mercury__string__String_8, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, mercury__string__Acc0_11);
    return mercury__string__Acc_12;
  }
}

MR_Box MR_CALL 
mercury__string__foldl_between_5_f_0(
  MR_Word mercury__string__TypeInfo_for_A_23,
  MR_Word mercury__string__F_7,
  MR_String mercury__string__S_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__End_10,
  MR_Box mercury__string__A_11)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_9);
    MR_Box mercury__string__B_12;
    MR_Integer mercury__string__Start_31;
    MR_Integer mercury__string__End_32;
    MR_Integer mercury__string__Var_34;

    if (mercury__string__succeeded)
      mercury__string__Start_31 = (MR_Integer) 0;
    else
      mercury__string__Start_31 = mercury__string__Start_9;
{
#define MR_PROC_LABEL mercury__string__foldl_between_5_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_34  = Length;
}
    mercury__string__succeeded = (mercury__string__End_10 < mercury__string__Var_34);
    if (mercury__string__succeeded)
      mercury__string__End_32 = mercury__string__End_10;
    else
      mercury__string__End_32 = mercury__string__Var_34;
    mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_7, mercury__string__S_8, mercury__string__Start_31, mercury__string__End_32, mercury__string__A_11, &mercury__string__B_12);
    return mercury__string__B_12;
  }
}

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word mercury__string__Var_20,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__I_9,
  MR_Integer mercury__string__End_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
      MR_Integer mercury__string__J_12;
      MR_Char mercury__string__Char_13;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
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
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
      }
      if (mercury__string__succeeded)
      {
        MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
        MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__Var_20, (MR_Integer) 1)));

        mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__Var_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_I_9 = mercury__string__J_12;
          MR_Box mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

          mercury__string__I_9 = mercury__string__next_value_of_I_9;
          mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14;
        }
        continue;
      }
      else
        *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
    }
    break;
  }
}

void MR_CALL 
mercury__string__foldl2_6_p_5(
  MR_Word mercury__string__TypeInfo_for_A_19,
  MR_Word mercury__string__TypeInfo_for_B_20,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_Integer mercury__string__Length_11;

{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_5

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
}
    mercury__string__foldl2_between_8_p_5(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldl2_between_8_p_5(
  MR_Word mercury__string__TypeInfo_for_A_25,
  MR_Word mercury__string__TypeInfo_for_B_26,
  MR_Word mercury__string__Closure_9,
  MR_String mercury__string__String_10,
  MR_Integer mercury__string__Start0_11,
  MR_Integer mercury__string__End0_12,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
    MR_Integer mercury__string__Start_15;
    MR_Integer mercury__string__End_16;
    MR_Integer mercury__string__Var_22;

    if (mercury__string__succeeded)
      mercury__string__Start_15 = (MR_Integer) 0;
    else
      mercury__string__Start_15 = mercury__string__Start0_11;
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_5

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_22  = Length;
}
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__Var_22);
    if (mercury__string__succeeded)
      mercury__string__End_16 = mercury__string__End0_12;
    else
      mercury__string__End_16 = mercury__string__Var_22;
    mercury__string__foldl2_between_2_8_p_5(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__string__foldl2_between_2_8_p_5_1(
  void * mercury__string__env_ptr_arg)
{
  {
    struct mercury__string__foldl2_between_2_8_p_5_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl2_between_2_8_p_5_env_0_s *) mercury__string__env_ptr_arg;

    mercury__string__foldl2_between_2_8_p_5((mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__String_10, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__J_15, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__End_12, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldl2_between_2_8_p_5(
  MR_Word mercury__string__TypeInfo_for_A_25,
  MR_Word mercury__string__TypeInfo_for_B_26,
  MR_Word mercury__string__Closure_9,
  MR_String mercury__string__String_10,
  MR_Integer mercury__string__I_11,
  MR_Integer mercury__string__End_12,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    struct mercury__string__foldl2_between_2_8_p_5_env_0_s mercury__string__env;

    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25 = mercury__string__TypeInfo_for_A_25;
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26 = mercury__string__TypeInfo_for_B_26;
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9 = mercury__string__Closure_9;
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__String_10 = mercury__string__String_10;
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12 = mercury__string__End_12;
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_18;
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_20;
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont = mercury__string__cont;
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_11 < (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12);
      MR_Char mercury__string__Char_16;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldl2_between_2_8_p_5

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__String_10 ;
	Index =  mercury__string__I_11 ;
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
	 (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__J_15 <= (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12);
      }
      if (mercury__string__succeeded)
      {
        void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9, (MR_Integer) 1)));

        mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22, mercury__string__foldl2_between_2_8_p_5_1, &mercury__string__env);
      }
      else
      {
        *((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20) = mercury__string__STATE_VARIABLE_Acc2_0_19;
        *((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18) = mercury__string__STATE_VARIABLE_Acc1_0_17;
        ((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont)((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr);
      }
    }
  }
}

void MR_CALL 
mercury__string__foldl2_6_p_4(
  MR_Word mercury__string__TypeInfo_for_A_19,
  MR_Word mercury__string__TypeInfo_for_B_20,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_Integer mercury__string__Length_11;

{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
}
    mercury__string__foldl2_between_8_p_4(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldl2_between_8_p_4(
  MR_Word mercury__string__TypeInfo_for_A_25,
  MR_Word mercury__string__TypeInfo_for_B_26,
  MR_Word mercury__string__Closure_9,
  MR_String mercury__string__String_10,
  MR_Integer mercury__string__Start0_11,
  MR_Integer mercury__string__End0_12,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
    MR_Integer mercury__string__Start_15;
    MR_Integer mercury__string__End_16;
    MR_Integer mercury__string__Var_22;

    if (mercury__string__succeeded)
      mercury__string__Start_15 = (MR_Integer) 0;
    else
      mercury__string__Start_15 = mercury__string__Start0_11;
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_22  = Length;
}
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__Var_22);
    if (mercury__string__succeeded)
      mercury__string__End_16 = mercury__string__End0_12;
    else
      mercury__string__End_16 = mercury__string__Var_22;
    mercury__string__foldl2_between_2_8_p_4(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__string__foldl2_between_2_8_p_4_1(
  void * mercury__string__env_ptr_arg)
{
  {
    struct mercury__string__foldl2_between_2_8_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl2_between_2_8_p_4_env_0_s *) mercury__string__env_ptr_arg;

    mercury__string__foldl2_between_2_8_p_4((mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__String_10, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__J_15, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__End_12, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldl2_between_2_8_p_4(
  MR_Word mercury__string__TypeInfo_for_A_25,
  MR_Word mercury__string__TypeInfo_for_B_26,
  MR_Word mercury__string__Closure_9,
  MR_String mercury__string__String_10,
  MR_Integer mercury__string__I_11,
  MR_Integer mercury__string__End_12,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    struct mercury__string__foldl2_between_2_8_p_4_env_0_s mercury__string__env;

    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25 = mercury__string__TypeInfo_for_A_25;
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26 = mercury__string__TypeInfo_for_B_26;
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9 = mercury__string__Closure_9;
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__String_10 = mercury__string__String_10;
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12 = mercury__string__End_12;
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_18;
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_20;
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont = mercury__string__cont;
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_11 < (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12);
      MR_Char mercury__string__Char_16;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldl2_between_2_8_p_4

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__String_10 ;
	Index =  mercury__string__I_11 ;
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
	 (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__J_15 <= (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12);
      }
      if (mercury__string__succeeded)
      {
        void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9, (MR_Integer) 1)));

        mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22, mercury__string__foldl2_between_2_8_p_4_1, &mercury__string__env);
      }
      else
      {
        *((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20) = mercury__string__STATE_VARIABLE_Acc2_0_19;
        *((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18) = mercury__string__STATE_VARIABLE_Acc1_0_17;
        ((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont)((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string__foldl2_6_p_3(
  MR_Word mercury__string__TypeInfo_for_A_19,
  MR_Word mercury__string__TypeInfo_for_B_20,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__Length_11;

{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
}
    mercury__string__succeeded = mercury__string__foldl2_between_8_p_3(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__foldl2_between_8_p_3(
  MR_Word mercury__string__TypeInfo_for_A_25,
  MR_Word mercury__string__TypeInfo_for_B_26,
  MR_Word mercury__string__Closure_9,
  MR_String mercury__string__String_10,
  MR_Integer mercury__string__Start0_11,
  MR_Integer mercury__string__End0_12,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
    MR_Integer mercury__string__Start_15;
    MR_Integer mercury__string__End_16;
    MR_Integer mercury__string__Var_22;

    if (mercury__string__succeeded)
      mercury__string__Start_15 = (MR_Integer) 0;
    else
      mercury__string__Start_15 = mercury__string__Start0_11;
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_22  = Length;
}
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__Var_22);
    if (mercury__string__succeeded)
      mercury__string__End_16 = mercury__string__End0_12;
    else
      mercury__string__End_16 = mercury__string__Var_22;
    mercury__string__succeeded = mercury__string__foldl2_between_2_8_p_3(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__foldl2_between_2_8_p_3(
  MR_Word mercury__string__TypeInfo_for_A_25,
  MR_Word mercury__string__TypeInfo_for_B_26,
  MR_Word mercury__string__Closure_9,
  MR_String mercury__string__String_10,
  MR_Integer mercury__string__I_11,
  MR_Integer mercury__string__End_12,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
      MR_Integer mercury__string__J_15;
      MR_Char mercury__string__Char_16;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldl2_between_2_8_p_3

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_10 ;
	Index =  mercury__string__I_11 ;
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
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
      }
      if (mercury__string__succeeded)
      {
        MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
        MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

        mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
        if (mercury__string__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__string__next_value_of_I_11 = mercury__string__J_15;
            MR_Box mercury__string__next_value_of_STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
            MR_Box mercury__string__next_value_of_STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

            mercury__string__I_11 = mercury__string__next_value_of_I_11;
            mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__next_value_of_STATE_VARIABLE_Acc1_0_17;
            mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__next_value_of_STATE_VARIABLE_Acc2_0_19;
          }
          continue;
        }
      }
      else
      {
        *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
        *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
        mercury__string__succeeded = MR_TRUE;
      }
      return mercury__string__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__string__foldl2_6_p_2(
  MR_Word mercury__string__TypeInfo_for_A_19,
  MR_Word mercury__string__TypeInfo_for_B_20,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
{
  {
    MR_Integer mercury__string__Length_11;

{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
}
    mercury__string__foldl2_between_8_p_2(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
  }
}

void MR_CALL 
mercury__string__foldl2_between_8_p_2(
  MR_Word mercury__string__TypeInfo_for_A_25,
  MR_Word mercury__string__TypeInfo_for_B_26,
  MR_Word mercury__string__Closure_9,
  MR_String mercury__string__String_10,
  MR_Integer mercury__string__Start0_11,
  MR_Integer mercury__string__End0_12,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
    MR_Integer mercury__string__Start_15;
    MR_Integer mercury__string__End_16;
    MR_Integer mercury__string__Var_22;

    if (mercury__string__succeeded)
      mercury__string__Start_15 = (MR_Integer) 0;
    else
      mercury__string__Start_15 = mercury__string__Start0_11;
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_22  = Length;
}
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__Var_22);
    if (mercury__string__succeeded)
      mercury__string__End_16 = mercury__string__End0_12;
    else
      mercury__string__End_16 = mercury__string__Var_22;
    mercury__string__foldl2_between_2_8_p_2(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
  }
}

void MR_CALL 
mercury__string__foldl2_between_2_8_p_2(
  MR_Word mercury__string__TypeInfo_for_A_25,
  MR_Word mercury__string__TypeInfo_for_B_26,
  MR_Word mercury__string__Closure_9,
  MR_String mercury__string__String_10,
  MR_Integer mercury__string__I_11,
  MR_Integer mercury__string__End_12,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
      MR_Integer mercury__string__J_15;
      MR_Char mercury__string__Char_16;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldl2_between_2_8_p_2

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_10 ;
	Index =  mercury__string__I_11 ;
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
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
      }
      if (mercury__string__succeeded)
      {
        MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
        MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
        void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

        mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_I_11 = mercury__string__J_15;
          MR_Box mercury__string__next_value_of_STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
          MR_Box mercury__string__next_value_of_STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

          mercury__string__I_11 = mercury__string__next_value_of_I_11;
          mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__next_value_of_STATE_VARIABLE_Acc1_0_17;
          mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__next_value_of_STATE_VARIABLE_Acc2_0_19;
        }
        continue;
      }
      else
      {
        *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
        *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__foldl2_6_p_1(
  MR_Word mercury__string__TypeInfo_for_A_19,
  MR_Word mercury__string__TypeInfo_for_B_20,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
{
  {
    MR_Integer mercury__string__Length_11;

{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
}
    mercury__string__foldl2_between_8_p_1(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
  }
}

void MR_CALL 
mercury__string__foldl2_between_8_p_1(
  MR_Word mercury__string__TypeInfo_for_A_25,
  MR_Word mercury__string__TypeInfo_for_B_26,
  MR_Word mercury__string__Closure_9,
  MR_String mercury__string__String_10,
  MR_Integer mercury__string__Start0_11,
  MR_Integer mercury__string__End0_12,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
    MR_Integer mercury__string__Start_15;
    MR_Integer mercury__string__End_16;
    MR_Integer mercury__string__Var_22;

    if (mercury__string__succeeded)
      mercury__string__Start_15 = (MR_Integer) 0;
    else
      mercury__string__Start_15 = mercury__string__Start0_11;
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_22  = Length;
}
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__Var_22);
    if (mercury__string__succeeded)
      mercury__string__End_16 = mercury__string__End0_12;
    else
      mercury__string__End_16 = mercury__string__Var_22;
    mercury__string__foldl2_between_2_8_p_1(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
  }
}

void MR_CALL 
mercury__string__foldl2_between_2_8_p_1(
  MR_Word mercury__string__TypeInfo_for_A_25,
  MR_Word mercury__string__TypeInfo_for_B_26,
  MR_Word mercury__string__Closure_9,
  MR_String mercury__string__String_10,
  MR_Integer mercury__string__I_11,
  MR_Integer mercury__string__End_12,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
      MR_Integer mercury__string__J_15;
      MR_Char mercury__string__Char_16;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldl2_between_2_8_p_1

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_10 ;
	Index =  mercury__string__I_11 ;
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
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
      }
      if (mercury__string__succeeded)
      {
        MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
        MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
        void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

        mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_I_11 = mercury__string__J_15;
          MR_Box mercury__string__next_value_of_STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
          MR_Box mercury__string__next_value_of_STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

          mercury__string__I_11 = mercury__string__next_value_of_I_11;
          mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__next_value_of_STATE_VARIABLE_Acc1_0_17;
          mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__next_value_of_STATE_VARIABLE_Acc2_0_19;
        }
        continue;
      }
      else
      {
        *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
        *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__foldl2_6_p_0(
  MR_Word mercury__string__TypeInfo_for_A_19,
  MR_Word mercury__string__TypeInfo_for_B_20,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
{
  {
    MR_Integer mercury__string__Length_11;

{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
}
    mercury__string__foldl2_between_8_p_0(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
  }
}

void MR_CALL 
mercury__string__foldl2_between_8_p_0(
  MR_Word mercury__string__TypeInfo_for_A_25,
  MR_Word mercury__string__TypeInfo_for_B_26,
  MR_Word mercury__string__Closure_9,
  MR_String mercury__string__String_10,
  MR_Integer mercury__string__Start0_11,
  MR_Integer mercury__string__End0_12,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
    MR_Integer mercury__string__Start_15;
    MR_Integer mercury__string__End_16;
    MR_Integer mercury__string__Var_22;

    if (mercury__string__succeeded)
      mercury__string__Start_15 = (MR_Integer) 0;
    else
      mercury__string__Start_15 = mercury__string__Start0_11;
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_22  = Length;
}
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__Var_22);
    if (mercury__string__succeeded)
      mercury__string__End_16 = mercury__string__End0_12;
    else
      mercury__string__End_16 = mercury__string__Var_22;
    mercury__string__foldl2_between_2_8_p_0(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
  }
}

void MR_CALL 
mercury__string__foldl2_between_2_8_p_0(
  MR_Word mercury__string__TypeInfo_for_A_25,
  MR_Word mercury__string__TypeInfo_for_B_26,
  MR_Word mercury__string__Closure_9,
  MR_String mercury__string__String_10,
  MR_Integer mercury__string__I_11,
  MR_Integer mercury__string__End_12,
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
      MR_Integer mercury__string__J_15;
      MR_Char mercury__string__Char_16;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldl2_between_2_8_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_10 ;
	Index =  mercury__string__I_11 ;
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
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
      }
      if (mercury__string__succeeded)
      {
        MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
        MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
        void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

        mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_I_11 = mercury__string__J_15;
          MR_Box mercury__string__next_value_of_STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
          MR_Box mercury__string__next_value_of_STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

          mercury__string__I_11 = mercury__string__next_value_of_I_11;
          mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__next_value_of_STATE_VARIABLE_Acc1_0_17;
          mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__next_value_of_STATE_VARIABLE_Acc2_0_19;
        }
        continue;
      }
      else
      {
        *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
        *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__foldl_4_p_4(
  MR_Word mercury__string__TypeInfo_for_A_13,
  MR_Word mercury__string__Closure_5,
  MR_String mercury__string__String_6,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_Integer mercury__string__Length_8;

{
#define MR_PROC_LABEL mercury__string__foldl_4_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
}
    mercury__string__foldl_between_6_p_4(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldl_between_6_p_4(
  MR_Word mercury__string__TypeInfo_for_A_19,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start0_9,
  MR_Integer mercury__string__End0_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
    MR_Integer mercury__string__Start_12;
    MR_Integer mercury__string__End_13;
    MR_Integer mercury__string__Var_17;

    if (mercury__string__succeeded)
      mercury__string__Start_12 = (MR_Integer) 0;
    else
      mercury__string__Start_12 = mercury__string__Start0_9;
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_17  = Length;
}
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__Var_17);
    if (mercury__string__succeeded)
      mercury__string__End_13 = mercury__string__End0_10;
    else
      mercury__string__End_13 = mercury__string__Var_17;
    mercury__string__foldl_between_2_6_p_4(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__string__foldl_between_2_6_p_4_1(
  void * mercury__string__env_ptr_arg)
{
  {
    struct mercury__string__foldl_between_2_6_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl_between_2_6_p_4_env_0_s *) mercury__string__env_ptr_arg;

    mercury__string__foldl_between_2_6_p_4((mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__End_10, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldl_between_2_6_p_4(
  MR_Word mercury__string__TypeInfo_for_A_18,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__I_9,
  MR_Integer mercury__string__End_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    struct mercury__string__foldl_between_2_6_p_4_env_0_s mercury__string__env;

    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18 = mercury__string__TypeInfo_for_A_18;
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7 = mercury__string__Closure_7;
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__String_8 = mercury__string__String_8;
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10 = mercury__string__End_10;
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont = mercury__string__cont;
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10);
      MR_Char mercury__string__Char_13;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldl_between_2_6_p_4

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__String_8 ;
	Index =  mercury__string__I_9 ;
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
	 (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__J_12 <= (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10);
      }
      if (mercury__string__succeeded)
      {
        void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7, (MR_Integer) 1)));

        mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldl_between_2_6_p_4_1, &mercury__string__env);
      }
      else
      {
        *((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
        ((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont)((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr);
      }
    }
  }
}

void MR_CALL 
mercury__string__foldl_4_p_3(
  MR_Word mercury__string__TypeInfo_for_A_13,
  MR_Word mercury__string__Closure_5,
  MR_String mercury__string__String_6,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_Integer mercury__string__Length_8;

{
#define MR_PROC_LABEL mercury__string__foldl_4_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
}
    mercury__string__foldl_between_6_p_3(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldl_between_6_p_3(
  MR_Word mercury__string__TypeInfo_for_A_19,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start0_9,
  MR_Integer mercury__string__End0_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
    MR_Integer mercury__string__Start_12;
    MR_Integer mercury__string__End_13;
    MR_Integer mercury__string__Var_17;

    if (mercury__string__succeeded)
      mercury__string__Start_12 = (MR_Integer) 0;
    else
      mercury__string__Start_12 = mercury__string__Start0_9;
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_17  = Length;
}
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__Var_17);
    if (mercury__string__succeeded)
      mercury__string__End_13 = mercury__string__End0_10;
    else
      mercury__string__End_13 = mercury__string__Var_17;
    mercury__string__foldl_between_2_6_p_3(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__string__foldl_between_2_6_p_3_1(
  void * mercury__string__env_ptr_arg)
{
  {
    struct mercury__string__foldl_between_2_6_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl_between_2_6_p_3_env_0_s *) mercury__string__env_ptr_arg;

    mercury__string__foldl_between_2_6_p_3((mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__End_10, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldl_between_2_6_p_3(
  MR_Word mercury__string__TypeInfo_for_A_18,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__I_9,
  MR_Integer mercury__string__End_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    struct mercury__string__foldl_between_2_6_p_3_env_0_s mercury__string__env;

    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18 = mercury__string__TypeInfo_for_A_18;
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7 = mercury__string__Closure_7;
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__String_8 = mercury__string__String_8;
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10 = mercury__string__End_10;
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont = mercury__string__cont;
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10);
      MR_Char mercury__string__Char_13;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldl_between_2_6_p_3

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__String_8 ;
	Index =  mercury__string__I_9 ;
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
	 (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__J_12 <= (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10);
      }
      if (mercury__string__succeeded)
      {
        void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7, (MR_Integer) 1)));

        mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldl_between_2_6_p_3_1, &mercury__string__env);
      }
      else
      {
        *((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
        ((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont)((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string__foldl_4_p_2(
  MR_Word mercury__string__TypeInfo_for_A_13,
  MR_Word mercury__string__Closure_5,
  MR_String mercury__string__String_6,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__Length_8;

{
#define MR_PROC_LABEL mercury__string__foldl_4_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
}
    mercury__string__succeeded = mercury__string__foldl_between_6_p_2(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__foldl_between_6_p_2(
  MR_Word mercury__string__TypeInfo_for_A_19,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start0_9,
  MR_Integer mercury__string__End0_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
    MR_Integer mercury__string__Start_12;
    MR_Integer mercury__string__End_13;
    MR_Integer mercury__string__Var_17;

    if (mercury__string__succeeded)
      mercury__string__Start_12 = (MR_Integer) 0;
    else
      mercury__string__Start_12 = mercury__string__Start0_9;
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_17  = Length;
}
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__Var_17);
    if (mercury__string__succeeded)
      mercury__string__End_13 = mercury__string__End0_10;
    else
      mercury__string__End_13 = mercury__string__Var_17;
    mercury__string__succeeded = mercury__string__foldl_between_2_6_p_2(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__foldl_between_2_6_p_2(
  MR_Word mercury__string__TypeInfo_for_A_18,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__I_9,
  MR_Integer mercury__string__End_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
      MR_Integer mercury__string__J_12;
      MR_Char mercury__string__Char_13;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldl_between_2_6_p_2

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
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
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
      }
      if (mercury__string__succeeded)
      {
        MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

        mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
        if (mercury__string__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__string__next_value_of_I_9 = mercury__string__J_12;
            MR_Box mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

            mercury__string__I_9 = mercury__string__next_value_of_I_9;
            mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14;
          }
          continue;
        }
      }
      else
      {
        *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
        mercury__string__succeeded = MR_TRUE;
      }
      return mercury__string__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__string__foldl_4_p_1(
  MR_Word mercury__string__TypeInfo_for_A_13,
  MR_Word mercury__string__Closure_5,
  MR_String mercury__string__String_6,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10)
{
  {
    MR_Integer mercury__string__Length_8;

{
#define MR_PROC_LABEL mercury__string__foldl_4_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
}
    mercury__string__foldl_between_6_p_0(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
  }
}

void MR_CALL 
mercury__string__foldl_between_6_p_0(
  MR_Word mercury__string__TypeInfo_for_A_19,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start0_9,
  MR_Integer mercury__string__End0_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
    MR_Integer mercury__string__Start_12;
    MR_Integer mercury__string__End_13;
    MR_Integer mercury__string__Var_17;

    if (mercury__string__succeeded)
      mercury__string__Start_12 = (MR_Integer) 0;
    else
      mercury__string__Start_12 = mercury__string__Start0_9;
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_17  = Length;
}
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__Var_17);
    if (mercury__string__succeeded)
      mercury__string__End_13 = mercury__string__End0_10;
    else
      mercury__string__End_13 = mercury__string__Var_17;
    mercury__string__foldl_between_2_6_p_1(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
  }
}

void MR_CALL 
mercury__string__foldl_between_2_6_p_1(
  MR_Word mercury__string__TypeInfo_for_A_18,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__I_9,
  MR_Integer mercury__string__End_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
      MR_Integer mercury__string__J_12;
      MR_Char mercury__string__Char_13;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldl_between_2_6_p_1

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
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
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
      }
      if (mercury__string__succeeded)
      {
        MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
        void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

        mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_I_9 = mercury__string__J_12;
          MR_Box mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

          mercury__string__I_9 = mercury__string__next_value_of_I_9;
          mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14;
        }
        continue;
      }
      else
        *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
    }
    break;
  }
}

void MR_CALL 
mercury__string__foldl_4_p_0(
  MR_Word mercury__string__TypeInfo_for_A_13,
  MR_Word mercury__string__Closure_5,
  MR_String mercury__string__String_6,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10)
{
  {
    MR_Integer mercury__string__Length_8;

{
#define MR_PROC_LABEL mercury__string__foldl_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
}
    mercury__string__foldl_between_6_p_1(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
  }
}

void MR_CALL 
mercury__string__foldl_between_6_p_1(
  MR_Word mercury__string__TypeInfo_for_A_19,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start0_9,
  MR_Integer mercury__string__End0_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
    MR_Integer mercury__string__Start_12;
    MR_Integer mercury__string__End_13;
    MR_Integer mercury__string__Var_17;

    if (mercury__string__succeeded)
      mercury__string__Start_12 = (MR_Integer) 0;
    else
      mercury__string__Start_12 = mercury__string__Start0_9;
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_17  = Length;
}
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__Var_17);
    if (mercury__string__succeeded)
      mercury__string__End_13 = mercury__string__End0_10;
    else
      mercury__string__End_13 = mercury__string__Var_17;
    mercury__string__foldl_between_2_6_p_0(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
  }
}

void MR_CALL 
mercury__string__foldl_between_2_6_p_0(
  MR_Word mercury__string__TypeInfo_for_A_18,
  MR_Word mercury__string__Closure_7,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__I_9,
  MR_Integer mercury__string__End_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
      MR_Integer mercury__string__J_12;
      MR_Char mercury__string__Char_13;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldl_between_2_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
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
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
      }
      if (mercury__string__succeeded)
      {
        MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
        void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

        mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_I_9 = mercury__string__J_12;
          MR_Box mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

          mercury__string__I_9 = mercury__string__next_value_of_I_9;
          mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14;
        }
        continue;
      }
      else
        *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__string__foldl_3_f_0(
  MR_Word mercury__string__TypeInfo_for_A_19,
  MR_Word mercury__string__F_5,
  MR_String mercury__string__S_6,
  MR_Box mercury__string__A_7)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Box mercury__string__B_8;
    MR_Integer mercury__string__Length_25;
    MR_Integer mercury__string__End_39;
    MR_Integer mercury__string__Var_41;

{
#define MR_PROC_LABEL mercury__string__foldl_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_25  = Length;
}
{
#define MR_PROC_LABEL mercury__string__foldl_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_41  = Length;
}
    mercury__string__succeeded = (mercury__string__Length_25 < mercury__string__Var_41);
    if (mercury__string__succeeded)
      mercury__string__End_39 = mercury__string__Length_25;
    else
      mercury__string__End_39 = mercury__string__Var_41;
    mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_5, mercury__string__S_6, (MR_Integer) 0, mercury__string__End_39, mercury__string__A_7, &mercury__string__B_8);
    return mercury__string__B_8;
  }
}

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word mercury__string__Var_20,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__I_9,
  MR_Integer mercury__string__End_10,
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
      MR_Integer mercury__string__J_12;
      MR_Char mercury__string__Char_13;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
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
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
      }
      if (mercury__string__succeeded)
      {
        MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
        MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__Var_20, (MR_Integer) 1)));

        mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__Var_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_I_9 = mercury__string__J_12;
          MR_Box mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

          mercury__string__I_9 = mercury__string__next_value_of_I_9;
          mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14;
        }
        continue;
      }
      else
        *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
    }
    break;
  }
}

MR_String MR_CALL 
mercury__string__word_wrap_2_f_0(
  MR_String mercury__string__Str_4,
  MR_Integer mercury__string__N_5)
{
  {
    MR_String mercury__string__HeadVar__3_3;

    mercury__string__HeadVar__3_3 = mercury__string__word_wrap_separator_3_f_0(mercury__string__Str_4, mercury__string__N_5, (MR_String) "");
    return mercury__string__HeadVar__3_3;
  }
}

MR_String MR_CALL 
mercury__string__word_wrap_separator_3_f_0(
  MR_String mercury__string__Str_5,
  MR_Integer mercury__string__N_6,
  MR_String mercury__string__WordSep0_7)
{
  {
    MR_bool mercury__string__succeeded;
    MR_String mercury__string__Wrapped_8;
    MR_Word mercury__string__TypeCtorInfo_20_20;
    MR_Word mercury__string__Words_9;
    MR_Integer mercury__string__SepLen0_10;
    MR_String mercury__string__WordSep_11;
    MR_Integer mercury__string__SepLen_12;
    MR_Word mercury__string__RevWordsSpacesNls0_15;
    MR_Word mercury__string__RevWordsSpacesNls_16;
    MR_Word mercury__string__WordsSpacesNls_17;
    MR_Integer mercury__string__WordStart_25;

    mercury__string__skip_to_next_word_start__ho37_4_p_0(mercury__string__Str_5, (MR_Integer) 0, &mercury__string__WordStart_25);
    mercury__string__words_loop__ho38_4_p_0(mercury__string__Str_5, mercury__string__WordStart_25, &mercury__string__Words_9);
    mercury__string__count_codepoints_2_p_0(mercury__string__WordSep0_7, &mercury__string__SepLen0_10);
    mercury__string__succeeded = (mercury__string__SepLen0_10 < mercury__string__N_6);
    if (mercury__string__succeeded)
    {
      mercury__string__WordSep_11 = mercury__string__WordSep0_7;
      mercury__string__SepLen_12 = mercury__string__SepLen0_10;
    }
    else
    {
      mercury__string__WordSep_11 = (MR_String) "";
      mercury__string__SepLen_12 = (MR_Integer) 0;
    }
    mercury__string__RevWordsSpacesNls0_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__string__word_wrap_loop_7_p_0(mercury__string__Words_9, mercury__string__WordSep_11, mercury__string__SepLen_12, (MR_Integer) 1, mercury__string__N_6, mercury__string__RevWordsSpacesNls0_15, &mercury__string__RevWordsSpacesNls_16);
    mercury__string__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_20_20, mercury__string__RevWordsSpacesNls_16, &mercury__string__WordsSpacesNls_17);
    mercury__string__Wrapped_8 = mercury__string__append_list_1_f_0(mercury__string__WordsSpacesNls_17);
    return mercury__string__Wrapped_8;
  }
}

void MR_CALL 
mercury__string__word_wrap_loop_7_p_0(
  MR_Word mercury__string__HeadVar__1_1,
  MR_String mercury__string__WordSep_2,
  MR_Integer mercury__string__SepLen_3,
  MR_Integer mercury__string__CurCol_4,
  MR_Integer mercury__string__MaxCol_5,
  MR_Word mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6,
  MR_Word * mercury__string__STATE_VARIABLE_RevWordsSpacesNls_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;

      if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__string__STATE_VARIABLE_RevWordsSpacesNls_7 = mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6;
      else
      {
        MR_String mercury__string__Word_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__string__Words_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mercury__string__WordLen_22;
        MR_Word mercury__string__NewWords_23;
        MR_Integer mercury__string__NewCol_24;
        MR_Word mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36;

        mercury__string__count_codepoints_2_p_0(mercury__string__Word_15, &mercury__string__WordLen_22);
        mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
        if (mercury__string__succeeded)
          mercury__string__succeeded = (mercury__string__WordLen_22 < mercury__string__MaxCol_5);
        if (mercury__string__succeeded)
        {
          mercury__string__NewWords_23 = mercury__string__Words_16;
          mercury__string__NewCol_24 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);
          {
            mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
            MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
          }
        }
        else
        {
          mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
          if (mercury__string__succeeded)
            mercury__string__succeeded = (mercury__string__WordLen_22 == mercury__string__MaxCol_5);
          if (mercury__string__succeeded)
          {
            mercury__string__NewWords_23 = mercury__string__Words_16;
            mercury__string__NewCol_24 = (MR_Integer) 1;
            if ((mercury__string__NewWords_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
                MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
              }
            else
            {
              MR_Word mercury__string__Var_39;

              {
                mercury__string__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__string__Var_39, 0) = ((MR_Box) (mercury__string__Word_15));
                MR_hl_field(MR_mktag(1), mercury__string__Var_39, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
              }
              {
                mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
                MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__Var_39));
              }
            }
          }
          else
          {
            MR_Integer mercury__string__Var_41 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);

            mercury__string__succeeded = (mercury__string__Var_41 < mercury__string__MaxCol_5);
            if (mercury__string__succeeded)
            {
              MR_Integer mercury__string__Var_42;
              MR_Word mercury__string__Var_45;

              mercury__string__NewWords_23 = mercury__string__Words_16;
              mercury__string__Var_42 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);
              mercury__string__NewCol_24 = (mercury__string__Var_42 + (MR_Integer) 1);
              {
                mercury__string__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__string__Var_45, 0) = ((MR_Box) ((MR_String) " "));
                MR_hl_field(MR_mktag(1), mercury__string__Var_45, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
              }
              {
                mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
                MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__Var_45));
              }
            }
            else
            {
              MR_Integer mercury__string__Var_70 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);

              mercury__string__succeeded = (mercury__string__MaxCol_5 == mercury__string__Var_70);
              if (mercury__string__succeeded)
              {
                mercury__string__NewWords_23 = mercury__string__Words_16;
                mercury__string__NewCol_24 = (MR_Integer) 1;
                if ((mercury__string__NewWords_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Word mercury__string__Var_53;

                  {
                    mercury__string__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__Var_53, 0) = ((MR_Box) ((MR_String) " "));
                    MR_hl_field(MR_mktag(1), mercury__string__Var_53, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
                  }
                  {
                    mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
                    MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__Var_53));
                  }
                }
                else
                {
                  MR_Word mercury__string__Var_49;
                  MR_Word mercury__string__Var_50;

                  {
                    mercury__string__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__Var_50, 0) = ((MR_Box) ((MR_String) " "));
                    MR_hl_field(MR_mktag(1), mercury__string__Var_50, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
                  }
                  {
                    mercury__string__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__Var_49, 0) = ((MR_Box) (mercury__string__Word_15));
                    MR_hl_field(MR_mktag(1), mercury__string__Var_49, 1) = ((MR_Box) (mercury__string__Var_50));
                  }
                  {
                    mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
                    MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__Var_49));
                  }
                }
              }
              else
              {
                mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
                if (mercury__string__succeeded)
                {
                  MR_Word mercury__string__TypeCtorInfo_69_69;
                  MR_Word mercury__string__RevPieces_29;
                  MR_String mercury__string__LastPiece_30;
                  MR_Word mercury__string__Rest_31;
                  MR_Word mercury__string__RestWithSep_32;
                  MR_Integer mercury__string__Var_55 = (mercury__string__MaxCol_5 - mercury__string__SepLen_3);
                  MR_Word mercury__string__Var_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                  mercury__string__RevPieces_29 = mercury__string__break_up_string_reverse_3_f_0(mercury__string__Word_15, mercury__string__Var_55, mercury__string__Var_56);
                  if ((mercury__string__RevPieces_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.word_wrap_loop\'/7", (MR_String) "no pieces");
                      return;
                    }
                  }
                  else
                  {
                    mercury__string__LastPiece_30 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__RevPieces_29, (MR_Integer) 0)));
                    mercury__string__Rest_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__RevPieces_29, (MR_Integer) 1)));
                  }
                  {
                    mercury__string__NewWords_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__NewWords_23, 0) = ((MR_Box) (mercury__string__LastPiece_30));
                    MR_hl_field(MR_mktag(1), mercury__string__NewWords_23, 1) = ((MR_Box) (mercury__string__Words_16));
                  }
                  mercury__string__NewCol_24 = (MR_Integer) 1;
                  mercury__string__TypeCtorInfo_69_69 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                  mercury__string__RestWithSep_32 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_48_95_95_91_50_93_95_48_2_f_in__list_0(mercury__string__WordSep_2, mercury__string__Rest_31);
                  mercury__list__append_3_p_1(mercury__string__TypeCtorInfo_69_69, mercury__string__RestWithSep_32, mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6, &mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36);
                }
                else
                {
                  mercury__string__NewWords_23 = mercury__string__HeadVar__1_1;
                  mercury__string__NewCol_24 = (MR_Integer) 1;
                  {
                    mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
                    MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
                  }
                }
              }
            }
          }
        }
        /* direct tailcall eliminated */
        {
          MR_Word mercury__string__next_value_of_HeadVar__1_1 = mercury__string__NewWords_23;
          MR_Integer mercury__string__next_value_of_CurCol_4 = mercury__string__NewCol_24;
          MR_Word mercury__string__next_value_of_STATE_VARIABLE_RevWordsSpacesNls_0_6 = mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36;

          mercury__string__HeadVar__1_1 = mercury__string__next_value_of_HeadVar__1_1;
          mercury__string__CurCol_4 = mercury__string__next_value_of_CurCol_4;
          mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6 = mercury__string__next_value_of_STATE_VARIABLE_RevWordsSpacesNls_0_6;
        }
        continue;
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_48_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_String mercury__string__Var_12,
  MR_Word mercury__string__HeadVar__2_2)
{
  {
    MR_Word mercury__string__HeadVar__3_3;

    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_String mercury__string__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__string__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
      MR_String mercury__string__V_8_8;
      MR_Word mercury__string__V_9_9;

      mercury__string__V_8_8 = mercury__string__IntroducedFrom__func__word_wrap_loop__5046__1_2_f_0(mercury__string__Var_12, mercury__string__V_6_6);
      mercury__string__V_9_9 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_48_95_95_91_50_93_95_48_2_f_in__list_0(mercury__string__Var_12, mercury__string__V_7_7);
      {
        mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
        MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
      }
    }
    return mercury__string__HeadVar__3_3;
  }
}

static MR_String MR_CALL 
mercury__string__IntroducedFrom__func__word_wrap_loop__5046__1_2_f_0(
  MR_String mercury__string__WordSep_2,
  MR_String mercury__string__LambdaHeadVar__1_60)
{
  {
    MR_String mercury__string__LambdaHeadVar__2_61;
    MR_String mercury__string__Var_62;

{
#define MR_PROC_LABEL mercury__string__IntroducedFrom__func__word_wrap_loop__5046__1_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__WordSep_2 ;
	S2 =  (MR_String) "\n" ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_62  = S3;
}
    mercury__string__LambdaHeadVar__2_61 = mercury__string__f_43_43_2_f_0(mercury__string__LambdaHeadVar__1_60, mercury__string__Var_62);
    return mercury__string__LambdaHeadVar__2_61;
  }
}

MR_Word MR_CALL 
mercury__string__break_up_string_reverse_3_f_0(
  MR_String mercury__string__Str_5,
  MR_Integer mercury__string__N_6,
  MR_Word mercury__string__Prev_7)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;
      MR_Word mercury__string__Strs_8;
      MR_Integer mercury__string__Var_11;

      mercury__string__count_codepoints_2_p_0(mercury__string__Str_5, &mercury__string__Var_11);
      mercury__string__succeeded = (mercury__string__Var_11 <= mercury__string__N_6);
      if (mercury__string__succeeded)
        {
          mercury__string__Strs_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__Strs_8, 0) = ((MR_Box) (mercury__string__Str_5));
          MR_hl_field(MR_mktag(1), mercury__string__Strs_8, 1) = ((MR_Box) (mercury__string__Prev_7));
        }
      else
      {
        MR_String mercury__string__Left_9;
        MR_String mercury__string__Right_10;
        MR_Word mercury__string__Var_12;

        mercury__string__split_by_codepoint_4_p_0(mercury__string__Str_5, mercury__string__N_6, &mercury__string__Left_9, &mercury__string__Right_10);
        {
          mercury__string__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__Var_12, 0) = ((MR_Box) (mercury__string__Left_9));
          MR_hl_field(MR_mktag(1), mercury__string__Var_12, 1) = ((MR_Box) (mercury__string__Prev_7));
        }
        /* direct tailcall eliminated */
        {
          MR_String mercury__string__next_value_of_Str_5 = mercury__string__Right_10;
          MR_Word mercury__string__next_value_of_Prev_7 = mercury__string__Var_12;

          mercury__string__Str_5 = mercury__string__next_value_of_Str_5;
          mercury__string__Prev_7 = mercury__string__next_value_of_Prev_7;
        }
        continue;
      }
      return mercury__string__Strs_8;
    }
    break;
  }
}

MR_String MR_CALL 
mercury__string__replace_all_3_f_0(
  MR_String mercury__string__S1_5,
  MR_String mercury__string__S2_6,
  MR_String mercury__string__S3_7)
{
  {
    MR_String mercury__string__S4_8;

    mercury__string__replace_all_4_p_0(mercury__string__S1_5, mercury__string__S2_6, mercury__string__S3_7, &mercury__string__S4_8);
    return mercury__string__S4_8;
  }
}

void MR_CALL 
mercury__string__replace_all_4_p_0(
  MR_String mercury__string__Str_5,
  MR_String mercury__string__Pat_6,
  MR_String mercury__string__Subst_7,
  MR_String * mercury__string__Result_8)
{
  {
    MR_bool mercury__string__succeeded = (strcmp(mercury__string__Pat_6, (MR_String) "") == 0);

    if (mercury__string__succeeded)
    {
      MR_Word mercury__string__TypeCtorInfo_29_29;
      MR_Word mercury__string__Foldl_12;
      MR_Word mercury__string__Var_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      MR_Word mercury__string__Var_22;
      MR_Word mercury__string__Var_23;
      MR_Integer mercury__string__Length_51;
      MR_Integer mercury__string__End_67;
      MR_Integer mercury__string__Var_69;

{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_51  = Length;
}
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_69  = Length;
}
      mercury__string__succeeded = (mercury__string__Length_51 < mercury__string__Var_69);
      if (mercury__string__succeeded)
        mercury__string__End_67 = mercury__string__Length_51;
      else
        mercury__string__End_67 = mercury__string__Var_69;
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_49_95_95_91_49_44_32_51_93_95_48_6_p_0(mercury__string__Subst_7, mercury__string__Str_5, (MR_Integer) 0, mercury__string__End_67, mercury__string__Var_21, &mercury__string__Foldl_12);
      mercury__string__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_29_29, mercury__string__Foldl_12, &mercury__string__Var_23);
      {
        mercury__string__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__string__Var_22, 0) = ((MR_Box) (mercury__string__Subst_7));
        MR_hl_field(MR_mktag(1), mercury__string__Var_22, 1) = ((MR_Box) (mercury__string__Var_23));
      }
      *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__Var_22);
    }
    else
    {
      MR_Word mercury__string__TypeCtorInfo_30_30;
      MR_Integer mercury__string__PatLength_13;
      MR_Word mercury__string__ReversedChunks_14;
      MR_Word mercury__string__Chunks_15;
      MR_Word mercury__string__Var_25;

{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Pat_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__PatLength_13  = Length;
}
      mercury__string__Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      mercury__string__replace_all_loop_7_p_0(mercury__string__Str_5, mercury__string__Pat_6, mercury__string__Subst_7, mercury__string__PatLength_13, (MR_Integer) 0, mercury__string__Var_25, &mercury__string__ReversedChunks_14);
      mercury__string__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      mercury__string__Chunks_15 = mercury__list__reverse_1_f_0(mercury__string__TypeCtorInfo_30_30, mercury__string__ReversedChunks_14);
      *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__Chunks_15);
    }
  }
}

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_49_95_95_91_49_44_32_51_93_95_48_6_p_0(
  MR_String mercury__string__Var_21,
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__I_9,
  MR_Integer mercury__string__End_10,
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
      MR_Integer mercury__string__J_12;
      MR_Char mercury__string__Char_13;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_49_95_95_91_49_44_32_51_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
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
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
      }
      if (mercury__string__succeeded)
      {
        MR_Word mercury__string__STATE_VARIABLE_Acc_16_16;
        MR_String mercury__string__Var_51;
        MR_String mercury__string__Var_52;

        mercury__string__char_to_string_2_p_0(mercury__string__Char_13, &mercury__string__Var_52);
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_49_95_95_91_49_44_32_51_93_95_48_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Var_52 ;
	S2 =  mercury__string__Var_21 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_51  = S3;
}
        {
          mercury__string__STATE_VARIABLE_Acc_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_Acc_16_16, 0) = ((MR_Box) (mercury__string__Var_51));
          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_Acc_16_16, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_Acc_0_14));
        }
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_I_9 = mercury__string__J_12;
          MR_Word mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

          mercury__string__I_9 = mercury__string__next_value_of_I_9;
          mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14;
        }
        continue;
      }
      else
        *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
    }
    break;
  }
}

void MR_CALL 
mercury__string__char_to_string_2_p_0(
  MR_Char mercury__string__Char_3,
  MR_String * mercury__string__String_4)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Word mercury__string__Var_5;
    MR_Word mercury__string__Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_String mercury__string__Str0_15;

    {
      mercury__string__Var_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__string__Var_5, 0) = ((MR_Box) (MR_Word) (mercury__string__Char_3));
      MR_hl_field(MR_mktag(1), mercury__string__Var_5, 1) = ((MR_Box) (mercury__string__Var_6));
    }
    mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__Var_5, &mercury__string__Str0_15);
    if (mercury__string__succeeded)
      *mercury__string__String_4 = mercury__string__Str0_15;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_char_list\'/2", (MR_String) "null character in list");
        return;
      }
    }
  }
}

void MR_CALL 
mercury__string__replace_all_loop_7_p_0(
  MR_String mercury__string__Str_8,
  MR_String mercury__string__Pat_9,
  MR_String mercury__string__Subst_10,
  MR_Integer mercury__string__PatLength_11,
  MR_Integer mercury__string__BeginAt_12,
  MR_Word mercury__string__RevChunks0_13,
  MR_Word * mercury__string__RevChunks_14)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;
      MR_Integer mercury__string__Index_15;

{
#define MR_PROC_LABEL mercury__string__replace_all_loop_7_p_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString =  mercury__string__Str_8 ;
	Pattern =  mercury__string__Pat_9 ;
	BeginAt =  mercury__string__BeginAt_12 ;
		{
{
    char *match;
    if ((MR_Unsigned) BeginAt > strlen(WholeString)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        match = strstr(WholeString + BeginAt, Pattern);
        if (match) {
            Index = match - WholeString;
            SUCCESS_INDICATOR = MR_TRUE;
        } else {
            SUCCESS_INDICATOR = MR_FALSE;
        }
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Index_15  = Index;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
      {
        MR_String mercury__string__Initial_16;
        MR_Integer mercury__string__Start_17;
        MR_Word mercury__string__Var_19;
        MR_Word mercury__string__Var_20;

{
#define MR_PROC_LABEL mercury__string__replace_all_loop_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_8 ;
	Start =  mercury__string__BeginAt_12 ;
	End =  mercury__string__Index_15 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Initial_16  = SubString;
}
        mercury__string__Start_17 = (mercury__string__Index_15 + mercury__string__PatLength_11);
        {
          mercury__string__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__Var_20, 0) = ((MR_Box) (mercury__string__Initial_16));
          MR_hl_field(MR_mktag(1), mercury__string__Var_20, 1) = ((MR_Box) (mercury__string__RevChunks0_13));
        }
        {
          mercury__string__Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__string__Var_19, 0) = ((MR_Box) (mercury__string__Subst_10));
          MR_hl_field(MR_mktag(1), mercury__string__Var_19, 1) = ((MR_Box) (mercury__string__Var_20));
        }
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_BeginAt_12 = mercury__string__Start_17;
          MR_Word mercury__string__next_value_of_RevChunks0_13 = mercury__string__Var_19;

          mercury__string__BeginAt_12 = mercury__string__next_value_of_BeginAt_12;
          mercury__string__RevChunks0_13 = mercury__string__next_value_of_RevChunks0_13;
        }
        continue;
      }
      else
      {
        MR_String mercury__string__EndString_18;
        MR_Integer mercury__string__Var_21;

{
#define MR_PROC_LABEL mercury__string__replace_all_loop_7_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_21  = Length;
}
{
#define MR_PROC_LABEL mercury__string__replace_all_loop_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_8 ;
	Start =  mercury__string__BeginAt_12 ;
	End =  mercury__string__Var_21 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__EndString_18  = SubString;
}
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__string__RevChunks_14 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__EndString_18));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__RevChunks0_13));
        }
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__string__replace_4_p_0(
  MR_String mercury__string__Str_5,
  MR_String mercury__string__Pat_6,
  MR_String mercury__string__Subst_7,
  MR_String * mercury__string__Result_8)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__Index_9;
    MR_String mercury__string__Initial_10;
    MR_Integer mercury__string__BeginAt_11;
    MR_Integer mercury__string__EndAt_12;
    MR_String mercury__string__Final_13;
    MR_Integer mercury__string__Var_14;
    MR_Integer mercury__string__Var_15;
    MR_Word mercury__string__Var_16;
    MR_Word mercury__string__Var_17;
    MR_Word mercury__string__Var_18;
    MR_Word mercury__string__Var_19;

{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString =  mercury__string__Str_5 ;
	Pattern =  mercury__string__Pat_6 ;
	BeginAt =  (MR_Integer) 0 ;
		{
{
    char *match;
    if ((MR_Unsigned) BeginAt > strlen(WholeString)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        match = strstr(WholeString + BeginAt, Pattern);
        if (match) {
            Index = match - WholeString;
            SUCCESS_INDICATOR = MR_TRUE;
        } else {
            SUCCESS_INDICATOR = MR_FALSE;
        }
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Index_9  = Index;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
    {
      mercury__string__Var_14 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_5 ;
	Start =  mercury__string__Var_14 ;
	End =  mercury__string__Index_9 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Initial_10  = SubString;
}
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Pat_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_15  = Length;
}
      mercury__string__BeginAt_11 = (mercury__string__Index_9 + mercury__string__Var_15);
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__EndAt_12  = Length;
}
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_5 ;
	Start =  mercury__string__BeginAt_11 ;
	End =  mercury__string__EndAt_12 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Final_13  = SubString;
}
      mercury__string__Var_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__string__Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__string__Var_18, 0) = ((MR_Box) (mercury__string__Final_13));
        MR_hl_field(MR_mktag(1), mercury__string__Var_18, 1) = ((MR_Box) (mercury__string__Var_19));
      }
      {
        mercury__string__Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__string__Var_17, 0) = ((MR_Box) (mercury__string__Subst_7));
        MR_hl_field(MR_mktag(1), mercury__string__Var_17, 1) = ((MR_Box) (mercury__string__Var_18));
      }
      {
        mercury__string__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__string__Var_16, 0) = ((MR_Box) (mercury__string__Initial_10));
        MR_hl_field(MR_mktag(1), mercury__string__Var_16, 1) = ((MR_Box) (mercury__string__Var_17));
      }
      *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__Var_16);
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

MR_String MR_CALL 
mercury__string__rstrip_pred_2_f_0(
  MR_Word mercury__string__P_4,
  MR_String mercury__string__S_5)
{
  {
    MR_String mercury__string__HeadVar__3_3;
    MR_Integer mercury__string__Var_6;
    MR_Integer mercury__string__Var_7;
    MR_Integer mercury__string__Var_8;
    MR_Integer mercury__string__End_16;
    MR_Integer mercury__string__Index_17;
    MR_String mercury__string___RightString_29;

{
#define MR_PROC_LABEL mercury__string__rstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_7  = Length;
}
{
#define MR_PROC_LABEL mercury__string__rstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__End_16  = Length;
}
    mercury__string__suffix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, mercury__string__End_16, &mercury__string__Index_17);
    mercury__string__Var_8 = (mercury__string__End_16 - mercury__string__Index_17);
    mercury__string__Var_6 = (mercury__string__Var_7 - mercury__string__Var_8);
    mercury__string__split_4_p_0(mercury__string__S_5, mercury__string__Var_6, &mercury__string__HeadVar__3_3, &mercury__string___RightString_29);
    return mercury__string__HeadVar__3_3;
  }
}

MR_String MR_CALL 
mercury__string__lstrip_pred_2_f_0(
  MR_Word mercury__string__P_4,
  MR_String mercury__string__S_5)
{
  {
    MR_String mercury__string__HeadVar__3_3;
    MR_Integer mercury__string__Var_6;
    MR_Integer mercury__string__Var_7;
    MR_Integer mercury__string__Var_8;
    MR_Integer mercury__string__Length_24;
    MR_Integer mercury__string__LeftCount_25;
    MR_String mercury__string___LeftString_26;

{
#define MR_PROC_LABEL mercury__string__lstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_7  = Length;
}
    mercury__string__prefix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, (MR_Integer) 0, &mercury__string__Var_8);
    mercury__string__Var_6 = (mercury__string__Var_7 - mercury__string__Var_8);
{
#define MR_PROC_LABEL mercury__string__lstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_24  = Length;
}
    mercury__string__LeftCount_25 = (mercury__string__Length_24 - mercury__string__Var_6);
    mercury__string__split_4_p_0(mercury__string__S_5, mercury__string__LeftCount_25, &mercury__string___LeftString_26, &mercury__string__HeadVar__3_3);
    return mercury__string__HeadVar__3_3;
  }
}

MR_String MR_CALL 
mercury__string__rstrip_1_f_0(
  MR_String mercury__string__S_3)
{
  {
    MR_String mercury__string__HeadVar__2_2;
    MR_Integer mercury__string__Var_9;
    MR_Integer mercury__string__Var_10;
    MR_Integer mercury__string__Var_11;
    MR_Integer mercury__string__End_20;
    MR_Integer mercury__string__Index_21;
    MR_String mercury__string___RightString_33;

{
#define MR_PROC_LABEL mercury__string__rstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_10  = Length;
}
{
#define MR_PROC_LABEL mercury__string__rstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__End_20  = Length;
}
    mercury__string__suffix_length_loop__ho35_4_p_0(mercury__string__S_3, mercury__string__End_20, &mercury__string__Index_21);
    mercury__string__Var_11 = (mercury__string__End_20 - mercury__string__Index_21);
    mercury__string__Var_9 = (mercury__string__Var_10 - mercury__string__Var_11);
    mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__Var_9, &mercury__string__HeadVar__2_2, &mercury__string___RightString_33);
    return mercury__string__HeadVar__2_2;
  }
}

MR_String MR_CALL 
mercury__string__lstrip_1_f_0(
  MR_String mercury__string__S_3)
{
  {
    MR_String mercury__string__HeadVar__2_2;
    MR_Integer mercury__string__Var_9;
    MR_Integer mercury__string__Var_10;
    MR_Integer mercury__string__Var_11;
    MR_Integer mercury__string__Length_28;
    MR_Integer mercury__string__LeftCount_29;
    MR_String mercury__string___LeftString_30;

{
#define MR_PROC_LABEL mercury__string__lstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_10  = Length;
}
    mercury__string__prefix_length_loop__ho34_4_p_0(mercury__string__S_3, (MR_Integer) 0, &mercury__string__Var_11);
    mercury__string__Var_9 = (mercury__string__Var_10 - mercury__string__Var_11);
{
#define MR_PROC_LABEL mercury__string__lstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_28  = Length;
}
    mercury__string__LeftCount_29 = (mercury__string__Length_28 - mercury__string__Var_9);
    mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__LeftCount_29, &mercury__string___LeftString_30, &mercury__string__HeadVar__2_2);
    return mercury__string__HeadVar__2_2;
  }
}

MR_String MR_CALL 
mercury__string__strip_1_f_0(
  MR_String mercury__string__S0_3)
{
  {
    MR_String mercury__string__S_4;
    MR_Integer mercury__string__L_5;
    MR_Integer mercury__string__R_6;
    MR_Integer mercury__string__Var_9;
    MR_Integer mercury__string__Var_10;
    MR_Integer mercury__string__End_21;
    MR_Integer mercury__string__Index_22;

    mercury__string__prefix_length_loop__ho34_4_p_0(mercury__string__S0_3, (MR_Integer) 0, &mercury__string__L_5);
{
#define MR_PROC_LABEL mercury__string__strip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S0_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__End_21  = Length;
}
    mercury__string__suffix_length_loop__ho35_4_p_0(mercury__string__S0_3, mercury__string__End_21, &mercury__string__Index_22);
    mercury__string__R_6 = (mercury__string__End_21 - mercury__string__Index_22);
{
#define MR_PROC_LABEL mercury__string__strip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S0_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_10  = Length;
}
    mercury__string__Var_9 = (mercury__string__Var_10 - mercury__string__R_6);
    mercury__string__between_4_p_0(mercury__string__S0_3, mercury__string__L_5, mercury__string__Var_9, &mercury__string__S_4);
    return mercury__string__S_4;
  }
}

static void MR_CALL 
mercury__string__suffix_length_loop__ho35_4_p_0(
  MR_String mercury__string__S_6,
  MR_Integer mercury__string__I_7,
  MR_Integer * mercury__string__Index_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;
      MR_Integer mercury__string__J_9;
      MR_Char mercury__string__Char_10;

{
#define MR_PROC_LABEL mercury__string__suffix_length_loop__ho35_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_6 ;
	Index =  mercury__string__I_7 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = PrevIndex;
	 mercury__string__Char_10  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
        mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
      if (mercury__string__succeeded)
      {
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_I_7 = mercury__string__J_9;

          mercury__string__I_7 = mercury__string__next_value_of_I_7;
        }
        continue;
      }
      else
        *mercury__string__Index_8 = mercury__string__I_7;
    }
    break;
  }
}

static void MR_CALL 
mercury__string__prefix_length_loop__ho34_4_p_0(
  MR_String mercury__string__S_6,
  MR_Integer mercury__string__I_7,
  MR_Integer * mercury__string__Index_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;
      MR_Integer mercury__string__J_9;
      MR_Char mercury__string__Char_10;

{
#define MR_PROC_LABEL mercury__string__prefix_length_loop__ho34_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_6 ;
	Index =  mercury__string__I_7 ;
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
	 mercury__string__J_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
        mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
      if (mercury__string__succeeded)
      {
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_I_7 = mercury__string__J_9;

          mercury__string__I_7 = mercury__string__next_value_of_I_7;
        }
        continue;
      }
      else
        *mercury__string__Index_8 = mercury__string__I_7;
    }
    break;
  }
}

MR_String MR_CALL 
mercury__string__chomp_1_f_0(
  MR_String mercury__string__S_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_String mercury__string__Chomp_4;
    MR_Integer mercury__string__Offset_5;
    MR_Integer mercury__string__Var_6;
    MR_Char mercury__string__Var_8;
    MR_Integer mercury__string__Len_18;
    MR_Integer mercury__string__Var_19;

{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_6  = Length;
}
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_18  = Length;
}
    mercury__string__Var_19 = (mercury__string__Var_6 - (MR_Integer) 1);
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Var_19 ;
	Length =  mercury__string__Len_18 ;
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
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_3 ;
	Index =  mercury__string__Var_6 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Offset_5  = PrevIndex;
	 mercury__string__Var_8  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
        mercury__string__succeeded = ((MR_Char) 10 == mercury__string__Var_8);
    }
    if (mercury__string__succeeded)
    {
      MR_String mercury__string___RightString_35;

      mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__Offset_5, &mercury__string__Chomp_4, &mercury__string___RightString_35);
    }
    else
      mercury__string__Chomp_4 = mercury__string__S_3;
    return mercury__string__Chomp_4;
  }
}

void MR_CALL 
mercury__string__pad_right_4_p_0(
  MR_String mercury__string__String0_5,
  MR_Char mercury__string__PadChar_6,
  MR_Integer mercury__string__Width_7,
  MR_String * mercury__string__String_8)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__Length_9;

    mercury__string__count_codepoints_2_p_0(mercury__string__String0_5, &mercury__string__Length_9);
    mercury__string__succeeded = (mercury__string__Length_9 < mercury__string__Width_7);
    if (mercury__string__succeeded)
    {
      MR_Integer mercury__string__Count_10 = (mercury__string__Width_7 - mercury__string__Length_9);
      MR_String mercury__string__PadString_11;

      mercury__string__duplicate_char_3_p_0(mercury__string__PadChar_6, mercury__string__Count_10, &mercury__string__PadString_11);
{
#define MR_PROC_LABEL mercury__string__pad_right_4_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__String0_5 ;
	S2 =  mercury__string__PadString_11 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__String_8  = S3;
}
    }
    else
      *mercury__string__String_8 = mercury__string__String0_5;
  }
}

MR_String MR_CALL 
mercury__string__pad_right_3_f_0(
  MR_String mercury__string__S1_5,
  MR_Char mercury__string__C_6,
  MR_Integer mercury__string__N_7)
{
  {
    MR_bool mercury__string__succeeded;
    MR_String mercury__string__S2_8;
    MR_Integer mercury__string__Length_13;

    mercury__string__count_codepoints_2_p_0(mercury__string__S1_5, &mercury__string__Length_13);
    mercury__string__succeeded = (mercury__string__Length_13 < mercury__string__N_7);
    if (mercury__string__succeeded)
    {
      MR_Integer mercury__string__Count_14 = (mercury__string__N_7 - mercury__string__Length_13);
      MR_String mercury__string__PadString_15;

      mercury__string__duplicate_char_3_p_0(mercury__string__C_6, mercury__string__Count_14, &mercury__string__PadString_15);
{
#define MR_PROC_LABEL mercury__string__pad_right_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_5 ;
	S2 =  mercury__string__PadString_15 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_8  = S3;
}
    }
    else
      mercury__string__S2_8 = mercury__string__S1_5;
    return mercury__string__S2_8;
  }
}

void MR_CALL 
mercury__string__pad_left_4_p_0(
  MR_String mercury__string__String0_5,
  MR_Char mercury__string__PadChar_6,
  MR_Integer mercury__string__Width_7,
  MR_String * mercury__string__String_8)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__Length_9;

    mercury__string__count_codepoints_2_p_0(mercury__string__String0_5, &mercury__string__Length_9);
    mercury__string__succeeded = (mercury__string__Length_9 < mercury__string__Width_7);
    if (mercury__string__succeeded)
    {
      MR_Integer mercury__string__Count_10 = (mercury__string__Width_7 - mercury__string__Length_9);
      MR_String mercury__string__PadString_11;

      mercury__string__duplicate_char_3_p_0(mercury__string__PadChar_6, mercury__string__Count_10, &mercury__string__PadString_11);
{
#define MR_PROC_LABEL mercury__string__pad_left_4_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_11 ;
	S2 =  mercury__string__String0_5 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__String_8  = S3;
}
    }
    else
      *mercury__string__String_8 = mercury__string__String0_5;
  }
}

MR_String MR_CALL 
mercury__string__pad_left_3_f_0(
  MR_String mercury__string__S1_5,
  MR_Char mercury__string__C_6,
  MR_Integer mercury__string__N_7)
{
  {
    MR_bool mercury__string__succeeded;
    MR_String mercury__string__S2_8;
    MR_Integer mercury__string__Length_13;

    mercury__string__count_codepoints_2_p_0(mercury__string__S1_5, &mercury__string__Length_13);
    mercury__string__succeeded = (mercury__string__Length_13 < mercury__string__N_7);
    if (mercury__string__succeeded)
    {
      MR_Integer mercury__string__Count_14 = (mercury__string__N_7 - mercury__string__Length_13);
      MR_String mercury__string__PadString_15;

      mercury__string__duplicate_char_3_p_0(mercury__string__C_6, mercury__string__Count_14, &mercury__string__PadString_15);
{
#define MR_PROC_LABEL mercury__string__pad_left_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_15 ;
	S2 =  mercury__string__S1_5 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_8  = S3;
}
    }
    else
      mercury__string__S2_8 = mercury__string__S1_5;
    return mercury__string__S2_8;
  }
}

MR_bool MR_CALL 
mercury__string__to_lower_2_p_1(
  MR_String mercury__string__X_1,
  MR_String mercury__string__Y_2)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__LenX_9;
    MR_Integer mercury__string__LenY_10;
    MR_Integer mercury__string__Var_11;

{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__X_1 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__LenX_9  = Length;
}
{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Y_2 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__LenY_10  = Length;
}
    mercury__string__succeeded = (mercury__string__LenX_9 == mercury__string__LenY_10);
    if (mercury__string__succeeded)
    {
      mercury__string__Var_11 = (MR_Integer) 0;
      mercury__string__succeeded = mercury__string__check_lower_loop_4_p_0(mercury__string__X_1, mercury__string__Y_2, mercury__string__Var_11, mercury__string__LenX_9);
    }
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__check_lower_loop_4_p_0(
  MR_String mercury__string__X_5,
  MR_String mercury__string__Y_6,
  MR_Integer mercury__string__Index_7,
  MR_Integer mercury__string__End_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__Index_7 == mercury__string__End_8);

      if (mercury__string__succeeded)
        mercury__string__succeeded = MR_TRUE;
      else
      {
        MR_Integer mercury__string__CodeX_9;
        MR_Integer mercury__string__CodeY_10;
        MR_Integer mercury__string__Var_11;
        MR_Integer mercury__string__Var_12;
        MR_Integer mercury__string__Var_13;

{
#define MR_PROC_LABEL mercury__string__check_lower_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__X_5 ;
	Index =  mercury__string__Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__string__CodeX_9  = Code;
}
{
#define MR_PROC_LABEL mercury__string__check_lower_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Y_6 ;
	Index =  mercury__string__Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__string__CodeY_10  = Code;
}
        mercury__string__to_lower_code_unit_2_p_0(mercury__string__CodeX_9, &mercury__string__Var_13);
        mercury__string__succeeded = (mercury__string__CodeY_10 == mercury__string__Var_13);
        if (mercury__string__succeeded)
        {
          mercury__string__Var_12 = (MR_Integer) 1;
          mercury__string__Var_11 = (mercury__string__Index_7 + mercury__string__Var_12);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__string__next_value_of_Index_7 = mercury__string__Var_11;

            mercury__string__Index_7 = mercury__string__next_value_of_Index_7;
          }
          continue;
        }
      }
      return mercury__string__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__string__to_lower_code_unit_2_p_0(
  MR_Integer mercury__string__Code0_3,
  MR_Integer * mercury__string__Code_4)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__Var_5;
    MR_Integer mercury__string__Var_7;
    MR_Char mercury__string__Var_8;

{
#define MR_PROC_LABEL mercury__string__to_lower_code_unit_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  (MR_Char) 65 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_5  = Int;
}
    mercury__string__succeeded = (mercury__string__Code0_3 >= mercury__string__Var_5);
    if (mercury__string__succeeded)
    {
      mercury__string__Var_8 = (MR_Char) 90;
{
#define MR_PROC_LABEL mercury__string__to_lower_code_unit_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__Var_8 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_7  = Int;
}
      mercury__string__succeeded = (mercury__string__Code0_3 <= mercury__string__Var_7);
    }
    if (mercury__string__succeeded)
    {
      MR_Integer mercury__string__Var_9;
      MR_Integer mercury__string__Var_10;
      MR_Integer mercury__string__Var_12;

{
#define MR_PROC_LABEL mercury__string__to_lower_code_unit_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  (MR_Char) 65 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_10  = Int;
}
      mercury__string__Var_9 = (mercury__string__Code0_3 - mercury__string__Var_10);
{
#define MR_PROC_LABEL mercury__string__to_lower_code_unit_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  (MR_Char) 97 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_12  = Int;
}
      *mercury__string__Code_4 = (mercury__string__Var_9 + mercury__string__Var_12);
    }
    else
      *mercury__string__Code_4 = mercury__string__Code0_3;
  }
}

void MR_CALL 
mercury__string__to_lower_2_p_0(
  MR_String mercury__string__X_1,
  MR_String * mercury__string__Y_2)
{
  {
{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_0

	MR_String StrIn;
	MR_String StrOut;

	StrIn =  mercury__string__X_1 ;
		{

    MR_Integer  i;

    MR_make_aligned_string_copy_msg(StrOut, StrIn, MR_ALLOC_ID);

    for (i = 0; StrOut[i] != '\0'; i++) {
        if (StrOut[i] >= 'A' && StrOut[i] <= 'Z') {
            StrOut[i] = StrOut[i] - 'A' + 'a';
        }
    }


		;}
#undef MR_PROC_LABEL
	 *mercury__string__Y_2  = StrOut;
}
  }
}

MR_String MR_CALL 
mercury__string__to_lower_1_f_0(
  MR_String mercury__string__S1_3)
{
  {
    MR_String mercury__string__S2_4;

{
#define MR_PROC_LABEL mercury__string__to_lower_1_f_0

	MR_String StrIn;
	MR_String StrOut;

	StrIn =  mercury__string__S1_3 ;
		{

    MR_Integer  i;

    MR_make_aligned_string_copy_msg(StrOut, StrIn, MR_ALLOC_ID);

    for (i = 0; StrOut[i] != '\0'; i++) {
        if (StrOut[i] >= 'A' && StrOut[i] <= 'Z') {
            StrOut[i] = StrOut[i] - 'A' + 'a';
        }
    }


		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_4  = StrOut;
}
    return mercury__string__S2_4;
  }
}

MR_bool MR_CALL 
mercury__string__to_upper_2_p_1(
  MR_String mercury__string__X_1,
  MR_String mercury__string__Y_2)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__LenX_9;
    MR_Integer mercury__string__LenY_10;
    MR_Integer mercury__string__Var_11;

{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__X_1 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__LenX_9  = Length;
}
{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Y_2 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__LenY_10  = Length;
}
    mercury__string__succeeded = (mercury__string__LenX_9 == mercury__string__LenY_10);
    if (mercury__string__succeeded)
    {
      mercury__string__Var_11 = (MR_Integer) 0;
      mercury__string__succeeded = mercury__string__check_upper_loop_4_p_0(mercury__string__X_1, mercury__string__Y_2, mercury__string__Var_11, mercury__string__LenX_9);
    }
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__check_upper_loop_4_p_0(
  MR_String mercury__string__X_5,
  MR_String mercury__string__Y_6,
  MR_Integer mercury__string__Index_7,
  MR_Integer mercury__string__End_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__Index_7 == mercury__string__End_8);

      if (mercury__string__succeeded)
        mercury__string__succeeded = MR_TRUE;
      else
      {
        MR_Integer mercury__string__CodeX_9;
        MR_Integer mercury__string__CodeY_10;
        MR_Integer mercury__string__Var_11;
        MR_Integer mercury__string__Var_12;
        MR_Integer mercury__string__Var_13;

{
#define MR_PROC_LABEL mercury__string__check_upper_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__X_5 ;
	Index =  mercury__string__Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__string__CodeX_9  = Code;
}
{
#define MR_PROC_LABEL mercury__string__check_upper_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Y_6 ;
	Index =  mercury__string__Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__string__CodeY_10  = Code;
}
        mercury__string__to_upper_code_unit_2_p_0(mercury__string__CodeX_9, &mercury__string__Var_13);
        mercury__string__succeeded = (mercury__string__CodeY_10 == mercury__string__Var_13);
        if (mercury__string__succeeded)
        {
          mercury__string__Var_12 = (MR_Integer) 1;
          mercury__string__Var_11 = (mercury__string__Index_7 + mercury__string__Var_12);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__string__next_value_of_Index_7 = mercury__string__Var_11;

            mercury__string__Index_7 = mercury__string__next_value_of_Index_7;
          }
          continue;
        }
      }
      return mercury__string__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__string__to_upper_code_unit_2_p_0(
  MR_Integer mercury__string__Code0_3,
  MR_Integer * mercury__string__Code_4)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__Var_5;
    MR_Integer mercury__string__Var_7;
    MR_Char mercury__string__Var_8;

{
#define MR_PROC_LABEL mercury__string__to_upper_code_unit_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  (MR_Char) 97 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_5  = Int;
}
    mercury__string__succeeded = (mercury__string__Code0_3 >= mercury__string__Var_5);
    if (mercury__string__succeeded)
    {
      mercury__string__Var_8 = (MR_Char) 122;
{
#define MR_PROC_LABEL mercury__string__to_upper_code_unit_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__Var_8 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_7  = Int;
}
      mercury__string__succeeded = (mercury__string__Code0_3 <= mercury__string__Var_7);
    }
    if (mercury__string__succeeded)
    {
      MR_Integer mercury__string__Var_9;
      MR_Integer mercury__string__Var_10;
      MR_Integer mercury__string__Var_12;

{
#define MR_PROC_LABEL mercury__string__to_upper_code_unit_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  (MR_Char) 97 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_10  = Int;
}
      mercury__string__Var_9 = (mercury__string__Code0_3 - mercury__string__Var_10);
{
#define MR_PROC_LABEL mercury__string__to_upper_code_unit_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  (MR_Char) 65 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_12  = Int;
}
      *mercury__string__Code_4 = (mercury__string__Var_9 + mercury__string__Var_12);
    }
    else
      *mercury__string__Code_4 = mercury__string__Code0_3;
  }
}

void MR_CALL 
mercury__string__to_upper_2_p_0(
  MR_String mercury__string__X_1,
  MR_String * mercury__string__Y_2)
{
  {
{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_0

	MR_String StrIn;
	MR_String StrOut;

	StrIn =  mercury__string__X_1 ;
		{

    MR_Integer  i;

    MR_make_aligned_string_copy_msg(StrOut, StrIn, MR_ALLOC_ID);

    for (i = 0; StrOut[i] != '\0'; i++) {
        if (StrOut[i] >= 'a' && StrOut[i] <= 'z') {
            StrOut[i] = StrOut[i] - 'a' + 'A';
        }
    }


		;}
#undef MR_PROC_LABEL
	 *mercury__string__Y_2  = StrOut;
}
  }
}

MR_String MR_CALL 
mercury__string__to_upper_1_f_0(
  MR_String mercury__string__S1_3)
{
  {
    MR_String mercury__string__S2_4;

{
#define MR_PROC_LABEL mercury__string__to_upper_1_f_0

	MR_String StrIn;
	MR_String StrOut;

	StrIn =  mercury__string__S1_3 ;
		{

    MR_Integer  i;

    MR_make_aligned_string_copy_msg(StrOut, StrIn, MR_ALLOC_ID);

    for (i = 0; StrOut[i] != '\0'; i++) {
        if (StrOut[i] >= 'a' && StrOut[i] <= 'z') {
            StrOut[i] = StrOut[i] - 'a' + 'A';
        }
    }


		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_4  = StrOut;
}
    return mercury__string__S2_4;
  }
}

MR_String MR_CALL 
mercury__string__uncapitalize_first_1_f_0(
  MR_String mercury__string__S1_3)
{
  {
    MR_String mercury__string__S2_4;

    mercury__string__uncapitalize_first_2_p_0(mercury__string__S1_3, &mercury__string__S2_4);
    return mercury__string__S2_4;
  }
}

void MR_CALL 
mercury__string__uncapitalize_first_2_p_0(
  MR_String mercury__string__S0_3,
  MR_String * mercury__string__S_4)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Char mercury__string__C_5;
    MR_String mercury__string__S1_6;

{
#define MR_PROC_LABEL mercury__string__uncapitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S0_3 ;
		{
{
    MR_Integer pos = 0;
    First = MR_utf8_get_next(Str, &pos);
    if (First < 1) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Str += pos;
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(Rest, strlen(Str), MR_ALLOC_ID);
        strcpy(Rest, Str);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__C_5  = First;
	 mercury__string__S1_6  = Rest;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
    {
      MR_Char mercury__string__LowerC_7;
      MR_Char mercury__string__V_5_10;

      mercury__string__succeeded = mercury__char__lower_upper_2_p_1(&mercury__string__V_5_10, mercury__string__C_5);
      if (mercury__string__succeeded)
        mercury__string__LowerC_7 = mercury__string__V_5_10;
      else
        mercury__string__LowerC_7 = mercury__string__C_5;
{
#define MR_PROC_LABEL mercury__string__uncapitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__LowerC_7 ;
	Rest =  mercury__string__S1_6 ;
		{
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S_4  = Str;
}
    }
    else
      *mercury__string__S_4 = mercury__string__S0_3;
  }
}

MR_String MR_CALL 
mercury__string__capitalize_first_1_f_0(
  MR_String mercury__string__S1_3)
{
  {
    MR_String mercury__string__S2_4;

    mercury__string__capitalize_first_2_p_0(mercury__string__S1_3, &mercury__string__S2_4);
    return mercury__string__S2_4;
  }
}

void MR_CALL 
mercury__string__capitalize_first_2_p_0(
  MR_String mercury__string__S0_3,
  MR_String * mercury__string__S_4)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Char mercury__string__C_5;
    MR_String mercury__string__S1_6;

{
#define MR_PROC_LABEL mercury__string__capitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S0_3 ;
		{
{
    MR_Integer pos = 0;
    First = MR_utf8_get_next(Str, &pos);
    if (First < 1) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Str += pos;
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(Rest, strlen(Str), MR_ALLOC_ID);
        strcpy(Rest, Str);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__C_5  = First;
	 mercury__string__S1_6  = Rest;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
    {
      MR_Char mercury__string__UpperC_7;
      MR_Char mercury__string__V_5_10;

      mercury__string__succeeded = mercury__char__lower_upper_2_p_0(mercury__string__C_5, &mercury__string__V_5_10);
      if (mercury__string__succeeded)
        mercury__string__UpperC_7 = mercury__string__V_5_10;
      else
        mercury__string__UpperC_7 = mercury__string__C_5;
{
#define MR_PROC_LABEL mercury__string__capitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__UpperC_7 ;
	Rest =  mercury__string__S1_6 ;
		{
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S_4  = Str;
}
    }
    else
      *mercury__string__S_4 = mercury__string__S0_3;
  }
}

MR_String MR_CALL 
mercury__string__remove_suffix_if_present_2_f_0(
  MR_String mercury__string__Suffix_4,
  MR_String mercury__string__String_5)
{
  {
    MR_bool mercury__string__succeeded;
    MR_String mercury__string__Out_6;
    MR_Integer mercury__string__LeftCount_7;
    MR_String mercury__string__LeftString_8;
    MR_String mercury__string__RightString_9;
    MR_Integer mercury__string__Var_10;
    MR_Integer mercury__string__Var_11;

{
#define MR_PROC_LABEL mercury__string__remove_suffix_if_present_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_10  = Length;
}
{
#define MR_PROC_LABEL mercury__string__remove_suffix_if_present_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_11  = Length;
}
    mercury__string__LeftCount_7 = (mercury__string__Var_10 - mercury__string__Var_11);
    mercury__string__split_4_p_0(mercury__string__String_5, mercury__string__LeftCount_7, &mercury__string__LeftString_8, &mercury__string__RightString_9);
    mercury__string__succeeded = (strcmp(mercury__string__RightString_9, mercury__string__Suffix_4) == 0);
    if (mercury__string__succeeded)
      mercury__string__Out_6 = mercury__string__LeftString_8;
    else
      mercury__string__Out_6 = mercury__string__String_5;
    return mercury__string__Out_6;
  }
}

MR_String MR_CALL 
mercury__string__det_remove_suffix_2_f_0(
  MR_String mercury__string__String_4,
  MR_String mercury__string__Suffix_5)
{
  {
    MR_bool mercury__string__succeeded;
    MR_String mercury__string__Prefix_6;
    MR_String mercury__string__PrefixPrime_7;

    mercury__string__succeeded = mercury__string__remove_suffix_3_p_0(mercury__string__String_4, mercury__string__Suffix_5, &mercury__string__PrefixPrime_7);
    if (mercury__string__succeeded)
      mercury__string__Prefix_6 = mercury__string__PrefixPrime_7;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140string.det_remove_suffix\'/2", (MR_String) "string does not have given suffix");
    }
    return mercury__string__Prefix_6;
  }
}

MR_bool MR_CALL 
mercury__string__remove_suffix_3_p_0(
  MR_String mercury__string__String_4,
  MR_String mercury__string__Suffix_5,
  MR_String * mercury__string__Prefix_6)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__Var_7;
    MR_Integer mercury__string__Var_8;
    MR_Integer mercury__string__Var_9;
    MR_Integer mercury__string__Len_12;
    MR_Integer mercury__string__PreLen_13;
    MR_Integer mercury__string__Var_14;
    MR_Integer mercury__string__Var_15;
    MR_String mercury__string___RightString_43;

{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_12  = Length;
}
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_13  = Length;
}
    mercury__string__succeeded = (mercury__string__PreLen_13 <= mercury__string__Len_12);
    if (mercury__string__succeeded)
    {
      mercury__string__Var_14 = (MR_Integer) 0;
      mercury__string__Var_15 = (mercury__string__Len_12 - mercury__string__PreLen_13);
      mercury__string__succeeded = mercury__string__suffix_2_iiii_5_p_0(mercury__string__String_4, mercury__string__Suffix_5, mercury__string__Var_14, mercury__string__Var_15, mercury__string__PreLen_13);
      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_8  = Length;
}
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_9  = Length;
}
        mercury__string__Var_7 = (mercury__string__Var_8 - mercury__string__Var_9);
        mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__Var_7, mercury__string__Prefix_6, &mercury__string___RightString_43);
        mercury__string__succeeded = MR_TRUE;
      }
    }
    return mercury__string__succeeded;
  }
}

MR_String MR_CALL 
mercury__string__remove_prefix_if_present_2_f_0(
  MR_String mercury__string__Prefix_4,
  MR_String mercury__string__String_5)
{
  {
    MR_bool mercury__string__succeeded;
    MR_String mercury__string__Out_6;
    MR_String mercury__string__Suffix_7;

{
#define MR_PROC_LABEL mercury__string__remove_prefix_if_present_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__Prefix_4 ;
	S3 =  mercury__string__String_5 ;
		{
{
    size_t len_1, len_2, len_3;

    len_1 = strlen(S1);
    if (strncmp(S1, S3, len_1) != 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        len_3 = strlen(S3);
        len_2 = len_3 - len_1;
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(S2, len_2, MR_ALLOC_ID);
        strcpy(S2, S3 + len_1);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Suffix_7  = S2;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
      mercury__string__Out_6 = mercury__string__Suffix_7;
    else
      mercury__string__Out_6 = mercury__string__String_5;
    return mercury__string__Out_6;
  }
}

void MR_CALL 
mercury__string__det_remove_prefix_3_p_0(
  MR_String mercury__string__Prefix_4,
  MR_String mercury__string__String_5,
  MR_String * mercury__string__Suffix_6)
{
  {
    MR_bool mercury__string__succeeded;
    MR_String mercury__string__SuffixPrime_7;

{
#define MR_PROC_LABEL mercury__string__det_remove_prefix_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__Prefix_4 ;
	S3 =  mercury__string__String_5 ;
		{
{
    size_t len_1, len_2, len_3;

    len_1 = strlen(S1);
    if (strncmp(S1, S3, len_1) != 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        len_3 = strlen(S3);
        len_2 = len_3 - len_1;
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(S2, len_2, MR_ALLOC_ID);
        strcpy(S2, S3 + len_1);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__SuffixPrime_7  = S2;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
      *mercury__string__Suffix_6 = mercury__string__SuffixPrime_7;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.det_remove_prefix\'/3", (MR_String) "string does not have the given prefix");
        return;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string__remove_prefix_3_p_0(
  MR_String mercury__string__Prefix_4,
  MR_String mercury__string__String_5,
  MR_String * mercury__string__Suffix_6)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__remove_prefix_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__Prefix_4 ;
	S3 =  mercury__string__String_5 ;
		{
{
    size_t len_1, len_2, len_3;

    len_1 = strlen(S1);
    if (strncmp(S1, S3, len_1) != 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        len_3 = strlen(S3);
        len_2 = len_3 - len_1;
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(S2, len_2, MR_ALLOC_ID);
        strcpy(S2, S3 + len_1);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Suffix_6  = S2;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

void MR_CALL 
mercury__string__suffix_2_p_1(
  MR_String mercury__string__String_1,
  MR_String * mercury__string__Suffix_2,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_Integer mercury__string__Len_11;

{
#define MR_PROC_LABEL mercury__string__suffix_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_11  = Length;
}
    mercury__string__suffix_2_ioii_4_p_0(mercury__string__String_1, mercury__string__Suffix_2, mercury__string__Len_11, mercury__string__Len_11, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__suffix_2_ioii_4_p_0(
  MR_String mercury__string__String_5,
  MR_String * mercury__string__Suffix_6,
  MR_Integer mercury__string__Cur_7,
  MR_Integer mercury__string__Len_8,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__suffix_2_ioii_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__String_5 ;
	Start =  mercury__string__Cur_7 ;
	End =  mercury__string__Len_8 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Suffix_6  = SubString;
}
      mercury__string__cont(mercury__string__cont_env_ptr);
      {
        MR_Integer mercury__string__Prev_9;
        MR_Char mercury__string__Var_10;

{
#define MR_PROC_LABEL mercury__string__suffix_2_ioii_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_5 ;
	Index =  mercury__string__Cur_7 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Prev_9  = PrevIndex;
	 mercury__string__Var_10  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__string__next_value_of_Cur_7 = mercury__string__Prev_9;

            mercury__string__Cur_7 = mercury__string__next_value_of_Cur_7;
          }
          continue;
        }
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__string__suffix_2_p_0(
  MR_String mercury__string__String_1,
  MR_String mercury__string__Suffix_2)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__Len_5;
    MR_Integer mercury__string__PreLen_6;
    MR_Integer mercury__string__Var_7;
    MR_Integer mercury__string__Var_8;

{
#define MR_PROC_LABEL mercury__string__suffix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_5  = Length;
}
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_2 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_6  = Length;
}
    mercury__string__succeeded = (mercury__string__PreLen_6 <= mercury__string__Len_5);
    if (mercury__string__succeeded)
    {
      mercury__string__Var_7 = (MR_Integer) 0;
      mercury__string__Var_8 = (mercury__string__Len_5 - mercury__string__PreLen_6);
      mercury__string__succeeded = mercury__string__suffix_2_iiii_5_p_0(mercury__string__String_1, mercury__string__Suffix_2, mercury__string__Var_7, mercury__string__Var_8, mercury__string__PreLen_6);
    }
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__suffix_2_iiii_5_p_0(
  MR_String mercury__string__String_6,
  MR_String mercury__string__Suffix_7,
  MR_Integer mercury__string__I_8,
  MR_Integer mercury__string__Offset_9,
  MR_Integer mercury__string__Len_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_8 < mercury__string__Len_10);

      if (mercury__string__succeeded)
      {
        MR_Integer mercury__string__C_11;
        MR_Integer mercury__string__Var_12 = (mercury__string__I_8 + mercury__string__Offset_9);
        MR_Integer mercury__string__Var_13;
        MR_Integer mercury__string__Var_14;
        MR_Integer mercury__string__Var_15;

{
#define MR_PROC_LABEL mercury__string__suffix_2_iiii_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Var_12 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__string__C_11  = Code;
}
{
#define MR_PROC_LABEL mercury__string__suffix_2_iiii_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Suffix_7 ;
	Index =  mercury__string__I_8 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_15  = Code;
}
        mercury__string__succeeded = (mercury__string__C_11 == mercury__string__Var_15);
        if (mercury__string__succeeded)
        {
          mercury__string__Var_14 = (MR_Integer) 1;
          mercury__string__Var_13 = (mercury__string__I_8 + mercury__string__Var_14);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__string__next_value_of_I_8 = mercury__string__Var_13;

            mercury__string__I_8 = mercury__string__next_value_of_I_8;
          }
          continue;
        }
      }
      else
        mercury__string__succeeded = MR_TRUE;
      return mercury__string__succeeded;
    }
    break;
  }
}

void MR_CALL 
mercury__string__prefix_2_p_1(
  MR_String mercury__string__String_1,
  MR_String * mercury__string__Prefix_2,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    mercury__string__prefix_2_ioi_3_p_0(mercury__string__String_1, mercury__string__Prefix_2, (MR_Integer) 0, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__prefix_2_ioi_3_p_0(
  MR_String mercury__string__String_4,
  MR_String * mercury__string__Prefix_5,
  MR_Integer mercury__string__Cur_6,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__prefix_2_ioi_3_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__String_4 ;
	Start =  (MR_Integer) 0 ;
	End =  mercury__string__Cur_6 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Prefix_5  = SubString;
}
      mercury__string__cont(mercury__string__cont_env_ptr);
      {
        MR_Integer mercury__string__Next_7;
        MR_Char mercury__string__Var_8;

{
#define MR_PROC_LABEL mercury__string__prefix_2_ioi_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__Cur_6 ;
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
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__Var_8  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__string__next_value_of_Cur_6 = mercury__string__Next_7;

            mercury__string__Cur_6 = mercury__string__next_value_of_Cur_6;
          }
          continue;
        }
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__string__prefix_2_p_0(
  MR_String mercury__string__String_1,
  MR_String mercury__string__Prefix_2)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__Len_5;
    MR_Integer mercury__string__PreLen_6;
    MR_Integer mercury__string__Var_7;
    MR_Integer mercury__string__Var_8;

{
#define MR_PROC_LABEL mercury__string__prefix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_5  = Length;
}
{
#define MR_PROC_LABEL mercury__string__prefix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Prefix_2 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_6  = Length;
}
    mercury__string__succeeded = (mercury__string__PreLen_6 <= mercury__string__Len_5);
    if (mercury__string__succeeded)
    {
      mercury__string__Var_8 = (MR_Integer) 1;
      mercury__string__Var_7 = (mercury__string__PreLen_6 - mercury__string__Var_8);
      mercury__string__succeeded = mercury__string__prefix_2_iii_3_p_0(mercury__string__String_1, mercury__string__Prefix_2, mercury__string__Var_7);
    }
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__prefix_2_iii_3_p_0(
  MR_String mercury__string__String_4,
  MR_String mercury__string__Prefix_5,
  MR_Integer mercury__string__I_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = ((MR_Integer) 0 <= mercury__string__I_6);

      if (mercury__string__succeeded)
      {
        MR_Integer mercury__string__C_7;
        MR_Integer mercury__string__Var_9;
        MR_Integer mercury__string__Var_10;
        MR_Integer mercury__string__Var_11;

{
#define MR_PROC_LABEL mercury__string__prefix_2_iii_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__I_6 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__string__C_7  = Code;
}
{
#define MR_PROC_LABEL mercury__string__prefix_2_iii_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Prefix_5 ;
	Index =  mercury__string__I_6 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_11  = Code;
}
        mercury__string__succeeded = (mercury__string__C_7 == mercury__string__Var_11);
        if (mercury__string__succeeded)
        {
          mercury__string__Var_10 = (MR_Integer) 1;
          mercury__string__Var_9 = (mercury__string__I_6 - mercury__string__Var_10);
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__string__next_value_of_I_6 = mercury__string__Var_9;

            mercury__string__I_6 = mercury__string__next_value_of_I_6;
          }
          continue;
        }
      }
      else
        mercury__string__succeeded = MR_TRUE;
      return mercury__string__succeeded;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__string__split_at_string_2_f_0(
  MR_String mercury__string__Needle_4,
  MR_String mercury__string__Total_5)
{
  {
    MR_Word mercury__string__HeadVar__3_3;
    MR_Integer mercury__string__Var_7;

{
#define MR_PROC_LABEL mercury__string__split_at_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Needle_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_7  = Length;
}
    mercury__string__HeadVar__3_3 = mercury__string__split_at_string_loop_4_f_0((MR_Integer) 0, mercury__string__Var_7, mercury__string__Needle_4, mercury__string__Total_5);
    return mercury__string__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__string__split_at_string_loop_4_f_0(
  MR_Integer mercury__string__StartAt_6,
  MR_Integer mercury__string__NeedleLen_7,
  MR_String mercury__string__Needle_8,
  MR_String mercury__string__Total_9)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Word mercury__string__Out_10;
    MR_Integer mercury__string__NeedlePos_11;

{
#define MR_PROC_LABEL mercury__string__split_at_string_loop_4_f_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString =  mercury__string__Total_9 ;
	Pattern =  mercury__string__Needle_8 ;
	BeginAt =  mercury__string__StartAt_6 ;
		{
{
    char *match;
    if ((MR_Unsigned) BeginAt > strlen(WholeString)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        match = strstr(WholeString + BeginAt, Pattern);
        if (match) {
            Index = match - WholeString;
            SUCCESS_INDICATOR = MR_TRUE;
        } else {
            SUCCESS_INDICATOR = MR_FALSE;
        }
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__NeedlePos_11  = Index;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
    {
      MR_String mercury__string__BeforeNeedle_12;
      MR_Word mercury__string__Tail_13;
      MR_Integer mercury__string__Var_16;

      mercury__string__between_4_p_0(mercury__string__Total_9, mercury__string__StartAt_6, mercury__string__NeedlePos_11, &mercury__string__BeforeNeedle_12);
      mercury__string__Var_16 = (mercury__string__NeedlePos_11 + mercury__string__NeedleLen_7);
      mercury__string__Tail_13 = mercury__string__split_at_string_loop_4_f_0(mercury__string__Var_16, mercury__string__NeedleLen_7, mercury__string__Needle_8, mercury__string__Total_9);
      {
        mercury__string__Out_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__string__Out_10, 0) = ((MR_Box) (mercury__string__BeforeNeedle_12));
        MR_hl_field(MR_mktag(1), mercury__string__Out_10, 1) = ((MR_Box) (mercury__string__Tail_13));
      }
    }
    else
    {
      MR_String mercury__string__Last_15;
      MR_Word mercury__string__Var_17;
      MR_String mercury__string___Skip_14;

      mercury__string__split_4_p_0(mercury__string__Total_9, mercury__string__StartAt_6, &mercury__string___Skip_14, &mercury__string__Last_15);
      mercury__string__Var_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      {
        mercury__string__Out_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__string__Out_10, 0) = ((MR_Box) (mercury__string__Last_15));
        MR_hl_field(MR_mktag(1), mercury__string__Out_10, 1) = ((MR_Box) (mercury__string__Var_17));
      }
    }
    return mercury__string__Out_10;
  }
}

MR_Word MR_CALL 
mercury__string__split_at_char_2_f_0(
  MR_Char mercury__string__C_4,
  MR_String mercury__string__String_5)
{
  {
    MR_Word mercury__string__HeadVar__3_3;
    MR_Integer mercury__string__Len_12;
    MR_Word mercury__string__Var_14;

{
#define MR_PROC_LABEL mercury__string__split_at_char_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_12  = Length;
}
    mercury__string__Var_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_51_95_95_91_50_93_95_48_6_p_0(mercury__string__C_4, mercury__string__String_5, mercury__string__Len_12, mercury__string__Len_12, mercury__string__Var_14, &mercury__string__HeadVar__3_3);
    return mercury__string__HeadVar__3_3;
  }
}

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_51_95_95_91_50_93_95_48_6_p_0(
  MR_Char mercury__string__Var_25,
  MR_String mercury__string__Str_8,
  MR_Integer mercury__string__CurPos_9,
  MR_Integer mercury__string__PastSegEnd_10,
  MR_Word mercury__string__STATE_VARIABLE_Segments_0_16,
  MR_Word * mercury__string__STATE_VARIABLE_Segments_17)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;
      MR_Integer mercury__string__PrevPos_12;
      MR_Char mercury__string__Char_13;

{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_51_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_8 ;
	Index =  mercury__string__CurPos_9 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__PrevPos_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
      {
        mercury__string__succeeded = (mercury__string__Var_25 == mercury__string__Char_13);
        if (mercury__string__succeeded)
        {
          MR_String mercury__string__Segment_15;
          MR_Word mercury__string__STATE_VARIABLE_Segments_18_18;

{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_51_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_8 ;
	Start =  mercury__string__CurPos_9 ;
	End =  mercury__string__PastSegEnd_10 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Segment_15  = SubString;
}
          {
            mercury__string__STATE_VARIABLE_Segments_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_Segments_18_18, 0) = ((MR_Box) (mercury__string__Segment_15));
            MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_Segments_18_18, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_Segments_0_16));
          }
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__string__next_value_of_CurPos_9 = mercury__string__PrevPos_12;
            MR_Integer mercury__string__next_value_of_PastSegEnd_10 = mercury__string__PrevPos_12;
            MR_Word mercury__string__next_value_of_STATE_VARIABLE_Segments_0_16 = mercury__string__STATE_VARIABLE_Segments_18_18;

            mercury__string__CurPos_9 = mercury__string__next_value_of_CurPos_9;
            mercury__string__PastSegEnd_10 = mercury__string__next_value_of_PastSegEnd_10;
            mercury__string__STATE_VARIABLE_Segments_0_16 = mercury__string__next_value_of_STATE_VARIABLE_Segments_0_16;
          }
          continue;
        }
        else
        {
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__string__next_value_of_CurPos_9 = mercury__string__PrevPos_12;

            mercury__string__CurPos_9 = mercury__string__next_value_of_CurPos_9;
          }
          continue;
        }
      }
      else
      {
        MR_String mercury__string__Segment_24;

{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_51_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_8 ;
	Start =  (MR_Integer) 0 ;
	End =  mercury__string__PastSegEnd_10 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Segment_24  = SubString;
}
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__string__STATE_VARIABLE_Segments_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Segment_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_Segments_0_16));
        }
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__string__split_at_separator_2_f_0(
  MR_Word mercury__string__DelimP_4,
  MR_String mercury__string__Str_5)
{
  {
    MR_Word mercury__string__Segments_6;
    MR_Integer mercury__string__Len_7;
    MR_Word mercury__string__Var_9;

{
#define MR_PROC_LABEL mercury__string__split_at_separator_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_7  = Length;
}
    mercury__string__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__string__split_at_separator_loop_6_p_0(mercury__string__DelimP_4, mercury__string__Str_5, mercury__string__Len_7, mercury__string__Len_7, mercury__string__Var_9, &mercury__string__Segments_6);
    return mercury__string__Segments_6;
  }
}

void MR_CALL 
mercury__string__split_at_separator_loop_6_p_0(
  MR_Word mercury__string__DelimP_7,
  MR_String mercury__string__Str_8,
  MR_Integer mercury__string__CurPos_9,
  MR_Integer mercury__string__PastSegEnd_10,
  MR_Word mercury__string__STATE_VARIABLE_Segments_0_16,
  MR_Word * mercury__string__STATE_VARIABLE_Segments_17)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;
      MR_Integer mercury__string__PrevPos_12;
      MR_Char mercury__string__Char_13;

{
#define MR_PROC_LABEL mercury__string__split_at_separator_loop_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_8 ;
	Index =  mercury__string__CurPos_9 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__PrevPos_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
      {
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__DelimP_7, (MR_Integer) 1)));

        mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__DelimP_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)));
        if (mercury__string__succeeded)
        {
          MR_String mercury__string__Segment_15;
          MR_Word mercury__string__STATE_VARIABLE_Segments_18_18;

{
#define MR_PROC_LABEL mercury__string__split_at_separator_loop_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_8 ;
	Start =  mercury__string__CurPos_9 ;
	End =  mercury__string__PastSegEnd_10 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Segment_15  = SubString;
}
          {
            mercury__string__STATE_VARIABLE_Segments_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_Segments_18_18, 0) = ((MR_Box) (mercury__string__Segment_15));
            MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_Segments_18_18, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_Segments_0_16));
          }
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__string__next_value_of_CurPos_9 = mercury__string__PrevPos_12;
            MR_Integer mercury__string__next_value_of_PastSegEnd_10 = mercury__string__PrevPos_12;
            MR_Word mercury__string__next_value_of_STATE_VARIABLE_Segments_0_16 = mercury__string__STATE_VARIABLE_Segments_18_18;

            mercury__string__CurPos_9 = mercury__string__next_value_of_CurPos_9;
            mercury__string__PastSegEnd_10 = mercury__string__next_value_of_PastSegEnd_10;
            mercury__string__STATE_VARIABLE_Segments_0_16 = mercury__string__next_value_of_STATE_VARIABLE_Segments_0_16;
          }
          continue;
        }
        else
        {
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__string__next_value_of_CurPos_9 = mercury__string__PrevPos_12;

            mercury__string__CurPos_9 = mercury__string__next_value_of_CurPos_9;
          }
          continue;
        }
      }
      else
      {
        MR_String mercury__string__Segment_24;

{
#define MR_PROC_LABEL mercury__string__split_at_separator_loop_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_8 ;
	Start =  (MR_Integer) 0 ;
	End =  mercury__string__PastSegEnd_10 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Segment_24  = SubString;
}
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__string__STATE_VARIABLE_Segments_17 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Segment_24));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_Segments_0_16));
        }
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__string__words_1_f_0(
  MR_String mercury__string__String_3)
{
  {
    MR_Word mercury__string__HeadVar__2_2;
    MR_Integer mercury__string__WordStart_10;

    mercury__string__skip_to_next_word_start__ho37_4_p_0(mercury__string__String_3, (MR_Integer) 0, &mercury__string__WordStart_10);
    mercury__string__words_loop__ho38_4_p_0(mercury__string__String_3, mercury__string__WordStart_10, &mercury__string__HeadVar__2_2);
    return mercury__string__HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__string__words_loop__ho38_4_p_0(
  MR_String mercury__string__String_6,
  MR_Integer mercury__string__WordStartPos_7,
  MR_Word * mercury__string__Words_8)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__PastWordEndPos_9;

    mercury__string__skip_to_word_end__ho47_4_p_0(mercury__string__String_6, mercury__string__WordStartPos_7, &mercury__string__PastWordEndPos_9);
    mercury__string__succeeded = (mercury__string__PastWordEndPos_9 == mercury__string__WordStartPos_7);
    if (mercury__string__succeeded)
      *mercury__string__Words_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_String mercury__string__HeadWord_10;
      MR_Integer mercury__string__NextWordStartPos_11;

{
#define MR_PROC_LABEL mercury__string__words_loop__ho38_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__String_6 ;
	Start =  mercury__string__WordStartPos_7 ;
	End =  mercury__string__PastWordEndPos_9 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadWord_10  = SubString;
}
      mercury__string__skip_to_next_word_start__ho37_4_p_0(mercury__string__String_6, mercury__string__PastWordEndPos_9, &mercury__string__NextWordStartPos_11);
      mercury__string__succeeded = (mercury__string__PastWordEndPos_9 == mercury__string__NextWordStartPos_11);
      if (mercury__string__succeeded)
      {
        MR_Word mercury__string__Var_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__string__Words_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__HeadWord_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Var_13));
        }
      }
      else
      {
        MR_Word mercury__string__TailWords_12;

        mercury__string__words_loop__ho38_4_p_0(mercury__string__String_6, mercury__string__NextWordStartPos_11, &mercury__string__TailWords_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__string__Words_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__HeadWord_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__TailWords_12));
        }
      }
    }
  }
}

static void MR_CALL 
mercury__string__skip_to_word_end__ho47_4_p_0(
  MR_String mercury__string__String_6,
  MR_Integer mercury__string__CurPos_7,
  MR_Integer * mercury__string__PastWordEndPos_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;
      MR_Integer mercury__string__NextPos_9;
      MR_Char mercury__string__Char_10;

{
#define MR_PROC_LABEL mercury__string__skip_to_word_end__ho47_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__CurPos_7 ;
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
	 mercury__string__NextPos_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
      {
        mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
        if (mercury__string__succeeded)
          *mercury__string__PastWordEndPos_8 = mercury__string__CurPos_7;
        else
        {
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__string__next_value_of_CurPos_7 = mercury__string__NextPos_9;

            mercury__string__CurPos_7 = mercury__string__next_value_of_CurPos_7;
          }
          continue;
        }
      }
      else
        *mercury__string__PastWordEndPos_8 = mercury__string__CurPos_7;
    }
    break;
  }
}

static void MR_CALL 
mercury__string__skip_to_next_word_start__ho37_4_p_0(
  MR_String mercury__string__String_6,
  MR_Integer mercury__string__CurPos_7,
  MR_Integer * mercury__string__NextWordStartPos_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;
      MR_Integer mercury__string__NextPos_9;
      MR_Char mercury__string__Char_10;

{
#define MR_PROC_LABEL mercury__string__skip_to_next_word_start__ho37_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__CurPos_7 ;
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
	 mercury__string__NextPos_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
        mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
      if (mercury__string__succeeded)
      {
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_CurPos_7 = mercury__string__NextPos_9;

          mercury__string__CurPos_7 = mercury__string__next_value_of_CurPos_7;
        }
        continue;
      }
      else
        *mercury__string__NextWordStartPos_8 = mercury__string__CurPos_7;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__string__words_separator_2_f_0(
  MR_Word mercury__string__SepP_4,
  MR_String mercury__string__String_5)
{
  {
    MR_Word mercury__string__Words_6;
    MR_Integer mercury__string__WordStart_7;

    mercury__string__skip_to_next_word_start_4_p_0(mercury__string__SepP_4, mercury__string__String_5, (MR_Integer) 0, &mercury__string__WordStart_7);
    mercury__string__words_loop_4_p_0(mercury__string__SepP_4, mercury__string__String_5, mercury__string__WordStart_7, &mercury__string__Words_6);
    return mercury__string__Words_6;
  }
}

void MR_CALL 
mercury__string__words_loop_4_p_0(
  MR_Word mercury__string__SepP_5,
  MR_String mercury__string__String_6,
  MR_Integer mercury__string__WordStartPos_7,
  MR_Word * mercury__string__Words_8)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__PastWordEndPos_9;

    mercury__string__skip_to_word_end_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__WordStartPos_7, &mercury__string__PastWordEndPos_9);
    mercury__string__succeeded = (mercury__string__PastWordEndPos_9 == mercury__string__WordStartPos_7);
    if (mercury__string__succeeded)
      *mercury__string__Words_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_String mercury__string__HeadWord_10;
      MR_Integer mercury__string__NextWordStartPos_11;

{
#define MR_PROC_LABEL mercury__string__words_loop_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__String_6 ;
	Start =  mercury__string__WordStartPos_7 ;
	End =  mercury__string__PastWordEndPos_9 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadWord_10  = SubString;
}
      mercury__string__skip_to_next_word_start_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__PastWordEndPos_9, &mercury__string__NextWordStartPos_11);
      mercury__string__succeeded = (mercury__string__PastWordEndPos_9 == mercury__string__NextWordStartPos_11);
      if (mercury__string__succeeded)
      {
        MR_Word mercury__string__Var_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__string__Words_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__HeadWord_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Var_13));
        }
      }
      else
      {
        MR_Word mercury__string__TailWords_12;

        mercury__string__words_loop_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__NextWordStartPos_11, &mercury__string__TailWords_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__string__Words_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__HeadWord_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__TailWords_12));
        }
      }
    }
  }
}

void MR_CALL 
mercury__string__skip_to_word_end_4_p_0(
  MR_Word mercury__string__SepP_5,
  MR_String mercury__string__String_6,
  MR_Integer mercury__string__CurPos_7,
  MR_Integer * mercury__string__PastWordEndPos_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;
      MR_Integer mercury__string__NextPos_9;
      MR_Char mercury__string__Char_10;

{
#define MR_PROC_LABEL mercury__string__skip_to_word_end_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__CurPos_7 ;
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
	 mercury__string__NextPos_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
      {
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__SepP_5, (MR_Integer) 1)));

        mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__SepP_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
        if (mercury__string__succeeded)
          *mercury__string__PastWordEndPos_8 = mercury__string__CurPos_7;
        else
        {
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__string__next_value_of_CurPos_7 = mercury__string__NextPos_9;

            mercury__string__CurPos_7 = mercury__string__next_value_of_CurPos_7;
          }
          continue;
        }
      }
      else
        *mercury__string__PastWordEndPos_8 = mercury__string__CurPos_7;
    }
    break;
  }
}

void MR_CALL 
mercury__string__skip_to_next_word_start_4_p_0(
  MR_Word mercury__string__SepP_5,
  MR_String mercury__string__String_6,
  MR_Integer mercury__string__CurPos_7,
  MR_Integer * mercury__string__NextWordStartPos_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;
      MR_Integer mercury__string__NextPos_9;
      MR_Char mercury__string__Char_10;
      MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

{
#define MR_PROC_LABEL mercury__string__skip_to_next_word_start_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__CurPos_7 ;
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
	 mercury__string__NextPos_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
      {
        mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__SepP_5, (MR_Integer) 1)));
        mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__SepP_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
      }
      if (mercury__string__succeeded)
      {
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_CurPos_7 = mercury__string__NextPos_9;

          mercury__string__CurPos_7 = mercury__string__next_value_of_CurPos_7;
        }
        continue;
      }
      else
        *mercury__string__NextWordStartPos_8 = mercury__string__CurPos_7;
    }
    break;
  }
}

void MR_CALL 
mercury__string__unsafe_substring_4_p_0(
  MR_String mercury__string__Str_5,
  MR_Integer mercury__string__Start_6,
  MR_Integer mercury__string__Count_7,
  MR_String * mercury__string__SubString_8)
{
  {
    MR_Integer mercury__string__Var_9 = (mercury__string__Start_6 + mercury__string__Count_7);

{
#define MR_PROC_LABEL mercury__string__unsafe_substring_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_5 ;
	Start =  mercury__string__Start_6 ;
	End =  mercury__string__Var_9 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_8  = SubString;
}
  }
}

MR_String MR_CALL 
mercury__string__unsafe_substring_3_f_0(
  MR_String mercury__string__Str_5,
  MR_Integer mercury__string__Start_6,
  MR_Integer mercury__string__Count_7)
{
  {
    MR_String mercury__string__SubString_8;
    MR_Integer mercury__string__Var_9 = (mercury__string__Start_6 + mercury__string__Count_7);

{
#define MR_PROC_LABEL mercury__string__unsafe_substring_3_f_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_5 ;
	Start =  mercury__string__Start_6 ;
	End =  mercury__string__Var_9 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__SubString_8  = SubString;
}
    return mercury__string__SubString_8;
  }
}

void MR_CALL 
mercury__string__unsafe_between_4_p_0(
  MR_String mercury__string__Str_1,
  MR_Integer mercury__string__Start_2,
  MR_Integer mercury__string__End_3,
  MR_String * mercury__string__SubString_4)
{
  {
{
#define MR_PROC_LABEL mercury__string__unsafe_between_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_1 ;
	Start =  mercury__string__Start_2 ;
	End =  mercury__string__End_3 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_4  = SubString;
}
  }
}

MR_String MR_CALL 
mercury__string__unsafe_between_3_f_0(
  MR_String mercury__string__Str_5,
  MR_Integer mercury__string__Start_6,
  MR_Integer mercury__string__End_7)
{
  {
    MR_String mercury__string__SubString_8;

{
#define MR_PROC_LABEL mercury__string__unsafe_between_3_f_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_5 ;
	Start =  mercury__string__Start_6 ;
	End =  mercury__string__End_7 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__SubString_8  = SubString;
}
    return mercury__string__SubString_8;
  }
}

MR_String MR_CALL 
mercury__string__between_codepoints_3_f_0(
  MR_String mercury__string__Str_5,
  MR_Integer mercury__string__Start_6,
  MR_Integer mercury__string__End_7)
{
  {
    MR_String mercury__string__SubString_8;

    mercury__string__between_codepoints_4_p_0(mercury__string__Str_5, mercury__string__Start_6, mercury__string__End_7, &mercury__string__SubString_8);
    return mercury__string__SubString_8;
  }
}

void MR_CALL 
mercury__string__between_codepoints_4_p_0(
  MR_String mercury__string__Str_5,
  MR_Integer mercury__string__Start_6,
  MR_Integer mercury__string__End_7,
  MR_String * mercury__string__SubString_8)
{
  {
    MR_bool mercury__string__succeeded = (mercury__string__Start_6 < (MR_Integer) 0);
    MR_Integer mercury__string__StartOffset_9;
    MR_Integer mercury__string__EndOffset_11;

    if (mercury__string__succeeded)
      mercury__string__StartOffset_9 = (MR_Integer) 0;
    else
    {
      MR_Integer mercury__string__StartOffset0_10;

      mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__Start_6, &mercury__string__StartOffset0_10);
      if (mercury__string__succeeded)
        mercury__string__StartOffset_9 = mercury__string__StartOffset0_10;
      else
      {
{
#define MR_PROC_LABEL mercury__string__between_codepoints_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__StartOffset_9  = Length;
}
      }
    }
    mercury__string__succeeded = (mercury__string__End_7 <= mercury__string__Start_6);
    if (mercury__string__succeeded)
      mercury__string__EndOffset_11 = mercury__string__StartOffset_9;
    else
    {
      MR_Integer mercury__string__EndOffset0_12;

      mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__End_7, &mercury__string__EndOffset0_12);
      if (mercury__string__succeeded)
        mercury__string__EndOffset_11 = mercury__string__EndOffset0_12;
      else
      {
{
#define MR_PROC_LABEL mercury__string__between_codepoints_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__EndOffset_11  = Length;
}
      }
    }
    mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__StartOffset_9, mercury__string__EndOffset_11, mercury__string__SubString_8);
  }
}

void MR_CALL 
mercury__string__substring_4_p_0(
  MR_String mercury__string__Str_5,
  MR_Integer mercury__string__Start_6,
  MR_Integer mercury__string__Count_7,
  MR_String * mercury__string__SubString_8)
{
  {
    MR_Integer mercury__string__ClampStart_9;
    MR_Integer mercury__string__ClampEnd_10;

    mercury__string__convert_endpoints_4_p_0(mercury__string__Start_6, mercury__string__Count_7, &mercury__string__ClampStart_9, &mercury__string__ClampEnd_10);
    mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__ClampStart_9, mercury__string__ClampEnd_10, mercury__string__SubString_8);
  }
}

MR_String MR_CALL 
mercury__string__substring_3_f_0(
  MR_String mercury__string__Str_5,
  MR_Integer mercury__string__Start_6,
  MR_Integer mercury__string__Count_7)
{
  {
    MR_String mercury__string__SubString_8;
    MR_Integer mercury__string__ClampStart_13;
    MR_Integer mercury__string__ClampEnd_14;

    mercury__string__convert_endpoints_4_p_0(mercury__string__Start_6, mercury__string__Count_7, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, &mercury__string__SubString_8);
    return mercury__string__SubString_8;
  }
}

void MR_CALL 
mercury__string__convert_endpoints_4_p_0(
  MR_Integer mercury__string__Start_5,
  MR_Integer mercury__string__Count_6,
  MR_Integer * mercury__string__ClampStart_7,
  MR_Integer * mercury__string__ClampEnd_8)
{
  {
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_5);

    if (mercury__string__succeeded)
      *mercury__string__ClampStart_7 = (MR_Integer) 0;
    else
      *mercury__string__ClampStart_7 = mercury__string__Start_5;
    mercury__string__succeeded = (mercury__string__Count_6 <= (MR_Integer) 0);
    if (mercury__string__succeeded)
      *mercury__string__ClampEnd_8 = *mercury__string__ClampStart_7;
    else
    {
      MR_Integer mercury__string__Var_11;
      MR_Integer mercury__string__Var_12;

{
#define MR_PROC_LABEL mercury__string__convert_endpoints_4_p_0

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
	 mercury__string__Var_12  = Max;
}
      mercury__string__Var_11 = (mercury__string__Var_12 - mercury__string__Count_6);
      mercury__string__succeeded = (*mercury__string__ClampStart_7 > mercury__string__Var_11);
      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__convert_endpoints_4_p_0

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
	 *mercury__string__ClampEnd_8  = Max;
}
      }
      else
        *mercury__string__ClampEnd_8 = (*mercury__string__ClampStart_7 + mercury__string__Count_6);
    }
  }
}

MR_String MR_CALL 
mercury__string__between_3_f_0(
  MR_String mercury__string__Str_5,
  MR_Integer mercury__string__Start_6,
  MR_Integer mercury__string__End_7)
{
  {
    MR_String mercury__string__SubString_8;

    mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__Start_6, mercury__string__End_7, &mercury__string__SubString_8);
    return mercury__string__SubString_8;
  }
}

void MR_CALL 
mercury__string__between_4_p_0(
  MR_String mercury__string__Str_1,
  MR_Integer mercury__string__Start_2,
  MR_Integer mercury__string__End_3,
  MR_String * mercury__string__SubString_4)
{
  {
{
#define MR_PROC_LABEL mercury__string__between_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_1 ;
	Start =  mercury__string__Start_2 ;
	End =  mercury__string__End_3 ;
		{
{
    MR_Integer  len;
    MR_Integer  Count;

    if (Start < 0) Start = 0;
    if (End <= Start) {
        MR_make_aligned_string(SubString, "");
    } else {
        len = strlen(Str);
        if (Start > len) {
            Start = len;
        }
        if (End > len) {
            End = len;
        }
        Count = End - Start;
        MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
        MR_memcpy(SubString, Str + Start, Count);
        SubString[Count] = '\0';
    }
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_4  = SubString;
}
  }
}

void MR_CALL 
mercury__string__right_by_codepoint_3_p_0(
  MR_String mercury__string__String_4,
  MR_Integer mercury__string__RightCount_5,
  MR_String * mercury__string__RightString_6)
{
  {
    MR_Integer mercury__string__TotalCount_7;
    MR_Integer mercury__string__LeftCount_8;
    MR_String mercury__string___LeftString_9;

    mercury__string__count_codepoints_2_p_0(mercury__string__String_4, &mercury__string__TotalCount_7);
    mercury__string__LeftCount_8 = (mercury__string__TotalCount_7 - mercury__string__RightCount_5);
    mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__LeftCount_8, &mercury__string___LeftString_9, mercury__string__RightString_6);
  }
}

MR_String MR_CALL 
mercury__string__right_by_codepoint_2_f_0(
  MR_String mercury__string__String_4,
  MR_Integer mercury__string__RightCount_5)
{
  {
    MR_String mercury__string__RightString_6;
    MR_Integer mercury__string__TotalCount_10;
    MR_Integer mercury__string__LeftCount_11;
    MR_String mercury__string___LeftString_12;

    mercury__string__count_codepoints_2_p_0(mercury__string__String_4, &mercury__string__TotalCount_10);
    mercury__string__LeftCount_11 = (mercury__string__TotalCount_10 - mercury__string__RightCount_5);
    mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__LeftCount_11, &mercury__string___LeftString_12, &mercury__string__RightString_6);
    return mercury__string__RightString_6;
  }
}

void MR_CALL 
mercury__string__right_3_p_0(
  MR_String mercury__string__String_4,
  MR_Integer mercury__string__RightCount_5,
  MR_String * mercury__string__RightString_6)
{
  {
    MR_Integer mercury__string__Length_7;
    MR_Integer mercury__string__LeftCount_8;
    MR_String mercury__string___LeftString_9;

{
#define MR_PROC_LABEL mercury__string__right_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_7  = Length;
}
    mercury__string__LeftCount_8 = (mercury__string__Length_7 - mercury__string__RightCount_5);
    mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__LeftCount_8, &mercury__string___LeftString_9, mercury__string__RightString_6);
  }
}

MR_String MR_CALL 
mercury__string__right_2_f_0(
  MR_String mercury__string__S1_4,
  MR_Integer mercury__string__N_5)
{
  {
    MR_String mercury__string__S2_6;
    MR_Integer mercury__string__Length_10;
    MR_Integer mercury__string__LeftCount_11;
    MR_String mercury__string___LeftString_12;

{
#define MR_PROC_LABEL mercury__string__right_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S1_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_10  = Length;
}
    mercury__string__LeftCount_11 = (mercury__string__Length_10 - mercury__string__N_5);
    mercury__string__split_4_p_0(mercury__string__S1_4, mercury__string__LeftCount_11, &mercury__string___LeftString_12, &mercury__string__S2_6);
    return mercury__string__S2_6;
  }
}

void MR_CALL 
mercury__string__left_by_codepoint_3_p_0(
  MR_String mercury__string__String_4,
  MR_Integer mercury__string__Count_5,
  MR_String * mercury__string__LeftString_6)
{
  {
    MR_String mercury__string___RightString_7;

    mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__Count_5, mercury__string__LeftString_6, &mercury__string___RightString_7);
  }
}

MR_String MR_CALL 
mercury__string__left_by_codepoint_2_f_0(
  MR_String mercury__string__String_4,
  MR_Integer mercury__string__Count_5)
{
  {
    MR_String mercury__string__LeftString_6;
    MR_String mercury__string___RightString_10;

    mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__Count_5, &mercury__string__LeftString_6, &mercury__string___RightString_10);
    return mercury__string__LeftString_6;
  }
}

void MR_CALL 
mercury__string__left_3_p_0(
  MR_String mercury__string__String_4,
  MR_Integer mercury__string__Count_5,
  MR_String * mercury__string__LeftString_6)
{
  {
    MR_String mercury__string___RightString_7;

    mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__Count_5, mercury__string__LeftString_6, &mercury__string___RightString_7);
  }
}

MR_String MR_CALL 
mercury__string__left_2_f_0(
  MR_String mercury__string__S1_4,
  MR_Integer mercury__string__N_5)
{
  {
    MR_String mercury__string__S2_6;
    MR_String mercury__string___RightString_10;

    mercury__string__split_4_p_0(mercury__string__S1_4, mercury__string__N_5, &mercury__string__S2_6, &mercury__string___RightString_10);
    return mercury__string__S2_6;
  }
}

void MR_CALL 
mercury__string__split_by_codepoint_4_p_0(
  MR_String mercury__string__Str_5,
  MR_Integer mercury__string__Count_6,
  MR_String * mercury__string__Left_7,
  MR_String * mercury__string__Right_8)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__Offset_9;

    mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__Count_6, &mercury__string__Offset_9);
    if (mercury__string__succeeded)
      mercury__string__split_4_p_0(mercury__string__Str_5, mercury__string__Offset_9, mercury__string__Left_7, mercury__string__Right_8);
    else
    {
      mercury__string__succeeded = (mercury__string__Count_6 <= (MR_Integer) 0);
      if (mercury__string__succeeded)
      {
        *mercury__string__Left_7 = (MR_String) "";
        *mercury__string__Right_8 = mercury__string__Str_5;
      }
      else
      {
        *mercury__string__Left_7 = mercury__string__Str_5;
        *mercury__string__Right_8 = (MR_String) "";
      }
    }
  }
}

void MR_CALL 
mercury__string__split_4_p_0(
  MR_String mercury__string__Str_1,
  MR_Integer mercury__string__Count_2,
  MR_String * mercury__string__Left_3,
  MR_String * mercury__string__Right_4)
{
  {
{
#define MR_PROC_LABEL mercury__string__split_4_p_0

	MR_String Str;
	MR_Integer Count;
	MR_String Left;
	MR_String Right;

	Str =  mercury__string__Str_1 ;
	Count =  mercury__string__Count_2 ;
		{
{
    MR_Integer  len;

    if (Count <= 0) {
        MR_make_aligned_string(Left, "");
        Right = Str;
    } else {
        len = strlen(Str);

        if (Count > len) {
            Count = len;
        }

        MR_allocate_aligned_string_msg(Left, Count, MR_ALLOC_ID);
        MR_memcpy(Left, Str, Count);
        Left[Count] = '\0';
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(Right, len - Count, MR_ALLOC_ID);
        strcpy(Right, Str + Count);
    }
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Left_3  = Left;
	 *mercury__string__Right_4  = Right;
}
  }
}

void MR_CALL 
mercury__string__first_char_3_p_4(
  MR_String * mercury__string__Str_1,
  MR_Char mercury__string__First_2,
  MR_String mercury__string__Rest_3)
{
  {
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_4

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__First_2 ;
	Rest =  mercury__string__Rest_3 ;
		{
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_1  = Str;
}
  }
}

MR_bool MR_CALL 
mercury__string__first_char_3_p_3(
  MR_String mercury__string__Str_1,
  MR_Char * mercury__string__First_2,
  MR_String * mercury__string__Rest_3)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__first_char_3_p_3

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
		{
{
    MR_Integer pos = 0;
    First = MR_utf8_get_next(Str, &pos);
    if (First < 1) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Str += pos;
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(Rest, strlen(Str), MR_ALLOC_ID);
        strcpy(Rest, Str);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__First_2  = First;
	 *mercury__string__Rest_3  = Rest;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__first_char_3_p_2(
  MR_String mercury__string__Str_1,
  MR_Char mercury__string__First_2,
  MR_String * mercury__string__Rest_3)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__first_char_3_p_2

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	First =  mercury__string__First_2 ;
		{
{
    MR_Integer pos = 0;
    int c = MR_utf8_get_next(Str, &pos);
    if (c != First || First == '\0') {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Str += pos;
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(Rest, strlen(Str), MR_ALLOC_ID);
        strcpy(Rest, Str);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Rest_3  = Rest;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__first_char_3_p_1(
  MR_String mercury__string__Str_1,
  MR_Char * mercury__string__First_2,
  MR_String mercury__string__Rest_3)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__first_char_3_p_1

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Rest =  mercury__string__Rest_3 ;
		{

    MR_Integer pos = 0;
    First = MR_utf8_get_next(Str, &pos);
    SUCCESS_INDICATOR = (First > 0 && strcmp(Str + pos, Rest) == 0);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__First_2  = First;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__first_char_3_p_0(
  MR_String mercury__string__Str_1,
  MR_Char mercury__string__First_2,
  MR_String mercury__string__Rest_3)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__first_char_3_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	First =  mercury__string__First_2 ;
	Rest =  mercury__string__Rest_3 ;
		{

    MR_Integer pos = 0;
    int c = MR_utf8_get_next(Str, &pos);
    SUCCESS_INDICATOR = (
        c == First &&
        First != '\0' &&
        strcmp(Str + pos, Rest) == 0
    );


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_String MR_CALL 
mercury__string__join_list_2_f_0(
  MR_String mercury__string__Sep_1,
  MR_Word mercury__string__Strs_2)
{
  {
    MR_String mercury__string__Str_3;

{
#define MR_PROC_LABEL mercury__string__join_list_2_f_0

	MR_String Sep;
	MR_Word Strs;
	MR_String Str;

	Sep =  mercury__string__Sep_1 ;
	Strs =  mercury__string__Strs_2 ;
		{
{
    MR_Word list;
    size_t  len;
    size_t  sep_len;
    MR_bool add_sep;

    list = Strs;
    len = 0;
    sep_len = strlen(Sep);

    /* Determine the total length of all strings */
    len = 0;
    add_sep = MR_FALSE;
    while (!MR_list_is_empty(list)) {
        if (add_sep) {
            len += sep_len;
        }

        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
        add_sep = MR_TRUE;
    }

    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);

    /* Copy the strings into the new memory */
    len = 0;
    list = Strs;
    add_sep = MR_FALSE;
    while (!MR_list_is_empty(list)) {
        if (add_sep) {
            strcpy((MR_String) Str + len, Sep);
            len += sep_len;
        }

        strcpy((MR_String) Str + len, (MR_String) MR_list_head(list));
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
        add_sep = MR_TRUE;
    }

    Str[len] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Str_3  = Str;
}
    return mercury__string__Str_3;
  }
}

void MR_CALL 
mercury__string__append_list_2_p_0(
  MR_Word mercury__string__Lists_3,
  MR_String * mercury__string__HeadVar__2_2)
{
  *mercury__string__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__string__Lists_3);
}

MR_String MR_CALL 
mercury__string__append_list_1_f_0(
  MR_Word mercury__string__Strs_1)
{
  {
    MR_String mercury__string__Str_2;

{
#define MR_PROC_LABEL mercury__string__append_list_1_f_0

	MR_Word Strs;
	MR_String Str;

	Strs =  mercury__string__Strs_1 ;
		{
{
    MR_Word list = Strs;
    size_t  len;

    /* Determine the total length of all strings */
    len = 0;
    while (!MR_list_is_empty(list)) {
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
    }

    /* Allocate enough word aligned memory for the string */
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);

    /* Copy the strings into the new memory */
    len = 0;
    list = Strs;
    while (!MR_list_is_empty(list)) {
        strcpy((MR_String) Str + len, (MR_String) MR_list_head(list));
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
    }

    Str[len] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Str_2  = Str;
}
    return mercury__string__Str_2;
  }
}

MR_String MR_CALL 
mercury__string__f_43_43_2_f_0(
  MR_String mercury__string__S1_4,
  MR_String mercury__string__S2_5)
{
  {
    MR_String mercury__string__HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__string__f_43_43_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_4 ;
	S2 =  mercury__string__S2_5 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__3_3  = S3;
}
    return mercury__string__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__string__append_3_p_3(
  MR_String * mercury__string__S1_1,
  MR_String * mercury__string__S2_2,
  MR_String mercury__string__S3_3,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  {
    MR_Integer mercury__string__S3Len_19;

{
#define MR_PROC_LABEL mercury__string__append_3_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S3_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__S3Len_19  = Length;
}
    mercury__string__append_ooi_2_5_p_0((MR_Integer) 0, mercury__string__S3Len_19, mercury__string__S1_1, mercury__string__S2_2, mercury__string__S3_3, mercury__string__cont, mercury__string__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__append_ooi_2_5_p_0(
  MR_Integer mercury__string__NextS1Len_6,
  MR_Integer mercury__string__S3Len_7,
  MR_String * mercury__string__S1_8,
  MR_String * mercury__string__S2_9,
  MR_String mercury__string__S3_10,
  MR_Cont mercury__string__cont,
  void * mercury__string__cont_env_ptr)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__NextS1Len_6 == mercury__string__S3Len_7);

      if (mercury__string__succeeded)
      {
        mercury__string__append_ooi_3_5_p_0(mercury__string__NextS1Len_6, mercury__string__S3Len_7, mercury__string__S1_8, mercury__string__S2_9, mercury__string__S3_10);
        mercury__string__cont(mercury__string__cont_env_ptr);
      }
      else
      {
        mercury__string__append_ooi_3_5_p_0(mercury__string__NextS1Len_6, mercury__string__S3Len_7, mercury__string__S1_8, mercury__string__S2_9, mercury__string__S3_10);
        mercury__string__cont(mercury__string__cont_env_ptr);
        {
          MR_Integer mercury__string__AdvS1Len_11;
          MR_Char mercury__string__Var_12;

{
#define MR_PROC_LABEL mercury__string__append_ooi_2_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S3_10 ;
	Index =  mercury__string__NextS1Len_6 ;
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
	 mercury__string__AdvS1Len_11  = NextIndex;
	 mercury__string__Var_12  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
          if (mercury__string__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Integer mercury__string__next_value_of_NextS1Len_6 = mercury__string__AdvS1Len_11;

              mercury__string__NextS1Len_6 = mercury__string__next_value_of_NextS1Len_6;
            }
            continue;
          }
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__append_ooi_3_5_p_0(
  MR_Integer mercury__string__S1Len_1,
  MR_Integer mercury__string__S3Len_2,
  MR_String * mercury__string__S1_3,
  MR_String * mercury__string__S2_4,
  MR_String mercury__string__S3_5)
{
  {
{
#define MR_PROC_LABEL mercury__string__append_ooi_3_5_p_0

	MR_Integer S1Len;
	MR_Integer S3Len;
	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1Len =  mercury__string__S1Len_1 ;
	S3Len =  mercury__string__S3Len_2 ;
	S3 =  mercury__string__S3_5 ;
		{
{
    MR_allocate_aligned_string_msg(S1, S1Len, MR_ALLOC_ID);
    MR_memcpy(S1, S3, S1Len);
    S1[S1Len] = '\0';
    MR_allocate_aligned_string_msg(S2, S3Len - S1Len, MR_ALLOC_ID);
    strcpy(S2, S3 + S1Len);
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S1_3  = S1;
	 *mercury__string__S2_4  = S2;
}
  }
}

void MR_CALL 
mercury__string__append_3_p_2(
  MR_String mercury__string__S1_1,
  MR_String mercury__string__S2_2,
  MR_String * mercury__string__S3_3)
{
  {
{
#define MR_PROC_LABEL mercury__string__append_3_p_2

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_1 ;
	S2 =  mercury__string__S2_2 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S3_3  = S3;
}
  }
}

MR_bool MR_CALL 
mercury__string__append_3_p_1(
  MR_String mercury__string__S1_1,
  MR_String * mercury__string__S2_2,
  MR_String mercury__string__S3_3)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__append_3_p_1

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__S1_1 ;
	S3 =  mercury__string__S3_3 ;
		{
{
    size_t len_1, len_2, len_3;

    len_1 = strlen(S1);
    if (strncmp(S1, S3, len_1) != 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        len_3 = strlen(S3);
        len_2 = len_3 - len_1;
        /*
        ** We need to make a copy to ensure that the pointer is word-aligned.
        */
        MR_allocate_aligned_string_msg(S2, len_2, MR_ALLOC_ID);
        strcpy(S2, S3 + len_1);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__S2_2  = S2;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__append_3_p_0(
  MR_String mercury__string__S1_1,
  MR_String mercury__string__S2_2,
  MR_String mercury__string__S3_3)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__append_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__S1_1 ;
	S2 =  mercury__string__S2_2 ;
	S3 =  mercury__string__S3_3 ;
		{
{
    size_t len_1 = strlen(S1);
    SUCCESS_INDICATOR = (
        strncmp(S1, S3, len_1) == 0 &&
        strcmp(S2, S3 + len_1) == 0
    );
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_String MR_CALL 
mercury__string__append_2_f_0(
  MR_String mercury__string__S1_4,
  MR_String mercury__string__S2_5)
{
  {
    MR_String mercury__string__S3_6;

{
#define MR_PROC_LABEL mercury__string__append_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_4 ;
	S2 =  mercury__string__S2_5 ;
		{
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__S3_6  = S3;
}
    return mercury__string__S3_6;
  }
}

MR_bool MR_CALL 
mercury__string__sub_string_search_start_4_p_0(
  MR_String mercury__string__WholeString_1,
  MR_String mercury__string__Pattern_2,
  MR_Integer mercury__string__BeginAt_3,
  MR_Integer * mercury__string__Index_4)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__sub_string_search_start_4_p_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString =  mercury__string__WholeString_1 ;
	Pattern =  mercury__string__Pattern_2 ;
	BeginAt =  mercury__string__BeginAt_3 ;
		{
{
    char *match;
    if ((MR_Unsigned) BeginAt > strlen(WholeString)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        match = strstr(WholeString + BeginAt, Pattern);
        if (match) {
            Index = match - WholeString;
            SUCCESS_INDICATOR = MR_TRUE;
        } else {
            SUCCESS_INDICATOR = MR_FALSE;
        }
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_4  = Index;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__sub_string_search_3_p_0(
  MR_String mercury__string__WholeString_4,
  MR_String mercury__string__Pattern_5,
  MR_Integer * mercury__string__Index_6)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__sub_string_search_3_p_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString =  mercury__string__WholeString_4 ;
	Pattern =  mercury__string__Pattern_5 ;
	BeginAt =  (MR_Integer) 0 ;
		{
{
    char *match;
    if ((MR_Unsigned) BeginAt > strlen(WholeString)) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        match = strstr(WholeString + BeginAt, Pattern);
        if (match) {
            Index = match - WholeString;
            SUCCESS_INDICATOR = MR_TRUE;
        } else {
            SUCCESS_INDICATOR = MR_FALSE;
        }
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_6  = Index;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__string__suffix_length_2_f_0(
  MR_Word mercury__string__P_4,
  MR_String mercury__string__S_5)
{
  {
    MR_Integer mercury__string__HeadVar__3_3;
    MR_Integer mercury__string__End_6;
    MR_Integer mercury__string__Index_7;

{
#define MR_PROC_LABEL mercury__string__suffix_length_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__End_6  = Length;
}
    mercury__string__suffix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, mercury__string__End_6, &mercury__string__Index_7);
    mercury__string__HeadVar__3_3 = (mercury__string__End_6 - mercury__string__Index_7);
    return mercury__string__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__string__suffix_length_loop_4_p_0(
  MR_Word mercury__string__P_5,
  MR_String mercury__string__S_6,
  MR_Integer mercury__string__I_7,
  MR_Integer * mercury__string__Index_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;
      MR_Integer mercury__string__J_9;
      MR_Char mercury__string__Char_10;
      MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

{
#define MR_PROC_LABEL mercury__string__suffix_length_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_6 ;
	Index =  mercury__string__I_7 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = PrevIndex;
	 mercury__string__Char_10  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
      {
        mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_5, (MR_Integer) 1)));
        mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
      }
      if (mercury__string__succeeded)
      {
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_I_7 = mercury__string__J_9;

          mercury__string__I_7 = mercury__string__next_value_of_I_7;
        }
        continue;
      }
      else
        *mercury__string__Index_8 = mercury__string__I_7;
    }
    break;
  }
}

MR_Integer MR_CALL 
mercury__string__prefix_length_2_f_0(
  MR_Word mercury__string__P_4,
  MR_String mercury__string__S_5)
{
  {
    MR_Integer mercury__string__Index_6;

    mercury__string__prefix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, (MR_Integer) 0, &mercury__string__Index_6);
    return mercury__string__Index_6;
  }
}

void MR_CALL 
mercury__string__prefix_length_loop_4_p_0(
  MR_Word mercury__string__P_5,
  MR_String mercury__string__S_6,
  MR_Integer mercury__string__I_7,
  MR_Integer * mercury__string__Index_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;
      MR_Integer mercury__string__J_9;
      MR_Char mercury__string__Char_10;
      MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

{
#define MR_PROC_LABEL mercury__string__prefix_length_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_6 ;
	Index =  mercury__string__I_7 ;
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
	 mercury__string__J_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
      {
        mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_5, (MR_Integer) 1)));
        mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
      }
      if (mercury__string__succeeded)
      {
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_I_7 = mercury__string__J_9;

          mercury__string__I_7 = mercury__string__next_value_of_I_7;
        }
        continue;
      }
      else
        *mercury__string__Index_8 = mercury__string__I_7;
    }
    break;
  }
}

void MR_CALL 
mercury__string__compare_ignore_case_ascii_3_p_0(
  MR_Word * mercury__string__Res_4,
  MR_String mercury__string__X_5,
  MR_String mercury__string__Y_6)
{
  {
    mercury__string__compare_ignore_case_ascii_loop_4_p_0(mercury__string__X_5, mercury__string__Y_6, (MR_Integer) 0, mercury__string__Res_4);
  }
}

void MR_CALL 
mercury__string__compare_ignore_case_ascii_loop_4_p_0(
  MR_String mercury__string__X_5,
  MR_String mercury__string__Y_6,
  MR_Integer mercury__string__I_7,
  MR_Word * mercury__string__Res_8)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;
      MR_Integer mercury__string__IX_9;
      MR_Char mercury__string__CharX_10;

{
#define MR_PROC_LABEL mercury__string__compare_ignore_case_ascii_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__X_5 ;
	Index =  mercury__string__I_7 ;
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
	 mercury__string__IX_9  = NextIndex;
	 mercury__string__CharX_10  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
      {
        MR_Char mercury__string__CharY_12;
        MR_Integer mercury__string___IY_11;

{
#define MR_PROC_LABEL mercury__string__compare_ignore_case_ascii_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Y_6 ;
	Index =  mercury__string__I_7 ;
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
	 mercury__string___IY_11  = NextIndex;
	 mercury__string__CharY_12  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
        {
          MR_Char mercury__string__LowerCharX_13;
          MR_Char mercury__string__LowerCharY_14;
          MR_Word mercury__string__CharRes_15;
          MR_Integer mercury__string__V_7_29;
          MR_Integer mercury__string__V_8_30;
          MR_Char mercury__string__V_5_22;
          MR_Char mercury__string__V_5_25;

          mercury__string__succeeded = mercury__char__lower_upper_2_p_1(&mercury__string__V_5_22, mercury__string__CharX_10);
          if (mercury__string__succeeded)
            mercury__string__LowerCharX_13 = mercury__string__V_5_22;
          else
            mercury__string__LowerCharX_13 = mercury__string__CharX_10;
          mercury__string__succeeded = mercury__char__lower_upper_2_p_1(&mercury__string__V_5_25, mercury__string__CharY_12);
          if (mercury__string__succeeded)
            mercury__string__LowerCharY_14 = mercury__string__V_5_25;
          else
            mercury__string__LowerCharY_14 = mercury__string__CharY_12;
{
#define MR_PROC_LABEL mercury__string__compare_ignore_case_ascii_loop_4_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__LowerCharX_13 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_29  = Int;
}
{
#define MR_PROC_LABEL mercury__string__compare_ignore_case_ascii_loop_4_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__LowerCharY_14 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_30  = Int;
}
          mercury__string__succeeded = (mercury__string__V_7_29 < mercury__string__V_8_30);
          if (mercury__string__succeeded)
            mercury__string__CharRes_15 = (MR_Integer) 1;
          else
          {
            mercury__string__succeeded = (mercury__string__V_7_29 == mercury__string__V_8_30);
            if (mercury__string__succeeded)
              mercury__string__CharRes_15 = (MR_Integer) 0;
            else
              mercury__string__CharRes_15 = (MR_Integer) 2;
          }
          switch (mercury__string__CharRes_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              *mercury__string__Res_8 = mercury__string__CharRes_15;
              break;
            case (MR_Integer) 0:
              {
                /* direct tailcall eliminated */
                {
                  MR_Integer mercury__string__next_value_of_I_7 = mercury__string__IX_9;

                  mercury__string__I_7 = mercury__string__next_value_of_I_7;
                }
                continue;
              }
              break;
          }
        }
        else
          *mercury__string__Res_8 = (MR_Integer) 2;
      }
      else
      {
        MR_Char mercury__string___CharY_16;
        MR_Integer mercury__string___IY_17;

{
#define MR_PROC_LABEL mercury__string__compare_ignore_case_ascii_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Y_6 ;
	Index =  mercury__string__I_7 ;
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
	 mercury__string___IY_17  = NextIndex;
	 mercury__string___CharY_16  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          *mercury__string__Res_8 = (MR_Integer) 1;
        else
          *mercury__string__Res_8 = (MR_Integer) 0;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__string__contains_char_2_p_0(
  MR_String mercury__string__Str_1,
  MR_Char mercury__string__Ch_2)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__contains_char_2_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Ch =  mercury__string__Ch_2 ;
		{

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = (strchr(Str, Ch) != NULL) && Ch != '\0';
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (strstr(Str, buf) != NULL);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__all_match_2_p_0(
  MR_Word mercury__string__P_3,
  MR_String mercury__string__String_4)
{
  {
    MR_bool mercury__string__succeeded;

    mercury__string__succeeded = mercury__string__all_match_loop_3_p_0(mercury__string__P_3, mercury__string__String_4, (MR_Integer) 0);
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__all_match_loop_3_p_0(
  MR_Word mercury__string__P_4,
  MR_String mercury__string__String_5,
  MR_Integer mercury__string__Cur_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;
      MR_Integer mercury__string__Next_7;
      MR_Char mercury__string__Char_8;

{
#define MR_PROC_LABEL mercury__string__all_match_loop_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_5 ;
	Index =  mercury__string__Cur_6 ;
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
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__Char_8  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
      {
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_4, (MR_Integer) 1)));

        mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_4), ((MR_Box) (MR_Word) (mercury__string__Char_8)));
        if (mercury__string__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__string__next_value_of_Cur_6 = mercury__string__Next_7;

            mercury__string__Cur_6 = mercury__string__next_value_of_Cur_6;
          }
          continue;
        }
      }
      else
        mercury__string__succeeded = MR_TRUE;
      return mercury__string__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__string__is_all_digits_1_p_0(
  MR_String mercury__string__S_1)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__is_all_digits_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__is_all_alnum_or_underscore_1_p_0(
  MR_String mercury__string__S_1)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__is_all_alnum_or_underscore_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':

            case 'a': case 'b': case 'c': case 'd': case 'e':
            case 'f': case 'g': case 'h': case 'i': case 'j':
            case 'k': case 'l': case 'm': case 'n': case 'o':
            case 'p': case 'q': case 'r': case 's': case 't':
            case 'u': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            case 'A': case 'B': case 'C': case 'D': case 'E':
            case 'F': case 'G': case 'H': case 'I': case 'J':
            case 'K': case 'L': case 'M': case 'N': case 'O':
            case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'U': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':

            case '_':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__is_all_alpha_or_underscore_1_p_0(
  MR_String mercury__string__S_1)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__is_all_alpha_or_underscore_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case 'a': case 'b': case 'c': case 'd': case 'e':
            case 'f': case 'g': case 'h': case 'i': case 'j':
            case 'k': case 'l': case 'm': case 'n': case 'o':
            case 'p': case 'q': case 'r': case 's': case 't':
            case 'u': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            case 'A': case 'B': case 'C': case 'D': case 'E':
            case 'F': case 'G': case 'H': case 'I': case 'J':
            case 'K': case 'L': case 'M': case 'N': case 'O':
            case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'U': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':

            case '_':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__is_all_alnum_1_p_0(
  MR_String mercury__string__S_2)
{
  {
    MR_bool mercury__string__succeeded;

    mercury__string__succeeded = mercury__string__all_match_loop__ho32_3_p_0(mercury__string__S_2, (MR_Integer) 0);
    return mercury__string__succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__all_match_loop__ho32_3_p_0(
  MR_String mercury__string__String_5,
  MR_Integer mercury__string__Cur_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;
      MR_Integer mercury__string__Next_7;
      MR_Char mercury__string__Char_8;

{
#define MR_PROC_LABEL mercury__string__all_match_loop__ho32_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_5 ;
	Index =  mercury__string__Cur_6 ;
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
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__Char_8  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
      {
        mercury__string__succeeded = mercury__char__is_alnum_1_p_0(mercury__string__Char_8);
        if (mercury__string__succeeded)
        {
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__string__next_value_of_Cur_6 = mercury__string__Next_7;

            mercury__string__Cur_6 = mercury__string__next_value_of_Cur_6;
          }
          continue;
        }
      }
      else
        mercury__string__succeeded = MR_TRUE;
      return mercury__string__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__string__is_all_alpha_1_p_0(
  MR_String mercury__string__S_1)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__is_all_alpha_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{

    const char  *p;

    SUCCESS_INDICATOR = MR_TRUE;
    for (p = S; *p != '\0'; p++) {
        switch (*p) {
            case 'a': case 'b': case 'c': case 'd': case 'e':
            case 'f': case 'g': case 'h': case 'i': case 'j':
            case 'k': case 'l': case 'm': case 'n': case 'o':
            case 'p': case 'q': case 'r': case 's': case 't':
            case 'u': case 'v': case 'w': case 'x': case 'y':
            case 'z':

            case 'A': case 'B': case 'C': case 'D': case 'E':
            case 'F': case 'G': case 'H': case 'I': case 'J':
            case 'K': case 'L': case 'M': case 'N': case 'O':
            case 'P': case 'Q': case 'R': case 'S': case 'T':
            case 'U': case 'V': case 'W': case 'X': case 'Y':
            case 'Z':
                continue;

            default:
                SUCCESS_INDICATOR = MR_FALSE;
                break;
        }
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__is_empty_1_p_0(
  MR_String mercury__string__HeadVar__1_1)
{
  {
    MR_bool mercury__string__succeeded = (strcmp(mercury__string__HeadVar__1_1, (MR_String) "") == 0);

    return mercury__string__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__string__hash6_1_f_0(
  MR_String mercury__string__String_3)
{
  {
    MR_Integer mercury__string__HashVal_4;
    MR_Integer mercury__string__Length_5;
    MR_Integer mercury__string__HashVal1_6;

{
#define MR_PROC_LABEL mercury__string__hash6_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
}
    mercury__string__hash6_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
    return mercury__string__HashVal_4;
  }
}

void MR_CALL 
mercury__string__hash6_loop_5_p_0(
  MR_String mercury__string__String_6,
  MR_Integer mercury__string__Index_7,
  MR_Integer mercury__string__Length_8,
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

      if (mercury__string__succeeded)
      {
        MR_Integer mercury__string__C_10;
        MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
        MR_Integer mercury__string__Var_14;
        MR_Integer mercury__string__STATE_VARIABLE_HashVal_16_16;
        MR_Integer mercury__string__Var_17;
        MR_Integer mercury__string__Var_18;
        MR_Integer mercury__string__Var_22;
        MR_Integer mercury__string__Var_23;
        MR_Integer mercury__string__Var_28;
        MR_Integer mercury__string__Var_29;

{
#define MR_PROC_LABEL mercury__string__hash6_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
}
        mercury__string__Var_14 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 49);
        mercury__string__Var_23 = ((MR_Integer) 1 << (MR_Integer) 30);
        mercury__string__Var_22 = (mercury__string__Var_23 - (MR_Integer) 1);
        mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__Var_14 & mercury__string__Var_22);
        mercury__string__Var_17 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
        mercury__string__Var_29 = ((MR_Integer) 1 << (MR_Integer) 30);
        mercury__string__Var_28 = (mercury__string__Var_29 - (MR_Integer) 1);
        mercury__string__STATE_VARIABLE_HashVal_16_16 = (mercury__string__Var_17 & mercury__string__Var_28);
        mercury__string__Var_18 = (mercury__string__Index_7 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_Index_7 = mercury__string__Var_18;
          MR_Integer mercury__string__next_value_of_STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_16_16;

          mercury__string__Index_7 = mercury__string__next_value_of_Index_7;
          mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__next_value_of_STATE_VARIABLE_HashVal_0_11;
        }
        continue;
      }
      else
        *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
    }
    break;
  }
}

MR_Integer MR_CALL 
mercury__string__hash5_1_f_0(
  MR_String mercury__string__String_3)
{
  {
    MR_Integer mercury__string__HashVal_4;
    MR_Integer mercury__string__Length_5;
    MR_Integer mercury__string__HashVal1_6;

{
#define MR_PROC_LABEL mercury__string__hash5_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
}
    mercury__string__hash5_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
    return mercury__string__HashVal_4;
  }
}

void MR_CALL 
mercury__string__hash5_loop_5_p_0(
  MR_String mercury__string__String_6,
  MR_Integer mercury__string__Index_7,
  MR_Integer mercury__string__Length_8,
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

      if (mercury__string__succeeded)
      {
        MR_Integer mercury__string__C_10;
        MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
        MR_Integer mercury__string__Var_14;
        MR_Integer mercury__string__STATE_VARIABLE_HashVal_16_16;
        MR_Integer mercury__string__Var_17;
        MR_Integer mercury__string__Var_18;
        MR_Integer mercury__string__Var_22;
        MR_Integer mercury__string__Var_23;
        MR_Integer mercury__string__Var_28;
        MR_Integer mercury__string__Var_29;

{
#define MR_PROC_LABEL mercury__string__hash5_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
}
        mercury__string__Var_14 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 37);
        mercury__string__Var_23 = ((MR_Integer) 1 << (MR_Integer) 30);
        mercury__string__Var_22 = (mercury__string__Var_23 - (MR_Integer) 1);
        mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__Var_14 & mercury__string__Var_22);
        mercury__string__Var_17 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
        mercury__string__Var_29 = ((MR_Integer) 1 << (MR_Integer) 30);
        mercury__string__Var_28 = (mercury__string__Var_29 - (MR_Integer) 1);
        mercury__string__STATE_VARIABLE_HashVal_16_16 = (mercury__string__Var_17 & mercury__string__Var_28);
        mercury__string__Var_18 = (mercury__string__Index_7 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_Index_7 = mercury__string__Var_18;
          MR_Integer mercury__string__next_value_of_STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_16_16;

          mercury__string__Index_7 = mercury__string__next_value_of_Index_7;
          mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__next_value_of_STATE_VARIABLE_HashVal_0_11;
        }
        continue;
      }
      else
        *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
    }
    break;
  }
}

MR_Integer MR_CALL 
mercury__string__hash4_1_f_0(
  MR_String mercury__string__String_3)
{
  {
    MR_Integer mercury__string__HashVal_4;
    MR_Integer mercury__string__Length_5;
    MR_Integer mercury__string__HashVal1_6;

{
#define MR_PROC_LABEL mercury__string__hash4_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
}
    mercury__string__hash4_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
    return mercury__string__HashVal_4;
  }
}

void MR_CALL 
mercury__string__hash4_loop_5_p_0(
  MR_String mercury__string__String_6,
  MR_Integer mercury__string__Index_7,
  MR_Integer mercury__string__Length_8,
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
{
  {
    MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

    if (mercury__string__succeeded)
    {
      MR_Integer mercury__string__C_10;
      MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
      MR_Integer mercury__string__Var_14;
      MR_Integer mercury__string__Var_15;
      MR_Integer mercury__string__STATE_VARIABLE_HashVal_17_17;
      MR_Integer mercury__string__Var_18;
      MR_Integer mercury__string__Var_22;
      MR_Integer mercury__string__Var_23;

{
#define MR_PROC_LABEL mercury__string__hash4_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
}
      mercury__string__Var_15 = (mercury__string__STATE_VARIABLE_HashVal_0_11 << (MR_Integer) 5);
      mercury__string__Var_14 = (mercury__string__STATE_VARIABLE_HashVal_0_11 ^ mercury__string__Var_15);
      mercury__string__Var_23 = ((MR_Integer) 1 << (MR_Integer) 30);
      mercury__string__Var_22 = (mercury__string__Var_23 - (MR_Integer) 1);
      mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__Var_14 & mercury__string__Var_22);
      mercury__string__STATE_VARIABLE_HashVal_17_17 = (mercury__string__STATE_VARIABLE_HashVal_13_13 ^ mercury__string__C_10);
      mercury__string__Var_18 = (mercury__string__Index_7 + (MR_Integer) 1);
      mercury__string__hash_loop_5_p_0(mercury__string__String_6, mercury__string__Var_18, mercury__string__Length_8, mercury__string__STATE_VARIABLE_HashVal_17_17, mercury__string__STATE_VARIABLE_HashVal_12);
    }
    else
      *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
  }
}

MR_Integer MR_CALL 
mercury__string__hash3_1_f_0(
  MR_String mercury__string__String_3)
{
  {
    MR_Integer mercury__string__HashVal_4;
    MR_Integer mercury__string__Length_5;
    MR_Integer mercury__string__HashVal1_6;

{
#define MR_PROC_LABEL mercury__string__hash3_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
}
    mercury__string__hash3_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
    return mercury__string__HashVal_4;
  }
}

void MR_CALL 
mercury__string__hash3_loop_5_p_0(
  MR_String mercury__string__String_6,
  MR_Integer mercury__string__Index_7,
  MR_Integer mercury__string__Length_8,
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

      if (mercury__string__succeeded)
      {
        MR_Integer mercury__string__C_10;
        MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
        MR_Integer mercury__string__STATE_VARIABLE_HashVal_15_15;
        MR_Integer mercury__string__Var_16;

{
#define MR_PROC_LABEL mercury__string__hash3_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
}
        mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 49);
        mercury__string__STATE_VARIABLE_HashVal_15_15 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
        mercury__string__Var_16 = (mercury__string__Index_7 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_Index_7 = mercury__string__Var_16;
          MR_Integer mercury__string__next_value_of_STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_15_15;

          mercury__string__Index_7 = mercury__string__next_value_of_Index_7;
          mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__next_value_of_STATE_VARIABLE_HashVal_0_11;
        }
        continue;
      }
      else
        *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
    }
    break;
  }
}

MR_Integer MR_CALL 
mercury__string__hash2_1_f_0(
  MR_String mercury__string__String_3)
{
  {
    MR_Integer mercury__string__HashVal_4;
    MR_Integer mercury__string__Length_5;
    MR_Integer mercury__string__HashVal1_6;

{
#define MR_PROC_LABEL mercury__string__hash2_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
}
    mercury__string__hash2_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
    return mercury__string__HashVal_4;
  }
}

void MR_CALL 
mercury__string__hash2_loop_5_p_0(
  MR_String mercury__string__String_6,
  MR_Integer mercury__string__Index_7,
  MR_Integer mercury__string__Length_8,
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

      if (mercury__string__succeeded)
      {
        MR_Integer mercury__string__C_10;
        MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
        MR_Integer mercury__string__STATE_VARIABLE_HashVal_15_15;
        MR_Integer mercury__string__Var_16;

{
#define MR_PROC_LABEL mercury__string__hash2_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
}
        mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 37);
        mercury__string__STATE_VARIABLE_HashVal_15_15 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
        mercury__string__Var_16 = (mercury__string__Index_7 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_Index_7 = mercury__string__Var_16;
          MR_Integer mercury__string__next_value_of_STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_15_15;

          mercury__string__Index_7 = mercury__string__next_value_of_Index_7;
          mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__next_value_of_STATE_VARIABLE_HashVal_0_11;
        }
        continue;
      }
      else
        *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
    }
    break;
  }
}

void MR_CALL 
mercury__string__hash_2_p_0(
  MR_String mercury__string__String_3,
  MR_Integer * mercury__string__HashVal_4)
{
  {
    MR_Integer mercury__string__Length_5;
    MR_Integer mercury__string__HashVal1_6;

{
#define MR_PROC_LABEL mercury__string__hash_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
}
    mercury__string__hash_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    *mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
  }
}

MR_Integer MR_CALL 
mercury__string__hash_1_f_0(
  MR_String mercury__string__String_3)
{
  {
    MR_Integer mercury__string__HashVal_4;
    MR_Integer mercury__string__Length_7;
    MR_Integer mercury__string__HashVal1_8;

{
#define MR_PROC_LABEL mercury__string__hash_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_7  = Length;
}
    mercury__string__hash_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_7, (MR_Integer) 0, &mercury__string__HashVal1_8);
    mercury__string__HashVal_4 = (mercury__string__HashVal1_8 ^ mercury__string__Length_7);
    return mercury__string__HashVal_4;
  }
}

void MR_CALL 
mercury__string__hash_loop_5_p_0(
  MR_String mercury__string__String_6,
  MR_Integer mercury__string__Index_7,
  MR_Integer mercury__string__Length_8,
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

      if (mercury__string__succeeded)
      {
        MR_Integer mercury__string__C_10;
        MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
        MR_Integer mercury__string__Var_14;
        MR_Integer mercury__string__STATE_VARIABLE_HashVal_16_16;
        MR_Integer mercury__string__Var_17;

{
#define MR_PROC_LABEL mercury__string__hash_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
}
        mercury__string__Var_14 = (mercury__string__STATE_VARIABLE_HashVal_0_11 << (MR_Integer) 5);
        mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 ^ mercury__string__Var_14);
        mercury__string__STATE_VARIABLE_HashVal_16_16 = (mercury__string__STATE_VARIABLE_HashVal_13_13 ^ mercury__string__C_10);
        mercury__string__Var_17 = (mercury__string__Index_7 + (MR_Integer) 1);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_Index_7 = mercury__string__Var_17;
          MR_Integer mercury__string__next_value_of_STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_16_16;

          mercury__string__Index_7 = mercury__string__next_value_of_Index_7;
          mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__next_value_of_STATE_VARIABLE_HashVal_0_11;
        }
        continue;
      }
      else
        *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__string__codepoint_offset_3_p_0(
  MR_String mercury__string__String_4,
  MR_Integer mercury__string__N_5,
  MR_Integer * mercury__string__Index_6)
{
  {
    MR_bool mercury__string__succeeded;

    mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__String_4, (MR_Integer) 0, mercury__string__N_5, mercury__string__Index_6);
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__codepoint_offset_4_p_0(
  MR_String mercury__string__String_1,
  MR_Integer mercury__string__StartOffset_2,
  MR_Integer mercury__string__N_3,
  MR_Integer * mercury__string__Index_4)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__codepoint_offset_4_p_0

	MR_String String;
	MR_Integer StartOffset;
	MR_Integer N;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	String =  mercury__string__String_1 ;
	StartOffset =  mercury__string__StartOffset_2 ;
	N =  mercury__string__N_3 ;
		{

    size_t          len;
    unsigned char   b;

    SUCCESS_INDICATOR = MR_FALSE;
    len = strlen(String);
    for (Index = StartOffset; Index < len; Index++) {
        b = String[Index];
        if (MR_utf8_is_single_byte(b) || MR_utf8_is_lead_byte(b)) {
            if (N-- == 0) {
                SUCCESS_INDICATOR = MR_TRUE;
                break;
            }
        }
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_4  = Index;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_Integer MR_CALL 
mercury__string__count_utf8_code_units_1_f_0(
  MR_String mercury__string__Str_1)
{
  {
    MR_Integer mercury__string__Length_2;

{
#define MR_PROC_LABEL mercury__string__count_utf8_code_units_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_2  = Length;
}
    return mercury__string__Length_2;
  }
}

MR_Integer MR_CALL 
mercury__string__count_codepoints_1_f_0(
  MR_String mercury__string__String_3)
{
  {
    MR_Integer mercury__string__Count_4;

    mercury__string__count_codepoints_2_p_0(mercury__string__String_3, &mercury__string__Count_4);
    return mercury__string__Count_4;
  }
}

void MR_CALL 
mercury__string__count_codepoints_2_p_0(
  MR_String mercury__string__String_1,
  MR_Integer * mercury__string__Count_2)
{
  {
{
#define MR_PROC_LABEL mercury__string__count_codepoints_2_p_0

	MR_String String;
	MR_Integer Count;

	String =  mercury__string__String_1 ;
		{

    unsigned char   b;
    int             i;

    Count = 0;
    for (i = 0; ; i++) {
        b = String[i];
        if (b == '\0') {
            break;
        }
        if (MR_utf8_is_single_byte(b) || MR_utf8_is_lead_byte(b)) {
            Count++;
        }
    }


		;}
#undef MR_PROC_LABEL
	 *mercury__string__Count_2  = Count;
}
  }
}

void MR_CALL 
mercury__string__count_code_units_2_p_0(
  MR_String mercury__string__Str_3,
  MR_Integer * mercury__string__Length_4)
{
  {
{
#define MR_PROC_LABEL mercury__string__count_code_units_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_4  = Length;
}
  }
}

MR_Integer MR_CALL 
mercury__string__count_code_units_1_f_0(
  MR_String mercury__string__Str_3)
{
  {
    MR_Integer mercury__string__HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__string__count_code_units_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__2_2  = Length;
}
    return mercury__string__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__string__length_2_p_1(
  MR_String mercury__string__Str_1,
  MR_Integer * mercury__string__Length_2)
{
  {
{
#define MR_PROC_LABEL mercury__string__length_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_2  = Length;
}
  }
}

void MR_CALL 
mercury__string__length_2_p_0(
  MR_String mercury__string__Str_1,
  MR_Integer * mercury__string__Length_2)
{
  {
{
#define MR_PROC_LABEL mercury__string__length_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_2  = Length;
}
  }
}

MR_Integer MR_CALL 
mercury__string__length_1_f_0(
  MR_String mercury__string__S_3)
{
  {
    MR_Integer mercury__string__L_4;

{
#define MR_PROC_LABEL mercury__string__length_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__L_4  = Length;
}
    return mercury__string__L_4;
  }
}

void MR_CALL 
mercury__string__unsafe_set_char_4_p_0(
  MR_Char mercury__string__Char_5,
  MR_Integer mercury__string__Index_6,
  MR_String mercury__string__STATE_VARIABLE_Str_0_8,
  MR_String * mercury__string__STATE_VARIABLE_Str_9)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__string__Char_5 ;
	Int =  (MR_Integer) 0 ;
		{

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.unsafe_set_char\'/4", (MR_String) "null character");
        return;
      }
    }
    else
    {
{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_4_p_0

	MR_Char Ch;
	MR_Integer Index;
	MR_String Str0;
	MR_String Str;

	Ch =  mercury__string__Char_5 ;
	Index =  mercury__string__Index_6 ;
	Str0 =  mercury__string__STATE_VARIABLE_Str_0_8 ;
		{

    size_t len = strlen(Str0);
    if (MR_is_ascii(Str0[Index]) && MR_is_ascii(Ch)) {
        /* Fast path. */
        MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
        strcpy(Str, Str0);
        Str[Index] = Ch;
    } else {
        int oldc = MR_utf8_get(Str0, Index);
        size_t oldwidth = MR_utf8_width(oldc);
        size_t newwidth = MR_utf8_width(Ch);
        size_t newlen;
        size_t tailofs;

        newlen = len - oldwidth + newwidth;
        MR_allocate_aligned_string_msg(Str, newlen, MR_ALLOC_ID);
        MR_memcpy(Str, Str0, Index);
        MR_utf8_encode(Str + Index, Ch);
        strcpy(Str + Index + newwidth, Str0 + Index + oldwidth);
    }


		;}
#undef MR_PROC_LABEL
	 *mercury__string__STATE_VARIABLE_Str_9  = Str;
}
    }
  }
}

MR_String MR_CALL 
mercury__string__unsafe_set_char_3_f_0(
  MR_Char mercury__string__C_5,
  MR_Integer mercury__string__N_6,
  MR_String mercury__string__S0_7)
{
  {
    MR_bool mercury__string__succeeded;
    MR_String mercury__string__S_8;

{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_3_f_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__string__C_5 ;
	Int =  (MR_Integer) 0 ;
		{

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.unsafe_set_char\'/4", (MR_String) "null character");
    }
    else
    {
{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_3_f_0

	MR_Char Ch;
	MR_Integer Index;
	MR_String Str0;
	MR_String Str;

	Ch =  mercury__string__C_5 ;
	Index =  mercury__string__N_6 ;
	Str0 =  mercury__string__S0_7 ;
		{

    size_t len = strlen(Str0);
    if (MR_is_ascii(Str0[Index]) && MR_is_ascii(Ch)) {
        /* Fast path. */
        MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
        strcpy(Str, Str0);
        Str[Index] = Ch;
    } else {
        int oldc = MR_utf8_get(Str0, Index);
        size_t oldwidth = MR_utf8_width(oldc);
        size_t newwidth = MR_utf8_width(Ch);
        size_t newlen;
        size_t tailofs;

        newlen = len - oldwidth + newwidth;
        MR_allocate_aligned_string_msg(Str, newlen, MR_ALLOC_ID);
        MR_memcpy(Str, Str0, Index);
        MR_utf8_encode(Str + Index, Ch);
        strcpy(Str + Index + newwidth, Str0 + Index + oldwidth);
    }


		;}
#undef MR_PROC_LABEL
	 mercury__string__S_8  = Str;
}
    }
    return mercury__string__S_8;
  }
}

MR_String MR_CALL 
mercury__string__det_set_char_3_f_0(
  MR_Char mercury__string__C_5,
  MR_Integer mercury__string__N_6,
  MR_String mercury__string__S0_7)
{
  {
    MR_String mercury__string__S_8;

    mercury__string__det_set_char_4_p_0(mercury__string__C_5, mercury__string__N_6, mercury__string__S0_7, &mercury__string__S_8);
    return mercury__string__S_8;
  }
}

void MR_CALL 
mercury__string__det_set_char_4_p_0(
  MR_Char mercury__string__Char_5,
  MR_Integer mercury__string__Int_6,
  MR_String mercury__string__String0_7,
  MR_String * mercury__string__String_8)
{
  {
    MR_bool mercury__string__succeeded;
    MR_String mercury__string__String1_9;

{
#define MR_PROC_LABEL mercury__string__det_set_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__string__Char_5 ;
	Int =  (MR_Integer) 0 ;
		{

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.set_char\'/4", (MR_String) "null character");
        return;
      }
      mercury__string__succeeded = MR_TRUE;
    }
    else
    {
{
#define MR_PROC_LABEL mercury__string__det_set_char_4_p_0

	MR_Char Ch;
	MR_Integer Index;
	MR_String Str0;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Ch =  mercury__string__Char_5 ;
	Index =  mercury__string__Int_6 ;
	Str0 =  mercury__string__String0_7 ;
		{

    size_t len = strlen(Str0);
    if ((MR_Unsigned) Index >= len) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else if (MR_is_ascii(Str0[Index]) && MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = MR_TRUE;
        MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
        strcpy(Str, Str0);
        Str[Index] = Ch;
    } else {
        int oldc = MR_utf8_get(Str0, Index);
        if (oldc < 0) {
            SUCCESS_INDICATOR = MR_FALSE;
        } else {
            size_t oldwidth = MR_utf8_width(oldc);
            size_t newwidth = MR_utf8_width(Ch);
            size_t newlen;

            newlen = len - oldwidth + newwidth;
            MR_allocate_aligned_string_msg(Str, newlen, MR_ALLOC_ID);
            MR_memcpy(Str, Str0, Index);
            MR_utf8_encode(Str + Index, Ch);
            strcpy(Str + Index + newwidth, Str0 + Index + oldwidth);
            SUCCESS_INDICATOR = MR_TRUE;
        }
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__String1_9  = Str;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    }
    if (mercury__string__succeeded)
      *mercury__string__String_8 = mercury__string__String1_9;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.det_set_char\'/4", (MR_String) "index out of range");
        return;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string__set_char_4_p_0(
  MR_Char mercury__string__Char_5,
  MR_Integer mercury__string__Index_6,
  MR_String mercury__string__STATE_VARIABLE_Str_0_8,
  MR_String * mercury__string__STATE_VARIABLE_Str_9)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__set_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__string__Char_5 ;
	Int =  (MR_Integer) 0 ;
		{

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.set_char\'/4", (MR_String) "null character");
      mercury__string__succeeded = MR_TRUE;
    }
    else
    {
{
#define MR_PROC_LABEL mercury__string__set_char_4_p_0

	MR_Char Ch;
	MR_Integer Index;
	MR_String Str0;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Ch =  mercury__string__Char_5 ;
	Index =  mercury__string__Index_6 ;
	Str0 =  mercury__string__STATE_VARIABLE_Str_0_8 ;
		{

    size_t len = strlen(Str0);
    if ((MR_Unsigned) Index >= len) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else if (MR_is_ascii(Str0[Index]) && MR_is_ascii(Ch)) {
        /* Fast path. */
        SUCCESS_INDICATOR = MR_TRUE;
        MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
        strcpy(Str, Str0);
        Str[Index] = Ch;
    } else {
        int oldc = MR_utf8_get(Str0, Index);
        if (oldc < 0) {
            SUCCESS_INDICATOR = MR_FALSE;
        } else {
            size_t oldwidth = MR_utf8_width(oldc);
            size_t newwidth = MR_utf8_width(Ch);
            size_t newlen;

            newlen = len - oldwidth + newwidth;
            MR_allocate_aligned_string_msg(Str, newlen, MR_ALLOC_ID);
            MR_memcpy(Str, Str0, Index);
            MR_utf8_encode(Str + Index, Ch);
            strcpy(Str + Index + newwidth, Str0 + Index + oldwidth);
            SUCCESS_INDICATOR = MR_TRUE;
        }
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__STATE_VARIABLE_Str_9  = Str;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    }
    return mercury__string__succeeded;
  }
}

void MR_CALL 
mercury__string__unsafe_index_code_unit_3_p_0(
  MR_String mercury__string__Str_1,
  MR_Integer mercury__string__Index_2,
  MR_Integer * mercury__string__Code_3)
{
  {
{
#define MR_PROC_LABEL mercury__string__unsafe_index_code_unit_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Str_1 ;
	Index =  mercury__string__Index_2 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 *mercury__string__Code_3  = Code;
}
  }
}

MR_bool MR_CALL 
mercury__string__unsafe_prev_index_4_p_0(
  MR_String mercury__string__Str_1,
  MR_Integer mercury__string__Index_2,
  MR_Integer * mercury__string__PrevIndex_3,
  MR_Char * mercury__string__Ch_4)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__unsafe_prev_index_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Index =  mercury__string__Index_2 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__PrevIndex_3  = PrevIndex;
	 *mercury__string__Ch_4  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__prev_index_4_p_0(
  MR_String mercury__string__Str_5,
  MR_Integer mercury__string__Index_6,
  MR_Integer * mercury__string__CharIndex_7,
  MR_Char * mercury__string__Char_8)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__Len_9;
    MR_Integer mercury__string__Var_10;

{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_9  = Length;
}
    mercury__string__Var_10 = (mercury__string__Index_6 - (MR_Integer) 1);
{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Var_10 ;
	Length =  mercury__string__Len_9 ;
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
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_5 ;
	Index =  mercury__string__Index_6 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__CharIndex_7  = PrevIndex;
	 *mercury__string__Char_8  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    }
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__unsafe_index_next_4_p_0(
  MR_String mercury__string__Str_1,
  MR_Integer mercury__string__Index_2,
  MR_Integer * mercury__string__NextIndex_3,
  MR_Char * mercury__string__Ch_4)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__unsafe_index_next_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Index =  mercury__string__Index_2 ;
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
	 *mercury__string__NextIndex_3  = NextIndex;
	 *mercury__string__Ch_4  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__index_next_4_p_0(
  MR_String mercury__string__Str_5,
  MR_Integer mercury__string__Index_6,
  MR_Integer * mercury__string__NextIndex_7,
  MR_Char * mercury__string__Char_8)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__Len_9;

{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_9  = Length;
}
{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_6 ;
	Length =  mercury__string__Len_9 ;
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
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_5 ;
	Index =  mercury__string__Index_6 ;
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
	 *mercury__string__NextIndex_7  = NextIndex;
	 *mercury__string__Char_8  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    }
    return mercury__string__succeeded;
  }
}

MR_Char MR_CALL 
mercury__string__unsafe_elem_2_f_0(
  MR_Integer mercury__string__Index_5,
  MR_String mercury__string__String_4)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Char mercury__string__HeadVar__3_3;
    MR_Char mercury__string__CharPrime_12;

{
#define MR_PROC_LABEL mercury__string__unsafe_elem_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__Index_5 ;
		{

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_12  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
      mercury__string__HeadVar__3_3 = mercury__string__CharPrime_12;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.unsafe_index\'/3", (MR_String) "illegal sequence");
    }
    return mercury__string__HeadVar__3_3;
  }
}

MR_Char MR_CALL 
mercury__string__elem_2_f_0(
  MR_Integer mercury__string__Index_5,
  MR_String mercury__string__String_4)
{
  {
    MR_Char mercury__string__HeadVar__3_3;

    mercury__string__HeadVar__3_3 = mercury__string__det_index_2_f_0(mercury__string__String_4, mercury__string__Index_5);
    return mercury__string__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__string__unsafe_index_3_p_0(
  MR_String mercury__string__Str_4,
  MR_Integer mercury__string__Index_5,
  MR_Char * mercury__string__Char_6)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Char mercury__string__CharPrime_7;

{
#define MR_PROC_LABEL mercury__string__unsafe_index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_4 ;
	Index =  mercury__string__Index_5 ;
		{

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_7  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
      *mercury__string__Char_6 = mercury__string__CharPrime_7;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.unsafe_index\'/3", (MR_String) "illegal sequence");
        return;
      }
    }
  }
}

MR_Char MR_CALL 
mercury__string__unsafe_index_2_f_0(
  MR_String mercury__string__S_4,
  MR_Integer mercury__string__N_5)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Char mercury__string__C_6;
    MR_Char mercury__string__CharPrime_10;

{
#define MR_PROC_LABEL mercury__string__unsafe_index_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_4 ;
	Index =  mercury__string__N_5 ;
		{

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_10  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
      mercury__string__C_6 = mercury__string__CharPrime_10;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.unsafe_index\'/3", (MR_String) "illegal sequence");
    }
    return mercury__string__C_6;
  }
}

void MR_CALL 
mercury__string__det_index_3_p_0(
  MR_String mercury__string__String_4,
  MR_Integer mercury__string__Int_5,
  MR_Char * mercury__string__Char_6)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Char mercury__string__Char0_7;
    MR_Integer mercury__string__Len_13;
    MR_Char mercury__string__CharPrime_25;

{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_13  = Length;
}
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Int_5 ;
	Length =  mercury__string__Len_13 ;
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
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__Int_5 ;
		{

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_25  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
        mercury__string__Char0_7 = mercury__string__CharPrime_25;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.unsafe_index\'/3", (MR_String) "illegal sequence");
          return;
        }
      }
      mercury__string__succeeded = MR_TRUE;
    }
    if (mercury__string__succeeded)
      *mercury__string__Char_6 = mercury__string__Char0_7;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.det_index\'/3", (MR_String) "index out of range");
        return;
      }
    }
  }
}

MR_Char MR_CALL 
mercury__string__det_index_2_f_0(
  MR_String mercury__string__S_4,
  MR_Integer mercury__string__N_5)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Char mercury__string__C_6;
    MR_Char mercury__string__Char0_10;
    MR_Integer mercury__string__Len_16;
    MR_Char mercury__string__CharPrime_28;

{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_16  = Length;
}
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__N_5 ;
	Length =  mercury__string__Len_16 ;
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
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_4 ;
	Index =  mercury__string__N_5 ;
		{

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_28  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
        mercury__string__Char0_10 = mercury__string__CharPrime_28;
      else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.unsafe_index\'/3", (MR_String) "illegal sequence");
      }
      mercury__string__succeeded = MR_TRUE;
    }
    if (mercury__string__succeeded)
      mercury__string__C_6 = mercury__string__Char0_10;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.det_index\'/3", (MR_String) "index out of range");
    }
    return mercury__string__C_6;
  }
}

MR_bool MR_CALL 
mercury__string__index_3_p_0(
  MR_String mercury__string__Str_4,
  MR_Integer mercury__string__Index_5,
  MR_Char * mercury__string__Char_6)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Integer mercury__string__Len_7;
    MR_Char mercury__string__CharPrime_19;

{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_7  = Length;
}
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_5 ;
	Length =  mercury__string__Len_7 ;
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
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_4 ;
	Index =  mercury__string__Index_5 ;
		{

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_19  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__string__succeeded)
        *mercury__string__Char_6 = mercury__string__CharPrime_19;
      else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.unsafe_index\'/3", (MR_String) "illegal sequence");
      }
      mercury__string__succeeded = MR_TRUE;
    }
    return mercury__string__succeeded;
  }
}

MR_String MR_CALL 
mercury__string__duplicate_char_2_f_0(
  MR_Char mercury__string__C_4,
  MR_Integer mercury__string__N_5)
{
  {
    MR_String mercury__string__S_6;

    mercury__string__duplicate_char_3_p_0(mercury__string__C_4, mercury__string__N_5, &mercury__string__S_6);
    return mercury__string__S_6;
  }
}

void MR_CALL 
mercury__string__duplicate_char_3_p_0(
  MR_Char mercury__string__Char_4,
  MR_Integer mercury__string__Count_5,
  MR_String * mercury__string__String_6)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Word mercury__string__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
    MR_Word mercury__string__Var_7;
    MR_Word mercury__string__V_7_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_String mercury__string__Str0_20;

    mercury__list__accumulate_n_copies_4_p_0(mercury__string__TypeCtorInfo_8_8, mercury__string__Count_5, ((MR_Box) (MR_Word) (mercury__string__Char_4)), mercury__string__V_7_12, &mercury__string__Var_7);
    mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__Var_7, &mercury__string__Str0_20);
    if (mercury__string__succeeded)
      *mercury__string__String_6 = mercury__string__Str0_20;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_char_list\'/2", (MR_String) "null character in list");
        return;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string__from_utf16_code_unit_list_2_p_0(
  MR_Word mercury__string__CodeList_3,
  MR_String * mercury__string__String_4)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__from_utf16_code_unit_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
    {
      MR_Word mercury__string__RevChars_5;
      MR_Word mercury__string__Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      MR_String mercury__string__Str0_9;

      mercury__string__succeeded = mercury__string__decode_utf16_3_p_0(mercury__string__CodeList_3, mercury__string__Var_6, &mercury__string__RevChars_5);
      if (mercury__string__succeeded)
      {
        mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__RevChars_5, &mercury__string__Str0_9);
        if (mercury__string__succeeded)
          *mercury__string__String_4 = mercury__string__Str0_9;
        else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_rev_char_list\'/2", (MR_String) "null character in list");
        }
        mercury__string__succeeded = MR_TRUE;
      }
    }
    else
      mercury__string__succeeded = mercury__string__from_code_unit_list_2_p_0(mercury__string__CodeList_3, mercury__string__String_4);
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__decode_utf16_3_p_0(
  MR_Word mercury__string__HeadVar__1_1,
  MR_Word mercury__string__HeadVar__2_2,
  MR_Word * mercury__string__RevChars_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;

      if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__string__RevChars_3 = mercury__string__HeadVar__2_2;
        mercury__string__succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer mercury__string__A_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__string__FollowA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mercury__string__CharInt_9;
        MR_Word mercury__string__Rest_10;
        MR_Char mercury__string__Char_12;
        MR_Word mercury__string__Var_23;

        mercury__string__succeeded = (mercury__string__A_5 < (MR_Integer) 0);
        if (mercury__string__succeeded)
          mercury__string__succeeded = MR_FALSE;
        else
        {
          mercury__string__succeeded = (mercury__string__A_5 < (MR_Integer) 55296);
          if (mercury__string__succeeded)
          {
            mercury__string__CharInt_9 = mercury__string__A_5;
            mercury__string__Rest_10 = mercury__string__FollowA_6;
            mercury__string__succeeded = MR_TRUE;
          }
          else
          {
            mercury__string__succeeded = (mercury__string__A_5 < (MR_Integer) 56320);
            if (mercury__string__succeeded)
            {
              MR_Integer mercury__string__B_11;
              MR_Integer mercury__string__Var_16;
              MR_Integer mercury__string__Var_17;
              MR_Integer mercury__string__Var_18;
              MR_Integer mercury__string__Var_19;
              MR_Integer mercury__string__Var_20;
              MR_Integer mercury__string__Var_21;

              mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__FollowA_6)) == (MR_mktag((MR_Integer) 1)));
              if (mercury__string__succeeded)
              {
                mercury__string__B_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 0)));
                mercury__string__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 1)));
                mercury__string__Var_16 = (MR_Integer) 56320;
                mercury__string__succeeded = (mercury__string__B_11 >= mercury__string__Var_16);
                if (mercury__string__succeeded)
                {
                  mercury__string__Var_17 = (MR_Integer) 57343;
                  mercury__string__succeeded = (mercury__string__B_11 <= mercury__string__Var_17);
                  if (mercury__string__succeeded)
                  {
                    mercury__string__Var_20 = (MR_Integer) 10;
                    mercury__string__Var_19 = mercury__int__f_60_60_2_f_0(mercury__string__A_5, mercury__string__Var_20);
                    mercury__string__Var_18 = (mercury__string__Var_19 + mercury__string__B_11);
                    mercury__string__Var_21 = (MR_Integer) 56613888;
                    mercury__string__CharInt_9 = (mercury__string__Var_18 - mercury__string__Var_21);
                    mercury__string__succeeded = MR_TRUE;
                  }
                }
              }
            }
            else
            {
              mercury__string__succeeded = (mercury__string__A_5 <= (MR_Integer) 65535);
              if (mercury__string__succeeded)
              {
                mercury__string__CharInt_9 = mercury__string__A_5;
                mercury__string__Rest_10 = mercury__string__FollowA_6;
                mercury__string__succeeded = MR_TRUE;
              }
            }
          }
        }
        if (mercury__string__succeeded)
        {
{
#define MR_PROC_LABEL mercury__string__decode_utf16_3_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__string__CharInt_9 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Char_12  = Character;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
          if (mercury__string__succeeded)
          {
            {
              mercury__string__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__Var_23, 0) = ((MR_Box) (MR_Word) (mercury__string__Char_12));
              MR_hl_field(MR_mktag(1), mercury__string__Var_23, 1) = ((MR_Box) (mercury__string__HeadVar__2_2));
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__string__next_value_of_HeadVar__1_1 = mercury__string__Rest_10;
              MR_Word mercury__string__next_value_of_HeadVar__2_2 = mercury__string__Var_23;

              mercury__string__HeadVar__1_1 = mercury__string__next_value_of_HeadVar__1_1;
              mercury__string__HeadVar__2_2 = mercury__string__next_value_of_HeadVar__2_2;
            }
            continue;
          }
        }
      }
      return mercury__string__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__string__from_utf8_code_unit_list_2_p_0(
  MR_Word mercury__string__CodeList_3,
  MR_String * mercury__string__String_4)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__from_utf8_code_unit_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
      mercury__string__succeeded = mercury__string__from_code_unit_list_2_p_0(mercury__string__CodeList_3, mercury__string__String_4);
    else
    {
      MR_Word mercury__string__RevChars_5;
      MR_Word mercury__string__Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      MR_String mercury__string__Str0_9;

      mercury__string__succeeded = mercury__string__decode_utf8_3_p_0(mercury__string__CodeList_3, mercury__string__Var_6, &mercury__string__RevChars_5);
      if (mercury__string__succeeded)
      {
        mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__RevChars_5, &mercury__string__Str0_9);
        if (mercury__string__succeeded)
          *mercury__string__String_4 = mercury__string__Str0_9;
        else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_rev_char_list\'/2", (MR_String) "null character in list");
        }
        mercury__string__succeeded = MR_TRUE;
      }
    }
    return mercury__string__succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__decode_utf8_3_p_0(
  MR_Word mercury__string__HeadVar__1_1,
  MR_Word mercury__string__HeadVar__2_2,
  MR_Word * mercury__string__RevChars_3)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded;

      if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__string__RevChars_3 = mercury__string__HeadVar__2_2;
        mercury__string__succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer mercury__string__A_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__string__FollowA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mercury__string__CharInt_9;
        MR_Word mercury__string__Rest_10;
        MR_Char mercury__string__Char_14;
        MR_Word mercury__string__Var_60;

        mercury__string__succeeded = (mercury__string__A_5 < (MR_Integer) 0);
        if (mercury__string__succeeded)
          mercury__string__succeeded = MR_FALSE;
        else
        {
          mercury__string__succeeded = (mercury__string__A_5 <= (MR_Integer) 127);
          if (mercury__string__succeeded)
          {
            mercury__string__CharInt_9 = mercury__string__A_5;
            mercury__string__Rest_10 = mercury__string__FollowA_6;
            mercury__string__succeeded = MR_TRUE;
          }
          else
          {
            mercury__string__succeeded = (mercury__string__A_5 <= (MR_Integer) 193);
            if (mercury__string__succeeded)
              mercury__string__succeeded = MR_FALSE;
            else
            {
              mercury__string__succeeded = (mercury__string__A_5 <= (MR_Integer) 223);
              if (mercury__string__succeeded)
              {
                MR_Integer mercury__string__B_11;
                MR_Integer mercury__string__Var_19;
                MR_Integer mercury__string__Var_20;
                MR_Integer mercury__string__Var_21;
                MR_Integer mercury__string__Var_22;
                MR_Integer mercury__string__Var_23;
                MR_Integer mercury__string__Var_24;
                MR_Integer mercury__string__Var_25;
                MR_Integer mercury__string__Var_68;
                MR_Integer mercury__string__Var_69;

                mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__FollowA_6)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__string__succeeded)
                {
                  mercury__string__B_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 0)));
                  mercury__string__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 1)));
                  mercury__string__Var_69 = (MR_Integer) 192;
                  mercury__string__Var_68 = (mercury__string__B_11 & mercury__string__Var_69);
                  mercury__string__succeeded = (mercury__string__Var_68 == (MR_Integer) 128);
                  if (mercury__string__succeeded)
                  {
                    mercury__string__Var_21 = (MR_Integer) 31;
                    mercury__string__Var_20 = (mercury__string__A_5 & mercury__string__Var_21);
                    mercury__string__Var_22 = (MR_Integer) 6;
                    mercury__string__Var_19 = mercury__int__f_60_60_2_f_0(mercury__string__Var_20, mercury__string__Var_22);
                    mercury__string__Var_24 = (MR_Integer) 63;
                    mercury__string__Var_23 = (mercury__string__B_11 & mercury__string__Var_24);
                    mercury__string__CharInt_9 = (mercury__string__Var_19 | mercury__string__Var_23);
                    mercury__string__Var_25 = (MR_Integer) 128;
                    mercury__string__succeeded = (mercury__string__CharInt_9 >= mercury__string__Var_25);
                  }
                }
              }
              else
              {
                mercury__string__succeeded = (mercury__string__A_5 <= (MR_Integer) 239);
                if (mercury__string__succeeded)
                {
                  MR_Integer mercury__string__C_12;
                  MR_Word mercury__string__Var_27;
                  MR_Integer mercury__string__Var_28;
                  MR_Integer mercury__string__Var_29;
                  MR_Integer mercury__string__Var_30;
                  MR_Integer mercury__string__Var_31;
                  MR_Integer mercury__string__Var_32;
                  MR_Integer mercury__string__Var_33;
                  MR_Integer mercury__string__Var_34;
                  MR_Integer mercury__string__Var_35;
                  MR_Integer mercury__string__Var_36;
                  MR_Integer mercury__string__Var_37;
                  MR_Integer mercury__string__Var_38;
                  MR_Integer mercury__string__Var_39;
                  MR_Integer mercury__string__B_61;
                  MR_Integer mercury__string__Var_71;
                  MR_Integer mercury__string__Var_72;
                  MR_Integer mercury__string__Var_74;
                  MR_Integer mercury__string__Var_75;

                  mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__FollowA_6)) == (MR_mktag((MR_Integer) 1)));
                  if (mercury__string__succeeded)
                  {
                    mercury__string__B_61 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 0)));
                    mercury__string__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 1)));
                    mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__Var_27)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__string__succeeded)
                    {
                      mercury__string__C_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__Var_27, (MR_Integer) 0)));
                      mercury__string__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__Var_27, (MR_Integer) 1)));
                      mercury__string__Var_72 = (MR_Integer) 192;
                      mercury__string__Var_71 = (mercury__string__B_61 & mercury__string__Var_72);
                      mercury__string__succeeded = (mercury__string__Var_71 == (MR_Integer) 128);
                      if (mercury__string__succeeded)
                      {
                        mercury__string__Var_75 = (MR_Integer) 192;
                        mercury__string__Var_74 = (mercury__string__C_12 & mercury__string__Var_75);
                        mercury__string__succeeded = (mercury__string__Var_74 == (MR_Integer) 128);
                        if (mercury__string__succeeded)
                        {
                          mercury__string__Var_31 = (MR_Integer) 15;
                          mercury__string__Var_30 = (mercury__string__A_5 & mercury__string__Var_31);
                          mercury__string__Var_32 = (MR_Integer) 12;
                          mercury__string__Var_29 = mercury__int__f_60_60_2_f_0(mercury__string__Var_30, mercury__string__Var_32);
                          mercury__string__Var_35 = (MR_Integer) 63;
                          mercury__string__Var_34 = (mercury__string__B_61 & mercury__string__Var_35);
                          mercury__string__Var_36 = (MR_Integer) 6;
                          mercury__string__Var_33 = mercury__int__f_60_60_2_f_0(mercury__string__Var_34, mercury__string__Var_36);
                          mercury__string__Var_28 = (mercury__string__Var_29 | mercury__string__Var_33);
                          mercury__string__Var_38 = (MR_Integer) 63;
                          mercury__string__Var_37 = (mercury__string__C_12 & mercury__string__Var_38);
                          mercury__string__CharInt_9 = (mercury__string__Var_28 | mercury__string__Var_37);
                          mercury__string__Var_39 = (MR_Integer) 2048;
                          mercury__string__succeeded = (mercury__string__CharInt_9 >= mercury__string__Var_39);
                        }
                      }
                    }
                  }
                }
                else
                {
                  MR_Integer mercury__string__D_13;
                  MR_Word mercury__string__Var_41;
                  MR_Word mercury__string__Var_42;
                  MR_Integer mercury__string__Var_43;
                  MR_Integer mercury__string__Var_44;
                  MR_Integer mercury__string__Var_45;
                  MR_Integer mercury__string__Var_46;
                  MR_Integer mercury__string__Var_47;
                  MR_Integer mercury__string__Var_48;
                  MR_Integer mercury__string__Var_49;
                  MR_Integer mercury__string__Var_50;
                  MR_Integer mercury__string__Var_51;
                  MR_Integer mercury__string__Var_52;
                  MR_Integer mercury__string__Var_53;
                  MR_Integer mercury__string__Var_54;
                  MR_Integer mercury__string__Var_55;
                  MR_Integer mercury__string__Var_56;
                  MR_Integer mercury__string__Var_57;
                  MR_Integer mercury__string__Var_58;
                  MR_Integer mercury__string__Var_59;
                  MR_Integer mercury__string__B_62;
                  MR_Integer mercury__string__C_63;
                  MR_Integer mercury__string__Var_77;
                  MR_Integer mercury__string__Var_78;
                  MR_Integer mercury__string__Var_80;
                  MR_Integer mercury__string__Var_81;
                  MR_Integer mercury__string__Var_83;
                  MR_Integer mercury__string__Var_84;

                  mercury__string__succeeded = (mercury__string__A_5 <= (MR_Integer) 244);
                  if (mercury__string__succeeded)
                  {
                    mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__FollowA_6)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__string__succeeded)
                    {
                      mercury__string__B_62 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 0)));
                      mercury__string__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__FollowA_6, (MR_Integer) 1)));
                      mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__Var_41)) == (MR_mktag((MR_Integer) 1)));
                      if (mercury__string__succeeded)
                      {
                        mercury__string__C_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__Var_41, (MR_Integer) 0)));
                        mercury__string__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__Var_41, (MR_Integer) 1)));
                        mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__Var_42)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__string__succeeded)
                        {
                          mercury__string__D_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__Var_42, (MR_Integer) 0)));
                          mercury__string__Rest_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__Var_42, (MR_Integer) 1)));
                          mercury__string__Var_78 = (MR_Integer) 192;
                          mercury__string__Var_77 = (mercury__string__B_62 & mercury__string__Var_78);
                          mercury__string__succeeded = (mercury__string__Var_77 == (MR_Integer) 128);
                          if (mercury__string__succeeded)
                          {
                            mercury__string__Var_81 = (MR_Integer) 192;
                            mercury__string__Var_80 = (mercury__string__C_63 & mercury__string__Var_81);
                            mercury__string__succeeded = (mercury__string__Var_80 == (MR_Integer) 128);
                            if (mercury__string__succeeded)
                            {
                              mercury__string__Var_84 = (MR_Integer) 192;
                              mercury__string__Var_83 = (mercury__string__D_13 & mercury__string__Var_84);
                              mercury__string__succeeded = (mercury__string__Var_83 == (MR_Integer) 128);
                              if (mercury__string__succeeded)
                              {
                                mercury__string__Var_47 = (MR_Integer) 7;
                                mercury__string__Var_46 = (mercury__string__A_5 & mercury__string__Var_47);
                                mercury__string__Var_48 = (MR_Integer) 18;
                                mercury__string__Var_45 = mercury__int__f_60_60_2_f_0(mercury__string__Var_46, mercury__string__Var_48);
                                mercury__string__Var_51 = (MR_Integer) 63;
                                mercury__string__Var_50 = (mercury__string__B_62 & mercury__string__Var_51);
                                mercury__string__Var_52 = (MR_Integer) 12;
                                mercury__string__Var_49 = mercury__int__f_60_60_2_f_0(mercury__string__Var_50, mercury__string__Var_52);
                                mercury__string__Var_44 = (mercury__string__Var_45 | mercury__string__Var_49);
                                mercury__string__Var_55 = (MR_Integer) 63;
                                mercury__string__Var_54 = (mercury__string__C_63 & mercury__string__Var_55);
                                mercury__string__Var_56 = (MR_Integer) 6;
                                mercury__string__Var_53 = mercury__int__f_60_60_2_f_0(mercury__string__Var_54, mercury__string__Var_56);
                                mercury__string__Var_43 = (mercury__string__Var_44 | mercury__string__Var_53);
                                mercury__string__Var_58 = (MR_Integer) 63;
                                mercury__string__Var_57 = (mercury__string__D_13 & mercury__string__Var_58);
                                mercury__string__CharInt_9 = (mercury__string__Var_43 | mercury__string__Var_57);
                                mercury__string__Var_59 = (MR_Integer) 65536;
                                mercury__string__succeeded = (mercury__string__CharInt_9 >= mercury__string__Var_59);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (mercury__string__succeeded)
        {
{
#define MR_PROC_LABEL mercury__string__decode_utf8_3_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  mercury__string__CharInt_9 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Char_14  = Character;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
          if (mercury__string__succeeded)
          {
            {
              mercury__string__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__string__Var_60, 0) = ((MR_Box) (MR_Word) (mercury__string__Char_14));
              MR_hl_field(MR_mktag(1), mercury__string__Var_60, 1) = ((MR_Box) (mercury__string__HeadVar__2_2));
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__string__next_value_of_HeadVar__1_1 = mercury__string__Rest_10;
              MR_Word mercury__string__next_value_of_HeadVar__2_2 = mercury__string__Var_60;

              mercury__string__HeadVar__1_1 = mercury__string__next_value_of_HeadVar__1_1;
              mercury__string__HeadVar__2_2 = mercury__string__next_value_of_HeadVar__2_2;
            }
            continue;
          }
        }
      }
      return mercury__string__succeeded;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__string__from_code_unit_list_2_p_0(
  MR_Word mercury__string__CodeList_1,
  MR_String * mercury__string__Str_2)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__from_code_unit_list_2_p_0

	MR_Word CodeList;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	CodeList =  mercury__string__CodeList_1 ;
		{

    MR_Word list_ptr;
    size_t  size;

    size = 0;
    list_ptr = CodeList;
    while (! MR_list_is_empty(list_ptr)) {
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    MR_allocate_aligned_string_msg(Str, size, MR_ALLOC_ID);

    SUCCESS_INDICATOR = MR_TRUE;
    size = 0;
    list_ptr = CodeList;
    while (! MR_list_is_empty(list_ptr)) {
        int c;
        c = MR_list_head(list_ptr);
        /*
        ** It is an error to put a null character in a string
        ** (see the comments at the top of this file).
        */
        if (c == '\0' || c > 0xff) {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[size] = c;
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    Str[size] = '\0';

    SUCCESS_INDICATOR = SUCCESS_INDICATOR && MR_utf8_verify(Str);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

void MR_CALL 
mercury__string__to_utf16_code_unit_list_2_p_0(
  MR_String mercury__string__String_3,
  MR_Word * mercury__string__CodeList_4)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__to_utf16_code_unit_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
    {
      MR_Word mercury__string__Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      MR_Integer mercury__string__Var_18;
      MR_Integer mercury__string__End_35;
      MR_Integer mercury__string__Var_37;

{
#define MR_PROC_LABEL mercury__string__to_utf16_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_18  = Length;
}
{
#define MR_PROC_LABEL mercury__string__to_utf16_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_37  = Length;
}
      mercury__string__succeeded = (mercury__string__Var_18 < mercury__string__Var_37);
      if (mercury__string__succeeded)
        mercury__string__End_35 = mercury__string__Var_18;
      else
        mercury__string__End_35 = mercury__string__Var_37;
      mercury__string__foldr_between_2__ho49_6_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__End_35, mercury__string__Var_6, mercury__string__CodeList_4);
    }
    else
    {
      MR_Integer mercury__string__Var_60;

{
#define MR_PROC_LABEL mercury__string__to_utf16_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_60  = Length;
}
      mercury__string__to_code_unit_list_loop_4_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Var_60, mercury__string__CodeList_4);
    }
  }
}

static void MR_CALL 
mercury__string__foldr_between_2__ho49_6_p_0(
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__I_10,
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
      MR_Integer mercury__string__J_12;
      MR_Char mercury__string__Char_13;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldr_between_2__ho49_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_10 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
      }
      if (mercury__string__succeeded)
      {
        MR_Word mercury__string__STATE_VARIABLE_Acc_16_16;

        mercury__string__encode_utf16_3_p_0(mercury__string__Char_13, mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_I_10 = mercury__string__J_12;
          MR_Word mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

          mercury__string__I_10 = mercury__string__next_value_of_I_10;
          mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14;
        }
        continue;
      }
      else
        *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
    }
    break;
  }
}

void MR_CALL 
mercury__string__encode_utf16_3_p_0(
  MR_Char mercury__string__Char_4,
  MR_Word mercury__string__CodeList0_5,
  MR_Word * mercury__string__CodeList_6)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Word mercury__string__CharCodes_7;

    mercury__string__succeeded = mercury__char__to_utf16_2_p_0(mercury__string__Char_4, &mercury__string__CharCodes_7);
    if (mercury__string__succeeded)
    {
      MR_Word mercury__string__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

      mercury__list__append_3_p_1(mercury__string__TypeCtorInfo_11_11, mercury__string__CharCodes_7, mercury__string__CodeList0_5, mercury__string__CodeList_6);
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "string", (MR_String) "predicate \140string.encode_utf16\'/3", (MR_String) "char.to_utf16 failed");
        return;
      }
    }
  }
}

void MR_CALL 
mercury__string__to_utf8_code_unit_list_2_p_0(
  MR_String mercury__string__String_3,
  MR_Word * mercury__string__CodeList_4)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__to_utf8_code_unit_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__string__succeeded)
    {
      MR_Integer mercury__string__Var_14;

{
#define MR_PROC_LABEL mercury__string__to_utf8_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_14  = Length;
}
      mercury__string__to_code_unit_list_loop_4_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Var_14, mercury__string__CodeList_4);
    }
    else
    {
      MR_Word mercury__string__Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      MR_Integer mercury__string__Var_27;
      MR_Integer mercury__string__End_44;
      MR_Integer mercury__string__Var_46;

{
#define MR_PROC_LABEL mercury__string__to_utf8_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_27  = Length;
}
{
#define MR_PROC_LABEL mercury__string__to_utf8_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_46  = Length;
}
      mercury__string__succeeded = (mercury__string__Var_27 < mercury__string__Var_46);
      if (mercury__string__succeeded)
        mercury__string__End_44 = mercury__string__Var_27;
      else
        mercury__string__End_44 = mercury__string__Var_46;
      mercury__string__foldr_between_2__ho50_6_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__End_44, mercury__string__Var_6, mercury__string__CodeList_4);
    }
  }
}

static void MR_CALL 
mercury__string__foldr_between_2__ho50_6_p_0(
  MR_String mercury__string__String_8,
  MR_Integer mercury__string__Start_9,
  MR_Integer mercury__string__I_10,
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
      MR_Integer mercury__string__J_12;
      MR_Char mercury__string__Char_13;

      if (mercury__string__succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldr_between_2__ho50_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_10 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__string__succeeded)
          mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
      }
      if (mercury__string__succeeded)
      {
        MR_Word mercury__string__STATE_VARIABLE_Acc_16_16;

        mercury__string__encode_utf8_3_p_0(mercury__string__Char_13, mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
        /* direct tailcall eliminated */
        {
          MR_Integer mercury__string__next_value_of_I_10 = mercury__string__J_12;
          MR_Word mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

          mercury__string__I_10 = mercury__string__next_value_of_I_10;
          mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__next_value_of_STATE_VARIABLE_Acc_0_14;
        }
        continue;
      }
      else
        *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
    }
    break;
  }
}

void MR_CALL 
mercury__string__encode_utf8_3_p_0(
  MR_Char mercury__string__Char_4,
  MR_Word mercury__string__CodeList0_5,
  MR_Word * mercury__string__CodeList_6)
{
  {
    MR_bool mercury__string__succeeded;
    MR_Word mercury__string__CharCodes_7;

    mercury__string__succeeded = mercury__char__to_utf8_2_p_0(mercury__string__Char_4, &mercury__string__CharCodes_7);
    if (mercury__string__succeeded)
    {
      MR_Word mercury__string__TypeCtorInfo_11_11 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;

      mercury__list__append_3_p_1(mercury__string__TypeCtorInfo_11_11, mercury__string__CharCodes_7, mercury__string__CodeList0_5, mercury__string__CodeList_6);
    }
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "string", (MR_String) "predicate \140string.encode_utf8\'/3", (MR_String) "char.to_utf8 failed");
        return;
      }
    }
  }
}

void MR_CALL 
mercury__string__to_code_unit_list_2_p_0(
  MR_String mercury__string__String_3,
  MR_Word * mercury__string__List_4)
{
  {
    MR_Integer mercury__string__Var_6;

{
#define MR_PROC_LABEL mercury__string__to_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__string__Var_6  = Length;
}
    mercury__string__to_code_unit_list_loop_4_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Var_6, mercury__string__List_4);
  }
}

void MR_CALL 
mercury__string__to_code_unit_list_loop_4_p_0(
  MR_String mercury__string__String_5,
  MR_Integer mercury__string__Index_6,
  MR_Integer mercury__string__End_7,
  MR_Word * mercury__string__List_8)
{
  {
    MR_bool mercury__string__succeeded = (mercury__string__Index_6 >= mercury__string__End_7);

    if (mercury__string__succeeded)
      *mercury__string__List_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Integer mercury__string__Code_9;
      MR_Word mercury__string__Tail_10;
      MR_Integer mercury__string__Var_11;

{
#define MR_PROC_LABEL mercury__string__to_code_unit_list_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_5 ;
	Index =  mercury__string__Index_6 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__string__Code_9  = Code;
}
      mercury__string__Var_11 = (mercury__string__Index_6 + (MR_Integer) 1);
      mercury__string__to_code_unit_list_loop_4_p_0(mercury__string__String_5, mercury__string__Var_11, mercury__string__End_7, &mercury__string__Tail_10);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *mercury__string__List_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Code_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Tail_10));
      }
    }
  }
}

void MR_CALL 
mercury__string__from_rev_char_list_2_p_0(
  MR_Word mercury__string__Chars_3,
  MR_String * mercury__string__Str_4)
{
  {
    MR_bool mercury__string__succeeded;
    MR_String mercury__string__Str0_5;

    mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__Chars_3, &mercury__string__Str0_5);
    if (mercury__string__succeeded)
      *mercury__string__Str_4 = mercury__string__Str0_5;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_rev_char_list\'/2", (MR_String) "null character in list");
        return;
      }
    }
  }
}

MR_String MR_CALL 
mercury__string__from_rev_char_list_1_f_0(
  MR_Word mercury__string__Cs_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_String mercury__string__S_4;
    MR_String mercury__string__Str0_7;

    mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__Cs_3, &mercury__string__Str0_7);
    if (mercury__string__succeeded)
      mercury__string__S_4 = mercury__string__Str0_7;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_rev_char_list\'/2", (MR_String) "null character in list");
    }
    return mercury__string__S_4;
  }
}

MR_bool MR_CALL 
mercury__string__semidet_from_rev_char_list_2_p_0(
  MR_Word mercury__string__Chars_1,
  MR_String * mercury__string__Str_2)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__semidet_from_rev_char_list_2_p_0

	MR_Word Chars;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Chars =  mercury__string__Chars_1 ;
		{
{
    MR_Word list_ptr;
    MR_Word size;
    MR_Char c;

    /*
    ** Loop to calculate list length in `size' using list in `list_ptr'
    */
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        c = (MR_Char) MR_list_head(list_ptr);
        if (MR_is_ascii(c)) {
            size++;
        } else {
            size += MR_utf8_width(c);
        }
        list_ptr = MR_list_tail(list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_ALLOC_ID);

    /*
    ** Set size to be the offset of the end of the string
    ** (ie the \0) and null terminate the string.
    */
    Str[size] = '\0';

    /*
    ** Loop to copy the characters from the list_ptr to the string
    ** in reverse order.
    */
    list_ptr = Chars;
    SUCCESS_INDICATOR = MR_TRUE;
    while (!MR_list_is_empty(list_ptr)) {
        c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        if (MR_is_ascii(c)) {
            size--;
            Str[size] = c;
        } else {
            size -= MR_utf8_width(c);
            MR_utf8_encode(Str + size, c);
        }
        list_ptr = MR_list_tail(list_ptr);
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

void MR_CALL 
mercury__string__from_char_list_2_p_1(
  MR_Word * mercury__string__Chars_1,
  MR_String mercury__string__Str_2)
{
  {
{
#define MR_PROC_LABEL mercury__string__from_char_list_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_2 ;
		{
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Chars_1  = CharList;
}
  }
}

void MR_CALL 
mercury__string__from_char_list_2_p_0(
  MR_Word mercury__string__Chars_1,
  MR_String * mercury__string__Str_2)
{
  {
    MR_bool mercury__string__succeeded;
    MR_String mercury__string__Str0_7;

    mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__Chars_1, &mercury__string__Str0_7);
    if (mercury__string__succeeded)
      *mercury__string__Str_2 = mercury__string__Str0_7;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_char_list\'/2", (MR_String) "null character in list");
        return;
      }
    }
  }
}

MR_String MR_CALL 
mercury__string__from_char_list_1_f_0(
  MR_Word mercury__string__Cs_3)
{
  {
    MR_bool mercury__string__succeeded;
    MR_String mercury__string__S_4;
    MR_String mercury__string__Str0_9;

    mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__Cs_3, &mercury__string__Str0_9);
    if (mercury__string__succeeded)
      mercury__string__S_4 = mercury__string__Str0_9;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_char_list\'/2", (MR_String) "null character in list");
    }
    return mercury__string__S_4;
  }
}

void MR_CALL 
mercury__string__to_char_list_2_p_1(
  MR_String * mercury__string__Str_1,
  MR_Word mercury__string__CharList_2)
{
  {
    MR_bool mercury__string__succeeded;
    MR_String mercury__string__Str0_11;

    mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__CharList_2, &mercury__string__Str0_11);
    if (mercury__string__succeeded)
      *mercury__string__Str_1 = mercury__string__Str0_11;
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_char_list\'/2", (MR_String) "null character in list");
        return;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string__semidet_from_char_list_2_p_0(
  MR_Word mercury__string__CharList_1,
  MR_String * mercury__string__Str_2)
{
  {
    MR_bool mercury__string__succeeded;

{
#define MR_PROC_LABEL mercury__string__semidet_from_char_list_2_p_0

	MR_Word CharList;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	CharList =  mercury__string__CharList_1 ;
		{
{
    /* mode (uo, in) is det */
    MR_Word char_list_ptr;
    size_t size;
    MR_Char c;

    /*
    ** Loop to calculate list length + sizeof(MR_Word) in `size'
    ** using list in `char_list_ptr'.
    */
    size = 0;
    char_list_ptr = CharList;
    while (! MR_list_is_empty(char_list_ptr)) {
        c = (MR_Char) MR_list_head(char_list_ptr);
        if (MR_is_ascii(c)) {
            size++;
        } else {
            size += MR_utf8_width(c);
        }
        char_list_ptr = MR_list_tail(char_list_ptr);
    }

    /*
    ** Allocate heap space for string
    */
    MR_allocate_aligned_string_msg(Str, size, MR_ALLOC_ID);

    /*
    ** Loop to copy the characters from the char_list to the string.
    */
    SUCCESS_INDICATOR = MR_TRUE;
    size = 0;
    char_list_ptr = CharList;
    while (! MR_list_is_empty(char_list_ptr)) {
        c = (MR_Char) MR_list_head(char_list_ptr);
        /*
        ** It is an error to put a null character in a string
        ** (see the comments at the top of this file).
        */
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        if (MR_is_ascii(c)) {
            Str[size] = c;
            size++;
        } else {
            size += MR_utf8_encode(Str + size, c);
        }
        char_list_ptr = MR_list_tail(char_list_ptr);
    }

    Str[size] = '\0';
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
    return mercury__string__succeeded;
  }
}

void MR_CALL 
mercury__string__to_char_list_2_p_0(
  MR_String mercury__string__Str_1,
  MR_Word * mercury__string__CharList_2)
{
  {
{
#define MR_PROC_LABEL mercury__string__to_char_list_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_1 ;
		{
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}

		;}
#undef MR_PROC_LABEL
	 *mercury__string__CharList_2  = CharList;
}
  }
}

MR_Word MR_CALL 
mercury__string__to_char_list_1_f_0(
  MR_String mercury__string__S_3)
{
  {
    MR_Word mercury__string__Cs_4;

{
#define MR_PROC_LABEL mercury__string__to_char_list_1_f_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__S_3 ;
		{
{
    MR_Integer pos = strlen(Str);
    int c;

    CharList = MR_list_empty_msg(MR_ALLOC_ID);
    for (;;) {
        c = MR_utf8_prev_get(Str, &pos);
        if (c <= 0) {
            break;
        }
        CharList = MR_char_list_cons_msg((MR_UnsignedChar) c, CharList,
            MR_ALLOC_ID);
    }
}

		;}
#undef MR_PROC_LABEL
	 mercury__string__Cs_4  = CharList;
}
    return mercury__string__Cs_4;
  }
}

static MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0_10001(
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2)
{
  {
    MR_bool mercury__string__succeeded;

    mercury__string__succeeded = mercury__string____Unify____justified_column_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    return mercury__string__succeeded;
  }
}

static void MR_CALL 
mercury__string____Compare____justified_column_0_0_10001(
  MR_Box * mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box mercury__string__wrapper_arg_3)
{
  {
    MR_Word mercury__string__conv0_HeadVar__1_1;

    mercury__string____Compare____justified_column_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0_10001(
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2)
{
  {
    MR_bool mercury__string__succeeded;

    mercury__string__succeeded = mercury__string____Unify____justify_sense_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    return mercury__string__succeeded;
  }
}

static void MR_CALL 
mercury__string____Compare____justify_sense_0_0_10001(
  MR_Box * mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box mercury__string__wrapper_arg_3)
{
  {
    MR_Word mercury__string__conv0_HeadVar__1_1;

    mercury__string____Compare____justify_sense_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__string____Unify____line_0_0_10001(
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2)
{
  {
    MR_bool mercury__string__succeeded;

    mercury__string__succeeded = mercury__string____Unify____line_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    return mercury__string__succeeded;
  }
}

static void MR_CALL 
mercury__string____Compare____line_0_0_10001(
  MR_Box * mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box mercury__string__wrapper_arg_3)
{
  {
    MR_Word mercury__string__conv0_HeadVar__1_1;

    mercury__string____Compare____line_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0_10001(
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2)
{
  {
    MR_bool mercury__string__succeeded;

    mercury__string__succeeded = mercury__string____Unify____poly_type_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    return mercury__string__succeeded;
  }
}

static void MR_CALL 
mercury__string____Compare____poly_type_0_0_10001(
  MR_Box * mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box mercury__string__wrapper_arg_3)
{
  {
    MR_Word mercury__string__conv0_HeadVar__1_1;

    mercury__string____Compare____poly_type_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0_10001(
  MR_Box mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2)
{
  {
    MR_bool mercury__string__succeeded;

    mercury__string__succeeded = mercury__string____Unify____text_file_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    return mercury__string__succeeded;
  }
}

static void MR_CALL 
mercury__string____Compare____text_file_0_0_10001(
  MR_Box * mercury__string__wrapper_arg_1,
  MR_Box mercury__string__wrapper_arg_2,
  MR_Box mercury__string__wrapper_arg_3)
{
  {
    MR_Word mercury__string__conv0_HeadVar__1_1;

    mercury__string____Compare____text_file_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
  }
}

void mercury__string__init(void)
{
}

void mercury__string__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__string__string__type_ctor_info_justified_column_0);
	MR_register_type_ctor_info(&mercury__string__string__type_ctor_info_justify_sense_0);
	MR_register_type_ctor_info(&mercury__string__string__type_ctor_info_line_0);
	MR_register_type_ctor_info(&mercury__string__string__type_ctor_info_poly_type_0);
	MR_register_type_ctor_info(&mercury__string__string__type_ctor_info_text_file_0);
}

void mercury__string__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__string__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module string. */
