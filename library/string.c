/*
** Automatically generated from `string.m'
** by the Mercury compiler,
** version rotd-2018-09-05
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


// :- module string.
// :- implementation.

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
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
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
#include "uint64.mih"
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
  void * env_ptr_arg);

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_accumulator_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_accumulator_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_accumulator_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_accumulator_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_accumulator_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
mercury__string__map__ho12_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__string__map__ho11_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_52_93_95_48_4_p_in__list_0(
  MR_String Var_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_51_95_95_91_50_93_95_48_3_f_in__list_0(
  MR_String Var_36,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
mercury__string__map__ho14_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__string__foldl__ho9_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static MR_Word MR_CALL 
mercury__string__map_corresponding__ho13_3_f_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_56_95_95_91_51_93_95_48_2_f_in__list_0(
  MR_Char Var_12,
  MR_Integer Var_13,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0(
  MR_Char Var_12,
  MR_Integer Var_13,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word Var_20,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer I_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15);

static void MR_CALL 
mercury__string__foldr_between_2_6_p_4_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__string__foldr_between_2_6_p_3_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word Var_20,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer I_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15);

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word Var_20,
  MR_String String_8,
  MR_Integer I_9,
  MR_Integer End_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15);

static void MR_CALL 
mercury__string__foldl2_between_2_8_p_5_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__string__foldl2_between_2_8_p_4_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__string__foldl_between_2_6_p_4_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__string__foldl_between_2_6_p_3_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word Var_20,
  MR_String String_8,
  MR_Integer I_9,
  MR_Integer End_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15);

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_48_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_String Var_12,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
mercury__string__IntroducedFrom__func__word_wrap_loop__5037__1_2_f_0(
  MR_String WordSep_2,
  MR_String LambdaHeadVar__1_60);

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_49_95_95_91_49_44_32_51_93_95_48_6_p_0(
  MR_String Var_21,
  MR_String String_8,
  MR_Integer I_9,
  MR_Integer End_10,
  MR_Word STATE_VARIABLE_Acc_0_14,
  MR_Word * STATE_VARIABLE_Acc_15);

static void MR_CALL 
mercury__string__suffix_length_loop__ho35_4_p_0(
  MR_String S_6,
  MR_Integer I_7,
  MR_Integer * Index_8);

static void MR_CALL 
mercury__string__prefix_length_loop__ho34_4_p_0(
  MR_String S_6,
  MR_Integer I_7,
  MR_Integer * Index_8);

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_51_95_95_91_50_93_95_48_6_p_0(
  MR_Char Var_25,
  MR_String Str_8,
  MR_Integer CurPos_9,
  MR_Integer PastSegEnd_10,
  MR_Word STATE_VARIABLE_Segments_0_16,
  MR_Word * STATE_VARIABLE_Segments_17);

static void MR_CALL 
mercury__string__words_loop__ho38_4_p_0(
  MR_String String_6,
  MR_Integer WordStartPos_7,
  MR_Word * Words_8);

static void MR_CALL 
mercury__string__skip_to_word_end__ho47_4_p_0(
  MR_String String_6,
  MR_Integer CurPos_7,
  MR_Integer * PastWordEndPos_8);

static void MR_CALL 
mercury__string__skip_to_next_word_start__ho37_4_p_0(
  MR_String String_6,
  MR_Integer CurPos_7,
  MR_Integer * NextWordStartPos_8);

static MR_bool MR_CALL 
mercury__string__all_match_loop__ho32_3_p_0(
  MR_String String_5,
  MR_Integer Cur_6);

static void MR_CALL 
mercury__string__foldr_between_2__ho49_6_p_0(
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer I_10,
  MR_Word STATE_VARIABLE_Acc_0_14,
  MR_Word * STATE_VARIABLE_Acc_15);

static void MR_CALL 
mercury__string__foldr_between_2__ho50_6_p_0(
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer I_10,
  MR_Word STATE_VARIABLE_Acc_0_14,
  MR_Word * STATE_VARIABLE_Acc_15);

static MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string____Compare____justified_column_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string____Compare____justify_sense_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string____Unify____line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string____Compare____line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string____Compare____poly_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string____Compare____text_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__string_scalar_common_1[4][2];

static /* final */ const MR_Box mercury__string_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__string_scalar_common_3[17][4];

static /* final */ const MR_Box mercury__string_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__string_scalar_common_5[1][7];




static /* final */ const MR_Box mercury__string_scalar_common_1[4][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Char) 45)),
    ((MR_Box) ((MR_Unsigned) 0U))
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
    ((MR_Box) (&mercury__string_scalar_common_5[0])),
    ((MR_Box) (mercury__string__base_accumulator_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 10))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__string_scalar_common_5[0])),
    ((MR_Box) (mercury__string__base_accumulator_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 16))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__string_scalar_common_5[0])),
    ((MR_Box) (mercury__string__base_accumulator_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__string_scalar_common_5[0])),
    ((MR_Box) (mercury__string__base_accumulator_1_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__string_scalar_common_5[0])),
    ((MR_Box) (mercury__string__base_negative_accumulator_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 10))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__string_scalar_common_5[0])),
    ((MR_Box) (mercury__string__base_negative_accumulator_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 16))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__string_scalar_common_5[0])),
    ((MR_Box) (mercury__string__base_negative_accumulator_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__string_scalar_common_5[0])),
    ((MR_Box) (mercury__string__base_negative_accumulator_1_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__string_scalar_common_5[0])),
    ((MR_Box) (mercury__string__base_accumulator_underscore_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 10))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__string_scalar_common_5[0])),
    ((MR_Box) (mercury__string__base_accumulator_underscore_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 16))
  },
  /* row 11 */
  {
    ((MR_Box) (&mercury__string_scalar_common_5[0])),
    ((MR_Box) (mercury__string__base_accumulator_underscore_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 12 */
  {
    ((MR_Box) (&mercury__string_scalar_common_5[0])),
    ((MR_Box) (mercury__string__base_accumulator_underscore_1_f_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 13 */
  {
    ((MR_Box) (&mercury__string_scalar_common_5[0])),
    ((MR_Box) (mercury__string__base_negative_accumulator_underscore_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 10))
  },
  /* row 14 */
  {
    ((MR_Box) (&mercury__string_scalar_common_5[0])),
    ((MR_Box) (mercury__string__base_negative_accumulator_underscore_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 16))
  },
  /* row 15 */
  {
    ((MR_Box) (&mercury__string_scalar_common_5[0])),
    ((MR_Box) (mercury__string__base_negative_accumulator_underscore_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 8))
  },
  /* row 16 */
  {
    ((MR_Box) (&mercury__string_scalar_common_5[0])),
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

static /* final */ const MR_Box mercury__string_scalar_common_5[1][7] = {
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
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
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
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"

#line 5581 "string.m"
MR_bool 
ML_string_to_float(
  MR_String FloatString_1,
  MR_Float * FloatVal_2)
#line 5581 "string.m"
{
#line 5581 "string.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mercury__string__to_float_2_p_0((MR_String) FloatString_1, (MR_Float *) FloatVal_2);
	return ret_value;
}


static const MR_FA_TypeInfo_Struct1 mercury__string__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__string__list__ti_list_1builtin__type_ctor_info_string_0)
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
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__string__list__ti_list_1builtin__type_ctor_info_string_0)
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
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    mercury__string__string__du_stag_ordered_justified_column_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_justified_column_0_1,
    INT8_C(-1)
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
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
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
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
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
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
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
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
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
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0)
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
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    mercury__string__string__du_stag_ordered_poly_type_0_0,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_poly_type_0_1,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_poly_type_0_2,
    INT8_C(-1)
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_poly_type_0_3,
    INT8_C(-1)
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
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
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
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
      MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);
      MR_Integer V_7_12;

{
#define MR_PROC_LABEL mercury__string____Compare____text_file_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  ArgX1_4 ;
	S2 =  ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_12  = Res;
}
      succeeded = (V_7_12 < (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (V_7_12 == (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
      MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__string____Compare____poly_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_36 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_37 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_36 == CastY_37);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Float Var_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));

                  succeeded = (Var_43 < ArgY1_5);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_43 > ArgY1_5);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 2;
                    else
                      *HeadVar__1_1 = (MR_Integer) 0;
                  }
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Integer ArgY1_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  succeeded = (Var_44 < ArgY1_15);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_44 == ArgY1_15);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_45 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String ArgY1_25 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer V_7_60;

{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_45 ;
	S2 =  ArgY1_25 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_60  = Res;
}
                  succeeded = (V_7_60 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_60 == (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Char Var_42 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Char ArgY1_35 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer V_7_49;
                  MR_Integer V_8_50;

{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  Var_42 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 V_7_49  = Int;
}
{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  ArgY1_35 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 V_8_50  = Int;
}
                  succeeded = (V_7_49 < V_8_50);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_49 == V_8_50);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
            MR_Float ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_3 == ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Char ArgX1_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)));
            MR_Char ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_9 == ArgY1_10);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__string____Compare____line_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
      MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);
      MR_Integer V_7_12;

{
#define MR_PROC_LABEL mercury__string____Compare____line_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  ArgX1_4 ;
	S2 =  ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_12  = Res;
}
      succeeded = (V_7_12 < (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (V_7_12 == (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string____Unify____line_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
      MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__string____Compare____justify_sense_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

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
}

MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__string____Compare____justified_column_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&mercury__string_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_16)), ((MR_Box) (ArgY1_5)));
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__builtin__compare_3_p_0((MR_Word) (&mercury__string_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_11)));
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Word TypeInfo_9_9;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_9_9 = (MR_Word) (&mercury__string_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      }
    }
    else
    {
      MR_Word TypeInfo_10_10;
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        TypeInfo_10_10 = (MR_Word) (&mercury__string_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      }
    }
    return succeeded;
  }
}

MR_Integer MR_CALL 
mercury__string__max_precision_0_f_0(void)
{
  {
    MR_Integer HeadVar__1_1 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 15 + (MR_Unsigned) (MR_Integer) 2);

    return HeadVar__1_1;
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
  MR_Integer Prec_4,
  MR_Float Float_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_String String_6;
    MR_String Tmp_7;
    MR_String Var_8;
    MR_Word Var_9;
    MR_String Var_11;
    MR_String Var_12;
    MR_Word Var_14;
    MR_Integer Var_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__string__int_to_base_string_3_p_0(Prec_4, (MR_Integer) 10, &Var_12);
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  Var_12 ;
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
	 Var_11  = S3;
}
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "%#." ;
	S2 =  Var_11 ;
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
	 Var_8  = S3;
}
    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = MR_box_float(Float_5);
    }
    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_9, 0) = ((MR_Box) (Var_14));
      MR_hl_field(MR_mktag(1), Var_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__string__format__format_impl_3_p_0(Var_8, Var_9, &Tmp_7);
    Var_18 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 15 + (MR_Unsigned) (MR_Integer) 2);
    succeeded = (Prec_4 == Var_18);
    if (succeeded)
      String_6 = Tmp_7;
    else
    {
      MR_Float Var_19;

{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  Tmp_7 ;
		{
{
    // The %c checks for any erroneous characters appearing after the float;
    // if there are then sscanf() will return 2 rather than 1.
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        // MR_TRUE if sscanf succeeds, MR_FALSE otherwise.
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Var_19  = FloatVal;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (Float_5 == Var_19);
      if (succeeded)
        String_6 = Tmp_7;
      else
      {
        MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) Prec_4 + (MR_Unsigned) (MR_Integer) 1);
        MR_Integer next_value_of_Prec_4 = Var_16;

        // direct tailcall eliminated
        ;
        Prec_4 = next_value_of_Prec_4;
        continue;
      }
    }
    return String_6;
    break;
  }
}

MR_bool MR_CALL 
mercury__string__accumulate_negative_int_underscore_4_p_0(
  MR_Integer Base_5,
  MR_Char Char_6,
  MR_Integer N0_7,
  MR_Integer * N_8)
{
  {
    MR_bool succeeded;
    MR_Integer M_9;

    succeeded = mercury__char__base_digit_to_int_3_p_0(Base_5, Char_6, &M_9);
    if (succeeded)
    {
      MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) Base_5 * (MR_Unsigned) N0_7);

      *N_8 = (MR_Integer) ((MR_Unsigned) Var_10 - (MR_Unsigned) M_9);
      succeeded = (*N_8 <= N0_7);
    }
    else
    {
      succeeded = (Char_6 == (MR_Char) 95);
      if (succeeded)
      {
        *N_8 = N0_7;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__accumulate_int_underscore_4_p_0(
  MR_Integer Base_5,
  MR_Char Char_6,
  MR_Integer N0_7,
  MR_Integer * N_8)
{
  {
    MR_bool succeeded;
    MR_Integer M_9;

    succeeded = mercury__char__base_digit_to_int_3_p_0(Base_5, Char_6, &M_9);
    if (succeeded)
    {
      MR_Integer Var_10 = (MR_Integer) ((MR_Unsigned) Base_5 * (MR_Unsigned) N0_7);

      *N_8 = (MR_Integer) ((MR_Unsigned) Var_10 + (MR_Unsigned) M_9);
      succeeded = (N0_7 <= *N_8);
    }
    else
    {
      succeeded = (Char_6 == (MR_Char) 95);
      if (succeeded)
      {
        *N_8 = N0_7;
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__accumulate_negative_int_4_p_0(
  MR_Integer Base_5,
  MR_Char Char_6,
  MR_Integer N0_7,
  MR_Integer * N_8)
{
  {
    MR_bool succeeded;
    MR_Integer M_9;
    MR_Integer Var_10;

    succeeded = mercury__char__base_digit_to_int_3_p_0(Base_5, Char_6, &M_9);
    if (succeeded)
    {
      Var_10 = (MR_Integer) ((MR_Unsigned) Base_5 * (MR_Unsigned) N0_7);
      *N_8 = (MR_Integer) ((MR_Unsigned) Var_10 - (MR_Unsigned) M_9);
      succeeded = (*N_8 <= N0_7);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__accumulate_int_4_p_0(
  MR_Integer Base_5,
  MR_Char Char_6,
  MR_Integer N0_7,
  MR_Integer * N_8)
{
  {
    MR_bool succeeded;
    MR_Integer M_9;
    MR_Integer Var_10;

    succeeded = mercury__char__base_digit_to_int_3_p_0(Base_5, Char_6, &M_9);
    if (succeeded)
    {
      Var_10 = (MR_Integer) ((MR_Unsigned) Base_5 * (MR_Unsigned) N0_7);
      *N_8 = (MR_Integer) ((MR_Unsigned) Var_10 + (MR_Unsigned) M_9);
      succeeded = (N0_7 <= *N_8);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__string__max_str_length_3_p_0(
  MR_String Str_4,
  MR_Integer PrevMaxLen_5,
  MR_Integer * MaxLen_6)
{
  {
    MR_bool succeeded;
    MR_Integer Length_7;

    mercury__string__count_codepoints_2_p_0(Str_4, &Length_7);
    succeeded = (Length_7 > PrevMaxLen_5);
    if (succeeded)
      *MaxLen_6 = Length_7;
    else
      *MaxLen_6 = PrevMaxLen_5;
  }
}

MR_String MR_CALL 
mercury__string__lpad_3_f_0(
  MR_Char Chr_5,
  MR_Integer N_6,
  MR_String Str_7)
{
  {
    MR_bool succeeded;
    MR_String HeadVar__4_4;
    MR_Integer Length_16;

    mercury__string__count_codepoints_2_p_0(Str_7, &Length_16);
    succeeded = (Length_16 < N_6);
    if (succeeded)
    {
      MR_Integer Count_17 = (MR_Integer) ((MR_Unsigned) N_6 - (MR_Unsigned) Length_16);
      MR_String PadString_18;

      mercury__string__duplicate_char_3_p_0(Chr_5, Count_17, &PadString_18);
{
#define MR_PROC_LABEL mercury__string__lpad_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  PadString_18 ;
	S2 =  Str_7 ;
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
	 HeadVar__4_4  = S3;
}
    }
    else
      HeadVar__4_4 = Str_7;
    return HeadVar__4_4;
  }
}

MR_String MR_CALL 
mercury__string__rpad_3_f_0(
  MR_Char Chr_5,
  MR_Integer N_6,
  MR_String Str_7)
{
  {
    MR_bool succeeded;
    MR_String HeadVar__4_4;
    MR_Integer Length_16;

    mercury__string__count_codepoints_2_p_0(Str_7, &Length_16);
    succeeded = (Length_16 < N_6);
    if (succeeded)
    {
      MR_Integer Count_17 = (MR_Integer) ((MR_Unsigned) N_6 - (MR_Unsigned) Length_16);
      MR_String PadString_18;

      mercury__string__duplicate_char_3_p_0(Chr_5, Count_17, &PadString_18);
{
#define MR_PROC_LABEL mercury__string__rpad_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  Str_7 ;
	S2 =  PadString_18 ;
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
	 HeadVar__4_4  = S3;
}
    }
    else
      HeadVar__4_4 = Str_7;
    return HeadVar__4_4;
  }
}

MR_String MR_CALL 
mercury__string__join_rev_columns_3_f_0(
  MR_String Separator_5,
  MR_String Col1_6,
  MR_String Col2_7)
{
  {
    MR_String HeadVar__4_4;
    MR_String Var_8;

{
#define MR_PROC_LABEL mercury__string__join_rev_columns_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  Separator_5 ;
	S2 =  Col1_6 ;
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
	 Var_8  = S3;
}
{
#define MR_PROC_LABEL mercury__string__join_rev_columns_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  Col2_7 ;
	S2 =  Var_8 ;
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
	 HeadVar__4_4  = S3;
}
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__string__project_column_strings_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word Strings_2;
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Var_10)) == (MR_Integer) 0))
      Strings_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_10, (MR_Integer) 0))));
    else
      Strings_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 0))));
    return Strings_2;
  }
}

void MR_CALL 
mercury__string__char_list_to_lower_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Char X_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Xs_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Char Y_5;
      MR_Word Ys_6;
      MR_Char V_5_9;

      succeeded = mercury__char__lower_upper_2_p_1(&V_5_9, X_3);
      if (succeeded)
        Y_5 = V_5_9;
      else
        Y_5 = X_3;
      mercury__string__char_list_to_lower_2_p_0(Xs_4, &Ys_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Y_5));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Ys_6));
      }
    }
  }
}

void MR_CALL 
mercury__string__char_list_to_upper_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Char X_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Xs_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Char Y_5;
      MR_Word Ys_6;
      MR_Char V_5_9;

      succeeded = mercury__char__lower_upper_2_p_0(X_3, &V_5_9);
      if (succeeded)
        Y_5 = V_5_9;
      else
        Y_5 = X_3;
      mercury__string__char_list_to_upper_2_p_0(Xs_4, &Ys_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__2_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (Y_5));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Ys_6));
      }
    }
  }
}

MR_Word MR_CALL 
mercury__string__between_loop_3_f_0(
  MR_Integer I_5,
  MR_Integer End_6,
  MR_String Str_7)
{
  {
    MR_bool succeeded = (I_5 < End_6);
    MR_Word Chars_8;
    MR_Integer J_9;
    MR_Char C_10;

    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__between_loop_3_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  Str_7 ;
	Index =  I_5 ;
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
	 J_9  = NextIndex;
	 C_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_9 <= End_6);
    }
    if (succeeded)
    {
      MR_Word Cs_11;

      Cs_11 = mercury__string__between_loop_3_f_0(J_9, End_6, Str_7);
      {
        Chars_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Chars_8, 0) = ((MR_Box) (MR_Word) (C_10));
        MR_hl_field(MR_mktag(1), Chars_8, 1) = ((MR_Box) (Cs_11));
      }
    }
    else
      Chars_8 = (MR_Word) ((MR_Unsigned) 0U);
    return Chars_8;
  }
}

MR_String MR_CALL 
mercury__string__join_list_loop_2_f_0(
  MR_String Sep_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_String) "";
    else
    {
      MR_String H_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word T_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_8;
      MR_String Var_9;

      Var_9 = mercury__string__join_list_loop_2_f_0(Sep_1, T_7);
{
#define MR_PROC_LABEL mercury__string__join_list_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  H_6 ;
	S2 =  Var_9 ;
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
	 Var_8  = S3;
}
{
#define MR_PROC_LABEL mercury__string__join_list_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  Sep_1 ;
	S2 =  Var_8 ;
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
	 HeadVar__3_3  = S3;
}
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
mercury__string__mercury_append_3_p_3_1(
  void * env_ptr_arg)
{
  {
    struct mercury__string__mercury_append_3_p_3_env_0_s * env_ptr = (struct mercury__string__mercury_append_3_p_3_env_0_s *) (env_ptr_arg);

    {
      MR_String Str0_27;
      MR_String Str0_38;

      (env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded = mercury__string__semidet_from_char_list_2_p_0((env_ptr)->mercury__string__mercury_append_3_p_3_env_0__XList_7, &Str0_27);
      if ((env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded)
        *((env_ptr)->mercury__string__mercury_append_3_p_3_env_0__X_4) = Str0_27;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_char_list\'/2", (MR_String) "null character in list");
          return;
        }
      }
      (env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded = mercury__string__semidet_from_char_list_2_p_0((env_ptr)->mercury__string__mercury_append_3_p_3_env_0__YList_8, &Str0_38);
      if ((env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded)
        *((env_ptr)->mercury__string__mercury_append_3_p_3_env_0__Y_5) = Str0_38;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_char_list\'/2", (MR_String) "null character in list");
          return;
        }
      }
      ((env_ptr)->mercury__string__mercury_append_3_p_3_env_0__cont)((env_ptr)->mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__string__mercury_append_3_p_3(
  MR_String * X_4,
  MR_String * Y_5,
  MR_String Z_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__string__mercury_append_3_p_3_env_0_s env;

    (env).mercury__string__mercury_append_3_p_3_env_0__X_4 = X_4;
    (env).mercury__string__mercury_append_3_p_3_env_0__Y_5 = Y_5;
    (env).mercury__string__mercury_append_3_p_3_env_0__cont = cont;
    (env).mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Word ZList_9;

{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_3

	MR_String Str;
	MR_Word CharList;

	Str =  Z_6 ;
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
	 ZList_9  = CharList;
}
      mercury__list__append_3_p_4((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), &(env).mercury__string__mercury_append_3_p_3_env_0__XList_7, &(env).mercury__string__mercury_append_3_p_3_env_0__YList_8, ZList_9, mercury__string__mercury_append_3_p_3_1, &env);
    }
  }
}

void MR_CALL 
mercury__string__mercury_append_3_p_2(
  MR_String X_4,
  MR_String Y_5,
  MR_String * Z_6)
{
  {
    MR_bool succeeded;
    MR_Word XList_7;
    MR_Word YList_8;
    MR_Word ZList_9;
    MR_String Str0_35;

{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_2

	MR_String Str;
	MR_Word CharList;

	Str =  X_4 ;
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
	 XList_7  = CharList;
}
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_2

	MR_String Str;
	MR_Word CharList;

	Str =  Y_5 ;
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
	 YList_8  = CharList;
}
    mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), XList_7, YList_8, &ZList_9);
    succeeded = mercury__string__semidet_from_char_list_2_p_0(ZList_9, &Str0_35);
    if (succeeded)
      *Z_6 = Str0_35;
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
  MR_String X_4,
  MR_String * Y_5,
  MR_String Z_6)
{
  {
    MR_bool succeeded;
    MR_Word XList_7;
    MR_Word YList_8;
    MR_Word ZList_9;
    MR_String Str0_35;

{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  X_4 ;
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
	 XList_7  = CharList;
}
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  Z_6 ;
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
	 ZList_9  = CharList;
}
    succeeded = mercury__list__append_3_p_3((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), XList_7, &YList_8, ZList_9);
    if (succeeded)
    {
      succeeded = mercury__string__semidet_from_char_list_2_p_0(YList_8, &Str0_35);
      if (succeeded)
        *Y_5 = Str0_35;
      else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_char_list\'/2", (MR_String) "null character in list");
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__mercury_append_3_p_0(
  MR_String X_4,
  MR_String Y_5,
  MR_String Z_6)
{
  {
    MR_bool succeeded;
    MR_Word XList_7;
    MR_Word YList_8;
    MR_Word ZList_9;

{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  X_4 ;
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
	 XList_7  = CharList;
}
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  Y_5 ;
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
	 YList_8  = CharList;
}
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  Z_6 ;
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
	 ZList_9  = CharList;
}
    succeeded = mercury__list__append_3_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), XList_7, YList_8, ZList_9);
    return succeeded;
  }
}

void MR_CALL 
mercury__string__append_ooi_3_p_0(
  MR_String * S1_4,
  MR_String * S2_5,
  MR_String S3_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer S3Len_7;

{
#define MR_PROC_LABEL mercury__string__append_ooi_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  S3_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 S3Len_7  = Length;
}
    mercury__string__append_ooi_2_5_p_0((MR_Integer) 0, S3Len_7, S1_4, S2_5, S3_6, cont, cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__append_iio_3_p_0(
  MR_String S1_1,
  MR_String S2_2,
  MR_String * S3_3)
{
  {
{
#define MR_PROC_LABEL mercury__string__append_iio_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  S1_1 ;
	S2 =  S2_2 ;
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
	 *S3_3  = S3;
}
  }
}

MR_bool MR_CALL 
mercury__string__append_ioi_3_p_0(
  MR_String S1_1,
  MR_String * S2_2,
  MR_String S3_3)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__append_ioi_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  S1_1 ;
	S3 =  S3_3 ;
		{
{
    size_t len_1, len_2, len_3;

    len_1 = strlen(S1);
    if (strncmp(S1, S3, len_1) != 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        len_3 = strlen(S3);
        len_2 = len_3 - len_1;
        // We need to make a copy to ensure that the pointer is word-aligned.
        MR_allocate_aligned_string_msg(S2, len_2, MR_ALLOC_ID);
        strcpy(S2, S3 + len_1);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *S2_2  = S2;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__append_iii_3_p_0(
  MR_String S1_1,
  MR_String S2_2,
  MR_String S3_3)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__append_iii_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  S1_1 ;
	S2 =  S2_2 ;
	S3 =  S3_3 ;
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
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__sub_string_search_start_loop_6_p_0(
  MR_String String_7,
  MR_String SubString_8,
  MR_Integer I_9,
  MR_Integer Len_10,
  MR_Integer SubLen_11,
  MR_Integer * Index_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_9 < Len_10);
    MR_Integer Var_13;
    MR_String Var_17;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_13 = (MR_Integer) ((MR_Unsigned) I_9 + (MR_Unsigned) SubLen_11);
      mercury__string__between_4_p_0(String_7, I_9, Var_13, &Var_17);
      succeeded = (strcmp(SubString_8, Var_17) == 0);
      if (succeeded)
      {
        *Index_12 = I_9;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) I_9 + (MR_Unsigned) (MR_Integer) 1);
        MR_Integer next_value_of_I_9 = Var_14;

        // direct tailcall eliminated
        ;
        I_9 = next_value_of_I_9;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__string__contains_char_3_p_0(
  MR_String Str_4,
  MR_Char Char_5,
  MR_Integer I_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer J_7;
    MR_Char IndexChar_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__contains_char_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  Str_4 ;
	Index =  I_6 ;
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
	 J_7  = NextIndex;
	 IndexChar_8  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (IndexChar_8 == Char_5);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Integer next_value_of_I_6 = J_7;

        // direct tailcall eliminated
        ;
        I_6 = next_value_of_I_6;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_Integer MR_CALL 
mercury__string__keep_30_bits_1_f_0(
  MR_Integer N_3)
{
  {
    MR_Integer HeadVar__2_2;
    MR_Integer Var_4;
    MR_Integer Var_5 = ((MR_Integer) 1 << (MR_Integer) 30);

    Var_4 = (MR_Integer) ((MR_Unsigned) Var_5 - (MR_Unsigned) (MR_Integer) 1);
    HeadVar__2_2 = (N_3 & Var_4);
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__string__codepoint_offset_loop_5_p_0(
  MR_String String_6,
  MR_Integer Offset_7,
  MR_Integer Length_8,
  MR_Integer N_9,
  MR_Integer * Index_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Offset_7 < Length_8);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      succeeded = (N_9 == (MR_Integer) 0);
      if (succeeded)
      {
        *Index_10 = Offset_7;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer NextOffset_11;
        MR_Integer Var_13;
        MR_Integer Var_14;
        MR_Char Var_12;
        MR_Integer next_value_of_Offset_7;
        MR_Integer next_value_of_N_9;

{
#define MR_PROC_LABEL mercury__string__codepoint_offset_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_6 ;
	Index =  Offset_7 ;
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
	 NextOffset_11  = NextIndex;
	 Var_12  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
          Var_14 = (MR_Integer) 1;
          Var_13 = (MR_Integer) ((MR_Unsigned) N_9 - (MR_Unsigned) Var_14);
          // direct tailcall eliminated
          ;
          next_value_of_Offset_7 = NextOffset_11;
          next_value_of_N_9 = Var_13;
          Offset_7 = next_value_of_Offset_7;
          N_9 = next_value_of_N_9;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__string__count_utf8_code_units_2_3_p_0(
  MR_Char Char_4,
  MR_Integer STATE_VARIABLE_Length_0_8,
  MR_Integer * STATE_VARIABLE_Length_9)
{
  {
    MR_bool succeeded;
    MR_Integer CharInt_6;

{
#define MR_PROC_LABEL mercury__string__count_utf8_code_units_2_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  Char_4 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 CharInt_6  = Int;
}
    succeeded = (CharInt_6 <= (MR_Integer) 127);
    if (succeeded)
    {
      *STATE_VARIABLE_Length_9 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Length_0_8 + (MR_Unsigned) (MR_Integer) 1);
    }
    else
    {
      MR_Word UTF8_7;

      succeeded = mercury__char__to_utf8_2_p_0(Char_4, &UTF8_7);
      if (succeeded)
      {
        MR_Integer Var_14;

        mercury__list__length_acc_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), UTF8_7, (MR_Integer) 0, &Var_14);
        *STATE_VARIABLE_Length_9 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Length_0_8 + (MR_Unsigned) Var_14);
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
  MR_String String_5,
  MR_Integer I_6,
  MR_Integer Count0_7,
  MR_Integer * Count_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer J_9;
    MR_Char Var_10;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__count_codepoints_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_5 ;
	Index =  I_6 ;
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
	 J_9  = NextIndex;
	 Var_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) Count0_7 + (MR_Unsigned) (MR_Integer) 1);
      MR_Integer next_value_of_I_6 = J_9;
      MR_Integer next_value_of_Count0_7 = Var_11;

      // direct tailcall eliminated
      ;
      I_6 = next_value_of_I_6;
      Count0_7 = next_value_of_Count0_7;
      continue;
    }
    else
      *Count_8 = Count0_7;
    break;
  }
}

void MR_CALL 
mercury__string__unsafe_set_char_non_null_4_p_0(
  MR_Char Ch_1,
  MR_Integer Index_2,
  MR_String Str0_3,
  MR_String * Str_4)
{
  {
{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_non_null_4_p_0

	MR_Char Ch;
	MR_Integer Index;
	MR_String Str0;
	MR_String Str;

	Ch =  Ch_1 ;
	Index =  Index_2 ;
	Str0 =  Str0_3 ;
		{

    size_t len = strlen(Str0);
    if (MR_is_ascii(Str0[Index]) && MR_is_ascii(Ch)) {
        // Fast path.
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
	 *Str_4  = Str;
}
  }
}

MR_bool MR_CALL 
mercury__string__set_char_non_null_4_p_0(
  MR_Char Ch_1,
  MR_Integer Index_2,
  MR_String Str0_3,
  MR_String * Str_4)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__set_char_non_null_4_p_0

	MR_Char Ch;
	MR_Integer Index;
	MR_String Str0;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Ch =  Ch_1 ;
	Index =  Index_2 ;
	Str0 =  Str0_3 ;
		{

    size_t len = strlen(Str0);
    if ((MR_Unsigned) Index >= len) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else if (MR_is_ascii(Str0[Index]) && MR_is_ascii(Ch)) {
        // Fast path.
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
	 *Str_4  = Str;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__index_check_2_p_0(
  MR_Integer Index_1,
  MR_Integer Length_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__index_check_2_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  Index_1 ;
	Length =  Length_2 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__unsafe_index_2_3_p_0(
  MR_String Str_1,
  MR_Integer Index_2,
  MR_Char * Ch_3)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__unsafe_index_2_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  Str_1 ;
	Index =  Index_2 ;
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
	 *Ch_3  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__utf8_is_trail_byte_1_p_0(
  MR_Integer C_2)
{
  {
    MR_bool succeeded;
    MR_Integer Var_3 = (C_2 & (MR_Integer) 192);

    succeeded = (Var_3 == (MR_Integer) 128);
    return succeeded;
  }
}

void MR_CALL 
mercury__string__to_char_list_forward_2_p_0(
  MR_String Str_1,
  MR_Word * CharList_2)
{
  {
{
#define MR_PROC_LABEL mercury__string__to_char_list_forward_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  Str_1 ;
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
	 *CharList_2  = CharList;
}
  }
}

MR_bool MR_CALL 
mercury__string__internal_encoding_is_utf8_0_p_0(void)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__internal_encoding_is_utf8_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__base_string_to_int_underscore_3_p_0(
  MR_Integer Base_4,
  MR_String String_5,
  MR_Integer * Int_6)
{
  {
    MR_bool succeeded;
    MR_Char Char_7;
    MR_Integer End_8;
    MR_Integer Len_27;
    MR_Char CharPrime_39;

{
#define MR_PROC_LABEL mercury__string__base_string_to_int_underscore_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Len_27  = Length;
}
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_underscore_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  Len_27 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_underscore_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_5 ;
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
	 CharPrime_39  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Char_7 = CharPrime_39;
      else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.unsafe_index\'/3", (MR_String) "illegal sequence");
      }
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_underscore_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 End_8  = Length;
}
      succeeded = (Char_7 == (MR_Char) 45);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_21_21;
        MR_Word Var_11;
        MR_Integer Var_12;
        MR_Integer Var_13;
        MR_Box conv0_Int_6;

        succeeded = (End_8 > (MR_Integer) 1);
        if (succeeded)
        {
          Var_11 = mercury__string__base_negative_accumulator_underscore_1_f_0(Base_4);
          Var_12 = (MR_Integer) 1;
          Var_13 = (MR_Integer) 0;
          TypeCtorInfo_21_21 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
          succeeded = mercury__string__foldl_between_6_p_2(TypeCtorInfo_21_21, Var_11, String_5, Var_12, End_8, ((MR_Box) (Var_13)), &conv0_Int_6);
          if (succeeded)
          {
            *Int_6 = ((MR_Integer) (conv0_Int_6));
            succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        succeeded = (Char_7 == (MR_Char) 43);
        if (succeeded)
        {
          MR_Word TypeCtorInfo_22_22;
          MR_Word Var_15;
          MR_Integer Var_16;
          MR_Integer Var_17;
          MR_Box conv1_Int_6;

          succeeded = (End_8 > (MR_Integer) 1);
          if (succeeded)
          {
            Var_15 = mercury__string__base_accumulator_underscore_1_f_0(Base_4);
            Var_16 = (MR_Integer) 1;
            Var_17 = (MR_Integer) 0;
            TypeCtorInfo_22_22 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
            succeeded = mercury__string__foldl_between_6_p_2(TypeCtorInfo_22_22, Var_15, String_5, Var_16, End_8, ((MR_Box) (Var_17)), &conv1_Int_6);
            if (succeeded)
            {
              *Int_6 = ((MR_Integer) (conv1_Int_6));
              succeeded = MR_TRUE;
            }
          }
        }
        else
        {
          MR_Word Var_18;
          MR_Box conv2_Int_6;

          Var_18 = mercury__string__base_accumulator_underscore_1_f_0(Base_4);
          succeeded = mercury__string__foldl_between_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_18, String_5, (MR_Integer) 0, End_8, ((MR_Box) ((MR_Integer) 0)), &conv2_Int_6);
          if (succeeded)
          {
            *Int_6 = ((MR_Integer) (conv2_Int_6));
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv4_N_8;

    succeeded = mercury__string__accumulate_negative_int_underscore_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv4_N_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv4_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv3_N_8;

    succeeded = mercury__string__accumulate_negative_int_underscore_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv3_N_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv3_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv2_N_8;

    succeeded = mercury__string__accumulate_negative_int_underscore_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv2_N_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv2_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv1_N_8;

    succeeded = mercury__string__accumulate_negative_int_underscore_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv1_N_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv1_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv0_N_8;

    succeeded = mercury__string__accumulate_negative_int_underscore_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv0_N_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__string__base_negative_accumulator_underscore_1_f_0(
  MR_Integer Base_3)
{
  {
    MR_bool succeeded = (Base_3 == (MR_Integer) 10);
    MR_Word Pred_4;

    if (succeeded)
      Pred_4 = (MR_Word) (&mercury__string_scalar_common_3[13]);
    else
    {
      succeeded = (Base_3 == (MR_Integer) 16);
      if (succeeded)
        Pred_4 = (MR_Word) (&mercury__string_scalar_common_3[14]);
      else
      {
        succeeded = (Base_3 == (MR_Integer) 8);
        if (succeeded)
          Pred_4 = (MR_Word) (&mercury__string_scalar_common_3[15]);
        else
        {
          succeeded = (Base_3 == (MR_Integer) 2);
          if (succeeded)
            Pred_4 = (MR_Word) (&mercury__string_scalar_common_3[16]);
          else
            {
              Pred_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Pred_4, 1) = ((MR_Box) (mercury__string__base_negative_accumulator_underscore_1_f_0_5));
              MR_hl_field(MR_mktag(0), Pred_4, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Pred_4, 3) = ((MR_Box) (Base_3));
            }
        }
      }
    }
    return Pred_4;
  }
}

static MR_bool MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv4_N_8;

    succeeded = mercury__string__accumulate_int_underscore_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv4_N_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv4_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv3_N_8;

    succeeded = mercury__string__accumulate_int_underscore_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv3_N_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv3_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv2_N_8;

    succeeded = mercury__string__accumulate_int_underscore_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv2_N_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv2_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv1_N_8;

    succeeded = mercury__string__accumulate_int_underscore_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv1_N_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv1_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv0_N_8;

    succeeded = mercury__string__accumulate_int_underscore_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv0_N_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__string__base_accumulator_underscore_1_f_0(
  MR_Integer Base_3)
{
  {
    MR_bool succeeded = (Base_3 == (MR_Integer) 10);
    MR_Word Pred_4;

    if (succeeded)
      Pred_4 = (MR_Word) (&mercury__string_scalar_common_3[9]);
    else
    {
      succeeded = (Base_3 == (MR_Integer) 16);
      if (succeeded)
        Pred_4 = (MR_Word) (&mercury__string_scalar_common_3[10]);
      else
      {
        succeeded = (Base_3 == (MR_Integer) 8);
        if (succeeded)
          Pred_4 = (MR_Word) (&mercury__string_scalar_common_3[11]);
        else
        {
          succeeded = (Base_3 == (MR_Integer) 2);
          if (succeeded)
            Pred_4 = (MR_Word) (&mercury__string_scalar_common_3[12]);
          else
            {
              Pred_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Pred_4, 1) = ((MR_Box) (mercury__string__base_accumulator_underscore_1_f_0_5));
              MR_hl_field(MR_mktag(0), Pred_4, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Pred_4, 3) = ((MR_Box) (Base_3));
            }
        }
      }
    }
    return Pred_4;
  }
}

void MR_CALL 
mercury__string__format_3_p_0(
  MR_String FormatString_4,
  MR_Word PolyList_5,
  MR_String * String_6)
{
  mercury__string__format__format_impl_3_p_0(FormatString_4, PolyList_5, String_6);
}

MR_String MR_CALL 
mercury__string__format_2_f_0(
  MR_String S1_4,
  MR_Word PT_5)
{
  {
    MR_String S2_6;

    mercury__string__format__format_impl_3_p_0(S1_4, PT_5, &S2_6);
    return S2_6;
  }
}

void MR_CALL 
mercury__string__string_ops_noncanon_4_p_3(
  MR_Word TypeInfo_for_T_9,
  MR_Word NonCanon_5,
  MR_Box X_7,
  MR_String * String_8)
{
  {
    MR_Word V_9_15;
    MR_Word V_11_16;
    MR_Integer V_10_23;
    MR_Integer V_13_24;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 12))));
    MR_Box conv1_V_13_24;

    conv1_V_13_24 = func_0(((MR_Box) ((MR_Word) (&mercury__string_scalar_common_1[1]))), ((MR_Box) ((MR_Integer) 0)));
    V_13_24 = ((MR_Integer) (conv1_V_13_24));
    V_10_23 = (MR_Integer) ((MR_Unsigned) V_13_24 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_for_T_9, NonCanon_5, V_10_23, X_7, (MR_Word) ((MR_Unsigned) 0U), &V_9_15);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), V_9_15, &V_11_16);
    *String_8 = mercury__string__append_list_1_f_0(V_11_16);
  }
}

void MR_CALL 
mercury__string__string_ops_noncanon_4_p_2(
  MR_Word TypeInfo_for_T_9,
  MR_Word NonCanon_5,
  MR_Box X_7,
  MR_String * String_8)
{
  {
    MR_Word V_9_15;
    MR_Word V_11_16;
    MR_Integer V_10_23;
    MR_Integer V_13_24;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 12))));
    MR_Box conv1_V_13_24;

    conv1_V_13_24 = func_0(((MR_Box) ((MR_Word) (&mercury__string_scalar_common_1[1]))), ((MR_Box) ((MR_Integer) 0)));
    V_13_24 = ((MR_Integer) (conv1_V_13_24));
    V_10_23 = (MR_Integer) ((MR_Unsigned) V_13_24 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_for_T_9, NonCanon_5, V_10_23, X_7, (MR_Word) ((MR_Unsigned) 0U), &V_9_15);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), V_9_15, &V_11_16);
    *String_8 = mercury__string__append_list_1_f_0(V_11_16);
  }
}

void MR_CALL 
mercury__string__string_ops_noncanon_4_p_1(
  MR_Word TypeInfo_for_T_9,
  MR_Word NonCanon_5,
  MR_Box X_7,
  MR_String * String_8)
{
  {
    MR_Word V_9_15;
    MR_Word V_11_16;
    MR_Integer V_10_23;
    MR_Integer V_13_24;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 12))));
    MR_Box conv1_V_13_24;

    conv1_V_13_24 = func_0(((MR_Box) ((MR_Word) (&mercury__string_scalar_common_1[1]))), ((MR_Box) ((MR_Integer) 0)));
    V_13_24 = ((MR_Integer) (conv1_V_13_24));
    V_10_23 = (MR_Integer) ((MR_Unsigned) V_13_24 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_T_9, NonCanon_5, V_10_23, X_7, (MR_Word) ((MR_Unsigned) 0U), &V_9_15);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), V_9_15, &V_11_16);
    *String_8 = mercury__string__append_list_1_f_0(V_11_16);
  }
}

void MR_CALL 
mercury__string__string_ops_noncanon_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word NonCanon_5,
  MR_Box X_7,
  MR_String * String_8)
{
  {
    MR_Word V_9_15;
    MR_Word V_11_16;
    MR_Integer V_10_23;
    MR_Integer V_13_24;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 12))));
    MR_Box conv1_V_13_24;

    conv1_V_13_24 = func_0(((MR_Box) ((MR_Word) (&mercury__string_scalar_common_1[1]))), ((MR_Box) ((MR_Integer) 0)));
    V_13_24 = ((MR_Integer) (conv1_V_13_24));
    V_10_23 = (MR_Integer) ((MR_Unsigned) V_13_24 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_for_T_9, NonCanon_5, V_10_23, X_7, (MR_Word) ((MR_Unsigned) 0U), &V_9_15);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), V_9_15, &V_11_16);
    *String_8 = mercury__string__append_list_1_f_0(V_11_16);
  }
}

MR_String MR_CALL 
mercury__string__string_ops_2_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box X_5)
{
  {
    MR_String HeadVar__3_3;
    MR_Word V_9_16;
    MR_Word V_11_17;
    MR_Integer V_10_24;
    MR_Integer V_13_25;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 12))));
    MR_Box conv1_V_13_25;

    conv1_V_13_25 = func_0(((MR_Box) ((MR_Word) (&mercury__string_scalar_common_1[1]))), ((MR_Box) ((MR_Integer) 0)));
    V_13_25 = ((MR_Integer) (conv1_V_13_25));
    V_10_24 = (MR_Integer) ((MR_Unsigned) V_13_25 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_T_6, (MR_Integer) 1, V_10_24, X_5, (MR_Word) ((MR_Unsigned) 0U), &V_9_16);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), V_9_16, &V_11_17);
    HeadVar__3_3 = mercury__string__append_list_1_f_0(V_11_17);
    return HeadVar__3_3;
  }
}

MR_String MR_CALL 
mercury__string__string_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Box X_3)
{
  {
    MR_String HeadVar__2_2;
    MR_Word V_9_14;
    MR_Word V_11_15;
    MR_Integer V_10_22;
    MR_Integer V_13_23;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
    MR_Box conv1_V_13_23;

    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), (MR_Word) (&mercury__string_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 12))));
    conv1_V_13_23 = func_0(((MR_Box) ((MR_Word) (&mercury__string_scalar_common_1[1]))), ((MR_Box) ((MR_Integer) 0)));
    V_13_23 = ((MR_Integer) (conv1_V_13_23));
    V_10_22 = (MR_Integer) ((MR_Unsigned) V_13_23 + (MR_Unsigned) (MR_Integer) 1);
    mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_T_4, (MR_Integer) 1, V_10_22, X_3, (MR_Word) ((MR_Unsigned) 0U), &V_9_14);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), V_9_14, &V_11_15);
    HeadVar__2_2 = mercury__string__append_list_1_f_0(V_11_15);
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
mercury__string__from_c_pointer_1_f_0(
  MR_Word P_3)
{
  {
    MR_String S_4;
    MR_Integer Int_7 = (MR_Integer) (P_3);
    MR_String Var_9;
    MR_String Var_10;

    mercury__string__int_to_base_string_3_p_0(Int_7, (MR_Integer) 16, &Var_10);
{
#define MR_PROC_LABEL mercury__string__from_c_pointer_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  Var_10 ;
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
	 Var_9  = S3;
}
{
#define MR_PROC_LABEL mercury__string__from_c_pointer_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  Var_9 ;
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
	 S_4  = S3;
}
    return S_4;
  }
}

void MR_CALL 
mercury__string__c_pointer_to_string_2_p_0(
  MR_Word C_Pointer_3,
  MR_String * Str_4)
{
  {
    MR_Integer Int_5 = (MR_Integer) (C_Pointer_3);
    MR_String Var_7;
    MR_String Var_8;

    mercury__string__int_to_base_string_3_p_0(Int_5, (MR_Integer) 16, &Var_8);
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_2_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  Var_8 ;
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
	 Var_7  = S3;
}
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_2_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  Var_7 ;
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
	 *Str_4  = S3;
}
  }
}

MR_String MR_CALL 
mercury__string__c_pointer_to_string_1_f_0(
  MR_Word P_3)
{
  {
    MR_String S_4;
    MR_Integer Int_7 = (MR_Integer) (P_3);
    MR_String Var_9;
    MR_String Var_10;

    mercury__string__int_to_base_string_3_p_0(Int_7, (MR_Integer) 16, &Var_10);
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  Var_10 ;
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
	 Var_9  = S3;
}
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  Var_9 ;
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
	 S_4  = S3;
}
    return S_4;
  }
}

MR_String MR_CALL 
mercury__string__from_float_1_f_0(
  MR_Float Float_3)
{
  {
    MR_String HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__string__from_float_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  Float_3 ;
		{
{
    // For efficiency reasons we duplicate the C implementation
    // of lowlevel_float_to_string.
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 HeadVar__2_2  = Str;
}
    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__string__float_to_string_2_p_0(
  MR_Float Flt_1,
  MR_String * Str_2)
{
  {
{
#define MR_PROC_LABEL mercury__string__float_to_string_2_p_0

	MR_Float Flt;
	MR_String Str;

	Flt =  Flt_1 ;
		{
{
    // For efficiency reasons we duplicate the C implementation
    // of lowlevel_float_to_string.
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 *Str_2  = Str;
}
  }
}

MR_String MR_CALL 
mercury__string__float_to_string_1_f_0(
  MR_Float Float_3)
{
  {
    MR_String S2_4;

{
#define MR_PROC_LABEL mercury__string__float_to_string_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  Float_3 ;
		{
{
    // For efficiency reasons we duplicate the C implementation
    // of lowlevel_float_to_string.
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}

		;}
#undef MR_PROC_LABEL
	 S2_4  = Str;
}
    return S2_4;
  }
}

MR_String MR_CALL 
mercury__string__uint64_to_string_1_f_0(
  uint64_t U64_1)
{
  {
    MR_String S_2;

{
#define MR_PROC_LABEL mercury__string__uint64_to_string_1_f_0

	uint64_t U64;
	MR_String S;

	U64 =  U64_1 ;
		{

    char buffer[21]; // 20 for digits, 1 for nul.
    sprintf(buffer, "%" PRIu64, U64);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 S_2  = S;
}
    return S_2;
  }
}

MR_String MR_CALL 
mercury__string__int64_to_string_1_f_0(
  int64_t I64_1)
{
  {
    MR_String S_2;

{
#define MR_PROC_LABEL mercury__string__int64_to_string_1_f_0

	int64_t I64;
	MR_String S;

	I64 =  I64_1 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" PRId64, I64);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 S_2  = S;
}
    return S_2;
  }
}

MR_String MR_CALL 
mercury__string__uint32_to_string_1_f_0(
  uint32_t U32_1)
{
  {
    MR_String S_2;

{
#define MR_PROC_LABEL mercury__string__uint32_to_string_1_f_0

	uint32_t U32;
	MR_String S;

	U32 =  U32_1 ;
		{

    char buffer[11]; // 10 for digits, 1 for nul.
    sprintf(buffer, "%" PRIu32, U32);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 S_2  = S;
}
    return S_2;
  }
}

MR_String MR_CALL 
mercury__string__int32_to_string_1_f_0(
  int32_t I32_1)
{
  {
    MR_String S_2;

{
#define MR_PROC_LABEL mercury__string__int32_to_string_1_f_0

	int32_t I32;
	MR_String S;

	I32 =  I32_1 ;
		{

    char buffer[12]; // 1 for sign, 10 for digits, 1 for nul.
    sprintf(buffer, "%" PRId32, I32);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 S_2  = S;
}
    return S_2;
  }
}

MR_String MR_CALL 
mercury__string__uint16_to_string_1_f_0(
  uint16_t U16_1)
{
  {
    MR_String S_2;

{
#define MR_PROC_LABEL mercury__string__uint16_to_string_1_f_0

	uint16_t U16;
	MR_String S;

	U16 =  U16_1 ;
		{

    char buffer[6]; // 5 for digits, 1 for nul.
    sprintf(buffer, "%" PRIu16, U16);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 S_2  = S;
}
    return S_2;
  }
}

MR_String MR_CALL 
mercury__string__int16_to_string_1_f_0(
  int16_t I16_1)
{
  {
    MR_String S_2;

{
#define MR_PROC_LABEL mercury__string__int16_to_string_1_f_0

	int16_t I16;
	MR_String S;

	I16 =  I16_1 ;
		{

    char buffer[7]; // 1 for sign, 5 for digits, 1 for nul.
    sprintf(buffer, "%" PRId16, I16);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 S_2  = S;
}
    return S_2;
  }
}

MR_String MR_CALL 
mercury__string__uint8_to_string_1_f_0(
  uint8_t U8_1)
{
  {
    MR_String S_2;

{
#define MR_PROC_LABEL mercury__string__uint8_to_string_1_f_0

	uint8_t U8;
	MR_String S;

	U8 =  U8_1 ;
		{

    char buffer[4]; // 3 for digits, 1 for nul.
    sprintf(buffer, "%" PRIu8, U8);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 S_2  = S;
}
    return S_2;
  }
}

MR_String MR_CALL 
mercury__string__int8_to_string_1_f_0(
  int8_t I8_1)
{
  {
    MR_String S_2;

{
#define MR_PROC_LABEL mercury__string__int8_to_string_1_f_0

	int8_t I8;
	MR_String S;

	I8 =  I8_1 ;
		{

    char buffer[5]; // 1 for sign, 3 for digits, 1 for nul.
    sprintf(buffer, "%" PRId8, I8);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	 S_2  = S;
}
    return S_2;
  }
}

MR_String MR_CALL 
mercury__string__uint_to_string_1_f_0(
  MR_Unsigned U_1)
{
  {
    MR_String Str_2;

{
#define MR_PROC_LABEL mercury__string__uint_to_string_1_f_0

	MR_Unsigned U;
	MR_String Str;

	U =  U_1 ;
		{

    char buffer[21];
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "u", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	 Str_2  = Str;
}
    return Str_2;
  }
}

MR_String MR_CALL 
mercury__string__int_to_string_thousands_1_f_0(
  MR_Integer N_3)
{
  {
    MR_String HeadVar__2_2;

    HeadVar__2_2 = mercury__string__int_to_base_string_group_4_f_0(N_3, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
mercury__string__int_to_base_string_group_4_f_0(
  MR_Integer N_6,
  MR_Integer Base_7,
  MR_Integer GroupLength_8,
  MR_String Sep_9)
{
  {
    MR_bool succeeded = ((MR_Integer) 2 <= Base_7);
    MR_String Str_10;
    MR_Integer Var_12;

    if (succeeded)
    {
      Var_12 = (MR_Integer) 36;
      succeeded = (Base_7 <= Var_12);
    }
    if (!(succeeded))
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140string.int_to_base_string_group\'/4", (MR_String) "invalid base");
    }
    mercury__string__int_to_base_string_group_1_5_p_0(N_6, Base_7, GroupLength_8, Sep_9, &Str_10);
    return Str_10;
  }
}

void MR_CALL 
mercury__string__int_to_base_string_group_1_5_p_0(
  MR_Integer N_6,
  MR_Integer Base_7,
  MR_Integer GroupLength_8,
  MR_String Sep_9,
  MR_String * Str_10)
{
  {
    MR_bool succeeded = (N_6 < (MR_Integer) 0);

    if (succeeded)
    {
      MR_String Str1_11;

      mercury__string__int_to_base_string_group_2_6_p_0(N_6, Base_7, (MR_Integer) 0, GroupLength_8, Sep_9, &Str1_11);
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_1_5_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "-" ;
	S2 =  Str1_11 ;
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
	 *Str_10  = S3;
}
    }
    else
    {
      MR_Integer N1_12 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 0 - (MR_Unsigned) N_6);

      mercury__string__int_to_base_string_group_2_6_p_0(N1_12, Base_7, (MR_Integer) 0, GroupLength_8, Sep_9, Str_10);
    }
  }
}

void MR_CALL 
mercury__string__int_to_base_string_group_2_6_p_0(
  MR_Integer NegN_7,
  MR_Integer Base_8,
  MR_Integer Curr_9,
  MR_Integer GroupLength_10,
  MR_String Sep_11,
  MR_String * Str_12)
{
  {
    MR_bool succeeded = (Curr_9 == GroupLength_10);
    MR_Integer Var_19;

    if (succeeded)
    {
      Var_19 = (MR_Integer) 0;
      succeeded = (GroupLength_10 > Var_19);
    }
    if (succeeded)
    {
      MR_String Str1_13;

      mercury__string__int_to_base_string_group_2_6_p_0(NegN_7, Base_8, (MR_Integer) 0, GroupLength_10, Sep_11, &Str1_13);
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  Str1_13 ;
	S2 =  Sep_11 ;
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
	 *Str_12  = S3;
}
    }
    else
    {
      MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 0 - (MR_Unsigned) Base_8);

      succeeded = (NegN_7 > Var_21);
      if (succeeded)
      {
        MR_Integer N_14 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 0 - (MR_Unsigned) NegN_7);
        MR_Char DigitChar_15;

        DigitChar_15 = mercury__char__det_base_int_to_digit_2_f_0(Base_8, N_14);
        mercury__string__char_to_string_2_p_0(DigitChar_15, Str_12);
      }
      else
      {
        MR_Integer NegN1_16;
        MR_Integer N10_17;
        MR_String DigitString_18;
        MR_Integer Var_22;
        MR_Integer Var_23;
        MR_String Str1_25;
        MR_Char DigitChar_26;

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
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          succeeded = (Base_8 == (MR_Integer) 0);
        if (succeeded)
        {
          {
            mercury__exception__throw_1_p_0((MR_Word) (&mercury__math__math__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int.\'//\': division by zero")))));
            return;
          }
        }
        else
          NegN1_16 = (NegN_7 / Base_8);
        Var_22 = (MR_Integer) ((MR_Unsigned) NegN1_16 * (MR_Unsigned) Base_8);
        N10_17 = (MR_Integer) ((MR_Unsigned) Var_22 - (MR_Unsigned) NegN_7);
        DigitChar_26 = mercury__char__det_base_int_to_digit_2_f_0(Base_8, N10_17);
        mercury__string__char_to_string_2_p_0(DigitChar_26, &DigitString_18);
        Var_23 = (MR_Integer) ((MR_Unsigned) Curr_9 + (MR_Unsigned) (MR_Integer) 1);
        mercury__string__int_to_base_string_group_2_6_p_0(NegN1_16, Base_8, Var_23, GroupLength_10, Sep_11, &Str1_25);
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  Str1_25 ;
	S2 =  DigitString_18 ;
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
	 *Str_12  = S3;
}
      }
    }
  }
}

MR_String MR_CALL 
mercury__string__int_to_base_string_2_f_0(
  MR_Integer N1_4,
  MR_Integer N2_5)
{
  {
    MR_String S2_6;

    mercury__string__int_to_base_string_3_p_0(N1_4, N2_5, &S2_6);
    return S2_6;
  }
}

MR_String MR_CALL 
mercury__string__from_int_1_f_0(
  MR_Integer N_3)
{
  {
    MR_String HeadVar__2_2;

    mercury__string__int_to_base_string_3_p_0(N_3, (MR_Integer) 10, &HeadVar__2_2);
    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__string__int_to_string_2_p_0(
  MR_Integer N_3,
  MR_String * Str_4)
{
  {
    mercury__string__int_to_base_string_3_p_0(N_3, (MR_Integer) 10, Str_4);
  }
}

MR_String MR_CALL 
mercury__string__int_to_string_1_f_0(
  MR_Integer N_3)
{
  {
    MR_String S1_4;

    mercury__string__int_to_base_string_3_p_0(N_3, (MR_Integer) 10, &S1_4);
    return S1_4;
  }
}

void MR_CALL 
mercury__string__int_to_base_string_3_p_0(
  MR_Integer N_4,
  MR_Integer Base_5,
  MR_String * Str_6)
{
  {
    MR_bool succeeded = ((MR_Integer) 2 <= Base_5);
    MR_Integer Var_8;

    if (succeeded)
    {
      Var_8 = (MR_Integer) 36;
      succeeded = (Base_5 <= Var_8);
    }
    if (!(succeeded))
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.int_to_base_string\'/3", (MR_String) "invalid base");
        return;
      }
    }
    mercury__string__int_to_base_string_1_3_p_0(N_4, Base_5, Str_6);
  }
}

void MR_CALL 
mercury__string__int_to_base_string_1_3_p_0(
  MR_Integer N_4,
  MR_Integer Base_5,
  MR_String * Str_6)
{
  {
    MR_bool succeeded = (N_4 < (MR_Integer) 0);
    MR_Word RevChars_7;
    MR_String Str0_17;

    if (succeeded)
    {
      mercury__string__int_to_base_string_2_4_p_0(N_4, Base_5, (MR_Word) (MR_mkword(MR_mktag(1), &mercury__string_scalar_common_1[3])), &RevChars_7);
    }
    else
    {
      MR_Integer NegN_8 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 0 - (MR_Unsigned) N_4);

      mercury__string__int_to_base_string_2_4_p_0(NegN_8, Base_5, (MR_Word) ((MR_Unsigned) 0U), &RevChars_7);
    }
    succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(RevChars_7, &Str0_17);
    if (succeeded)
      *Str_6 = Str0_17;
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
  MR_Integer NegN_5,
  MR_Integer Base_6,
  MR_Word STATE_VARIABLE_RevChars_0_12,
  MR_Word * STATE_VARIABLE_RevChars_13)
{
  {
    MR_bool succeeded;
    MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 0 - (MR_Unsigned) Base_6);

    succeeded = (NegN_5 > Var_14);
    if (succeeded)
    {
      MR_Integer N_8 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 0 - (MR_Unsigned) NegN_5);
      MR_Char DigitChar_9;

      DigitChar_9 = mercury__char__det_base_int_to_digit_2_f_0(Base_6, N_8);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_RevChars_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (DigitChar_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_12));
      }
    }
    else
    {
      MR_Integer NegN1_10;
      MR_Integer N10_11;
      MR_Integer Var_16;
      MR_Word STATE_VARIABLE_RevChars_17_17;
      MR_Char DigitChar_19;

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
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (Base_6 == (MR_Integer) 0);
      if (succeeded)
      {
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mercury__math__math__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int.\'//\': division by zero")))));
          return;
        }
      }
      else
        NegN1_10 = (NegN_5 / Base_6);
      Var_16 = (MR_Integer) ((MR_Unsigned) NegN1_10 * (MR_Unsigned) Base_6);
      N10_11 = (MR_Integer) ((MR_Unsigned) Var_16 - (MR_Unsigned) NegN_5);
      DigitChar_19 = mercury__char__det_base_int_to_digit_2_f_0(Base_6, N10_11);
      mercury__string__int_to_base_string_2_4_p_0(NegN1_10, Base_6, STATE_VARIABLE_RevChars_0_12, &STATE_VARIABLE_RevChars_17_17);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_RevChars_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (DigitChar_19));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_17_17));
      }
    }
  }
}

MR_String MR_CALL 
mercury__string__from_char_1_f_0(
  MR_Char Char_3)
{
  {
    MR_String HeadVar__2_2;

    mercury__string__char_to_string_2_p_0(Char_3, &HeadVar__2_2);
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__string__char_to_string_2_p_1(
  MR_Char * Char_3,
  MR_String String_4)
{
  {
    MR_bool succeeded;
    MR_Word TypeInfo_8_8;
    MR_Word Var_5;
    MR_Word Var_7;

{
#define MR_PROC_LABEL mercury__string__char_to_string_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  String_4 ;
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
	 Var_5  = CharList;
}
    succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 1);
    if (succeeded)
    {
      *Char_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_5, (MR_Integer) 0)));
      Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_5, (MR_Integer) 1))));
      TypeInfo_8_8 = (MR_Word) (&mercury__string_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_8_8, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_7)));
    }
    return succeeded;
  }
}

MR_String MR_CALL 
mercury__string__char_to_string_1_f_0(
  MR_Char C_3)
{
  {
    MR_String S1_4;

    mercury__string__char_to_string_2_p_0(C_3, &S1_4);
    return S1_4;
  }
}

MR_Float MR_CALL 
mercury__string__det_to_float_1_f_0(
  MR_String FloatString_3)
{
  {
    MR_bool succeeded;
    MR_Float Float_4;
    MR_Float FloatPrime_5;

{
#define MR_PROC_LABEL mercury__string__det_to_float_1_f_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  FloatString_3 ;
		{
{
    // The %c checks for any erroneous characters appearing after the float;
    // if there are then sscanf() will return 2 rather than 1.
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        // MR_TRUE if sscanf succeeds, MR_FALSE otherwise.
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 FloatPrime_5  = FloatVal;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Float_4 = FloatPrime_5;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140string.det_to_float\'/1", (MR_String) "conversion failed.");
    }
    return Float_4;
  }
}

MR_bool MR_CALL 
mercury__string__to_float_2_p_0(
  MR_String FloatString_1,
  MR_Float * FloatVal_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__to_float_2_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  FloatString_1 ;
		{
{
    // The %c checks for any erroneous characters appearing after the float;
    // if there are then sscanf() will return 2 rather than 1.
    char    tmpc;
    SUCCESS_INDICATOR =
        (!MR_isspace(FloatString[0])) &&
        (sscanf(FloatString, MR_FLT_FMT "%c", &FloatVal, &tmpc) == 1);
        // MR_TRUE if sscanf succeeds, MR_FALSE otherwise.
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *FloatVal_2  = FloatVal;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_Integer MR_CALL 
mercury__string__det_base_string_to_int_2_f_0(
  MR_Integer Base_4,
  MR_String S_5)
{
  {
    MR_bool succeeded;
    MR_Integer N_6;
    MR_Integer N0_7;

    succeeded = mercury__string__base_string_to_int_3_p_0(Base_4, S_5, &N0_7);
    if (succeeded)
      N_6 = N0_7;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140string.det_base_string_to_int\'/2", (MR_String) "conversion failed");
    }
    return N_6;
  }
}

MR_Integer MR_CALL 
mercury__string__det_to_int_1_f_0(
  MR_String S_3)
{
  {
    MR_bool succeeded;
    MR_Integer HeadVar__2_2;
    MR_Integer N0_8;

    succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, S_3, &N0_8);
    if (succeeded)
      HeadVar__2_2 = N0_8;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140string.det_base_string_to_int\'/2", (MR_String) "conversion failed");
    }
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__string__to_int_2_p_0(
  MR_String String_3,
  MR_Integer * Int_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, String_3, Int_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__base_string_to_int_3_p_0(
  MR_Integer Base_4,
  MR_String String_5,
  MR_Integer * Int_6)
{
  {
    MR_bool succeeded;
    MR_Char Char_7;
    MR_Integer End_8;
    MR_Integer Len_27;
    MR_Char CharPrime_39;

{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Len_27  = Length;
}
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  Len_27 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_5 ;
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
	 CharPrime_39  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Char_7 = CharPrime_39;
      else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.unsafe_index\'/3", (MR_String) "illegal sequence");
      }
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 End_8  = Length;
}
      succeeded = (Char_7 == (MR_Char) 45);
      if (succeeded)
      {
        MR_Word TypeCtorInfo_21_21;
        MR_Word Var_11;
        MR_Integer Var_12;
        MR_Integer Var_13;
        MR_Box conv0_Int_6;

        succeeded = (End_8 > (MR_Integer) 1);
        if (succeeded)
        {
          Var_11 = mercury__string__base_negative_accumulator_1_f_0(Base_4);
          Var_12 = (MR_Integer) 1;
          Var_13 = (MR_Integer) 0;
          TypeCtorInfo_21_21 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
          succeeded = mercury__string__foldl_between_6_p_2(TypeCtorInfo_21_21, Var_11, String_5, Var_12, End_8, ((MR_Box) (Var_13)), &conv0_Int_6);
          if (succeeded)
          {
            *Int_6 = ((MR_Integer) (conv0_Int_6));
            succeeded = MR_TRUE;
          }
        }
      }
      else
      {
        succeeded = (Char_7 == (MR_Char) 43);
        if (succeeded)
        {
          MR_Word TypeCtorInfo_22_22;
          MR_Word Var_15;
          MR_Integer Var_16;
          MR_Integer Var_17;
          MR_Box conv1_Int_6;

          succeeded = (End_8 > (MR_Integer) 1);
          if (succeeded)
          {
            Var_15 = mercury__string__base_accumulator_1_f_0(Base_4);
            Var_16 = (MR_Integer) 1;
            Var_17 = (MR_Integer) 0;
            TypeCtorInfo_22_22 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
            succeeded = mercury__string__foldl_between_6_p_2(TypeCtorInfo_22_22, Var_15, String_5, Var_16, End_8, ((MR_Box) (Var_17)), &conv1_Int_6);
            if (succeeded)
            {
              *Int_6 = ((MR_Integer) (conv1_Int_6));
              succeeded = MR_TRUE;
            }
          }
        }
        else
        {
          MR_Word Var_18;
          MR_Box conv2_Int_6;

          Var_18 = mercury__string__base_accumulator_1_f_0(Base_4);
          succeeded = mercury__string__foldl_between_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_18, String_5, (MR_Integer) 0, End_8, ((MR_Box) ((MR_Integer) 0)), &conv2_Int_6);
          if (succeeded)
          {
            *Int_6 = ((MR_Integer) (conv2_Int_6));
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv4_N_8;

    succeeded = mercury__string__accumulate_negative_int_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv4_N_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv4_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv3_N_8;

    succeeded = mercury__string__accumulate_negative_int_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv3_N_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv3_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv2_N_8;

    succeeded = mercury__string__accumulate_negative_int_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv2_N_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv2_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv1_N_8;

    succeeded = mercury__string__accumulate_negative_int_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv1_N_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv1_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_negative_accumulator_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv0_N_8;

    succeeded = mercury__string__accumulate_negative_int_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv0_N_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__string__base_negative_accumulator_1_f_0(
  MR_Integer Base_3)
{
  {
    MR_bool succeeded = (Base_3 == (MR_Integer) 10);
    MR_Word Pred_4;

    if (succeeded)
      Pred_4 = (MR_Word) (&mercury__string_scalar_common_3[5]);
    else
    {
      succeeded = (Base_3 == (MR_Integer) 16);
      if (succeeded)
        Pred_4 = (MR_Word) (&mercury__string_scalar_common_3[6]);
      else
      {
        succeeded = (Base_3 == (MR_Integer) 8);
        if (succeeded)
          Pred_4 = (MR_Word) (&mercury__string_scalar_common_3[7]);
        else
        {
          succeeded = (Base_3 == (MR_Integer) 2);
          if (succeeded)
            Pred_4 = (MR_Word) (&mercury__string_scalar_common_3[8]);
          else
            {
              Pred_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Pred_4, 1) = ((MR_Box) (mercury__string__base_negative_accumulator_1_f_0_5));
              MR_hl_field(MR_mktag(0), Pred_4, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Pred_4, 3) = ((MR_Box) (Base_3));
            }
        }
      }
    }
    return Pred_4;
  }
}

static MR_bool MR_CALL 
mercury__string__base_accumulator_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv4_N_8;

    succeeded = mercury__string__accumulate_int_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv4_N_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv4_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_accumulator_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv3_N_8;

    succeeded = mercury__string__accumulate_int_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv3_N_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv3_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_accumulator_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv2_N_8;

    succeeded = mercury__string__accumulate_int_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv2_N_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv2_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_accumulator_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv1_N_8;

    succeeded = mercury__string__accumulate_int_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv1_N_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv1_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__base_accumulator_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Integer conv0_N_8;

    succeeded = mercury__string__accumulate_int_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv0_N_8);
    if (succeeded)
    {
      *wrapper_arg_3 = ((MR_Box) (conv0_N_8));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__string__base_accumulator_1_f_0(
  MR_Integer Base_3)
{
  {
    MR_bool succeeded = (Base_3 == (MR_Integer) 10);
    MR_Word Pred_4;

    if (succeeded)
      Pred_4 = (MR_Word) (&mercury__string_scalar_common_3[1]);
    else
    {
      succeeded = (Base_3 == (MR_Integer) 16);
      if (succeeded)
        Pred_4 = (MR_Word) (&mercury__string_scalar_common_3[2]);
      else
      {
        succeeded = (Base_3 == (MR_Integer) 8);
        if (succeeded)
          Pred_4 = (MR_Word) (&mercury__string_scalar_common_3[3]);
        else
        {
          succeeded = (Base_3 == (MR_Integer) 2);
          if (succeeded)
            Pred_4 = (MR_Word) (&mercury__string_scalar_common_3[4]);
          else
            {
              Pred_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_5[0]));
              MR_hl_field(MR_mktag(0), Pred_4, 1) = ((MR_Box) (mercury__string__base_accumulator_1_f_0_5));
              MR_hl_field(MR_mktag(0), Pred_4, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Pred_4, 3) = ((MR_Box) (Base_3));
            }
        }
      }
    }
    return Pred_4;
  }
}

MR_Word MR_CALL 
mercury__string__string_to_doc_1_f_0(
  MR_String S_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_4;
    MR_Word Var_5;
    MR_String Var_6;

    Var_6 = mercury__term_io__quoted_string_1_f_0(S_3);
    {
      Var_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_5, 0) = ((MR_Box) (Var_6));
    }
    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_4, 0) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), Var_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
    }
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
mercury__string__format_table_max_2_f_0(
  MR_Word ColumnsLimits_4,
  MR_String Separator_5)
{
  {
    MR_String Table_6;
    MR_Word MaxWidthsSenses_7;
    MR_Word Columns_8;
    MR_Integer SepLen_9;
    MR_Word RevRows_10;
    MR_Word Rows_11;

    MaxWidthsSenses_7 = mercury__string__map__ho12_2_f_in__list_0(ColumnsLimits_4);
    Columns_8 = mercury__string__map__ho11_2_f_in__list_0(ColumnsLimits_4);
    mercury__string__count_codepoints_2_p_0(Separator_5, &SepLen_9);
    mercury__string__generate_rows_6_p_0(MaxWidthsSenses_7, Separator_5, SepLen_9, Columns_8, (MR_Word) ((MR_Unsigned) 0U), &RevRows_10);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevRows_10, &Rows_11);
    Table_6 = mercury__string__join_list_2_f_0((MR_String) "\n", Rows_11);
    return Table_6;
  }
}

static MR_Word MR_CALL 
mercury__string__map__ho12_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word V_6_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_8_8;
      MR_Word V_9_9;

      V_8_8 = mercury__string__find_max_length_with_limit_1_f_0(V_6_6);
      V_9_9 = mercury__string__map__ho12_2_f_in__list_0(V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__string__find_max_length_with_limit_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__2_2;
    MR_Word JustColumn_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word MaybeLimit_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Sense_5;
    MR_Integer MaxLength_6;
    MR_Word Strings_7;
    MR_Integer MaxLength0_8;

    if (((MR_tag((MR_Word) JustColumn_3)) == (MR_Integer) 0))
    {
      Strings_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), JustColumn_3, (MR_Integer) 0))));
      Sense_5 = (MR_Integer) 0;
    }
    else
    {
      Strings_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), JustColumn_3, (MR_Integer) 0))));
      Sense_5 = (MR_Integer) 1;
    }
    mercury__string__foldl__ho9_4_p_in__list_0(Strings_7, (MR_Integer) 0, &MaxLength0_8);
    if ((MaybeLimit_4 == (MR_Word) ((MR_Unsigned) 0U)))
      MaxLength_6 = MaxLength0_8;
    else
    {
      MR_Integer Limit_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeLimit_4, (MR_Integer) 0))));

      succeeded = (MaxLength0_8 > Limit_9);
      if (succeeded)
        MaxLength_6 = Limit_9;
      else
        MaxLength_6 = MaxLength0_8;
    }
    {
      HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 0) = ((MR_Box) (Sense_5));
      MR_hl_field(MR_mktag(0), HeadVar__2_2, 1) = ((MR_Box) (MaxLength_6));
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
mercury__string__map__ho11_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word V_6_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_8_8;
      MR_Word V_9_9;
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), V_6_6, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0))
        V_8_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_19, (MR_Integer) 0))));
      else
        V_8_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
      V_9_9 = mercury__string__map__ho11_2_f_in__list_0(V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__string__generate_rows_6_p_0(
  MR_Word MaxWidthsSenses_7,
  MR_String Separator_8,
  MR_Integer SepLen_9,
  MR_Word Columns0_10,
  MR_Word STATE_VARIABLE_RevRows_0_15,
  MR_Word * STATE_VARIABLE_RevRows_16)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = mercury__string__all_empty_1_p_0(Columns0_10);
    if (succeeded)
      *STATE_VARIABLE_RevRows_16 = STATE_VARIABLE_RevRows_0_15;
    else
    {
      MR_Word Line_12;
      MR_Word Columns_13;
      MR_String Row_14;
      MR_Word STATE_VARIABLE_RevRows_18_18;
      MR_Word next_value_of_Columns0_10;
      MR_Word next_value_of_STATE_VARIABLE_RevRows_0_15;

      mercury__string__get_next_line_3_p_0(Columns0_10, &Line_12, &Columns_13);
      mercury__string__pad_row_6_p_0(MaxWidthsSenses_7, Line_12, Separator_8, SepLen_9, (MR_Integer) 0, &Row_14);
      {
        STATE_VARIABLE_RevRows_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevRows_18_18, 0) = ((MR_Box) (Row_14));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevRows_18_18, 1) = ((MR_Box) (STATE_VARIABLE_RevRows_0_15));
      }
      // direct tailcall eliminated
      ;
      next_value_of_Columns0_10 = Columns_13;
      next_value_of_STATE_VARIABLE_RevRows_0_15 = STATE_VARIABLE_RevRows_18_18;
      Columns0_10 = next_value_of_Columns0_10;
      STATE_VARIABLE_RevRows_0_15 = next_value_of_STATE_VARIABLE_RevRows_0_15;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__string__pad_row_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_String Separator_3,
  MR_Integer SepLen_4,
  MR_Integer CurColumn_5,
  MR_String * HeadVar__6_6)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__6_6 = (MR_String) "";
      else
      {
        {
          mercury__require__error_2_p_0((MR_String) "predicate \140string.pad_row\'/6", (MR_String) "list length mismatch");
          return;
        }
      }
    else
    {
      MR_Word Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          mercury__require__error_2_p_0((MR_String) "predicate \140string.pad_row\'/6", (MR_String) "list length mismatch");
          return;
        }
      }
      else
      {
        MR_Word Justify_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 0))));
        MR_Integer MaxWidth_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_55, (MR_Integer) 1))));
        MR_String ColumnStr0_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word ColumnStrs0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Integer NextColumn_19;
        MR_String LineRest_20;
        MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) CurColumn_5 + (MR_Unsigned) MaxWidth_11);
        MR_Integer Var_28;

        NextColumn_19 = (MR_Integer) ((MR_Unsigned) Var_27 + (MR_Unsigned) SepLen_4);
        mercury__string__pad_row_6_p_0(Var_54, ColumnStrs0_14, Separator_3, SepLen_4, NextColumn_19, &LineRest_20);
        mercury__string__count_codepoints_2_p_0(ColumnStr0_13, &Var_28);
        succeeded = (Var_28 <= MaxWidth_11);
        if (succeeded)
        {
          MR_String ColumnStr_21;

          switch (Justify_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer Length_66;

                mercury__string__count_codepoints_2_p_0(ColumnStr0_13, &Length_66);
                succeeded = (Length_66 < MaxWidth_11);
                if (succeeded)
                {
                  MR_Integer Count_67 = (MR_Integer) ((MR_Unsigned) MaxWidth_11 - (MR_Unsigned) Length_66);
                  MR_String PadString_68;

                  mercury__string__duplicate_char_3_p_0((MR_Char) 32, Count_67, &PadString_68);
{
#define MR_PROC_LABEL mercury__string__pad_row_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  ColumnStr0_13 ;
	S2 =  PadString_68 ;
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
	 ColumnStr_21  = S3;
}
                }
                else
                  ColumnStr_21 = ColumnStr0_13;
              }
              break;
            case (MR_Integer) 1:
              {
                ColumnStr_21 = mercury__string__pad_left_3_f_0(ColumnStr0_13, (MR_Char) 32, MaxWidth_11);
              }
              break;
          }
          if ((Var_54 == (MR_Word) ((MR_Unsigned) 0U)))
            *HeadVar__6_6 = ColumnStr_21;
          else
          {
            MR_String Var_31;

            Var_31 = mercury__string__f_43_43_2_f_0(Separator_3, LineRest_20);
            *HeadVar__6_6 = mercury__string__f_43_43_2_f_0(ColumnStr_21, Var_31);
          }
        }
        else
        if ((Var_54 == (MR_Word) ((MR_Unsigned) 0U)))
          *HeadVar__6_6 = ColumnStr0_13;
        else
        {
          MR_String Var_32;
          MR_String Var_33;
          MR_String Var_35;
          MR_String Var_36;

          mercury__string__duplicate_char_3_p_0((MR_Char) 32, NextColumn_19, &Var_36);
          Var_35 = mercury__string__f_43_43_2_f_0(Var_36, LineRest_20);
          Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_35);
          Var_32 = mercury__string__f_43_43_2_f_0(Separator_3, Var_33);
          *HeadVar__6_6 = mercury__string__f_43_43_2_f_0(ColumnStr0_13, Var_32);
        }
      }
    }
  }
}

void MR_CALL 
mercury__string__get_next_line_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Column_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Columns_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_String ColumnTop_6;
    MR_Word ColumnTops_7;
    MR_Word ColumnRest_8;
    MR_Word ColumnRests_9;

    if ((Column_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__require__error_2_p_0((MR_String) "predicate \140string.get_next_line\'/3", (MR_String) "list length mismatch");
        return;
      }
    }
    else
    {
      ColumnTop_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), Column_4, (MR_Integer) 0))));
      ColumnRest_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Column_4, (MR_Integer) 1))));
    }
    mercury__string__get_next_line_3_p_0(Columns_5, &ColumnTops_7, &ColumnRests_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ColumnTop_6));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ColumnTops_7));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ColumnRest_8));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ColumnRests_9));
    }
  }
}

MR_bool MR_CALL 
mercury__string__all_empty_1_p_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    {
      MR_Word List_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Lists_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = (List_2 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Lists_3;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_String MR_CALL 
mercury__string__format_table_2_f_0(
  MR_Word Columns_4,
  MR_String Separator_5)
{
  {
    MR_String Table_6;
    MR_Word MaxWidths_7;
    MR_Word PaddedColumns_8;
    MR_Word Rows_11;

    MaxWidths_7 = mercury__string__map__ho14_2_f_in__list_0(Columns_4);
    PaddedColumns_8 = mercury__string__map_corresponding__ho13_3_f_in__list_0(MaxWidths_7, Columns_4);
    if ((PaddedColumns_8 == (MR_Word) ((MR_Unsigned) 0U)))
      Rows_11 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word PaddedHead_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PaddedColumns_8, (MR_Integer) 0))));
      MR_Word PaddedTail_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), PaddedColumns_8, (MR_Integer) 1))));

      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_52_93_95_48_4_p_in__list_0(Separator_5, PaddedTail_10, PaddedHead_9, &Rows_11);
    }
    Table_6 = mercury__string__join_list_2_f_0((MR_String) "\n", Rows_11);
    return Table_6;
  }
}

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_51_95_95_91_49_44_32_50_44_32_52_93_95_48_4_p_in__list_0(
  MR_String Var_20,
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
      MR_Word V_10_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_11_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_15_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      V_15_13 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_51_95_95_91_50_93_95_48_3_f_in__list_0(Var_20, V_10_9, HeadVar__3_3);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_15_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_51_95_95_91_50_93_95_48_3_f_in__list_0(
  MR_String Var_36,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word HeadVar__4_4;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
      }
    else
    {
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_35 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
      }
      else
      {
        MR_String V_21_23 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word V_22_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_String V_23_25;
        MR_Word V_24_26;
        MR_String Var_48;

{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_51_95_95_91_50_93_95_48_3_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  Var_36 ;
	S2 =  Var_35 ;
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
	 Var_48  = S3;
}
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_51_95_95_91_50_93_95_48_3_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  V_21_23 ;
	S2 =  Var_48 ;
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
	 V_23_25  = S3;
}
        V_24_26 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_51_95_95_91_50_93_95_48_3_f_in__list_0(Var_36, Var_34, V_22_24);
        {
          HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = ((MR_Box) (V_23_25));
          MR_hl_field(MR_mktag(1), HeadVar__4_4, 1) = ((MR_Box) (V_24_26));
        }
      }
    }
    return HeadVar__4_4;
  }
}

static MR_Word MR_CALL 
mercury__string__map__ho14_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word V_6_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer V_8_8;
      MR_Word V_9_9;

      V_8_8 = mercury__string__find_max_length_1_f_0(V_6_6);
      V_9_9 = mercury__string__map__ho14_2_f_in__list_0(V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

MR_Integer MR_CALL 
mercury__string__find_max_length_1_f_0(
  MR_Word JustColumn_3)
{
  {
    MR_Integer MaxLength_4;
    MR_Word Strings_5;

    if (((MR_tag((MR_Word) JustColumn_3)) == (MR_Integer) 0))
      Strings_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), JustColumn_3, (MR_Integer) 0))));
    else
      Strings_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), JustColumn_3, (MR_Integer) 0))));
    mercury__string__foldl__ho9_4_p_in__list_0(Strings_5, (MR_Integer) 0, &MaxLength_4);
    return MaxLength_4;
  }
}

static void MR_CALL 
mercury__string__foldl__ho9_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_String V_10_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_11_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer V_15_13;
      MR_Integer Length_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;

      mercury__string__count_codepoints_2_p_0(V_10_9, &Length_19);
      succeeded = (Length_19 > HeadVar__3_3);
      if (succeeded)
        V_15_13 = Length_19;
      else
        V_15_13 = HeadVar__3_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_15_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__string__map_corresponding__ho13_3_f_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word HeadVar__4_4;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
      }
    else
    {
      MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
      }
      else
      {
        MR_Word V_21_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word V_22_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word V_23_25;
        MR_Word V_24_26;

        V_23_25 = mercury__string__pad_column_2_f_0(Var_35, V_21_23);
        V_24_26 = mercury__string__map_corresponding__ho13_3_f_in__list_0(Var_34, V_22_24);
        {
          HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__4_4, 0) = ((MR_Box) (V_23_25));
          MR_hl_field(MR_mktag(1), HeadVar__4_4, 1) = ((MR_Box) (V_24_26));
        }
      }
    }
    return HeadVar__4_4;
  }
}

MR_Word MR_CALL 
mercury__string__pad_column_2_f_0(
  MR_Integer Width_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Word Strings_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      HeadVar__3_3 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_56_95_95_91_51_93_95_48_2_f_in__list_0((MR_Char) 32, Width_1, Strings_5);
    }
    else
    {
      MR_Word Strings_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      HeadVar__3_3 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0((MR_Char) 32, Width_1, Strings_9);
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_56_95_95_91_51_93_95_48_2_f_in__list_0(
  MR_Char Var_12,
  MR_Integer Var_13,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String V_6_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String V_8_8;
      MR_Word V_9_9;
      MR_Integer Length_25;

      mercury__string__count_codepoints_2_p_0(V_6_6, &Length_25);
      succeeded = (Length_25 < Var_13);
      if (succeeded)
      {
        MR_Integer Count_26 = (MR_Integer) ((MR_Unsigned) Var_13 - (MR_Unsigned) Length_25);
        MR_String PadString_27;

        mercury__string__duplicate_char_3_p_0(Var_12, Count_26, &PadString_27);
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_56_95_95_91_51_93_95_48_2_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  V_6_6 ;
	S2 =  PadString_27 ;
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
	 V_8_8  = S3;
}
      }
      else
        V_8_8 = V_6_6;
      V_9_9 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_56_95_95_91_51_93_95_48_2_f_in__list_0(Var_12, Var_13, V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0(
  MR_Char Var_12,
  MR_Integer Var_13,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String V_6_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String V_8_8;
      MR_Word V_9_9;
      MR_Integer Length_25;

      mercury__string__count_codepoints_2_p_0(V_6_6, &Length_25);
      succeeded = (Length_25 < Var_13);
      if (succeeded)
      {
        MR_Integer Count_26 = (MR_Integer) ((MR_Unsigned) Var_13 - (MR_Unsigned) Length_25);
        MR_String PadString_27;

        mercury__string__duplicate_char_3_p_0(Var_12, Count_26, &PadString_27);
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  PadString_27 ;
	S2 =  V_6_6 ;
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
	 V_8_8  = S3;
}
      }
      else
        V_8_8 = V_6_6;
      V_9_9 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0(Var_12, Var_13, V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__string__foldr_substring_6_p_4(
  MR_Word TypeInfo_for_T_17,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer Count_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer ClampStart_12;
    MR_Integer ClampEnd_13;

    mercury__string__convert_endpoints_4_p_0(Start_9, Count_10, &ClampStart_12, &ClampEnd_13);
    mercury__string__foldr_between_6_p_4(TypeInfo_for_T_17, Closure_7, String_8, ClampStart_12, ClampEnd_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15, cont, cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldr_substring_6_p_3(
  MR_Word TypeInfo_for_T_17,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer Count_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer ClampStart_12;
    MR_Integer ClampEnd_13;

    mercury__string__convert_endpoints_4_p_0(Start_9, Count_10, &ClampStart_12, &ClampEnd_13);
    mercury__string__foldr_between_6_p_3(TypeInfo_for_T_17, Closure_7, String_8, ClampStart_12, ClampEnd_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15, cont, cont_env_ptr);
  }
}

MR_bool MR_CALL 
mercury__string__foldr_substring_6_p_2(
  MR_Word TypeInfo_for_T_17,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer Count_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  {
    MR_bool succeeded;
    MR_Integer ClampStart_12;
    MR_Integer ClampEnd_13;

    mercury__string__convert_endpoints_4_p_0(Start_9, Count_10, &ClampStart_12, &ClampEnd_13);
    succeeded = mercury__string__foldr_between_6_p_2(TypeInfo_for_T_17, Closure_7, String_8, ClampStart_12, ClampEnd_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15);
    return succeeded;
  }
}

void MR_CALL 
mercury__string__foldr_substring_6_p_1(
  MR_Word TypeInfo_for_T_17,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer Count_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  {
    MR_Integer ClampStart_12;
    MR_Integer ClampEnd_13;

    mercury__string__convert_endpoints_4_p_0(Start_9, Count_10, &ClampStart_12, &ClampEnd_13);
    mercury__string__foldr_between_6_p_1(TypeInfo_for_T_17, Closure_7, String_8, ClampStart_12, ClampEnd_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15);
  }
}

void MR_CALL 
mercury__string__foldr_substring_6_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer Count_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  {
    MR_Integer ClampStart_12;
    MR_Integer ClampEnd_13;

    mercury__string__convert_endpoints_4_p_0(Start_9, Count_10, &ClampStart_12, &ClampEnd_13);
    mercury__string__foldr_between_6_p_0(TypeInfo_for_T_17, Closure_7, String_8, ClampStart_12, ClampEnd_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15);
  }
}

MR_Box MR_CALL 
mercury__string__foldr_substring_5_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word F_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer Count_10,
  MR_Box Acc0_11)
{
  {
    MR_Box Acc_12;
    MR_Integer ClampStart_13;
    MR_Integer ClampEnd_14;

    mercury__string__convert_endpoints_4_p_0(Start_9, Count_10, &ClampStart_13, &ClampEnd_14);
    Acc_12 = mercury__string__foldr_between_5_f_0(TypeInfo_for_T_15, F_7, String_8, ClampStart_13, ClampEnd_14, Acc0_11);
    return Acc_12;
  }
}

MR_Box MR_CALL 
mercury__string__foldr_between_5_f_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word F_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer Count_10,
  MR_Box Acc0_11)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 > Start_9);
    MR_Box Acc_12;
    MR_Integer Start_31;
    MR_Integer End_32;
    MR_Integer Var_34;

    if (succeeded)
      Start_31 = (MR_Integer) 0;
    else
      Start_31 = Start_9;
{
#define MR_PROC_LABEL mercury__string__foldr_between_5_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_34  = Length;
}
    succeeded = (Count_10 < Var_34);
    if (succeeded)
      End_32 = Count_10;
    else
      End_32 = Var_34;
    mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(F_7, String_8, Start_31, End_32, Acc0_11, &Acc_12);
    return Acc_12;
  }
}

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word Var_20,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer I_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_10 > Start_9);
    MR_Integer J_12;
    MR_Char Char_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_8 ;
	Index =  I_10 ;
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
	 J_12  = PrevIndex;
	 Char_13  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 >= Start_9);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1))));
      MR_Integer next_value_of_I_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

      STATE_VARIABLE_Acc_16_16 = func_0(((MR_Box) (Var_20)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14);
      // direct tailcall eliminated
      ;
      next_value_of_I_10 = J_12;
      next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_16_16;
      I_10 = next_value_of_I_10;
      STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
    break;
  }
}

void MR_CALL 
mercury__string__foldr_4_p_4(
  MR_Word TypeInfo_for_T_13,
  MR_Word Closure_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__string__foldr_4_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_11  = Length;
}
    mercury__string__foldr_between_6_p_4(TypeInfo_for_T_13, Closure_5, String_6, (MR_Integer) 0, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9, cont, cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldr_between_6_p_4(
  MR_Word TypeInfo_for_T_19,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start0_9,
  MR_Integer End0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 > Start0_9);
    MR_Integer Start_12;
    MR_Integer End_13;
    MR_Integer Var_17;

    if (succeeded)
      Start_12 = (MR_Integer) 0;
    else
      Start_12 = Start0_9;
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_17  = Length;
}
    succeeded = (End0_10 < Var_17);
    if (succeeded)
      End_13 = End0_10;
    else
      End_13 = Var_17;
    mercury__string__foldr_between_2_6_p_4(TypeInfo_for_T_19, Closure_7, String_8, Start_12, End_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15, cont, cont_env_ptr);
  }
}

static void MR_CALL 
mercury__string__foldr_between_2_6_p_4_1(
  void * env_ptr_arg)
{
  {
    struct mercury__string__foldr_between_2_6_p_4_env_0_s * env_ptr = (struct mercury__string__foldr_between_2_6_p_4_env_0_s *) (env_ptr_arg);

    mercury__string__foldr_between_2_6_p_4((env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18, (env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__Closure_7, (env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__String_8, (env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__Start_9, (env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__J_12, (env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, (env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15, (env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__cont, (env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldr_between_2_6_p_4(
  MR_Word TypeInfo_for_T_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer I_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__string__foldr_between_2_6_p_4_env_0_s env;

    (env).mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18 = TypeInfo_for_T_18;
    (env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7 = Closure_7;
    (env).mercury__string__foldr_between_2_6_p_4_env_0__String_8 = String_8;
    (env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9 = Start_9;
    (env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_15;
    (env).mercury__string__foldr_between_2_6_p_4_env_0__cont = cont;
    (env).mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded = (I_10 > (env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9);
      MR_Char Char_13;

      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldr_between_2_6_p_4

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  (env).mercury__string__foldr_between_2_6_p_4_env_0__String_8 ;
	Index =  I_10 ;
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
	 (env).mercury__string__foldr_between_2_6_p_4_env_0__J_12  = PrevIndex;
	 Char_13  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          succeeded = ((env).mercury__string__foldr_between_2_6_p_4_env_0__J_12 >= (env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9);
      }
      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7, (MR_Integer) 1))));

        func_0(((MR_Box) ((env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14, &(env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldr_between_2_6_p_4_1, &env);
      }
      else
      {
        *((env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15) = STATE_VARIABLE_Acc_0_14;
        ((env).mercury__string__foldr_between_2_6_p_4_env_0__cont)((env).mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr);
      }
    }
  }
}

void MR_CALL 
mercury__string__foldr_4_p_3(
  MR_Word TypeInfo_for_T_13,
  MR_Word Closure_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__string__foldr_4_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_11  = Length;
}
    mercury__string__foldr_between_6_p_3(TypeInfo_for_T_13, Closure_5, String_6, (MR_Integer) 0, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9, cont, cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldr_between_6_p_3(
  MR_Word TypeInfo_for_T_19,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start0_9,
  MR_Integer End0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 > Start0_9);
    MR_Integer Start_12;
    MR_Integer End_13;
    MR_Integer Var_17;

    if (succeeded)
      Start_12 = (MR_Integer) 0;
    else
      Start_12 = Start0_9;
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_17  = Length;
}
    succeeded = (End0_10 < Var_17);
    if (succeeded)
      End_13 = End0_10;
    else
      End_13 = Var_17;
    mercury__string__foldr_between_2_6_p_3(TypeInfo_for_T_19, Closure_7, String_8, Start_12, End_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15, cont, cont_env_ptr);
  }
}

static void MR_CALL 
mercury__string__foldr_between_2_6_p_3_1(
  void * env_ptr_arg)
{
  {
    struct mercury__string__foldr_between_2_6_p_3_env_0_s * env_ptr = (struct mercury__string__foldr_between_2_6_p_3_env_0_s *) (env_ptr_arg);

    mercury__string__foldr_between_2_6_p_3((env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18, (env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__Closure_7, (env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__String_8, (env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__Start_9, (env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__J_12, (env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, (env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15, (env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__cont, (env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldr_between_2_6_p_3(
  MR_Word TypeInfo_for_T_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer I_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__string__foldr_between_2_6_p_3_env_0_s env;

    (env).mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18 = TypeInfo_for_T_18;
    (env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7 = Closure_7;
    (env).mercury__string__foldr_between_2_6_p_3_env_0__String_8 = String_8;
    (env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9 = Start_9;
    (env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_15;
    (env).mercury__string__foldr_between_2_6_p_3_env_0__cont = cont;
    (env).mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded = (I_10 > (env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9);
      MR_Char Char_13;

      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldr_between_2_6_p_3

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  (env).mercury__string__foldr_between_2_6_p_3_env_0__String_8 ;
	Index =  I_10 ;
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
	 (env).mercury__string__foldr_between_2_6_p_3_env_0__J_12  = PrevIndex;
	 Char_13  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          succeeded = ((env).mercury__string__foldr_between_2_6_p_3_env_0__J_12 >= (env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9);
      }
      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7, (MR_Integer) 1))));

        func_0(((MR_Box) ((env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14, &(env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldr_between_2_6_p_3_1, &env);
      }
      else
      {
        *((env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15) = STATE_VARIABLE_Acc_0_14;
        ((env).mercury__string__foldr_between_2_6_p_3_env_0__cont)((env).mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string__foldr_4_p_2(
  MR_Word TypeInfo_for_T_13,
  MR_Word Closure_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  {
    MR_bool succeeded;
    MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__string__foldr_4_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_11  = Length;
}
    succeeded = mercury__string__foldr_between_6_p_2(TypeInfo_for_T_13, Closure_5, String_6, (MR_Integer) 0, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__foldr_between_6_p_2(
  MR_Word TypeInfo_for_T_19,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start0_9,
  MR_Integer End0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 > Start0_9);
    MR_Integer Start_12;
    MR_Integer End_13;
    MR_Integer Var_17;

    if (succeeded)
      Start_12 = (MR_Integer) 0;
    else
      Start_12 = Start0_9;
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_17  = Length;
}
    succeeded = (End0_10 < Var_17);
    if (succeeded)
      End_13 = End0_10;
    else
      End_13 = Var_17;
    succeeded = mercury__string__foldr_between_2_6_p_2(TypeInfo_for_T_19, Closure_7, String_8, Start_12, End_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__foldr_between_2_6_p_2(
  MR_Word TypeInfo_for_T_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer I_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_10 > Start_9);
    MR_Integer J_12;
    MR_Char Char_13;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__foldr_between_2_6_p_2

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_8 ;
	Index =  I_10 ;
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
	 J_12  = PrevIndex;
	 Char_13  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 >= Start_9);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_7, (MR_Integer) 1))));
      MR_Integer next_value_of_I_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

      succeeded = func_0(((MR_Box) (Closure_7)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14, &STATE_VARIABLE_Acc_16_16);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_I_10 = J_12;
        next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_16_16;
        I_10 = next_value_of_I_10;
        STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__string__foldr_4_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word Closure_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  {
    MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__string__foldr_4_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_11  = Length;
}
    mercury__string__foldr_between_6_p_1(TypeInfo_for_T_13, Closure_5, String_6, (MR_Integer) 0, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
  }
}

void MR_CALL 
mercury__string__foldr_between_6_p_1(
  MR_Word TypeInfo_for_T_19,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start0_9,
  MR_Integer End0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 > Start0_9);
    MR_Integer Start_12;
    MR_Integer End_13;
    MR_Integer Var_17;

    if (succeeded)
      Start_12 = (MR_Integer) 0;
    else
      Start_12 = Start0_9;
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_17  = Length;
}
    succeeded = (End0_10 < Var_17);
    if (succeeded)
      End_13 = End0_10;
    else
      End_13 = Var_17;
    mercury__string__foldr_between_2_6_p_1(TypeInfo_for_T_19, Closure_7, String_8, Start_12, End_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15);
  }
}

void MR_CALL 
mercury__string__foldr_between_2_6_p_1(
  MR_Word TypeInfo_for_T_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer I_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_10 > Start_9);
    MR_Integer J_12;
    MR_Char Char_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__foldr_between_2_6_p_1

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_8 ;
	Index =  I_10 ;
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
	 J_12  = PrevIndex;
	 Char_13  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 >= Start_9);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_16_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_7, (MR_Integer) 1))));
      MR_Integer next_value_of_I_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

      func_0(((MR_Box) (Closure_7)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14, &STATE_VARIABLE_Acc_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_I_10 = J_12;
      next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_16_16;
      I_10 = next_value_of_I_10;
      STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
    break;
  }
}

void MR_CALL 
mercury__string__foldr_4_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word Closure_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  {
    MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__string__foldr_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_11  = Length;
}
    mercury__string__foldr_between_6_p_0(TypeInfo_for_T_13, Closure_5, String_6, (MR_Integer) 0, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
  }
}

void MR_CALL 
mercury__string__foldr_between_6_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start0_9,
  MR_Integer End0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 > Start0_9);
    MR_Integer Start_12;
    MR_Integer End_13;
    MR_Integer Var_17;

    if (succeeded)
      Start_12 = (MR_Integer) 0;
    else
      Start_12 = Start0_9;
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_17  = Length;
}
    succeeded = (End0_10 < Var_17);
    if (succeeded)
      End_13 = End0_10;
    else
      End_13 = Var_17;
    mercury__string__foldr_between_2_6_p_0(TypeInfo_for_T_19, Closure_7, String_8, Start_12, End_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15);
  }
}

void MR_CALL 
mercury__string__foldr_between_2_6_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer I_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_10 > Start_9);
    MR_Integer J_12;
    MR_Char Char_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__foldr_between_2_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_8 ;
	Index =  I_10 ;
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
	 J_12  = PrevIndex;
	 Char_13  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 >= Start_9);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_16_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_7, (MR_Integer) 1))));
      MR_Integer next_value_of_I_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

      func_0(((MR_Box) (Closure_7)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14, &STATE_VARIABLE_Acc_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_I_10 = J_12;
      next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_16_16;
      I_10 = next_value_of_I_10;
      STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
    break;
  }
}

MR_Box MR_CALL 
mercury__string__foldr_3_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word F_5,
  MR_String String_6,
  MR_Box Acc0_7)
{
  {
    MR_bool succeeded;
    MR_Box Acc_8;
    MR_Integer Var_26;
    MR_Integer End_41;
    MR_Integer Var_43;

{
#define MR_PROC_LABEL mercury__string__foldr_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_26  = Length;
}
{
#define MR_PROC_LABEL mercury__string__foldr_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_43  = Length;
}
    succeeded = (Var_26 < Var_43);
    if (succeeded)
      End_41 = Var_26;
    else
      End_41 = Var_43;
    mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(F_5, String_6, (MR_Integer) 0, End_41, Acc0_7, &Acc_8);
    return Acc_8;
  }
}

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word Var_20,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer I_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_10 > Start_9);
    MR_Integer J_12;
    MR_Char Char_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_8 ;
	Index =  I_10 ;
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
	 J_12  = PrevIndex;
	 Char_13  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 >= Start_9);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1))));
      MR_Integer next_value_of_I_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

      STATE_VARIABLE_Acc_16_16 = func_0(((MR_Box) (Var_20)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14);
      // direct tailcall eliminated
      ;
      next_value_of_I_10 = J_12;
      next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_16_16;
      I_10 = next_value_of_I_10;
      STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
    break;
  }
}

void MR_CALL 
mercury__string__foldl2_substring_8_p_5(
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer Start_11,
  MR_Integer Count_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer ClampStart_15;
    MR_Integer ClampEnd_16;

    mercury__string__convert_endpoints_4_p_0(Start_11, Count_12, &ClampStart_15, &ClampEnd_16);
    mercury__string__foldl2_between_8_p_5(TypeInfo_for_A_23, TypeInfo_for_B_24, Closure_9, String_10, ClampStart_15, ClampEnd_16, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20, cont, cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldl2_substring_8_p_4(
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer Start_11,
  MR_Integer Count_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer ClampStart_15;
    MR_Integer ClampEnd_16;

    mercury__string__convert_endpoints_4_p_0(Start_11, Count_12, &ClampStart_15, &ClampEnd_16);
    mercury__string__foldl2_between_8_p_4(TypeInfo_for_A_23, TypeInfo_for_B_24, Closure_9, String_10, ClampStart_15, ClampEnd_16, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20, cont, cont_env_ptr);
  }
}

MR_bool MR_CALL 
mercury__string__foldl2_substring_8_p_3(
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer Start_11,
  MR_Integer Count_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20)
{
  {
    MR_bool succeeded;
    MR_Integer ClampStart_15;
    MR_Integer ClampEnd_16;

    mercury__string__convert_endpoints_4_p_0(Start_11, Count_12, &ClampStart_15, &ClampEnd_16);
    succeeded = mercury__string__foldl2_between_8_p_3(TypeInfo_for_A_23, TypeInfo_for_B_24, Closure_9, String_10, ClampStart_15, ClampEnd_16, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20);
    return succeeded;
  }
}

void MR_CALL 
mercury__string__foldl2_substring_8_p_2(
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer Start_11,
  MR_Integer Count_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20)
{
  {
    MR_Integer ClampStart_15;
    MR_Integer ClampEnd_16;

    mercury__string__convert_endpoints_4_p_0(Start_11, Count_12, &ClampStart_15, &ClampEnd_16);
    mercury__string__foldl2_between_8_p_2(TypeInfo_for_A_23, TypeInfo_for_B_24, Closure_9, String_10, ClampStart_15, ClampEnd_16, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20);
  }
}

void MR_CALL 
mercury__string__foldl2_substring_8_p_1(
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer Start_11,
  MR_Integer Count_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20)
{
  {
    MR_Integer ClampStart_15;
    MR_Integer ClampEnd_16;

    mercury__string__convert_endpoints_4_p_0(Start_11, Count_12, &ClampStart_15, &ClampEnd_16);
    mercury__string__foldl2_between_8_p_1(TypeInfo_for_A_23, TypeInfo_for_B_24, Closure_9, String_10, ClampStart_15, ClampEnd_16, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20);
  }
}

void MR_CALL 
mercury__string__foldl2_substring_8_p_0(
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer Start_11,
  MR_Integer Count_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20)
{
  {
    MR_Integer ClampStart_15;
    MR_Integer ClampEnd_16;

    mercury__string__convert_endpoints_4_p_0(Start_11, Count_12, &ClampStart_15, &ClampEnd_16);
    mercury__string__foldl2_between_8_p_0(TypeInfo_for_A_23, TypeInfo_for_B_24, Closure_9, String_10, ClampStart_15, ClampEnd_16, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20);
  }
}

void MR_CALL 
mercury__string__foldl_substring_6_p_4(
  MR_Word TypeInfo_for_A_17,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer Count_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer ClampStart_12;
    MR_Integer ClampEnd_13;

    mercury__string__convert_endpoints_4_p_0(Start_9, Count_10, &ClampStart_12, &ClampEnd_13);
    mercury__string__foldl_between_6_p_4(TypeInfo_for_A_17, Closure_7, String_8, ClampStart_12, ClampEnd_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15, cont, cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldl_substring_6_p_3(
  MR_Word TypeInfo_for_A_17,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer Count_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer ClampStart_12;
    MR_Integer ClampEnd_13;

    mercury__string__convert_endpoints_4_p_0(Start_9, Count_10, &ClampStart_12, &ClampEnd_13);
    mercury__string__foldl_between_6_p_3(TypeInfo_for_A_17, Closure_7, String_8, ClampStart_12, ClampEnd_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15, cont, cont_env_ptr);
  }
}

MR_bool MR_CALL 
mercury__string__foldl_substring_6_p_2(
  MR_Word TypeInfo_for_A_17,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer Count_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  {
    MR_bool succeeded;
    MR_Integer ClampStart_12;
    MR_Integer ClampEnd_13;

    mercury__string__convert_endpoints_4_p_0(Start_9, Count_10, &ClampStart_12, &ClampEnd_13);
    succeeded = mercury__string__foldl_between_6_p_2(TypeInfo_for_A_17, Closure_7, String_8, ClampStart_12, ClampEnd_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15);
    return succeeded;
  }
}

void MR_CALL 
mercury__string__foldl_substring_6_p_1(
  MR_Word TypeInfo_for_A_17,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer Count_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  {
    MR_Integer ClampStart_12;
    MR_Integer ClampEnd_13;

    mercury__string__convert_endpoints_4_p_0(Start_9, Count_10, &ClampStart_12, &ClampEnd_13);
    mercury__string__foldl_between_6_p_1(TypeInfo_for_A_17, Closure_7, String_8, ClampStart_12, ClampEnd_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15);
  }
}

void MR_CALL 
mercury__string__foldl_substring_6_p_0(
  MR_Word TypeInfo_for_A_17,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer Count_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  {
    MR_Integer ClampStart_12;
    MR_Integer ClampEnd_13;

    mercury__string__convert_endpoints_4_p_0(Start_9, Count_10, &ClampStart_12, &ClampEnd_13);
    mercury__string__foldl_between_6_p_0(TypeInfo_for_A_17, Closure_7, String_8, ClampStart_12, ClampEnd_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15);
  }
}

MR_Box MR_CALL 
mercury__string__foldl_substring_5_f_0(
  MR_Word TypeInfo_for_A_15,
  MR_Word F_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer Count_10,
  MR_Box Acc0_11)
{
  {
    MR_Box Acc_12;
    MR_Integer ClampStart_13;
    MR_Integer ClampEnd_14;

    mercury__string__convert_endpoints_4_p_0(Start_9, Count_10, &ClampStart_13, &ClampEnd_14);
    Acc_12 = mercury__string__foldl_between_5_f_0(TypeInfo_for_A_15, F_7, String_8, ClampStart_13, ClampEnd_14, Acc0_11);
    return Acc_12;
  }
}

MR_Box MR_CALL 
mercury__string__foldl_between_5_f_0(
  MR_Word TypeInfo_for_A_23,
  MR_Word F_7,
  MR_String S_8,
  MR_Integer Start_9,
  MR_Integer End_10,
  MR_Box A_11)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 > Start_9);
    MR_Box B_12;
    MR_Integer Start_31;
    MR_Integer End_32;
    MR_Integer Var_34;

    if (succeeded)
      Start_31 = (MR_Integer) 0;
    else
      Start_31 = Start_9;
{
#define MR_PROC_LABEL mercury__string__foldl_between_5_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  S_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_34  = Length;
}
    succeeded = (End_10 < Var_34);
    if (succeeded)
      End_32 = End_10;
    else
      End_32 = Var_34;
    mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(F_7, S_8, Start_31, End_32, A_11, &B_12);
    return B_12;
  }
}

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word Var_20,
  MR_String String_8,
  MR_Integer I_9,
  MR_Integer End_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_9 < End_10);
    MR_Integer J_12;
    MR_Char Char_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_8 ;
	Index =  I_9 ;
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
	 J_12  = NextIndex;
	 Char_13  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 <= End_10);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1))));
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

      STATE_VARIABLE_Acc_16_16 = func_0(((MR_Box) (Var_20)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14);
      // direct tailcall eliminated
      ;
      next_value_of_I_9 = J_12;
      next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_16_16;
      I_9 = next_value_of_I_9;
      STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
    break;
  }
}

void MR_CALL 
mercury__string__foldl2_6_p_5(
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Box STATE_VARIABLE_Acc1_0_12,
  MR_Box * STATE_VARIABLE_Acc1_13,
  MR_Box STATE_VARIABLE_Acc2_0_14,
  MR_Box * STATE_VARIABLE_Acc2_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer Length_11;

{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_5

	MR_String Str;
	MR_Integer Length;

	Str =  String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_11  = Length;
}
    mercury__string__foldl2_between_8_p_5(TypeInfo_for_A_19, TypeInfo_for_B_20, Closure_7, String_8, (MR_Integer) 0, Length_11, STATE_VARIABLE_Acc1_0_12, STATE_VARIABLE_Acc1_13, STATE_VARIABLE_Acc2_0_14, STATE_VARIABLE_Acc2_15, cont, cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldl2_between_8_p_5(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer Start0_11,
  MR_Integer End0_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 > Start0_11);
    MR_Integer Start_15;
    MR_Integer End_16;
    MR_Integer Var_22;

    if (succeeded)
      Start_15 = (MR_Integer) 0;
    else
      Start_15 = Start0_11;
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_5

	MR_String Str;
	MR_Integer Length;

	Str =  String_10 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_22  = Length;
}
    succeeded = (End0_12 < Var_22);
    if (succeeded)
      End_16 = End0_12;
    else
      End_16 = Var_22;
    mercury__string__foldl2_between_2_8_p_5(TypeInfo_for_A_25, TypeInfo_for_B_26, Closure_9, String_10, Start_15, End_16, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20, cont, cont_env_ptr);
  }
}

static void MR_CALL 
mercury__string__foldl2_between_2_8_p_5_1(
  void * env_ptr_arg)
{
  {
    struct mercury__string__foldl2_between_2_8_p_5_env_0_s * env_ptr = (struct mercury__string__foldl2_between_2_8_p_5_env_0_s *) (env_ptr_arg);

    mercury__string__foldl2_between_2_8_p_5((env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__String_10, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__J_15, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__End_12, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__cont, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldl2_between_2_8_p_5(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer I_11,
  MR_Integer End_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__string__foldl2_between_2_8_p_5_env_0_s env;

    (env).mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25 = TypeInfo_for_A_25;
    (env).mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26 = TypeInfo_for_B_26;
    (env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9 = Closure_9;
    (env).mercury__string__foldl2_between_2_8_p_5_env_0__String_10 = String_10;
    (env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12 = End_12;
    (env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18 = STATE_VARIABLE_Acc1_18;
    (env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20 = STATE_VARIABLE_Acc2_20;
    (env).mercury__string__foldl2_between_2_8_p_5_env_0__cont = cont;
    (env).mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded = (I_11 < (env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12);
      MR_Char Char_16;

      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldl2_between_2_8_p_5

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  (env).mercury__string__foldl2_between_2_8_p_5_env_0__String_10 ;
	Index =  I_11 ;
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
	 (env).mercury__string__foldl2_between_2_8_p_5_env_0__J_15  = NextIndex;
	 Char_16  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          succeeded = ((env).mercury__string__foldl2_between_2_8_p_5_env_0__J_15 <= (env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12);
      }
      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9, (MR_Integer) 1))));

        func_0(((MR_Box) ((env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9)), ((MR_Box) (MR_Word) (Char_16)), STATE_VARIABLE_Acc1_0_17, &(env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21, STATE_VARIABLE_Acc2_0_19, &(env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22, mercury__string__foldl2_between_2_8_p_5_1, &env);
      }
      else
      {
        *((env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20) = STATE_VARIABLE_Acc2_0_19;
        *((env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18) = STATE_VARIABLE_Acc1_0_17;
        ((env).mercury__string__foldl2_between_2_8_p_5_env_0__cont)((env).mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr);
      }
    }
  }
}

void MR_CALL 
mercury__string__foldl2_6_p_4(
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Box STATE_VARIABLE_Acc1_0_12,
  MR_Box * STATE_VARIABLE_Acc1_13,
  MR_Box STATE_VARIABLE_Acc2_0_14,
  MR_Box * STATE_VARIABLE_Acc2_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer Length_11;

{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_11  = Length;
}
    mercury__string__foldl2_between_8_p_4(TypeInfo_for_A_19, TypeInfo_for_B_20, Closure_7, String_8, (MR_Integer) 0, Length_11, STATE_VARIABLE_Acc1_0_12, STATE_VARIABLE_Acc1_13, STATE_VARIABLE_Acc2_0_14, STATE_VARIABLE_Acc2_15, cont, cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldl2_between_8_p_4(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer Start0_11,
  MR_Integer End0_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 > Start0_11);
    MR_Integer Start_15;
    MR_Integer End_16;
    MR_Integer Var_22;

    if (succeeded)
      Start_15 = (MR_Integer) 0;
    else
      Start_15 = Start0_11;
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  String_10 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_22  = Length;
}
    succeeded = (End0_12 < Var_22);
    if (succeeded)
      End_16 = End0_12;
    else
      End_16 = Var_22;
    mercury__string__foldl2_between_2_8_p_4(TypeInfo_for_A_25, TypeInfo_for_B_26, Closure_9, String_10, Start_15, End_16, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20, cont, cont_env_ptr);
  }
}

static void MR_CALL 
mercury__string__foldl2_between_2_8_p_4_1(
  void * env_ptr_arg)
{
  {
    struct mercury__string__foldl2_between_2_8_p_4_env_0_s * env_ptr = (struct mercury__string__foldl2_between_2_8_p_4_env_0_s *) (env_ptr_arg);

    mercury__string__foldl2_between_2_8_p_4((env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__String_10, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__J_15, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__End_12, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__cont, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldl2_between_2_8_p_4(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer I_11,
  MR_Integer End_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__string__foldl2_between_2_8_p_4_env_0_s env;

    (env).mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25 = TypeInfo_for_A_25;
    (env).mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26 = TypeInfo_for_B_26;
    (env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9 = Closure_9;
    (env).mercury__string__foldl2_between_2_8_p_4_env_0__String_10 = String_10;
    (env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12 = End_12;
    (env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18 = STATE_VARIABLE_Acc1_18;
    (env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20 = STATE_VARIABLE_Acc2_20;
    (env).mercury__string__foldl2_between_2_8_p_4_env_0__cont = cont;
    (env).mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded = (I_11 < (env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12);
      MR_Char Char_16;

      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldl2_between_2_8_p_4

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  (env).mercury__string__foldl2_between_2_8_p_4_env_0__String_10 ;
	Index =  I_11 ;
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
	 (env).mercury__string__foldl2_between_2_8_p_4_env_0__J_15  = NextIndex;
	 Char_16  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          succeeded = ((env).mercury__string__foldl2_between_2_8_p_4_env_0__J_15 <= (env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12);
      }
      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9, (MR_Integer) 1))));

        func_0(((MR_Box) ((env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9)), ((MR_Box) (MR_Word) (Char_16)), STATE_VARIABLE_Acc1_0_17, &(env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21, STATE_VARIABLE_Acc2_0_19, &(env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22, mercury__string__foldl2_between_2_8_p_4_1, &env);
      }
      else
      {
        *((env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20) = STATE_VARIABLE_Acc2_0_19;
        *((env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18) = STATE_VARIABLE_Acc1_0_17;
        ((env).mercury__string__foldl2_between_2_8_p_4_env_0__cont)((env).mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string__foldl2_6_p_3(
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Box STATE_VARIABLE_Acc1_0_12,
  MR_Box * STATE_VARIABLE_Acc1_13,
  MR_Box STATE_VARIABLE_Acc2_0_14,
  MR_Box * STATE_VARIABLE_Acc2_15)
{
  {
    MR_bool succeeded;
    MR_Integer Length_11;

{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_11  = Length;
}
    succeeded = mercury__string__foldl2_between_8_p_3(TypeInfo_for_A_19, TypeInfo_for_B_20, Closure_7, String_8, (MR_Integer) 0, Length_11, STATE_VARIABLE_Acc1_0_12, STATE_VARIABLE_Acc1_13, STATE_VARIABLE_Acc2_0_14, STATE_VARIABLE_Acc2_15);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__foldl2_between_8_p_3(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer Start0_11,
  MR_Integer End0_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 > Start0_11);
    MR_Integer Start_15;
    MR_Integer End_16;
    MR_Integer Var_22;

    if (succeeded)
      Start_15 = (MR_Integer) 0;
    else
      Start_15 = Start0_11;
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  String_10 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_22  = Length;
}
    succeeded = (End0_12 < Var_22);
    if (succeeded)
      End_16 = End0_12;
    else
      End_16 = Var_22;
    succeeded = mercury__string__foldl2_between_2_8_p_3(TypeInfo_for_A_25, TypeInfo_for_B_26, Closure_9, String_10, Start_15, End_16, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__foldl2_between_2_8_p_3(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer I_11,
  MR_Integer End_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_11 < End_12);
    MR_Integer J_15;
    MR_Char Char_16;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__foldl2_between_2_8_p_3

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_10 ;
	Index =  I_11 ;
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
	 J_15  = NextIndex;
	 Char_16  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_15 <= End_12);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc1_21_21;
      MR_Box STATE_VARIABLE_Acc2_22_22;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_9, (MR_Integer) 1))));
      MR_Integer next_value_of_I_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_17;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_19;

      succeeded = func_0(((MR_Box) (Closure_9)), ((MR_Box) (MR_Word) (Char_16)), STATE_VARIABLE_Acc1_0_17, &STATE_VARIABLE_Acc1_21_21, STATE_VARIABLE_Acc2_0_19, &STATE_VARIABLE_Acc2_22_22);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_I_11 = J_15;
        next_value_of_STATE_VARIABLE_Acc1_0_17 = STATE_VARIABLE_Acc1_21_21;
        next_value_of_STATE_VARIABLE_Acc2_0_19 = STATE_VARIABLE_Acc2_22_22;
        I_11 = next_value_of_I_11;
        STATE_VARIABLE_Acc1_0_17 = next_value_of_STATE_VARIABLE_Acc1_0_17;
        STATE_VARIABLE_Acc2_0_19 = next_value_of_STATE_VARIABLE_Acc2_0_19;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc2_20 = STATE_VARIABLE_Acc2_0_19;
      *STATE_VARIABLE_Acc1_18 = STATE_VARIABLE_Acc1_0_17;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__string__foldl2_6_p_2(
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Box STATE_VARIABLE_Acc1_0_12,
  MR_Box * STATE_VARIABLE_Acc1_13,
  MR_Box STATE_VARIABLE_Acc2_0_14,
  MR_Box * STATE_VARIABLE_Acc2_15)
{
  {
    MR_Integer Length_11;

{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_11  = Length;
}
    mercury__string__foldl2_between_8_p_2(TypeInfo_for_A_19, TypeInfo_for_B_20, Closure_7, String_8, (MR_Integer) 0, Length_11, STATE_VARIABLE_Acc1_0_12, STATE_VARIABLE_Acc1_13, STATE_VARIABLE_Acc2_0_14, STATE_VARIABLE_Acc2_15);
  }
}

void MR_CALL 
mercury__string__foldl2_between_8_p_2(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer Start0_11,
  MR_Integer End0_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 > Start0_11);
    MR_Integer Start_15;
    MR_Integer End_16;
    MR_Integer Var_22;

    if (succeeded)
      Start_15 = (MR_Integer) 0;
    else
      Start_15 = Start0_11;
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  String_10 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_22  = Length;
}
    succeeded = (End0_12 < Var_22);
    if (succeeded)
      End_16 = End0_12;
    else
      End_16 = Var_22;
    mercury__string__foldl2_between_2_8_p_2(TypeInfo_for_A_25, TypeInfo_for_B_26, Closure_9, String_10, Start_15, End_16, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20);
  }
}

void MR_CALL 
mercury__string__foldl2_between_2_8_p_2(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer I_11,
  MR_Integer End_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_11 < End_12);
    MR_Integer J_15;
    MR_Char Char_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__foldl2_between_2_8_p_2

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_10 ;
	Index =  I_11 ;
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
	 J_15  = NextIndex;
	 Char_16  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_15 <= End_12);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc1_21_21;
      MR_Box STATE_VARIABLE_Acc2_22_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_9, (MR_Integer) 1))));
      MR_Integer next_value_of_I_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_17;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_19;

      func_0(((MR_Box) (Closure_9)), ((MR_Box) (MR_Word) (Char_16)), STATE_VARIABLE_Acc1_0_17, &STATE_VARIABLE_Acc1_21_21, STATE_VARIABLE_Acc2_0_19, &STATE_VARIABLE_Acc2_22_22);
      // direct tailcall eliminated
      ;
      next_value_of_I_11 = J_15;
      next_value_of_STATE_VARIABLE_Acc1_0_17 = STATE_VARIABLE_Acc1_21_21;
      next_value_of_STATE_VARIABLE_Acc2_0_19 = STATE_VARIABLE_Acc2_22_22;
      I_11 = next_value_of_I_11;
      STATE_VARIABLE_Acc1_0_17 = next_value_of_STATE_VARIABLE_Acc1_0_17;
      STATE_VARIABLE_Acc2_0_19 = next_value_of_STATE_VARIABLE_Acc2_0_19;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Acc2_20 = STATE_VARIABLE_Acc2_0_19;
      *STATE_VARIABLE_Acc1_18 = STATE_VARIABLE_Acc1_0_17;
    }
    break;
  }
}

void MR_CALL 
mercury__string__foldl2_6_p_1(
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Box STATE_VARIABLE_Acc1_0_12,
  MR_Box * STATE_VARIABLE_Acc1_13,
  MR_Box STATE_VARIABLE_Acc2_0_14,
  MR_Box * STATE_VARIABLE_Acc2_15)
{
  {
    MR_Integer Length_11;

{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_11  = Length;
}
    mercury__string__foldl2_between_8_p_1(TypeInfo_for_A_19, TypeInfo_for_B_20, Closure_7, String_8, (MR_Integer) 0, Length_11, STATE_VARIABLE_Acc1_0_12, STATE_VARIABLE_Acc1_13, STATE_VARIABLE_Acc2_0_14, STATE_VARIABLE_Acc2_15);
  }
}

void MR_CALL 
mercury__string__foldl2_between_8_p_1(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer Start0_11,
  MR_Integer End0_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 > Start0_11);
    MR_Integer Start_15;
    MR_Integer End_16;
    MR_Integer Var_22;

    if (succeeded)
      Start_15 = (MR_Integer) 0;
    else
      Start_15 = Start0_11;
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  String_10 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_22  = Length;
}
    succeeded = (End0_12 < Var_22);
    if (succeeded)
      End_16 = End0_12;
    else
      End_16 = Var_22;
    mercury__string__foldl2_between_2_8_p_1(TypeInfo_for_A_25, TypeInfo_for_B_26, Closure_9, String_10, Start_15, End_16, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20);
  }
}

void MR_CALL 
mercury__string__foldl2_between_2_8_p_1(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer I_11,
  MR_Integer End_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_11 < End_12);
    MR_Integer J_15;
    MR_Char Char_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__foldl2_between_2_8_p_1

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_10 ;
	Index =  I_11 ;
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
	 J_15  = NextIndex;
	 Char_16  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_15 <= End_12);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc1_21_21;
      MR_Box STATE_VARIABLE_Acc2_22_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_9, (MR_Integer) 1))));
      MR_Integer next_value_of_I_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_17;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_19;

      func_0(((MR_Box) (Closure_9)), ((MR_Box) (MR_Word) (Char_16)), STATE_VARIABLE_Acc1_0_17, &STATE_VARIABLE_Acc1_21_21, STATE_VARIABLE_Acc2_0_19, &STATE_VARIABLE_Acc2_22_22);
      // direct tailcall eliminated
      ;
      next_value_of_I_11 = J_15;
      next_value_of_STATE_VARIABLE_Acc1_0_17 = STATE_VARIABLE_Acc1_21_21;
      next_value_of_STATE_VARIABLE_Acc2_0_19 = STATE_VARIABLE_Acc2_22_22;
      I_11 = next_value_of_I_11;
      STATE_VARIABLE_Acc1_0_17 = next_value_of_STATE_VARIABLE_Acc1_0_17;
      STATE_VARIABLE_Acc2_0_19 = next_value_of_STATE_VARIABLE_Acc2_0_19;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Acc2_20 = STATE_VARIABLE_Acc2_0_19;
      *STATE_VARIABLE_Acc1_18 = STATE_VARIABLE_Acc1_0_17;
    }
    break;
  }
}

void MR_CALL 
mercury__string__foldl2_6_p_0(
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_B_20,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Box STATE_VARIABLE_Acc1_0_12,
  MR_Box * STATE_VARIABLE_Acc1_13,
  MR_Box STATE_VARIABLE_Acc2_0_14,
  MR_Box * STATE_VARIABLE_Acc2_15)
{
  {
    MR_Integer Length_11;

{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_11  = Length;
}
    mercury__string__foldl2_between_8_p_0(TypeInfo_for_A_19, TypeInfo_for_B_20, Closure_7, String_8, (MR_Integer) 0, Length_11, STATE_VARIABLE_Acc1_0_12, STATE_VARIABLE_Acc1_13, STATE_VARIABLE_Acc2_0_14, STATE_VARIABLE_Acc2_15);
  }
}

void MR_CALL 
mercury__string__foldl2_between_8_p_0(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer Start0_11,
  MR_Integer End0_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 > Start0_11);
    MR_Integer Start_15;
    MR_Integer End_16;
    MR_Integer Var_22;

    if (succeeded)
      Start_15 = (MR_Integer) 0;
    else
      Start_15 = Start0_11;
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_10 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_22  = Length;
}
    succeeded = (End0_12 < Var_22);
    if (succeeded)
      End_16 = End0_12;
    else
      End_16 = Var_22;
    mercury__string__foldl2_between_2_8_p_0(TypeInfo_for_A_25, TypeInfo_for_B_26, Closure_9, String_10, Start_15, End_16, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20);
  }
}

void MR_CALL 
mercury__string__foldl2_between_2_8_p_0(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer I_11,
  MR_Integer End_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_11 < End_12);
    MR_Integer J_15;
    MR_Char Char_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__foldl2_between_2_8_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_10 ;
	Index =  I_11 ;
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
	 J_15  = NextIndex;
	 Char_16  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_15 <= End_12);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc1_21_21;
      MR_Box STATE_VARIABLE_Acc2_22_22;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_9, (MR_Integer) 1))));
      MR_Integer next_value_of_I_11;
      MR_Box next_value_of_STATE_VARIABLE_Acc1_0_17;
      MR_Box next_value_of_STATE_VARIABLE_Acc2_0_19;

      func_0(((MR_Box) (Closure_9)), ((MR_Box) (MR_Word) (Char_16)), STATE_VARIABLE_Acc1_0_17, &STATE_VARIABLE_Acc1_21_21, STATE_VARIABLE_Acc2_0_19, &STATE_VARIABLE_Acc2_22_22);
      // direct tailcall eliminated
      ;
      next_value_of_I_11 = J_15;
      next_value_of_STATE_VARIABLE_Acc1_0_17 = STATE_VARIABLE_Acc1_21_21;
      next_value_of_STATE_VARIABLE_Acc2_0_19 = STATE_VARIABLE_Acc2_22_22;
      I_11 = next_value_of_I_11;
      STATE_VARIABLE_Acc1_0_17 = next_value_of_STATE_VARIABLE_Acc1_0_17;
      STATE_VARIABLE_Acc2_0_19 = next_value_of_STATE_VARIABLE_Acc2_0_19;
      continue;
    }
    else
    {
      *STATE_VARIABLE_Acc2_20 = STATE_VARIABLE_Acc2_0_19;
      *STATE_VARIABLE_Acc1_18 = STATE_VARIABLE_Acc1_0_17;
    }
    break;
  }
}

void MR_CALL 
mercury__string__foldl_4_p_4(
  MR_Word TypeInfo_for_A_13,
  MR_Word Closure_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer Length_8;

{
#define MR_PROC_LABEL mercury__string__foldl_4_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_8  = Length;
}
    mercury__string__foldl_between_6_p_4(TypeInfo_for_A_13, Closure_5, String_6, (MR_Integer) 0, Length_8, STATE_VARIABLE_Acc_0_9, STATE_VARIABLE_Acc_10, cont, cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldl_between_6_p_4(
  MR_Word TypeInfo_for_A_19,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start0_9,
  MR_Integer End0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 > Start0_9);
    MR_Integer Start_12;
    MR_Integer End_13;
    MR_Integer Var_17;

    if (succeeded)
      Start_12 = (MR_Integer) 0;
    else
      Start_12 = Start0_9;
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_17  = Length;
}
    succeeded = (End0_10 < Var_17);
    if (succeeded)
      End_13 = End0_10;
    else
      End_13 = Var_17;
    mercury__string__foldl_between_2_6_p_4(TypeInfo_for_A_19, Closure_7, String_8, Start_12, End_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15, cont, cont_env_ptr);
  }
}

static void MR_CALL 
mercury__string__foldl_between_2_6_p_4_1(
  void * env_ptr_arg)
{
  {
    struct mercury__string__foldl_between_2_6_p_4_env_0_s * env_ptr = (struct mercury__string__foldl_between_2_6_p_4_env_0_s *) (env_ptr_arg);

    mercury__string__foldl_between_2_6_p_4((env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18, (env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__Closure_7, (env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__String_8, (env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__J_12, (env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__End_10, (env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, (env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15, (env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__cont, (env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldl_between_2_6_p_4(
  MR_Word TypeInfo_for_A_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer I_9,
  MR_Integer End_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__string__foldl_between_2_6_p_4_env_0_s env;

    (env).mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18 = TypeInfo_for_A_18;
    (env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7 = Closure_7;
    (env).mercury__string__foldl_between_2_6_p_4_env_0__String_8 = String_8;
    (env).mercury__string__foldl_between_2_6_p_4_env_0__End_10 = End_10;
    (env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_15;
    (env).mercury__string__foldl_between_2_6_p_4_env_0__cont = cont;
    (env).mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded = (I_9 < (env).mercury__string__foldl_between_2_6_p_4_env_0__End_10);
      MR_Char Char_13;

      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldl_between_2_6_p_4

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  (env).mercury__string__foldl_between_2_6_p_4_env_0__String_8 ;
	Index =  I_9 ;
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
	 (env).mercury__string__foldl_between_2_6_p_4_env_0__J_12  = NextIndex;
	 Char_13  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          succeeded = ((env).mercury__string__foldl_between_2_6_p_4_env_0__J_12 <= (env).mercury__string__foldl_between_2_6_p_4_env_0__End_10);
      }
      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7, (MR_Integer) 1))));

        func_0(((MR_Box) ((env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14, &(env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldl_between_2_6_p_4_1, &env);
      }
      else
      {
        *((env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15) = STATE_VARIABLE_Acc_0_14;
        ((env).mercury__string__foldl_between_2_6_p_4_env_0__cont)((env).mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr);
      }
    }
  }
}

void MR_CALL 
mercury__string__foldl_4_p_3(
  MR_Word TypeInfo_for_A_13,
  MR_Word Closure_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer Length_8;

{
#define MR_PROC_LABEL mercury__string__foldl_4_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_8  = Length;
}
    mercury__string__foldl_between_6_p_3(TypeInfo_for_A_13, Closure_5, String_6, (MR_Integer) 0, Length_8, STATE_VARIABLE_Acc_0_9, STATE_VARIABLE_Acc_10, cont, cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldl_between_6_p_3(
  MR_Word TypeInfo_for_A_19,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start0_9,
  MR_Integer End0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 > Start0_9);
    MR_Integer Start_12;
    MR_Integer End_13;
    MR_Integer Var_17;

    if (succeeded)
      Start_12 = (MR_Integer) 0;
    else
      Start_12 = Start0_9;
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_17  = Length;
}
    succeeded = (End0_10 < Var_17);
    if (succeeded)
      End_13 = End0_10;
    else
      End_13 = Var_17;
    mercury__string__foldl_between_2_6_p_3(TypeInfo_for_A_19, Closure_7, String_8, Start_12, End_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15, cont, cont_env_ptr);
  }
}

static void MR_CALL 
mercury__string__foldl_between_2_6_p_3_1(
  void * env_ptr_arg)
{
  {
    struct mercury__string__foldl_between_2_6_p_3_env_0_s * env_ptr = (struct mercury__string__foldl_between_2_6_p_3_env_0_s *) (env_ptr_arg);

    mercury__string__foldl_between_2_6_p_3((env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18, (env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__Closure_7, (env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__String_8, (env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__J_12, (env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__End_10, (env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, (env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15, (env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__cont, (env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__foldl_between_2_6_p_3(
  MR_Word TypeInfo_for_A_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer I_9,
  MR_Integer End_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__string__foldl_between_2_6_p_3_env_0_s env;

    (env).mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18 = TypeInfo_for_A_18;
    (env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7 = Closure_7;
    (env).mercury__string__foldl_between_2_6_p_3_env_0__String_8 = String_8;
    (env).mercury__string__foldl_between_2_6_p_3_env_0__End_10 = End_10;
    (env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_15;
    (env).mercury__string__foldl_between_2_6_p_3_env_0__cont = cont;
    (env).mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_bool succeeded = (I_9 < (env).mercury__string__foldl_between_2_6_p_3_env_0__End_10);
      MR_Char Char_13;

      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__foldl_between_2_6_p_3

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  (env).mercury__string__foldl_between_2_6_p_3_env_0__String_8 ;
	Index =  I_9 ;
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
	 (env).mercury__string__foldl_between_2_6_p_3_env_0__J_12  = NextIndex;
	 Char_13  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          succeeded = ((env).mercury__string__foldl_between_2_6_p_3_env_0__J_12 <= (env).mercury__string__foldl_between_2_6_p_3_env_0__End_10);
      }
      if (succeeded)
      {
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), (env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7, (MR_Integer) 1))));

        func_0(((MR_Box) ((env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14, &(env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldl_between_2_6_p_3_1, &env);
      }
      else
      {
        *((env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15) = STATE_VARIABLE_Acc_0_14;
        ((env).mercury__string__foldl_between_2_6_p_3_env_0__cont)((env).mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string__foldl_4_p_2(
  MR_Word TypeInfo_for_A_13,
  MR_Word Closure_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10)
{
  {
    MR_bool succeeded;
    MR_Integer Length_8;

{
#define MR_PROC_LABEL mercury__string__foldl_4_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_8  = Length;
}
    succeeded = mercury__string__foldl_between_6_p_2(TypeInfo_for_A_13, Closure_5, String_6, (MR_Integer) 0, Length_8, STATE_VARIABLE_Acc_0_9, STATE_VARIABLE_Acc_10);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__foldl_between_6_p_2(
  MR_Word TypeInfo_for_A_19,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start0_9,
  MR_Integer End0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 > Start0_9);
    MR_Integer Start_12;
    MR_Integer End_13;
    MR_Integer Var_17;

    if (succeeded)
      Start_12 = (MR_Integer) 0;
    else
      Start_12 = Start0_9;
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_17  = Length;
}
    succeeded = (End0_10 < Var_17);
    if (succeeded)
      End_13 = End0_10;
    else
      End_13 = Var_17;
    succeeded = mercury__string__foldl_between_2_6_p_2(TypeInfo_for_A_19, Closure_7, String_8, Start_12, End_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__foldl_between_2_6_p_2(
  MR_Word TypeInfo_for_A_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer I_9,
  MR_Integer End_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_9 < End_10);
    MR_Integer J_12;
    MR_Char Char_13;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__foldl_between_2_6_p_2

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_8 ;
	Index =  I_9 ;
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
	 J_12  = NextIndex;
	 Char_13  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 <= End_10);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_7, (MR_Integer) 1))));
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

      succeeded = func_0(((MR_Box) (Closure_7)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14, &STATE_VARIABLE_Acc_16_16);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_I_9 = J_12;
        next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_16_16;
        I_9 = next_value_of_I_9;
        STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
        continue;
      }
    }
    else
    {
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__string__foldl_4_p_1(
  MR_Word TypeInfo_for_A_13,
  MR_Word Closure_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10)
{
  {
    MR_Integer Length_8;

{
#define MR_PROC_LABEL mercury__string__foldl_4_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_8  = Length;
}
    mercury__string__foldl_between_6_p_0(TypeInfo_for_A_13, Closure_5, String_6, (MR_Integer) 0, Length_8, STATE_VARIABLE_Acc_0_9, STATE_VARIABLE_Acc_10);
  }
}

void MR_CALL 
mercury__string__foldl_between_6_p_0(
  MR_Word TypeInfo_for_A_19,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start0_9,
  MR_Integer End0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 > Start0_9);
    MR_Integer Start_12;
    MR_Integer End_13;
    MR_Integer Var_17;

    if (succeeded)
      Start_12 = (MR_Integer) 0;
    else
      Start_12 = Start0_9;
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_17  = Length;
}
    succeeded = (End0_10 < Var_17);
    if (succeeded)
      End_13 = End0_10;
    else
      End_13 = Var_17;
    mercury__string__foldl_between_2_6_p_1(TypeInfo_for_A_19, Closure_7, String_8, Start_12, End_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15);
  }
}

void MR_CALL 
mercury__string__foldl_between_2_6_p_1(
  MR_Word TypeInfo_for_A_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer I_9,
  MR_Integer End_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_9 < End_10);
    MR_Integer J_12;
    MR_Char Char_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__foldl_between_2_6_p_1

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_8 ;
	Index =  I_9 ;
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
	 J_12  = NextIndex;
	 Char_13  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 <= End_10);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_16_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_7, (MR_Integer) 1))));
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

      func_0(((MR_Box) (Closure_7)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14, &STATE_VARIABLE_Acc_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_I_9 = J_12;
      next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_16_16;
      I_9 = next_value_of_I_9;
      STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
    break;
  }
}

void MR_CALL 
mercury__string__foldl_4_p_0(
  MR_Word TypeInfo_for_A_13,
  MR_Word Closure_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10)
{
  {
    MR_Integer Length_8;

{
#define MR_PROC_LABEL mercury__string__foldl_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_8  = Length;
}
    mercury__string__foldl_between_6_p_1(TypeInfo_for_A_13, Closure_5, String_6, (MR_Integer) 0, Length_8, STATE_VARIABLE_Acc_0_9, STATE_VARIABLE_Acc_10);
  }
}

void MR_CALL 
mercury__string__foldl_between_6_p_1(
  MR_Word TypeInfo_for_A_19,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start0_9,
  MR_Integer End0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 > Start0_9);
    MR_Integer Start_12;
    MR_Integer End_13;
    MR_Integer Var_17;

    if (succeeded)
      Start_12 = (MR_Integer) 0;
    else
      Start_12 = Start0_9;
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_17  = Length;
}
    succeeded = (End0_10 < Var_17);
    if (succeeded)
      End_13 = End0_10;
    else
      End_13 = Var_17;
    mercury__string__foldl_between_2_6_p_0(TypeInfo_for_A_19, Closure_7, String_8, Start_12, End_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15);
  }
}

void MR_CALL 
mercury__string__foldl_between_2_6_p_0(
  MR_Word TypeInfo_for_A_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer I_9,
  MR_Integer End_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_9 < End_10);
    MR_Integer J_12;
    MR_Char Char_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__foldl_between_2_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_8 ;
	Index =  I_9 ;
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
	 J_12  = NextIndex;
	 Char_13  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 <= End_10);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_16_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Closure_7, (MR_Integer) 1))));
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

      func_0(((MR_Box) (Closure_7)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14, &STATE_VARIABLE_Acc_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_I_9 = J_12;
      next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_16_16;
      I_9 = next_value_of_I_9;
      STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
    break;
  }
}

MR_Box MR_CALL 
mercury__string__foldl_3_f_0(
  MR_Word TypeInfo_for_A_19,
  MR_Word F_5,
  MR_String S_6,
  MR_Box A_7)
{
  {
    MR_bool succeeded;
    MR_Box B_8;
    MR_Integer Length_25;
    MR_Integer End_39;
    MR_Integer Var_41;

{
#define MR_PROC_LABEL mercury__string__foldl_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  S_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_25  = Length;
}
{
#define MR_PROC_LABEL mercury__string__foldl_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  S_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_41  = Length;
}
    succeeded = (Length_25 < Var_41);
    if (succeeded)
      End_39 = Length_25;
    else
      End_39 = Var_41;
    mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(F_5, S_6, (MR_Integer) 0, End_39, A_7, &B_8);
    return B_8;
  }
}

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word Var_20,
  MR_String String_8,
  MR_Integer I_9,
  MR_Integer End_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_9 < End_10);
    MR_Integer J_12;
    MR_Char Char_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_8 ;
	Index =  I_9 ;
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
	 J_12  = NextIndex;
	 Char_13  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 <= End_10);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1))));
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

      STATE_VARIABLE_Acc_16_16 = func_0(((MR_Box) (Var_20)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14);
      // direct tailcall eliminated
      ;
      next_value_of_I_9 = J_12;
      next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_16_16;
      I_9 = next_value_of_I_9;
      STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
    break;
  }
}

MR_String MR_CALL 
mercury__string__word_wrap_2_f_0(
  MR_String Str_4,
  MR_Integer N_5)
{
  {
    MR_String HeadVar__3_3;

    HeadVar__3_3 = mercury__string__word_wrap_separator_3_f_0(Str_4, N_5, (MR_String) "");
    return HeadVar__3_3;
  }
}

MR_String MR_CALL 
mercury__string__word_wrap_separator_3_f_0(
  MR_String Str_5,
  MR_Integer N_6,
  MR_String WordSep0_7)
{
  {
    MR_bool succeeded;
    MR_String Wrapped_8;
    MR_Word Words_9;
    MR_Integer SepLen0_10;
    MR_String WordSep_11;
    MR_Integer SepLen_12;
    MR_Word RevWordsSpacesNls_16;
    MR_Word WordsSpacesNls_17;
    MR_Integer WordStart_25;

    mercury__string__skip_to_next_word_start__ho37_4_p_0(Str_5, (MR_Integer) 0, &WordStart_25);
    mercury__string__words_loop__ho38_4_p_0(Str_5, WordStart_25, &Words_9);
    mercury__string__count_codepoints_2_p_0(WordSep0_7, &SepLen0_10);
    succeeded = (SepLen0_10 < N_6);
    if (succeeded)
    {
      WordSep_11 = WordSep0_7;
      SepLen_12 = SepLen0_10;
    }
    else
    {
      WordSep_11 = (MR_String) "";
      SepLen_12 = (MR_Integer) 0;
    }
    mercury__string__word_wrap_loop_7_p_0(Words_9, WordSep_11, SepLen_12, (MR_Integer) 1, N_6, (MR_Word) ((MR_Unsigned) 0U), &RevWordsSpacesNls_16);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevWordsSpacesNls_16, &WordsSpacesNls_17);
    Wrapped_8 = mercury__string__append_list_1_f_0(WordsSpacesNls_17);
    return Wrapped_8;
  }
}

void MR_CALL 
mercury__string__word_wrap_loop_7_p_0(
  MR_Word HeadVar__1_1,
  MR_String WordSep_2,
  MR_Integer SepLen_3,
  MR_Integer CurCol_4,
  MR_Integer MaxCol_5,
  MR_Word STATE_VARIABLE_RevWordsSpacesNls_0_6,
  MR_Word * STATE_VARIABLE_RevWordsSpacesNls_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevWordsSpacesNls_7 = STATE_VARIABLE_RevWordsSpacesNls_0_6;
    else
    {
      MR_String Word_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Words_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer WordLen_22;
      MR_Word NewWords_23;
      MR_Integer NewCol_24;
      MR_Word STATE_VARIABLE_RevWordsSpacesNls_36_36;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_CurCol_4;
      MR_Word next_value_of_STATE_VARIABLE_RevWordsSpacesNls_0_6;

      mercury__string__count_codepoints_2_p_0(Word_15, &WordLen_22);
      succeeded = (CurCol_4 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (WordLen_22 < MaxCol_5);
      if (succeeded)
      {
        NewWords_23 = Words_16;
        NewCol_24 = (MR_Integer) ((MR_Unsigned) CurCol_4 + (MR_Unsigned) WordLen_22);
        {
          STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (Word_15));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (STATE_VARIABLE_RevWordsSpacesNls_0_6));
        }
      }
      else
      {
        succeeded = (CurCol_4 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (WordLen_22 == MaxCol_5);
        if (succeeded)
        {
          NewWords_23 = Words_16;
          NewCol_24 = (MR_Integer) 1;
          if ((NewWords_23 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (Word_15));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (STATE_VARIABLE_RevWordsSpacesNls_0_6));
            }
          else
          {
            MR_Word Var_39;

            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Word_15));
              MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (STATE_VARIABLE_RevWordsSpacesNls_0_6));
            }
            {
              STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (Var_39));
            }
          }
        }
        else
        {
          MR_Integer Var_41 = (MR_Integer) ((MR_Unsigned) CurCol_4 + (MR_Unsigned) WordLen_22);

          succeeded = (Var_41 < MaxCol_5);
          if (succeeded)
          {
            MR_Integer Var_42;
            MR_Word Var_45;

            NewWords_23 = Words_16;
            Var_42 = (MR_Integer) ((MR_Unsigned) CurCol_4 + (MR_Unsigned) WordLen_22);
            NewCol_24 = (MR_Integer) ((MR_Unsigned) Var_42 + (MR_Unsigned) (MR_Integer) 1);
            {
              Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (STATE_VARIABLE_RevWordsSpacesNls_0_6));
            }
            {
              STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (Word_15));
              MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (Var_45));
            }
          }
          else
          {
            MR_Integer Var_70 = (MR_Integer) ((MR_Unsigned) CurCol_4 + (MR_Unsigned) WordLen_22);

            succeeded = (MaxCol_5 == Var_70);
            if (succeeded)
            {
              NewWords_23 = Words_16;
              NewCol_24 = (MR_Integer) 1;
              if ((NewWords_23 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word Var_53;

                {
                  Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) ((MR_String) " "));
                  MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (STATE_VARIABLE_RevWordsSpacesNls_0_6));
                }
                {
                  STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (Word_15));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (Var_53));
                }
              }
              else
              {
                MR_Word Var_49;
                MR_Word Var_50;

                {
                  Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) ((MR_String) " "));
                  MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (STATE_VARIABLE_RevWordsSpacesNls_0_6));
                }
                {
                  Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Word_15));
                  MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_50));
                }
                {
                  STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (Var_49));
                }
              }
            }
            else
            {
              succeeded = (CurCol_4 == (MR_Integer) 1);
              if (succeeded)
              {
                MR_Word RevPieces_29;
                MR_String LastPiece_30;
                MR_Word Rest_31;
                MR_Word RestWithSep_32;
                MR_Integer Var_55 = (MR_Integer) ((MR_Unsigned) MaxCol_5 - (MR_Unsigned) SepLen_3);

                RevPieces_29 = mercury__string__break_up_string_reverse_3_f_0(Word_15, Var_55, (MR_Word) ((MR_Unsigned) 0U));
                if ((RevPieces_29 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.word_wrap_loop\'/7", (MR_String) "no pieces");
                    return;
                  }
                }
                else
                {
                  LastPiece_30 = ((MR_String) ((MR_hl_field(MR_mktag(1), RevPieces_29, (MR_Integer) 0))));
                  Rest_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevPieces_29, (MR_Integer) 1))));
                }
                {
                  NewWords_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), NewWords_23, 0) = ((MR_Box) (LastPiece_30));
                  MR_hl_field(MR_mktag(1), NewWords_23, 1) = ((MR_Box) (Words_16));
                }
                NewCol_24 = (MR_Integer) 1;
                RestWithSep_32 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_48_95_95_91_50_93_95_48_2_f_in__list_0(WordSep_2, Rest_31);
                mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RestWithSep_32, STATE_VARIABLE_RevWordsSpacesNls_0_6, &STATE_VARIABLE_RevWordsSpacesNls_36_36);
              }
              else
              {
                NewWords_23 = HeadVar__1_1;
                NewCol_24 = (MR_Integer) 1;
                {
                  STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (STATE_VARIABLE_RevWordsSpacesNls_0_6));
                }
              }
            }
          }
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = NewWords_23;
      next_value_of_CurCol_4 = NewCol_24;
      next_value_of_STATE_VARIABLE_RevWordsSpacesNls_0_6 = STATE_VARIABLE_RevWordsSpacesNls_36_36;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      CurCol_4 = next_value_of_CurCol_4;
      STATE_VARIABLE_RevWordsSpacesNls_0_6 = next_value_of_STATE_VARIABLE_RevWordsSpacesNls_0_6;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_48_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_String Var_12,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String V_6_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String V_8_8;
      MR_Word V_9_9;

      V_8_8 = mercury__string__IntroducedFrom__func__word_wrap_loop__5037__1_2_f_0(Var_12, V_6_6);
      V_9_9 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_49_48_95_95_91_50_93_95_48_2_f_in__list_0(Var_12, V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

static MR_String MR_CALL 
mercury__string__IntroducedFrom__func__word_wrap_loop__5037__1_2_f_0(
  MR_String WordSep_2,
  MR_String LambdaHeadVar__1_60)
{
  {
    MR_String LambdaHeadVar__2_61;
    MR_String Var_62;

{
#define MR_PROC_LABEL mercury__string__IntroducedFrom__func__word_wrap_loop__5037__1_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  WordSep_2 ;
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
	 Var_62  = S3;
}
    LambdaHeadVar__2_61 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_60, Var_62);
    return LambdaHeadVar__2_61;
  }
}

MR_Word MR_CALL 
mercury__string__break_up_string_reverse_3_f_0(
  MR_String Str_5,
  MR_Integer N_6,
  MR_Word Prev_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Strs_8;
    MR_Integer Var_11;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__string__count_codepoints_2_p_0(Str_5, &Var_11);
    succeeded = (Var_11 <= N_6);
    if (succeeded)
      {
        Strs_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Strs_8, 0) = ((MR_Box) (Str_5));
        MR_hl_field(MR_mktag(1), Strs_8, 1) = ((MR_Box) (Prev_7));
      }
    else
    {
      MR_String Left_9;
      MR_String Right_10;
      MR_Word Var_12;
      MR_String next_value_of_Str_5;
      MR_Word next_value_of_Prev_7;

      mercury__string__split_by_codepoint_4_p_0(Str_5, N_6, &Left_9, &Right_10);
      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (Left_9));
        MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Prev_7));
      }
      // direct tailcall eliminated
      ;
      next_value_of_Str_5 = Right_10;
      next_value_of_Prev_7 = Var_12;
      Str_5 = next_value_of_Str_5;
      Prev_7 = next_value_of_Prev_7;
      continue;
    }
    return Strs_8;
    break;
  }
}

MR_String MR_CALL 
mercury__string__replace_all_3_f_0(
  MR_String S1_5,
  MR_String S2_6,
  MR_String S3_7)
{
  {
    MR_String S4_8;

    mercury__string__replace_all_4_p_0(S1_5, S2_6, S3_7, &S4_8);
    return S4_8;
  }
}

void MR_CALL 
mercury__string__replace_all_4_p_0(
  MR_String Str_5,
  MR_String Pat_6,
  MR_String Subst_7,
  MR_String * Result_8)
{
  {
    MR_bool succeeded = (strcmp(Pat_6, (MR_String) "") == 0);

    if (succeeded)
    {
      MR_Word Foldl_12;
      MR_Word Var_22;
      MR_Word Var_23;
      MR_Integer Length_51;
      MR_Integer End_67;
      MR_Integer Var_69;

{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_51  = Length;
}
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_69  = Length;
}
      succeeded = (Length_51 < Var_69);
      if (succeeded)
        End_67 = Length_51;
      else
        End_67 = Var_69;
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_49_95_95_91_49_44_32_51_93_95_48_6_p_0(Subst_7, Str_5, (MR_Integer) 0, End_67, (MR_Word) ((MR_Unsigned) 0U), &Foldl_12);
      mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Foldl_12, &Var_23);
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Subst_7));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_23));
      }
      *Result_8 = mercury__string__append_list_1_f_0(Var_22);
    }
    else
    {
      MR_Integer PatLength_13;
      MR_Word ReversedChunks_14;
      MR_Word Chunks_15;

{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  Pat_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 PatLength_13  = Length;
}
      mercury__string__replace_all_loop_7_p_0(Str_5, Pat_6, Subst_7, PatLength_13, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &ReversedChunks_14);
      Chunks_15 = mercury__list__reverse_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ReversedChunks_14);
      *Result_8 = mercury__string__append_list_1_f_0(Chunks_15);
    }
  }
}

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_49_95_95_91_49_44_32_51_93_95_48_6_p_0(
  MR_String Var_21,
  MR_String String_8,
  MR_Integer I_9,
  MR_Integer End_10,
  MR_Word STATE_VARIABLE_Acc_0_14,
  MR_Word * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_9 < End_10);
    MR_Integer J_12;
    MR_Char Char_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_49_95_95_91_49_44_32_51_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_8 ;
	Index =  I_9 ;
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
	 J_12  = NextIndex;
	 Char_13  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 <= End_10);
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Acc_16_16;
      MR_String Var_51;
      MR_String Var_52;
      MR_Integer next_value_of_I_9;
      MR_Word next_value_of_STATE_VARIABLE_Acc_0_14;

      mercury__string__char_to_string_2_p_0(Char_13, &Var_52);
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_53_49_95_95_91_49_44_32_51_93_95_48_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  Var_52 ;
	S2 =  Var_21 ;
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
	 Var_51  = S3;
}
      {
        STATE_VARIABLE_Acc_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Acc_16_16, 0) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(1), STATE_VARIABLE_Acc_16_16, 1) = ((MR_Box) (STATE_VARIABLE_Acc_0_14));
      }
      // direct tailcall eliminated
      ;
      next_value_of_I_9 = J_12;
      next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_16_16;
      I_9 = next_value_of_I_9;
      STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
    break;
  }
}

void MR_CALL 
mercury__string__char_to_string_2_p_0(
  MR_Char Char_3,
  MR_String * String_4)
{
  {
    MR_bool succeeded;
    MR_Word Var_5;
    MR_String Str0_15;

    {
      Var_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_5, 0) = ((MR_Box) (MR_Word) (Char_3));
      MR_hl_field(MR_mktag(1), Var_5, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    succeeded = mercury__string__semidet_from_char_list_2_p_0(Var_5, &Str0_15);
    if (succeeded)
      *String_4 = Str0_15;
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
  MR_String Str_8,
  MR_String Pat_9,
  MR_String Subst_10,
  MR_Integer PatLength_11,
  MR_Integer BeginAt_12,
  MR_Word RevChunks0_13,
  MR_Word * RevChunks_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Index_15;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__replace_all_loop_7_p_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString =  Str_8 ;
	Pattern =  Pat_9 ;
	BeginAt =  BeginAt_12 ;
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
	 Index_15  = Index;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String Initial_16;
      MR_Integer Start_17;
      MR_Word Var_19;
      MR_Word Var_20;
      MR_Integer next_value_of_BeginAt_12;
      MR_Word next_value_of_RevChunks0_13;

{
#define MR_PROC_LABEL mercury__string__replace_all_loop_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  Str_8 ;
	Start =  BeginAt_12 ;
	End =  Index_15 ;
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
	 Initial_16  = SubString;
}
      Start_17 = (MR_Integer) ((MR_Unsigned) Index_15 + (MR_Unsigned) PatLength_11);
      {
        Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (Initial_16));
        MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (RevChunks0_13));
      }
      {
        Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Subst_10));
        MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_20));
      }
      // direct tailcall eliminated
      ;
      next_value_of_BeginAt_12 = Start_17;
      next_value_of_RevChunks0_13 = Var_19;
      BeginAt_12 = next_value_of_BeginAt_12;
      RevChunks0_13 = next_value_of_RevChunks0_13;
      continue;
    }
    else
    {
      MR_String EndString_18;
      MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__string__replace_all_loop_7_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  Str_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_21  = Length;
}
{
#define MR_PROC_LABEL mercury__string__replace_all_loop_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  Str_8 ;
	Start =  BeginAt_12 ;
	End =  Var_21 ;
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
	 EndString_18  = SubString;
}
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *RevChunks_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (EndString_18));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (RevChunks0_13));
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__string__replace_4_p_0(
  MR_String Str_5,
  MR_String Pat_6,
  MR_String Subst_7,
  MR_String * Result_8)
{
  {
    MR_bool succeeded;
    MR_Integer Index_9;
    MR_String Initial_10;
    MR_Integer BeginAt_11;
    MR_Integer EndAt_12;
    MR_String Final_13;
    MR_Integer Var_14;
    MR_Integer Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;

{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString =  Str_5 ;
	Pattern =  Pat_6 ;
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
	 Index_9  = Index;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      Var_14 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  Str_5 ;
	Start =  Var_14 ;
	End =  Index_9 ;
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
	 Initial_10  = SubString;
}
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  Pat_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_15  = Length;
}
      BeginAt_11 = (MR_Integer) ((MR_Unsigned) Index_9 + (MR_Unsigned) Var_15);
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 EndAt_12  = Length;
}
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  Str_5 ;
	Start =  BeginAt_11 ;
	End =  EndAt_12 ;
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
	 Final_13  = SubString;
}
      Var_19 = (MR_Word) ((MR_Unsigned) 0U);
      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (Final_13));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_19));
      }
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Subst_7));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (Var_18));
      }
      {
        Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Initial_10));
        MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_17));
      }
      *Result_8 = mercury__string__append_list_1_f_0(Var_16);
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_String MR_CALL 
mercury__string__rstrip_pred_2_f_0(
  MR_Word P_4,
  MR_String S_5)
{
  {
    MR_String HeadVar__3_3;
    MR_Integer Var_6;
    MR_Integer Var_7;
    MR_Integer Var_8;
    MR_Integer End_16;
    MR_Integer Index_17;
    MR_String _RightString_29;

{
#define MR_PROC_LABEL mercury__string__rstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  S_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_7  = Length;
}
{
#define MR_PROC_LABEL mercury__string__rstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  S_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 End_16  = Length;
}
    mercury__string__suffix_length_loop_4_p_0(P_4, S_5, End_16, &Index_17);
    Var_8 = (MR_Integer) ((MR_Unsigned) End_16 - (MR_Unsigned) Index_17);
    Var_6 = (MR_Integer) ((MR_Unsigned) Var_7 - (MR_Unsigned) Var_8);
    mercury__string__split_4_p_0(S_5, Var_6, &HeadVar__3_3, &_RightString_29);
    return HeadVar__3_3;
  }
}

MR_String MR_CALL 
mercury__string__lstrip_pred_2_f_0(
  MR_Word P_4,
  MR_String S_5)
{
  {
    MR_String HeadVar__3_3;
    MR_Integer Var_6;
    MR_Integer Var_7;
    MR_Integer Var_8;
    MR_Integer Length_24;
    MR_Integer LeftCount_25;
    MR_String _LeftString_26;

{
#define MR_PROC_LABEL mercury__string__lstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  S_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_7  = Length;
}
    mercury__string__prefix_length_loop_4_p_0(P_4, S_5, (MR_Integer) 0, &Var_8);
    Var_6 = (MR_Integer) ((MR_Unsigned) Var_7 - (MR_Unsigned) Var_8);
{
#define MR_PROC_LABEL mercury__string__lstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  S_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_24  = Length;
}
    LeftCount_25 = (MR_Integer) ((MR_Unsigned) Length_24 - (MR_Unsigned) Var_6);
    mercury__string__split_4_p_0(S_5, LeftCount_25, &_LeftString_26, &HeadVar__3_3);
    return HeadVar__3_3;
  }
}

MR_String MR_CALL 
mercury__string__rstrip_1_f_0(
  MR_String S_3)
{
  {
    MR_String HeadVar__2_2;
    MR_Integer Var_9;
    MR_Integer Var_10;
    MR_Integer Var_11;
    MR_Integer End_20;
    MR_Integer Index_21;
    MR_String _RightString_33;

{
#define MR_PROC_LABEL mercury__string__rstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_10  = Length;
}
{
#define MR_PROC_LABEL mercury__string__rstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 End_20  = Length;
}
    mercury__string__suffix_length_loop__ho35_4_p_0(S_3, End_20, &Index_21);
    Var_11 = (MR_Integer) ((MR_Unsigned) End_20 - (MR_Unsigned) Index_21);
    Var_9 = (MR_Integer) ((MR_Unsigned) Var_10 - (MR_Unsigned) Var_11);
    mercury__string__split_4_p_0(S_3, Var_9, &HeadVar__2_2, &_RightString_33);
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
mercury__string__lstrip_1_f_0(
  MR_String S_3)
{
  {
    MR_String HeadVar__2_2;
    MR_Integer Var_9;
    MR_Integer Var_10;
    MR_Integer Var_11;
    MR_Integer Length_28;
    MR_Integer LeftCount_29;
    MR_String _LeftString_30;

{
#define MR_PROC_LABEL mercury__string__lstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_10  = Length;
}
    mercury__string__prefix_length_loop__ho34_4_p_0(S_3, (MR_Integer) 0, &Var_11);
    Var_9 = (MR_Integer) ((MR_Unsigned) Var_10 - (MR_Unsigned) Var_11);
{
#define MR_PROC_LABEL mercury__string__lstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_28  = Length;
}
    LeftCount_29 = (MR_Integer) ((MR_Unsigned) Length_28 - (MR_Unsigned) Var_9);
    mercury__string__split_4_p_0(S_3, LeftCount_29, &_LeftString_30, &HeadVar__2_2);
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
mercury__string__strip_1_f_0(
  MR_String S0_3)
{
  {
    MR_String S_4;
    MR_Integer L_5;
    MR_Integer R_6;
    MR_Integer Var_9;
    MR_Integer Var_10;
    MR_Integer End_21;
    MR_Integer Index_22;

    mercury__string__prefix_length_loop__ho34_4_p_0(S0_3, (MR_Integer) 0, &L_5);
{
#define MR_PROC_LABEL mercury__string__strip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  S0_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 End_21  = Length;
}
    mercury__string__suffix_length_loop__ho35_4_p_0(S0_3, End_21, &Index_22);
    R_6 = (MR_Integer) ((MR_Unsigned) End_21 - (MR_Unsigned) Index_22);
{
#define MR_PROC_LABEL mercury__string__strip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  S0_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_10  = Length;
}
    Var_9 = (MR_Integer) ((MR_Unsigned) Var_10 - (MR_Unsigned) R_6);
    mercury__string__between_4_p_0(S0_3, L_5, Var_9, &S_4);
    return S_4;
  }
}

static void MR_CALL 
mercury__string__suffix_length_loop__ho35_4_p_0(
  MR_String S_6,
  MR_Integer I_7,
  MR_Integer * Index_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer J_9;
    MR_Char Char_10;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__suffix_length_loop__ho35_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  S_6 ;
	Index =  I_7 ;
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
	 J_9  = PrevIndex;
	 Char_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = mercury__char__is_whitespace_1_p_0(Char_10);
    if (succeeded)
    {
      MR_Integer next_value_of_I_7 = J_9;

      // direct tailcall eliminated
      ;
      I_7 = next_value_of_I_7;
      continue;
    }
    else
      *Index_8 = I_7;
    break;
  }
}

static void MR_CALL 
mercury__string__prefix_length_loop__ho34_4_p_0(
  MR_String S_6,
  MR_Integer I_7,
  MR_Integer * Index_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer J_9;
    MR_Char Char_10;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__prefix_length_loop__ho34_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  S_6 ;
	Index =  I_7 ;
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
	 J_9  = NextIndex;
	 Char_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = mercury__char__is_whitespace_1_p_0(Char_10);
    if (succeeded)
    {
      MR_Integer next_value_of_I_7 = J_9;

      // direct tailcall eliminated
      ;
      I_7 = next_value_of_I_7;
      continue;
    }
    else
      *Index_8 = I_7;
    break;
  }
}

MR_String MR_CALL 
mercury__string__chomp_1_f_0(
  MR_String S_3)
{
  {
    MR_bool succeeded;
    MR_String Chomp_4;
    MR_Integer Offset_5;
    MR_Integer Var_6;
    MR_Char Var_8;
    MR_Integer Len_18;
    MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_6  = Length;
}
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Len_18  = Length;
}
    Var_19 = (MR_Integer) ((MR_Unsigned) Var_6 - (MR_Unsigned) (MR_Integer) 1);
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  Var_19 ;
	Length =  Len_18 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  S_3 ;
	Index =  Var_6 ;
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
	 Offset_5  = PrevIndex;
	 Var_8  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = ((MR_Char) 10 == Var_8);
    }
    if (succeeded)
    {
      MR_String _RightString_35;

      mercury__string__split_4_p_0(S_3, Offset_5, &Chomp_4, &_RightString_35);
    }
    else
      Chomp_4 = S_3;
    return Chomp_4;
  }
}

void MR_CALL 
mercury__string__pad_right_4_p_0(
  MR_String String0_5,
  MR_Char PadChar_6,
  MR_Integer Width_7,
  MR_String * String_8)
{
  {
    MR_bool succeeded;
    MR_Integer Length_9;

    mercury__string__count_codepoints_2_p_0(String0_5, &Length_9);
    succeeded = (Length_9 < Width_7);
    if (succeeded)
    {
      MR_Integer Count_10 = (MR_Integer) ((MR_Unsigned) Width_7 - (MR_Unsigned) Length_9);
      MR_String PadString_11;

      mercury__string__duplicate_char_3_p_0(PadChar_6, Count_10, &PadString_11);
{
#define MR_PROC_LABEL mercury__string__pad_right_4_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  String0_5 ;
	S2 =  PadString_11 ;
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
	 *String_8  = S3;
}
    }
    else
      *String_8 = String0_5;
  }
}

MR_String MR_CALL 
mercury__string__pad_right_3_f_0(
  MR_String S1_5,
  MR_Char C_6,
  MR_Integer N_7)
{
  {
    MR_bool succeeded;
    MR_String S2_8;
    MR_Integer Length_13;

    mercury__string__count_codepoints_2_p_0(S1_5, &Length_13);
    succeeded = (Length_13 < N_7);
    if (succeeded)
    {
      MR_Integer Count_14 = (MR_Integer) ((MR_Unsigned) N_7 - (MR_Unsigned) Length_13);
      MR_String PadString_15;

      mercury__string__duplicate_char_3_p_0(C_6, Count_14, &PadString_15);
{
#define MR_PROC_LABEL mercury__string__pad_right_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  S1_5 ;
	S2 =  PadString_15 ;
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
	 S2_8  = S3;
}
    }
    else
      S2_8 = S1_5;
    return S2_8;
  }
}

void MR_CALL 
mercury__string__pad_left_4_p_0(
  MR_String String0_5,
  MR_Char PadChar_6,
  MR_Integer Width_7,
  MR_String * String_8)
{
  {
    MR_bool succeeded;
    MR_Integer Length_9;

    mercury__string__count_codepoints_2_p_0(String0_5, &Length_9);
    succeeded = (Length_9 < Width_7);
    if (succeeded)
    {
      MR_Integer Count_10 = (MR_Integer) ((MR_Unsigned) Width_7 - (MR_Unsigned) Length_9);
      MR_String PadString_11;

      mercury__string__duplicate_char_3_p_0(PadChar_6, Count_10, &PadString_11);
{
#define MR_PROC_LABEL mercury__string__pad_left_4_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  PadString_11 ;
	S2 =  String0_5 ;
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
	 *String_8  = S3;
}
    }
    else
      *String_8 = String0_5;
  }
}

MR_String MR_CALL 
mercury__string__pad_left_3_f_0(
  MR_String S1_5,
  MR_Char C_6,
  MR_Integer N_7)
{
  {
    MR_bool succeeded;
    MR_String S2_8;
    MR_Integer Length_13;

    mercury__string__count_codepoints_2_p_0(S1_5, &Length_13);
    succeeded = (Length_13 < N_7);
    if (succeeded)
    {
      MR_Integer Count_14 = (MR_Integer) ((MR_Unsigned) N_7 - (MR_Unsigned) Length_13);
      MR_String PadString_15;

      mercury__string__duplicate_char_3_p_0(C_6, Count_14, &PadString_15);
{
#define MR_PROC_LABEL mercury__string__pad_left_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  PadString_15 ;
	S2 =  S1_5 ;
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
	 S2_8  = S3;
}
    }
    else
      S2_8 = S1_5;
    return S2_8;
  }
}

MR_bool MR_CALL 
mercury__string__to_lower_2_p_1(
  MR_String X_1,
  MR_String Y_2)
{
  {
    MR_bool succeeded;
    MR_Integer LenX_9;
    MR_Integer LenY_10;
    MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  X_1 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 LenX_9  = Length;
}
{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  Y_2 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 LenY_10  = Length;
}
    succeeded = (LenX_9 == LenY_10);
    if (succeeded)
    {
      Var_11 = (MR_Integer) 0;
      succeeded = mercury__string__check_lower_loop_4_p_0(X_1, Y_2, Var_11, LenX_9);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__check_lower_loop_4_p_0(
  MR_String X_5,
  MR_String Y_6,
  MR_Integer Index_7,
  MR_Integer End_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_7 == End_8);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer CodeX_9;
      MR_Integer CodeY_10;
      MR_Integer Var_11;
      MR_Integer Var_12;
      MR_Integer Var_13;
      MR_Integer next_value_of_Index_7;

{
#define MR_PROC_LABEL mercury__string__check_lower_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  X_5 ;
	Index =  Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 CodeX_9  = Code;
}
{
#define MR_PROC_LABEL mercury__string__check_lower_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  Y_6 ;
	Index =  Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 CodeY_10  = Code;
}
      mercury__string__to_lower_code_unit_2_p_0(CodeX_9, &Var_13);
      succeeded = (CodeY_10 == Var_13);
      if (succeeded)
      {
        Var_12 = (MR_Integer) 1;
        Var_11 = (MR_Integer) ((MR_Unsigned) Index_7 + (MR_Unsigned) Var_12);
        // direct tailcall eliminated
        ;
        next_value_of_Index_7 = Var_11;
        Index_7 = next_value_of_Index_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__string__to_lower_code_unit_2_p_0(
  MR_Integer Code0_3,
  MR_Integer * Code_4)
{
  {
    MR_bool succeeded;
    MR_Integer Var_5;
    MR_Integer Var_7;
    MR_Char Var_8;

{
#define MR_PROC_LABEL mercury__string__to_lower_code_unit_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  (MR_Char) 65 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_5  = Int;
}
    succeeded = (Code0_3 >= Var_5);
    if (succeeded)
    {
      Var_8 = (MR_Char) 90;
{
#define MR_PROC_LABEL mercury__string__to_lower_code_unit_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  Var_8 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_7  = Int;
}
      succeeded = (Code0_3 <= Var_7);
    }
    if (succeeded)
    {
      MR_Integer Var_9;
      MR_Integer Var_10;
      MR_Integer Var_12;

{
#define MR_PROC_LABEL mercury__string__to_lower_code_unit_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  (MR_Char) 65 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_10  = Int;
}
      Var_9 = (MR_Integer) ((MR_Unsigned) Code0_3 - (MR_Unsigned) Var_10);
{
#define MR_PROC_LABEL mercury__string__to_lower_code_unit_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  (MR_Char) 97 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_12  = Int;
}
      *Code_4 = (MR_Integer) ((MR_Unsigned) Var_9 + (MR_Unsigned) Var_12);
    }
    else
      *Code_4 = Code0_3;
  }
}

void MR_CALL 
mercury__string__to_lower_2_p_0(
  MR_String X_1,
  MR_String * Y_2)
{
  {
{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_0

	MR_String StrIn;
	MR_String StrOut;

	StrIn =  X_1 ;
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
	 *Y_2  = StrOut;
}
  }
}

MR_String MR_CALL 
mercury__string__to_lower_1_f_0(
  MR_String S1_3)
{
  {
    MR_String S2_4;

{
#define MR_PROC_LABEL mercury__string__to_lower_1_f_0

	MR_String StrIn;
	MR_String StrOut;

	StrIn =  S1_3 ;
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
	 S2_4  = StrOut;
}
    return S2_4;
  }
}

MR_bool MR_CALL 
mercury__string__to_upper_2_p_1(
  MR_String X_1,
  MR_String Y_2)
{
  {
    MR_bool succeeded;
    MR_Integer LenX_9;
    MR_Integer LenY_10;
    MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  X_1 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 LenX_9  = Length;
}
{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  Y_2 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 LenY_10  = Length;
}
    succeeded = (LenX_9 == LenY_10);
    if (succeeded)
    {
      Var_11 = (MR_Integer) 0;
      succeeded = mercury__string__check_upper_loop_4_p_0(X_1, Y_2, Var_11, LenX_9);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__check_upper_loop_4_p_0(
  MR_String X_5,
  MR_String Y_6,
  MR_Integer Index_7,
  MR_Integer End_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_7 == End_8);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer CodeX_9;
      MR_Integer CodeY_10;
      MR_Integer Var_11;
      MR_Integer Var_12;
      MR_Integer Var_13;
      MR_Integer next_value_of_Index_7;

{
#define MR_PROC_LABEL mercury__string__check_upper_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  X_5 ;
	Index =  Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 CodeX_9  = Code;
}
{
#define MR_PROC_LABEL mercury__string__check_upper_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  Y_6 ;
	Index =  Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 CodeY_10  = Code;
}
      mercury__string__to_upper_code_unit_2_p_0(CodeX_9, &Var_13);
      succeeded = (CodeY_10 == Var_13);
      if (succeeded)
      {
        Var_12 = (MR_Integer) 1;
        Var_11 = (MR_Integer) ((MR_Unsigned) Index_7 + (MR_Unsigned) Var_12);
        // direct tailcall eliminated
        ;
        next_value_of_Index_7 = Var_11;
        Index_7 = next_value_of_Index_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__string__to_upper_code_unit_2_p_0(
  MR_Integer Code0_3,
  MR_Integer * Code_4)
{
  {
    MR_bool succeeded;
    MR_Integer Var_5;
    MR_Integer Var_7;
    MR_Char Var_8;

{
#define MR_PROC_LABEL mercury__string__to_upper_code_unit_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  (MR_Char) 97 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_5  = Int;
}
    succeeded = (Code0_3 >= Var_5);
    if (succeeded)
    {
      Var_8 = (MR_Char) 122;
{
#define MR_PROC_LABEL mercury__string__to_upper_code_unit_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  Var_8 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_7  = Int;
}
      succeeded = (Code0_3 <= Var_7);
    }
    if (succeeded)
    {
      MR_Integer Var_9;
      MR_Integer Var_10;
      MR_Integer Var_12;

{
#define MR_PROC_LABEL mercury__string__to_upper_code_unit_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  (MR_Char) 97 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_10  = Int;
}
      Var_9 = (MR_Integer) ((MR_Unsigned) Code0_3 - (MR_Unsigned) Var_10);
{
#define MR_PROC_LABEL mercury__string__to_upper_code_unit_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  (MR_Char) 65 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 Var_12  = Int;
}
      *Code_4 = (MR_Integer) ((MR_Unsigned) Var_9 + (MR_Unsigned) Var_12);
    }
    else
      *Code_4 = Code0_3;
  }
}

void MR_CALL 
mercury__string__to_upper_2_p_0(
  MR_String X_1,
  MR_String * Y_2)
{
  {
{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_0

	MR_String StrIn;
	MR_String StrOut;

	StrIn =  X_1 ;
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
	 *Y_2  = StrOut;
}
  }
}

MR_String MR_CALL 
mercury__string__to_upper_1_f_0(
  MR_String S1_3)
{
  {
    MR_String S2_4;

{
#define MR_PROC_LABEL mercury__string__to_upper_1_f_0

	MR_String StrIn;
	MR_String StrOut;

	StrIn =  S1_3 ;
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
	 S2_4  = StrOut;
}
    return S2_4;
  }
}

MR_String MR_CALL 
mercury__string__uncapitalize_first_1_f_0(
  MR_String S1_3)
{
  {
    MR_String S2_4;

    mercury__string__uncapitalize_first_2_p_0(S1_3, &S2_4);
    return S2_4;
  }
}

void MR_CALL 
mercury__string__uncapitalize_first_2_p_0(
  MR_String S0_3,
  MR_String * S_4)
{
  {
    MR_bool succeeded;
    MR_Char C_5;
    MR_String S1_6;

{
#define MR_PROC_LABEL mercury__string__uncapitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  S0_3 ;
		{
{
    MR_Integer pos = 0;
    First = MR_utf8_get_next(Str, &pos);
    if (First < 1) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Str += pos;
        // We need to make a copy to ensure that the pointer is word-aligned.
        MR_allocate_aligned_string_msg(Rest, strlen(Str), MR_ALLOC_ID);
        strcpy(Rest, Str);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 C_5  = First;
	 S1_6  = Rest;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Char LowerC_7;
      MR_Char V_5_10;

      succeeded = mercury__char__lower_upper_2_p_1(&V_5_10, C_5);
      if (succeeded)
        LowerC_7 = V_5_10;
      else
        LowerC_7 = C_5;
{
#define MR_PROC_LABEL mercury__string__uncapitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  LowerC_7 ;
	Rest =  S1_6 ;
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
	 *S_4  = Str;
}
    }
    else
      *S_4 = S0_3;
  }
}

MR_String MR_CALL 
mercury__string__capitalize_first_1_f_0(
  MR_String S1_3)
{
  {
    MR_String S2_4;

    mercury__string__capitalize_first_2_p_0(S1_3, &S2_4);
    return S2_4;
  }
}

void MR_CALL 
mercury__string__capitalize_first_2_p_0(
  MR_String S0_3,
  MR_String * S_4)
{
  {
    MR_bool succeeded;
    MR_Char C_5;
    MR_String S1_6;

{
#define MR_PROC_LABEL mercury__string__capitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  S0_3 ;
		{
{
    MR_Integer pos = 0;
    First = MR_utf8_get_next(Str, &pos);
    if (First < 1) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Str += pos;
        // We need to make a copy to ensure that the pointer is word-aligned.
        MR_allocate_aligned_string_msg(Rest, strlen(Str), MR_ALLOC_ID);
        strcpy(Rest, Str);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 C_5  = First;
	 S1_6  = Rest;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Char UpperC_7;
      MR_Char V_5_10;

      succeeded = mercury__char__lower_upper_2_p_0(C_5, &V_5_10);
      if (succeeded)
        UpperC_7 = V_5_10;
      else
        UpperC_7 = C_5;
{
#define MR_PROC_LABEL mercury__string__capitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  UpperC_7 ;
	Rest =  S1_6 ;
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
	 *S_4  = Str;
}
    }
    else
      *S_4 = S0_3;
  }
}

MR_String MR_CALL 
mercury__string__remove_suffix_if_present_2_f_0(
  MR_String Suffix_4,
  MR_String String_5)
{
  {
    MR_bool succeeded;
    MR_String Out_6;
    MR_Integer LeftCount_7;
    MR_String LeftString_8;
    MR_String RightString_9;
    MR_Integer Var_10;
    MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__string__remove_suffix_if_present_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_10  = Length;
}
{
#define MR_PROC_LABEL mercury__string__remove_suffix_if_present_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  Suffix_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_11  = Length;
}
    LeftCount_7 = (MR_Integer) ((MR_Unsigned) Var_10 - (MR_Unsigned) Var_11);
    mercury__string__split_4_p_0(String_5, LeftCount_7, &LeftString_8, &RightString_9);
    succeeded = (strcmp(RightString_9, Suffix_4) == 0);
    if (succeeded)
      Out_6 = LeftString_8;
    else
      Out_6 = String_5;
    return Out_6;
  }
}

MR_String MR_CALL 
mercury__string__det_remove_suffix_2_f_0(
  MR_String String_4,
  MR_String Suffix_5)
{
  {
    MR_bool succeeded;
    MR_String Prefix_6;
    MR_String PrefixPrime_7;

    succeeded = mercury__string__remove_suffix_3_p_0(String_4, Suffix_5, &PrefixPrime_7);
    if (succeeded)
      Prefix_6 = PrefixPrime_7;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140string.det_remove_suffix\'/2", (MR_String) "string does not have given suffix");
    }
    return Prefix_6;
  }
}

MR_bool MR_CALL 
mercury__string__remove_suffix_3_p_0(
  MR_String String_4,
  MR_String Suffix_5,
  MR_String * Prefix_6)
{
  {
    MR_bool succeeded;
    MR_Integer Var_7;
    MR_Integer Var_8;
    MR_Integer Var_9;
    MR_Integer Len_12;
    MR_Integer PreLen_13;
    MR_Integer Var_14;
    MR_Integer Var_15;
    MR_String _RightString_43;

{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Len_12  = Length;
}
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  Suffix_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 PreLen_13  = Length;
}
    succeeded = (PreLen_13 <= Len_12);
    if (succeeded)
    {
      Var_14 = (MR_Integer) 0;
      Var_15 = (MR_Integer) ((MR_Unsigned) Len_12 - (MR_Unsigned) PreLen_13);
      succeeded = mercury__string__suffix_2_iiii_5_p_0(String_4, Suffix_5, Var_14, Var_15, PreLen_13);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_8  = Length;
}
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  Suffix_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_9  = Length;
}
        Var_7 = (MR_Integer) ((MR_Unsigned) Var_8 - (MR_Unsigned) Var_9);
        mercury__string__split_4_p_0(String_4, Var_7, Prefix_6, &_RightString_43);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_String MR_CALL 
mercury__string__remove_prefix_if_present_2_f_0(
  MR_String Prefix_4,
  MR_String String_5)
{
  {
    MR_bool succeeded;
    MR_String Out_6;
    MR_String Suffix_7;

{
#define MR_PROC_LABEL mercury__string__remove_prefix_if_present_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  Prefix_4 ;
	S3 =  String_5 ;
		{
{
    size_t len_1, len_2, len_3;

    len_1 = strlen(S1);
    if (strncmp(S1, S3, len_1) != 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        len_3 = strlen(S3);
        len_2 = len_3 - len_1;
        // We need to make a copy to ensure that the pointer is word-aligned.
        MR_allocate_aligned_string_msg(S2, len_2, MR_ALLOC_ID);
        strcpy(S2, S3 + len_1);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Suffix_7  = S2;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Out_6 = Suffix_7;
    else
      Out_6 = String_5;
    return Out_6;
  }
}

void MR_CALL 
mercury__string__det_remove_prefix_3_p_0(
  MR_String Prefix_4,
  MR_String String_5,
  MR_String * Suffix_6)
{
  {
    MR_bool succeeded;
    MR_String SuffixPrime_7;

{
#define MR_PROC_LABEL mercury__string__det_remove_prefix_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  Prefix_4 ;
	S3 =  String_5 ;
		{
{
    size_t len_1, len_2, len_3;

    len_1 = strlen(S1);
    if (strncmp(S1, S3, len_1) != 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        len_3 = strlen(S3);
        len_2 = len_3 - len_1;
        // We need to make a copy to ensure that the pointer is word-aligned.
        MR_allocate_aligned_string_msg(S2, len_2, MR_ALLOC_ID);
        strcpy(S2, S3 + len_1);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 SuffixPrime_7  = S2;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      *Suffix_6 = SuffixPrime_7;
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
  MR_String Prefix_4,
  MR_String String_5,
  MR_String * Suffix_6)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__remove_prefix_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  Prefix_4 ;
	S3 =  String_5 ;
		{
{
    size_t len_1, len_2, len_3;

    len_1 = strlen(S1);
    if (strncmp(S1, S3, len_1) != 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        len_3 = strlen(S3);
        len_2 = len_3 - len_1;
        // We need to make a copy to ensure that the pointer is word-aligned.
        MR_allocate_aligned_string_msg(S2, len_2, MR_ALLOC_ID);
        strcpy(S2, S3 + len_1);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *Suffix_6  = S2;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__string__suffix_2_p_1(
  MR_String String_1,
  MR_String * Suffix_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer Len_11;

{
#define MR_PROC_LABEL mercury__string__suffix_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  String_1 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Len_11  = Length;
}
    mercury__string__suffix_2_ioii_4_p_0(String_1, Suffix_2, Len_11, Len_11, cont, cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__suffix_2_ioii_4_p_0(
  MR_String String_5,
  MR_String * Suffix_6,
  MR_Integer Cur_7,
  MR_Integer Len_8,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_non tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__suffix_2_ioii_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  String_5 ;
	Start =  Cur_7 ;
	End =  Len_8 ;
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
	 *Suffix_6  = SubString;
}
    cont(cont_env_ptr);
    {
      MR_Integer Prev_9;
      MR_Char Var_10;
      MR_Integer next_value_of_Cur_7;

{
#define MR_PROC_LABEL mercury__string__suffix_2_ioii_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_5 ;
	Index =  Cur_7 ;
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
	 Prev_9  = PrevIndex;
	 Var_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_Cur_7 = Prev_9;
        Cur_7 = next_value_of_Cur_7;
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__string__suffix_2_p_0(
  MR_String String_1,
  MR_String Suffix_2)
{
  {
    MR_bool succeeded;
    MR_Integer Len_5;
    MR_Integer PreLen_6;
    MR_Integer Var_7;
    MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__string__suffix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_1 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Len_5  = Length;
}
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  Suffix_2 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 PreLen_6  = Length;
}
    succeeded = (PreLen_6 <= Len_5);
    if (succeeded)
    {
      Var_7 = (MR_Integer) 0;
      Var_8 = (MR_Integer) ((MR_Unsigned) Len_5 - (MR_Unsigned) PreLen_6);
      succeeded = mercury__string__suffix_2_iiii_5_p_0(String_1, Suffix_2, Var_7, Var_8, PreLen_6);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__suffix_2_iiii_5_p_0(
  MR_String String_6,
  MR_String Suffix_7,
  MR_Integer I_8,
  MR_Integer Offset_9,
  MR_Integer Len_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_8 < Len_10);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer C_11;
      MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) I_8 + (MR_Unsigned) Offset_9);
      MR_Integer Var_13;
      MR_Integer Var_14;
      MR_Integer Var_15;
      MR_Integer next_value_of_I_8;

{
#define MR_PROC_LABEL mercury__string__suffix_2_iiii_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  String_6 ;
	Index =  Var_12 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 C_11  = Code;
}
{
#define MR_PROC_LABEL mercury__string__suffix_2_iiii_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  Suffix_7 ;
	Index =  I_8 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 Var_15  = Code;
}
      succeeded = (C_11 == Var_15);
      if (succeeded)
      {
        Var_14 = (MR_Integer) 1;
        Var_13 = (MR_Integer) ((MR_Unsigned) I_8 + (MR_Unsigned) Var_14);
        // direct tailcall eliminated
        ;
        next_value_of_I_8 = Var_13;
        I_8 = next_value_of_I_8;
        continue;
      }
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__string__prefix_2_p_1(
  MR_String String_1,
  MR_String * Prefix_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    mercury__string__prefix_2_ioi_3_p_0(String_1, Prefix_2, (MR_Integer) 0, cont, cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__prefix_2_ioi_3_p_0(
  MR_String String_4,
  MR_String * Prefix_5,
  MR_Integer Cur_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_non tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__prefix_2_ioi_3_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  String_4 ;
	Start =  (MR_Integer) 0 ;
	End =  Cur_6 ;
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
	 *Prefix_5  = SubString;
}
    cont(cont_env_ptr);
    {
      MR_Integer Next_7;
      MR_Char Var_8;
      MR_Integer next_value_of_Cur_6;

{
#define MR_PROC_LABEL mercury__string__prefix_2_ioi_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_4 ;
	Index =  Cur_6 ;
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
	 Next_7  = NextIndex;
	 Var_8  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_Cur_6 = Next_7;
        Cur_6 = next_value_of_Cur_6;
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__string__prefix_2_p_0(
  MR_String String_1,
  MR_String Prefix_2)
{
  {
    MR_bool succeeded;
    MR_Integer Len_5;
    MR_Integer PreLen_6;
    MR_Integer Var_7;
    MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__string__prefix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_1 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Len_5  = Length;
}
{
#define MR_PROC_LABEL mercury__string__prefix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  Prefix_2 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 PreLen_6  = Length;
}
    succeeded = (PreLen_6 <= Len_5);
    if (succeeded)
    {
      Var_8 = (MR_Integer) 1;
      Var_7 = (MR_Integer) ((MR_Unsigned) PreLen_6 - (MR_Unsigned) Var_8);
      succeeded = mercury__string__prefix_2_iii_3_p_0(String_1, Prefix_2, Var_7);
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__prefix_2_iii_3_p_0(
  MR_String String_4,
  MR_String Prefix_5,
  MR_Integer I_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_Integer) 0 <= I_6);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer C_7;
      MR_Integer Var_9;
      MR_Integer Var_10;
      MR_Integer Var_11;
      MR_Integer next_value_of_I_6;

{
#define MR_PROC_LABEL mercury__string__prefix_2_iii_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  String_4 ;
	Index =  I_6 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 C_7  = Code;
}
{
#define MR_PROC_LABEL mercury__string__prefix_2_iii_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  Prefix_5 ;
	Index =  I_6 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 Var_11  = Code;
}
      succeeded = (C_7 == Var_11);
      if (succeeded)
      {
        Var_10 = (MR_Integer) 1;
        Var_9 = (MR_Integer) ((MR_Unsigned) I_6 - (MR_Unsigned) Var_10);
        // direct tailcall eliminated
        ;
        next_value_of_I_6 = Var_9;
        I_6 = next_value_of_I_6;
        continue;
      }
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
mercury__string__split_at_string_2_f_0(
  MR_String Needle_4,
  MR_String Total_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Integer Var_7;

{
#define MR_PROC_LABEL mercury__string__split_at_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  Needle_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_7  = Length;
}
    HeadVar__3_3 = mercury__string__split_at_string_loop_4_f_0((MR_Integer) 0, Var_7, Needle_4, Total_5);
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__string__split_at_string_loop_4_f_0(
  MR_Integer StartAt_6,
  MR_Integer NeedleLen_7,
  MR_String Needle_8,
  MR_String Total_9)
{
  {
    MR_bool succeeded;
    MR_Word Out_10;
    MR_Integer NeedlePos_11;

{
#define MR_PROC_LABEL mercury__string__split_at_string_loop_4_f_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString =  Total_9 ;
	Pattern =  Needle_8 ;
	BeginAt =  StartAt_6 ;
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
	 NeedlePos_11  = Index;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String BeforeNeedle_12;
      MR_Word Tail_13;
      MR_Integer Var_16;

      mercury__string__between_4_p_0(Total_9, StartAt_6, NeedlePos_11, &BeforeNeedle_12);
      Var_16 = (MR_Integer) ((MR_Unsigned) NeedlePos_11 + (MR_Unsigned) NeedleLen_7);
      Tail_13 = mercury__string__split_at_string_loop_4_f_0(Var_16, NeedleLen_7, Needle_8, Total_9);
      {
        Out_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Out_10, 0) = ((MR_Box) (BeforeNeedle_12));
        MR_hl_field(MR_mktag(1), Out_10, 1) = ((MR_Box) (Tail_13));
      }
    }
    else
    {
      MR_String Last_15;
      MR_String _Skip_14;

      mercury__string__split_4_p_0(Total_9, StartAt_6, &_Skip_14, &Last_15);
      {
        Out_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Out_10, 0) = ((MR_Box) (Last_15));
        MR_hl_field(MR_mktag(1), Out_10, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    return Out_10;
  }
}

MR_Word MR_CALL 
mercury__string__split_at_char_2_f_0(
  MR_Char C_4,
  MR_String String_5)
{
  {
    MR_Word HeadVar__3_3;
    MR_Integer Len_12;

{
#define MR_PROC_LABEL mercury__string__split_at_char_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Len_12  = Length;
}
    mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_51_95_95_91_50_93_95_48_6_p_0(C_4, String_5, Len_12, Len_12, (MR_Word) ((MR_Unsigned) 0U), &HeadVar__3_3);
    return HeadVar__3_3;
  }
}

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_51_95_95_91_50_93_95_48_6_p_0(
  MR_Char Var_25,
  MR_String Str_8,
  MR_Integer CurPos_9,
  MR_Integer PastSegEnd_10,
  MR_Word STATE_VARIABLE_Segments_0_16,
  MR_Word * STATE_VARIABLE_Segments_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer PrevPos_12;
    MR_Char Char_13;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_51_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  Str_8 ;
	Index =  CurPos_9 ;
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
	 PrevPos_12  = PrevIndex;
	 Char_13  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (Var_25 == Char_13);
      if (succeeded)
      {
        MR_String Segment_15;
        MR_Word STATE_VARIABLE_Segments_18_18;
        MR_Integer next_value_of_CurPos_9;
        MR_Integer next_value_of_PastSegEnd_10;
        MR_Word next_value_of_STATE_VARIABLE_Segments_0_16;

{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_51_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  Str_8 ;
	Start =  CurPos_9 ;
	End =  PastSegEnd_10 ;
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
	 Segment_15  = SubString;
}
        {
          STATE_VARIABLE_Segments_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Segments_18_18, 0) = ((MR_Box) (Segment_15));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Segments_18_18, 1) = ((MR_Box) (STATE_VARIABLE_Segments_0_16));
        }
        // direct tailcall eliminated
        ;
        next_value_of_CurPos_9 = PrevPos_12;
        next_value_of_PastSegEnd_10 = PrevPos_12;
        next_value_of_STATE_VARIABLE_Segments_0_16 = STATE_VARIABLE_Segments_18_18;
        CurPos_9 = next_value_of_CurPos_9;
        PastSegEnd_10 = next_value_of_PastSegEnd_10;
        STATE_VARIABLE_Segments_0_16 = next_value_of_STATE_VARIABLE_Segments_0_16;
        continue;
      }
      else
      {
        MR_Integer next_value_of_CurPos_9 = PrevPos_12;

        // direct tailcall eliminated
        ;
        CurPos_9 = next_value_of_CurPos_9;
        continue;
      }
    }
    else
    {
      MR_String Segment_24;

{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_51_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  Str_8 ;
	Start =  (MR_Integer) 0 ;
	End =  PastSegEnd_10 ;
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
	 Segment_24  = SubString;
}
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Segments_17 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Segment_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Segments_0_16));
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__string__split_at_separator_2_f_0(
  MR_Word DelimP_4,
  MR_String Str_5)
{
  {
    MR_Word Segments_6;
    MR_Integer Len_7;

{
#define MR_PROC_LABEL mercury__string__split_at_separator_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Len_7  = Length;
}
    mercury__string__split_at_separator_loop_6_p_0(DelimP_4, Str_5, Len_7, Len_7, (MR_Word) ((MR_Unsigned) 0U), &Segments_6);
    return Segments_6;
  }
}

void MR_CALL 
mercury__string__split_at_separator_loop_6_p_0(
  MR_Word DelimP_7,
  MR_String Str_8,
  MR_Integer CurPos_9,
  MR_Integer PastSegEnd_10,
  MR_Word STATE_VARIABLE_Segments_0_16,
  MR_Word * STATE_VARIABLE_Segments_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer PrevPos_12;
    MR_Char Char_13;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__split_at_separator_loop_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  Str_8 ;
	Index =  CurPos_9 ;
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
	 PrevPos_12  = PrevIndex;
	 Char_13  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), DelimP_7, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (DelimP_7)), ((MR_Box) (MR_Word) (Char_13)));
      if (succeeded)
      {
        MR_String Segment_15;
        MR_Word STATE_VARIABLE_Segments_18_18;
        MR_Integer next_value_of_CurPos_9;
        MR_Integer next_value_of_PastSegEnd_10;
        MR_Word next_value_of_STATE_VARIABLE_Segments_0_16;

{
#define MR_PROC_LABEL mercury__string__split_at_separator_loop_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  Str_8 ;
	Start =  CurPos_9 ;
	End =  PastSegEnd_10 ;
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
	 Segment_15  = SubString;
}
        {
          STATE_VARIABLE_Segments_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Segments_18_18, 0) = ((MR_Box) (Segment_15));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Segments_18_18, 1) = ((MR_Box) (STATE_VARIABLE_Segments_0_16));
        }
        // direct tailcall eliminated
        ;
        next_value_of_CurPos_9 = PrevPos_12;
        next_value_of_PastSegEnd_10 = PrevPos_12;
        next_value_of_STATE_VARIABLE_Segments_0_16 = STATE_VARIABLE_Segments_18_18;
        CurPos_9 = next_value_of_CurPos_9;
        PastSegEnd_10 = next_value_of_PastSegEnd_10;
        STATE_VARIABLE_Segments_0_16 = next_value_of_STATE_VARIABLE_Segments_0_16;
        continue;
      }
      else
      {
        MR_Integer next_value_of_CurPos_9 = PrevPos_12;

        // direct tailcall eliminated
        ;
        CurPos_9 = next_value_of_CurPos_9;
        continue;
      }
    }
    else
    {
      MR_String Segment_24;

{
#define MR_PROC_LABEL mercury__string__split_at_separator_loop_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  Str_8 ;
	Start =  (MR_Integer) 0 ;
	End =  PastSegEnd_10 ;
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
	 Segment_24  = SubString;
}
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Segments_17 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Segment_24));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Segments_0_16));
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__string__words_1_f_0(
  MR_String String_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Integer WordStart_10;

    mercury__string__skip_to_next_word_start__ho37_4_p_0(String_3, (MR_Integer) 0, &WordStart_10);
    mercury__string__words_loop__ho38_4_p_0(String_3, WordStart_10, &HeadVar__2_2);
    return HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__string__words_loop__ho38_4_p_0(
  MR_String String_6,
  MR_Integer WordStartPos_7,
  MR_Word * Words_8)
{
  {
    MR_bool succeeded;
    MR_Integer PastWordEndPos_9;

    mercury__string__skip_to_word_end__ho47_4_p_0(String_6, WordStartPos_7, &PastWordEndPos_9);
    succeeded = (PastWordEndPos_9 == WordStartPos_7);
    if (succeeded)
      *Words_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String HeadWord_10;
      MR_Integer NextWordStartPos_11;

{
#define MR_PROC_LABEL mercury__string__words_loop__ho38_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  String_6 ;
	Start =  WordStartPos_7 ;
	End =  PastWordEndPos_9 ;
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
	 HeadWord_10  = SubString;
}
      mercury__string__skip_to_next_word_start__ho37_4_p_0(String_6, PastWordEndPos_9, &NextWordStartPos_11);
      succeeded = (PastWordEndPos_9 == NextWordStartPos_11);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Words_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadWord_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word TailWords_12;

        mercury__string__words_loop__ho38_4_p_0(String_6, NextWordStartPos_11, &TailWords_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Words_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadWord_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailWords_12));
        }
      }
    }
  }
}

static void MR_CALL 
mercury__string__skip_to_word_end__ho47_4_p_0(
  MR_String String_6,
  MR_Integer CurPos_7,
  MR_Integer * PastWordEndPos_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer NextPos_9;
    MR_Char Char_10;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__skip_to_word_end__ho47_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_6 ;
	Index =  CurPos_7 ;
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
	 NextPos_9  = NextIndex;
	 Char_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = mercury__char__is_whitespace_1_p_0(Char_10);
      if (succeeded)
        *PastWordEndPos_8 = CurPos_7;
      else
      {
        MR_Integer next_value_of_CurPos_7 = NextPos_9;

        // direct tailcall eliminated
        ;
        CurPos_7 = next_value_of_CurPos_7;
        continue;
      }
    }
    else
      *PastWordEndPos_8 = CurPos_7;
    break;
  }
}

static void MR_CALL 
mercury__string__skip_to_next_word_start__ho37_4_p_0(
  MR_String String_6,
  MR_Integer CurPos_7,
  MR_Integer * NextWordStartPos_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer NextPos_9;
    MR_Char Char_10;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__skip_to_next_word_start__ho37_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_6 ;
	Index =  CurPos_7 ;
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
	 NextPos_9  = NextIndex;
	 Char_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = mercury__char__is_whitespace_1_p_0(Char_10);
    if (succeeded)
    {
      MR_Integer next_value_of_CurPos_7 = NextPos_9;

      // direct tailcall eliminated
      ;
      CurPos_7 = next_value_of_CurPos_7;
      continue;
    }
    else
      *NextWordStartPos_8 = CurPos_7;
    break;
  }
}

MR_Word MR_CALL 
mercury__string__words_separator_2_f_0(
  MR_Word SepP_4,
  MR_String String_5)
{
  {
    MR_Word Words_6;
    MR_Integer WordStart_7;

    mercury__string__skip_to_next_word_start_4_p_0(SepP_4, String_5, (MR_Integer) 0, &WordStart_7);
    mercury__string__words_loop_4_p_0(SepP_4, String_5, WordStart_7, &Words_6);
    return Words_6;
  }
}

void MR_CALL 
mercury__string__words_loop_4_p_0(
  MR_Word SepP_5,
  MR_String String_6,
  MR_Integer WordStartPos_7,
  MR_Word * Words_8)
{
  {
    MR_bool succeeded;
    MR_Integer PastWordEndPos_9;

    mercury__string__skip_to_word_end_4_p_0(SepP_5, String_6, WordStartPos_7, &PastWordEndPos_9);
    succeeded = (PastWordEndPos_9 == WordStartPos_7);
    if (succeeded)
      *Words_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String HeadWord_10;
      MR_Integer NextWordStartPos_11;

{
#define MR_PROC_LABEL mercury__string__words_loop_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  String_6 ;
	Start =  WordStartPos_7 ;
	End =  PastWordEndPos_9 ;
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
	 HeadWord_10  = SubString;
}
      mercury__string__skip_to_next_word_start_4_p_0(SepP_5, String_6, PastWordEndPos_9, &NextWordStartPos_11);
      succeeded = (PastWordEndPos_9 == NextWordStartPos_11);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Words_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadWord_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word TailWords_12;

        mercury__string__words_loop_4_p_0(SepP_5, String_6, NextWordStartPos_11, &TailWords_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Words_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadWord_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailWords_12));
        }
      }
    }
  }
}

void MR_CALL 
mercury__string__skip_to_word_end_4_p_0(
  MR_Word SepP_5,
  MR_String String_6,
  MR_Integer CurPos_7,
  MR_Integer * PastWordEndPos_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer NextPos_9;
    MR_Char Char_10;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__skip_to_word_end_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_6 ;
	Index =  CurPos_7 ;
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
	 NextPos_9  = NextIndex;
	 Char_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), SepP_5, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (SepP_5)), ((MR_Box) (MR_Word) (Char_10)));
      if (succeeded)
        *PastWordEndPos_8 = CurPos_7;
      else
      {
        MR_Integer next_value_of_CurPos_7 = NextPos_9;

        // direct tailcall eliminated
        ;
        CurPos_7 = next_value_of_CurPos_7;
        continue;
      }
    }
    else
      *PastWordEndPos_8 = CurPos_7;
    break;
  }
}

void MR_CALL 
mercury__string__skip_to_next_word_start_4_p_0(
  MR_Word SepP_5,
  MR_String String_6,
  MR_Integer CurPos_7,
  MR_Integer * NextWordStartPos_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer NextPos_9;
    MR_Char Char_10;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__skip_to_next_word_start_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_6 ;
	Index =  CurPos_7 ;
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
	 NextPos_9  = NextIndex;
	 Char_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), SepP_5, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (SepP_5)), ((MR_Box) (MR_Word) (Char_10)));
    }
    if (succeeded)
    {
      MR_Integer next_value_of_CurPos_7 = NextPos_9;

      // direct tailcall eliminated
      ;
      CurPos_7 = next_value_of_CurPos_7;
      continue;
    }
    else
      *NextWordStartPos_8 = CurPos_7;
    break;
  }
}

void MR_CALL 
mercury__string__unsafe_substring_4_p_0(
  MR_String Str_5,
  MR_Integer Start_6,
  MR_Integer Count_7,
  MR_String * SubString_8)
{
  {
    MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) Start_6 + (MR_Unsigned) Count_7);

{
#define MR_PROC_LABEL mercury__string__unsafe_substring_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  Str_5 ;
	Start =  Start_6 ;
	End =  Var_9 ;
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
	 *SubString_8  = SubString;
}
  }
}

MR_String MR_CALL 
mercury__string__unsafe_substring_3_f_0(
  MR_String Str_5,
  MR_Integer Start_6,
  MR_Integer Count_7)
{
  {
    MR_String SubString_8;
    MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) Start_6 + (MR_Unsigned) Count_7);

{
#define MR_PROC_LABEL mercury__string__unsafe_substring_3_f_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  Str_5 ;
	Start =  Start_6 ;
	End =  Var_9 ;
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
	 SubString_8  = SubString;
}
    return SubString_8;
  }
}

void MR_CALL 
mercury__string__unsafe_between_4_p_0(
  MR_String Str_1,
  MR_Integer Start_2,
  MR_Integer End_3,
  MR_String * SubString_4)
{
  {
{
#define MR_PROC_LABEL mercury__string__unsafe_between_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  Str_1 ;
	Start =  Start_2 ;
	End =  End_3 ;
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
	 *SubString_4  = SubString;
}
  }
}

MR_String MR_CALL 
mercury__string__unsafe_between_3_f_0(
  MR_String Str_5,
  MR_Integer Start_6,
  MR_Integer End_7)
{
  {
    MR_String SubString_8;

{
#define MR_PROC_LABEL mercury__string__unsafe_between_3_f_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  Str_5 ;
	Start =  Start_6 ;
	End =  End_7 ;
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
	 SubString_8  = SubString;
}
    return SubString_8;
  }
}

MR_String MR_CALL 
mercury__string__between_codepoints_3_f_0(
  MR_String Str_5,
  MR_Integer Start_6,
  MR_Integer End_7)
{
  {
    MR_String SubString_8;

    mercury__string__between_codepoints_4_p_0(Str_5, Start_6, End_7, &SubString_8);
    return SubString_8;
  }
}

void MR_CALL 
mercury__string__between_codepoints_4_p_0(
  MR_String Str_5,
  MR_Integer Start_6,
  MR_Integer End_7,
  MR_String * SubString_8)
{
  {
    MR_bool succeeded = (Start_6 < (MR_Integer) 0);
    MR_Integer StartOffset_9;
    MR_Integer EndOffset_11;

    if (succeeded)
      StartOffset_9 = (MR_Integer) 0;
    else
    {
      MR_Integer StartOffset0_10;

      succeeded = mercury__string__codepoint_offset_4_p_0(Str_5, (MR_Integer) 0, Start_6, &StartOffset0_10);
      if (succeeded)
        StartOffset_9 = StartOffset0_10;
      else
      {
{
#define MR_PROC_LABEL mercury__string__between_codepoints_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 StartOffset_9  = Length;
}
      }
    }
    succeeded = (End_7 <= Start_6);
    if (succeeded)
      EndOffset_11 = StartOffset_9;
    else
    {
      MR_Integer EndOffset0_12;

      succeeded = mercury__string__codepoint_offset_4_p_0(Str_5, (MR_Integer) 0, End_7, &EndOffset0_12);
      if (succeeded)
        EndOffset_11 = EndOffset0_12;
      else
      {
{
#define MR_PROC_LABEL mercury__string__between_codepoints_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 EndOffset_11  = Length;
}
      }
    }
    mercury__string__between_4_p_0(Str_5, StartOffset_9, EndOffset_11, SubString_8);
  }
}

void MR_CALL 
mercury__string__substring_4_p_0(
  MR_String Str_5,
  MR_Integer Start_6,
  MR_Integer Count_7,
  MR_String * SubString_8)
{
  {
    MR_Integer ClampStart_9;
    MR_Integer ClampEnd_10;

    mercury__string__convert_endpoints_4_p_0(Start_6, Count_7, &ClampStart_9, &ClampEnd_10);
    mercury__string__between_4_p_0(Str_5, ClampStart_9, ClampEnd_10, SubString_8);
  }
}

MR_String MR_CALL 
mercury__string__substring_3_f_0(
  MR_String Str_5,
  MR_Integer Start_6,
  MR_Integer Count_7)
{
  {
    MR_String SubString_8;
    MR_Integer ClampStart_13;
    MR_Integer ClampEnd_14;

    mercury__string__convert_endpoints_4_p_0(Start_6, Count_7, &ClampStart_13, &ClampEnd_14);
    mercury__string__between_4_p_0(Str_5, ClampStart_13, ClampEnd_14, &SubString_8);
    return SubString_8;
  }
}

void MR_CALL 
mercury__string__convert_endpoints_4_p_0(
  MR_Integer Start_5,
  MR_Integer Count_6,
  MR_Integer * ClampStart_7,
  MR_Integer * ClampEnd_8)
{
  {
    MR_bool succeeded = ((MR_Integer) 0 > Start_5);

    if (succeeded)
      *ClampStart_7 = (MR_Integer) 0;
    else
      *ClampStart_7 = Start_5;
    succeeded = (Count_6 <= (MR_Integer) 0);
    if (succeeded)
      *ClampEnd_8 = *ClampStart_7;
    else
    {
      MR_Integer Var_11;
      MR_Integer Var_12;

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
	 Var_12  = Max;
}
      Var_11 = (MR_Integer) ((MR_Unsigned) Var_12 - (MR_Unsigned) Count_6);
      succeeded = (*ClampStart_7 > Var_11);
      if (succeeded)
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
	 *ClampEnd_8  = Max;
}
      }
      else
        *ClampEnd_8 = (MR_Integer) ((MR_Unsigned) *ClampStart_7 + (MR_Unsigned) Count_6);
    }
  }
}

MR_String MR_CALL 
mercury__string__between_3_f_0(
  MR_String Str_5,
  MR_Integer Start_6,
  MR_Integer End_7)
{
  {
    MR_String SubString_8;

    mercury__string__between_4_p_0(Str_5, Start_6, End_7, &SubString_8);
    return SubString_8;
  }
}

void MR_CALL 
mercury__string__between_4_p_0(
  MR_String Str_1,
  MR_Integer Start_2,
  MR_Integer End_3,
  MR_String * SubString_4)
{
  {
{
#define MR_PROC_LABEL mercury__string__between_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  Str_1 ;
	Start =  Start_2 ;
	End =  End_3 ;
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
	 *SubString_4  = SubString;
}
  }
}

void MR_CALL 
mercury__string__right_by_codepoint_3_p_0(
  MR_String String_4,
  MR_Integer RightCount_5,
  MR_String * RightString_6)
{
  {
    MR_Integer TotalCount_7;
    MR_Integer LeftCount_8;
    MR_String _LeftString_9;

    mercury__string__count_codepoints_2_p_0(String_4, &TotalCount_7);
    LeftCount_8 = (MR_Integer) ((MR_Unsigned) TotalCount_7 - (MR_Unsigned) RightCount_5);
    mercury__string__split_by_codepoint_4_p_0(String_4, LeftCount_8, &_LeftString_9, RightString_6);
  }
}

MR_String MR_CALL 
mercury__string__right_by_codepoint_2_f_0(
  MR_String String_4,
  MR_Integer RightCount_5)
{
  {
    MR_String RightString_6;
    MR_Integer TotalCount_10;
    MR_Integer LeftCount_11;
    MR_String _LeftString_12;

    mercury__string__count_codepoints_2_p_0(String_4, &TotalCount_10);
    LeftCount_11 = (MR_Integer) ((MR_Unsigned) TotalCount_10 - (MR_Unsigned) RightCount_5);
    mercury__string__split_by_codepoint_4_p_0(String_4, LeftCount_11, &_LeftString_12, &RightString_6);
    return RightString_6;
  }
}

void MR_CALL 
mercury__string__right_3_p_0(
  MR_String String_4,
  MR_Integer RightCount_5,
  MR_String * RightString_6)
{
  {
    MR_Integer Length_7;
    MR_Integer LeftCount_8;
    MR_String _LeftString_9;

{
#define MR_PROC_LABEL mercury__string__right_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_7  = Length;
}
    LeftCount_8 = (MR_Integer) ((MR_Unsigned) Length_7 - (MR_Unsigned) RightCount_5);
    mercury__string__split_4_p_0(String_4, LeftCount_8, &_LeftString_9, RightString_6);
  }
}

MR_String MR_CALL 
mercury__string__right_2_f_0(
  MR_String S1_4,
  MR_Integer N_5)
{
  {
    MR_String S2_6;
    MR_Integer Length_10;
    MR_Integer LeftCount_11;
    MR_String _LeftString_12;

{
#define MR_PROC_LABEL mercury__string__right_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  S1_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_10  = Length;
}
    LeftCount_11 = (MR_Integer) ((MR_Unsigned) Length_10 - (MR_Unsigned) N_5);
    mercury__string__split_4_p_0(S1_4, LeftCount_11, &_LeftString_12, &S2_6);
    return S2_6;
  }
}

void MR_CALL 
mercury__string__left_by_codepoint_3_p_0(
  MR_String String_4,
  MR_Integer Count_5,
  MR_String * LeftString_6)
{
  {
    MR_String _RightString_7;

    mercury__string__split_by_codepoint_4_p_0(String_4, Count_5, LeftString_6, &_RightString_7);
  }
}

MR_String MR_CALL 
mercury__string__left_by_codepoint_2_f_0(
  MR_String String_4,
  MR_Integer Count_5)
{
  {
    MR_String LeftString_6;
    MR_String _RightString_10;

    mercury__string__split_by_codepoint_4_p_0(String_4, Count_5, &LeftString_6, &_RightString_10);
    return LeftString_6;
  }
}

void MR_CALL 
mercury__string__left_3_p_0(
  MR_String String_4,
  MR_Integer Count_5,
  MR_String * LeftString_6)
{
  {
    MR_String _RightString_7;

    mercury__string__split_4_p_0(String_4, Count_5, LeftString_6, &_RightString_7);
  }
}

MR_String MR_CALL 
mercury__string__left_2_f_0(
  MR_String S1_4,
  MR_Integer N_5)
{
  {
    MR_String S2_6;
    MR_String _RightString_10;

    mercury__string__split_4_p_0(S1_4, N_5, &S2_6, &_RightString_10);
    return S2_6;
  }
}

void MR_CALL 
mercury__string__split_by_codepoint_4_p_0(
  MR_String Str_5,
  MR_Integer Count_6,
  MR_String * Left_7,
  MR_String * Right_8)
{
  {
    MR_bool succeeded;
    MR_Integer Offset_9;

    succeeded = mercury__string__codepoint_offset_4_p_0(Str_5, (MR_Integer) 0, Count_6, &Offset_9);
    if (succeeded)
      mercury__string__split_4_p_0(Str_5, Offset_9, Left_7, Right_8);
    else
    {
      succeeded = (Count_6 <= (MR_Integer) 0);
      if (succeeded)
      {
        *Left_7 = (MR_String) "";
        *Right_8 = Str_5;
      }
      else
      {
        *Left_7 = Str_5;
        *Right_8 = (MR_String) "";
      }
    }
  }
}

void MR_CALL 
mercury__string__split_4_p_0(
  MR_String Str_1,
  MR_Integer Count_2,
  MR_String * Left_3,
  MR_String * Right_4)
{
  {
{
#define MR_PROC_LABEL mercury__string__split_4_p_0

	MR_String Str;
	MR_Integer Count;
	MR_String Left;
	MR_String Right;

	Str =  Str_1 ;
	Count =  Count_2 ;
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
        // We need to make a copy to ensure that the pointer is word-aligned.
        MR_allocate_aligned_string_msg(Right, len - Count, MR_ALLOC_ID);
        strcpy(Right, Str + Count);
    }
}

		;}
#undef MR_PROC_LABEL
	 *Left_3  = Left;
	 *Right_4  = Right;
}
  }
}

void MR_CALL 
mercury__string__first_char_3_p_4(
  MR_String * Str_1,
  MR_Char First_2,
  MR_String Rest_3)
{
  {
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_4

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  First_2 ;
	Rest =  Rest_3 ;
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
	 *Str_1  = Str;
}
  }
}

MR_bool MR_CALL 
mercury__string__first_char_3_p_3(
  MR_String Str_1,
  MR_Char * First_2,
  MR_String * Rest_3)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__first_char_3_p_3

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  Str_1 ;
		{
{
    MR_Integer pos = 0;
    First = MR_utf8_get_next(Str, &pos);
    if (First < 1) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Str += pos;
        // We need to make a copy to ensure that the pointer is word-aligned.
        MR_allocate_aligned_string_msg(Rest, strlen(Str), MR_ALLOC_ID);
        strcpy(Rest, Str);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *First_2  = First;
	 *Rest_3  = Rest;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__first_char_3_p_2(
  MR_String Str_1,
  MR_Char First_2,
  MR_String * Rest_3)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__first_char_3_p_2

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  Str_1 ;
	First =  First_2 ;
		{
{
    MR_Integer pos = 0;
    int c = MR_utf8_get_next(Str, &pos);
    if (c != First || First == '\0') {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        Str += pos;
        // We need to make a copy to ensure that the pointer is word-aligned.
        MR_allocate_aligned_string_msg(Rest, strlen(Str), MR_ALLOC_ID);
        strcpy(Rest, Str);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *Rest_3  = Rest;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__first_char_3_p_1(
  MR_String Str_1,
  MR_Char * First_2,
  MR_String Rest_3)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__first_char_3_p_1

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  Str_1 ;
	Rest =  Rest_3 ;
		{

    MR_Integer pos = 0;
    First = MR_utf8_get_next(Str, &pos);
    SUCCESS_INDICATOR = (First > 0 && strcmp(Str + pos, Rest) == 0);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *First_2  = First;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__first_char_3_p_0(
  MR_String Str_1,
  MR_Char First_2,
  MR_String Rest_3)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__first_char_3_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  Str_1 ;
	First =  First_2 ;
	Rest =  Rest_3 ;
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
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_String MR_CALL 
mercury__string__join_list_2_f_0(
  MR_String Sep_1,
  MR_Word Strs_2)
{
  {
    MR_String Str_3;

{
#define MR_PROC_LABEL mercury__string__join_list_2_f_0

	MR_String Sep;
	MR_Word Strs;
	MR_String Str;

	Sep =  Sep_1 ;
	Strs =  Strs_2 ;
		{
{
    MR_Word list;
    size_t  len;
    size_t  sep_len;
    MR_bool add_sep;

    list = Strs;
    len = 0;
    sep_len = strlen(Sep);

    // Determine the total length of all strings.
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

    // Copy the strings into the new memory.
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
	 Str_3  = Str;
}
    return Str_3;
  }
}

void MR_CALL 
mercury__string__append_list_2_p_0(
  MR_Word Lists_3,
  MR_String * HeadVar__2_2)
{
  *HeadVar__2_2 = mercury__string__append_list_1_f_0(Lists_3);
}

MR_String MR_CALL 
mercury__string__append_list_1_f_0(
  MR_Word Strs_1)
{
  {
    MR_String Str_2;

{
#define MR_PROC_LABEL mercury__string__append_list_1_f_0

	MR_Word Strs;
	MR_String Str;

	Strs =  Strs_1 ;
		{
{
    MR_Word list = Strs;
    size_t  len;

    // Determine the total length of all strings.
    len = 0;
    while (!MR_list_is_empty(list)) {
        len += strlen((MR_String) MR_list_head(list));
        list = MR_list_tail(list);
    }

    // Allocate enough word aligned memory for the string.
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);

    // Copy the strings into the new memory.
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
	 Str_2  = Str;
}
    return Str_2;
  }
}

MR_String MR_CALL 
mercury__string__f_43_43_2_f_0(
  MR_String S1_4,
  MR_String S2_5)
{
  {
    MR_String HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__string__f_43_43_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  S1_4 ;
	S2 =  S2_5 ;
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
	 HeadVar__3_3  = S3;
}
    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__string__append_3_p_3(
  MR_String * S1_1,
  MR_String * S2_2,
  MR_String S3_3,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer S3Len_19;

{
#define MR_PROC_LABEL mercury__string__append_3_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  S3_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 S3Len_19  = Length;
}
    mercury__string__append_ooi_2_5_p_0((MR_Integer) 0, S3Len_19, S1_1, S2_2, S3_3, cont, cont_env_ptr);
  }
}

void MR_CALL 
mercury__string__append_ooi_2_5_p_0(
  MR_Integer NextS1Len_6,
  MR_Integer S3Len_7,
  MR_String * S1_8,
  MR_String * S2_9,
  MR_String S3_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (NextS1Len_6 == S3Len_7);

    // setup for model_non tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      mercury__string__append_ooi_3_5_p_0(NextS1Len_6, S3Len_7, S1_8, S2_9, S3_10);
      cont(cont_env_ptr);
    }
    else
    {
      mercury__string__append_ooi_3_5_p_0(NextS1Len_6, S3Len_7, S1_8, S2_9, S3_10);
      cont(cont_env_ptr);
      {
        MR_Integer AdvS1Len_11;
        MR_Char Var_12;
        MR_Integer next_value_of_NextS1Len_6;

{
#define MR_PROC_LABEL mercury__string__append_ooi_2_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  S3_10 ;
	Index =  NextS1Len_6 ;
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
	 AdvS1Len_11  = NextIndex;
	 Var_12  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_NextS1Len_6 = AdvS1Len_11;
          NextS1Len_6 = next_value_of_NextS1Len_6;
          continue;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__append_ooi_3_5_p_0(
  MR_Integer S1Len_1,
  MR_Integer S3Len_2,
  MR_String * S1_3,
  MR_String * S2_4,
  MR_String S3_5)
{
  {
{
#define MR_PROC_LABEL mercury__string__append_ooi_3_5_p_0

	MR_Integer S1Len;
	MR_Integer S3Len;
	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1Len =  S1Len_1 ;
	S3Len =  S3Len_2 ;
	S3 =  S3_5 ;
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
	 *S1_3  = S1;
	 *S2_4  = S2;
}
  }
}

void MR_CALL 
mercury__string__append_3_p_2(
  MR_String S1_1,
  MR_String S2_2,
  MR_String * S3_3)
{
  {
{
#define MR_PROC_LABEL mercury__string__append_3_p_2

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  S1_1 ;
	S2 =  S2_2 ;
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
	 *S3_3  = S3;
}
  }
}

MR_bool MR_CALL 
mercury__string__append_3_p_1(
  MR_String S1_1,
  MR_String * S2_2,
  MR_String S3_3)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__append_3_p_1

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  S1_1 ;
	S3 =  S3_3 ;
		{
{
    size_t len_1, len_2, len_3;

    len_1 = strlen(S1);
    if (strncmp(S1, S3, len_1) != 0) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        len_3 = strlen(S3);
        len_2 = len_3 - len_1;
        // We need to make a copy to ensure that the pointer is word-aligned.
        MR_allocate_aligned_string_msg(S2, len_2, MR_ALLOC_ID);
        strcpy(S2, S3 + len_1);
        SUCCESS_INDICATOR = MR_TRUE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *S2_2  = S2;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__append_3_p_0(
  MR_String S1_1,
  MR_String S2_2,
  MR_String S3_3)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__append_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  S1_1 ;
	S2 =  S2_2 ;
	S3 =  S3_3 ;
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
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_String MR_CALL 
mercury__string__append_2_f_0(
  MR_String S1_4,
  MR_String S2_5)
{
  {
    MR_String S3_6;

{
#define MR_PROC_LABEL mercury__string__append_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  S1_4 ;
	S2 =  S2_5 ;
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
	 S3_6  = S3;
}
    return S3_6;
  }
}

MR_bool MR_CALL 
mercury__string__sub_string_search_start_4_p_0(
  MR_String WholeString_1,
  MR_String Pattern_2,
  MR_Integer BeginAt_3,
  MR_Integer * Index_4)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__sub_string_search_start_4_p_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString =  WholeString_1 ;
	Pattern =  Pattern_2 ;
	BeginAt =  BeginAt_3 ;
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
	 *Index_4  = Index;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__sub_string_search_3_p_0(
  MR_String WholeString_4,
  MR_String Pattern_5,
  MR_Integer * Index_6)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__sub_string_search_3_p_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString =  WholeString_4 ;
	Pattern =  Pattern_5 ;
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
	 *Index_6  = Index;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_Integer MR_CALL 
mercury__string__suffix_length_2_f_0(
  MR_Word P_4,
  MR_String S_5)
{
  {
    MR_Integer HeadVar__3_3;
    MR_Integer End_6;
    MR_Integer Index_7;

{
#define MR_PROC_LABEL mercury__string__suffix_length_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  S_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 End_6  = Length;
}
    mercury__string__suffix_length_loop_4_p_0(P_4, S_5, End_6, &Index_7);
    HeadVar__3_3 = (MR_Integer) ((MR_Unsigned) End_6 - (MR_Unsigned) Index_7);
    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__string__suffix_length_loop_4_p_0(
  MR_Word P_5,
  MR_String S_6,
  MR_Integer I_7,
  MR_Integer * Index_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer J_9;
    MR_Char Char_10;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__suffix_length_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  S_6 ;
	Index =  I_7 ;
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
	 J_9  = PrevIndex;
	 Char_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_5)), ((MR_Box) (MR_Word) (Char_10)));
    }
    if (succeeded)
    {
      MR_Integer next_value_of_I_7 = J_9;

      // direct tailcall eliminated
      ;
      I_7 = next_value_of_I_7;
      continue;
    }
    else
      *Index_8 = I_7;
    break;
  }
}

MR_Integer MR_CALL 
mercury__string__prefix_length_2_f_0(
  MR_Word P_4,
  MR_String S_5)
{
  {
    MR_Integer Index_6;

    mercury__string__prefix_length_loop_4_p_0(P_4, S_5, (MR_Integer) 0, &Index_6);
    return Index_6;
  }
}

void MR_CALL 
mercury__string__prefix_length_loop_4_p_0(
  MR_Word P_5,
  MR_String S_6,
  MR_Integer I_7,
  MR_Integer * Index_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer J_9;
    MR_Char Char_10;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__prefix_length_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  S_6 ;
	Index =  I_7 ;
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
	 J_9  = NextIndex;
	 Char_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));
      succeeded = func_0(((MR_Box) (P_5)), ((MR_Box) (MR_Word) (Char_10)));
    }
    if (succeeded)
    {
      MR_Integer next_value_of_I_7 = J_9;

      // direct tailcall eliminated
      ;
      I_7 = next_value_of_I_7;
      continue;
    }
    else
      *Index_8 = I_7;
    break;
  }
}

void MR_CALL 
mercury__string__compare_ignore_case_ascii_3_p_0(
  MR_Word * Res_4,
  MR_String X_5,
  MR_String Y_6)
{
  {
    mercury__string__compare_ignore_case_ascii_loop_4_p_0(X_5, Y_6, (MR_Integer) 0, Res_4);
  }
}

void MR_CALL 
mercury__string__compare_ignore_case_ascii_loop_4_p_0(
  MR_String X_5,
  MR_String Y_6,
  MR_Integer I_7,
  MR_Word * Res_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer IX_9;
    MR_Char CharX_10;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__compare_ignore_case_ascii_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  X_5 ;
	Index =  I_7 ;
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
	 IX_9  = NextIndex;
	 CharX_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Char CharY_12;
      MR_Integer _IY_11;

{
#define MR_PROC_LABEL mercury__string__compare_ignore_case_ascii_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  Y_6 ;
	Index =  I_7 ;
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
	 _IY_11  = NextIndex;
	 CharY_12  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
        MR_Char LowerCharX_13;
        MR_Char LowerCharY_14;
        MR_Word CharRes_15;
        MR_Integer V_7_29;
        MR_Integer V_8_30;
        MR_Char V_5_22;
        MR_Char V_5_25;

        succeeded = mercury__char__lower_upper_2_p_1(&V_5_22, CharX_10);
        if (succeeded)
          LowerCharX_13 = V_5_22;
        else
          LowerCharX_13 = CharX_10;
        succeeded = mercury__char__lower_upper_2_p_1(&V_5_25, CharY_12);
        if (succeeded)
          LowerCharY_14 = V_5_25;
        else
          LowerCharY_14 = CharY_12;
{
#define MR_PROC_LABEL mercury__string__compare_ignore_case_ascii_loop_4_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  LowerCharX_13 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 V_7_29  = Int;
}
{
#define MR_PROC_LABEL mercury__string__compare_ignore_case_ascii_loop_4_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  LowerCharY_14 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	 V_8_30  = Int;
}
        succeeded = (V_7_29 < V_8_30);
        if (succeeded)
          CharRes_15 = (MR_Integer) 1;
        else
        {
          succeeded = (V_7_29 == V_8_30);
          if (succeeded)
            CharRes_15 = (MR_Integer) 0;
          else
            CharRes_15 = (MR_Integer) 2;
        }
        switch (CharRes_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *Res_8 = CharRes_15;
            break;
          case (MR_Integer) 0:
            {
              MR_Integer next_value_of_I_7 = IX_9;

              // direct tailcall eliminated
              ;
              I_7 = next_value_of_I_7;
              continue;
            }
            break;
        }
      }
      else
        *Res_8 = (MR_Integer) 2;
    }
    else
    {
      MR_Char _CharY_16;
      MR_Integer _IY_17;

{
#define MR_PROC_LABEL mercury__string__compare_ignore_case_ascii_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  Y_6 ;
	Index =  I_7 ;
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
	 _IY_17  = NextIndex;
	 _CharY_16  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        *Res_8 = (MR_Integer) 1;
      else
        *Res_8 = (MR_Integer) 0;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__string__contains_char_2_p_0(
  MR_String Str_1,
  MR_Char Ch_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__contains_char_2_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  Str_1 ;
	Ch =  Ch_2 ;
		{

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        // Fast path.
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
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__all_match_2_p_0(
  MR_Word P_3,
  MR_String String_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string__all_match_loop_3_p_0(P_3, String_4, (MR_Integer) 0);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__all_match_loop_3_p_0(
  MR_Word P_4,
  MR_String String_5,
  MR_Integer Cur_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Next_7;
    MR_Char Char_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__all_match_loop_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_5 ;
	Index =  Cur_6 ;
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
	 Next_7  = NextIndex;
	 Char_8  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_4, (MR_Integer) 1))));
      MR_Integer next_value_of_Cur_6;

      succeeded = func_0(((MR_Box) (P_4)), ((MR_Box) (MR_Word) (Char_8)));
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_Cur_6 = Next_7;
        Cur_6 = next_value_of_Cur_6;
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
mercury__string__is_all_digits_1_p_0(
  MR_String S_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__is_all_digits_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  S_1 ;
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
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__is_all_alnum_or_underscore_1_p_0(
  MR_String S_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__is_all_alnum_or_underscore_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  S_1 ;
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
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__is_all_alpha_or_underscore_1_p_0(
  MR_String S_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__is_all_alpha_or_underscore_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  S_1 ;
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
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__is_all_alnum_1_p_0(
  MR_String S_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string__all_match_loop__ho32_3_p_0(S_2, (MR_Integer) 0);
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__string__all_match_loop__ho32_3_p_0(
  MR_String String_5,
  MR_Integer Cur_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Next_7;
    MR_Char Char_8;

    // setup for model_semi tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__all_match_loop__ho32_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_5 ;
	Index =  Cur_6 ;
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
	 Next_7  = NextIndex;
	 Char_8  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Integer next_value_of_Cur_6;

      succeeded = mercury__char__is_alnum_1_p_0(Char_8);
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_Cur_6 = Next_7;
        Cur_6 = next_value_of_Cur_6;
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
mercury__string__is_all_alpha_1_p_0(
  MR_String S_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__is_all_alpha_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  S_1 ;
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
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__is_empty_1_p_0(
  MR_String HeadVar__1_1)
{
  {
    MR_bool succeeded = (strcmp(HeadVar__1_1, (MR_String) "") == 0);

    return succeeded;
  }
}

MR_Integer MR_CALL 
mercury__string__hash6_1_f_0(
  MR_String String_3)
{
  {
    MR_Integer HashVal_4;
    MR_Integer Length_5;
    MR_Integer HashVal1_6;

{
#define MR_PROC_LABEL mercury__string__hash6_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_5  = Length;
}
    mercury__string__hash6_loop_5_p_0(String_3, (MR_Integer) 0, Length_5, (MR_Integer) 0, &HashVal1_6);
    HashVal_4 = (HashVal1_6 ^ Length_5);
    return HashVal_4;
  }
}

void MR_CALL 
mercury__string__hash6_loop_5_p_0(
  MR_String String_6,
  MR_Integer Index_7,
  MR_Integer Length_8,
  MR_Integer STATE_VARIABLE_HashVal_0_11,
  MR_Integer * STATE_VARIABLE_HashVal_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_7 < Length_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer C_10;
      MR_Integer STATE_VARIABLE_HashVal_13_13;
      MR_Integer Var_14;
      MR_Integer STATE_VARIABLE_HashVal_16_16;
      MR_Integer Var_17;
      MR_Integer Var_18;
      MR_Integer Var_22;
      MR_Integer Var_23;
      MR_Integer Var_28;
      MR_Integer Var_29;
      MR_Integer next_value_of_Index_7;
      MR_Integer next_value_of_STATE_VARIABLE_HashVal_0_11;

{
#define MR_PROC_LABEL mercury__string__hash6_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  String_6 ;
	Index =  Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 C_10  = Code;
}
      Var_14 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_HashVal_0_11 * (MR_Unsigned) (MR_Integer) 49);
      Var_23 = ((MR_Integer) 1 << (MR_Integer) 30);
      Var_22 = (MR_Integer) ((MR_Unsigned) Var_23 - (MR_Unsigned) (MR_Integer) 1);
      STATE_VARIABLE_HashVal_13_13 = (Var_14 & Var_22);
      Var_17 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_HashVal_13_13 + (MR_Unsigned) C_10);
      Var_29 = ((MR_Integer) 1 << (MR_Integer) 30);
      Var_28 = (MR_Integer) ((MR_Unsigned) Var_29 - (MR_Unsigned) (MR_Integer) 1);
      STATE_VARIABLE_HashVal_16_16 = (Var_17 & Var_28);
      Var_18 = (MR_Integer) ((MR_Unsigned) Index_7 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Index_7 = Var_18;
      next_value_of_STATE_VARIABLE_HashVal_0_11 = STATE_VARIABLE_HashVal_16_16;
      Index_7 = next_value_of_Index_7;
      STATE_VARIABLE_HashVal_0_11 = next_value_of_STATE_VARIABLE_HashVal_0_11;
      continue;
    }
    else
      *STATE_VARIABLE_HashVal_12 = STATE_VARIABLE_HashVal_0_11;
    break;
  }
}

MR_Integer MR_CALL 
mercury__string__hash5_1_f_0(
  MR_String String_3)
{
  {
    MR_Integer HashVal_4;
    MR_Integer Length_5;
    MR_Integer HashVal1_6;

{
#define MR_PROC_LABEL mercury__string__hash5_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_5  = Length;
}
    mercury__string__hash5_loop_5_p_0(String_3, (MR_Integer) 0, Length_5, (MR_Integer) 0, &HashVal1_6);
    HashVal_4 = (HashVal1_6 ^ Length_5);
    return HashVal_4;
  }
}

void MR_CALL 
mercury__string__hash5_loop_5_p_0(
  MR_String String_6,
  MR_Integer Index_7,
  MR_Integer Length_8,
  MR_Integer STATE_VARIABLE_HashVal_0_11,
  MR_Integer * STATE_VARIABLE_HashVal_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_7 < Length_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer C_10;
      MR_Integer STATE_VARIABLE_HashVal_13_13;
      MR_Integer Var_14;
      MR_Integer STATE_VARIABLE_HashVal_16_16;
      MR_Integer Var_17;
      MR_Integer Var_18;
      MR_Integer Var_22;
      MR_Integer Var_23;
      MR_Integer Var_28;
      MR_Integer Var_29;
      MR_Integer next_value_of_Index_7;
      MR_Integer next_value_of_STATE_VARIABLE_HashVal_0_11;

{
#define MR_PROC_LABEL mercury__string__hash5_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  String_6 ;
	Index =  Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 C_10  = Code;
}
      Var_14 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_HashVal_0_11 * (MR_Unsigned) (MR_Integer) 37);
      Var_23 = ((MR_Integer) 1 << (MR_Integer) 30);
      Var_22 = (MR_Integer) ((MR_Unsigned) Var_23 - (MR_Unsigned) (MR_Integer) 1);
      STATE_VARIABLE_HashVal_13_13 = (Var_14 & Var_22);
      Var_17 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_HashVal_13_13 + (MR_Unsigned) C_10);
      Var_29 = ((MR_Integer) 1 << (MR_Integer) 30);
      Var_28 = (MR_Integer) ((MR_Unsigned) Var_29 - (MR_Unsigned) (MR_Integer) 1);
      STATE_VARIABLE_HashVal_16_16 = (Var_17 & Var_28);
      Var_18 = (MR_Integer) ((MR_Unsigned) Index_7 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Index_7 = Var_18;
      next_value_of_STATE_VARIABLE_HashVal_0_11 = STATE_VARIABLE_HashVal_16_16;
      Index_7 = next_value_of_Index_7;
      STATE_VARIABLE_HashVal_0_11 = next_value_of_STATE_VARIABLE_HashVal_0_11;
      continue;
    }
    else
      *STATE_VARIABLE_HashVal_12 = STATE_VARIABLE_HashVal_0_11;
    break;
  }
}

MR_Integer MR_CALL 
mercury__string__hash4_1_f_0(
  MR_String String_3)
{
  {
    MR_Integer HashVal_4;
    MR_Integer Length_5;
    MR_Integer HashVal1_6;

{
#define MR_PROC_LABEL mercury__string__hash4_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_5  = Length;
}
    mercury__string__hash4_loop_5_p_0(String_3, (MR_Integer) 0, Length_5, (MR_Integer) 0, &HashVal1_6);
    HashVal_4 = (HashVal1_6 ^ Length_5);
    return HashVal_4;
  }
}

void MR_CALL 
mercury__string__hash4_loop_5_p_0(
  MR_String String_6,
  MR_Integer Index_7,
  MR_Integer Length_8,
  MR_Integer STATE_VARIABLE_HashVal_0_11,
  MR_Integer * STATE_VARIABLE_HashVal_12)
{
  {
    MR_bool succeeded = (Index_7 < Length_8);

    if (succeeded)
    {
      MR_Integer C_10;
      MR_Integer STATE_VARIABLE_HashVal_13_13;
      MR_Integer Var_14;
      MR_Integer Var_15;
      MR_Integer STATE_VARIABLE_HashVal_17_17;
      MR_Integer Var_18;
      MR_Integer Var_22;
      MR_Integer Var_23;

{
#define MR_PROC_LABEL mercury__string__hash4_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  String_6 ;
	Index =  Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 C_10  = Code;
}
      Var_15 = (STATE_VARIABLE_HashVal_0_11 << (MR_Integer) 5);
      Var_14 = (STATE_VARIABLE_HashVal_0_11 ^ Var_15);
      Var_23 = ((MR_Integer) 1 << (MR_Integer) 30);
      Var_22 = (MR_Integer) ((MR_Unsigned) Var_23 - (MR_Unsigned) (MR_Integer) 1);
      STATE_VARIABLE_HashVal_13_13 = (Var_14 & Var_22);
      STATE_VARIABLE_HashVal_17_17 = (STATE_VARIABLE_HashVal_13_13 ^ C_10);
      Var_18 = (MR_Integer) ((MR_Unsigned) Index_7 + (MR_Unsigned) (MR_Integer) 1);
      mercury__string__hash_loop_5_p_0(String_6, Var_18, Length_8, STATE_VARIABLE_HashVal_17_17, STATE_VARIABLE_HashVal_12);
    }
    else
      *STATE_VARIABLE_HashVal_12 = STATE_VARIABLE_HashVal_0_11;
  }
}

MR_Integer MR_CALL 
mercury__string__hash3_1_f_0(
  MR_String String_3)
{
  {
    MR_Integer HashVal_4;
    MR_Integer Length_5;
    MR_Integer HashVal1_6;

{
#define MR_PROC_LABEL mercury__string__hash3_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_5  = Length;
}
    mercury__string__hash3_loop_5_p_0(String_3, (MR_Integer) 0, Length_5, (MR_Integer) 0, &HashVal1_6);
    HashVal_4 = (HashVal1_6 ^ Length_5);
    return HashVal_4;
  }
}

void MR_CALL 
mercury__string__hash3_loop_5_p_0(
  MR_String String_6,
  MR_Integer Index_7,
  MR_Integer Length_8,
  MR_Integer STATE_VARIABLE_HashVal_0_11,
  MR_Integer * STATE_VARIABLE_HashVal_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_7 < Length_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer C_10;
      MR_Integer STATE_VARIABLE_HashVal_13_13;
      MR_Integer STATE_VARIABLE_HashVal_15_15;
      MR_Integer Var_16;
      MR_Integer next_value_of_Index_7;
      MR_Integer next_value_of_STATE_VARIABLE_HashVal_0_11;

{
#define MR_PROC_LABEL mercury__string__hash3_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  String_6 ;
	Index =  Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 C_10  = Code;
}
      STATE_VARIABLE_HashVal_13_13 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_HashVal_0_11 * (MR_Unsigned) (MR_Integer) 49);
      STATE_VARIABLE_HashVal_15_15 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_HashVal_13_13 + (MR_Unsigned) C_10);
      Var_16 = (MR_Integer) ((MR_Unsigned) Index_7 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Index_7 = Var_16;
      next_value_of_STATE_VARIABLE_HashVal_0_11 = STATE_VARIABLE_HashVal_15_15;
      Index_7 = next_value_of_Index_7;
      STATE_VARIABLE_HashVal_0_11 = next_value_of_STATE_VARIABLE_HashVal_0_11;
      continue;
    }
    else
      *STATE_VARIABLE_HashVal_12 = STATE_VARIABLE_HashVal_0_11;
    break;
  }
}

MR_Integer MR_CALL 
mercury__string__hash2_1_f_0(
  MR_String String_3)
{
  {
    MR_Integer HashVal_4;
    MR_Integer Length_5;
    MR_Integer HashVal1_6;

{
#define MR_PROC_LABEL mercury__string__hash2_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_5  = Length;
}
    mercury__string__hash2_loop_5_p_0(String_3, (MR_Integer) 0, Length_5, (MR_Integer) 0, &HashVal1_6);
    HashVal_4 = (HashVal1_6 ^ Length_5);
    return HashVal_4;
  }
}

void MR_CALL 
mercury__string__hash2_loop_5_p_0(
  MR_String String_6,
  MR_Integer Index_7,
  MR_Integer Length_8,
  MR_Integer STATE_VARIABLE_HashVal_0_11,
  MR_Integer * STATE_VARIABLE_HashVal_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_7 < Length_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer C_10;
      MR_Integer STATE_VARIABLE_HashVal_13_13;
      MR_Integer STATE_VARIABLE_HashVal_15_15;
      MR_Integer Var_16;
      MR_Integer next_value_of_Index_7;
      MR_Integer next_value_of_STATE_VARIABLE_HashVal_0_11;

{
#define MR_PROC_LABEL mercury__string__hash2_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  String_6 ;
	Index =  Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 C_10  = Code;
}
      STATE_VARIABLE_HashVal_13_13 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_HashVal_0_11 * (MR_Unsigned) (MR_Integer) 37);
      STATE_VARIABLE_HashVal_15_15 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_HashVal_13_13 + (MR_Unsigned) C_10);
      Var_16 = (MR_Integer) ((MR_Unsigned) Index_7 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Index_7 = Var_16;
      next_value_of_STATE_VARIABLE_HashVal_0_11 = STATE_VARIABLE_HashVal_15_15;
      Index_7 = next_value_of_Index_7;
      STATE_VARIABLE_HashVal_0_11 = next_value_of_STATE_VARIABLE_HashVal_0_11;
      continue;
    }
    else
      *STATE_VARIABLE_HashVal_12 = STATE_VARIABLE_HashVal_0_11;
    break;
  }
}

void MR_CALL 
mercury__string__hash_2_p_0(
  MR_String String_3,
  MR_Integer * HashVal_4)
{
  {
    MR_Integer Length_5;
    MR_Integer HashVal1_6;

{
#define MR_PROC_LABEL mercury__string__hash_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_5  = Length;
}
    mercury__string__hash_loop_5_p_0(String_3, (MR_Integer) 0, Length_5, (MR_Integer) 0, &HashVal1_6);
    *HashVal_4 = (HashVal1_6 ^ Length_5);
  }
}

MR_Integer MR_CALL 
mercury__string__hash_1_f_0(
  MR_String String_3)
{
  {
    MR_Integer HashVal_4;
    MR_Integer Length_7;
    MR_Integer HashVal1_8;

{
#define MR_PROC_LABEL mercury__string__hash_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_7  = Length;
}
    mercury__string__hash_loop_5_p_0(String_3, (MR_Integer) 0, Length_7, (MR_Integer) 0, &HashVal1_8);
    HashVal_4 = (HashVal1_8 ^ Length_7);
    return HashVal_4;
  }
}

void MR_CALL 
mercury__string__hash_loop_5_p_0(
  MR_String String_6,
  MR_Integer Index_7,
  MR_Integer Length_8,
  MR_Integer STATE_VARIABLE_HashVal_0_11,
  MR_Integer * STATE_VARIABLE_HashVal_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_7 < Length_8);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer C_10;
      MR_Integer STATE_VARIABLE_HashVal_13_13;
      MR_Integer Var_14;
      MR_Integer STATE_VARIABLE_HashVal_16_16;
      MR_Integer Var_17;
      MR_Integer next_value_of_Index_7;
      MR_Integer next_value_of_STATE_VARIABLE_HashVal_0_11;

{
#define MR_PROC_LABEL mercury__string__hash_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  String_6 ;
	Index =  Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 C_10  = Code;
}
      Var_14 = (STATE_VARIABLE_HashVal_0_11 << (MR_Integer) 5);
      STATE_VARIABLE_HashVal_13_13 = (STATE_VARIABLE_HashVal_0_11 ^ Var_14);
      STATE_VARIABLE_HashVal_16_16 = (STATE_VARIABLE_HashVal_13_13 ^ C_10);
      Var_17 = (MR_Integer) ((MR_Unsigned) Index_7 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Index_7 = Var_17;
      next_value_of_STATE_VARIABLE_HashVal_0_11 = STATE_VARIABLE_HashVal_16_16;
      Index_7 = next_value_of_Index_7;
      STATE_VARIABLE_HashVal_0_11 = next_value_of_STATE_VARIABLE_HashVal_0_11;
      continue;
    }
    else
      *STATE_VARIABLE_HashVal_12 = STATE_VARIABLE_HashVal_0_11;
    break;
  }
}

MR_bool MR_CALL 
mercury__string__codepoint_offset_3_p_0(
  MR_String String_4,
  MR_Integer N_5,
  MR_Integer * Index_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string__codepoint_offset_4_p_0(String_4, (MR_Integer) 0, N_5, Index_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__codepoint_offset_4_p_0(
  MR_String String_1,
  MR_Integer StartOffset_2,
  MR_Integer N_3,
  MR_Integer * Index_4)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__codepoint_offset_4_p_0

	MR_String String;
	MR_Integer StartOffset;
	MR_Integer N;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	String =  String_1 ;
	StartOffset =  StartOffset_2 ;
	N =  N_3 ;
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
	 *Index_4  = Index;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_Integer MR_CALL 
mercury__string__count_utf8_code_units_1_f_0(
  MR_String Str_1)
{
  {
    MR_Integer Length_2;

{
#define MR_PROC_LABEL mercury__string__count_utf8_code_units_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  Str_1 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_2  = Length;
}
    return Length_2;
  }
}

MR_Integer MR_CALL 
mercury__string__count_codepoints_1_f_0(
  MR_String String_3)
{
  {
    MR_Integer Count_4;

    mercury__string__count_codepoints_2_p_0(String_3, &Count_4);
    return Count_4;
  }
}

void MR_CALL 
mercury__string__count_codepoints_2_p_0(
  MR_String String_1,
  MR_Integer * Count_2)
{
  {
{
#define MR_PROC_LABEL mercury__string__count_codepoints_2_p_0

	MR_String String;
	MR_Integer Count;

	String =  String_1 ;
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
	 *Count_2  = Count;
}
  }
}

void MR_CALL 
mercury__string__count_code_units_2_p_0(
  MR_String Str_3,
  MR_Integer * Length_4)
{
  {
{
#define MR_PROC_LABEL mercury__string__count_code_units_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  Str_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 *Length_4  = Length;
}
  }
}

MR_Integer MR_CALL 
mercury__string__count_code_units_1_f_0(
  MR_String Str_3)
{
  {
    MR_Integer HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__string__count_code_units_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  Str_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 HeadVar__2_2  = Length;
}
    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__string__length_2_p_1(
  MR_String Str_1,
  MR_Integer * Length_2)
{
  {
{
#define MR_PROC_LABEL mercury__string__length_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  Str_1 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 *Length_2  = Length;
}
  }
}

void MR_CALL 
mercury__string__length_2_p_0(
  MR_String Str_1,
  MR_Integer * Length_2)
{
  {
{
#define MR_PROC_LABEL mercury__string__length_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  Str_1 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 *Length_2  = Length;
}
  }
}

MR_Integer MR_CALL 
mercury__string__length_1_f_0(
  MR_String S_3)
{
  {
    MR_Integer L_4;

{
#define MR_PROC_LABEL mercury__string__length_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 L_4  = Length;
}
    return L_4;
  }
}

void MR_CALL 
mercury__string__unsafe_set_char_4_p_0(
  MR_Char Char_5,
  MR_Integer Index_6,
  MR_String STATE_VARIABLE_Str_0_8,
  MR_String * STATE_VARIABLE_Str_9)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  Char_5 ;
	Int =  (MR_Integer) 0 ;
		{

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
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

	Ch =  Char_5 ;
	Index =  Index_6 ;
	Str0 =  STATE_VARIABLE_Str_0_8 ;
		{

    size_t len = strlen(Str0);
    if (MR_is_ascii(Str0[Index]) && MR_is_ascii(Ch)) {
        // Fast path.
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
	 *STATE_VARIABLE_Str_9  = Str;
}
    }
  }
}

MR_String MR_CALL 
mercury__string__unsafe_set_char_3_f_0(
  MR_Char C_5,
  MR_Integer N_6,
  MR_String S0_7)
{
  {
    MR_bool succeeded;
    MR_String S_8;

{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_3_f_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  C_5 ;
	Int =  (MR_Integer) 0 ;
		{

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
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

	Ch =  C_5 ;
	Index =  N_6 ;
	Str0 =  S0_7 ;
		{

    size_t len = strlen(Str0);
    if (MR_is_ascii(Str0[Index]) && MR_is_ascii(Ch)) {
        // Fast path.
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
	 S_8  = Str;
}
    }
    return S_8;
  }
}

MR_String MR_CALL 
mercury__string__det_set_char_3_f_0(
  MR_Char C_5,
  MR_Integer N_6,
  MR_String S0_7)
{
  {
    MR_String S_8;

    mercury__string__det_set_char_4_p_0(C_5, N_6, S0_7, &S_8);
    return S_8;
  }
}

void MR_CALL 
mercury__string__det_set_char_4_p_0(
  MR_Char Char_5,
  MR_Integer Int_6,
  MR_String String0_7,
  MR_String * String_8)
{
  {
    MR_bool succeeded;
    MR_String String1_9;

{
#define MR_PROC_LABEL mercury__string__det_set_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  Char_5 ;
	Int =  (MR_Integer) 0 ;
		{

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.set_char\'/4", (MR_String) "null character");
        return;
      }
      succeeded = MR_TRUE;
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

	Ch =  Char_5 ;
	Index =  Int_6 ;
	Str0 =  String0_7 ;
		{

    size_t len = strlen(Str0);
    if ((MR_Unsigned) Index >= len) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else if (MR_is_ascii(Str0[Index]) && MR_is_ascii(Ch)) {
        // Fast path.
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
	 String1_9  = Str;
	}
succeeded  = SUCCESS_INDICATOR;
}
    }
    if (succeeded)
      *String_8 = String1_9;
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
  MR_Char Char_5,
  MR_Integer Index_6,
  MR_String STATE_VARIABLE_Str_0_8,
  MR_String * STATE_VARIABLE_Str_9)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__set_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  Char_5 ;
	Int =  (MR_Integer) 0 ;
		{

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.set_char\'/4", (MR_String) "null character");
      succeeded = MR_TRUE;
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

	Ch =  Char_5 ;
	Index =  Index_6 ;
	Str0 =  STATE_VARIABLE_Str_0_8 ;
		{

    size_t len = strlen(Str0);
    if ((MR_Unsigned) Index >= len) {
        SUCCESS_INDICATOR = MR_FALSE;
    } else if (MR_is_ascii(Str0[Index]) && MR_is_ascii(Ch)) {
        // Fast path.
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
	 *STATE_VARIABLE_Str_9  = Str;
	}
succeeded  = SUCCESS_INDICATOR;
}
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__string__unsafe_index_code_unit_3_p_0(
  MR_String Str_1,
  MR_Integer Index_2,
  MR_Integer * Code_3)
{
  {
{
#define MR_PROC_LABEL mercury__string__unsafe_index_code_unit_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  Str_1 ;
	Index =  Index_2 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 *Code_3  = Code;
}
  }
}

MR_bool MR_CALL 
mercury__string__unsafe_prev_index_4_p_0(
  MR_String Str_1,
  MR_Integer Index_2,
  MR_Integer * PrevIndex_3,
  MR_Char * Ch_4)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__unsafe_prev_index_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  Str_1 ;
	Index =  Index_2 ;
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
	 *PrevIndex_3  = PrevIndex;
	 *Ch_4  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__prev_index_4_p_0(
  MR_String Str_5,
  MR_Integer Index_6,
  MR_Integer * CharIndex_7,
  MR_Char * Char_8)
{
  {
    MR_bool succeeded;
    MR_Integer Len_9;
    MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Len_9  = Length;
}
    Var_10 = (MR_Integer) ((MR_Unsigned) Index_6 - (MR_Unsigned) (MR_Integer) 1);
{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  Var_10 ;
	Length =  Len_9 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  Str_5 ;
	Index =  Index_6 ;
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
	 *CharIndex_7  = PrevIndex;
	 *Char_8  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__unsafe_index_next_4_p_0(
  MR_String Str_1,
  MR_Integer Index_2,
  MR_Integer * NextIndex_3,
  MR_Char * Ch_4)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__unsafe_index_next_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  Str_1 ;
	Index =  Index_2 ;
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
	 *NextIndex_3  = NextIndex;
	 *Ch_4  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__index_next_4_p_0(
  MR_String Str_5,
  MR_Integer Index_6,
  MR_Integer * NextIndex_7,
  MR_Char * Char_8)
{
  {
    MR_bool succeeded;
    MR_Integer Len_9;

{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Len_9  = Length;
}
{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  Index_6 ;
	Length =  Len_9 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  Str_5 ;
	Index =  Index_6 ;
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
	 *NextIndex_7  = NextIndex;
	 *Char_8  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    }
    return succeeded;
  }
}

MR_Char MR_CALL 
mercury__string__unsafe_elem_2_f_0(
  MR_Integer Index_5,
  MR_String String_4)
{
  {
    MR_bool succeeded;
    MR_Char HeadVar__3_3;
    MR_Char CharPrime_12;

{
#define MR_PROC_LABEL mercury__string__unsafe_elem_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_4 ;
	Index =  Index_5 ;
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
	 CharPrime_12  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      HeadVar__3_3 = CharPrime_12;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.unsafe_index\'/3", (MR_String) "illegal sequence");
    }
    return HeadVar__3_3;
  }
}

MR_Char MR_CALL 
mercury__string__elem_2_f_0(
  MR_Integer Index_5,
  MR_String String_4)
{
  {
    MR_Char HeadVar__3_3;

    HeadVar__3_3 = mercury__string__det_index_2_f_0(String_4, Index_5);
    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__string__unsafe_index_3_p_0(
  MR_String Str_4,
  MR_Integer Index_5,
  MR_Char * Char_6)
{
  {
    MR_bool succeeded;
    MR_Char CharPrime_7;

{
#define MR_PROC_LABEL mercury__string__unsafe_index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  Str_4 ;
	Index =  Index_5 ;
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
	 CharPrime_7  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      *Char_6 = CharPrime_7;
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
  MR_String S_4,
  MR_Integer N_5)
{
  {
    MR_bool succeeded;
    MR_Char C_6;
    MR_Char CharPrime_10;

{
#define MR_PROC_LABEL mercury__string__unsafe_index_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  S_4 ;
	Index =  N_5 ;
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
	 CharPrime_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      C_6 = CharPrime_10;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.unsafe_index\'/3", (MR_String) "illegal sequence");
    }
    return C_6;
  }
}

void MR_CALL 
mercury__string__det_index_3_p_0(
  MR_String String_4,
  MR_Integer Int_5,
  MR_Char * Char_6)
{
  {
    MR_bool succeeded;
    MR_Char Char0_7;
    MR_Integer Len_13;
    MR_Char CharPrime_25;

{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Len_13  = Length;
}
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  Int_5 ;
	Length =  Len_13 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_4 ;
	Index =  Int_5 ;
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
	 CharPrime_25  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Char0_7 = CharPrime_25;
      else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.unsafe_index\'/3", (MR_String) "illegal sequence");
          return;
        }
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
      *Char_6 = Char0_7;
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
  MR_String S_4,
  MR_Integer N_5)
{
  {
    MR_bool succeeded;
    MR_Char C_6;
    MR_Char Char0_10;
    MR_Integer Len_16;
    MR_Char CharPrime_28;

{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  S_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Len_16  = Length;
}
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  N_5 ;
	Length =  Len_16 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  S_4 ;
	Index =  N_5 ;
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
	 CharPrime_28  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Char0_10 = CharPrime_28;
      else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.unsafe_index\'/3", (MR_String) "illegal sequence");
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
      C_6 = Char0_10;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.det_index\'/3", (MR_String) "index out of range");
    }
    return C_6;
  }
}

MR_bool MR_CALL 
mercury__string__index_3_p_0(
  MR_String Str_4,
  MR_Integer Index_5,
  MR_Char * Char_6)
{
  {
    MR_bool succeeded;
    MR_Integer Len_7;
    MR_Char CharPrime_19;

{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  Str_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Len_7  = Length;
}
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  Index_5 ;
	Length =  Len_7 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  Str_4 ;
	Index =  Index_5 ;
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
	 CharPrime_19  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        *Char_6 = CharPrime_19;
      else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.unsafe_index\'/3", (MR_String) "illegal sequence");
      }
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

MR_String MR_CALL 
mercury__string__duplicate_char_2_f_0(
  MR_Char C_4,
  MR_Integer N_5)
{
  {
    MR_String S_6;

    mercury__string__duplicate_char_3_p_0(C_4, N_5, &S_6);
    return S_6;
  }
}

void MR_CALL 
mercury__string__duplicate_char_3_p_0(
  MR_Char Char_4,
  MR_Integer Count_5,
  MR_String * String_6)
{
  {
    MR_bool succeeded;
    MR_Word Var_7;
    MR_String Str0_20;

    mercury__list__accumulate_n_copies_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Count_5, ((MR_Box) (MR_Word) (Char_4)), (MR_Word) ((MR_Unsigned) 0U), &Var_7);
    succeeded = mercury__string__semidet_from_char_list_2_p_0(Var_7, &Str0_20);
    if (succeeded)
      *String_6 = Str0_20;
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
  MR_Word CodeList_3,
  MR_String * String_4)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__from_utf16_code_unit_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Word RevChars_5;
      MR_String Str0_9;

      succeeded = mercury__string__decode_utf16_3_p_0(CodeList_3, (MR_Word) ((MR_Unsigned) 0U), &RevChars_5);
      if (succeeded)
      {
        succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(RevChars_5, &Str0_9);
        if (succeeded)
          *String_4 = Str0_9;
        else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_rev_char_list\'/2", (MR_String) "null character in list");
        }
        succeeded = MR_TRUE;
      }
    }
    else
      succeeded = mercury__string__from_code_unit_list_2_p_0(CodeList_3, String_4);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__decode_utf16_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * RevChars_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *RevChars_3 = HeadVar__2_2;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer A_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word FollowA_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer CharInt_9;
      MR_Word Rest_10;
      MR_Char Char_12;
      MR_Word Var_23;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (A_5 < (MR_Integer) 0);
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
        succeeded = (A_5 < (MR_Integer) 55296);
        if (succeeded)
        {
          CharInt_9 = A_5;
          Rest_10 = FollowA_6;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (A_5 < (MR_Integer) 56320);
          if (succeeded)
          {
            MR_Integer B_11;
            MR_Integer Var_16;
            MR_Integer Var_17;
            MR_Integer Var_18;
            MR_Integer Var_19;
            MR_Integer Var_20;
            MR_Integer Var_21;

            succeeded = ((MR_tag((MR_Word) FollowA_6)) == (MR_Integer) 1);
            if (succeeded)
            {
              B_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), FollowA_6, (MR_Integer) 0))));
              Rest_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FollowA_6, (MR_Integer) 1))));
              Var_16 = (MR_Integer) 56320;
              succeeded = (B_11 >= Var_16);
              if (succeeded)
              {
                Var_17 = (MR_Integer) 57343;
                succeeded = (B_11 <= Var_17);
                if (succeeded)
                {
                  Var_20 = (MR_Integer) 10;
                  Var_19 = mercury__int__f_60_60_2_f_0(A_5, Var_20);
                  Var_18 = (MR_Integer) ((MR_Unsigned) Var_19 + (MR_Unsigned) B_11);
                  Var_21 = (MR_Integer) 56613888;
                  CharInt_9 = (MR_Integer) ((MR_Unsigned) Var_18 - (MR_Unsigned) Var_21);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
          else
          {
            succeeded = (A_5 <= (MR_Integer) 65535);
            if (succeeded)
            {
              CharInt_9 = A_5;
              Rest_10 = FollowA_6;
              succeeded = MR_TRUE;
            }
          }
        }
      }
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__decode_utf16_3_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  CharInt_9 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Char_12  = Character;
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
          {
            Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (MR_Word) (Char_12));
            MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) (HeadVar__2_2));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Rest_10;
          next_value_of_HeadVar__2_2 = Var_23;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__string__from_utf8_code_unit_list_2_p_0(
  MR_Word CodeList_3,
  MR_String * String_4)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__from_utf8_code_unit_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = mercury__string__from_code_unit_list_2_p_0(CodeList_3, String_4);
    else
    {
      MR_Word RevChars_5;
      MR_String Str0_9;

      succeeded = mercury__string__decode_utf8_3_p_0(CodeList_3, (MR_Word) ((MR_Unsigned) 0U), &RevChars_5);
      if (succeeded)
      {
        succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(RevChars_5, &Str0_9);
        if (succeeded)
          *String_4 = Str0_9;
        else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_rev_char_list\'/2", (MR_String) "null character in list");
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__string__decode_utf8_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * RevChars_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *RevChars_3 = HeadVar__2_2;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer A_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word FollowA_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer CharInt_9;
      MR_Word Rest_10;
      MR_Char Char_14;
      MR_Word Var_60;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (A_5 < (MR_Integer) 0);
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
        succeeded = (A_5 <= (MR_Integer) 127);
        if (succeeded)
        {
          CharInt_9 = A_5;
          Rest_10 = FollowA_6;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (A_5 <= (MR_Integer) 193);
          if (succeeded)
            succeeded = MR_FALSE;
          else
          {
            succeeded = (A_5 <= (MR_Integer) 223);
            if (succeeded)
            {
              MR_Integer B_11;
              MR_Integer Var_19;
              MR_Integer Var_20;
              MR_Integer Var_21;
              MR_Integer Var_22;
              MR_Integer Var_23;
              MR_Integer Var_24;
              MR_Integer Var_25;
              MR_Integer Var_68;
              MR_Integer Var_69;

              succeeded = ((MR_tag((MR_Word) FollowA_6)) == (MR_Integer) 1);
              if (succeeded)
              {
                B_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), FollowA_6, (MR_Integer) 0))));
                Rest_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FollowA_6, (MR_Integer) 1))));
                Var_69 = (MR_Integer) 192;
                Var_68 = (B_11 & Var_69);
                succeeded = (Var_68 == (MR_Integer) 128);
                if (succeeded)
                {
                  Var_21 = (MR_Integer) 31;
                  Var_20 = (A_5 & Var_21);
                  Var_22 = (MR_Integer) 6;
                  Var_19 = mercury__int__f_60_60_2_f_0(Var_20, Var_22);
                  Var_24 = (MR_Integer) 63;
                  Var_23 = (B_11 & Var_24);
                  CharInt_9 = (Var_19 | Var_23);
                  Var_25 = (MR_Integer) 128;
                  succeeded = (CharInt_9 >= Var_25);
                }
              }
            }
            else
            {
              succeeded = (A_5 <= (MR_Integer) 239);
              if (succeeded)
              {
                MR_Integer C_12;
                MR_Word Var_27;
                MR_Integer Var_28;
                MR_Integer Var_29;
                MR_Integer Var_30;
                MR_Integer Var_31;
                MR_Integer Var_32;
                MR_Integer Var_33;
                MR_Integer Var_34;
                MR_Integer Var_35;
                MR_Integer Var_36;
                MR_Integer Var_37;
                MR_Integer Var_38;
                MR_Integer Var_39;
                MR_Integer B_61;
                MR_Integer Var_71;
                MR_Integer Var_72;
                MR_Integer Var_74;
                MR_Integer Var_75;

                succeeded = ((MR_tag((MR_Word) FollowA_6)) == (MR_Integer) 1);
                if (succeeded)
                {
                  B_61 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), FollowA_6, (MR_Integer) 0))));
                  Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FollowA_6, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_27)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    C_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));
                    Rest_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
                    Var_72 = (MR_Integer) 192;
                    Var_71 = (B_61 & Var_72);
                    succeeded = (Var_71 == (MR_Integer) 128);
                    if (succeeded)
                    {
                      Var_75 = (MR_Integer) 192;
                      Var_74 = (C_12 & Var_75);
                      succeeded = (Var_74 == (MR_Integer) 128);
                      if (succeeded)
                      {
                        Var_31 = (MR_Integer) 15;
                        Var_30 = (A_5 & Var_31);
                        Var_32 = (MR_Integer) 12;
                        Var_29 = mercury__int__f_60_60_2_f_0(Var_30, Var_32);
                        Var_35 = (MR_Integer) 63;
                        Var_34 = (B_61 & Var_35);
                        Var_36 = (MR_Integer) 6;
                        Var_33 = mercury__int__f_60_60_2_f_0(Var_34, Var_36);
                        Var_28 = (Var_29 | Var_33);
                        Var_38 = (MR_Integer) 63;
                        Var_37 = (C_12 & Var_38);
                        CharInt_9 = (Var_28 | Var_37);
                        Var_39 = (MR_Integer) 2048;
                        succeeded = (CharInt_9 >= Var_39);
                      }
                    }
                  }
                }
              }
              else
              {
                MR_Integer D_13;
                MR_Word Var_41;
                MR_Word Var_42;
                MR_Integer Var_43;
                MR_Integer Var_44;
                MR_Integer Var_45;
                MR_Integer Var_46;
                MR_Integer Var_47;
                MR_Integer Var_48;
                MR_Integer Var_49;
                MR_Integer Var_50;
                MR_Integer Var_51;
                MR_Integer Var_52;
                MR_Integer Var_53;
                MR_Integer Var_54;
                MR_Integer Var_55;
                MR_Integer Var_56;
                MR_Integer Var_57;
                MR_Integer Var_58;
                MR_Integer Var_59;
                MR_Integer B_62;
                MR_Integer C_63;
                MR_Integer Var_77;
                MR_Integer Var_78;
                MR_Integer Var_80;
                MR_Integer Var_81;
                MR_Integer Var_83;
                MR_Integer Var_84;

                succeeded = (A_5 <= (MR_Integer) 244);
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) FollowA_6)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    B_62 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), FollowA_6, (MR_Integer) 0))));
                    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FollowA_6, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      C_63 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0))));
                      Var_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        D_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 0))));
                        Rest_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_42, (MR_Integer) 1))));
                        Var_78 = (MR_Integer) 192;
                        Var_77 = (B_62 & Var_78);
                        succeeded = (Var_77 == (MR_Integer) 128);
                        if (succeeded)
                        {
                          Var_81 = (MR_Integer) 192;
                          Var_80 = (C_63 & Var_81);
                          succeeded = (Var_80 == (MR_Integer) 128);
                          if (succeeded)
                          {
                            Var_84 = (MR_Integer) 192;
                            Var_83 = (D_13 & Var_84);
                            succeeded = (Var_83 == (MR_Integer) 128);
                            if (succeeded)
                            {
                              Var_47 = (MR_Integer) 7;
                              Var_46 = (A_5 & Var_47);
                              Var_48 = (MR_Integer) 18;
                              Var_45 = mercury__int__f_60_60_2_f_0(Var_46, Var_48);
                              Var_51 = (MR_Integer) 63;
                              Var_50 = (B_62 & Var_51);
                              Var_52 = (MR_Integer) 12;
                              Var_49 = mercury__int__f_60_60_2_f_0(Var_50, Var_52);
                              Var_44 = (Var_45 | Var_49);
                              Var_55 = (MR_Integer) 63;
                              Var_54 = (C_63 & Var_55);
                              Var_56 = (MR_Integer) 6;
                              Var_53 = mercury__int__f_60_60_2_f_0(Var_54, Var_56);
                              Var_43 = (Var_44 | Var_53);
                              Var_58 = (MR_Integer) 63;
                              Var_57 = (D_13 & Var_58);
                              CharInt_9 = (Var_43 | Var_57);
                              Var_59 = (MR_Integer) 65536;
                              succeeded = (CharInt_9 >= Var_59);
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
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__decode_utf8_3_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Int =  CharInt_9 ;
		{

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Char_14  = Character;
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
          {
            Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (MR_Word) (Char_14));
            MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (HeadVar__2_2));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Rest_10;
          next_value_of_HeadVar__2_2 = Var_60;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__string__from_code_unit_list_2_p_0(
  MR_Word CodeList_1,
  MR_String * Str_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__from_code_unit_list_2_p_0

	MR_Word CodeList;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	CodeList =  CodeList_1 ;
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
        // It is an error to put a null character in a string
        // (see the comments at the top of this file).
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
	 *Str_2  = Str;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__string__to_utf16_code_unit_list_2_p_0(
  MR_String String_3,
  MR_Word * CodeList_4)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__to_utf16_code_unit_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Integer Var_18;
      MR_Integer End_35;
      MR_Integer Var_37;

{
#define MR_PROC_LABEL mercury__string__to_utf16_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_18  = Length;
}
{
#define MR_PROC_LABEL mercury__string__to_utf16_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_37  = Length;
}
      succeeded = (Var_18 < Var_37);
      if (succeeded)
        End_35 = Var_18;
      else
        End_35 = Var_37;
      mercury__string__foldr_between_2__ho49_6_p_0(String_3, (MR_Integer) 0, End_35, (MR_Word) ((MR_Unsigned) 0U), CodeList_4);
    }
    else
    {
      MR_Integer Var_60;

{
#define MR_PROC_LABEL mercury__string__to_utf16_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_60  = Length;
}
      mercury__string__to_code_unit_list_loop_4_p_0(String_3, (MR_Integer) 0, Var_60, CodeList_4);
    }
  }
}

static void MR_CALL 
mercury__string__foldr_between_2__ho49_6_p_0(
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer I_10,
  MR_Word STATE_VARIABLE_Acc_0_14,
  MR_Word * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_10 > Start_9);
    MR_Integer J_12;
    MR_Char Char_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__foldr_between_2__ho49_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_8 ;
	Index =  I_10 ;
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
	 J_12  = PrevIndex;
	 Char_13  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 >= Start_9);
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Acc_16_16;
      MR_Integer next_value_of_I_10;
      MR_Word next_value_of_STATE_VARIABLE_Acc_0_14;

      mercury__string__encode_utf16_3_p_0(Char_13, STATE_VARIABLE_Acc_0_14, &STATE_VARIABLE_Acc_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_I_10 = J_12;
      next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_16_16;
      I_10 = next_value_of_I_10;
      STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
    break;
  }
}

void MR_CALL 
mercury__string__encode_utf16_3_p_0(
  MR_Char Char_4,
  MR_Word CodeList0_5,
  MR_Word * CodeList_6)
{
  {
    MR_bool succeeded;
    MR_Word CharCodes_7;

    succeeded = mercury__char__to_utf16_2_p_0(Char_4, &CharCodes_7);
    if (succeeded)
    {
      mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CharCodes_7, CodeList0_5, CodeList_6);
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
  MR_String String_3,
  MR_Word * CodeList_4)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__to_utf8_code_unit_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Integer Var_14;

{
#define MR_PROC_LABEL mercury__string__to_utf8_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_14  = Length;
}
      mercury__string__to_code_unit_list_loop_4_p_0(String_3, (MR_Integer) 0, Var_14, CodeList_4);
    }
    else
    {
      MR_Integer Var_27;
      MR_Integer End_44;
      MR_Integer Var_46;

{
#define MR_PROC_LABEL mercury__string__to_utf8_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_27  = Length;
}
{
#define MR_PROC_LABEL mercury__string__to_utf8_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_46  = Length;
}
      succeeded = (Var_27 < Var_46);
      if (succeeded)
        End_44 = Var_27;
      else
        End_44 = Var_46;
      mercury__string__foldr_between_2__ho50_6_p_0(String_3, (MR_Integer) 0, End_44, (MR_Word) ((MR_Unsigned) 0U), CodeList_4);
    }
  }
}

static void MR_CALL 
mercury__string__foldr_between_2__ho50_6_p_0(
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer I_10,
  MR_Word STATE_VARIABLE_Acc_0_14,
  MR_Word * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_10 > Start_9);
    MR_Integer J_12;
    MR_Char Char_13;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__foldr_between_2__ho50_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  String_8 ;
	Index =  I_10 ;
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
	 J_12  = PrevIndex;
	 Char_13  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 >= Start_9);
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Acc_16_16;
      MR_Integer next_value_of_I_10;
      MR_Word next_value_of_STATE_VARIABLE_Acc_0_14;

      mercury__string__encode_utf8_3_p_0(Char_13, STATE_VARIABLE_Acc_0_14, &STATE_VARIABLE_Acc_16_16);
      // direct tailcall eliminated
      ;
      next_value_of_I_10 = J_12;
      next_value_of_STATE_VARIABLE_Acc_0_14 = STATE_VARIABLE_Acc_16_16;
      I_10 = next_value_of_I_10;
      STATE_VARIABLE_Acc_0_14 = next_value_of_STATE_VARIABLE_Acc_0_14;
      continue;
    }
    else
      *STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_0_14;
    break;
  }
}

void MR_CALL 
mercury__string__encode_utf8_3_p_0(
  MR_Char Char_4,
  MR_Word CodeList0_5,
  MR_Word * CodeList_6)
{
  {
    MR_bool succeeded;
    MR_Word CharCodes_7;

    succeeded = mercury__char__to_utf8_2_p_0(Char_4, &CharCodes_7);
    if (succeeded)
    {
      mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CharCodes_7, CodeList0_5, CodeList_6);
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
  MR_String String_3,
  MR_Word * List_4)
{
  {
    MR_Integer Var_6;

{
#define MR_PROC_LABEL mercury__string__to_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Var_6  = Length;
}
    mercury__string__to_code_unit_list_loop_4_p_0(String_3, (MR_Integer) 0, Var_6, List_4);
  }
}

void MR_CALL 
mercury__string__to_code_unit_list_loop_4_p_0(
  MR_String String_5,
  MR_Integer Index_6,
  MR_Integer End_7,
  MR_Word * List_8)
{
  {
    MR_bool succeeded = (Index_6 >= End_7);

    if (succeeded)
      *List_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer Code_9;
      MR_Word Tail_10;
      MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__string__to_code_unit_list_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  String_5 ;
	Index =  Index_6 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	 Code_9  = Code;
}
      Var_11 = (MR_Integer) ((MR_Unsigned) Index_6 + (MR_Unsigned) (MR_Integer) 1);
      mercury__string__to_code_unit_list_loop_4_p_0(String_5, Var_11, End_7, &Tail_10);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *List_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Code_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Tail_10));
      }
    }
  }
}

void MR_CALL 
mercury__string__from_rev_char_list_2_p_0(
  MR_Word Chars_3,
  MR_String * Str_4)
{
  {
    MR_bool succeeded;
    MR_String Str0_5;

    succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(Chars_3, &Str0_5);
    if (succeeded)
      *Str_4 = Str0_5;
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
  MR_Word Cs_3)
{
  {
    MR_bool succeeded;
    MR_String S_4;
    MR_String Str0_7;

    succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(Cs_3, &Str0_7);
    if (succeeded)
      S_4 = Str0_7;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_rev_char_list\'/2", (MR_String) "null character in list");
    }
    return S_4;
  }
}

MR_bool MR_CALL 
mercury__string__semidet_from_rev_char_list_2_p_0(
  MR_Word Chars_1,
  MR_String * Str_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__semidet_from_rev_char_list_2_p_0

	MR_Word Chars;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Chars =  Chars_1 ;
		{
{
    MR_Word list_ptr;
    MR_Word size;
    MR_Char c;

    // Loop to calculate list length in `size' using list in `list_ptr'.
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

    // Allocate heap space for string.
    MR_allocate_aligned_string_msg(Str, size, MR_ALLOC_ID);

    // Set size to be the offset of the end of the string
    // (ie the \0) and null terminate the string.
    Str[size] = '\0';

    // Loop to copy the characters from the list_ptr to the string
    // in reverse order.
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
	 *Str_2  = Str;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__string__from_char_list_2_p_1(
  MR_Word * Chars_1,
  MR_String Str_2)
{
  {
{
#define MR_PROC_LABEL mercury__string__from_char_list_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  Str_2 ;
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
	 *Chars_1  = CharList;
}
  }
}

void MR_CALL 
mercury__string__from_char_list_2_p_0(
  MR_Word Chars_1,
  MR_String * Str_2)
{
  {
    MR_bool succeeded;
    MR_String Str0_7;

    succeeded = mercury__string__semidet_from_char_list_2_p_0(Chars_1, &Str0_7);
    if (succeeded)
      *Str_2 = Str0_7;
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
  MR_Word Cs_3)
{
  {
    MR_bool succeeded;
    MR_String S_4;
    MR_String Str0_9;

    succeeded = mercury__string__semidet_from_char_list_2_p_0(Cs_3, &Str0_9);
    if (succeeded)
      S_4 = Str0_9;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_char_list\'/2", (MR_String) "null character in list");
    }
    return S_4;
  }
}

void MR_CALL 
mercury__string__to_char_list_2_p_1(
  MR_String * Str_1,
  MR_Word CharList_2)
{
  {
    MR_bool succeeded;
    MR_String Str0_11;

    succeeded = mercury__string__semidet_from_char_list_2_p_0(CharList_2, &Str0_11);
    if (succeeded)
      *Str_1 = Str0_11;
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
  MR_Word CharList_1,
  MR_String * Str_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__semidet_from_char_list_2_p_0

	MR_Word CharList;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	CharList =  CharList_1 ;
		{
{
    // mode (uo, in) is det
    MR_Word char_list_ptr;
    size_t size;
    MR_Char c;

    // Loop to calculate list length + sizeof(MR_Word) in `size'
    // using list in `char_list_ptr'.
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

    // Allocate heap space for string.
    MR_allocate_aligned_string_msg(Str, size, MR_ALLOC_ID);

    // Loop to copy the characters from the char_list to the string.
    SUCCESS_INDICATOR = MR_TRUE;
    size = 0;
    char_list_ptr = CharList;
    while (! MR_list_is_empty(char_list_ptr)) {
        c = (MR_Char) MR_list_head(char_list_ptr);
        // It is an error to put a null character in a string
        // (see the comments at the top of this file).
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
	 *Str_2  = Str;
	}
succeeded  = SUCCESS_INDICATOR;
}
    return succeeded;
  }
}

void MR_CALL 
mercury__string__to_char_list_2_p_0(
  MR_String Str_1,
  MR_Word * CharList_2)
{
  {
{
#define MR_PROC_LABEL mercury__string__to_char_list_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  Str_1 ;
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
	 *CharList_2  = CharList;
}
  }
}

MR_Word MR_CALL 
mercury__string__to_char_list_1_f_0(
  MR_String S_3)
{
  {
    MR_Word Cs_4;

{
#define MR_PROC_LABEL mercury__string__to_char_list_1_f_0

	MR_String Str;
	MR_Word CharList;

	Str =  S_3 ;
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
	 Cs_4  = CharList;
}
    return Cs_4;
  }
}

static MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string____Unify____justified_column_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__string____Compare____justified_column_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__string____Compare____justified_column_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string____Unify____justify_sense_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__string____Compare____justify_sense_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__string____Compare____justify_sense_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__string____Unify____line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string____Unify____line_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__string____Compare____line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__string____Compare____line_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string____Unify____poly_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__string____Compare____poly_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__string____Compare____poly_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__string____Unify____text_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__string____Compare____text_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__string____Compare____text_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module string.
