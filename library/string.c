/*
** Automatically generated from `string.m'
** by the Mercury compiler,
** version rotd-2023-04-18
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
#include "exception.mih"
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
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
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
#include "io.error_util.mih"
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



struct mercury__string__foldr_between_2_6_p_4_env_0_s {
  MR_Word mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_17;
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
  MR_Word mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_17;
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
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_23;
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_24;
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
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_23;
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_24;
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
  MR_Word mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_17;
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
  MR_Word mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_17;
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

static const MR_EnumFunctorDescPtr mercury__string__string__enum_ordinal_ordered_justify_sense_0[2];

static const MR_EnumFunctorDescPtr mercury__string__string__enum_name_ordered_justify_sense_0[2];

static const MR_Integer mercury__string__string__functor_number_map_justify_sense_0[2];

static const MR_Integer mercury__string__string__functor_number_map_line_0[1];

static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_line_0;

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_maybe_replaced_0_0;

static const MR_PseudoTypeInfo mercury__string__string__field_types_maybe_replaced_0_1[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_maybe_replaced_0_1;

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_maybe_replaced_0_0[1];

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_maybe_replaced_0_1[1];

static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_maybe_replaced_0[2];

static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_maybe_replaced_0[2];

static const MR_Integer mercury__string__string__functor_number_map_maybe_replaced_0[2];

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_0[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_0;

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_1[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_1;

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_2[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_2;

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_3[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_3;

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_4[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_4;

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_5[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_5;

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_6[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_6;

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_7[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_7;

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_8[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_8;

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_9[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_9;

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_10[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_10;

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_11[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_11;

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_12[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_12;

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_0[1];

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_1[1];

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_2[1];

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_3[10];

static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_poly_type_0[4];

static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_poly_type_0[13];

static const MR_Integer mercury__string__string__functor_number_map_poly_type_0[13];

static const MR_PseudoTypeInfo mercury__string__string__field_types_string_piece_0_0[1];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_string_piece_0_0;

static const MR_PseudoTypeInfo mercury__string__string__field_types_string_piece_0_1[3];

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_string_piece_0_1;

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_string_piece_0_0[1];

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_string_piece_0_1[1];

static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_string_piece_0[2];

static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_string_piece_0[2];

static const MR_Integer mercury__string__string__functor_number_map_string_piece_0[2];

static const MR_Integer mercury__string__string__functor_number_map_text_file_0[1];

static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_text_file_0;

static MR_bool MR_CALL 
mercury__string__base_uint_accumulator_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_uint_accumulator_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_uint_accumulator_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_uint_accumulator_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_uint_accumulator_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_int_accumulator_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_int_accumulator_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_int_accumulator_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_int_accumulator_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_negative_int_accumulator_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_positive_int_accumulator_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_positive_int_accumulator_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_positive_int_accumulator_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_positive_int_accumulator_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string__base_positive_int_accumulator_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Word MR_CALL 
mercury__string__map__ho12_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__string__LCMC__func__map__ho12__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13);

static MR_Word MR_CALL 
mercury__string__map__ho11_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__string__LCMC__func__map__ho11__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_21);

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_in__list_0(
  MR_String Var_17,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_52_51_95_95_91_50_93_95_48_3_f_in__list_0(
  MR_String Var_34,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
mercury__string__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_52_51_95_95_91_50_93_95_48_95_95_49_4_p_0(
  MR_String Var_34,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_61);

static MR_Word MR_CALL 
mercury__string__map__ho14_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__string__LCMC__func__map__ho14__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13);

static void MR_CALL 
mercury__string__foldl__ho7_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

static MR_Word MR_CALL 
mercury__string__map_corresponding__ho13_3_f_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
mercury__string__LCMC__func__map_corresponding__ho13__1_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_35);

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0(
  MR_Char Var_12,
  MR_Integer Var_13,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__string__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_95_95_49_3_p_0(
  MR_Char Var_12,
  MR_Integer Var_13,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_15);

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_51_93_95_48_2_f_in__list_0(
  MR_Char Var_12,
  MR_Integer Var_13,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__string__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_51_93_95_48_95_95_49_3_p_0(
  MR_Char Var_12,
  MR_Integer Var_13,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_15);

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_49_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word Var_19,
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
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_52_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word Var_19,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer I_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15);

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_57_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word Var_19,
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
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word Var_19,
  MR_String String_8,
  MR_Integer I_9,
  MR_Integer End_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15);

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_56_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_String Var_12,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__string__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_56_95_95_91_50_93_95_48_95_95_49_3_p_0(
  MR_String Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_40);

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
  MR_Char Var_26,
  MR_String Str_8,
  MR_Integer CurPos_9,
  MR_Integer PastSegEnd_10,
  MR_Word STATE_VARIABLE_Segments_0_17,
  MR_Word * STATE_VARIABLE_Segments_18);

static void MR_CALL 
mercury__string__words_loop__ho37_4_p_0(
  MR_String String_6,
  MR_Integer WordStartPos_7,
  MR_Word * Words_8);

static void MR_CALL 
mercury__string__LCMC__pred__words_loop__ho37__1_4_p_0(
  MR_String String_6,
  MR_Integer WordStartPos_7,
  MR_Word * AddrOfWords_15);

static void MR_CALL 
mercury__string__skip_to_word_end__ho46_4_p_0(
  MR_String String_6,
  MR_Integer CurPos_7,
  MR_Integer * PastWordEndPos_8);

static void MR_CALL 
mercury__string__skip_to_next_word_start__ho36_4_p_0(
  MR_String String_6,
  MR_Integer CurPos_7,
  MR_Integer * NextWordStartPos_8);

static MR_Word MR_CALL 
mercury__string__map__ho26_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__string__LCMC__func__map__ho26__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_15);

static void MR_CALL 
mercury__string__foldl2__ho10_6_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * HeadVar__6_6);

static MR_bool MR_CALL 
mercury__string__all_match_loop__ho32_3_p_0(
  MR_String String_5,
  MR_Integer Cur_6);

static void MR_CALL 
mercury__string__foldl_between_2__ho47_6_p_0(
  MR_String String_8,
  MR_Integer I_9,
  MR_Integer End_10,
  MR_Integer STATE_VARIABLE_Acc_0_14,
  MR_Integer * STATE_VARIABLE_Acc_15);

static void MR_CALL 
mercury__string__foldr_between_2__ho48_6_p_0(
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
mercury__string____Unify____maybe_replaced_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string____Compare____maybe_replaced_0_0_10001(
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
mercury__string____Unify____string_buffer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string____Compare____string_buffer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__string____Unify____string_piece_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__string____Compare____string_piece_0_0_10001(
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


static /* final */ const MR_Box mercury__string_scalar_common_1[3][2];

static /* final */ const MR_Box mercury__string_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__string_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__string_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__string_scalar_common_5[1][7];

static /* final */ const MR_Box mercury__string_scalar_common_6[1][8];




static /* final */ const MR_Box mercury__string_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_ops__op_table__arity1__ops__mercury_op_table__arity0__)),
    ((MR_Box) (&mercury__ops__ops__type_ctor_info_mercury_op_table_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 45)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__string_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string_scalar_common_4[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__string_scalar_common_5[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mercury__string_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
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

#line 5510 "string.m"
MR_bool 
ML_string_to_float(
  MR_String FloatString_1,
  MR_Float * FloatVal_2)
#line 5510 "string.m"
{
#line 5510 "string.m"
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
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
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
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_justified_column_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_justified_column_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string____Unify____justified_column_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____justified_column_0_0_10001)),
  (MR_String) "string",
  (MR_String) "justified_column",
  { mercury__string__string__du_name_ordered_justified_column_0 },
  { mercury__string__string__du_ptag_ordered_justified_column_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__string__string__functor_number_map_justified_column_0,

};

static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_0 = {
  (MR_String) "just_left",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_1 = {
  (MR_String) "just_right",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__string__string__enum_ordinal_ordered_justify_sense_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string____Unify____justify_sense_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____justify_sense_0_0_10001)),
  (MR_String) "string",
  (MR_String) "justify_sense",
  { mercury__string__string__enum_name_ordered_justify_sense_0 },
  { mercury__string__string__enum_ordinal_ordered_justify_sense_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__string__string__functor_number_map_justify_sense_0,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__string____Unify____line_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____line_0_0_10001)),
  (MR_String) "string",
  (MR_String) "line",
  { &mercury__string__string__notag_functor_desc_line_0 },
  { &mercury__string__string__notag_functor_desc_line_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__string__string__functor_number_map_line_0,

};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_maybe_replaced_0_0 = {
  (MR_String) "not_replaced",
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

static const MR_PseudoTypeInfo mercury__string__string__field_types_maybe_replaced_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint8_0)
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_maybe_replaced_0_1 = {
  (MR_String) "replaced_code_unit",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__string__string__field_types_maybe_replaced_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_maybe_replaced_0_0[1] = {
  &mercury__string__string__du_functor_desc_maybe_replaced_0_0
};

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_maybe_replaced_0_1[1] = {
  &mercury__string__string__du_functor_desc_maybe_replaced_0_1
};

static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_maybe_replaced_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__string__string__du_stag_ordered_maybe_replaced_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_maybe_replaced_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_maybe_replaced_0[2] = {
  &mercury__string__string__du_functor_desc_maybe_replaced_0_0,
  &mercury__string__string__du_functor_desc_maybe_replaced_0_1
};

static const MR_Integer mercury__string__string__functor_number_map_maybe_replaced_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_maybe_replaced_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string____Unify____maybe_replaced_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____maybe_replaced_0_0_10001)),
  (MR_String) "string",
  (MR_String) "maybe_replaced",
  { mercury__string__string__du_name_ordered_maybe_replaced_0 },
  { mercury__string__string__du_ptag_ordered_maybe_replaced_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__string__string__functor_number_map_maybe_replaced_0,

};

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_float_0)
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_0 = {
  (MR_String) "f",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
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
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__string__string__field_types_poly_type_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int8_0)
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_2 = {
  (MR_String) "i8",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__string__string__field_types_poly_type_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int16_0)
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_3 = {
  (MR_String) "i16",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  mercury__string__string__field_types_poly_type_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int32_0)
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_4 = {
  (MR_String) "i32",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  mercury__string__string__field_types_poly_type_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_5[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int64_0)
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_5 = {
  (MR_String) "i64",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  mercury__string__string__field_types_poly_type_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_6[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_6 = {
  (MR_String) "u",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  mercury__string__string__field_types_poly_type_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_7[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint8_0)
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_7 = {
  (MR_String) "u8",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  mercury__string__string__field_types_poly_type_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_8[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint16_0)
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_8 = {
  (MR_String) "u16",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  mercury__string__string__field_types_poly_type_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_9[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint32_0)
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_9 = {
  (MR_String) "u32",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 6,
  INT32_C(9),
  mercury__string__string__field_types_poly_type_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_10[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint64_0)
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_10 = {
  (MR_String) "u64",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 7,
  INT32_C(10),
  mercury__string__string__field_types_poly_type_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_11[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_11 = {
  (MR_String) "s",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 8,
  INT32_C(11),
  mercury__string__string__field_types_poly_type_0_11,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_12[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0)
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_12 = {
  (MR_String) "c",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 9,
  INT32_C(12),
  mercury__string__string__field_types_poly_type_0_12,
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

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_3[10] = {
  &mercury__string__string__du_functor_desc_poly_type_0_3,
  &mercury__string__string__du_functor_desc_poly_type_0_4,
  &mercury__string__string__du_functor_desc_poly_type_0_5,
  &mercury__string__string__du_functor_desc_poly_type_0_6,
  &mercury__string__string__du_functor_desc_poly_type_0_7,
  &mercury__string__string__du_functor_desc_poly_type_0_8,
  &mercury__string__string__du_functor_desc_poly_type_0_9,
  &mercury__string__string__du_functor_desc_poly_type_0_10,
  &mercury__string__string__du_functor_desc_poly_type_0_11,
  &mercury__string__string__du_functor_desc_poly_type_0_12
};

static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_poly_type_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_poly_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_poly_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_poly_type_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(10),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__string__string__du_stag_ordered_poly_type_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_poly_type_0[13] = {
  &mercury__string__string__du_functor_desc_poly_type_0_12,
  &mercury__string__string__du_functor_desc_poly_type_0_0,
  &mercury__string__string__du_functor_desc_poly_type_0_1,
  &mercury__string__string__du_functor_desc_poly_type_0_3,
  &mercury__string__string__du_functor_desc_poly_type_0_4,
  &mercury__string__string__du_functor_desc_poly_type_0_5,
  &mercury__string__string__du_functor_desc_poly_type_0_2,
  &mercury__string__string__du_functor_desc_poly_type_0_11,
  &mercury__string__string__du_functor_desc_poly_type_0_6,
  &mercury__string__string__du_functor_desc_poly_type_0_8,
  &mercury__string__string__du_functor_desc_poly_type_0_9,
  &mercury__string__string__du_functor_desc_poly_type_0_10,
  &mercury__string__string__du_functor_desc_poly_type_0_7
};

static const MR_Integer mercury__string__string__functor_number_map_poly_type_0[13] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 8,
  (MR_Integer) 12,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 11,
  (MR_Integer) 7,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_poly_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string____Unify____poly_type_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____poly_type_0_0_10001)),
  (MR_String) "string",
  (MR_String) "poly_type",
  { mercury__string__string__du_name_ordered_poly_type_0 },
  { mercury__string__string__du_ptag_ordered_poly_type_0 },
  (MR_Integer) 13,
  UINT16_C(12),
  mercury__string__string__functor_number_map_poly_type_0,

};

const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_string_buffer_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__string____Unify____string_buffer_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____string_buffer_0_0_10001)),
  (MR_String) "string",
  (MR_String) "string_buffer",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo mercury__string__string__field_types_string_piece_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_string_piece_0_0 = {
  (MR_String) "string",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__string__string__field_types_string_piece_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__string__string__field_types_string_piece_0_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_string_piece_0_1 = {
  (MR_String) "substring",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__string__string__field_types_string_piece_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_string_piece_0_0[1] = {
  &mercury__string__string__du_functor_desc_string_piece_0_0
};

static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_string_piece_0_1[1] = {
  &mercury__string__string__du_functor_desc_string_piece_0_1
};

static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_string_piece_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_string_piece_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_string_piece_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_string_piece_0[2] = {
  &mercury__string__string__du_functor_desc_string_piece_0_0,
  &mercury__string__string__du_functor_desc_string_piece_0_1
};

static const MR_Integer mercury__string__string__functor_number_map_string_piece_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_string_piece_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string____Unify____string_piece_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____string_piece_0_0_10001)),
  (MR_String) "string",
  (MR_String) "string_piece",
  { mercury__string__string__du_name_ordered_string_piece_0 },
  { mercury__string__string__du_ptag_ordered_string_piece_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__string__string__functor_number_map_string_piece_0,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__string____Unify____text_file_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____text_file_0_0_10001)),
  (MR_String) "string",
  (MR_String) "text_file",
  { &mercury__string__string__notag_functor_desc_text_file_0 },
  { &mercury__string__string__notag_functor_desc_text_file_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__string__string__functor_number_map_text_file_0,

};

void MR_CALL 
mercury__string____Compare____text_file_0_0(
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
    MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
    MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);
    MR_Integer Var_9;

{
#define MR_PROC_LABEL mercury__string____Compare____text_file_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_9  = Res;
}
    succeeded = (Var_9 < (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 == (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0(
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
    MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
    MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
  }
  return succeeded;
}

void MR_CALL 
mercury__string____Compare____string_piece_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_22 == CastY_23);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_String Var_28 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer Var_32;

{
#define MR_PROC_LABEL mercury__string____Compare____string_piece_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_28 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_32  = Res;
}
      succeeded = (Var_32 < (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_32 == (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Integer Var_29 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Integer Var_30 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_31 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_String ArgY1_15 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgY2_18 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgY3_21 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_16;
      MR_Integer Var_34;

{
#define MR_PROC_LABEL mercury__string____Compare____string_piece_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_31 ;
	S2 = ArgY1_15 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_34  = Res;
}
      succeeded = (Var_34 < (MR_Integer) 0);
      if (succeeded)
        SubResult1_16 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_34 == (MR_Integer) 0);
        if (succeeded)
          SubResult1_16 = (MR_Integer) 0;
        else
          SubResult1_16 = (MR_Integer) 2;
      }
      succeeded = (SubResult1_16 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_16;
      else
      {
        MR_Word SubResult2_19;

        succeeded = (Var_30 < ArgY2_18);
        if (succeeded)
          SubResult2_19 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_30 == ArgY2_18);
          if (succeeded)
            SubResult2_19 = (MR_Integer) 0;
          else
            SubResult2_19 = (MR_Integer) 2;
        }
        succeeded = (SubResult2_19 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_19;
        else
        {
          succeeded = (Var_29 < ArgY3_21);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_29 == ArgY3_21);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 0;
            else
              *HeadVar__1_1 = (MR_Integer) 2;
          }
        }
      }
    }
  }
}

MR_bool MR_CALL 
mercury__string____Unify____string_piece_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    }
  }
  else
  {
    MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_6;
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_8;
    MR_Integer ArgX3_9 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Integer ArgY3_10;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
      if (succeeded)
      {
        succeeded = (ArgX2_7 == ArgY2_8);
        if (succeeded)
          succeeded = (ArgX3_9 == ArgY3_10);
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__string____Compare____string_buffer_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__string____Unify____string_buffer_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__string____Compare____poly_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_342 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_343 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_342 == CastY_343);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Float Var_358 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0)));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Float ArgY1_5 = MR_unbox_float((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0)));

                succeeded = (Var_358 < ArgY1_5);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_358 > ArgY1_5);
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
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
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
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 6:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 7:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 8:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 9:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Var_359 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Integer ArgY1_33 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                succeeded = (Var_359 < ArgY1_33);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_359 == ArgY1_33);
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
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
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
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 6:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 7:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 8:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 9:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          int8_t Var_363 = ((int8_t) (MR_Word) (MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0)));

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
                int8_t ArgY1_61 = ((int8_t) (MR_Word) (MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0)));

                succeeded = (Var_363 < ArgY1_61);
                if (succeeded)
                  *HeadVar__1_1 = (MR_Integer) 1;
                else
                {
                  succeeded = (Var_363 == ArgY1_61);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 0;
                  else
                    *HeadVar__1_1 = (MR_Integer) 2;
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
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
                case (MR_Integer) 4:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 6:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 7:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 8:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 9:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              int16_t Var_360 = ((int16_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        int16_t ArgY1_89 = ((int16_t) (MR_Word) (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                        succeeded = (Var_360 < ArgY1_89);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_360 == ArgY1_89);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *HeadVar__1_1 = (MR_Integer) 2;
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
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              int32_t Var_361 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        int32_t ArgY1_117 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                        succeeded = (Var_361 < ArgY1_117);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_361 == ArgY1_117);
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
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              int64_t Var_362 = MR_unbox_int64((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      {
                        int64_t ArgY1_145 = MR_unbox_int64((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                        succeeded = (Var_362 < ArgY1_145);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_362 == ArgY1_145);
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
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Unsigned Var_365 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                        MR_Unsigned ArgY1_173 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        succeeded = (Var_365 < ArgY1_173);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_365 == ArgY1_173);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *HeadVar__1_1 = (MR_Integer) 2;
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              uint8_t Var_369 = ((uint8_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      {
                        uint8_t ArgY1_201 = ((uint8_t) (MR_Word) (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                        succeeded = (Var_369 < ArgY1_201);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_369 == ArgY1_201);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *HeadVar__1_1 = (MR_Integer) 2;
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              uint16_t Var_366 = ((uint16_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      {
                        uint16_t ArgY1_229 = ((uint16_t) (MR_Word) (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                        succeeded = (Var_366 < ArgY1_229);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_366 == ArgY1_229);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *HeadVar__1_1 = (MR_Integer) 2;
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              uint32_t Var_367 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      {
                        uint32_t ArgY1_257 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                        succeeded = (Var_367 < ArgY1_257);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_367 == ArgY1_257);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *HeadVar__1_1 = (MR_Integer) 2;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              uint64_t Var_368 = MR_unbox_uint64((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 7:
                      {
                        uint64_t ArgY1_285 = MR_unbox_uint64((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));

                        succeeded = (Var_368 < ArgY1_285);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_368 == ArgY1_285);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *HeadVar__1_1 = (MR_Integer) 2;
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String Var_364 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_String ArgY1_313 = ((MR_String) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));
                        MR_Integer Var_372;

{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_364 ;
	S2 = ArgY1_313 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_372  = Res;
}
                        succeeded = (Var_372 < (MR_Integer) 0);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_372 == (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *HeadVar__1_1 = (MR_Integer) 2;
                        }
                      }
                      break;
                    case (MR_Integer) 9:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Char Var_357 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));

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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 6:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 7:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 8:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Char ArgY1_341 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1)));
                        MR_Integer Var_370;
                        MR_Integer Var_371;

{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Char Character;
	MR_Integer Int;

	Character = Var_357 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_370  = Int;
}
{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Char Character;
	MR_Integer Int;

	Character = ArgY1_341 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	Var_371  = Int;
}
                        succeeded = (Var_370 < Var_371);
                        if (succeeded)
                          *HeadVar__1_1 = (MR_Integer) 1;
                        else
                        {
                          succeeded = (Var_370 == Var_371);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 0;
                          else
                            *HeadVar__1_1 = (MR_Integer) 2;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_29 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_30 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_29 == CastY_30);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Float ArgX1_3 = MR_unbox_float((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0)));
          MR_Float ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
          if (succeeded)
          {
            ArgY1_4 = MR_unbox_float((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0)));
            succeeded = (ArgX1_3 == ArgY1_4);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
          MR_Integer ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
            succeeded = (ArgX1_5 == ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          int8_t ArgX1_7 = ((int8_t) (MR_Word) (MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0)));
          int8_t ArgY1_8;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_8 = ((int8_t) (MR_Word) (MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0)));
            succeeded = (ArgX1_7 == ArgY1_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              int16_t ArgX1_9 = ((int16_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              int16_t ArgY1_10;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
              if (succeeded)
              {
                ArgY1_10 = ((int16_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_9 == ArgY1_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              int32_t ArgX1_11 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              int32_t ArgY1_12;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                ArgY1_12 = ((int32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_11 == ArgY1_12);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              int64_t ArgX1_13 = MR_unbox_int64((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              int64_t ArgY1_14;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                ArgY1_14 = MR_unbox_int64((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_13 == ArgY1_14);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Unsigned ArgX1_15 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_Unsigned ArgY1_16;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                ArgY1_16 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (ArgX1_15 == ArgY1_16);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              uint8_t ArgX1_17 = ((uint8_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              uint8_t ArgY1_18;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
                ArgY1_18 = ((uint8_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_17 == ArgY1_18);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              uint16_t ArgX1_19 = ((uint16_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              uint16_t ArgY1_20;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
              if (succeeded)
              {
                ArgY1_20 = ((uint16_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_19 == ArgY1_20);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              uint32_t ArgX1_21 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              uint32_t ArgY1_22;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
              if (succeeded)
              {
                ArgY1_22 = ((uint32_t) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_21 == ArgY1_22);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              uint64_t ArgX1_23 = MR_unbox_uint64((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              uint64_t ArgY1_24;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
              if (succeeded)
              {
                ArgY1_24 = MR_unbox_uint64((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_23 == ArgY1_24);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String ArgX1_25 = ((MR_String) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
              MR_String ArgY1_26;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
              if (succeeded)
              {
                ArgY1_26 = ((MR_String) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                succeeded = (strcmp(ArgX1_25, ArgY1_26) == 0);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Char ArgX1_27 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1)));
              MR_Char ArgY1_28;

              succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
              if (succeeded)
              {
                ArgY1_28 = ((MR_Char) (MR_Word) (MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1)));
                succeeded = (ArgX1_27 == ArgY1_28);
              }
            }
            break;
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__string____Compare____maybe_replaced_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    uint8_t Var_11 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0)));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      uint8_t ArgY1_7 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0)));

      succeeded = (Var_11 < ArgY1_7);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_11 == ArgY1_7);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

void MR_CALL 
mercury__string____Compare____line_0_0(
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
    MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
    MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);
    MR_Integer Var_9;

{
#define MR_PROC_LABEL mercury__string____Compare____line_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_9  = Res;
}
    succeeded = (Var_9 < (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 == (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__string____Unify____line_0_0(
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
    MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
    MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
  }
  return succeeded;
}

void MR_CALL 
mercury__string____Compare____justify_sense_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__string____Compare____justified_column_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&mercury__string_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_16)), ((MR_Box) (ArgY1_5)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&mercury__string_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_11)));
    }
  }
}

MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&mercury__string_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_10_10 = (MR_Word) (&mercury__string_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  return succeeded;
}

MR_Integer MR_CALL 
mercury__string__max_precision_0_f_0(void)
{
  MR_Integer HeadVar__1_1 = (MR_Integer) ((MR_Unsigned) 15 + (MR_Unsigned) 2);

  return HeadVar__1_1;
}

MR_Integer MR_CALL 
mercury__string__min_precision_0_f_0(void)
{
  return (MR_Integer) 15;
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
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_Integer I;
	MR_String S;

	I = Prec_4 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	Var_12  = S;
}
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = Var_12 ;
	S2 = (MR_String) "g" ;
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

	S1 = (MR_String) "%#." ;
	S2 = Var_11 ;
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
      Var_14 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_14, 0) = MR_box_float(Float_5);
    }
    {
      Var_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_9, 0) = ((MR_Box) (Var_14));
      MR_hl_field(1, Var_9, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__string__format__format_impl_3_p_0(Var_8, Var_9, &Tmp_7);
    Var_18 = (MR_Integer) ((MR_Unsigned) 15 + (MR_Unsigned) 2);
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

	FloatString = Tmp_7 ;
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
        MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) Prec_4 + (MR_Unsigned) 1);
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
mercury__string__accumulate_uint_5_p_0(
  MR_Unsigned Base_6,
  MR_Integer BaseInt_7,
  MR_Char Char_8,
  MR_Unsigned N0_9,
  MR_Unsigned * N_10)
{
  MR_bool succeeded;
  MR_Integer M_11;
  MR_Unsigned Var_12;
  MR_Unsigned Var_13;

  succeeded = mercury__char__unsafe_base_digit_to_int_3_p_0(BaseInt_7, Char_8, &M_11);
  if (succeeded)
  {
    Var_12 = (Base_6 * N0_9);
    Var_13 = mercury__uint__det_from_int_1_f_0(M_11);
    *N_10 = (Var_12 + Var_13);
    succeeded = (N0_9 <= *N_10);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__accumulate_negative_int_4_p_0(
  MR_Integer Base_5,
  MR_Char Char_6,
  MR_Integer N0_7,
  MR_Integer * N_8)
{
  MR_bool succeeded;
  MR_Integer M_9;
  MR_Integer Var_10;

  succeeded = mercury__char__unsafe_base_digit_to_int_3_p_0(Base_5, Char_6, &M_9);
  if (succeeded)
  {
    Var_10 = (MR_Integer) ((MR_Unsigned) Base_5 * (MR_Unsigned) N0_7);
    *N_8 = (MR_Integer) ((MR_Unsigned) Var_10 - (MR_Unsigned) M_9);
    succeeded = (*N_8 <= N0_7);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__accumulate_int_4_p_0(
  MR_Integer Base_5,
  MR_Char Char_6,
  MR_Integer N0_7,
  MR_Integer * N_8)
{
  MR_bool succeeded;
  MR_Integer M_9;
  MR_Integer Var_10;

  succeeded = mercury__char__unsafe_base_digit_to_int_3_p_0(Base_5, Char_6, &M_9);
  if (succeeded)
  {
    Var_10 = (MR_Integer) ((MR_Unsigned) Base_5 * (MR_Unsigned) N0_7);
    *N_8 = (MR_Integer) ((MR_Unsigned) Var_10 + (MR_Unsigned) M_9);
    succeeded = (N0_7 <= *N_8);
  }
  return succeeded;
}

void MR_CALL 
mercury__string__max_str_length_3_p_0(
  MR_String Str_4,
  MR_Integer PrevMaxLen_5,
  MR_Integer * MaxLen_6)
{
  MR_bool succeeded;
  MR_Integer Length_7;

  mercury__string__count_code_points_loop_4_p_0(Str_4, (MR_Integer) 0, (MR_Integer) 0, &Length_7);
  succeeded = (Length_7 > PrevMaxLen_5);
  if (succeeded)
    *MaxLen_6 = Length_7;
  else
    *MaxLen_6 = PrevMaxLen_5;
}

MR_String MR_CALL 
mercury__string__lpad_3_f_0(
  MR_Char Chr_5,
  MR_Integer N_6,
  MR_String Str_7)
{
  MR_String HeadVar__4_4;

  mercury__string__pad_left_4_p_0(Str_7, Chr_5, N_6, &HeadVar__4_4);
  return HeadVar__4_4;
}

MR_String MR_CALL 
mercury__string__rpad_3_f_0(
  MR_Char Chr_5,
  MR_Integer N_6,
  MR_String Str_7)
{
  MR_String HeadVar__4_4;

  mercury__string__pad_right_4_p_0(Str_7, Chr_5, N_6, &HeadVar__4_4);
  return HeadVar__4_4;
}

MR_String MR_CALL 
mercury__string__join_rev_columns_3_f_0(
  MR_String Separator_5,
  MR_String Col1_6,
  MR_String Col2_7)
{
  MR_String HeadVar__4_4;
  MR_String Var_8;

{
#define MR_PROC_LABEL mercury__string__join_rev_columns_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = Separator_5 ;
	S2 = Col1_6 ;
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

	S1 = Col2_7 ;
	S2 = Var_8 ;
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

MR_Word MR_CALL 
mercury__string__project_column_strings_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Word Strings_2;
  MR_Word Var_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));

  if (((MR_tag((MR_Word) Var_10)) == (MR_Integer) 0))
    Strings_2 = ((MR_Word) ((MR_hl_field(0, Var_10, (MR_Integer) 0))));
  else
    Strings_2 = ((MR_Word) ((MR_hl_field(1, Var_10, (MR_Integer) 0))));
  return Strings_2;
}

void MR_CALL 
mercury__string__copy_piece_into_buffer_5_p_0(
  MR_Word Piece_6,
  MR_Integer STATE_VARIABLE_DestOffset_0_12,
  MR_Integer * STATE_VARIABLE_DestOffset_13,
  MR_Box STATE_VARIABLE_DestBuffer_0_14,
  MR_Box * STATE_VARIABLE_DestBuffer_15)
{
  MR_String Src_9;
  MR_Integer SrcStart_10;
  MR_Integer SrcEnd_11;

  if (((MR_tag((MR_Word) Piece_6)) == (MR_Integer) 0))
  {
    Src_9 = ((MR_String) ((MR_hl_field(0, Piece_6, (MR_Integer) 0))));
    SrcStart_10 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__string__copy_piece_into_buffer_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Src_9 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	SrcEnd_11  = Length;
}
  }
  else
  {
    Src_9 = ((MR_String) ((MR_hl_field(1, Piece_6, (MR_Integer) 0))));
    SrcStart_10 = ((MR_Integer) ((MR_hl_field(1, Piece_6, (MR_Integer) 1))));
    SrcEnd_11 = ((MR_Integer) ((MR_hl_field(1, Piece_6, (MR_Integer) 2))));
  }
{
#define MR_PROC_LABEL mercury__string__copy_piece_into_buffer_5_p_0

	char * Dest0;
	char * Dest;
	MR_Integer DestOffset0;
	MR_Integer DestOffset;
	MR_String Src;
	MR_Integer SrcStart;
	MR_Integer SrcEnd;

	Dest0 = (char *)STATE_VARIABLE_DestBuffer_0_14 ;
	DestOffset0 = STATE_VARIABLE_DestOffset_0_12 ;
	Src = Src_9 ;
	SrcStart = SrcStart_10 ;
	SrcEnd = SrcEnd_11 ;
		{

    size_t count;

    MR_CHECK_EXPR_TYPE(Dest0, char *);
    MR_CHECK_EXPR_TYPE(Dest, char *);

    count = SrcEnd - SrcStart;
    Dest = Dest0;
    MR_memcpy(Dest + DestOffset0, Src + SrcStart, count);
    DestOffset = DestOffset0 + count;


		;}
#undef MR_PROC_LABEL
	*STATE_VARIABLE_DestBuffer_15  = (MR_Box) Dest;
	*STATE_VARIABLE_DestOffset_13  = DestOffset;
}
}

void MR_CALL 
mercury__string__copy_into_buffer_7_p_0(
  MR_Box Dest0_1,
  MR_Box * Dest_2,
  MR_Integer DestOffset0_3,
  MR_Integer * DestOffset_4,
  MR_String Src_5,
  MR_Integer SrcStart_6,
  MR_Integer SrcEnd_7)
{
{
#define MR_PROC_LABEL mercury__string__copy_into_buffer_7_p_0

	char * Dest0;
	char * Dest;
	MR_Integer DestOffset0;
	MR_Integer DestOffset;
	MR_String Src;
	MR_Integer SrcStart;
	MR_Integer SrcEnd;

	Dest0 = (char *)Dest0_1 ;
	DestOffset0 = DestOffset0_3 ;
	Src = Src_5 ;
	SrcStart = SrcStart_6 ;
	SrcEnd = SrcEnd_7 ;
		{

    size_t count;

    MR_CHECK_EXPR_TYPE(Dest0, char *);
    MR_CHECK_EXPR_TYPE(Dest, char *);

    count = SrcEnd - SrcStart;
    Dest = Dest0;
    MR_memcpy(Dest + DestOffset0, Src + SrcStart, count);
    DestOffset = DestOffset0 + count;


		;}
#undef MR_PROC_LABEL
	*Dest_2  = (MR_Box) Dest;
	*DestOffset_4  = DestOffset;
}
}

void MR_CALL 
mercury__string__buffer_to_string_2_p_0(
  MR_Box Buffer_1,
  MR_String * Str_2)
{
{
#define MR_PROC_LABEL mercury__string__buffer_to_string_2_p_0

	char * Buffer;
	MR_String Str;

	Buffer = (char *)Buffer_1 ;
		{

    Str = Buffer;


		;}
#undef MR_PROC_LABEL
	*Str_2  = Str;
}
}

void MR_CALL 
mercury__string__alloc_buffer_2_p_0(
  MR_Integer Size_1,
  MR_Box * Buffer_2)
{
{
#define MR_PROC_LABEL mercury__string__alloc_buffer_2_p_0

	MR_Integer Size;
	char * Buffer;

	Size = Size_1 ;
		{

    MR_allocate_aligned_string_msg(Buffer, Size, MR_ALLOC_ID);
    Buffer[Size] = '\0';


		;}
#undef MR_PROC_LABEL
	*Buffer_2  = (MR_Box) Buffer;
}
}

void MR_CALL 
mercury__string__join_list_loop_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String H_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word T_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word TailPieces_9;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Integer Var_13;

    mercury__string__join_list_loop_3_p_0(HeadVar__1_1, T_7, &TailPieces_9);
{
#define MR_PROC_LABEL mercury__string__join_list_loop_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = H_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_13  = Length;
}
    {
      Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_11, 0) = ((MR_Box) (H_6));
      MR_hl_field(1, Var_11, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, Var_11, 2) = ((MR_Box) (Var_13));
    }
    {
      Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_10, 0) = ((MR_Box) (Var_11));
      MR_hl_field(1, Var_10, 1) = ((MR_Box) (TailPieces_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadVar__1_1));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_10));
    }
  }
}

MR_Word MR_CALL 
mercury__string__make_string_piece_1_f_0(
  MR_String S_3)
{
  MR_Word HeadVar__2_2;
  MR_Integer Var_5;

{
#define MR_PROC_LABEL mercury__string__make_string_piece_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_5  = Length;
}
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (S_3));
    MR_hl_field(1, HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 0));
    MR_hl_field(1, HeadVar__2_2, 2) = ((MR_Box) (Var_5));
  }
  return HeadVar__2_2;
}

void MR_CALL 
mercury__string__append_iio_3_p_0(
  MR_String S1_1,
  MR_String S2_2,
  MR_String * S3_3)
{
{
#define MR_PROC_LABEL mercury__string__append_iio_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = S1_1 ;
	S2 = S2_2 ;
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

MR_bool MR_CALL 
mercury__string__unsafe_sub_string_search_start_loop_6_p_0(
  MR_String String_7,
  MR_String SubString_8,
  MR_Integer I_9,
  MR_Integer LastI_10,
  MR_Integer SubLen_11,
  MR_Integer * Index_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_9 <= LastI_10);
    MR_Word Var_13;
    MR_Integer Var_14;
    MR_Word Var_17;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_13 = (MR_Integer) 0;
      Var_14 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__string__unsafe_sub_string_search_start_loop_6_p_0

	MR_Word Res;
	MR_String X;
	MR_Integer StartX;
	MR_String Y;
	MR_Integer StartY;
	MR_Integer Length;

	X = String_7 ;
	StartX = I_9 ;
	Y = SubString_8 ;
	StartY = Var_14 ;
	Length = SubLen_11 ;
		{

    int res = memcmp(X + StartX, Y + StartY, Length);
    Res = ((res < 0) ? MR_COMPARE_LESS
        : (res == 0) ? MR_COMPARE_EQUAL
        : MR_COMPARE_GREATER);


		;}
#undef MR_PROC_LABEL
	Var_17  = Res;
}
      succeeded = (Var_13 == Var_17);
      if (succeeded)
      {
        *Index_12 = I_9;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) I_9 + (MR_Unsigned) 1);
        MR_Integer next_value_of_I_9 = Var_15;

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

void MR_CALL 
mercury__string__unsafe_compare_substrings_loop_6_p_0(
  MR_String X_7,
  MR_String Y_8,
  MR_Integer IX_9,
  MR_Integer IY_10,
  MR_Integer Rem_11,
  MR_Word * Res_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Rem_11 == (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *Res_12 = (MR_Integer) 0;
    else
    {
      MR_Integer CodeX_13;
      MR_Integer CodeY_14;
      MR_Word Res0_15;

{
#define MR_PROC_LABEL mercury__string__unsafe_compare_substrings_loop_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str = X_7 ;
	Index = IX_9 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	CodeX_13  = Code;
}
{
#define MR_PROC_LABEL mercury__string__unsafe_compare_substrings_loop_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str = Y_8 ;
	Index = IY_10 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	CodeY_14  = Code;
}
      succeeded = (CodeX_13 < CodeY_14);
      if (succeeded)
        Res0_15 = (MR_Integer) 1;
      else
      {
        succeeded = (CodeX_13 == CodeY_14);
        if (succeeded)
          Res0_15 = (MR_Integer) 0;
        else
          Res0_15 = (MR_Integer) 2;
      }
      switch (Res0_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *Res_12 = Res0_15;
          break;
        case (MR_Integer) 0:
          {
            MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) IX_9 + (MR_Unsigned) 1);
            MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) IY_10 + (MR_Unsigned) 1);
            MR_Integer Var_18 = (MR_Integer) ((MR_Unsigned) Rem_11 - (MR_Unsigned) 1);
            MR_Integer next_value_of_IX_9 = Var_16;
            MR_Integer next_value_of_IY_10 = Var_17;
            MR_Integer next_value_of_Rem_11 = Var_18;

            // direct tailcall eliminated
            ;
            IX_9 = next_value_of_IX_9;
            IY_10 = next_value_of_IY_10;
            Rem_11 = next_value_of_Rem_11;
            continue;
          }
          break;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__string__contains_char_loop_3_p_0(
  MR_String Str_4,
  MR_Char Char_5,
  MR_Integer I_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer J_7;
    MR_Char IndexChar_8;
    MR_Word MaybeReplaced_9;
    MR_Integer ReplacedCodeUnit_10;

    // setup for model_semi tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__contains_char_loop_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_4 ;
	Index = I_6 ;
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
	J_7  = NextIndex;
	IndexChar_8  = Ch;
	ReplacedCodeUnit_10  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_10 == (MR_Integer) -1);
      if (succeeded)
        MaybeReplaced_9 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_11;

{
#define MR_PROC_LABEL mercury__string__contains_char_loop_3_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_10 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_11  = U8;
}
        {
          MaybeReplaced_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeReplaced_9, 0) = ((MR_Box) (MR_Word) (CodeUnit_11));
        }
      }
      succeeded = (MaybeReplaced_9 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
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
  MR_Integer HeadVar__2_2;
  MR_Integer Var_4;
  MR_Integer Var_5 = ((MR_Integer) 1 << 30);

  Var_4 = (MR_Integer) ((MR_Unsigned) Var_5 - (MR_Unsigned) 1);
  HeadVar__2_2 = (N_3 & Var_4);
  return HeadVar__2_2;
}

void MR_CALL 
mercury__string__unsafe_set_char_copy_string_5_p_0(
  MR_Char Ch_1,
  MR_Integer Index_2,
  MR_Integer Len0_3,
  MR_String Str0_4,
  MR_String * Str_5)
{
{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_copy_string_5_p_0

	MR_Char Ch;
	MR_Integer Index;
	MR_Integer Len0;
	MR_String Str0;
	MR_String Str;

	Ch = Ch_1 ;
	Index = Index_2 ;
	Len0 = Len0_3 ;
	Str0 = Str0_4 ;
		{

    int b;
    size_t oldlen;
    size_t oldwidth;
    size_t newwidth;
    size_t newlen;

    // The cast to (unsigned char *) is to prevent sign extension.
    b = ((const unsigned char *) Str0)[Index];
    if (MR_utf8_is_lead_byte(b)) {
        MR_Integer next_index = Index;
        int oldc = MR_utf8_get_next_mb(Str0, &next_index);
        if (oldc < 0) {
            oldwidth = 1;
        } else {
            oldwidth = next_index - Index;
        }
    } else {
        oldwidth = 1;
    }

    if (MR_is_ascii(Ch)) {
        // Fast path.
        newwidth = 1;
    } else {
        newwidth = MR_utf8_width(Ch);
    }

    oldlen = Len0;
    newlen = oldlen - oldwidth + newwidth;

    MR_allocate_aligned_string_msg(Str, newlen, MR_ALLOC_ID);
    MR_memcpy(Str, Str0, Index);
    if (MR_is_ascii(Ch)) {
        // Fast path.
        Str[Index] = Ch;
    } else {
        MR_utf8_encode(Str + Index, Ch);
    }
    MR_memcpy(Str + Index + newwidth,
        Str0 + Index + oldwidth,
        oldlen - Index - oldwidth + 1);


		;}
#undef MR_PROC_LABEL
	*Str_5  = Str;
}
}

MR_bool MR_CALL 
mercury__string__index_check_2_p_0(
  MR_Integer Index_1,
  MR_Integer Length_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__index_check_2_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = Index_1 ;
	Length = Length_2 ;
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
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__unsafe_prev_index_repl_2_5_p_0(
  MR_String Str_1,
  MR_Integer Index_2,
  MR_Integer * PrevIndex_3,
  MR_Char * Ch_4,
  MR_Integer * ReplacedCodeUnit_5)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__unsafe_prev_index_repl_2_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_1 ;
	Index = Index_2 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*PrevIndex_3  = PrevIndex;
	*Ch_4  = Ch;
	*ReplacedCodeUnit_5  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__unsafe_index_next_repl_2_5_p_0(
  MR_String Str_1,
  MR_Integer Index_2,
  MR_Integer * NextIndex_3,
  MR_Char * Ch_4,
  MR_Integer * ReplacedCodeUnit_5)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__unsafe_index_next_repl_2_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_1 ;
	Index = Index_2 ;
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
	*NextIndex_3  = NextIndex;
	*Ch_4  = Ch;
	*ReplacedCodeUnit_5  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__utf8_is_trail_byte_1_p_0(
  MR_Integer C_2)
{
  MR_bool succeeded;
  MR_Integer Var_3 = (C_2 & (MR_Integer) 192);

  succeeded = (Var_3 == (MR_Integer) 128);
  return succeeded;
}

void MR_CALL 
mercury__string__encode_utf8_3_p_0(
  MR_Char Char_4,
  MR_Word CodeList0_5,
  MR_Word * CodeList_6)
{
  MR_bool succeeded;
  MR_Word CharCodes_7;

  succeeded = mercury__char__to_utf8_2_p_0(Char_4, &CharCodes_7);
  if (succeeded)
    mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CharCodes_7, CodeList0_5, CodeList_6);
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.encode_utf8\'/3", (MR_String) "surrogate code point");
      return;
    }
}

MR_bool MR_CALL 
mercury__string__internal_encoding_is_utf8_0_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__internal_encoding_is_utf8_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
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
  MR_String S2_6;

  mercury__string__format__format_impl_3_p_0(S1_4, PT_5, &S2_6);
  return S2_6;
}

void MR_CALL 
mercury__string__string_ops_noncanon_4_p_3(
  MR_Word TypeInfo_for_T_9,
  MR_Word NonCanon_5,
  MR_Box X_7,
  MR_String * String_8)
{
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Var_14;

  conv1_Var_14 = func_0(((MR_Box) ((MR_Word) (&mercury__string_scalar_common_1[1]))), ((MR_Box) ((MR_Integer) 0)));
  Var_14 = ((MR_Word) (conv1_Var_14));
  mercury__string__to_string__value_to_revstrings_prio_6_p_3(TypeInfo_for_T_9, NonCanon_5, Var_14, X_7, (MR_Word) ((MR_Unsigned) 0U), &Var_11);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_11, &Var_12);
  *String_8 = mercury__string__append_list_1_f_0(Var_12);
}

void MR_CALL 
mercury__string__string_ops_noncanon_4_p_2(
  MR_Word TypeInfo_for_T_9,
  MR_Word NonCanon_5,
  MR_Box X_7,
  MR_String * String_8)
{
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Var_14;

  conv1_Var_14 = func_0(((MR_Box) ((MR_Word) (&mercury__string_scalar_common_1[1]))), ((MR_Box) ((MR_Integer) 0)));
  Var_14 = ((MR_Word) (conv1_Var_14));
  mercury__string__to_string__value_to_revstrings_prio_6_p_2(TypeInfo_for_T_9, NonCanon_5, Var_14, X_7, (MR_Word) ((MR_Unsigned) 0U), &Var_11);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_11, &Var_12);
  *String_8 = mercury__string__append_list_1_f_0(Var_12);
}

void MR_CALL 
mercury__string__string_ops_noncanon_4_p_1(
  MR_Word TypeInfo_for_T_9,
  MR_Word NonCanon_5,
  MR_Box X_7,
  MR_String * String_8)
{
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Var_14;

  conv1_Var_14 = func_0(((MR_Box) ((MR_Word) (&mercury__string_scalar_common_1[1]))), ((MR_Box) ((MR_Integer) 0)));
  Var_14 = ((MR_Word) (conv1_Var_14));
  mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_T_9, NonCanon_5, Var_14, X_7, (MR_Word) ((MR_Unsigned) 0U), &Var_11);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_11, &Var_12);
  *String_8 = mercury__string__append_list_1_f_0(Var_12);
}

void MR_CALL 
mercury__string__string_ops_noncanon_4_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word NonCanon_5,
  MR_Box X_7,
  MR_String * String_8)
{
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_14;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Var_14;

  conv1_Var_14 = func_0(((MR_Box) ((MR_Word) (&mercury__string_scalar_common_1[1]))), ((MR_Box) ((MR_Integer) 0)));
  Var_14 = ((MR_Word) (conv1_Var_14));
  mercury__string__to_string__value_to_revstrings_prio_6_p_0(TypeInfo_for_T_9, NonCanon_5, Var_14, X_7, (MR_Word) ((MR_Unsigned) 0U), &Var_11);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_11, &Var_12);
  *String_8 = mercury__string__append_list_1_f_0(Var_12);
}

MR_String MR_CALL 
mercury__string__string_ops_2_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box X_5)
{
  MR_String HeadVar__3_3;
  MR_Word Var_9;
  MR_Word Var_10;
  MR_Word Var_12;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 12))));
  MR_Box conv1_Var_12;

  conv1_Var_12 = func_0(((MR_Box) ((MR_Word) (&mercury__string_scalar_common_1[1]))), ((MR_Box) ((MR_Integer) 0)));
  Var_12 = ((MR_Word) (conv1_Var_12));
  mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_T_6, (MR_Integer) 1, Var_12, X_5, (MR_Word) ((MR_Unsigned) 0U), &Var_9);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_9, &Var_10);
  HeadVar__3_3 = mercury__string__append_list_1_f_0(Var_10);
  return HeadVar__3_3;
}

MR_String MR_CALL 
mercury__string__string_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Box X_3)
{
  MR_String HeadVar__2_2;
  MR_Word Var_8;
  MR_Word Var_9;
  MR_Word Var_11;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box);
  MR_Box conv1_Var_11;

  func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&mercury__string_scalar_common_1[1]), (MR_Integer) 0)), (MR_Integer) 12))));
  conv1_Var_11 = func_0(((MR_Box) ((MR_Word) (&mercury__string_scalar_common_1[1]))), ((MR_Box) ((MR_Integer) 0)));
  Var_11 = ((MR_Word) (conv1_Var_11));
  mercury__string__to_string__value_to_revstrings_prio_6_p_1(TypeInfo_for_T_4, (MR_Integer) 1, Var_11, X_3, (MR_Word) ((MR_Unsigned) 0U), &Var_8);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_8, &Var_9);
  HeadVar__2_2 = mercury__string__append_list_1_f_0(Var_9);
  return HeadVar__2_2;
}

MR_String MR_CALL 
mercury__string__from_c_pointer_1_f_0(
  MR_Word P_3)
{
  MR_String S_4;
  MR_Integer Int_5 = (MR_Integer) (P_3);
  MR_String Var_7;
  MR_String Var_8;

  mercury__string__int_to_base_string_3_p_0(Int_5, (MR_Integer) 16, &Var_8);
{
#define MR_PROC_LABEL mercury__string__from_c_pointer_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = Var_8 ;
	S2 = (MR_String) ")" ;
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
#define MR_PROC_LABEL mercury__string__from_c_pointer_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = (MR_String) "c_pointer(0x" ;
	S2 = Var_7 ;
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

void MR_CALL 
mercury__string__c_pointer_to_string_2_p_0(
  MR_Word C_Pointer_3,
  MR_String * Str_4)
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

	S1 = Var_8 ;
	S2 = (MR_String) ")" ;
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

	S1 = (MR_String) "c_pointer(0x" ;
	S2 = Var_7 ;
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

MR_String MR_CALL 
mercury__string__c_pointer_to_string_1_f_0(
  MR_Word P_3)
{
  MR_String S_4;
  MR_Integer Int_5 = (MR_Integer) (P_3);
  MR_String Var_7;
  MR_String Var_8;

  mercury__string__int_to_base_string_3_p_0(Int_5, (MR_Integer) 16, &Var_8);
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = Var_8 ;
	S2 = (MR_String) ")" ;
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
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = (MR_String) "c_pointer(0x" ;
	S2 = Var_7 ;
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

MR_String MR_CALL 
mercury__string__from_float_1_f_0(
  MR_Float Float_3)
{
  MR_String HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__string__from_float_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt = Float_3 ;
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

void MR_CALL 
mercury__string__float_to_string_2_p_0(
  MR_Float Flt_1,
  MR_String * Str_2)
{
{
#define MR_PROC_LABEL mercury__string__float_to_string_2_p_0

	MR_Float Flt;
	MR_String Str;

	Flt = Flt_1 ;
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

MR_String MR_CALL 
mercury__string__float_to_string_1_f_0(
  MR_Float Float_3)
{
  MR_String S2_4;

{
#define MR_PROC_LABEL mercury__string__float_to_string_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt = Float_3 ;
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

MR_String MR_CALL 
mercury__string__uint64_to_octal_string_1_f_0(
  uint64_t U64_1)
{
  MR_String Str_2;

{
#define MR_PROC_LABEL mercury__string__uint64_to_octal_string_1_f_0

	uint64_t U64;
	MR_String Str;

	U64 = U64_1 ;
		{

    char buffer[23]; // 22 for digits, 1 for nul.
    sprintf(buffer, "%" PRIo64, U64);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	Str_2  = Str;
}
  return Str_2;
}

MR_String MR_CALL 
mercury__string__uint64_to_uc_hex_string_1_f_0(
  uint64_t U64_1)
{
  MR_String S_2;

{
#define MR_PROC_LABEL mercury__string__uint64_to_uc_hex_string_1_f_0

	uint64_t U64;
	MR_String S;

	U64 = U64_1 ;
		{

    char buffer[17]; // 16 for digits, 1 for nul.
    sprintf(buffer, "%" PRIX64, U64);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	S_2  = S;
}
  return S_2;
}

MR_String MR_CALL 
mercury__string__uint64_to_lc_hex_string_1_f_0(
  uint64_t U64_1)
{
  MR_String S_2;

{
#define MR_PROC_LABEL mercury__string__uint64_to_lc_hex_string_1_f_0

	uint64_t U64;
	MR_String S;

	U64 = U64_1 ;
		{

    char buffer[17]; // 16 for digits, 1 for nul.
    sprintf(buffer, "%" PRIx64, U64);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	S_2  = S;
}
  return S_2;
}

MR_String MR_CALL 
mercury__string__uint64_to_hex_string_1_f_0(
  uint64_t UInt_3)
{
  MR_String HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__string__uint64_to_hex_string_1_f_0

	uint64_t U64;
	MR_String S;

	U64 = UInt_3 ;
		{

    char buffer[17]; // 16 for digits, 1 for nul.
    sprintf(buffer, "%" PRIx64, U64);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = S;
}
  return HeadVar__2_2;
}

MR_String MR_CALL 
mercury__string__uint64_to_string_1_f_0(
  uint64_t U64_1)
{
  MR_String S_2;

{
#define MR_PROC_LABEL mercury__string__uint64_to_string_1_f_0

	uint64_t U64;
	MR_String S;

	U64 = U64_1 ;
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

MR_String MR_CALL 
mercury__string__int64_to_string_1_f_0(
  int64_t I64_1)
{
  MR_String S_2;

{
#define MR_PROC_LABEL mercury__string__int64_to_string_1_f_0

	int64_t I64;
	MR_String S;

	I64 = I64_1 ;
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

MR_String MR_CALL 
mercury__string__uint32_to_string_1_f_0(
  uint32_t U32_1)
{
  MR_String S_2;

{
#define MR_PROC_LABEL mercury__string__uint32_to_string_1_f_0

	uint32_t U32;
	MR_String S;

	U32 = U32_1 ;
		{

    int num_digits;
    if (U32 < 10) {
        num_digits = 1;
    } else if (U32 < 100) {
        num_digits = 2;
    } else if (U32 < 1000) {
        num_digits = 3;
    } else if (U32 < 10000) {
        num_digits = 4;
    } else if (U32 < 100000) {
        num_digits = 5;
    } else if (U32 < 1000000) {
        num_digits = 6;
    } else if (U32 < 10000000) {
        num_digits = 7;
    } else if (U32 < 100000000) {
        num_digits = 8;
    } else if (U32 < 1000000000) {
        num_digits = 9;
    } else {
        num_digits = 10;
    }

    MR_allocate_aligned_string_msg(S, num_digits, MR_ALLOC_ID);
    S[num_digits] = '\0';
    int i = num_digits - 1;
    do {
        S[i] = "0123456789"[U32 % 10];
        i--;
        U32 /= 10;
    } while(U32 > 0);


		;}
#undef MR_PROC_LABEL
	S_2  = S;
}
  return S_2;
}

MR_String MR_CALL 
mercury__string__int32_to_string_1_f_0(
  int32_t I32_1)
{
  MR_String S_2;

{
#define MR_PROC_LABEL mercury__string__int32_to_string_1_f_0

	int32_t I32;
	MR_String S;

	I32 = I32_1 ;
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

MR_String MR_CALL 
mercury__string__uint16_to_string_1_f_0(
  uint16_t U16_1)
{
  MR_String S_2;

{
#define MR_PROC_LABEL mercury__string__uint16_to_string_1_f_0

	uint16_t U16;
	MR_String S;

	U16 = U16_1 ;
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

MR_String MR_CALL 
mercury__string__int16_to_string_1_f_0(
  int16_t I16_1)
{
  MR_String S_2;

{
#define MR_PROC_LABEL mercury__string__int16_to_string_1_f_0

	int16_t I16;
	MR_String S;

	I16 = I16_1 ;
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

MR_String MR_CALL 
mercury__string__uint8_to_string_1_f_0(
  uint8_t U8_1)
{
  MR_String S_2;

{
#define MR_PROC_LABEL mercury__string__uint8_to_string_1_f_0

	uint8_t U8;
	MR_String S;

	U8 = U8_1 ;
		{

    // Use a larger buffer than necessary (3 bytes for digits, 1 for nul)
    // to avoid spurious warning from gcc -Werror=format-overflow.
    char buffer[24];
    sprintf(buffer, "%" PRIu8, U8);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	S_2  = S;
}
  return S_2;
}

MR_String MR_CALL 
mercury__string__int8_to_string_1_f_0(
  int8_t I8_1)
{
  MR_String S_2;

{
#define MR_PROC_LABEL mercury__string__int8_to_string_1_f_0

	int8_t I8;
	MR_String S;

	I8 = I8_1 ;
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

MR_String MR_CALL 
mercury__string__uint_to_octal_string_1_f_0(
  MR_Unsigned U_1)
{
  MR_String Str_2;

{
#define MR_PROC_LABEL mercury__string__uint_to_octal_string_1_f_0

	MR_Unsigned U;
	MR_String Str;

	U = U_1 ;
		{

    char buffer[23]; // 22 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "o", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	Str_2  = Str;
}
  return Str_2;
}

MR_String MR_CALL 
mercury__string__uint_to_uc_hex_string_1_f_0(
  MR_Unsigned U_1)
{
  MR_String Str_2;

{
#define MR_PROC_LABEL mercury__string__uint_to_uc_hex_string_1_f_0

	MR_Unsigned U;
	MR_String Str;

	U = U_1 ;
		{

    char buffer[17]; // 16 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "X", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	Str_2  = Str;
}
  return Str_2;
}

MR_String MR_CALL 
mercury__string__uint_to_lc_hex_string_1_f_0(
  MR_Unsigned U_1)
{
  MR_String Str_2;

{
#define MR_PROC_LABEL mercury__string__uint_to_lc_hex_string_1_f_0

	MR_Unsigned U;
	MR_String Str;

	U = U_1 ;
		{

    char buffer[17]; // 16 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "x", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	Str_2  = Str;
}
  return Str_2;
}

MR_String MR_CALL 
mercury__string__uint_to_hex_string_1_f_0(
  MR_Unsigned UInt_3)
{
  MR_String HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__string__uint_to_hex_string_1_f_0

	MR_Unsigned U;
	MR_String Str;

	U = UInt_3 ;
		{

    char buffer[17]; // 16 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "x", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = Str;
}
  return HeadVar__2_2;
}

MR_String MR_CALL 
mercury__string__uint_to_string_1_f_0(
  MR_Unsigned U_1)
{
  MR_String Str_2;

{
#define MR_PROC_LABEL mercury__string__uint_to_string_1_f_0

	MR_Unsigned U;
	MR_String Str;

	U = U_1 ;
		{

    char buffer[21]; // 20 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "u", U);
    MR_allocate_aligned_string_msg(Str, strlen(buffer), MR_ALLOC_ID);
    strcpy(Str, buffer);


		;}
#undef MR_PROC_LABEL
	Str_2  = Str;
}
  return Str_2;
}

MR_String MR_CALL 
mercury__string__int_to_string_thousands_1_f_0(
  MR_Integer N_3)
{
  MR_String HeadVar__2_2;

  HeadVar__2_2 = mercury__string__int_to_base_string_group_4_f_0(N_3, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
  return HeadVar__2_2;
}

MR_String MR_CALL 
mercury__string__int_to_base_string_group_4_f_0(
  MR_Integer N_6,
  MR_Integer Base_7,
  MR_Integer GroupLength_8,
  MR_String Sep_9)
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
    mercury__require__unexpected_2_p_0((MR_String) "function \140string.int_to_base_string_group\'/4", (MR_String) "invalid base");
  mercury__string__int_to_base_string_group_1_5_p_0(N_6, Base_7, GroupLength_8, Sep_9, &Str_10);
  return Str_10;
}

void MR_CALL 
mercury__string__int_to_base_string_group_1_5_p_0(
  MR_Integer N_6,
  MR_Integer Base_7,
  MR_Integer GroupLength_8,
  MR_String Sep_9,
  MR_String * Str_10)
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

	S1 = (MR_String) "-" ;
	S2 = Str1_11 ;
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
    MR_Integer N1_12 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) N_6);

    mercury__string__int_to_base_string_group_2_6_p_0(N1_12, Base_7, (MR_Integer) 0, GroupLength_8, Sep_9, Str_10);
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

	S1 = Str1_13 ;
	S2 = Sep_11 ;
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
    MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Base_8);

    succeeded = (NegN_7 > Var_21);
    if (succeeded)
    {
      MR_Integer N_14 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) NegN_7);
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
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (Base_8 == (MR_Integer) 0);
      if (succeeded)
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int.\'//\': division by zero")))));
          return;
        }
      else
        NegN1_16 = (NegN_7 / Base_8);
      Var_22 = (MR_Integer) ((MR_Unsigned) NegN1_16 * (MR_Unsigned) Base_8);
      N10_17 = (MR_Integer) ((MR_Unsigned) Var_22 - (MR_Unsigned) NegN_7);
      DigitChar_26 = mercury__char__det_base_int_to_digit_2_f_0(Base_8, N10_17);
      mercury__string__char_to_string_2_p_0(DigitChar_26, &DigitString_18);
      Var_23 = (MR_Integer) ((MR_Unsigned) Curr_9 + (MR_Unsigned) 1);
      mercury__string__int_to_base_string_group_2_6_p_0(NegN1_16, Base_8, Var_23, GroupLength_10, Sep_11, &Str1_25);
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = Str1_25 ;
	S2 = DigitString_18 ;
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

MR_String MR_CALL 
mercury__string__int_to_base_string_2_f_0(
  MR_Integer N1_4,
  MR_Integer N2_5)
{
  MR_String S2_6;

  mercury__string__int_to_base_string_3_p_0(N1_4, N2_5, &S2_6);
  return S2_6;
}

void MR_CALL 
mercury__string__int_to_base_string_3_p_0(
  MR_Integer N_4,
  MR_Integer Base_5,
  MR_String * Str_6)
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
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.int_to_base_string\'/3", (MR_String) "invalid base");
      return;
    }
  mercury__string__int_to_base_string_1_3_p_0(N_4, Base_5, Str_6);
}

void MR_CALL 
mercury__string__int_to_base_string_1_3_p_0(
  MR_Integer N_4,
  MR_Integer Base_5,
  MR_String * Str_6)
{
  MR_bool succeeded = (N_4 < (MR_Integer) 0);
  MR_Word RevChars_7;
  MR_String Str0_15;

  if (succeeded)
    mercury__string__int_to_base_string_2_4_p_0(N_4, Base_5, (MR_Word) (MR_mkword(1, &mercury__string_scalar_common_1[2])), &RevChars_7);
  else
  {
    MR_Integer NegN_8 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) N_4);

    mercury__string__int_to_base_string_2_4_p_0(NegN_8, Base_5, (MR_Word) ((MR_Unsigned) 0U), &RevChars_7);
  }
  succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(RevChars_7, &Str0_15);
  if (succeeded)
    *Str_6 = Str0_15;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_rev_char_list\'/2", (MR_String) "null character or surrogate code point in list");
      return;
    }
}

void MR_CALL 
mercury__string__int_to_base_string_2_4_p_0(
  MR_Integer NegN_5,
  MR_Integer Base_6,
  MR_Word STATE_VARIABLE_RevChars_0_12,
  MR_Word * STATE_VARIABLE_RevChars_13)
{
  MR_bool succeeded;
  MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Base_6);

  succeeded = (NegN_5 > Var_14);
  if (succeeded)
  {
    MR_Integer N_8 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) NegN_5);
    MR_Char DigitChar_9;

    DigitChar_9 = mercury__char__det_base_int_to_digit_2_f_0(Base_6, N_8);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_RevChars_13 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (DigitChar_9));
      MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_12));
    }
  }
  else
  {
    MR_Integer NegN1_10;
    MR_Integer N10_11;
    MR_Integer Var_16;
    MR_Char DigitChar_19;
    MR_Word * AddrSTATE_VARIABLE_RevChars_17_23;

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
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = (Base_6 == (MR_Integer) 0);
    if (succeeded)
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int.\'//\': division by zero")))));
        return;
      }
    else
      NegN1_10 = (NegN_5 / Base_6);
    Var_16 = (MR_Integer) ((MR_Unsigned) NegN1_10 * (MR_Unsigned) Base_6);
    N10_11 = (MR_Integer) ((MR_Unsigned) Var_16 - (MR_Unsigned) NegN_5);
    DigitChar_19 = mercury__char__det_base_int_to_digit_2_f_0(Base_6, N10_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_RevChars_13 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (DigitChar_19));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrSTATE_VARIABLE_RevChars_17_23 = (MR_Word *) (&(MR_hl_field(1, *STATE_VARIABLE_RevChars_13, (MR_Integer) 1)));
    mercury__string__LCMC__pred__int_to_base_string_2__1_4_p_0(NegN1_10, Base_6, STATE_VARIABLE_RevChars_0_12, AddrSTATE_VARIABLE_RevChars_17_23);
  }
}

void MR_CALL 
mercury__string__LCMC__pred__int_to_base_string_2__1_4_p_0(
  MR_Integer NegN_5,
  MR_Integer Base_6,
  MR_Word STATE_VARIABLE_RevChars_0_12,
  MR_Word * AddrOfSTATE_VARIABLE_RevChars_24)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) Base_6);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (NegN_5 > Var_14);
    if (succeeded)
    {
      MR_Integer N_8 = (MR_Integer) ((MR_Unsigned) 0 - (MR_Unsigned) NegN_5);
      MR_Char DigitChar_9;
      MR_Word STATE_VARIABLE_RevChars_13;

      DigitChar_9 = mercury__char__det_base_int_to_digit_2_f_0(Base_6, N_8);
      {
        STATE_VARIABLE_RevChars_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevChars_13, 0) = ((MR_Box) (MR_Word) (DigitChar_9));
        MR_hl_field(1, STATE_VARIABLE_RevChars_13, 1) = ((MR_Box) (STATE_VARIABLE_RevChars_0_12));
      }
      *AddrOfSTATE_VARIABLE_RevChars_24 = STATE_VARIABLE_RevChars_13;
    }
    else
    {
      MR_Integer NegN1_10;
      MR_Integer N10_11;
      MR_Integer Var_16;
      MR_Char DigitChar_19;
      MR_Word * AddrSTATE_VARIABLE_RevChars_17_23;
      MR_Word STATE_VARIABLE_RevChars_25;
      MR_Integer next_value_of_NegN_5;
      MR_Word * next_value_of_AddrOfSTATE_VARIABLE_RevChars_24;

{
#define MR_PROC_LABEL mercury__string__LCMC__pred__int_to_base_string_2__1_4_p_0

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
        succeeded = (Base_6 == (MR_Integer) 0);
      if (succeeded)
        {
          mercury__exception__throw_1_p_0((MR_Word) (&mercury__exception__exception__type_ctor_info_domain_error_0), ((MR_Box) (((MR_Box) ((MR_String) "int.\'//\': division by zero")))));
          return;
        }
      else
        NegN1_10 = (NegN_5 / Base_6);
      Var_16 = (MR_Integer) ((MR_Unsigned) NegN1_10 * (MR_Unsigned) Base_6);
      N10_11 = (MR_Integer) ((MR_Unsigned) Var_16 - (MR_Unsigned) NegN_5);
      DigitChar_19 = mercury__char__det_base_int_to_digit_2_f_0(Base_6, N10_11);
      {
        STATE_VARIABLE_RevChars_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevChars_25, 0) = ((MR_Box) (MR_Word) (DigitChar_19));
        MR_hl_field(1, STATE_VARIABLE_RevChars_25, 1) = NULL;
      }
      AddrSTATE_VARIABLE_RevChars_17_23 = (MR_Word *) (&(MR_hl_field(1, STATE_VARIABLE_RevChars_25, (MR_Integer) 1)));
      *AddrOfSTATE_VARIABLE_RevChars_24 = STATE_VARIABLE_RevChars_25;
      // direct tailcall eliminated
      ;
      next_value_of_NegN_5 = NegN1_10;
      next_value_of_AddrOfSTATE_VARIABLE_RevChars_24 = AddrSTATE_VARIABLE_RevChars_17_23;
      NegN_5 = next_value_of_NegN_5;
      AddrOfSTATE_VARIABLE_RevChars_24 = next_value_of_AddrOfSTATE_VARIABLE_RevChars_24;
      continue;
    }
    break;
  }
}

MR_String MR_CALL 
mercury__string__from_int_1_f_0(
  MR_Integer N_3)
{
  MR_String HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__string__from_int_1_f_0

	MR_Integer I;
	MR_String S;

	I = N_3 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = S;
}
  return HeadVar__2_2;
}

void MR_CALL 
mercury__string__int_to_string_2_p_0(
  MR_Integer N_3,
  MR_String * Str_4)
{
{
#define MR_PROC_LABEL mercury__string__int_to_string_2_p_0

	MR_Integer I;
	MR_String S;

	I = N_3 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	*Str_4  = S;
}
}

MR_String MR_CALL 
mercury__string__int_to_string_1_f_0(
  MR_Integer I_1)
{
  MR_String S_2;

{
#define MR_PROC_LABEL mercury__string__int_to_string_1_f_0

	MR_Integer I;
	MR_String S;

	I = I_1 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	S_2  = S;
}
  return S_2;
}

MR_String MR_CALL 
mercury__string__from_char_1_f_0(
  MR_Char Char_3)
{
  MR_String HeadVar__2_2;

  mercury__string__char_to_string_2_p_0(Char_3, &HeadVar__2_2);
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__string__char_to_string_2_p_1(
  MR_Char * Char_1,
  MR_String String_2)
{
  MR_bool succeeded;
  MR_Integer NextIndex_9;
  MR_Word Var_12;
  MR_Integer Var_13;
  MR_Integer Len_14;
  MR_Integer ReplacedCodeUnit_15;

{
#define MR_PROC_LABEL mercury__string__char_to_string_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str = String_2 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_14  = Length;
}
{
#define MR_PROC_LABEL mercury__string__char_to_string_2_p_1

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = (MR_Integer) 0 ;
	Length = Len_14 ;
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
#define MR_PROC_LABEL mercury__string__char_to_string_2_p_1

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_2 ;
	Index = (MR_Integer) 0 ;
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
	NextIndex_9  = NextIndex;
	*Char_1  = Ch;
	ReplacedCodeUnit_15  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_15 == (MR_Integer) -1);
      if (succeeded)
        Var_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_16;

{
#define MR_PROC_LABEL mercury__string__char_to_string_2_p_1

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_15 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_16  = U8;
}
        {
          Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_Word) (CodeUnit_16));
        }
      }
      succeeded = mercury__string____Unify____maybe_replaced_0_0((MR_Word) ((MR_Unsigned) 0U), Var_12);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__string__char_to_string_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str = String_2 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_13  = Length;
}
        succeeded = (NextIndex_9 == Var_13);
      }
    }
  }
  return succeeded;
}

MR_String MR_CALL 
mercury__string__char_to_string_1_f_0(
  MR_Char C_3)
{
  MR_String S1_4;

  mercury__string__char_to_string_2_p_0(C_3, &S1_4);
  return S1_4;
}

MR_Float MR_CALL 
mercury__string__det_to_float_1_f_0(
  MR_String FloatString_3)
{
  MR_bool succeeded;
  MR_Float Float_4;
  MR_Float FloatPrime_5;

{
#define MR_PROC_LABEL mercury__string__det_to_float_1_f_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString = FloatString_3 ;
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
    mercury__require__unexpected_2_p_0((MR_String) "function \140string.det_to_float\'/1", (MR_String) "conversion failed.");
  return Float_4;
}

MR_bool MR_CALL 
mercury__string__to_float_2_p_0(
  MR_String FloatString_1,
  MR_Float * FloatVal_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__to_float_2_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString = FloatString_1 ;
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

MR_bool MR_CALL 
mercury__string__base_string_to_uint_3_p_0(
  MR_Integer Base_4,
  MR_String String_5,
  MR_Unsigned * UInt_6)
{
  MR_bool succeeded;
  MR_Integer End_7;
  MR_Word Var_8;
  MR_Box conv0_UInt_6;

{
#define MR_PROC_LABEL mercury__string__base_string_to_uint_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	End_7  = Length;
}
  Var_8 = mercury__string__base_uint_accumulator_1_f_0(Base_4);
  succeeded = mercury__string__foldl_between_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Var_8, String_5, (MR_Integer) 0, End_7, ((MR_Box) ((MR_Unsigned) 0U)), &conv0_UInt_6);
  if (succeeded)
  {
    *UInt_6 = ((MR_Unsigned) (conv0_UInt_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Unsigned MR_CALL 
mercury__string__det_to_uint_1_f_0(
  MR_String S_3)
{
  MR_Unsigned HeadVar__2_2;

  HeadVar__2_2 = mercury__string__det_base_string_to_uint_2_f_0((MR_Integer) 10, S_3);
  return HeadVar__2_2;
}

MR_Unsigned MR_CALL 
mercury__string__det_base_string_to_uint_2_f_0(
  MR_Integer Base_4,
  MR_String S_5)
{
  MR_bool succeeded;
  MR_Unsigned N_6;
  MR_Unsigned N0_7;
  MR_Integer End_10;
  MR_Word Var_11;
  MR_Box conv0_N0_7;

{
#define MR_PROC_LABEL mercury__string__det_base_string_to_uint_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	End_10  = Length;
}
  Var_11 = mercury__string__base_uint_accumulator_1_f_0(Base_4);
  succeeded = mercury__string__foldl_between_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Var_11, S_5, (MR_Integer) 0, End_10, ((MR_Box) ((MR_Unsigned) 0U)), &conv0_N0_7);
  if (succeeded)
  {
    N0_7 = ((MR_Unsigned) (conv0_N0_7));
    succeeded = MR_TRUE;
  }
  if (succeeded)
    N_6 = N0_7;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140string.det_base_string_to_uint\'/2", (MR_String) "conversion failed");
  return N_6;
}

MR_bool MR_CALL 
mercury__string__to_uint_2_p_0(
  MR_String String_3,
  MR_Unsigned * UInt_4)
{
  MR_bool succeeded;
  MR_Integer End_6;
  MR_Word Var_7;
  MR_Box conv0_UInt_4;

{
#define MR_PROC_LABEL mercury__string__to_uint_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	End_6  = Length;
}
  Var_7 = mercury__string__base_uint_accumulator_1_f_0((MR_Integer) 10);
  succeeded = mercury__string__foldl_between_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint_0), Var_7, String_3, (MR_Integer) 0, End_6, ((MR_Box) ((MR_Unsigned) 0U)), &conv0_UInt_4);
  if (succeeded)
  {
    *UInt_4 = ((MR_Unsigned) (conv0_UInt_4));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__string__base_uint_accumulator_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Unsigned conv4_N_10;

  succeeded = mercury__string__accumulate_uint_5_p_0(((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Unsigned) (wrapper_arg_2)), &conv4_N_10);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv4_N_10));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__string__base_uint_accumulator_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Unsigned conv3_N_10;

  succeeded = mercury__string__accumulate_uint_5_p_0(((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Unsigned) (wrapper_arg_2)), &conv3_N_10);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv3_N_10));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__string__base_uint_accumulator_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Unsigned conv2_N_10;

  succeeded = mercury__string__accumulate_uint_5_p_0(((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Unsigned) (wrapper_arg_2)), &conv2_N_10);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv2_N_10));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__string__base_uint_accumulator_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Unsigned conv1_N_10;

  succeeded = mercury__string__accumulate_uint_5_p_0(((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Unsigned) (wrapper_arg_2)), &conv1_N_10);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv1_N_10));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__string__base_uint_accumulator_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Unsigned conv0_N_10;

  succeeded = mercury__string__accumulate_uint_5_p_0(((MR_Unsigned) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Unsigned) (wrapper_arg_2)), &conv0_N_10);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_N_10));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__string__base_uint_accumulator_1_f_0(
  MR_Integer Base_3)
{
  MR_bool succeeded = (Base_3 == (MR_Integer) 10);
  MR_Word Pred_4;

  if (succeeded)
    {
      Pred_4 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_6[0]));
      MR_hl_field(0, Pred_4, 1) = ((MR_Box) (mercury__string__base_uint_accumulator_1_f_0_1));
      MR_hl_field(0, Pred_4, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Pred_4, 3) = ((MR_Box) ((MR_Unsigned) 10U));
      MR_hl_field(0, Pred_4, 4) = ((MR_Box) (Base_3));
    }
  else
  {
    succeeded = (Base_3 == (MR_Integer) 16);
    if (succeeded)
      {
        Pred_4 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_6[0]));
        MR_hl_field(0, Pred_4, 1) = ((MR_Box) (mercury__string__base_uint_accumulator_1_f_0_2));
        MR_hl_field(0, Pred_4, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Pred_4, 3) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(0, Pred_4, 4) = ((MR_Box) (Base_3));
      }
    else
    {
      succeeded = (Base_3 == (MR_Integer) 8);
      if (succeeded)
        {
          Pred_4 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_6[0]));
          MR_hl_field(0, Pred_4, 1) = ((MR_Box) (mercury__string__base_uint_accumulator_1_f_0_3));
          MR_hl_field(0, Pred_4, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Pred_4, 3) = ((MR_Box) ((MR_Unsigned) 8U));
          MR_hl_field(0, Pred_4, 4) = ((MR_Box) (Base_3));
        }
      else
      {
        succeeded = (Base_3 == (MR_Integer) 2);
        if (succeeded)
          {
            Pred_4 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_6[0]));
            MR_hl_field(0, Pred_4, 1) = ((MR_Box) (mercury__string__base_uint_accumulator_1_f_0_4));
            MR_hl_field(0, Pred_4, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, Pred_4, 3) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(0, Pred_4, 4) = ((MR_Box) (Base_3));
          }
        else
        {
          MR_Integer Var_14;

          succeeded = ((MR_Integer) 2 <= Base_3);
          if (succeeded)
          {
            Var_14 = (MR_Integer) 36;
            succeeded = (Base_3 <= Var_14);
          }
          if (succeeded)
          {
            MR_Unsigned Var_15;

            Var_15 = mercury__uint__det_from_int_1_f_0(Base_3);
            {
              Pred_4 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_6[0]));
              MR_hl_field(0, Pred_4, 1) = ((MR_Box) (mercury__string__base_uint_accumulator_1_f_0_5));
              MR_hl_field(0, Pred_4, 2) = ((MR_Box) ((MR_Integer) 2));
              MR_hl_field(0, Pred_4, 3) = ((MR_Box) (Var_15));
              MR_hl_field(0, Pred_4, 4) = ((MR_Box) (Base_3));
            }
          }
          else
            mercury__require__unexpected_2_p_0((MR_String) "function \140string.base_uint_accumulator\'/1", (MR_String) "base is not in the range 2 .. 36");
        }
      }
    }
  }
  return Pred_4;
}

MR_Integer MR_CALL 
mercury__string__det_base_string_to_int_2_f_0(
  MR_Integer Base_4,
  MR_String S_5)
{
  MR_bool succeeded;
  MR_Integer N_6;
  MR_Integer N0_7;

  succeeded = mercury__string__base_string_to_int_3_p_0(Base_4, S_5, &N0_7);
  if (succeeded)
    N_6 = N0_7;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140string.det_base_string_to_int\'/2", (MR_String) "conversion failed");
  return N_6;
}

MR_Integer MR_CALL 
mercury__string__det_to_int_1_f_0(
  MR_String S_3)
{
  MR_bool succeeded;
  MR_Integer HeadVar__2_2;
  MR_Integer N0_5;

  succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, S_3, &N0_5);
  if (succeeded)
    HeadVar__2_2 = N0_5;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140string.det_base_string_to_int\'/2", (MR_String) "conversion failed");
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__string__to_int_2_p_0(
  MR_String String_3,
  MR_Integer * Int_4)
{
  MR_bool succeeded;

  succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, String_3, Int_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__base_string_to_int_3_p_0(
  MR_Integer Base_4,
  MR_String String_5,
  MR_Integer * Int_6)
{
  MR_bool succeeded;
  MR_Char Char_7;
  MR_Integer End_8;
  MR_Integer Len_24;

{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_24  = Length;
}
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = (MR_Integer) 0 ;
	Length = Len_24 ;
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
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

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
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_5 ;
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
        Var_11 = mercury__string__base_negative_int_accumulator_1_f_0(Base_4);
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
          Var_15 = mercury__string__base_positive_int_accumulator_1_f_0(Base_4);
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

        Var_18 = mercury__string__base_positive_int_accumulator_1_f_0(Base_4);
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

static MR_bool MR_CALL 
mercury__string__base_negative_int_accumulator_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Integer conv4_N_8;

  succeeded = mercury__string__accumulate_negative_int_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv4_N_8);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv4_N_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__string__base_negative_int_accumulator_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Integer conv3_N_8;

  succeeded = mercury__string__accumulate_negative_int_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv3_N_8);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv3_N_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__string__base_negative_int_accumulator_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Integer conv2_N_8;

  succeeded = mercury__string__accumulate_negative_int_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv2_N_8);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv2_N_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__string__base_negative_int_accumulator_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Integer conv1_N_8;

  succeeded = mercury__string__accumulate_negative_int_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv1_N_8);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv1_N_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__string__base_negative_int_accumulator_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Integer conv0_N_8;

  succeeded = mercury__string__accumulate_negative_int_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv0_N_8);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_N_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__string__base_negative_int_accumulator_1_f_0(
  MR_Integer Base_3)
{
  MR_bool succeeded = (Base_3 == (MR_Integer) 10);
  MR_Word Pred_4;

  if (succeeded)
    {
      Pred_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_5[0]));
      MR_hl_field(0, Pred_4, 1) = ((MR_Box) (mercury__string__base_negative_int_accumulator_1_f_0_1));
      MR_hl_field(0, Pred_4, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Pred_4, 3) = ((MR_Box) (Base_3));
    }
  else
  {
    succeeded = (Base_3 == (MR_Integer) 16);
    if (succeeded)
      {
        Pred_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_5[0]));
        MR_hl_field(0, Pred_4, 1) = ((MR_Box) (mercury__string__base_negative_int_accumulator_1_f_0_2));
        MR_hl_field(0, Pred_4, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Pred_4, 3) = ((MR_Box) (Base_3));
      }
    else
    {
      succeeded = (Base_3 == (MR_Integer) 8);
      if (succeeded)
        {
          Pred_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_5[0]));
          MR_hl_field(0, Pred_4, 1) = ((MR_Box) (mercury__string__base_negative_int_accumulator_1_f_0_3));
          MR_hl_field(0, Pred_4, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Pred_4, 3) = ((MR_Box) (Base_3));
        }
      else
      {
        succeeded = (Base_3 == (MR_Integer) 2);
        if (succeeded)
          {
            Pred_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_5[0]));
            MR_hl_field(0, Pred_4, 1) = ((MR_Box) (mercury__string__base_negative_int_accumulator_1_f_0_4));
            MR_hl_field(0, Pred_4, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Pred_4, 3) = ((MR_Box) (Base_3));
          }
        else
        {
          MR_Integer Var_10;

          succeeded = ((MR_Integer) 2 <= Base_3);
          if (succeeded)
          {
            Var_10 = (MR_Integer) 36;
            succeeded = (Base_3 <= Var_10);
          }
          if (succeeded)
            {
              Pred_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_5[0]));
              MR_hl_field(0, Pred_4, 1) = ((MR_Box) (mercury__string__base_negative_int_accumulator_1_f_0_5));
              MR_hl_field(0, Pred_4, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Pred_4, 3) = ((MR_Box) (Base_3));
            }
          else
            mercury__require__unexpected_2_p_0((MR_String) "function \140string.base_negative_int_accumulator\'/1", (MR_String) "base is not in the range 2 .. 36");
        }
      }
    }
  }
  return Pred_4;
}

static MR_bool MR_CALL 
mercury__string__base_positive_int_accumulator_1_f_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Integer conv4_N_8;

  succeeded = mercury__string__accumulate_int_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv4_N_8);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv4_N_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__string__base_positive_int_accumulator_1_f_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Integer conv3_N_8;

  succeeded = mercury__string__accumulate_int_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv3_N_8);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv3_N_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__string__base_positive_int_accumulator_1_f_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Integer conv2_N_8;

  succeeded = mercury__string__accumulate_int_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv2_N_8);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv2_N_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__string__base_positive_int_accumulator_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Integer conv1_N_8;

  succeeded = mercury__string__accumulate_int_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv1_N_8);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv1_N_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__string__base_positive_int_accumulator_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Integer conv0_N_8;

  succeeded = mercury__string__accumulate_int_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Char) (MR_Word) wrapper_arg_1), ((MR_Integer) (wrapper_arg_2)), &conv0_N_8);
  if (succeeded)
  {
    *wrapper_arg_3 = ((MR_Box) (conv0_N_8));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__string__base_positive_int_accumulator_1_f_0(
  MR_Integer Base_3)
{
  MR_bool succeeded = (Base_3 == (MR_Integer) 10);
  MR_Word Pred_4;

  if (succeeded)
    {
      Pred_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_5[0]));
      MR_hl_field(0, Pred_4, 1) = ((MR_Box) (mercury__string__base_positive_int_accumulator_1_f_0_1));
      MR_hl_field(0, Pred_4, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Pred_4, 3) = ((MR_Box) (Base_3));
    }
  else
  {
    succeeded = (Base_3 == (MR_Integer) 16);
    if (succeeded)
      {
        Pred_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_5[0]));
        MR_hl_field(0, Pred_4, 1) = ((MR_Box) (mercury__string__base_positive_int_accumulator_1_f_0_2));
        MR_hl_field(0, Pred_4, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Pred_4, 3) = ((MR_Box) (Base_3));
      }
    else
    {
      succeeded = (Base_3 == (MR_Integer) 8);
      if (succeeded)
        {
          Pred_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_5[0]));
          MR_hl_field(0, Pred_4, 1) = ((MR_Box) (mercury__string__base_positive_int_accumulator_1_f_0_3));
          MR_hl_field(0, Pred_4, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Pred_4, 3) = ((MR_Box) (Base_3));
        }
      else
      {
        succeeded = (Base_3 == (MR_Integer) 2);
        if (succeeded)
          {
            Pred_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_5[0]));
            MR_hl_field(0, Pred_4, 1) = ((MR_Box) (mercury__string__base_positive_int_accumulator_1_f_0_4));
            MR_hl_field(0, Pred_4, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(0, Pred_4, 3) = ((MR_Box) (Base_3));
          }
        else
        {
          MR_Integer Var_10;

          succeeded = ((MR_Integer) 2 <= Base_3);
          if (succeeded)
          {
            Var_10 = (MR_Integer) 36;
            succeeded = (Base_3 <= Var_10);
          }
          if (succeeded)
            {
              Pred_4 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Pred_4, 0) = ((MR_Box) (&mercury__string_scalar_common_5[0]));
              MR_hl_field(0, Pred_4, 1) = ((MR_Box) (mercury__string__base_positive_int_accumulator_1_f_0_5));
              MR_hl_field(0, Pred_4, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Pred_4, 3) = ((MR_Box) (Base_3));
            }
          else
            mercury__require__unexpected_2_p_0((MR_String) "function \140string.base_positive_int_accumulator\'/1", (MR_String) "base is not in the range 2 .. 36");
        }
      }
    }
  }
  return Pred_4;
}

MR_Word MR_CALL 
mercury__string__string_to_doc_1_f_0(
  MR_String S_3)
{
  MR_Word HeadVar__2_2;
  MR_String Var_4;

  Var_4 = mercury__term_io__quoted_string_1_f_0(S_3);
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
mercury__string__format_table_max_2_f_0(
  MR_Word ColumnsLimits_4,
  MR_String Separator_5)
{
  MR_String Table_6;
  MR_Word MaxWidthsSenses_7;
  MR_Word Columns_8;
  MR_Integer SepLen_9;
  MR_Word RevRows_10;
  MR_Word Rows_11;

  MaxWidthsSenses_7 = mercury__string__map__ho12_2_f_in__list_0(ColumnsLimits_4);
  Columns_8 = mercury__string__map__ho11_2_f_in__list_0(ColumnsLimits_4);
  mercury__string__count_code_points_loop_4_p_0(Separator_5, (MR_Integer) 0, (MR_Integer) 0, &SepLen_9);
  mercury__string__generate_rows_6_p_0(MaxWidthsSenses_7, Separator_5, SepLen_9, Columns_8, (MR_Word) ((MR_Unsigned) 0U), &RevRows_10);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevRows_10, &Rows_11);
  Table_6 = mercury__string__join_list_2_f_0((MR_String) "\n", Rows_11);
  return Table_6;
}

static MR_Word MR_CALL 
mercury__string__map__ho12_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_8;
    MR_Word * AddrSCCcallarg_9_12;

    Var_8 = mercury__string__find_max_length_with_limit_1_f_0(Var_6);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__string__LCMC__func__map__ho12__1_3_p_0(Var_7, AddrSCCcallarg_9_12);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__string__LCMC__func__map__ho12__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg_9_12;
      MR_Word HeadVar__3_14;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_13;

      Var_8 = mercury__string__find_max_length_with_limit_1_f_0(Var_6);
      {
        HeadVar__3_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_14, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_14, 1) = NULL;
      }
      AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_14, (MR_Integer) 1)));
      *AddrOfHeadVar__3_13 = HeadVar__3_14;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_13 = AddrSCCcallarg_9_12;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_13 = next_value_of_AddrOfHeadVar__3_13;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__string__find_max_length_with_limit_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_Word JustColumn_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word MaybeLimit_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word Sense_5;
  MR_Integer MaxLength_6;
  MR_Word Strings_7;
  MR_Integer MaxLength0_8;

  if (((MR_tag((MR_Word) JustColumn_3)) == (MR_Integer) 0))
  {
    Strings_7 = ((MR_Word) ((MR_hl_field(0, JustColumn_3, (MR_Integer) 0))));
    Sense_5 = (MR_Integer) 0;
  }
  else
  {
    Strings_7 = ((MR_Word) ((MR_hl_field(1, JustColumn_3, (MR_Integer) 0))));
    Sense_5 = (MR_Integer) 1;
  }
  mercury__string__foldl__ho7_4_p_in__list_0(Strings_7, (MR_Integer) 0, &MaxLength0_8);
  if ((MaybeLimit_4 == (MR_Word) ((MR_Unsigned) 0U)))
    MaxLength_6 = MaxLength0_8;
  else
  {
    MR_Integer Limit_9 = ((MR_Integer) ((MR_hl_field(1, MaybeLimit_4, (MR_Integer) 0))));

    succeeded = (MaxLength0_8 > Limit_9);
    if (succeeded)
      MaxLength_6 = Limit_9;
    else
      MaxLength_6 = MaxLength0_8;
  }
  {
    HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HeadVar__2_2, 0) = ((MR_Box) (Sense_5));
    MR_hl_field(0, HeadVar__2_2, 1) = ((MR_Box) (MaxLength_6));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
mercury__string__map__ho11_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_8;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 0))));
    MR_Word * AddrSCCcallarg_9_20;

    if (((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0))
      Var_8 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 0))));
    else
      Var_8 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_20 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__string__LCMC__func__map__ho11__1_3_p_0(Var_7, AddrSCCcallarg_9_20);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__string__LCMC__func__map__ho11__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_21)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_21 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, Var_6, (MR_Integer) 0))));
      MR_Word * AddrSCCcallarg_9_20;
      MR_Word HeadVar__3_22;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_21;

      if (((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0))
        Var_8 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 0))));
      else
        Var_8 = ((MR_Word) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
      {
        HeadVar__3_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_22, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_22, 1) = NULL;
      }
      AddrSCCcallarg_9_20 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_22, (MR_Integer) 1)));
      *AddrOfHeadVar__3_21 = HeadVar__3_22;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_21 = AddrSCCcallarg_9_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_21 = next_value_of_AddrOfHeadVar__3_21;
      continue;
    }
    break;
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
        STATE_VARIABLE_RevRows_18_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevRows_18_18, 0) = ((MR_Box) (Row_14));
        MR_hl_field(1, STATE_VARIABLE_RevRows_18_18, 1) = ((MR_Box) (STATE_VARIABLE_RevRows_0_15));
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
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__6_6 = (MR_String) "";
    else
      {
        mercury__require__error_2_p_0((MR_String) "predicate \140string.pad_row\'/6", (MR_String) "list length mismatch");
        return;
      }
  else
  {
    MR_Word Var_54 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Var_55 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__error_2_p_0((MR_String) "predicate \140string.pad_row\'/6", (MR_String) "list length mismatch");
        return;
      }
    else
    {
      MR_Word Justify_10 = ((MR_Word) ((MR_hl_field(0, Var_55, (MR_Integer) 0))));
      MR_Integer MaxWidth_11 = ((MR_Integer) ((MR_hl_field(0, Var_55, (MR_Integer) 1))));
      MR_String ColumnStr0_13 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ColumnStrs0_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer NextColumn_19;
      MR_String LineRest_20;
      MR_Integer Var_27 = (MR_Integer) ((MR_Unsigned) CurColumn_5 + (MR_Unsigned) MaxWidth_11);
      MR_Integer Var_28;

      NextColumn_19 = (MR_Integer) ((MR_Unsigned) Var_27 + (MR_Unsigned) SepLen_4);
      mercury__string__pad_row_6_p_0(Var_54, ColumnStrs0_14, Separator_3, SepLen_4, NextColumn_19, &LineRest_20);
      mercury__string__count_code_points_loop_4_p_0(ColumnStr0_13, (MR_Integer) 0, (MR_Integer) 0, &Var_28);
      succeeded = (Var_28 <= MaxWidth_11);
      if (succeeded)
      {
        MR_String ColumnStr_21;

        switch (Justify_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__string__pad_right_4_p_0(ColumnStr0_13, (MR_Char) 32, MaxWidth_11, &ColumnStr_21);
            break;
          case (MR_Integer) 1:
            mercury__string__pad_left_4_p_0(ColumnStr0_13, (MR_Char) 32, MaxWidth_11, &ColumnStr_21);
            break;
        }
        if ((Var_54 == (MR_Word) ((MR_Unsigned) 0U)))
          *HeadVar__6_6 = ColumnStr_21;
        else
        {
          MR_String Var_31;

{
#define MR_PROC_LABEL mercury__string__pad_row_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = Separator_3 ;
	S2 = LineRest_20 ;
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
	Var_31  = S3;
}
{
#define MR_PROC_LABEL mercury__string__pad_row_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = ColumnStr_21 ;
	S2 = Var_31 ;
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
	*HeadVar__6_6  = S3;
}
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
{
#define MR_PROC_LABEL mercury__string__pad_row_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = Var_36 ;
	S2 = LineRest_20 ;
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
	Var_35  = S3;
}
        Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_35);
        Var_32 = mercury__string__f_43_43_2_f_0(Separator_3, Var_33);
        *HeadVar__6_6 = mercury__string__f_43_43_2_f_0(ColumnStr0_13, Var_32);
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
    MR_Word Column_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Columns_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ColumnTop_6;
    MR_Word ColumnRest_8;
    MR_Word * AddrColumnRests_12;
    MR_Word * AddrColumnTops_13;

    if ((Column_4 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__error_2_p_0((MR_String) "predicate \140string.get_next_line\'/3", (MR_String) "list length mismatch");
        return;
      }
    else
    {
      ColumnTop_6 = ((MR_String) ((MR_hl_field(1, Column_4, (MR_Integer) 0))));
      ColumnRest_8 = ((MR_Word) ((MR_hl_field(1, Column_4, (MR_Integer) 1))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ColumnTop_6));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrColumnTops_13 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__2_2, (MR_Integer) 1)));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (ColumnRest_8));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrColumnRests_12 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, (MR_Integer) 1)));
    mercury__string__LCMC__pred__get_next_line__1_3_p_0(Columns_5, AddrColumnTops_13, AddrColumnRests_12);
  }
}

void MR_CALL 
mercury__string__LCMC__pred__get_next_line__1_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * AddrOfHeadVar__2_14,
  MR_Word * AddrOfHeadVar__3_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__2_14 = (MR_Word) ((MR_Unsigned) 0U);
      *AddrOfHeadVar__3_15 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Word Column_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Columns_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_String ColumnTop_6;
      MR_Word ColumnRest_8;
      MR_Word * AddrColumnRests_12;
      MR_Word * AddrColumnTops_13;
      MR_Word HeadVar__2_16;
      MR_Word HeadVar__3_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word * next_value_of_AddrOfHeadVar__2_14;
      MR_Word * next_value_of_AddrOfHeadVar__3_15;

      if ((Column_4 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__error_2_p_0((MR_String) "predicate \140string.get_next_line\'/3", (MR_String) "list length mismatch");
          return;
        }
      else
      {
        ColumnTop_6 = ((MR_String) ((MR_hl_field(1, Column_4, (MR_Integer) 0))));
        ColumnRest_8 = ((MR_Word) ((MR_hl_field(1, Column_4, (MR_Integer) 1))));
      }
      {
        HeadVar__2_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__2_16, 0) = ((MR_Box) (ColumnTop_6));
        MR_hl_field(1, HeadVar__2_16, 1) = NULL;
      }
      AddrColumnTops_13 = (MR_Word *) (&(MR_hl_field(1, HeadVar__2_16, (MR_Integer) 1)));
      *AddrOfHeadVar__2_14 = HeadVar__2_16;
      {
        HeadVar__3_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_17, 0) = ((MR_Box) (ColumnRest_8));
        MR_hl_field(1, HeadVar__3_17, 1) = NULL;
      }
      AddrColumnRests_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_17, (MR_Integer) 1)));
      *AddrOfHeadVar__3_15 = HeadVar__3_17;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Columns_5;
      next_value_of_AddrOfHeadVar__2_14 = AddrColumnTops_13;
      next_value_of_AddrOfHeadVar__3_15 = AddrColumnRests_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      AddrOfHeadVar__2_14 = next_value_of_AddrOfHeadVar__2_14;
      AddrOfHeadVar__3_15 = next_value_of_AddrOfHeadVar__3_15;
      continue;
    }
    break;
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
      MR_Word List_2 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Lists_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
    MR_Word PaddedHead_9 = ((MR_Word) ((MR_hl_field(1, PaddedColumns_8, (MR_Integer) 0))));
    MR_Word PaddedTail_10 = ((MR_Word) ((MR_hl_field(1, PaddedColumns_8, (MR_Integer) 1))));

    Rows_11 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_in__list_0(Separator_5, PaddedTail_10, PaddedHead_9);
  }
  Table_6 = mercury__string__join_list_2_f_0((MR_String) "\n", Rows_11);
  return Table_6;
}

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_53_95_95_91_49_44_32_51_93_95_48_3_f_in__list_0(
  MR_String Var_17,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      Var_13 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_52_51_95_95_91_50_93_95_48_3_f_in__list_0(Var_17, Var_9, HeadVar__3_3);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    return HeadVar__4_4;
    break;
  }
}

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_52_51_95_95_91_50_93_95_48_3_f_in__list_0(
  MR_String Var_34,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word HeadVar__4_4;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
  else
  {
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_33 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_2_p_0((MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
    else
    {
      MR_String Var_21 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_String Var_23;
      MR_String Var_35;
      MR_Word * AddrSCCcallarg_24_60;

{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_52_51_95_95_91_50_93_95_48_3_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = Var_34 ;
	S2 = Var_33 ;
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
	Var_35  = S3;
}
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_52_51_95_95_91_50_93_95_48_3_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = Var_21 ;
	S2 = Var_35 ;
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
	Var_23  = S3;
}
      {
        HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (Var_23));
        MR_hl_field(1, HeadVar__4_4, 1) = NULL;
      }
      AddrSCCcallarg_24_60 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1)));
      mercury__string__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_52_51_95_95_91_50_93_95_48_95_95_49_4_p_0(Var_34, Var_32, Var_22, AddrSCCcallarg_24_60);
    }
  }
  return HeadVar__4_4;
}

static void MR_CALL 
mercury__string__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_52_51_95_95_91_50_93_95_48_95_95_49_4_p_0(
  MR_String Var_34,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_61)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__4_61 = (MR_Word) ((MR_Unsigned) 0U);
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
          return;
        }
    else
    {
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_33 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
          return;
        }
      else
      {
        MR_String Var_21 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
        MR_String Var_23;
        MR_String Var_35;
        MR_Word * AddrSCCcallarg_24_60;
        MR_Word HeadVar__4_62;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word * next_value_of_AddrOfHeadVar__4_61;

{
#define MR_PROC_LABEL mercury__string__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_52_51_95_95_91_50_93_95_48_95_95_49_4_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = Var_34 ;
	S2 = Var_33 ;
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
	Var_35  = S3;
}
{
#define MR_PROC_LABEL mercury__string__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_52_51_95_95_91_50_93_95_48_95_95_49_4_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = Var_21 ;
	S2 = Var_35 ;
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
	Var_23  = S3;
}
        {
          HeadVar__4_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__4_62, 0) = ((MR_Box) (Var_23));
          MR_hl_field(1, HeadVar__4_62, 1) = NULL;
        }
        AddrSCCcallarg_24_60 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_62, (MR_Integer) 1)));
        *AddrOfHeadVar__4_61 = HeadVar__4_62;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_32;
        next_value_of_HeadVar__3_3 = Var_22;
        next_value_of_AddrOfHeadVar__4_61 = AddrSCCcallarg_24_60;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        AddrOfHeadVar__4_61 = next_value_of_AddrOfHeadVar__4_61;
        continue;
      }
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__string__map__ho14_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer Var_8;
    MR_Word * AddrSCCcallarg_9_12;

    Var_8 = mercury__string__find_max_length_1_f_0(Var_6);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__string__LCMC__func__map__ho14__1_3_p_0(Var_7, AddrSCCcallarg_9_12);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__string__LCMC__func__map__ho14__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_8;
      MR_Word * AddrSCCcallarg_9_12;
      MR_Word HeadVar__3_14;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_13;

      Var_8 = mercury__string__find_max_length_1_f_0(Var_6);
      {
        HeadVar__3_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_14, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_14, 1) = NULL;
      }
      AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_14, (MR_Integer) 1)));
      *AddrOfHeadVar__3_13 = HeadVar__3_14;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_13 = AddrSCCcallarg_9_12;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_13 = next_value_of_AddrOfHeadVar__3_13;
      continue;
    }
    break;
  }
}

MR_Integer MR_CALL 
mercury__string__find_max_length_1_f_0(
  MR_Word JustColumn_3)
{
  MR_Integer MaxLength_4;
  MR_Word Strings_5;

  if (((MR_tag((MR_Word) JustColumn_3)) == (MR_Integer) 0))
    Strings_5 = ((MR_Word) ((MR_hl_field(0, JustColumn_3, (MR_Integer) 0))));
  else
    Strings_5 = ((MR_Word) ((MR_hl_field(1, JustColumn_3, (MR_Integer) 0))));
  mercury__string__foldl__ho7_4_p_in__list_0(Strings_5, (MR_Integer) 0, &MaxLength_4);
  return MaxLength_4;
}

static void MR_CALL 
mercury__string__foldl__ho7_4_p_in__list_0(
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
      MR_String Var_9 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_13;
      MR_Integer Length_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;

      mercury__string__count_code_points_loop_4_p_0(Var_9, (MR_Integer) 0, (MR_Integer) 0, &Length_16);
      succeeded = (Length_16 > HeadVar__3_3);
      if (succeeded)
        Var_13 = Length_16;
      else
        Var_13 = HeadVar__3_3;
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

static MR_Word MR_CALL 
mercury__string__map_corresponding__ho13_3_f_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word HeadVar__4_4;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    else
      mercury__require__unexpected_2_p_0((MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
  else
  {
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__require__unexpected_2_p_0((MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
    else
    {
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Var_23;
      MR_Word * AddrSCCcallarg_24_34;

      Var_23 = mercury__string__pad_column_2_f_0(Var_33, Var_21);
      {
        HeadVar__4_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__4_4, 0) = ((MR_Box) (Var_23));
        MR_hl_field(1, HeadVar__4_4, 1) = NULL;
      }
      AddrSCCcallarg_24_34 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1)));
      mercury__string__LCMC__func__map_corresponding__ho13__1_4_p_0(Var_32, Var_22, AddrSCCcallarg_24_34);
    }
  }
  return HeadVar__4_4;
}

static void MR_CALL 
mercury__string__LCMC__func__map_corresponding__ho13__1_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * AddrOfHeadVar__4_35)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *AddrOfHeadVar__4_35 = (MR_Word) ((MR_Unsigned) 0U);
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
          return;
        }
    else
    {
      MR_Word Var_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_33 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
          return;
        }
      else
      {
        MR_Word Var_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
        MR_Word Var_22 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
        MR_Word Var_23;
        MR_Word * AddrSCCcallarg_24_34;
        MR_Word HeadVar__4_36;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Word * next_value_of_AddrOfHeadVar__4_35;

        Var_23 = mercury__string__pad_column_2_f_0(Var_33, Var_21);
        {
          HeadVar__4_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__4_36, 0) = ((MR_Box) (Var_23));
          MR_hl_field(1, HeadVar__4_36, 1) = NULL;
        }
        AddrSCCcallarg_24_34 = (MR_Word *) (&(MR_hl_field(1, HeadVar__4_36, (MR_Integer) 1)));
        *AddrOfHeadVar__4_35 = HeadVar__4_36;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_32;
        next_value_of_HeadVar__3_3 = Var_22;
        next_value_of_AddrOfHeadVar__4_35 = AddrSCCcallarg_24_34;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        AddrOfHeadVar__4_35 = next_value_of_AddrOfHeadVar__4_35;
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__string__pad_column_2_f_0(
  MR_Integer Width_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
  {
    MR_Word Strings_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    HeadVar__3_3 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0((MR_Char) 32, Width_1, Strings_5);
  }
  else
  {
    MR_Word Strings_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    HeadVar__3_3 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_51_93_95_48_2_f_in__list_0((MR_Char) 32, Width_1, Strings_9);
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0(
  MR_Char Var_12,
  MR_Integer Var_13,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_8;
    MR_Word * AddrSCCcallarg_9_14;

    mercury__string__pad_right_4_p_0(Var_6, Var_12, Var_13, &Var_8);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__string__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_95_95_49_3_p_0(Var_12, Var_13, Var_7, AddrSCCcallarg_9_14);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__string__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_95_95_49_3_p_0(
  MR_Char Var_12,
  MR_Integer Var_13,
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
      MR_String Var_8;
      MR_Word * AddrSCCcallarg_9_14;
      MR_Word HeadVar__3_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_15;

      mercury__string__pad_right_4_p_0(Var_6, Var_12, Var_13, &Var_8);
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

static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_51_93_95_48_2_f_in__list_0(
  MR_Char Var_12,
  MR_Integer Var_13,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_8;
    MR_Word * AddrSCCcallarg_9_14;

    mercury__string__pad_left_4_p_0(Var_6, Var_12, Var_13, &Var_8);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_14 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__string__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_51_93_95_48_95_95_49_3_p_0(Var_12, Var_13, Var_7, AddrSCCcallarg_9_14);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__string__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_51_93_95_48_95_95_49_3_p_0(
  MR_Char Var_12,
  MR_Integer Var_13,
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
      MR_String Var_8;
      MR_Word * AddrSCCcallarg_9_14;
      MR_Word HeadVar__3_16;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_15;

      mercury__string__pad_left_4_p_0(Var_6, Var_12, Var_13, &Var_8);
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

MR_Box MR_CALL 
mercury__string__foldr_between_5_f_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word F_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer Count_10,
  MR_Box Acc0_11)
{
  MR_bool succeeded = ((MR_Integer) 0 > Start_9);
  MR_Box Acc_12;
  MR_Integer Start_24;
  MR_Integer End_25;
  MR_Integer Var_27;

  if (succeeded)
    Start_24 = (MR_Integer) 0;
  else
    Start_24 = Start_9;
{
#define MR_PROC_LABEL mercury__string__foldr_between_5_f_0

	MR_String Str;
	MR_Integer Length;

	Str = String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_27  = Length;
}
  succeeded = (Count_10 < Var_27);
  if (succeeded)
    End_25 = Count_10;
  else
    End_25 = Var_27;
  mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_49_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(F_7, String_8, Start_24, End_25, Acc0_11, &Acc_12);
  return Acc_12;
}

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_49_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word Var_19,
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
    MR_Integer _ReplacedCodeUnit_20;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_49_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_8 ;
	Index = I_10 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	J_12  = PrevIndex;
	Char_13  = Ch;
	_ReplacedCodeUnit_20  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 >= Start_9);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_19, (MR_Integer) 1))));
      MR_Integer next_value_of_I_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

      STATE_VARIABLE_Acc_16_16 = func_0(((MR_Box) (Var_19)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14);
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
  MR_Word TypeInfo_for_T_12,
  MR_Word Closure_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__string__foldr_4_p_4

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_11  = Length;
}
  mercury__string__foldr_between_6_p_4(TypeInfo_for_T_12, Closure_5, String_6, (MR_Integer) 0, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9, cont, cont_env_ptr);
}

void MR_CALL 
mercury__string__foldr_between_6_p_4(
  MR_Word TypeInfo_for_T_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start0_9,
  MR_Integer End0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15,
  MR_Cont cont,
  void * cont_env_ptr)
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

	Str = String_8 ;
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
  mercury__string__foldr_between_2_6_p_4(TypeInfo_for_T_18, Closure_7, String_8, Start_12, End_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__string__foldr_between_2_6_p_4_1(
  void * env_ptr_arg)
{
  struct mercury__string__foldr_between_2_6_p_4_env_0_s * env_ptr = (struct mercury__string__foldr_between_2_6_p_4_env_0_s *) (env_ptr_arg);

  mercury__string__foldr_between_2_6_p_4((env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_17, (env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__Closure_7, (env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__String_8, (env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__Start_9, (env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__J_12, (env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, (env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15, (env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__cont, (env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__string__foldr_between_2_6_p_4(
  MR_Word TypeInfo_for_T_17,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer I_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__string__foldr_between_2_6_p_4_env_0_s env;

  (env).mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_17 = TypeInfo_for_T_17;
  (env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7 = Closure_7;
  (env).mercury__string__foldr_between_2_6_p_4_env_0__String_8 = String_8;
  (env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9 = Start_9;
  (env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_15;
  (env).mercury__string__foldr_between_2_6_p_4_env_0__cont = cont;
  (env).mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_bool succeeded = (I_10 > (env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9);
    MR_Char Char_13;
    MR_Integer _ReplacedCodeUnit_18;

    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__foldr_between_2_6_p_4

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = (env).mercury__string__foldr_between_2_6_p_4_env_0__String_8 ;
	Index = I_10 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	(env).mercury__string__foldr_between_2_6_p_4_env_0__J_12  = PrevIndex;
	Char_13  = Ch;
	_ReplacedCodeUnit_18  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = ((env).mercury__string__foldr_between_2_6_p_4_env_0__J_12 >= (env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9);
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7, (MR_Integer) 1))));

      func_0(((MR_Box) ((env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14, &(env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldr_between_2_6_p_4_1, &env);
    }
    else
    {
      *((env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15) = STATE_VARIABLE_Acc_0_14;
      ((env).mercury__string__foldr_between_2_6_p_4_env_0__cont)((env).mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__string__foldr_4_p_3(
  MR_Word TypeInfo_for_T_12,
  MR_Word Closure_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__string__foldr_4_p_3

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_11  = Length;
}
  mercury__string__foldr_between_6_p_3(TypeInfo_for_T_12, Closure_5, String_6, (MR_Integer) 0, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9, cont, cont_env_ptr);
}

void MR_CALL 
mercury__string__foldr_between_6_p_3(
  MR_Word TypeInfo_for_T_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start0_9,
  MR_Integer End0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15,
  MR_Cont cont,
  void * cont_env_ptr)
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

	Str = String_8 ;
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
  mercury__string__foldr_between_2_6_p_3(TypeInfo_for_T_18, Closure_7, String_8, Start_12, End_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__string__foldr_between_2_6_p_3_1(
  void * env_ptr_arg)
{
  struct mercury__string__foldr_between_2_6_p_3_env_0_s * env_ptr = (struct mercury__string__foldr_between_2_6_p_3_env_0_s *) (env_ptr_arg);

  mercury__string__foldr_between_2_6_p_3((env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_17, (env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__Closure_7, (env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__String_8, (env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__Start_9, (env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__J_12, (env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, (env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15, (env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__cont, (env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__string__foldr_between_2_6_p_3(
  MR_Word TypeInfo_for_T_17,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start_9,
  MR_Integer I_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__string__foldr_between_2_6_p_3_env_0_s env;

  (env).mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_17 = TypeInfo_for_T_17;
  (env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7 = Closure_7;
  (env).mercury__string__foldr_between_2_6_p_3_env_0__String_8 = String_8;
  (env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9 = Start_9;
  (env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_15;
  (env).mercury__string__foldr_between_2_6_p_3_env_0__cont = cont;
  (env).mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_bool succeeded = (I_10 > (env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9);
    MR_Char Char_13;
    MR_Integer _ReplacedCodeUnit_18;

    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__foldr_between_2_6_p_3

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = (env).mercury__string__foldr_between_2_6_p_3_env_0__String_8 ;
	Index = I_10 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	(env).mercury__string__foldr_between_2_6_p_3_env_0__J_12  = PrevIndex;
	Char_13  = Ch;
	_ReplacedCodeUnit_18  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = ((env).mercury__string__foldr_between_2_6_p_3_env_0__J_12 >= (env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9);
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7, (MR_Integer) 1))));

      func_0(((MR_Box) ((env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14, &(env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldr_between_2_6_p_3_1, &env);
    }
    else
    {
      *((env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15) = STATE_VARIABLE_Acc_0_14;
      ((env).mercury__string__foldr_between_2_6_p_3_env_0__cont)((env).mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr);
    }
  }
}

MR_bool MR_CALL 
mercury__string__foldr_4_p_2(
  MR_Word TypeInfo_for_T_12,
  MR_Word Closure_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_bool succeeded;
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__string__foldr_4_p_2

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_11  = Length;
}
  succeeded = mercury__string__foldr_between_6_p_2(TypeInfo_for_T_12, Closure_5, String_6, (MR_Integer) 0, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__foldr_between_6_p_2(
  MR_Word TypeInfo_for_T_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start0_9,
  MR_Integer End0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
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

	Str = String_8 ;
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
  succeeded = mercury__string__foldr_between_2_6_p_2(TypeInfo_for_T_18, Closure_7, String_8, Start_12, End_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15);
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__foldr_between_2_6_p_2(
  MR_Word TypeInfo_for_T_17,
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
    MR_Integer _ReplacedCodeUnit_18;

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
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_8 ;
	Index = I_10 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	J_12  = PrevIndex;
	Char_13  = Ch;
	_ReplacedCodeUnit_18  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 >= Start_9);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Closure_7, (MR_Integer) 1))));
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
  MR_Word TypeInfo_for_T_12,
  MR_Word Closure_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__string__foldr_4_p_1

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_11  = Length;
}
  mercury__string__foldr_between_6_p_1(TypeInfo_for_T_12, Closure_5, String_6, (MR_Integer) 0, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

void MR_CALL 
mercury__string__foldr_between_6_p_1(
  MR_Word TypeInfo_for_T_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start0_9,
  MR_Integer End0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
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

	Str = String_8 ;
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
  mercury__string__foldr_between_2_6_p_1(TypeInfo_for_T_18, Closure_7, String_8, Start_12, End_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15);
}

void MR_CALL 
mercury__string__foldr_between_2_6_p_1(
  MR_Word TypeInfo_for_T_17,
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
    MR_Integer _ReplacedCodeUnit_18;

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
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_8 ;
	Index = I_10 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	J_12  = PrevIndex;
	Char_13  = Ch;
	_ReplacedCodeUnit_18  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 >= Start_9);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_16_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Closure_7, (MR_Integer) 1))));
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
  MR_Word TypeInfo_for_T_12,
  MR_Word Closure_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_Acc_0_8,
  MR_Box * STATE_VARIABLE_Acc_9)
{
  MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__string__foldr_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_11  = Length;
}
  mercury__string__foldr_between_6_p_0(TypeInfo_for_T_12, Closure_5, String_6, (MR_Integer) 0, Var_11, STATE_VARIABLE_Acc_0_8, STATE_VARIABLE_Acc_9);
}

void MR_CALL 
mercury__string__foldr_between_6_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start0_9,
  MR_Integer End0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
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

	Str = String_8 ;
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
  mercury__string__foldr_between_2_6_p_0(TypeInfo_for_T_18, Closure_7, String_8, Start_12, End_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15);
}

void MR_CALL 
mercury__string__foldr_between_2_6_p_0(
  MR_Word TypeInfo_for_T_17,
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
    MR_Integer _ReplacedCodeUnit_18;

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
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_8 ;
	Index = I_10 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	J_12  = PrevIndex;
	Char_13  = Ch;
	_ReplacedCodeUnit_18  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 >= Start_9);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_16_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Closure_7, (MR_Integer) 1))));
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
  MR_bool succeeded;
  MR_Box Acc_8;
  MR_Integer Var_21;
  MR_Integer Start_22;
  MR_Integer End_23;
  MR_Integer Var_25;

{
#define MR_PROC_LABEL mercury__string__foldr_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_21  = Length;
}
  succeeded = ((MR_Integer) 0 > (MR_Integer) 0);
  if (succeeded)
    Start_22 = (MR_Integer) 0;
  else
    Start_22 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__string__foldr_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_25  = Length;
}
  succeeded = (Var_21 < Var_25);
  if (succeeded)
    End_23 = Var_21;
  else
    End_23 = Var_25;
  mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_52_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(F_5, String_6, Start_22, End_23, Acc0_7, &Acc_8);
  return Acc_8;
}

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_52_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word Var_19,
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
    MR_Integer _ReplacedCodeUnit_20;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_52_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_8 ;
	Index = I_10 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	J_12  = PrevIndex;
	Char_13  = Ch;
	_ReplacedCodeUnit_20  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 >= Start_9);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_19, (MR_Integer) 1))));
      MR_Integer next_value_of_I_10;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

      STATE_VARIABLE_Acc_16_16 = func_0(((MR_Box) (Var_19)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14);
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
mercury__string__foldl_between_5_f_0(
  MR_Word TypeInfo_for_A_23,
  MR_Word F_7,
  MR_String S_8,
  MR_Integer Start_9,
  MR_Integer End_10,
  MR_Box A_11)
{
  MR_bool succeeded = ((MR_Integer) 0 > Start_9);
  MR_Box B_12;
  MR_Integer Start_24;
  MR_Integer End_25;
  MR_Integer Var_27;

  if (succeeded)
    Start_24 = (MR_Integer) 0;
  else
    Start_24 = Start_9;
{
#define MR_PROC_LABEL mercury__string__foldl_between_5_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_27  = Length;
}
  succeeded = (End_10 < Var_27);
  if (succeeded)
    End_25 = End_10;
  else
    End_25 = Var_27;
  mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_57_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(F_7, S_8, Start_24, End_25, A_11, &B_12);
  return B_12;
}

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_57_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word Var_19,
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
    MR_Integer _ReplacedCodeUnit_20;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_57_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_8 ;
	Index = I_9 ;
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
	J_12  = NextIndex;
	Char_13  = Ch;
	_ReplacedCodeUnit_20  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 <= End_10);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_19, (MR_Integer) 1))));
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

      STATE_VARIABLE_Acc_16_16 = func_0(((MR_Box) (Var_19)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14);
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
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Box STATE_VARIABLE_Acc1_0_12,
  MR_Box * STATE_VARIABLE_Acc1_13,
  MR_Box STATE_VARIABLE_Acc2_0_14,
  MR_Box * STATE_VARIABLE_Acc2_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer Length_11;

{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_5

	MR_String Str;
	MR_Integer Length;

	Str = String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_11  = Length;
}
  mercury__string__foldl2_between_8_p_5(TypeInfo_for_A_17, TypeInfo_for_B_18, Closure_7, String_8, (MR_Integer) 0, Length_11, STATE_VARIABLE_Acc1_0_12, STATE_VARIABLE_Acc1_13, STATE_VARIABLE_Acc2_0_14, STATE_VARIABLE_Acc2_15, cont, cont_env_ptr);
}

void MR_CALL 
mercury__string__foldl2_between_8_p_5(
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
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

	Str = String_10 ;
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
  mercury__string__foldl2_between_2_8_p_5(TypeInfo_for_A_23, TypeInfo_for_B_24, Closure_9, String_10, Start_15, End_16, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__string__foldl2_between_2_8_p_5_1(
  void * env_ptr_arg)
{
  struct mercury__string__foldl2_between_2_8_p_5_env_0_s * env_ptr = (struct mercury__string__foldl2_between_2_8_p_5_env_0_s *) (env_ptr_arg);

  mercury__string__foldl2_between_2_8_p_5((env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_23, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_24, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__String_10, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__J_15, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__End_12, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__cont, (env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__string__foldl2_between_2_8_p_5(
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
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
  struct mercury__string__foldl2_between_2_8_p_5_env_0_s env;

  (env).mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_23 = TypeInfo_for_A_23;
  (env).mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_24 = TypeInfo_for_B_24;
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
    MR_Integer _ReplacedCodeUnit_25;

    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__foldl2_between_2_8_p_5

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = (env).mercury__string__foldl2_between_2_8_p_5_env_0__String_10 ;
	Index = I_11 ;
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
	(env).mercury__string__foldl2_between_2_8_p_5_env_0__J_15  = NextIndex;
	Char_16  = Ch;
	_ReplacedCodeUnit_25  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = ((env).mercury__string__foldl2_between_2_8_p_5_env_0__J_15 <= (env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12);
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9, (MR_Integer) 1))));

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

void MR_CALL 
mercury__string__foldl2_6_p_4(
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Box STATE_VARIABLE_Acc1_0_12,
  MR_Box * STATE_VARIABLE_Acc1_13,
  MR_Box STATE_VARIABLE_Acc2_0_14,
  MR_Box * STATE_VARIABLE_Acc2_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer Length_11;

{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str = String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_11  = Length;
}
  mercury__string__foldl2_between_8_p_4(TypeInfo_for_A_17, TypeInfo_for_B_18, Closure_7, String_8, (MR_Integer) 0, Length_11, STATE_VARIABLE_Acc1_0_12, STATE_VARIABLE_Acc1_13, STATE_VARIABLE_Acc2_0_14, STATE_VARIABLE_Acc2_15, cont, cont_env_ptr);
}

void MR_CALL 
mercury__string__foldl2_between_8_p_4(
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
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

	Str = String_10 ;
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
  mercury__string__foldl2_between_2_8_p_4(TypeInfo_for_A_23, TypeInfo_for_B_24, Closure_9, String_10, Start_15, End_16, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__string__foldl2_between_2_8_p_4_1(
  void * env_ptr_arg)
{
  struct mercury__string__foldl2_between_2_8_p_4_env_0_s * env_ptr = (struct mercury__string__foldl2_between_2_8_p_4_env_0_s *) (env_ptr_arg);

  mercury__string__foldl2_between_2_8_p_4((env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_23, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_24, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__String_10, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__J_15, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__End_12, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__cont, (env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__string__foldl2_between_2_8_p_4(
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
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
  struct mercury__string__foldl2_between_2_8_p_4_env_0_s env;

  (env).mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_23 = TypeInfo_for_A_23;
  (env).mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_24 = TypeInfo_for_B_24;
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
    MR_Integer _ReplacedCodeUnit_25;

    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__foldl2_between_2_8_p_4

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = (env).mercury__string__foldl2_between_2_8_p_4_env_0__String_10 ;
	Index = I_11 ;
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
	(env).mercury__string__foldl2_between_2_8_p_4_env_0__J_15  = NextIndex;
	Char_16  = Ch;
	_ReplacedCodeUnit_25  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = ((env).mercury__string__foldl2_between_2_8_p_4_env_0__J_15 <= (env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12);
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9, (MR_Integer) 1))));

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

MR_bool MR_CALL 
mercury__string__foldl2_6_p_3(
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Box STATE_VARIABLE_Acc1_0_12,
  MR_Box * STATE_VARIABLE_Acc1_13,
  MR_Box STATE_VARIABLE_Acc2_0_14,
  MR_Box * STATE_VARIABLE_Acc2_15)
{
  MR_bool succeeded;
  MR_Integer Length_11;

{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str = String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_11  = Length;
}
  succeeded = mercury__string__foldl2_between_8_p_3(TypeInfo_for_A_17, TypeInfo_for_B_18, Closure_7, String_8, (MR_Integer) 0, Length_11, STATE_VARIABLE_Acc1_0_12, STATE_VARIABLE_Acc1_13, STATE_VARIABLE_Acc2_0_14, STATE_VARIABLE_Acc2_15);
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__foldl2_between_8_p_3(
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer Start0_11,
  MR_Integer End0_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20)
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

	Str = String_10 ;
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
  succeeded = mercury__string__foldl2_between_2_8_p_3(TypeInfo_for_A_23, TypeInfo_for_B_24, Closure_9, String_10, Start_15, End_16, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20);
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__foldl2_between_2_8_p_3(
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
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
    MR_Integer _ReplacedCodeUnit_25;

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
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_10 ;
	Index = I_11 ;
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
	J_15  = NextIndex;
	Char_16  = Ch;
	_ReplacedCodeUnit_25  = ReplacedCodeUnit;
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
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Closure_9, (MR_Integer) 1))));
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
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Box STATE_VARIABLE_Acc1_0_12,
  MR_Box * STATE_VARIABLE_Acc1_13,
  MR_Box STATE_VARIABLE_Acc2_0_14,
  MR_Box * STATE_VARIABLE_Acc2_15)
{
  MR_Integer Length_11;

{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str = String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_11  = Length;
}
  mercury__string__foldl2_between_8_p_2(TypeInfo_for_A_17, TypeInfo_for_B_18, Closure_7, String_8, (MR_Integer) 0, Length_11, STATE_VARIABLE_Acc1_0_12, STATE_VARIABLE_Acc1_13, STATE_VARIABLE_Acc2_0_14, STATE_VARIABLE_Acc2_15);
}

void MR_CALL 
mercury__string__foldl2_between_8_p_2(
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer Start0_11,
  MR_Integer End0_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20)
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

	Str = String_10 ;
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
  mercury__string__foldl2_between_2_8_p_2(TypeInfo_for_A_23, TypeInfo_for_B_24, Closure_9, String_10, Start_15, End_16, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20);
}

void MR_CALL 
mercury__string__foldl2_between_2_8_p_2(
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
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
    MR_Integer _ReplacedCodeUnit_25;

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
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_10 ;
	Index = I_11 ;
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
	J_15  = NextIndex;
	Char_16  = Ch;
	_ReplacedCodeUnit_25  = ReplacedCodeUnit;
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
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Closure_9, (MR_Integer) 1))));
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
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Box STATE_VARIABLE_Acc1_0_12,
  MR_Box * STATE_VARIABLE_Acc1_13,
  MR_Box STATE_VARIABLE_Acc2_0_14,
  MR_Box * STATE_VARIABLE_Acc2_15)
{
  MR_Integer Length_11;

{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str = String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_11  = Length;
}
  mercury__string__foldl2_between_8_p_1(TypeInfo_for_A_17, TypeInfo_for_B_18, Closure_7, String_8, (MR_Integer) 0, Length_11, STATE_VARIABLE_Acc1_0_12, STATE_VARIABLE_Acc1_13, STATE_VARIABLE_Acc2_0_14, STATE_VARIABLE_Acc2_15);
}

void MR_CALL 
mercury__string__foldl2_between_8_p_1(
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer Start0_11,
  MR_Integer End0_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20)
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

	Str = String_10 ;
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
  mercury__string__foldl2_between_2_8_p_1(TypeInfo_for_A_23, TypeInfo_for_B_24, Closure_9, String_10, Start_15, End_16, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20);
}

void MR_CALL 
mercury__string__foldl2_between_2_8_p_1(
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
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
    MR_Integer _ReplacedCodeUnit_25;

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
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_10 ;
	Index = I_11 ;
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
	J_15  = NextIndex;
	Char_16  = Ch;
	_ReplacedCodeUnit_25  = ReplacedCodeUnit;
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
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Closure_9, (MR_Integer) 1))));
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
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Box STATE_VARIABLE_Acc1_0_12,
  MR_Box * STATE_VARIABLE_Acc1_13,
  MR_Box STATE_VARIABLE_Acc2_0_14,
  MR_Box * STATE_VARIABLE_Acc2_15)
{
  MR_Integer Length_11;

{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_11  = Length;
}
  mercury__string__foldl2_between_8_p_0(TypeInfo_for_A_17, TypeInfo_for_B_18, Closure_7, String_8, (MR_Integer) 0, Length_11, STATE_VARIABLE_Acc1_0_12, STATE_VARIABLE_Acc1_13, STATE_VARIABLE_Acc2_0_14, STATE_VARIABLE_Acc2_15);
}

void MR_CALL 
mercury__string__foldl2_between_8_p_0(
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
  MR_Word Closure_9,
  MR_String String_10,
  MR_Integer Start0_11,
  MR_Integer End0_12,
  MR_Box STATE_VARIABLE_Acc1_0_17,
  MR_Box * STATE_VARIABLE_Acc1_18,
  MR_Box STATE_VARIABLE_Acc2_0_19,
  MR_Box * STATE_VARIABLE_Acc2_20)
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

	Str = String_10 ;
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
  mercury__string__foldl2_between_2_8_p_0(TypeInfo_for_A_23, TypeInfo_for_B_24, Closure_9, String_10, Start_15, End_16, STATE_VARIABLE_Acc1_0_17, STATE_VARIABLE_Acc1_18, STATE_VARIABLE_Acc2_0_19, STATE_VARIABLE_Acc2_20);
}

void MR_CALL 
mercury__string__foldl2_between_2_8_p_0(
  MR_Word TypeInfo_for_A_23,
  MR_Word TypeInfo_for_B_24,
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
    MR_Integer _ReplacedCodeUnit_25;

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
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_10 ;
	Index = I_11 ;
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
	J_15  = NextIndex;
	Char_16  = Ch;
	_ReplacedCodeUnit_25  = ReplacedCodeUnit;
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
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Closure_9, (MR_Integer) 1))));
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
  MR_Word TypeInfo_for_A_12,
  MR_Word Closure_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer Length_8;

{
#define MR_PROC_LABEL mercury__string__foldl_4_p_4

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_8  = Length;
}
  mercury__string__foldl_between_6_p_4(TypeInfo_for_A_12, Closure_5, String_6, (MR_Integer) 0, Length_8, STATE_VARIABLE_Acc_0_9, STATE_VARIABLE_Acc_10, cont, cont_env_ptr);
}

void MR_CALL 
mercury__string__foldl_between_6_p_4(
  MR_Word TypeInfo_for_A_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start0_9,
  MR_Integer End0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15,
  MR_Cont cont,
  void * cont_env_ptr)
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

	Str = String_8 ;
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
  mercury__string__foldl_between_2_6_p_4(TypeInfo_for_A_18, Closure_7, String_8, Start_12, End_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__string__foldl_between_2_6_p_4_1(
  void * env_ptr_arg)
{
  struct mercury__string__foldl_between_2_6_p_4_env_0_s * env_ptr = (struct mercury__string__foldl_between_2_6_p_4_env_0_s *) (env_ptr_arg);

  mercury__string__foldl_between_2_6_p_4((env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_17, (env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__Closure_7, (env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__String_8, (env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__J_12, (env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__End_10, (env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, (env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15, (env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__cont, (env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__string__foldl_between_2_6_p_4(
  MR_Word TypeInfo_for_A_17,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer I_9,
  MR_Integer End_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__string__foldl_between_2_6_p_4_env_0_s env;

  (env).mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_17 = TypeInfo_for_A_17;
  (env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7 = Closure_7;
  (env).mercury__string__foldl_between_2_6_p_4_env_0__String_8 = String_8;
  (env).mercury__string__foldl_between_2_6_p_4_env_0__End_10 = End_10;
  (env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_15;
  (env).mercury__string__foldl_between_2_6_p_4_env_0__cont = cont;
  (env).mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_bool succeeded = (I_9 < (env).mercury__string__foldl_between_2_6_p_4_env_0__End_10);
    MR_Char Char_13;
    MR_Integer _ReplacedCodeUnit_18;

    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__foldl_between_2_6_p_4

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = (env).mercury__string__foldl_between_2_6_p_4_env_0__String_8 ;
	Index = I_9 ;
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
	(env).mercury__string__foldl_between_2_6_p_4_env_0__J_12  = NextIndex;
	Char_13  = Ch;
	_ReplacedCodeUnit_18  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = ((env).mercury__string__foldl_between_2_6_p_4_env_0__J_12 <= (env).mercury__string__foldl_between_2_6_p_4_env_0__End_10);
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7, (MR_Integer) 1))));

      func_0(((MR_Box) ((env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14, &(env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldl_between_2_6_p_4_1, &env);
    }
    else
    {
      *((env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15) = STATE_VARIABLE_Acc_0_14;
      ((env).mercury__string__foldl_between_2_6_p_4_env_0__cont)((env).mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__string__foldl_4_p_3(
  MR_Word TypeInfo_for_A_12,
  MR_Word Closure_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer Length_8;

{
#define MR_PROC_LABEL mercury__string__foldl_4_p_3

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_8  = Length;
}
  mercury__string__foldl_between_6_p_3(TypeInfo_for_A_12, Closure_5, String_6, (MR_Integer) 0, Length_8, STATE_VARIABLE_Acc_0_9, STATE_VARIABLE_Acc_10, cont, cont_env_ptr);
}

void MR_CALL 
mercury__string__foldl_between_6_p_3(
  MR_Word TypeInfo_for_A_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start0_9,
  MR_Integer End0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15,
  MR_Cont cont,
  void * cont_env_ptr)
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

	Str = String_8 ;
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
  mercury__string__foldl_between_2_6_p_3(TypeInfo_for_A_18, Closure_7, String_8, Start_12, End_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15, cont, cont_env_ptr);
}

static void MR_CALL 
mercury__string__foldl_between_2_6_p_3_1(
  void * env_ptr_arg)
{
  struct mercury__string__foldl_between_2_6_p_3_env_0_s * env_ptr = (struct mercury__string__foldl_between_2_6_p_3_env_0_s *) (env_ptr_arg);

  mercury__string__foldl_between_2_6_p_3((env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_17, (env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__Closure_7, (env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__String_8, (env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__J_12, (env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__End_10, (env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, (env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15, (env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__cont, (env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr);
}

void MR_CALL 
mercury__string__foldl_between_2_6_p_3(
  MR_Word TypeInfo_for_A_17,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer I_9,
  MR_Integer End_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15,
  MR_Cont cont,
  void * cont_env_ptr)
{
  struct mercury__string__foldl_between_2_6_p_3_env_0_s env;

  (env).mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_17 = TypeInfo_for_A_17;
  (env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7 = Closure_7;
  (env).mercury__string__foldl_between_2_6_p_3_env_0__String_8 = String_8;
  (env).mercury__string__foldl_between_2_6_p_3_env_0__End_10 = End_10;
  (env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15 = STATE_VARIABLE_Acc_15;
  (env).mercury__string__foldl_between_2_6_p_3_env_0__cont = cont;
  (env).mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr = cont_env_ptr;
  {
    MR_bool succeeded = (I_9 < (env).mercury__string__foldl_between_2_6_p_3_env_0__End_10);
    MR_Char Char_13;
    MR_Integer _ReplacedCodeUnit_18;

    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__foldl_between_2_6_p_3

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = (env).mercury__string__foldl_between_2_6_p_3_env_0__String_8 ;
	Index = I_9 ;
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
	(env).mercury__string__foldl_between_2_6_p_3_env_0__J_12  = NextIndex;
	Char_13  = Ch;
	_ReplacedCodeUnit_18  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = ((env).mercury__string__foldl_between_2_6_p_3_env_0__J_12 <= (env).mercury__string__foldl_between_2_6_p_3_env_0__End_10);
    }
    if (succeeded)
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) ((MR_hl_field(0, (env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7, (MR_Integer) 1))));

      func_0(((MR_Box) ((env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14, &(env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldl_between_2_6_p_3_1, &env);
    }
    else
    {
      *((env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15) = STATE_VARIABLE_Acc_0_14;
      ((env).mercury__string__foldl_between_2_6_p_3_env_0__cont)((env).mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr);
    }
  }
}

MR_bool MR_CALL 
mercury__string__foldl_4_p_2(
  MR_Word TypeInfo_for_A_12,
  MR_Word Closure_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10)
{
  MR_bool succeeded;
  MR_Integer Length_8;

{
#define MR_PROC_LABEL mercury__string__foldl_4_p_2

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_8  = Length;
}
  succeeded = mercury__string__foldl_between_6_p_2(TypeInfo_for_A_12, Closure_5, String_6, (MR_Integer) 0, Length_8, STATE_VARIABLE_Acc_0_9, STATE_VARIABLE_Acc_10);
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__foldl_between_6_p_2(
  MR_Word TypeInfo_for_A_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start0_9,
  MR_Integer End0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
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

	Str = String_8 ;
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
  succeeded = mercury__string__foldl_between_2_6_p_2(TypeInfo_for_A_18, Closure_7, String_8, Start_12, End_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15);
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__foldl_between_2_6_p_2(
  MR_Word TypeInfo_for_A_17,
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
    MR_Integer _ReplacedCodeUnit_18;

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
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_8 ;
	Index = I_9 ;
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
	J_12  = NextIndex;
	Char_13  = Ch;
	_ReplacedCodeUnit_18  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 <= End_10);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Closure_7, (MR_Integer) 1))));
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
  MR_Word TypeInfo_for_A_12,
  MR_Word Closure_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10)
{
  MR_Integer Length_8;

{
#define MR_PROC_LABEL mercury__string__foldl_4_p_1

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_8  = Length;
}
  mercury__string__foldl_between_6_p_0(TypeInfo_for_A_12, Closure_5, String_6, (MR_Integer) 0, Length_8, STATE_VARIABLE_Acc_0_9, STATE_VARIABLE_Acc_10);
}

void MR_CALL 
mercury__string__foldl_between_6_p_0(
  MR_Word TypeInfo_for_A_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start0_9,
  MR_Integer End0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
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

	Str = String_8 ;
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
  mercury__string__foldl_between_2_6_p_1(TypeInfo_for_A_18, Closure_7, String_8, Start_12, End_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15);
}

void MR_CALL 
mercury__string__foldl_between_2_6_p_1(
  MR_Word TypeInfo_for_A_17,
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
    MR_Integer _ReplacedCodeUnit_18;

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
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_8 ;
	Index = I_9 ;
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
	J_12  = NextIndex;
	Char_13  = Ch;
	_ReplacedCodeUnit_18  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 <= End_10);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_16_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Closure_7, (MR_Integer) 1))));
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
  MR_Word TypeInfo_for_A_12,
  MR_Word Closure_5,
  MR_String String_6,
  MR_Box STATE_VARIABLE_Acc_0_9,
  MR_Box * STATE_VARIABLE_Acc_10)
{
  MR_Integer Length_8;

{
#define MR_PROC_LABEL mercury__string__foldl_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_8  = Length;
}
  mercury__string__foldl_between_6_p_1(TypeInfo_for_A_12, Closure_5, String_6, (MR_Integer) 0, Length_8, STATE_VARIABLE_Acc_0_9, STATE_VARIABLE_Acc_10);
}

void MR_CALL 
mercury__string__foldl_between_6_p_1(
  MR_Word TypeInfo_for_A_18,
  MR_Word Closure_7,
  MR_String String_8,
  MR_Integer Start0_9,
  MR_Integer End0_10,
  MR_Box STATE_VARIABLE_Acc_0_14,
  MR_Box * STATE_VARIABLE_Acc_15)
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

	Str = String_8 ;
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
  mercury__string__foldl_between_2_6_p_0(TypeInfo_for_A_18, Closure_7, String_8, Start_12, End_13, STATE_VARIABLE_Acc_0_14, STATE_VARIABLE_Acc_15);
}

void MR_CALL 
mercury__string__foldl_between_2_6_p_0(
  MR_Word TypeInfo_for_A_17,
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
    MR_Integer _ReplacedCodeUnit_18;

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
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_8 ;
	Index = I_9 ;
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
	J_12  = NextIndex;
	Char_13  = Ch;
	_ReplacedCodeUnit_18  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 <= End_10);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_16_16;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Closure_7, (MR_Integer) 1))));
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
  MR_bool succeeded;
  MR_Box B_8;
  MR_Integer Length_20;
  MR_Integer Start_22;
  MR_Integer End_23;
  MR_Integer Var_25;

{
#define MR_PROC_LABEL mercury__string__foldl_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_20  = Length;
}
  succeeded = ((MR_Integer) 0 > (MR_Integer) 0);
  if (succeeded)
    Start_22 = (MR_Integer) 0;
  else
    Start_22 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__string__foldl_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_25  = Length;
}
  succeeded = (Length_20 < Var_25);
  if (succeeded)
    End_23 = Length_20;
  else
    End_23 = Var_25;
  mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(F_5, S_6, Start_22, End_23, A_7, &B_8);
  return B_8;
}

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
  MR_Word Var_19,
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
    MR_Integer _ReplacedCodeUnit_20;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_8 ;
	Index = I_9 ;
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
	J_12  = NextIndex;
	Char_13  = Ch;
	_ReplacedCodeUnit_20  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 <= End_10);
    }
    if (succeeded)
    {
      MR_Box STATE_VARIABLE_Acc_16_16;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_19, (MR_Integer) 1))));
      MR_Integer next_value_of_I_9;
      MR_Box next_value_of_STATE_VARIABLE_Acc_0_14;

      STATE_VARIABLE_Acc_16_16 = func_0(((MR_Box) (Var_19)), ((MR_Box) (MR_Word) (Char_13)), STATE_VARIABLE_Acc_0_14);
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
  MR_String HeadVar__3_3;

  HeadVar__3_3 = mercury__string__word_wrap_separator_3_f_0(Str_4, N_5, (MR_String) "");
  return HeadVar__3_3;
}

MR_String MR_CALL 
mercury__string__word_wrap_separator_3_f_0(
  MR_String Str_5,
  MR_Integer N_6,
  MR_String WordSep0_7)
{
  MR_bool succeeded;
  MR_String Wrapped_8;
  MR_Word Words_9;
  MR_Integer SepLen0_10;
  MR_String WordSep_11;
  MR_Integer SepLen_12;
  MR_Word RevWordsSpacesNls_16;
  MR_Word WordsSpacesNls_17;
  MR_Integer WordStart_22;

  mercury__string__skip_to_next_word_start__ho36_4_p_0(Str_5, (MR_Integer) 0, &WordStart_22);
  mercury__string__words_loop__ho37_4_p_0(Str_5, WordStart_22, &Words_9);
  mercury__string__count_code_points_loop_4_p_0(WordSep0_7, (MR_Integer) 0, (MR_Integer) 0, &SepLen0_10);
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
      MR_String Word_15 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Words_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer WordLen_22;
      MR_Word NewWords_23;
      MR_Integer NewCol_24;
      MR_Word STATE_VARIABLE_RevWordsSpacesNls_36_36;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_CurCol_4;
      MR_Word next_value_of_STATE_VARIABLE_RevWordsSpacesNls_0_6;

      mercury__string__count_code_points_loop_4_p_0(Word_15, (MR_Integer) 0, (MR_Integer) 0, &WordLen_22);
      succeeded = (CurCol_4 == (MR_Integer) 1);
      if (succeeded)
        succeeded = (WordLen_22 < MaxCol_5);
      if (succeeded)
      {
        NewWords_23 = Words_16;
        NewCol_24 = (MR_Integer) ((MR_Unsigned) CurCol_4 + (MR_Unsigned) WordLen_22);
        {
          STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (Word_15));
          MR_hl_field(1, STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (STATE_VARIABLE_RevWordsSpacesNls_0_6));
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
              STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (Word_15));
              MR_hl_field(1, STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (STATE_VARIABLE_RevWordsSpacesNls_0_6));
            }
          else
          {
            MR_Word Var_40;

            {
              Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_40, 0) = ((MR_Box) (Word_15));
              MR_hl_field(1, Var_40, 1) = ((MR_Box) (STATE_VARIABLE_RevWordsSpacesNls_0_6));
            }
            {
              STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
              MR_hl_field(1, STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (Var_40));
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
            NewCol_24 = (MR_Integer) ((MR_Unsigned) Var_42 + (MR_Unsigned) 1);
            {
              Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_45, 0) = ((MR_Box) ((MR_String) " "));
              MR_hl_field(1, Var_45, 1) = ((MR_Box) (STATE_VARIABLE_RevWordsSpacesNls_0_6));
            }
            {
              STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (Word_15));
              MR_hl_field(1, STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (Var_45));
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
                MR_Word Var_48;

                {
                  Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_48, 0) = ((MR_Box) ((MR_String) " "));
                  MR_hl_field(1, Var_48, 1) = ((MR_Box) (STATE_VARIABLE_RevWordsSpacesNls_0_6));
                }
                {
                  STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (Word_15));
                  MR_hl_field(1, STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (Var_48));
                }
              }
              else
              {
                MR_Word Var_52;
                MR_Word Var_53;

                {
                  Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_53, 0) = ((MR_Box) ((MR_String) " "));
                  MR_hl_field(1, Var_53, 1) = ((MR_Box) (STATE_VARIABLE_RevWordsSpacesNls_0_6));
                }
                {
                  Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_52, 0) = ((MR_Box) (Word_15));
                  MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_53));
                }
                {
                  STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
                  MR_hl_field(1, STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (Var_52));
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
                    mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.word_wrap_loop\'/7", (MR_String) "no pieces");
                    return;
                  }
                else
                {
                  LastPiece_30 = ((MR_String) ((MR_hl_field(1, RevPieces_29, (MR_Integer) 0))));
                  Rest_31 = ((MR_Word) ((MR_hl_field(1, RevPieces_29, (MR_Integer) 1))));
                }
                {
                  NewWords_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, NewWords_23, 0) = ((MR_Box) (LastPiece_30));
                  MR_hl_field(1, NewWords_23, 1) = ((MR_Box) (Words_16));
                }
                NewCol_24 = (MR_Integer) 1;
                RestWithSep_32 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_56_95_95_91_50_93_95_48_2_f_in__list_0(WordSep_2, Rest_31);
                mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RestWithSep_32, STATE_VARIABLE_RevWordsSpacesNls_0_6, &STATE_VARIABLE_RevWordsSpacesNls_36_36);
              }
              else
              {
                NewWords_23 = HeadVar__1_1;
                NewCol_24 = (MR_Integer) 1;
                {
                  STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
                  MR_hl_field(1, STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (STATE_VARIABLE_RevWordsSpacesNls_0_6));
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
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_56_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_String Var_12,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_8;
    MR_String Var_13;
    MR_Word * AddrSCCcallarg_9_39;

{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_56_95_95_91_50_93_95_48_2_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = Var_12 ;
	S2 = (MR_String) "\n" ;
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
	Var_13  = S3;
}
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_56_95_95_91_50_93_95_48_2_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = Var_6 ;
	S2 = Var_13 ;
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
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_39 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1)));
    mercury__string__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_56_95_95_91_50_93_95_48_95_95_49_3_p_0(Var_12, Var_7, AddrSCCcallarg_9_39);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__string__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_56_95_95_91_50_93_95_48_95_95_49_3_p_0(
  MR_String Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_40)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_40 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_String Var_8;
      MR_String Var_13;
      MR_Word * AddrSCCcallarg_9_39;
      MR_Word HeadVar__3_41;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_40;

{
#define MR_PROC_LABEL mercury__string__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_56_95_95_91_50_93_95_48_95_95_49_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = Var_12 ;
	S2 = (MR_String) "\n" ;
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
	Var_13  = S3;
}
{
#define MR_PROC_LABEL mercury__string__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_56_95_95_91_50_93_95_48_95_95_49_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = Var_6 ;
	S2 = Var_13 ;
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
        HeadVar__3_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_41, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_41, 1) = NULL;
      }
      AddrSCCcallarg_9_39 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_41, (MR_Integer) 1)));
      *AddrOfHeadVar__3_40 = HeadVar__3_41;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_40 = AddrSCCcallarg_9_39;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_40 = next_value_of_AddrOfHeadVar__3_40;
      continue;
    }
    break;
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
    mercury__string__count_code_points_loop_4_p_0(Str_5, (MR_Integer) 0, (MR_Integer) 0, &Var_11);
    succeeded = (Var_11 <= N_6);
    if (succeeded)
      {
        Strs_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Strs_8, 0) = ((MR_Box) (Str_5));
        MR_hl_field(1, Strs_8, 1) = ((MR_Box) (Prev_7));
      }
    else
    {
      MR_String Left_9;
      MR_String Right_10;
      MR_Word Var_12;
      MR_String next_value_of_Str_5;
      MR_Word next_value_of_Prev_7;

      mercury__string__split_by_code_point_4_p_0(Str_5, N_6, &Left_9, &Right_10);
      {
        Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_12, 0) = ((MR_Box) (Left_9));
        MR_hl_field(1, Var_12, 1) = ((MR_Box) (Prev_7));
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
  MR_String Str_5,
  MR_String Pat_6,
  MR_String Subst_7)
{
  MR_String Result_8;

  mercury__string__replace_all_4_p_0(Str_5, Pat_6, Subst_7, &Result_8);
  return Result_8;
}

void MR_CALL 
mercury__string__replace_all_4_p_0(
  MR_String Str_5,
  MR_String Pat_6,
  MR_String Subst_7,
  MR_String * Result_8)
{
  MR_bool succeeded = (strcmp(Pat_6, (MR_String) "") == 0);

  if (succeeded)
    mercury__string__replace_all_empty_pat_3_p_0(Str_5, Subst_7, Result_8);
  else
  {
    MR_Word SubstPiece_9;
    MR_Word RevPieces_10;
    MR_Word Pieces_11;
    MR_Integer Var_13;
    MR_Integer Var_14;
    MR_Integer BufferLen_19;

{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Subst_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_13  = Length;
}
    {
      SubstPiece_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, SubstPiece_9, 0) = ((MR_Box) (Subst_7));
      MR_hl_field(1, SubstPiece_9, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(1, SubstPiece_9, 2) = ((MR_Box) (Var_13));
    }
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Pat_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_14  = Length;
}
    mercury__string__replace_all_loop_7_p_0(Str_5, Pat_6, Var_14, SubstPiece_9, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &RevPieces_10);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__string__string__type_ctor_info_string_piece_0), RevPieces_10, &Pieces_11);
    mercury__string__sum_piece_lengths_5_p_0((MR_String) "predicate \140string.unsafe_append_string_pieces\'/2", (MR_Integer) 0, Pieces_11, (MR_Integer) 0, &BufferLen_19);
    mercury__string__do_append_string_pieces_3_p_0(Pieces_11, BufferLen_19, Result_8);
  }
}

void MR_CALL 
mercury__string__replace_all_loop_7_p_0(
  MR_String Str_8,
  MR_String Pat_9,
  MR_Integer PatLength_10,
  MR_Word SubstPiece_11,
  MR_Integer BeginAt_12,
  MR_Word RevPieces0_13,
  MR_Word * RevPieces_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer PatStart_15;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__replace_all_loop_7_p_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString = Str_8 ;
	Pattern = Pat_9 ;
	BeginAt = BeginAt_12 ;
		{
{
    char *match = strstr(WholeString + BeginAt, Pattern);
    if (match) {
        Index = match - WholeString;
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	PatStart_15  = Index;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Word InitialPiece_16;
      MR_Word RevPieces1_17;
      MR_Word Var_19;
      MR_Integer Var_20;
      MR_Integer next_value_of_BeginAt_12;
      MR_Word next_value_of_RevPieces0_13;

      {
        InitialPiece_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, InitialPiece_16, 0) = ((MR_Box) (Str_8));
        MR_hl_field(1, InitialPiece_16, 1) = ((MR_Box) (BeginAt_12));
        MR_hl_field(1, InitialPiece_16, 2) = ((MR_Box) (PatStart_15));
      }
      {
        Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_19, 0) = ((MR_Box) (InitialPiece_16));
        MR_hl_field(1, Var_19, 1) = ((MR_Box) (RevPieces0_13));
      }
      {
        RevPieces1_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, RevPieces1_17, 0) = ((MR_Box) (SubstPiece_11));
        MR_hl_field(1, RevPieces1_17, 1) = ((MR_Box) (Var_19));
      }
      Var_20 = (MR_Integer) ((MR_Unsigned) PatStart_15 + (MR_Unsigned) PatLength_10);
      // direct tailcall eliminated
      ;
      next_value_of_BeginAt_12 = Var_20;
      next_value_of_RevPieces0_13 = RevPieces1_17;
      BeginAt_12 = next_value_of_BeginAt_12;
      RevPieces0_13 = next_value_of_RevPieces0_13;
      continue;
    }
    else
    {
      MR_Word TailPiece_18;
      MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__string__replace_all_loop_7_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_21  = Length;
}
      {
        TailPiece_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, TailPiece_18, 0) = ((MR_Box) (Str_8));
        MR_hl_field(1, TailPiece_18, 1) = ((MR_Box) (BeginAt_12));
        MR_hl_field(1, TailPiece_18, 2) = ((MR_Box) (Var_21));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *RevPieces_14 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (TailPiece_18));
        MR_hl_field(1, base, 1) = ((MR_Box) (RevPieces0_13));
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__replace_all_empty_pat_3_p_0(
  MR_String Str_4,
  MR_String Subst_5,
  MR_String * Result_6)
{
  MR_bool succeeded;
  MR_Word Codes0_8;
  MR_Word Codes_9;
  MR_Integer Var_11;
  MR_Integer Var_15;
  MR_String ResultPrime_10;

{
#define MR_PROC_LABEL mercury__string__replace_all_empty_pat_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Subst_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_15  = Length;
}
  mercury__string__to_code_unit_list_loop_4_p_0(Subst_5, (MR_Integer) 0, Var_15, &Codes0_8);
{
#define MR_PROC_LABEL mercury__string__replace_all_empty_pat_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_11  = Length;
}
  mercury__string__replace_all_empty_pat_loop_5_p_0(Str_4, Codes0_8, Var_11, Codes0_8, &Codes_9);
  succeeded = mercury__string__do_from_code_unit_list_3_p_0(Codes_9, (MR_Integer) 0, &ResultPrime_10);
  if (succeeded)
    *Result_6 = ResultPrime_10;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.replace_all_empty_pat\'/3", (MR_String) "string.from_code_unit_list_allow_ill_formed failed");
      return;
    }
}

void MR_CALL 
mercury__string__replace_all_empty_pat_loop_5_p_0(
  MR_String Str_6,
  MR_Word Subst_7,
  MR_Integer Index_8,
  MR_Word Codes0_9,
  MR_Word * Codes_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer PrevIndex_11;
    MR_Char Char_12;
    MR_Integer _ReplacedCodeUnit_20;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__replace_all_empty_pat_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_6 ;
	Index = Index_8 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	PrevIndex_11  = PrevIndex;
	Char_12  = Ch;
	_ReplacedCodeUnit_20  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Integer CharInt_13;
      MR_Word Codes1_14;
      MR_Word Codes2_15;
      MR_Integer next_value_of_Index_8;
      MR_Word next_value_of_Codes0_9;

{
#define MR_PROC_LABEL mercury__string__replace_all_empty_pat_loop_5_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_12 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	CharInt_13  = Int;
}
      succeeded = (CharInt_13 <= (MR_Integer) 127);
      if (succeeded)
        {
          Codes1_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Codes1_14, 0) = ((MR_Box) (CharInt_13));
          MR_hl_field(1, Codes1_14, 1) = ((MR_Box) (Codes0_9));
        }
      else
      {
        MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) Index_8 - (MR_Unsigned) 1);

        mercury__string__prepend_code_units_5_p_0(Str_6, PrevIndex_11, Var_17, Codes0_9, &Codes1_14);
      }
      mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Subst_7, Codes1_14, &Codes2_15);
      // direct tailcall eliminated
      ;
      next_value_of_Index_8 = PrevIndex_11;
      next_value_of_Codes0_9 = Codes2_15;
      Index_8 = next_value_of_Index_8;
      Codes0_9 = next_value_of_Codes0_9;
      continue;
    }
    else
      *Codes_10 = Codes0_9;
    break;
  }
}

void MR_CALL 
mercury__string__prepend_code_units_5_p_0(
  MR_String Str_6,
  MR_Integer FirstIndex_7,
  MR_Integer Index_8,
  MR_Word Codes0_9,
  MR_Word * Codes_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Code_11;
    MR_Word Codes1_12;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__prepend_code_units_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str = Str_6 ;
	Index = Index_8 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	Code_11  = Code;
}
    {
      Codes1_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Codes1_12, 0) = ((MR_Box) (Code_11));
      MR_hl_field(1, Codes1_12, 1) = ((MR_Box) (Codes0_9));
    }
    succeeded = (Index_8 == FirstIndex_7);
    if (succeeded)
      *Codes_10 = Codes1_12;
    else
    {
      MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) Index_8 - (MR_Unsigned) 1);
      MR_Integer next_value_of_Index_8 = Var_13;
      MR_Word next_value_of_Codes0_9 = Codes1_12;

      // direct tailcall eliminated
      ;
      Index_8 = next_value_of_Index_8;
      Codes0_9 = next_value_of_Codes0_9;
      continue;
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
  MR_bool succeeded;
  MR_Integer PatStart_9;
  MR_Word Pieces_10;
  MR_Word Var_11;
  MR_Integer Var_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Integer Var_15;
  MR_Integer Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Integer Var_19;
  MR_Integer Var_20;
  MR_Integer Var_21;
  MR_Word Var_22;
  MR_Word DoCheck_23;
  MR_Integer BufferLen_24;
  MR_String Var_25;
  MR_Integer Var_26;

  succeeded = mercury__string__sub_string_search_3_p_0(Str_5, Pat_6, &PatStart_9);
  if (succeeded)
  {
    Var_12 = (MR_Integer) 0;
    Var_15 = (MR_Integer) 0;
    {
      Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_11, 0) = ((MR_Box) (Str_5));
      MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_12));
      MR_hl_field(1, Var_11, 2) = ((MR_Box) (PatStart_9));
    }
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Subst_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_16  = Length;
}
    {
      Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_14, 0) = ((MR_Box) (Subst_7));
      MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_15));
      MR_hl_field(1, Var_14, 2) = ((MR_Box) (Var_16));
    }
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Pat_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_20  = Length;
}
    Var_19 = (MR_Integer) ((MR_Unsigned) PatStart_9 + (MR_Unsigned) Var_20);
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_21  = Length;
}
    Var_22 = (MR_Word) ((MR_Unsigned) 0U);
    DoCheck_23 = (MR_Integer) 0;
    Var_25 = (MR_String) "predicate \140string.unsafe_append_string_pieces\'/2";
    Var_26 = (MR_Integer) 0;
    {
      Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_18, 0) = ((MR_Box) (Str_5));
      MR_hl_field(1, Var_18, 1) = ((MR_Box) (Var_19));
      MR_hl_field(1, Var_18, 2) = ((MR_Box) (Var_21));
    }
    {
      Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
      MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_13, 0) = ((MR_Box) (Var_14));
      MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_17));
    }
    {
      Pieces_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_10, 0) = ((MR_Box) (Var_11));
      MR_hl_field(1, Pieces_10, 1) = ((MR_Box) (Var_13));
    }
    mercury__string__sum_piece_lengths_5_p_0(Var_25, DoCheck_23, Pieces_10, Var_26, &BufferLen_24);
    mercury__string__do_append_string_pieces_3_p_0(Pieces_10, BufferLen_24, Result_8);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_String MR_CALL 
mercury__string__rstrip_pred_2_f_0(
  MR_Word P_4,
  MR_String S0_5)
{
  MR_String S_6;
  MR_Integer R_7;
  MR_Integer Var_9;
  MR_Integer Var_10;
  MR_Integer End_11;
  MR_Integer Index_12;

{
#define MR_PROC_LABEL mercury__string__rstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S0_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	End_11  = Length;
}
  mercury__string__suffix_length_loop_4_p_0(P_4, S0_5, End_11, &Index_12);
  R_7 = (MR_Integer) ((MR_Unsigned) End_11 - (MR_Unsigned) Index_12);
{
#define MR_PROC_LABEL mercury__string__rstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S0_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_10  = Length;
}
  Var_9 = (MR_Integer) ((MR_Unsigned) Var_10 - (MR_Unsigned) R_7);
{
#define MR_PROC_LABEL mercury__string__rstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = S0_5 ;
	Start = (MR_Integer) 0 ;
	End = Var_9 ;
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
	S_6  = SubString;
}
  return S_6;
}

MR_String MR_CALL 
mercury__string__lstrip_pred_2_f_0(
  MR_Word P_4,
  MR_String S0_5)
{
  MR_String S_6;
  MR_Integer L_7;
  MR_Integer Var_8;

  mercury__string__prefix_length_loop_4_p_0(P_4, S0_5, (MR_Integer) 0, &L_7);
{
#define MR_PROC_LABEL mercury__string__lstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S0_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_8  = Length;
}
{
#define MR_PROC_LABEL mercury__string__lstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = S0_5 ;
	Start = L_7 ;
	End = Var_8 ;
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
	S_6  = SubString;
}
  return S_6;
}

MR_String MR_CALL 
mercury__string__rstrip_1_f_0(
  MR_String S_3)
{
  MR_String HeadVar__2_2;
  MR_Integer R_6;
  MR_Integer Var_8;
  MR_Integer Var_9;
  MR_Integer End_11;
  MR_Integer Index_12;

{
#define MR_PROC_LABEL mercury__string__rstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	End_11  = Length;
}
  mercury__string__suffix_length_loop__ho35_4_p_0(S_3, End_11, &Index_12);
  R_6 = (MR_Integer) ((MR_Unsigned) End_11 - (MR_Unsigned) Index_12);
{
#define MR_PROC_LABEL mercury__string__rstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_9  = Length;
}
  Var_8 = (MR_Integer) ((MR_Unsigned) Var_9 - (MR_Unsigned) R_6);
{
#define MR_PROC_LABEL mercury__string__rstrip_1_f_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = S_3 ;
	Start = (MR_Integer) 0 ;
	End = Var_8 ;
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
	HeadVar__2_2  = SubString;
}
  return HeadVar__2_2;
}

MR_String MR_CALL 
mercury__string__lstrip_1_f_0(
  MR_String S_3)
{
  MR_String HeadVar__2_2;
  MR_Integer L_6;
  MR_Integer Var_7;

  mercury__string__prefix_length_loop__ho34_4_p_0(S_3, (MR_Integer) 0, &L_6);
{
#define MR_PROC_LABEL mercury__string__lstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_7  = Length;
}
{
#define MR_PROC_LABEL mercury__string__lstrip_1_f_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = S_3 ;
	Start = L_6 ;
	End = Var_7 ;
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
	HeadVar__2_2  = SubString;
}
  return HeadVar__2_2;
}

MR_String MR_CALL 
mercury__string__strip_1_f_0(
  MR_String S0_3)
{
  MR_bool succeeded;
  MR_String S_4;
  MR_Integer R_6;
  MR_Integer Start_7;
  MR_Integer End_8;
  MR_Integer Var_11;
  MR_Integer Var_12;
  MR_Integer End_16;
  MR_Integer Index_17;

  mercury__string__prefix_length_loop__ho34_4_p_0(S0_3, (MR_Integer) 0, &Start_7);
{
#define MR_PROC_LABEL mercury__string__strip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S0_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	End_16  = Length;
}
  mercury__string__suffix_length_loop__ho35_4_p_0(S0_3, End_16, &Index_17);
  R_6 = (MR_Integer) ((MR_Unsigned) End_16 - (MR_Unsigned) Index_17);
{
#define MR_PROC_LABEL mercury__string__strip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S0_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_12  = Length;
}
  Var_11 = (MR_Integer) ((MR_Unsigned) Var_12 - (MR_Unsigned) R_6);
  succeeded = (Start_7 > Var_11);
  if (succeeded)
    End_8 = Start_7;
  else
    End_8 = Var_11;
{
#define MR_PROC_LABEL mercury__string__strip_1_f_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = S0_3 ;
	Start = Start_7 ;
	End = End_8 ;
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
	S_4  = SubString;
}
  return S_4;
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
    MR_Word Var_12;
    MR_Integer ReplacedCodeUnit_13;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__suffix_length_loop__ho35_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = S_6 ;
	Index = I_7 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	J_9  = PrevIndex;
	Char_10  = Ch;
	ReplacedCodeUnit_13  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_13 == (MR_Integer) -1);
      if (succeeded)
        Var_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_14;

{
#define MR_PROC_LABEL mercury__string__suffix_length_loop__ho35_4_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_13 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_14  = U8;
}
        {
          Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_Word) (CodeUnit_14));
        }
      }
      succeeded = mercury__string____Unify____maybe_replaced_0_0((MR_Word) ((MR_Unsigned) 0U), Var_12);
      if (succeeded)
        succeeded = mercury__char__is_whitespace_1_p_0(Char_10);
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
    MR_Word Var_12;
    MR_Integer ReplacedCodeUnit_13;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__prefix_length_loop__ho34_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = S_6 ;
	Index = I_7 ;
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
	J_9  = NextIndex;
	Char_10  = Ch;
	ReplacedCodeUnit_13  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_13 == (MR_Integer) -1);
      if (succeeded)
        Var_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_14;

{
#define MR_PROC_LABEL mercury__string__prefix_length_loop__ho34_4_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_13 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_14  = U8;
}
        {
          Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_Word) (CodeUnit_14));
        }
      }
      succeeded = mercury__string____Unify____maybe_replaced_0_0((MR_Word) ((MR_Unsigned) 0U), Var_12);
      if (succeeded)
        succeeded = mercury__char__is_whitespace_1_p_0(Char_10);
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

MR_String MR_CALL 
mercury__string__chomp_1_f_0(
  MR_String S_3)
{
  MR_bool succeeded;
  MR_String Chomp_4;
  MR_Integer Index_5;
  MR_Integer Var_6;
  MR_Char Var_9;
  MR_Integer Len_11;
  MR_Integer Var_12;
  MR_Integer ReplacedCodeUnit_14;

{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S_3 ;
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

	Str = S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_11  = Length;
}
  Var_12 = (MR_Integer) ((MR_Unsigned) Var_6 - (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = Var_12 ;
	Length = Len_11 ;
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
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = S_3 ;
	Index = Var_6 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Index_5  = PrevIndex;
	Var_9  = Ch;
	ReplacedCodeUnit_14  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = ((MR_Char) 10 == Var_9);
  }
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = S_3 ;
	Start = (MR_Integer) 0 ;
	End = Index_5 ;
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
	Chomp_4  = SubString;
}
  }
  else
    Chomp_4 = S_3;
  return Chomp_4;
}

MR_String MR_CALL 
mercury__string__pad_right_3_f_0(
  MR_String S1_5,
  MR_Char C_6,
  MR_Integer N_7)
{
  MR_String S2_8;

  mercury__string__pad_right_4_p_0(S1_5, C_6, N_7, &S2_8);
  return S2_8;
}

void MR_CALL 
mercury__string__pad_right_4_p_0(
  MR_String String0_5,
  MR_Char PadChar_6,
  MR_Integer Width_7,
  MR_String * String_8)
{
  MR_bool succeeded;
  MR_Integer Length_9;

  mercury__string__count_code_points_loop_4_p_0(String0_5, (MR_Integer) 0, (MR_Integer) 0, &Length_9);
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

	S1 = String0_5 ;
	S2 = PadString_11 ;
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

MR_String MR_CALL 
mercury__string__pad_left_3_f_0(
  MR_String S1_5,
  MR_Char C_6,
  MR_Integer N_7)
{
  MR_String S2_8;

  mercury__string__pad_left_4_p_0(S1_5, C_6, N_7, &S2_8);
  return S2_8;
}

void MR_CALL 
mercury__string__pad_left_4_p_0(
  MR_String String0_5,
  MR_Char PadChar_6,
  MR_Integer Width_7,
  MR_String * String_8)
{
  MR_bool succeeded;
  MR_Integer Length_9;

  mercury__string__count_code_points_loop_4_p_0(String0_5, (MR_Integer) 0, (MR_Integer) 0, &Length_9);
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

	S1 = PadString_11 ;
	S2 = String0_5 ;
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

MR_bool MR_CALL 
mercury__string__to_lower_2_p_1(
  MR_String X_1,
  MR_String Y_2)
{
  MR_bool succeeded;
  MR_Integer LenX_13;
  MR_Integer LenY_14;
  MR_Integer Var_15;

{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str = X_1 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	LenX_13  = Length;
}
{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str = Y_2 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	LenY_14  = Length;
}
  succeeded = (LenX_13 == LenY_14);
  if (succeeded)
  {
    Var_15 = (MR_Integer) 0;
    succeeded = mercury__string__check_lower_loop_4_p_0(X_1, Y_2, Var_15, LenX_13);
  }
  return succeeded;
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

	Str = X_5 ;
	Index = Index_7 ;
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

	Str = Y_6 ;
	Index = Index_7 ;
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
mercury__string__to_lower_2_p_0(
  MR_String X_1,
  MR_String * Y_2)
{
{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_0

	MR_String StrIn;
	MR_String StrOut;

	StrIn = X_1 ;
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

MR_String MR_CALL 
mercury__string__to_lower_1_f_0(
  MR_String S1_3)
{
  MR_String S2_4;

{
#define MR_PROC_LABEL mercury__string__to_lower_1_f_0

	MR_String StrIn;
	MR_String StrOut;

	StrIn = S1_3 ;
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

MR_bool MR_CALL 
mercury__string__to_upper_2_p_1(
  MR_String X_1,
  MR_String Y_2)
{
  MR_bool succeeded;
  MR_Integer LenX_13;
  MR_Integer LenY_14;
  MR_Integer Var_15;

{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str = X_1 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	LenX_13  = Length;
}
{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str = Y_2 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	LenY_14  = Length;
}
  succeeded = (LenX_13 == LenY_14);
  if (succeeded)
  {
    Var_15 = (MR_Integer) 0;
    succeeded = mercury__string__check_upper_loop_4_p_0(X_1, Y_2, Var_15, LenX_13);
  }
  return succeeded;
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

	Str = X_5 ;
	Index = Index_7 ;
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

	Str = Y_6 ;
	Index = Index_7 ;
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
  MR_bool succeeded;
  MR_Integer Var_5;
  MR_Integer Var_7;
  MR_Char Var_8;

{
#define MR_PROC_LABEL mercury__string__to_upper_code_unit_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = (MR_Char) 97 ;
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

	Character = Var_8 ;
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

	Character = (MR_Char) 97 ;
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

	Character = (MR_Char) 65 ;
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

void MR_CALL 
mercury__string__to_upper_2_p_0(
  MR_String X_1,
  MR_String * Y_2)
{
{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_0

	MR_String StrIn;
	MR_String StrOut;

	StrIn = X_1 ;
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

MR_String MR_CALL 
mercury__string__to_upper_1_f_0(
  MR_String S1_3)
{
  MR_String S2_4;

{
#define MR_PROC_LABEL mercury__string__to_upper_1_f_0

	MR_String StrIn;
	MR_String StrOut;

	StrIn = S1_3 ;
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

MR_String MR_CALL 
mercury__string__uncapitalize_first_1_f_0(
  MR_String S1_3)
{
  MR_String S2_4;

  mercury__string__uncapitalize_first_2_p_0(S1_3, &S2_4);
  return S2_4;
}

void MR_CALL 
mercury__string__uncapitalize_first_2_p_0(
  MR_String S0_3,
  MR_String * S_4)
{
  MR_bool succeeded;
  MR_Char LowerC_7;
  MR_Char C_6;
  MR_Integer _NextIndex_5;
  MR_Integer _ReplacedCodeUnit_10;
  MR_Char Var_11;

{
#define MR_PROC_LABEL mercury__string__uncapitalize_first_2_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = S0_3 ;
	Index = (MR_Integer) 0 ;
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
	_NextIndex_5  = NextIndex;
	C_6  = Ch;
	_ReplacedCodeUnit_10  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    succeeded = mercury__char__lower_upper_2_p_1(&Var_11, C_6);
    if (succeeded)
      LowerC_7 = Var_11;
    else
      LowerC_7 = C_6;
    succeeded = (C_6 != LowerC_7);
  }
  if (succeeded)
    mercury__string__unsafe_set_char_4_p_0(LowerC_7, (MR_Integer) 0, S0_3, S_4);
  else
    *S_4 = S0_3;
}

MR_String MR_CALL 
mercury__string__capitalize_first_1_f_0(
  MR_String S1_3)
{
  MR_String S2_4;

  mercury__string__capitalize_first_2_p_0(S1_3, &S2_4);
  return S2_4;
}

void MR_CALL 
mercury__string__capitalize_first_2_p_0(
  MR_String S0_3,
  MR_String * S_4)
{
  MR_bool succeeded;
  MR_Char UpperC_7;
  MR_Char C_6;
  MR_Integer _NextIndex_5;
  MR_Integer _ReplacedCodeUnit_10;
  MR_Char Var_11;

{
#define MR_PROC_LABEL mercury__string__capitalize_first_2_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = S0_3 ;
	Index = (MR_Integer) 0 ;
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
	_NextIndex_5  = NextIndex;
	C_6  = Ch;
	_ReplacedCodeUnit_10  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    succeeded = mercury__char__lower_upper_2_p_0(C_6, &Var_11);
    if (succeeded)
      UpperC_7 = Var_11;
    else
      UpperC_7 = C_6;
    succeeded = (C_6 != UpperC_7);
  }
  if (succeeded)
    mercury__string__unsafe_set_char_4_p_0(UpperC_7, (MR_Integer) 0, S0_3, S_4);
  else
    *S_4 = S0_3;
}

MR_String MR_CALL 
mercury__string__add_suffix_2_f_0(
  MR_String Suffix_4,
  MR_String Str_5)
{
  MR_String HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__string__add_suffix_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = Str_5 ;
	S2 = Suffix_4 ;
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

MR_String MR_CALL 
mercury__string__remove_suffix_if_present_2_f_0(
  MR_String Suffix_4,
  MR_String String_5)
{
  MR_bool succeeded;
  MR_String Out_6;
  MR_String Prefix_7;

  succeeded = mercury__string__append_oii_3_p_0(&Prefix_7, Suffix_4, String_5);
  if (succeeded)
    Out_6 = Prefix_7;
  else
    Out_6 = String_5;
  return Out_6;
}

MR_String MR_CALL 
mercury__string__det_remove_suffix_2_f_0(
  MR_String String_4,
  MR_String Suffix_5)
{
  MR_bool succeeded;
  MR_String Prefix_6;
  MR_String PrefixPrime_7;

  succeeded = mercury__string__append_oii_3_p_0(&PrefixPrime_7, Suffix_5, String_4);
  if (succeeded)
    Prefix_6 = PrefixPrime_7;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140string.det_remove_suffix\'/2", (MR_String) "string does not have given suffix");
  return Prefix_6;
}

MR_bool MR_CALL 
mercury__string__remove_suffix_3_p_0(
  MR_String String_4,
  MR_String Suffix_5,
  MR_String * Prefix_6)
{
  MR_bool succeeded;

  succeeded = mercury__string__append_oii_3_p_0(Prefix_6, Suffix_5, String_4);
  return succeeded;
}

MR_String MR_CALL 
mercury__string__remove_prefix_if_present_2_f_0(
  MR_String Prefix_4,
  MR_String String_5)
{
  MR_bool succeeded;
  MR_String Out_6;
  MR_String Suffix_7;

  succeeded = mercury__string__append_ioi_3_p_0(Prefix_4, &Suffix_7, String_5);
  if (succeeded)
    Out_6 = Suffix_7;
  else
    Out_6 = String_5;
  return Out_6;
}

void MR_CALL 
mercury__string__det_remove_prefix_3_p_0(
  MR_String Prefix_4,
  MR_String String_5,
  MR_String * Suffix_6)
{
  MR_bool succeeded;
  MR_String SuffixPrime_7;

  succeeded = mercury__string__append_ioi_3_p_0(Prefix_4, &SuffixPrime_7, String_5);
  if (succeeded)
    *Suffix_6 = SuffixPrime_7;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.det_remove_prefix\'/3", (MR_String) "string does not have the given prefix");
      return;
    }
}

MR_bool MR_CALL 
mercury__string__remove_prefix_3_p_0(
  MR_String Prefix_4,
  MR_String String_5,
  MR_String * Suffix_6)
{
  MR_bool succeeded;

  succeeded = mercury__string__append_ioi_3_p_0(Prefix_4, Suffix_6, String_5);
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__suffix_2_p_0(
  MR_String String_3,
  MR_String Suffix_4)
{
  MR_bool succeeded;
  MR_Integer StringLength_5;
  MR_Integer SuffixLength_6;
  MR_Integer StringStart_7;
  MR_Word Var_10;

{
#define MR_PROC_LABEL mercury__string__suffix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	StringLength_5  = Length;
}
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Suffix_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	SuffixLength_6  = Length;
}
  StringStart_7 = (MR_Integer) ((MR_Unsigned) StringLength_5 - (MR_Unsigned) SuffixLength_6);
  succeeded = mercury__string__compare_substrings_6_p_0(&Var_10, String_3, StringStart_7, Suffix_4, (MR_Integer) 0, SuffixLength_6);
  if (succeeded)
    succeeded = ((MR_Integer) 0 == Var_10);
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__prefix_2_p_0(
  MR_String String_3,
  MR_String Prefix_4)
{
  MR_bool succeeded;
  MR_Integer Var_8;
  MR_Word Var_9;

{
#define MR_PROC_LABEL mercury__string__prefix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Prefix_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_8  = Length;
}
  succeeded = mercury__string__compare_substrings_6_p_0(&Var_9, String_3, (MR_Integer) 0, Prefix_4, (MR_Integer) 0, Var_8);
  if (succeeded)
    succeeded = ((MR_Integer) 0 == Var_9);
  return succeeded;
}

MR_Word MR_CALL 
mercury__string__split_into_lines_1_f_0(
  MR_String Str_3)
{
  MR_Word Lines_4;
  MR_Word RevLines_5;

  mercury__string__split_into_lines_loop_4_p_0(Str_3, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &RevLines_5);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevLines_5, &Lines_4);
  return Lines_4;
}

void MR_CALL 
mercury__string__split_into_lines_loop_4_p_0(
  MR_String Str_5,
  MR_Integer CurPos_6,
  MR_Word STATE_VARIABLE_RevLines_0_12,
  MR_Word * STATE_VARIABLE_RevLines_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer SepPos_8;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__split_into_lines_loop_4_p_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString = Str_5 ;
	Pattern = (MR_String) "\n" ;
	BeginAt = CurPos_6 ;
		{
{
    char *match = strstr(WholeString + BeginAt, Pattern);
    if (match) {
        Index = match - WholeString;
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	SepPos_8  = Index;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String Line_9;
      MR_Word STATE_VARIABLE_RevLines_15_15;
      MR_Integer Var_16;
      MR_Integer next_value_of_CurPos_6;
      MR_Word next_value_of_STATE_VARIABLE_RevLines_0_12;

{
#define MR_PROC_LABEL mercury__string__split_into_lines_loop_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Str_5 ;
	Start = CurPos_6 ;
	End = SepPos_8 ;
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
	Line_9  = SubString;
}
      {
        STATE_VARIABLE_RevLines_15_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevLines_15_15, 0) = ((MR_Box) (Line_9));
        MR_hl_field(1, STATE_VARIABLE_RevLines_15_15, 1) = ((MR_Box) (STATE_VARIABLE_RevLines_0_12));
      }
      Var_16 = (MR_Integer) ((MR_Unsigned) SepPos_8 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_CurPos_6 = Var_16;
      next_value_of_STATE_VARIABLE_RevLines_0_12 = STATE_VARIABLE_RevLines_15_15;
      CurPos_6 = next_value_of_CurPos_6;
      STATE_VARIABLE_RevLines_0_12 = next_value_of_STATE_VARIABLE_RevLines_0_12;
      continue;
    }
    else
    {
      MR_Integer StrLen_10;

{
#define MR_PROC_LABEL mercury__string__split_into_lines_loop_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	StrLen_10  = Length;
}
      succeeded = (CurPos_6 == StrLen_10);
      if (succeeded)
        *STATE_VARIABLE_RevLines_13 = STATE_VARIABLE_RevLines_0_12;
      else
      {
        MR_String LastLine_11;

{
#define MR_PROC_LABEL mercury__string__split_into_lines_loop_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Str_5 ;
	Start = CurPos_6 ;
	End = StrLen_10 ;
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
	LastLine_11  = SubString;
}
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_RevLines_13 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (LastLine_11));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevLines_0_12));
        }
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__string__split_at_string_2_f_0(
  MR_String Separator_4,
  MR_String Str_5)
{
  MR_Word Segments_6;
  MR_Integer Var_7;

{
#define MR_PROC_LABEL mercury__string__split_at_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str = Separator_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_7  = Length;
}
  mercury__string__split_at_string_loop_5_p_0(Separator_4, Var_7, Str_5, (MR_Integer) 0, &Segments_6);
  return Segments_6;
}

void MR_CALL 
mercury__string__split_at_string_loop_5_p_0(
  MR_String Separator_6,
  MR_Integer SeparatorLen_7,
  MR_String Str_8,
  MR_Integer CurPos_9,
  MR_Word * Segments_10)
{
  MR_bool succeeded;
  MR_Integer SepPos_11;

{
#define MR_PROC_LABEL mercury__string__split_at_string_loop_5_p_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString = Str_8 ;
	Pattern = Separator_6 ;
	BeginAt = CurPos_9 ;
		{
{
    char *match = strstr(WholeString + BeginAt, Pattern);
    if (match) {
        Index = match - WholeString;
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	SepPos_11  = Index;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    MR_String HeadSegment_12;
    MR_Integer Var_15;
    MR_Word * AddrTailSegments_18;

{
#define MR_PROC_LABEL mercury__string__split_at_string_loop_5_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Str_8 ;
	Start = CurPos_9 ;
	End = SepPos_11 ;
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
	HeadSegment_12  = SubString;
}
    Var_15 = (MR_Integer) ((MR_Unsigned) SepPos_11 + (MR_Unsigned) SeparatorLen_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Segments_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (HeadSegment_12));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrTailSegments_18 = (MR_Word *) (&(MR_hl_field(1, *Segments_10, (MR_Integer) 1)));
    mercury__string__LCMC__pred__split_at_string_loop__1_5_p_0(Separator_6, SeparatorLen_7, Str_8, Var_15, AddrTailSegments_18);
  }
  else
  {
    MR_String LastSegment_14;
    MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__string__split_at_string_loop_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_16  = Length;
}
{
#define MR_PROC_LABEL mercury__string__split_at_string_loop_5_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Str_8 ;
	Start = CurPos_9 ;
	End = Var_16 ;
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
	LastSegment_14  = SubString;
}
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Segments_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (LastSegment_14));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

void MR_CALL 
mercury__string__LCMC__pred__split_at_string_loop__1_5_p_0(
  MR_String Separator_6,
  MR_Integer SeparatorLen_7,
  MR_String Str_8,
  MR_Integer CurPos_9,
  MR_Word * AddrOfSegments_19)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer SepPos_11;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__LCMC__pred__split_at_string_loop__1_5_p_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString = Str_8 ;
	Pattern = Separator_6 ;
	BeginAt = CurPos_9 ;
		{
{
    char *match = strstr(WholeString + BeginAt, Pattern);
    if (match) {
        Index = match - WholeString;
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	SepPos_11  = Index;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String HeadSegment_12;
      MR_Integer Var_15;
      MR_Word Segments_10;
      MR_Word * AddrTailSegments_18;
      MR_Integer next_value_of_CurPos_9;
      MR_Word * next_value_of_AddrOfSegments_19;

{
#define MR_PROC_LABEL mercury__string__LCMC__pred__split_at_string_loop__1_5_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Str_8 ;
	Start = CurPos_9 ;
	End = SepPos_11 ;
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
	HeadSegment_12  = SubString;
}
      Var_15 = (MR_Integer) ((MR_Unsigned) SepPos_11 + (MR_Unsigned) SeparatorLen_7);
      {
        Segments_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Segments_10, 0) = ((MR_Box) (HeadSegment_12));
        MR_hl_field(1, Segments_10, 1) = NULL;
      }
      AddrTailSegments_18 = (MR_Word *) (&(MR_hl_field(1, Segments_10, (MR_Integer) 1)));
      *AddrOfSegments_19 = Segments_10;
      // direct tailcall eliminated
      ;
      next_value_of_CurPos_9 = Var_15;
      next_value_of_AddrOfSegments_19 = AddrTailSegments_18;
      CurPos_9 = next_value_of_CurPos_9;
      AddrOfSegments_19 = next_value_of_AddrOfSegments_19;
      continue;
    }
    else
    {
      MR_String LastSegment_14;
      MR_Integer Var_16;
      MR_Word Segments_20;

{
#define MR_PROC_LABEL mercury__string__LCMC__pred__split_at_string_loop__1_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_16  = Length;
}
{
#define MR_PROC_LABEL mercury__string__LCMC__pred__split_at_string_loop__1_5_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Str_8 ;
	Start = CurPos_9 ;
	End = Var_16 ;
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
	LastSegment_14  = SubString;
}
      {
        Segments_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Segments_20, 0) = ((MR_Box) (LastSegment_14));
        MR_hl_field(1, Segments_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *AddrOfSegments_19 = Segments_20;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__string__split_at_char_2_f_0(
  MR_Char C_4,
  MR_String String_5)
{
  MR_Word HeadVar__3_3;
  MR_Integer Len_7;

{
#define MR_PROC_LABEL mercury__string__split_at_char_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str = String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_7  = Length;
}
  mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_51_95_95_91_50_93_95_48_6_p_0(C_4, String_5, Len_7, Len_7, (MR_Word) ((MR_Unsigned) 0U), &HeadVar__3_3);
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_51_95_95_91_50_93_95_48_6_p_0(
  MR_Char Var_26,
  MR_String Str_8,
  MR_Integer CurPos_9,
  MR_Integer PastSegEnd_10,
  MR_Word STATE_VARIABLE_Segments_0_17,
  MR_Word * STATE_VARIABLE_Segments_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer PrevPos_12;
    MR_Char Char_13;
    MR_Word MaybeReplaced_14;
    MR_Integer ReplacedCodeUnit_27;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_51_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_8 ;
	Index = CurPos_9 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	PrevPos_12  = PrevIndex;
	Char_13  = Ch;
	ReplacedCodeUnit_27  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_27 == (MR_Integer) -1);
      if (succeeded)
        MaybeReplaced_14 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_28;

{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_51_95_95_91_50_93_95_48_6_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_27 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_28  = U8;
}
        {
          MaybeReplaced_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeReplaced_14, 0) = ((MR_Box) (MR_Word) (CodeUnit_28));
        }
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (MaybeReplaced_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (Var_26 == Char_13);
      if (succeeded)
      {
        MR_String Segment_16;
        MR_Word STATE_VARIABLE_Segments_19_19;
        MR_Integer next_value_of_CurPos_9;
        MR_Integer next_value_of_PastSegEnd_10;
        MR_Word next_value_of_STATE_VARIABLE_Segments_0_17;

{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_51_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Str_8 ;
	Start = CurPos_9 ;
	End = PastSegEnd_10 ;
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
	Segment_16  = SubString;
}
        {
          STATE_VARIABLE_Segments_19_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Segments_19_19, 0) = ((MR_Box) (Segment_16));
          MR_hl_field(1, STATE_VARIABLE_Segments_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Segments_0_17));
        }
        // direct tailcall eliminated
        ;
        next_value_of_CurPos_9 = PrevPos_12;
        next_value_of_PastSegEnd_10 = PrevPos_12;
        next_value_of_STATE_VARIABLE_Segments_0_17 = STATE_VARIABLE_Segments_19_19;
        CurPos_9 = next_value_of_CurPos_9;
        PastSegEnd_10 = next_value_of_PastSegEnd_10;
        STATE_VARIABLE_Segments_0_17 = next_value_of_STATE_VARIABLE_Segments_0_17;
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
      MR_String Segment_25;

{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_51_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Str_8 ;
	Start = (MR_Integer) 0 ;
	End = PastSegEnd_10 ;
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
	Segment_25  = SubString;
}
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Segments_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Segment_25));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Segments_0_17));
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
  MR_Word Segments_6;
  MR_Integer Len_7;

{
#define MR_PROC_LABEL mercury__string__split_at_separator_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_7  = Length;
}
  mercury__string__split_at_separator_loop_6_p_0(DelimP_4, Str_5, Len_7, Len_7, (MR_Word) ((MR_Unsigned) 0U), &Segments_6);
  return Segments_6;
}

void MR_CALL 
mercury__string__split_at_separator_loop_6_p_0(
  MR_Word DelimP_7,
  MR_String Str_8,
  MR_Integer CurPos_9,
  MR_Integer PastSegEnd_10,
  MR_Word STATE_VARIABLE_Segments_0_17,
  MR_Word * STATE_VARIABLE_Segments_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer PrevPos_12;
    MR_Char Char_13;
    MR_Word MaybeReplaced_14;
    MR_Integer ReplacedCodeUnit_26;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__split_at_separator_loop_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_8 ;
	Index = CurPos_9 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	PrevPos_12  = PrevIndex;
	Char_13  = Ch;
	ReplacedCodeUnit_26  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_26 == (MR_Integer) -1);
      if (succeeded)
        MaybeReplaced_14 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_27;

{
#define MR_PROC_LABEL mercury__string__split_at_separator_loop_6_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_26 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_27  = U8;
}
        {
          MaybeReplaced_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeReplaced_14, 0) = ((MR_Box) (MR_Word) (CodeUnit_27));
        }
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);

      succeeded = (MaybeReplaced_14 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, DelimP_7, (MR_Integer) 1))));
        succeeded = func_0(((MR_Box) (DelimP_7)), ((MR_Box) (MR_Word) (Char_13)));
      }
      if (succeeded)
      {
        MR_String Segment_16;
        MR_Word STATE_VARIABLE_Segments_19_19;
        MR_Integer next_value_of_CurPos_9;
        MR_Integer next_value_of_PastSegEnd_10;
        MR_Word next_value_of_STATE_VARIABLE_Segments_0_17;

{
#define MR_PROC_LABEL mercury__string__split_at_separator_loop_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Str_8 ;
	Start = CurPos_9 ;
	End = PastSegEnd_10 ;
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
	Segment_16  = SubString;
}
        {
          STATE_VARIABLE_Segments_19_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_Segments_19_19, 0) = ((MR_Box) (Segment_16));
          MR_hl_field(1, STATE_VARIABLE_Segments_19_19, 1) = ((MR_Box) (STATE_VARIABLE_Segments_0_17));
        }
        // direct tailcall eliminated
        ;
        next_value_of_CurPos_9 = PrevPos_12;
        next_value_of_PastSegEnd_10 = PrevPos_12;
        next_value_of_STATE_VARIABLE_Segments_0_17 = STATE_VARIABLE_Segments_19_19;
        CurPos_9 = next_value_of_CurPos_9;
        PastSegEnd_10 = next_value_of_PastSegEnd_10;
        STATE_VARIABLE_Segments_0_17 = next_value_of_STATE_VARIABLE_Segments_0_17;
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
      MR_String Segment_25;

{
#define MR_PROC_LABEL mercury__string__split_at_separator_loop_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Str_8 ;
	Start = (MR_Integer) 0 ;
	End = PastSegEnd_10 ;
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
	Segment_25  = SubString;
}
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Segments_18 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Segment_25));
        MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_Segments_0_17));
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__string__words_1_f_0(
  MR_String String_3)
{
  MR_Word HeadVar__2_2;
  MR_Integer WordStart_6;

  mercury__string__skip_to_next_word_start__ho36_4_p_0(String_3, (MR_Integer) 0, &WordStart_6);
  mercury__string__words_loop__ho37_4_p_0(String_3, WordStart_6, &HeadVar__2_2);
  return HeadVar__2_2;
}

static void MR_CALL 
mercury__string__words_loop__ho37_4_p_0(
  MR_String String_6,
  MR_Integer WordStartPos_7,
  MR_Word * Words_8)
{
  MR_bool succeeded;
  MR_Integer PastWordEndPos_9;

  mercury__string__skip_to_word_end__ho46_4_p_0(String_6, WordStartPos_7, &PastWordEndPos_9);
  succeeded = (PastWordEndPos_9 == WordStartPos_7);
  if (succeeded)
    *Words_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String HeadWord_10;
    MR_Integer NextWordStartPos_11;

{
#define MR_PROC_LABEL mercury__string__words_loop__ho37_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = String_6 ;
	Start = WordStartPos_7 ;
	End = PastWordEndPos_9 ;
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
    mercury__string__skip_to_next_word_start__ho36_4_p_0(String_6, PastWordEndPos_9, &NextWordStartPos_11);
    succeeded = (PastWordEndPos_9 == NextWordStartPos_11);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Words_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadWord_10));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
    {
      MR_Word * AddrTailWords_14;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Words_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadWord_10));
        MR_hl_field(1, base, 1) = NULL;
      }
      AddrTailWords_14 = (MR_Word *) (&(MR_hl_field(1, *Words_8, (MR_Integer) 1)));
      mercury__string__LCMC__pred__words_loop__ho37__1_4_p_0(String_6, NextWordStartPos_11, AddrTailWords_14);
    }
  }
}

static void MR_CALL 
mercury__string__LCMC__pred__words_loop__ho37__1_4_p_0(
  MR_String String_6,
  MR_Integer WordStartPos_7,
  MR_Word * AddrOfWords_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer PastWordEndPos_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__string__skip_to_word_end__ho46_4_p_0(String_6, WordStartPos_7, &PastWordEndPos_9);
    succeeded = (PastWordEndPos_9 == WordStartPos_7);
    if (succeeded)
      *AddrOfWords_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String HeadWord_10;
      MR_Integer NextWordStartPos_11;

{
#define MR_PROC_LABEL mercury__string__LCMC__pred__words_loop__ho37__1_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = String_6 ;
	Start = WordStartPos_7 ;
	End = PastWordEndPos_9 ;
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
      mercury__string__skip_to_next_word_start__ho36_4_p_0(String_6, PastWordEndPos_9, &NextWordStartPos_11);
      succeeded = (PastWordEndPos_9 == NextWordStartPos_11);
      if (succeeded)
      {
        MR_Word Words_16;

        {
          Words_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Words_16, 0) = ((MR_Box) (HeadWord_10));
          MR_hl_field(1, Words_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *AddrOfWords_15 = Words_16;
      }
      else
      {
        MR_Word * AddrTailWords_14;
        MR_Word Words_17;
        MR_Integer next_value_of_WordStartPos_7;
        MR_Word * next_value_of_AddrOfWords_15;

        {
          Words_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Words_17, 0) = ((MR_Box) (HeadWord_10));
          MR_hl_field(1, Words_17, 1) = NULL;
        }
        AddrTailWords_14 = (MR_Word *) (&(MR_hl_field(1, Words_17, (MR_Integer) 1)));
        *AddrOfWords_15 = Words_17;
        // direct tailcall eliminated
        ;
        next_value_of_WordStartPos_7 = NextWordStartPos_11;
        next_value_of_AddrOfWords_15 = AddrTailWords_14;
        WordStartPos_7 = next_value_of_WordStartPos_7;
        AddrOfWords_15 = next_value_of_AddrOfWords_15;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__string__skip_to_word_end__ho46_4_p_0(
  MR_String String_6,
  MR_Integer CurPos_7,
  MR_Integer * PastWordEndPos_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer NextPos_9;
    MR_Char Char_10;
    MR_Word MaybeReplaced_11;
    MR_Integer ReplacedCodeUnit_12;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__skip_to_word_end__ho46_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_6 ;
	Index = CurPos_7 ;
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
	NextPos_9  = NextIndex;
	Char_10  = Ch;
	ReplacedCodeUnit_12  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_12 == (MR_Integer) -1);
      if (succeeded)
        MaybeReplaced_11 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_13;

{
#define MR_PROC_LABEL mercury__string__skip_to_word_end__ho46_4_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_12 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_13  = U8;
}
        {
          MaybeReplaced_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeReplaced_11, 0) = ((MR_Box) (MR_Word) (CodeUnit_13));
        }
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (MaybeReplaced_11 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
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
mercury__string__skip_to_next_word_start__ho36_4_p_0(
  MR_String String_6,
  MR_Integer CurPos_7,
  MR_Integer * NextWordStartPos_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer NextPos_9;
    MR_Char Char_10;
    MR_Word Var_12;
    MR_Integer ReplacedCodeUnit_13;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__skip_to_next_word_start__ho36_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_6 ;
	Index = CurPos_7 ;
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
	NextPos_9  = NextIndex;
	Char_10  = Ch;
	ReplacedCodeUnit_13  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_13 == (MR_Integer) -1);
      if (succeeded)
        Var_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_14;

{
#define MR_PROC_LABEL mercury__string__skip_to_next_word_start__ho36_4_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_13 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_14  = U8;
}
        {
          Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_Word) (CodeUnit_14));
        }
      }
      succeeded = mercury__string____Unify____maybe_replaced_0_0((MR_Word) ((MR_Unsigned) 0U), Var_12);
      if (succeeded)
        succeeded = mercury__char__is_whitespace_1_p_0(Char_10);
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

MR_Word MR_CALL 
mercury__string__words_separator_2_f_0(
  MR_Word SepP_4,
  MR_String String_5)
{
  MR_Word Words_6;
  MR_Integer WordStart_7;

  mercury__string__skip_to_next_word_start_4_p_0(SepP_4, String_5, (MR_Integer) 0, &WordStart_7);
  mercury__string__words_loop_4_p_0(SepP_4, String_5, WordStart_7, &Words_6);
  return Words_6;
}

void MR_CALL 
mercury__string__words_loop_4_p_0(
  MR_Word SepP_5,
  MR_String String_6,
  MR_Integer WordStartPos_7,
  MR_Word * Words_8)
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

	Str = String_6 ;
	Start = WordStartPos_7 ;
	End = PastWordEndPos_9 ;
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
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Words_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadWord_10));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
    {
      MR_Word * AddrTailWords_14;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Words_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (HeadWord_10));
        MR_hl_field(1, base, 1) = NULL;
      }
      AddrTailWords_14 = (MR_Word *) (&(MR_hl_field(1, *Words_8, (MR_Integer) 1)));
      mercury__string__LCMC__pred__words_loop__1_4_p_0(SepP_5, String_6, NextWordStartPos_11, AddrTailWords_14);
    }
  }
}

void MR_CALL 
mercury__string__LCMC__pred__words_loop__1_4_p_0(
  MR_Word SepP_5,
  MR_String String_6,
  MR_Integer WordStartPos_7,
  MR_Word * AddrOfWords_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer PastWordEndPos_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__string__skip_to_word_end_4_p_0(SepP_5, String_6, WordStartPos_7, &PastWordEndPos_9);
    succeeded = (PastWordEndPos_9 == WordStartPos_7);
    if (succeeded)
      *AddrOfWords_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String HeadWord_10;
      MR_Integer NextWordStartPos_11;

{
#define MR_PROC_LABEL mercury__string__LCMC__pred__words_loop__1_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = String_6 ;
	Start = WordStartPos_7 ;
	End = PastWordEndPos_9 ;
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
        MR_Word Words_16;

        {
          Words_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Words_16, 0) = ((MR_Box) (HeadWord_10));
          MR_hl_field(1, Words_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *AddrOfWords_15 = Words_16;
      }
      else
      {
        MR_Word * AddrTailWords_14;
        MR_Word Words_17;
        MR_Integer next_value_of_WordStartPos_7;
        MR_Word * next_value_of_AddrOfWords_15;

        {
          Words_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Words_17, 0) = ((MR_Box) (HeadWord_10));
          MR_hl_field(1, Words_17, 1) = NULL;
        }
        AddrTailWords_14 = (MR_Word *) (&(MR_hl_field(1, Words_17, (MR_Integer) 1)));
        *AddrOfWords_15 = Words_17;
        // direct tailcall eliminated
        ;
        next_value_of_WordStartPos_7 = NextWordStartPos_11;
        next_value_of_AddrOfWords_15 = AddrTailWords_14;
        WordStartPos_7 = next_value_of_WordStartPos_7;
        AddrOfWords_15 = next_value_of_AddrOfWords_15;
        continue;
      }
    }
    break;
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
    MR_Word MaybeReplaced_11;
    MR_Integer ReplacedCodeUnit_12;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__skip_to_word_end_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_6 ;
	Index = CurPos_7 ;
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
	NextPos_9  = NextIndex;
	Char_10  = Ch;
	ReplacedCodeUnit_12  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_12 == (MR_Integer) -1);
      if (succeeded)
        MaybeReplaced_11 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_13;

{
#define MR_PROC_LABEL mercury__string__skip_to_word_end_4_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_12 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_13  = U8;
}
        {
          MaybeReplaced_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeReplaced_11, 0) = ((MR_Box) (MR_Word) (CodeUnit_13));
        }
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);

      succeeded = (MaybeReplaced_11 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, SepP_5, (MR_Integer) 1))));
        succeeded = func_0(((MR_Box) (SepP_5)), ((MR_Box) (MR_Word) (Char_10)));
      }
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
    MR_Word Var_12;
    MR_Integer ReplacedCodeUnit_13;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__skip_to_next_word_start_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_6 ;
	Index = CurPos_7 ;
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
	NextPos_9  = NextIndex;
	Char_10  = Ch;
	ReplacedCodeUnit_13  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_13 == (MR_Integer) -1);
      if (succeeded)
        Var_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_14;

{
#define MR_PROC_LABEL mercury__string__skip_to_next_word_start_4_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_13 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_14  = U8;
}
        {
          Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_Word) (CodeUnit_14));
        }
      }
      succeeded = mercury__string____Unify____maybe_replaced_0_0((MR_Word) ((MR_Unsigned) 0U), Var_12);
      if (succeeded)
      {
        func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, SepP_5, (MR_Integer) 1))));
        succeeded = func_0(((MR_Box) (SepP_5)), ((MR_Box) (MR_Word) (Char_10)));
      }
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
mercury__string__unsafe_between_4_p_0(
  MR_String Str_1,
  MR_Integer Start_2,
  MR_Integer End_3,
  MR_String * SubString_4)
{
{
#define MR_PROC_LABEL mercury__string__unsafe_between_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Str_1 ;
	Start = Start_2 ;
	End = End_3 ;
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

MR_String MR_CALL 
mercury__string__unsafe_between_3_f_0(
  MR_String Str_5,
  MR_Integer Start_6,
  MR_Integer End_7)
{
  MR_String SubString_8;

{
#define MR_PROC_LABEL mercury__string__unsafe_between_3_f_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Str_5 ;
	Start = Start_6 ;
	End = End_7 ;
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

void MR_CALL 
mercury__string__between_codepoints_4_p_0(
  MR_String Str_5,
  MR_Integer Start_6,
  MR_Integer End_7,
  MR_String * SubString_8)
{
  mercury__string__between_code_points_4_p_0(Str_5, Start_6, End_7, SubString_8);
}

MR_String MR_CALL 
mercury__string__between_codepoints_3_f_0(
  MR_String Str_5,
  MR_Integer Start_6,
  MR_Integer End_7)
{
  MR_String SubString_8;

  mercury__string__between_code_points_4_p_0(Str_5, Start_6, End_7, &SubString_8);
  return SubString_8;
}

MR_String MR_CALL 
mercury__string__between_code_points_3_f_0(
  MR_String Str_5,
  MR_Integer Start_6,
  MR_Integer End_7)
{
  MR_String SubString_8;

  mercury__string__between_code_points_4_p_0(Str_5, Start_6, End_7, &SubString_8);
  return SubString_8;
}

void MR_CALL 
mercury__string__between_code_points_4_p_0(
  MR_String Str_5,
  MR_Integer Start_6,
  MR_Integer End_7,
  MR_String * SubString_8)
{
  MR_bool succeeded = (Start_6 < (MR_Integer) 0);
  MR_Integer StartOffset_9;
  MR_Integer EndOffset_11;

  if (succeeded)
    StartOffset_9 = (MR_Integer) 0;
  else
  {
    MR_Integer StartOffset0_10;
    MR_Integer Length_16;

    succeeded = ((MR_Integer) 0 >= (MR_Integer) 0);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__between_code_points_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_16  = Length;
}
      succeeded = mercury__string__code_point_offset_loop_5_p_0(Str_5, (MR_Integer) 0, Length_16, Start_6, &StartOffset0_10);
    }
    if (succeeded)
      StartOffset_9 = StartOffset0_10;
    else
    {
{
#define MR_PROC_LABEL mercury__string__between_code_points_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	StartOffset_9  = Length;
}
    }
  }
  succeeded = (End_7 < (MR_Integer) 0);
  if (succeeded)
    EndOffset_11 = (MR_Integer) 0;
  else
  {
    MR_Integer EndOffset0_12;
    MR_Integer Length_19;

    succeeded = ((MR_Integer) 0 >= (MR_Integer) 0);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__between_code_points_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_19  = Length;
}
      succeeded = mercury__string__code_point_offset_loop_5_p_0(Str_5, (MR_Integer) 0, Length_19, End_7, &EndOffset0_12);
    }
    if (succeeded)
      EndOffset_11 = EndOffset0_12;
    else
    {
{
#define MR_PROC_LABEL mercury__string__between_code_points_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_5 ;
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

MR_String MR_CALL 
mercury__string__between_3_f_0(
  MR_String Str_5,
  MR_Integer Start_6,
  MR_Integer End_7)
{
  MR_String SubString_8;

  mercury__string__between_4_p_0(Str_5, Start_6, End_7, &SubString_8);
  return SubString_8;
}

void MR_CALL 
mercury__string__right_by_codepoint_3_p_0(
  MR_String String_4,
  MR_Integer RightCount_5,
  MR_String * RightString_6)
{
  MR_Integer TotalCount_7;
  MR_Integer LeftCount_8;
  MR_String _LeftString_9;

  mercury__string__count_code_points_loop_4_p_0(String_4, (MR_Integer) 0, (MR_Integer) 0, &TotalCount_7);
  LeftCount_8 = (MR_Integer) ((MR_Unsigned) TotalCount_7 - (MR_Unsigned) RightCount_5);
  mercury__string__split_by_code_point_4_p_0(String_4, LeftCount_8, &_LeftString_9, RightString_6);
}

MR_String MR_CALL 
mercury__string__right_by_codepoint_2_f_0(
  MR_String String_4,
  MR_Integer RightCount_5)
{
  MR_String RightString_6;
  MR_Integer TotalCount_7;
  MR_Integer LeftCount_8;
  MR_String _LeftString_9;

  mercury__string__count_code_points_loop_4_p_0(String_4, (MR_Integer) 0, (MR_Integer) 0, &TotalCount_7);
  LeftCount_8 = (MR_Integer) ((MR_Unsigned) TotalCount_7 - (MR_Unsigned) RightCount_5);
  mercury__string__split_by_code_point_4_p_0(String_4, LeftCount_8, &_LeftString_9, &RightString_6);
  return RightString_6;
}

void MR_CALL 
mercury__string__right_by_code_point_3_p_0(
  MR_String String_4,
  MR_Integer RightCount_5,
  MR_String * RightString_6)
{
  MR_Integer TotalCount_7;
  MR_Integer LeftCount_8;
  MR_String _LeftString_9;

  mercury__string__count_code_points_loop_4_p_0(String_4, (MR_Integer) 0, (MR_Integer) 0, &TotalCount_7);
  LeftCount_8 = (MR_Integer) ((MR_Unsigned) TotalCount_7 - (MR_Unsigned) RightCount_5);
  mercury__string__split_by_code_point_4_p_0(String_4, LeftCount_8, &_LeftString_9, RightString_6);
}

MR_String MR_CALL 
mercury__string__right_by_code_point_2_f_0(
  MR_String String_4,
  MR_Integer RightCount_5)
{
  MR_String RightString_6;
  MR_Integer TotalCount_7;
  MR_Integer LeftCount_8;
  MR_String _LeftString_9;

  mercury__string__count_code_points_loop_4_p_0(String_4, (MR_Integer) 0, (MR_Integer) 0, &TotalCount_7);
  LeftCount_8 = (MR_Integer) ((MR_Unsigned) TotalCount_7 - (MR_Unsigned) RightCount_5);
  mercury__string__split_by_code_point_4_p_0(String_4, LeftCount_8, &_LeftString_9, &RightString_6);
  return RightString_6;
}

void MR_CALL 
mercury__string__right_3_p_0(
  MR_String String_4,
  MR_Integer RightCount_5,
  MR_String * RightString_6)
{
  MR_Integer Length_7;
  MR_Integer Start_8;

{
#define MR_PROC_LABEL mercury__string__right_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_7  = Length;
}
  Start_8 = (MR_Integer) ((MR_Unsigned) Length_7 - (MR_Unsigned) RightCount_5);
  mercury__string__between_4_p_0(String_4, Start_8, Length_7, RightString_6);
}

MR_String MR_CALL 
mercury__string__right_2_f_0(
  MR_String S1_4,
  MR_Integer N_5)
{
  MR_String S2_6;
  MR_Integer Length_7;
  MR_Integer Start_8;

{
#define MR_PROC_LABEL mercury__string__right_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S1_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_7  = Length;
}
  Start_8 = (MR_Integer) ((MR_Unsigned) Length_7 - (MR_Unsigned) N_5);
  mercury__string__between_4_p_0(S1_4, Start_8, Length_7, &S2_6);
  return S2_6;
}

void MR_CALL 
mercury__string__left_by_codepoint_3_p_0(
  MR_String String_4,
  MR_Integer Count_5,
  MR_String * LeftString_6)
{
  MR_String _RightString_7;

  mercury__string__split_by_code_point_4_p_0(String_4, Count_5, LeftString_6, &_RightString_7);
}

MR_String MR_CALL 
mercury__string__left_by_codepoint_2_f_0(
  MR_String String_4,
  MR_Integer Count_5)
{
  MR_String LeftString_6;
  MR_String _RightString_7;

  mercury__string__split_by_code_point_4_p_0(String_4, Count_5, &LeftString_6, &_RightString_7);
  return LeftString_6;
}

void MR_CALL 
mercury__string__left_by_code_point_3_p_0(
  MR_String String_4,
  MR_Integer Count_5,
  MR_String * LeftString_6)
{
  MR_String _RightString_7;

  mercury__string__split_by_code_point_4_p_0(String_4, Count_5, LeftString_6, &_RightString_7);
}

MR_String MR_CALL 
mercury__string__left_by_code_point_2_f_0(
  MR_String String_4,
  MR_Integer Count_5)
{
  MR_String LeftString_6;
  MR_String _RightString_7;

  mercury__string__split_by_code_point_4_p_0(String_4, Count_5, &LeftString_6, &_RightString_7);
  return LeftString_6;
}

void MR_CALL 
mercury__string__left_3_p_0(
  MR_String String_4,
  MR_Integer Count_5,
  MR_String * LeftString_6)
{
  mercury__string__between_4_p_0(String_4, (MR_Integer) 0, Count_5, LeftString_6);
}

MR_String MR_CALL 
mercury__string__left_2_f_0(
  MR_String S1_4,
  MR_Integer N_5)
{
  MR_String S2_6;

  mercury__string__between_4_p_0(S1_4, (MR_Integer) 0, N_5, &S2_6);
  return S2_6;
}

void MR_CALL 
mercury__string__between_4_p_0(
  MR_String Str_5,
  MR_Integer Start_6,
  MR_Integer End_7,
  MR_String * SubStr_8)
{
  MR_bool succeeded;
  MR_Integer Len_9;
  MR_Integer ClampStart_10;
  MR_Integer ClampEnd_11;

{
#define MR_PROC_LABEL mercury__string__between_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_9  = Length;
}
  succeeded = (Start_6 <= (MR_Integer) 0);
  if (succeeded)
    ClampStart_10 = (MR_Integer) 0;
  else
  {
    succeeded = (Start_6 >= Len_9);
    if (succeeded)
      ClampStart_10 = Len_9;
    else
      ClampStart_10 = Start_6;
  }
  succeeded = (End_7 <= ClampStart_10);
  if (succeeded)
    ClampEnd_11 = ClampStart_10;
  else
  {
    succeeded = (End_7 >= Len_9);
    if (succeeded)
      ClampEnd_11 = Len_9;
    else
      ClampEnd_11 = End_7;
  }
{
#define MR_PROC_LABEL mercury__string__between_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Str_5 ;
	Start = ClampStart_10 ;
	End = ClampEnd_11 ;
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
	*SubStr_8  = SubString;
}
}

void MR_CALL 
mercury__string__split_by_codepoint_4_p_0(
  MR_String Str_5,
  MR_Integer Count_6,
  MR_String * Left_7,
  MR_String * Right_8)
{
  mercury__string__split_by_code_point_4_p_0(Str_5, Count_6, Left_7, Right_8);
}

void MR_CALL 
mercury__string__split_by_code_point_4_p_0(
  MR_String Str_5,
  MR_Integer Count_6,
  MR_String * Left_7,
  MR_String * Right_8)
{
  MR_bool succeeded = ((MR_Integer) 0 >= (MR_Integer) 0);
  MR_Integer Offset_9;
  MR_Integer Length_12;

  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__string__split_by_code_point_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_12  = Length;
}
    succeeded = mercury__string__code_point_offset_loop_5_p_0(Str_5, (MR_Integer) 0, Length_12, Count_6, &Offset_9);
  }
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

void MR_CALL 
mercury__string__split_4_p_0(
  MR_String Str_5,
  MR_Integer Index_6,
  MR_String * Left_7,
  MR_String * Right_8)
{
  MR_bool succeeded = (Index_6 <= (MR_Integer) 0);

  if (succeeded)
  {
    *Left_7 = (MR_String) "";
    *Right_8 = Str_5;
  }
  else
  {
    MR_Integer Len_9;

{
#define MR_PROC_LABEL mercury__string__split_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_9  = Length;
}
    succeeded = (Index_6 >= Len_9);
    if (succeeded)
    {
      *Left_7 = Str_5;
      *Right_8 = (MR_String) "";
    }
    else
    {
{
#define MR_PROC_LABEL mercury__string__split_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Str_5 ;
	Start = (MR_Integer) 0 ;
	End = Index_6 ;
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
	*Left_7  = SubString;
}
{
#define MR_PROC_LABEL mercury__string__split_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Str_5 ;
	Start = Index_6 ;
	End = Len_9 ;
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
	*Right_8  = SubString;
}
    }
  }
}

void MR_CALL 
mercury__string__first_char_3_p_4(
  MR_String * Str_1,
  MR_Char First_2,
  MR_String Rest_3)
{
  mercury__string__first_char_str_out_3_p_0(Str_1, First_2, Rest_3);
}

void MR_CALL 
mercury__string__first_char_str_out_3_p_0(
  MR_String * Str_4,
  MR_Char First_5,
  MR_String Rest_6)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__first_char_str_out_3_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character = First_5 ;
	Int = (MR_Integer) 0 ;
		{

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.first_char_str_out\'/3", (MR_String) "null character");
      return;
    }
  else
  {
    succeeded = mercury__char__is_surrogate_1_p_0(First_5);
    if (succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.first_char_str_out\'/3", (MR_String) "surrogate code point");
        return;
      }
    else
    {
      MR_String Var_12;

      mercury__string__char_to_string_2_p_0(First_5, &Var_12);
{
#define MR_PROC_LABEL mercury__string__first_char_str_out_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = Var_12 ;
	S2 = Rest_6 ;
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
}

void MR_CALL 
mercury__string__char_to_string_2_p_0(
  MR_Char Char_1,
  MR_String * String_2)
{
  MR_bool succeeded;
  MR_Word Var_5;
  MR_String Str0_12;

  {
    Var_5 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_5, 0) = ((MR_Box) (MR_Word) (Char_1));
    MR_hl_field(1, Var_5, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  succeeded = mercury__string__semidet_from_char_list_2_p_0(Var_5, &Str0_12);
  if (succeeded)
    *String_2 = Str0_12;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_char_list\'/2", (MR_String) "null character or surrogate code point in list");
      return;
    }
}

MR_bool MR_CALL 
mercury__string__first_char_3_p_3(
  MR_String Str_1,
  MR_Char * First_2,
  MR_String * Rest_3)
{
  MR_bool succeeded;

  succeeded = mercury__string__first_char_rest_out_3_p_1(Str_1, First_2, Rest_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__first_char_rest_out_3_p_1(
  MR_String Str_4,
  MR_Char * First_5,
  MR_String * Rest_6)
{
  MR_bool succeeded;
  MR_Integer NextIndex_7;
  MR_Char First0_8;
  MR_Integer Var_11;
  MR_Word Var_12;
  MR_Integer Len_13;
  MR_Integer ReplacedCodeUnit_14;

{
#define MR_PROC_LABEL mercury__string__first_char_rest_out_3_p_1

	MR_String Str;
	MR_Integer Length;

	Str = Str_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_13  = Length;
}
{
#define MR_PROC_LABEL mercury__string__first_char_rest_out_3_p_1

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = (MR_Integer) 0 ;
	Length = Len_13 ;
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
#define MR_PROC_LABEL mercury__string__first_char_rest_out_3_p_1

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_4 ;
	Index = (MR_Integer) 0 ;
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
	NextIndex_7  = NextIndex;
	First0_8  = Ch;
	ReplacedCodeUnit_14  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_14 == (MR_Integer) -1);
      if (succeeded)
        Var_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_15;

{
#define MR_PROC_LABEL mercury__string__first_char_rest_out_3_p_1

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_14 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_15  = U8;
}
        {
          Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_Word) (CodeUnit_15));
        }
      }
      succeeded = mercury__string____Unify____maybe_replaced_0_0((MR_Word) ((MR_Unsigned) 0U), Var_12);
      if (succeeded)
      {
        succeeded = mercury__char__is_surrogate_1_p_0(First0_8);
        succeeded = !(succeeded);
        if (succeeded)
        {
          *First_5 = First0_8;
{
#define MR_PROC_LABEL mercury__string__first_char_rest_out_3_p_1

	MR_String Str;
	MR_Integer Length;

	Str = Str_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_11  = Length;
}
{
#define MR_PROC_LABEL mercury__string__first_char_rest_out_3_p_1

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Str_4 ;
	Start = NextIndex_7 ;
	End = Var_11 ;
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
	*Rest_6  = SubString;
}
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__first_char_3_p_2(
  MR_String Str_1,
  MR_Char First_2,
  MR_String * Rest_3)
{
  MR_bool succeeded;

  succeeded = mercury__string__first_char_rest_out_3_p_0(Str_1, First_2, Rest_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__first_char_rest_out_3_p_0(
  MR_String Str_4,
  MR_Char First_5,
  MR_String * Rest_6)
{
  MR_bool succeeded;
  MR_Integer NextIndex_7;
  MR_Char First0_8;
  MR_Integer Var_11;
  MR_Word Var_12;
  MR_Char Var_13;
  MR_Integer Len_14;
  MR_Integer ReplacedCodeUnit_15;

{
#define MR_PROC_LABEL mercury__string__first_char_rest_out_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_14  = Length;
}
{
#define MR_PROC_LABEL mercury__string__first_char_rest_out_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = (MR_Integer) 0 ;
	Length = Len_14 ;
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
#define MR_PROC_LABEL mercury__string__first_char_rest_out_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_4 ;
	Index = (MR_Integer) 0 ;
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
	NextIndex_7  = NextIndex;
	First0_8  = Ch;
	ReplacedCodeUnit_15  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_15 == (MR_Integer) -1);
      if (succeeded)
        Var_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_16;

{
#define MR_PROC_LABEL mercury__string__first_char_rest_out_3_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_15 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_16  = U8;
}
        {
          Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_Word) (CodeUnit_16));
        }
      }
      succeeded = mercury__string____Unify____maybe_replaced_0_0((MR_Word) ((MR_Unsigned) 0U), Var_12);
      if (succeeded)
      {
        succeeded = mercury__char__is_surrogate_1_p_0(First0_8);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_13 = First0_8;
          succeeded = (First_5 == Var_13);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__string__first_char_rest_out_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_11  = Length;
}
{
#define MR_PROC_LABEL mercury__string__first_char_rest_out_3_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = Str_4 ;
	Start = NextIndex_7 ;
	End = Var_11 ;
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
	*Rest_6  = SubString;
}
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__first_char_3_p_1(
  MR_String Str_1,
  MR_Char * First_2,
  MR_String Rest_3)
{
  MR_bool succeeded;

  succeeded = mercury__string__first_char_rest_in_3_p_1(Str_1, First_2, Rest_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__first_char_rest_in_3_p_1(
  MR_String Str_4,
  MR_Char * First_5,
  MR_String Rest_6)
{
  MR_bool succeeded;
  MR_Integer NextIndex_7;
  MR_Char First0_8;
  MR_Word Var_11;
  MR_Integer Var_12;
  MR_Integer Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Integer Len_16;
  MR_Integer ReplacedCodeUnit_17;

{
#define MR_PROC_LABEL mercury__string__first_char_rest_in_3_p_1

	MR_String Str;
	MR_Integer Length;

	Str = Str_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_16  = Length;
}
{
#define MR_PROC_LABEL mercury__string__first_char_rest_in_3_p_1

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = (MR_Integer) 0 ;
	Length = Len_16 ;
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
#define MR_PROC_LABEL mercury__string__first_char_rest_in_3_p_1

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_4 ;
	Index = (MR_Integer) 0 ;
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
	NextIndex_7  = NextIndex;
	First0_8  = Ch;
	ReplacedCodeUnit_17  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_17 == (MR_Integer) -1);
      if (succeeded)
        Var_14 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_18;

{
#define MR_PROC_LABEL mercury__string__first_char_rest_in_3_p_1

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_17 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_18  = U8;
}
        {
          Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_14, 0) = ((MR_Box) (MR_Word) (CodeUnit_18));
        }
      }
      succeeded = mercury__string____Unify____maybe_replaced_0_0((MR_Word) ((MR_Unsigned) 0U), Var_14);
      if (succeeded)
      {
        succeeded = mercury__char__is_surrogate_1_p_0(First0_8);
        succeeded = !(succeeded);
        if (succeeded)
        {
          *First_5 = First0_8;
          Var_11 = (MR_Integer) 0;
          Var_12 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__string__first_char_rest_in_3_p_1

	MR_String Str;
	MR_Integer Length;

	Str = Rest_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_13  = Length;
}
{
#define MR_PROC_LABEL mercury__string__first_char_rest_in_3_p_1

	MR_Word Res;
	MR_String X;
	MR_Integer StartX;
	MR_String Y;
	MR_Integer StartY;
	MR_Integer Length;

	X = Str_4 ;
	StartX = NextIndex_7 ;
	Y = Rest_6 ;
	StartY = Var_12 ;
	Length = Var_13 ;
		{

    int res = memcmp(X + StartX, Y + StartY, Length);
    Res = ((res < 0) ? MR_COMPARE_LESS
        : (res == 0) ? MR_COMPARE_EQUAL
        : MR_COMPARE_GREATER);


		;}
#undef MR_PROC_LABEL
	Var_15  = Res;
}
          succeeded = (Var_11 == Var_15);
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__first_char_3_p_0(
  MR_String Str_1,
  MR_Char First_2,
  MR_String Rest_3)
{
  MR_bool succeeded;

  succeeded = mercury__string__first_char_rest_in_3_p_0(Str_1, First_2, Rest_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__first_char_rest_in_3_p_0(
  MR_String Str_4,
  MR_Char First_5,
  MR_String Rest_6)
{
  MR_bool succeeded;
  MR_Integer NextIndex_7;
  MR_Char First0_8;
  MR_Word Var_11;
  MR_Integer Var_12;
  MR_Integer Var_13;
  MR_Word Var_14;
  MR_Char Var_15;
  MR_Word Var_16;
  MR_Integer Len_17;
  MR_Integer ReplacedCodeUnit_18;

{
#define MR_PROC_LABEL mercury__string__first_char_rest_in_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_17  = Length;
}
{
#define MR_PROC_LABEL mercury__string__first_char_rest_in_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = (MR_Integer) 0 ;
	Length = Len_17 ;
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
#define MR_PROC_LABEL mercury__string__first_char_rest_in_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_4 ;
	Index = (MR_Integer) 0 ;
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
	NextIndex_7  = NextIndex;
	First0_8  = Ch;
	ReplacedCodeUnit_18  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_18 == (MR_Integer) -1);
      if (succeeded)
        Var_14 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_19;

{
#define MR_PROC_LABEL mercury__string__first_char_rest_in_3_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_18 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_19  = U8;
}
        {
          Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_14, 0) = ((MR_Box) (MR_Word) (CodeUnit_19));
        }
      }
      succeeded = mercury__string____Unify____maybe_replaced_0_0((MR_Word) ((MR_Unsigned) 0U), Var_14);
      if (succeeded)
      {
        succeeded = mercury__char__is_surrogate_1_p_0(First0_8);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_15 = First0_8;
          succeeded = (First_5 == Var_15);
          if (succeeded)
          {
            Var_11 = (MR_Integer) 0;
            Var_12 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__string__first_char_rest_in_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Rest_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_13  = Length;
}
{
#define MR_PROC_LABEL mercury__string__first_char_rest_in_3_p_0

	MR_Word Res;
	MR_String X;
	MR_Integer StartX;
	MR_String Y;
	MR_Integer StartY;
	MR_Integer Length;

	X = Str_4 ;
	StartX = NextIndex_7 ;
	Y = Rest_6 ;
	StartY = Var_12 ;
	Length = Var_13 ;
		{

    int res = memcmp(X + StartX, Y + StartY, Length);
    Res = ((res < 0) ? MR_COMPARE_LESS
        : (res == 0) ? MR_COMPARE_EQUAL
        : MR_COMPARE_GREATER);


		;}
#undef MR_PROC_LABEL
	Var_16  = Res;
}
            succeeded = (Var_11 == Var_16);
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__string__unsafe_append_string_pieces_2_p_0(
  MR_Word Pieces_3,
  MR_String * String_4)
{
  MR_Integer BufferLen_6;

  mercury__string__sum_piece_lengths_5_p_0((MR_String) "predicate \140string.unsafe_append_string_pieces\'/2", (MR_Integer) 0, Pieces_3, (MR_Integer) 0, &BufferLen_6);
  mercury__string__do_append_string_pieces_3_p_0(Pieces_3, BufferLen_6, String_4);
}

void MR_CALL 
mercury__string__append_string_pieces_2_p_0(
  MR_Word Pieces_3,
  MR_String * String_4)
{
  MR_Integer BufferLen_6;

  mercury__string__sum_piece_lengths_5_p_0((MR_String) "predicate \140string.append_string_pieces\'/2", (MR_Integer) 1, Pieces_3, (MR_Integer) 0, &BufferLen_6);
  mercury__string__do_append_string_pieces_3_p_0(Pieces_3, BufferLen_6, String_4);
}

MR_String MR_CALL 
mercury__string__join_list_2_f_0(
  MR_String Sep_1,
  MR_Word Strs_2)
{
  MR_String Str_3;

{
#define MR_PROC_LABEL mercury__string__join_list_2_f_0

	MR_String Sep;
	MR_Word Strs;
	MR_String Str;

	Sep = Sep_1 ;
	Strs = Strs_2 ;
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

void MR_CALL 
mercury__string__append_list_2_p_0(
  MR_Word Strs_3,
  MR_String * Str_4)
{
  MR_Word Pieces_5;
  MR_Integer BufferLen_10;

  Pieces_5 = mercury__string__map__ho26_2_f_in__list_0(Strs_3);
  mercury__string__sum_piece_lengths_5_p_0((MR_String) "predicate \140string.unsafe_append_string_pieces\'/2", (MR_Integer) 0, Pieces_5, (MR_Integer) 0, &BufferLen_10);
  mercury__string__do_append_string_pieces_3_p_0(Pieces_5, BufferLen_10, Str_4);
}

static MR_Word MR_CALL 
mercury__string__map__ho26_2_f_in__list_0(
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
#define MR_PROC_LABEL mercury__string__map__ho26_2_f_in__list_0

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
    mercury__string__LCMC__func__map__ho26__1_3_p_0(Var_7, AddrSCCcallarg_9_14);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__string__LCMC__func__map__ho26__1_3_p_0(
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
#define MR_PROC_LABEL mercury__string__LCMC__func__map__ho26__1_3_p_0

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

void MR_CALL 
mercury__string__do_append_string_pieces_3_p_0(
  MR_Word Pieces_4,
  MR_Integer BufferLen_5,
  MR_String * String_6)
{
  MR_bool succeeded;
  MR_Box Buffer0_7;
  MR_Integer End_8;
  MR_Box Buffer_9;

{
#define MR_PROC_LABEL mercury__string__do_append_string_pieces_3_p_0

	MR_Integer Size;
	char * Buffer;

	Size = BufferLen_5 ;
		{

    MR_allocate_aligned_string_msg(Buffer, Size, MR_ALLOC_ID);
    Buffer[Size] = '\0';


		;}
#undef MR_PROC_LABEL
	Buffer0_7  = (MR_Box) Buffer;
}
  mercury__string__foldl2__ho10_6_p_in__list_0(Pieces_4, (MR_Integer) 0, &End_8, Buffer0_7, &Buffer_9);
  succeeded = (End_8 == BufferLen_5);
  if (!(succeeded))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.do_append_string_pieces\'/3", (MR_String) "End != BufferLen");
      return;
    }
{
#define MR_PROC_LABEL mercury__string__do_append_string_pieces_3_p_0

	char * Buffer;
	MR_String Str;

	Buffer = (char *)Buffer_9 ;
		{

    Str = Buffer;


		;}
#undef MR_PROC_LABEL
	*String_6  = Str;
}
}

static void MR_CALL 
mercury__string__foldl2__ho10_6_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4,
  MR_Box HeadVar__5_5,
  MR_Box * HeadVar__6_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__6_6 = HeadVar__5_5;
      *HeadVar__4_4 = HeadVar__3_3;
    }
    else
    {
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_19;
      MR_Box Var_20;
      MR_String Src_24;
      MR_Integer SrcStart_25;
      MR_Integer SrcEnd_26;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_HeadVar__3_3;
      MR_Box next_value_of_HeadVar__5_5;

      if (((MR_tag((MR_Word) Var_13)) == (MR_Integer) 0))
      {
        Src_24 = ((MR_String) ((MR_hl_field(0, Var_13, (MR_Integer) 0))));
        SrcStart_25 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__string__foldl2__ho10_6_p_in__list_0

	MR_String Str;
	MR_Integer Length;

	Str = Src_24 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	SrcEnd_26  = Length;
}
      }
      else
      {
        Src_24 = ((MR_String) ((MR_hl_field(1, Var_13, (MR_Integer) 0))));
        SrcStart_25 = ((MR_Integer) ((MR_hl_field(1, Var_13, (MR_Integer) 1))));
        SrcEnd_26 = ((MR_Integer) ((MR_hl_field(1, Var_13, (MR_Integer) 2))));
      }
{
#define MR_PROC_LABEL mercury__string__foldl2__ho10_6_p_in__list_0

	char * Dest0;
	char * Dest;
	MR_Integer DestOffset0;
	MR_Integer DestOffset;
	MR_String Src;
	MR_Integer SrcStart;
	MR_Integer SrcEnd;

	Dest0 = (char *)HeadVar__5_5 ;
	DestOffset0 = HeadVar__3_3 ;
	Src = Src_24 ;
	SrcStart = SrcStart_25 ;
	SrcEnd = SrcEnd_26 ;
		{

    size_t count;

    MR_CHECK_EXPR_TYPE(Dest0, char *);
    MR_CHECK_EXPR_TYPE(Dest, char *);

    count = SrcEnd - SrcStart;
    Dest = Dest0;
    MR_memcpy(Dest + DestOffset0, Src + SrcStart, count);
    DestOffset = DestOffset0 + count;


		;}
#undef MR_PROC_LABEL
	Var_20  = (MR_Box) Dest;
	Var_19  = DestOffset;
}
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_14;
      next_value_of_HeadVar__3_3 = Var_19;
      next_value_of_HeadVar__5_5 = Var_20;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__string__sum_piece_lengths_5_p_0(
  MR_String PredName_6,
  MR_Word DoCheck_7,
  MR_Word Pieces_8,
  MR_Integer Len0_9,
  MR_Integer * Len_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Pieces_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *Len_10 = Len0_9;
    else
    {
      MR_Word Piece_11 = ((MR_Word) ((MR_hl_field(1, Pieces_8, (MR_Integer) 0))));
      MR_Word TailPieces_12 = ((MR_Word) ((MR_hl_field(1, Pieces_8, (MR_Integer) 1))));
      MR_Integer PieceLen_14;
      MR_Integer Len1_19;
      MR_Word next_value_of_Pieces_8;
      MR_Integer next_value_of_Len0_9;

      if (((MR_tag((MR_Word) Piece_11)) == (MR_Integer) 0))
      {
        MR_String Str_13 = ((MR_String) ((MR_hl_field(0, Piece_11, (MR_Integer) 0))));

{
#define MR_PROC_LABEL mercury__string__sum_piece_lengths_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_13 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	PieceLen_14  = Length;
}
      }
      else
      {
        MR_String BaseStr_15 = ((MR_String) ((MR_hl_field(1, Piece_11, (MR_Integer) 0))));
        MR_Integer Start_16 = ((MR_Integer) ((MR_hl_field(1, Piece_11, (MR_Integer) 1))));
        MR_Integer End_17 = ((MR_Integer) ((MR_hl_field(1, Piece_11, (MR_Integer) 2))));

        switch (DoCheck_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer BaseLen_18;

{
#define MR_PROC_LABEL mercury__string__sum_piece_lengths_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = BaseStr_15 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	BaseLen_18  = Length;
}
              succeeded = (Start_16 >= (MR_Integer) 0);
              if (succeeded)
              {
                succeeded = (Start_16 <= BaseLen_18);
                if (succeeded)
                {
                  succeeded = (End_17 >= Start_16);
                  if (succeeded)
                    succeeded = (End_17 <= BaseLen_18);
                }
              }
              if (!(succeeded))
                {
                  mercury__require__unexpected_2_p_0(PredName_6, (MR_String) "substring index out of range");
                  return;
                }
            }
            break;
        }
        PieceLen_14 = (MR_Integer) ((MR_Unsigned) End_17 - (MR_Unsigned) Start_16);
      }
      Len1_19 = (MR_Integer) ((MR_Unsigned) Len0_9 + (MR_Unsigned) PieceLen_14);
      // direct tailcall eliminated
      ;
      next_value_of_Pieces_8 = TailPieces_12;
      next_value_of_Len0_9 = Len1_19;
      Pieces_8 = next_value_of_Pieces_8;
      Len0_9 = next_value_of_Len0_9;
      continue;
    }
    break;
  }
}

MR_String MR_CALL 
mercury__string__append_list_1_f_0(
  MR_Word Strs_1)
{
  MR_String Str_2;

{
#define MR_PROC_LABEL mercury__string__append_list_1_f_0

	MR_Word Strs;
	MR_String Str;

	Strs = Strs_1 ;
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

MR_String MR_CALL 
mercury__string__f_43_43_2_f_0(
  MR_String S1_4,
  MR_String S2_5)
{
  MR_String HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__string__f_43_43_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = S1_4 ;
	S2 = S2_5 ;
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

void MR_CALL 
mercury__string__nondet_append_3_p_0(
  MR_String * S1_4,
  MR_String * S2_5,
  MR_String S3_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_Integer Len3_7;

{
#define MR_PROC_LABEL mercury__string__nondet_append_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = S3_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len3_7  = Length;
}
  mercury__string__nondet_append_2_5_p_0((MR_Integer) 0, Len3_7, S1_4, S2_5, S3_6, cont, cont_env_ptr);
}

void MR_CALL 
mercury__string__nondet_append_2_5_p_0(
  MR_Integer Start2_6,
  MR_Integer Len3_7,
  MR_String * S1_8,
  MR_String * S2_9,
  MR_String S3_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_non tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__nondet_append_2_5_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = S3_10 ;
	Start = (MR_Integer) 0 ;
	End = Start2_6 ;
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
	*S1_8  = SubString;
}
{
#define MR_PROC_LABEL mercury__string__nondet_append_2_5_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = S3_10 ;
	Start = Start2_6 ;
	End = Len3_7 ;
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
	*S2_9  = SubString;
}
    cont(cont_env_ptr);
    {
      MR_Integer NextStart2_11;
      MR_Char _Char_12;
      MR_Integer _ReplacedCodeUnit_14;
      MR_Integer next_value_of_Start2_6;

{
#define MR_PROC_LABEL mercury__string__nondet_append_2_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = S3_10 ;
	Index = Start2_6 ;
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
	NextStart2_11  = NextIndex;
	_Char_12  = Ch;
	_ReplacedCodeUnit_14  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
        // direct tailcall eliminated
        ;
        next_value_of_Start2_6 = NextStart2_11;
        Start2_6 = next_value_of_Start2_6;
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__string__append_3_p_3(
  MR_String * S1_1,
  MR_String S2_2,
  MR_String S3_3)
{
  MR_bool succeeded;

  succeeded = mercury__string__append_oii_3_p_0(S1_1, S2_2, S3_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__append_oii_3_p_0(
  MR_String * S1_4,
  MR_String S2_5,
  MR_String S3_6)
{
  MR_bool succeeded;
  MR_Integer Len2_7;
  MR_Integer Len3_8;
  MR_Integer Len1_9;
  MR_Word Var_10;
  MR_Integer Var_11;
  MR_Integer Var_12;
  MR_Word Var_13;

{
#define MR_PROC_LABEL mercury__string__append_oii_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = S2_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len2_7  = Length;
}
{
#define MR_PROC_LABEL mercury__string__append_oii_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = S3_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len3_8  = Length;
}
  succeeded = (Len2_7 <= Len3_8);
  if (succeeded)
  {
    Len1_9 = (MR_Integer) ((MR_Unsigned) Len3_8 - (MR_Unsigned) Len2_7);
    Var_10 = (MR_Integer) 0;
    Var_11 = (MR_Integer) 0;
    succeeded = mercury__string__compare_substrings_6_p_0(&Var_13, S3_6, Len1_9, S2_5, Var_11, Len2_7);
    if (succeeded)
    {
      succeeded = (Var_10 == Var_13);
      if (succeeded)
      {
        Var_12 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__string__append_oii_3_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = S3_6 ;
	Start = Var_12 ;
	End = Len1_9 ;
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
	*S1_4  = SubString;
}
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__string__append_3_p_2(
  MR_String S1_1,
  MR_String S2_2,
  MR_String * S3_3)
{
{
#define MR_PROC_LABEL mercury__string__append_3_p_2

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = S1_1 ;
	S2 = S2_2 ;
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

MR_bool MR_CALL 
mercury__string__append_3_p_1(
  MR_String S1_1,
  MR_String * S2_2,
  MR_String S3_3)
{
  MR_bool succeeded;

  succeeded = mercury__string__append_ioi_3_p_0(S1_1, S2_2, S3_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__append_ioi_3_p_0(
  MR_String S1_4,
  MR_String * S2_5,
  MR_String S3_6)
{
  MR_bool succeeded;
  MR_Integer Len1_7;
  MR_Integer Len3_8;
  MR_Word Var_9;
  MR_Integer Var_10;
  MR_Integer Var_11;
  MR_Word Var_12;

{
#define MR_PROC_LABEL mercury__string__append_ioi_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = S1_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len1_7  = Length;
}
{
#define MR_PROC_LABEL mercury__string__append_ioi_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = S3_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len3_8  = Length;
}
  succeeded = (Len1_7 <= Len3_8);
  if (succeeded)
  {
    Var_9 = (MR_Integer) 0;
    Var_10 = (MR_Integer) 0;
    Var_11 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__string__append_ioi_3_p_0

	MR_Word Res;
	MR_String X;
	MR_Integer StartX;
	MR_String Y;
	MR_Integer StartY;
	MR_Integer Length;

	X = S1_4 ;
	StartX = Var_10 ;
	Y = S3_6 ;
	StartY = Var_11 ;
	Length = Len1_7 ;
		{

    int res = memcmp(X + StartX, Y + StartY, Length);
    Res = ((res < 0) ? MR_COMPARE_LESS
        : (res == 0) ? MR_COMPARE_EQUAL
        : MR_COMPARE_GREATER);


		;}
#undef MR_PROC_LABEL
	Var_12  = Res;
}
    succeeded = (Var_9 == Var_12);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__append_ioi_3_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = S3_6 ;
	Start = Len1_7 ;
	End = Len3_8 ;
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
	*S2_5  = SubString;
}
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__append_3_p_0(
  MR_String S1_1,
  MR_String S2_2,
  MR_String S3_3)
{
  MR_bool succeeded;

  succeeded = mercury__string__append_iii_3_p_0(S1_1, S2_2, S3_3);
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__append_iii_3_p_0(
  MR_String S1_4,
  MR_String S2_5,
  MR_String S3_6)
{
  MR_bool succeeded;
  MR_Integer Len1_7;
  MR_Integer Len2_8;
  MR_Integer Len3_9;
  MR_Word Var_10;
  MR_Integer Var_11;
  MR_Integer Var_12;
  MR_Word Var_13;
  MR_Integer Var_14;
  MR_Integer Var_15;
  MR_Word Var_16;
  MR_Word Var_17;

{
#define MR_PROC_LABEL mercury__string__append_iii_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = S1_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len1_7  = Length;
}
{
#define MR_PROC_LABEL mercury__string__append_iii_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = S2_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len2_8  = Length;
}
{
#define MR_PROC_LABEL mercury__string__append_iii_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = S3_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len3_9  = Length;
}
  Var_15 = (MR_Integer) ((MR_Unsigned) Len1_7 + (MR_Unsigned) Len2_8);
  succeeded = (Len3_9 == Var_15);
  if (succeeded)
  {
    Var_10 = (MR_Integer) 0;
    Var_11 = (MR_Integer) 0;
    Var_12 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__string__append_iii_3_p_0

	MR_Word Res;
	MR_String X;
	MR_Integer StartX;
	MR_String Y;
	MR_Integer StartY;
	MR_Integer Length;

	X = S1_4 ;
	StartX = Var_11 ;
	Y = S3_6 ;
	StartY = Var_12 ;
	Length = Len1_7 ;
		{

    int res = memcmp(X + StartX, Y + StartY, Length);
    Res = ((res < 0) ? MR_COMPARE_LESS
        : (res == 0) ? MR_COMPARE_EQUAL
        : MR_COMPARE_GREATER);


		;}
#undef MR_PROC_LABEL
	Var_16  = Res;
}
    succeeded = (Var_10 == Var_16);
    if (succeeded)
    {
      Var_13 = (MR_Integer) 0;
      Var_14 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__string__append_iii_3_p_0

	MR_Word Res;
	MR_String X;
	MR_Integer StartX;
	MR_String Y;
	MR_Integer StartY;
	MR_Integer Length;

	X = S2_5 ;
	StartX = Var_14 ;
	Y = S3_6 ;
	StartY = Len1_7 ;
	Length = Len2_8 ;
		{

    int res = memcmp(X + StartX, Y + StartY, Length);
    Res = ((res < 0) ? MR_COMPARE_LESS
        : (res == 0) ? MR_COMPARE_EQUAL
        : MR_COMPARE_GREATER);


		;}
#undef MR_PROC_LABEL
	Var_17  = Res;
}
      succeeded = (Var_13 == Var_17);
    }
  }
  return succeeded;
}

MR_String MR_CALL 
mercury__string__append_2_f_0(
  MR_String S1_4,
  MR_String S2_5)
{
  MR_String S3_6;

{
#define MR_PROC_LABEL mercury__string__append_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 = S1_4 ;
	S2 = S2_5 ;
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

MR_bool MR_CALL 
mercury__string__unsafe_sub_string_search_start_4_p_0(
  MR_String WholeString_1,
  MR_String Pattern_2,
  MR_Integer BeginAt_3,
  MR_Integer * Index_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__unsafe_sub_string_search_start_4_p_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString = WholeString_1 ;
	Pattern = Pattern_2 ;
	BeginAt = BeginAt_3 ;
		{
{
    char *match = strstr(WholeString + BeginAt, Pattern);
    if (match) {
        Index = match - WholeString;
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
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

MR_bool MR_CALL 
mercury__string__sub_string_search_start_4_p_0(
  MR_String WholeString_5,
  MR_String Pattern_6,
  MR_Integer BeginAt_7,
  MR_Integer * Index_8)
{
  MR_bool succeeded = (BeginAt_7 == (MR_Integer) 0);

  if (!(succeeded))
  {
    MR_Integer Var_10;

    succeeded = (BeginAt_7 > (MR_Integer) 0);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__sub_string_search_start_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = WholeString_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_10  = Length;
}
      succeeded = (BeginAt_7 <= Var_10);
    }
  }
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__string__sub_string_search_start_4_p_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString = WholeString_5 ;
	Pattern = Pattern_6 ;
	BeginAt = BeginAt_7 ;
		{
{
    char *match = strstr(WholeString + BeginAt, Pattern);
    if (match) {
        Index = match - WholeString;
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*Index_8  = Index;
	}
succeeded  = SUCCESS_INDICATOR;
}
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__sub_string_search_3_p_0(
  MR_String WholeString_4,
  MR_String Pattern_5,
  MR_Integer * Index_6)
{
  MR_bool succeeded = MR_TRUE;

  if (!(succeeded))
  {
    MR_Integer Var_9;

    succeeded = ((MR_Integer) 0 > (MR_Integer) 0);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__sub_string_search_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = WholeString_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_9  = Length;
}
      succeeded = ((MR_Integer) 0 <= Var_9);
    }
  }
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__string__sub_string_search_3_p_0

	MR_String WholeString;
	MR_String Pattern;
	MR_Integer BeginAt;
	MR_Integer Index;
	MR_bool SUCCESS_INDICATOR;

	WholeString = WholeString_4 ;
	Pattern = Pattern_5 ;
	BeginAt = (MR_Integer) 0 ;
		{
{
    char *match = strstr(WholeString + BeginAt, Pattern);
    if (match) {
        Index = match - WholeString;
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
}

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*Index_6  = Index;
	}
succeeded  = SUCCESS_INDICATOR;
}
  }
  return succeeded;
}

MR_Integer MR_CALL 
mercury__string__suffix_length_2_f_0(
  MR_Word P_4,
  MR_String S_5)
{
  MR_Integer HeadVar__3_3;
  MR_Integer End_6;
  MR_Integer Index_7;

{
#define MR_PROC_LABEL mercury__string__suffix_length_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S_5 ;
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
    MR_Word Var_12;
    MR_Integer ReplacedCodeUnit_13;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__suffix_length_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = S_6 ;
	Index = I_7 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	J_9  = PrevIndex;
	Char_10  = Ch;
	ReplacedCodeUnit_13  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_13 == (MR_Integer) -1);
      if (succeeded)
        Var_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_14;

{
#define MR_PROC_LABEL mercury__string__suffix_length_loop_4_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_13 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_14  = U8;
}
        {
          Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_Word) (CodeUnit_14));
        }
      }
      succeeded = mercury__string____Unify____maybe_replaced_0_0((MR_Word) ((MR_Unsigned) 0U), Var_12);
      if (succeeded)
      {
        func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));
        succeeded = func_0(((MR_Box) (P_5)), ((MR_Box) (MR_Word) (Char_10)));
      }
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
  MR_Integer Index_6;

  mercury__string__prefix_length_loop_4_p_0(P_4, S_5, (MR_Integer) 0, &Index_6);
  return Index_6;
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
    MR_Word Var_12;
    MR_Integer ReplacedCodeUnit_13;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__prefix_length_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = S_6 ;
	Index = I_7 ;
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
	J_9  = NextIndex;
	Char_10  = Ch;
	ReplacedCodeUnit_13  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_13 == (MR_Integer) -1);
      if (succeeded)
        Var_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_14;

{
#define MR_PROC_LABEL mercury__string__prefix_length_loop_4_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_13 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_14  = U8;
}
        {
          Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_12, 0) = ((MR_Box) (MR_Word) (CodeUnit_14));
        }
      }
      succeeded = mercury__string____Unify____maybe_replaced_0_0((MR_Word) ((MR_Unsigned) 0U), Var_12);
      if (succeeded)
      {
        func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, P_5, (MR_Integer) 1))));
        succeeded = func_0(((MR_Box) (P_5)), ((MR_Box) (MR_Word) (Char_10)));
      }
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

MR_bool MR_CALL 
mercury__string____Unify____maybe_replaced_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    uint8_t ArgX1_5 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0)));
    uint8_t ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((uint8_t) (MR_Word) (MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0)));
      succeeded = (ArgX1_5 == ArgY1_6);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__string__compare_ignore_case_ascii_3_p_0(
  MR_Word * Res_4,
  MR_String X_5,
  MR_String Y_6)
{
  MR_bool succeeded;
  MR_Integer LenX_7;
  MR_Integer LenY_8;
  MR_Integer CommonLen_9;
  MR_Word Res0_10;

{
#define MR_PROC_LABEL mercury__string__compare_ignore_case_ascii_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = X_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	LenX_7  = Length;
}
{
#define MR_PROC_LABEL mercury__string__compare_ignore_case_ascii_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Y_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	LenY_8  = Length;
}
  succeeded = (LenX_7 < LenY_8);
  if (succeeded)
    CommonLen_9 = LenX_7;
  else
    CommonLen_9 = LenY_8;
  mercury__string__compare_ignore_case_ascii_loop_5_p_0(X_5, Y_6, (MR_Integer) 0, CommonLen_9, &Res0_10);
  switch (Res0_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *Res_4 = Res0_10;
      break;
    case (MR_Integer) 0:
      {
        succeeded = (LenX_7 < LenY_8);
        if (succeeded)
          *Res_4 = (MR_Integer) 1;
        else
        {
          succeeded = (LenX_7 == LenY_8);
          if (succeeded)
            *Res_4 = (MR_Integer) 0;
          else
            *Res_4 = (MR_Integer) 2;
        }
      }
      break;
  }
}

void MR_CALL 
mercury__string__compare_ignore_case_ascii_loop_5_p_0(
  MR_String X_6,
  MR_String Y_7,
  MR_Integer I_8,
  MR_Integer CommonLen_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_8 == CommonLen_9);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *Res_10 = (MR_Integer) 0;
    else
    {
      MR_Integer CodeX_11;
      MR_Integer CodeY_12;
      MR_Integer LowerCodeX_13;
      MR_Integer LowerCodeY_14;
      MR_Word Res0_15;

{
#define MR_PROC_LABEL mercury__string__compare_ignore_case_ascii_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str = X_6 ;
	Index = I_8 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	CodeX_11  = Code;
}
{
#define MR_PROC_LABEL mercury__string__compare_ignore_case_ascii_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str = Y_7 ;
	Index = I_8 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	CodeY_12  = Code;
}
      mercury__string__to_lower_code_unit_2_p_0(CodeX_11, &LowerCodeX_13);
      mercury__string__to_lower_code_unit_2_p_0(CodeY_12, &LowerCodeY_14);
      succeeded = (LowerCodeX_13 < LowerCodeY_14);
      if (succeeded)
        Res0_15 = (MR_Integer) 1;
      else
      {
        succeeded = (LowerCodeX_13 == LowerCodeY_14);
        if (succeeded)
          Res0_15 = (MR_Integer) 0;
        else
          Res0_15 = (MR_Integer) 2;
      }
      switch (Res0_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          *Res_10 = Res0_15;
          break;
        case (MR_Integer) 0:
          {
            MR_Integer Var_16 = (MR_Integer) ((MR_Unsigned) I_8 + (MR_Unsigned) 1);
            MR_Integer next_value_of_I_8 = Var_16;

            // direct tailcall eliminated
            ;
            I_8 = next_value_of_I_8;
            continue;
          }
          break;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__string__to_lower_code_unit_2_p_0(
  MR_Integer Code0_3,
  MR_Integer * Code_4)
{
  MR_bool succeeded;
  MR_Integer Var_5;
  MR_Integer Var_7;
  MR_Char Var_8;

{
#define MR_PROC_LABEL mercury__string__to_lower_code_unit_2_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = (MR_Char) 65 ;
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

	Character = Var_8 ;
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

	Character = (MR_Char) 65 ;
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

	Character = (MR_Char) 97 ;
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

void MR_CALL 
mercury__string__unsafe_compare_substrings_6_p_0(
  MR_Word * Res_1,
  MR_String X_2,
  MR_Integer StartX_3,
  MR_String Y_4,
  MR_Integer StartY_5,
  MR_Integer Length_6)
{
{
#define MR_PROC_LABEL mercury__string__unsafe_compare_substrings_6_p_0

	MR_Word Res;
	MR_String X;
	MR_Integer StartX;
	MR_String Y;
	MR_Integer StartY;
	MR_Integer Length;

	X = X_2 ;
	StartX = StartX_3 ;
	Y = Y_4 ;
	StartY = StartY_5 ;
	Length = Length_6 ;
		{

    int res = memcmp(X + StartX, Y + StartY, Length);
    Res = ((res < 0) ? MR_COMPARE_LESS
        : (res == 0) ? MR_COMPARE_EQUAL
        : MR_COMPARE_GREATER);


		;}
#undef MR_PROC_LABEL
	*Res_1  = Res;
}
}

MR_bool MR_CALL 
mercury__string__compare_substrings_6_p_0(
  MR_Word * Res_7,
  MR_String X_8,
  MR_Integer StartX_9,
  MR_String Y_10,
  MR_Integer StartY_11,
  MR_Integer Length_12)
{
  MR_bool succeeded;
  MR_Integer LengthX_13;
  MR_Integer LengthY_14;
  MR_Integer Var_16;
  MR_Integer Var_17;
  MR_Integer Var_18;
  MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__string__compare_substrings_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str = X_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	LengthX_13  = Length;
}
{
#define MR_PROC_LABEL mercury__string__compare_substrings_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Y_10 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	LengthY_14  = Length;
}
  succeeded = (Length_12 >= (MR_Integer) 0);
  if (succeeded)
  {
    Var_16 = (MR_Integer) 0;
    succeeded = (StartX_9 >= Var_16);
    if (succeeded)
    {
      Var_17 = (MR_Integer) 0;
      succeeded = (StartY_11 >= Var_17);
      if (succeeded)
      {
        Var_18 = (MR_Integer) ((MR_Unsigned) StartX_9 + (MR_Unsigned) Length_12);
        succeeded = (Var_18 <= LengthX_13);
        if (succeeded)
        {
          Var_19 = (MR_Integer) ((MR_Unsigned) StartY_11 + (MR_Unsigned) Length_12);
          succeeded = (Var_19 <= LengthY_14);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__string__compare_substrings_6_p_0

	MR_Word Res;
	MR_String X;
	MR_Integer StartX;
	MR_String Y;
	MR_Integer StartY;
	MR_Integer Length;

	X = X_8 ;
	StartX = StartX_9 ;
	Y = Y_10 ;
	StartY = StartY_11 ;
	Length = Length_12 ;
		{

    int res = memcmp(X + StartX, Y + StartY, Length);
    Res = ((res < 0) ? MR_COMPARE_LESS
        : (res == 0) ? MR_COMPARE_EQUAL
        : MR_COMPARE_GREATER);


		;}
#undef MR_PROC_LABEL
	*Res_7  = Res;
}
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__contains_char_2_p_0(
  MR_String Str_1,
  MR_Char Ch_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__contains_char_2_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_1 ;
	Ch = Ch_2 ;
		{

    char    buf[5];
    size_t  len;
    if (MR_is_ascii(Ch)) {
        // Fast path.
        // strchr always returns true when searching for NUL,
        // but the NUL is not part of the string itself.
        SUCCESS_INDICATOR = (Ch != '\0') && (strchr(Str, Ch) != NULL);
    } else {
        len = MR_utf8_encode(buf, Ch);
        buf[len] = '\0';
        SUCCESS_INDICATOR = (len > 0) && (strstr(Str, buf) != NULL);
    }


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__contains_match_2_p_0(
  MR_Word P_3,
  MR_String String_4)
{
  MR_bool succeeded;

  succeeded = mercury__string__contains_match_loop_3_p_0(P_3, String_4, (MR_Integer) 0);
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__contains_match_loop_3_p_0(
  MR_Word P_4,
  MR_String String_5,
  MR_Integer Cur_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Next_7;
    MR_Char Char_8;
    MR_Word MaybeReplaced_9;
    MR_Integer ReplacedCodeUnit_10;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);

    // setup for model_semi tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__contains_match_loop_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_5 ;
	Index = Cur_6 ;
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
	Next_7  = NextIndex;
	Char_8  = Ch;
	ReplacedCodeUnit_10  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_10 == (MR_Integer) -1);
      if (succeeded)
        MaybeReplaced_9 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_11;

{
#define MR_PROC_LABEL mercury__string__contains_match_loop_3_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_10 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_11  = U8;
}
        {
          MaybeReplaced_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeReplaced_9, 0) = ((MR_Box) (MR_Word) (CodeUnit_11));
        }
      }
      succeeded = (MaybeReplaced_9 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, P_4, (MR_Integer) 1))));
        succeeded = func_0(((MR_Box) (P_4)), ((MR_Box) (MR_Word) (Char_8)));
      }
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Integer next_value_of_Cur_6 = Next_7;

        // direct tailcall eliminated
        ;
        Cur_6 = next_value_of_Cur_6;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__string__all_match_2_p_0(
  MR_Word P_3,
  MR_String String_4)
{
  MR_bool succeeded;

  succeeded = mercury__string__all_match_loop_3_p_0(P_3, String_4, (MR_Integer) 0);
  return succeeded;
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
    MR_Word MaybeReplaced_9;
    MR_Integer ReplacedCodeUnit_10;

    // setup for model_semi tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__all_match_loop_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_5 ;
	Index = Cur_6 ;
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
	Next_7  = NextIndex;
	Char_8  = Ch;
	ReplacedCodeUnit_10  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_10 == (MR_Integer) -1);
      if (succeeded)
        MaybeReplaced_9 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_11;

{
#define MR_PROC_LABEL mercury__string__all_match_loop_3_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_10 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_11  = U8;
}
        {
          MaybeReplaced_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeReplaced_9, 0) = ((MR_Box) (MR_Word) (CodeUnit_11));
        }
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box);
      MR_Integer next_value_of_Cur_6;

      succeeded = (MaybeReplaced_9 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, P_4, (MR_Integer) 1))));
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
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__is_all_digits_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = S_1 ;
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
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__is_all_alnum_or_underscore_1_p_0(
  MR_String S_1)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__is_all_alnum_or_underscore_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = S_1 ;
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
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__is_all_alpha_or_underscore_1_p_0(
  MR_String S_1)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__is_all_alpha_or_underscore_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = S_1 ;
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
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__is_all_alnum_1_p_0(
  MR_String S_2)
{
  MR_bool succeeded;

  succeeded = mercury__string__all_match_loop__ho32_3_p_0(S_2, (MR_Integer) 0);
  return succeeded;
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
    MR_Word MaybeReplaced_9;
    MR_Integer ReplacedCodeUnit_10;

    // setup for model_semi tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__all_match_loop__ho32_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_5 ;
	Index = Cur_6 ;
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
	Next_7  = NextIndex;
	Char_8  = Ch;
	ReplacedCodeUnit_10  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_10 == (MR_Integer) -1);
      if (succeeded)
        MaybeReplaced_9 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_11;

{
#define MR_PROC_LABEL mercury__string__all_match_loop__ho32_3_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_10 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_11  = U8;
}
        {
          MaybeReplaced_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeReplaced_9, 0) = ((MR_Box) (MR_Word) (CodeUnit_11));
        }
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer next_value_of_Cur_6;

      succeeded = (MaybeReplaced_9 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
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
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__is_all_alpha_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = S_1 ;
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
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__is_well_formed_1_p_0(
  MR_String S_1)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__is_well_formed_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S = S_1 ;
		{

    SUCCESS_INDICATOR = MR_utf8_verify(S);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__is_empty_1_p_0(
  MR_String HeadVar__1_1)
{
  MR_bool succeeded = (strcmp(HeadVar__1_1, (MR_String) "") == 0);

  return succeeded;
}

MR_Integer MR_CALL 
mercury__string__hash6_1_f_0(
  MR_String String_3)
{
  MR_Integer HashVal_4;
  MR_Integer Length_5;
  MR_Integer HashVal1_6;

{
#define MR_PROC_LABEL mercury__string__hash6_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
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
      MR_Integer Var_21;
      MR_Integer Var_22;
      MR_Integer Var_26;
      MR_Integer Var_27;
      MR_Integer next_value_of_Index_7;
      MR_Integer next_value_of_STATE_VARIABLE_HashVal_0_11;

{
#define MR_PROC_LABEL mercury__string__hash6_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str = String_6 ;
	Index = Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	C_10  = Code;
}
      Var_14 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_HashVal_0_11 * (MR_Unsigned) 49);
      Var_22 = ((MR_Integer) 1 << 30);
      Var_21 = (MR_Integer) ((MR_Unsigned) Var_22 - (MR_Unsigned) 1);
      STATE_VARIABLE_HashVal_13_13 = (Var_14 & Var_21);
      Var_17 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_HashVal_13_13 + (MR_Unsigned) C_10);
      Var_27 = ((MR_Integer) 1 << 30);
      Var_26 = (MR_Integer) ((MR_Unsigned) Var_27 - (MR_Unsigned) 1);
      STATE_VARIABLE_HashVal_16_16 = (Var_17 & Var_26);
      Var_18 = (MR_Integer) ((MR_Unsigned) Index_7 + (MR_Unsigned) 1);
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
  MR_Integer HashVal_4;
  MR_Integer Length_5;
  MR_Integer HashVal1_6;

{
#define MR_PROC_LABEL mercury__string__hash5_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
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
      MR_Integer Var_21;
      MR_Integer Var_22;
      MR_Integer Var_26;
      MR_Integer Var_27;
      MR_Integer next_value_of_Index_7;
      MR_Integer next_value_of_STATE_VARIABLE_HashVal_0_11;

{
#define MR_PROC_LABEL mercury__string__hash5_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str = String_6 ;
	Index = Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	C_10  = Code;
}
      Var_14 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_HashVal_0_11 * (MR_Unsigned) 37);
      Var_22 = ((MR_Integer) 1 << 30);
      Var_21 = (MR_Integer) ((MR_Unsigned) Var_22 - (MR_Unsigned) 1);
      STATE_VARIABLE_HashVal_13_13 = (Var_14 & Var_21);
      Var_17 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_HashVal_13_13 + (MR_Unsigned) C_10);
      Var_27 = ((MR_Integer) 1 << 30);
      Var_26 = (MR_Integer) ((MR_Unsigned) Var_27 - (MR_Unsigned) 1);
      STATE_VARIABLE_HashVal_16_16 = (Var_17 & Var_26);
      Var_18 = (MR_Integer) ((MR_Unsigned) Index_7 + (MR_Unsigned) 1);
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
  MR_Integer HashVal_4;
  MR_Integer Length_5;
  MR_Integer HashVal1_6;

{
#define MR_PROC_LABEL mercury__string__hash4_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
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

void MR_CALL 
mercury__string__hash4_loop_5_p_0(
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
      MR_Integer Var_15;
      MR_Integer STATE_VARIABLE_HashVal_17_17;
      MR_Integer Var_18;
      MR_Integer Var_21;
      MR_Integer Var_22;
      MR_Integer next_value_of_Index_7;
      MR_Integer next_value_of_STATE_VARIABLE_HashVal_0_11;

{
#define MR_PROC_LABEL mercury__string__hash4_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str = String_6 ;
	Index = Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	C_10  = Code;
}
      Var_15 = (STATE_VARIABLE_HashVal_0_11 << 5);
      Var_14 = (STATE_VARIABLE_HashVal_0_11 ^ Var_15);
      Var_22 = ((MR_Integer) 1 << 30);
      Var_21 = (MR_Integer) ((MR_Unsigned) Var_22 - (MR_Unsigned) 1);
      STATE_VARIABLE_HashVal_13_13 = (Var_14 & Var_21);
      STATE_VARIABLE_HashVal_17_17 = (STATE_VARIABLE_HashVal_13_13 ^ C_10);
      Var_18 = (MR_Integer) ((MR_Unsigned) Index_7 + (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_Index_7 = Var_18;
      next_value_of_STATE_VARIABLE_HashVal_0_11 = STATE_VARIABLE_HashVal_17_17;
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
mercury__string__hash3_1_f_0(
  MR_String String_3)
{
  MR_Integer HashVal_4;
  MR_Integer Length_5;
  MR_Integer HashVal1_6;

{
#define MR_PROC_LABEL mercury__string__hash3_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
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

	Str = String_6 ;
	Index = Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	C_10  = Code;
}
      STATE_VARIABLE_HashVal_13_13 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_HashVal_0_11 * (MR_Unsigned) 49);
      STATE_VARIABLE_HashVal_15_15 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_HashVal_13_13 + (MR_Unsigned) C_10);
      Var_16 = (MR_Integer) ((MR_Unsigned) Index_7 + (MR_Unsigned) 1);
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
  MR_Integer HashVal_4;
  MR_Integer Length_5;
  MR_Integer HashVal1_6;

{
#define MR_PROC_LABEL mercury__string__hash2_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
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

	Str = String_6 ;
	Index = Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	C_10  = Code;
}
      STATE_VARIABLE_HashVal_13_13 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_HashVal_0_11 * (MR_Unsigned) 37);
      STATE_VARIABLE_HashVal_15_15 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_HashVal_13_13 + (MR_Unsigned) C_10);
      Var_16 = (MR_Integer) ((MR_Unsigned) Index_7 + (MR_Unsigned) 1);
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
  MR_Integer Length_5;
  MR_Integer HashVal1_6;

{
#define MR_PROC_LABEL mercury__string__hash_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_5  = Length;
}
  mercury__string__hash_loop_5_p_0(String_3, (MR_Integer) 0, Length_5, (MR_Integer) 0, &HashVal1_6);
  *HashVal_4 = (HashVal1_6 ^ Length_5);
}

MR_Integer MR_CALL 
mercury__string__hash_1_f_0(
  MR_String String_3)
{
  MR_Integer HashVal_4;
  MR_Integer Length_5;
  MR_Integer HashVal1_6;

{
#define MR_PROC_LABEL mercury__string__hash_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_5  = Length;
}
  mercury__string__hash_loop_5_p_0(String_3, (MR_Integer) 0, Length_5, (MR_Integer) 0, &HashVal1_6);
  HashVal_4 = (HashVal1_6 ^ Length_5);
  return HashVal_4;
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

	Str = String_6 ;
	Index = Index_7 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	C_10  = Code;
}
      Var_14 = (STATE_VARIABLE_HashVal_0_11 << 5);
      STATE_VARIABLE_HashVal_13_13 = (STATE_VARIABLE_HashVal_0_11 ^ Var_14);
      STATE_VARIABLE_HashVal_16_16 = (STATE_VARIABLE_HashVal_13_13 ^ C_10);
      Var_17 = (MR_Integer) ((MR_Unsigned) Index_7 + (MR_Unsigned) 1);
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
  MR_bool succeeded = ((MR_Integer) 0 >= (MR_Integer) 0);
  MR_Integer Length_8;

  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__string__codepoint_offset_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_8  = Length;
}
    succeeded = mercury__string__code_point_offset_loop_5_p_0(String_4, (MR_Integer) 0, Length_8, N_5, Index_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__code_point_offset_3_p_0(
  MR_String String_4,
  MR_Integer N_5,
  MR_Integer * Index_6)
{
  MR_bool succeeded = ((MR_Integer) 0 >= (MR_Integer) 0);
  MR_Integer Length_8;

  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__string__code_point_offset_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_8  = Length;
}
    succeeded = mercury__string__code_point_offset_loop_5_p_0(String_4, (MR_Integer) 0, Length_8, N_5, Index_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__codepoint_offset_4_p_0(
  MR_String String_5,
  MR_Integer StartOffset_6,
  MR_Integer N_7,
  MR_Integer * Index_8)
{
  MR_bool succeeded = (StartOffset_6 >= (MR_Integer) 0);
  MR_Integer Length_9;

  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__string__codepoint_offset_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_9  = Length;
}
    succeeded = mercury__string__code_point_offset_loop_5_p_0(String_5, StartOffset_6, Length_9, N_7, Index_8);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__code_point_offset_4_p_0(
  MR_String String_5,
  MR_Integer StartOffset_6,
  MR_Integer N_7,
  MR_Integer * Index_8)
{
  MR_bool succeeded = (StartOffset_6 >= (MR_Integer) 0);
  MR_Integer Length_9;

  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__string__code_point_offset_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_9  = Length;
}
    succeeded = mercury__string__code_point_offset_loop_5_p_0(String_5, StartOffset_6, Length_9, N_7, Index_8);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__code_point_offset_loop_5_p_0(
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
        MR_Integer _ReplacedCodeUnit_15;
        MR_Integer next_value_of_Offset_7;
        MR_Integer next_value_of_N_9;

{
#define MR_PROC_LABEL mercury__string__code_point_offset_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_6 ;
	Index = Offset_7 ;
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
	NextOffset_11  = NextIndex;
	Var_12  = Ch;
	_ReplacedCodeUnit_15  = ReplacedCodeUnit;
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

MR_Integer MR_CALL 
mercury__string__count_utf8_code_units_1_f_0(
  MR_String String_3)
{
  MR_bool succeeded;
  MR_Integer Length_4;

{
#define MR_PROC_LABEL mercury__string__count_utf8_code_units_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__string__count_utf8_code_units_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_4  = Length;
}
  }
  else
  {
    MR_Integer Length_12;
    MR_Integer Start_16;
    MR_Integer End_17;
    MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__string__count_utf8_code_units_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Length_12  = Length;
}
    succeeded = ((MR_Integer) 0 > (MR_Integer) 0);
    if (succeeded)
      Start_16 = (MR_Integer) 0;
    else
      Start_16 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__string__count_utf8_code_units_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_19  = Length;
}
    succeeded = (Length_12 < Var_19);
    if (succeeded)
      End_17 = Length_12;
    else
      End_17 = Var_19;
    mercury__string__foldl_between_2__ho47_6_p_0(String_3, Start_16, End_17, (MR_Integer) 0, &Length_4);
  }
  return Length_4;
}

static void MR_CALL 
mercury__string__foldl_between_2__ho47_6_p_0(
  MR_String String_8,
  MR_Integer I_9,
  MR_Integer End_10,
  MR_Integer STATE_VARIABLE_Acc_0_14,
  MR_Integer * STATE_VARIABLE_Acc_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_9 < End_10);
    MR_Integer J_12;
    MR_Char Char_13;
    MR_Integer _ReplacedCodeUnit_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__foldl_between_2__ho47_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_8 ;
	Index = I_9 ;
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
	J_12  = NextIndex;
	Char_13  = Ch;
	_ReplacedCodeUnit_18  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 <= End_10);
    }
    if (succeeded)
    {
      MR_Integer STATE_VARIABLE_Acc_16_16;
      MR_Integer next_value_of_I_9;
      MR_Integer next_value_of_STATE_VARIABLE_Acc_0_14;

      mercury__string__count_utf16_to_utf8_code_units_3_p_0(Char_13, STATE_VARIABLE_Acc_0_14, &STATE_VARIABLE_Acc_16_16);
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
mercury__string__count_utf16_to_utf8_code_units_3_p_0(
  MR_Char Char_4,
  MR_Integer STATE_VARIABLE_Length_0_8,
  MR_Integer * STATE_VARIABLE_Length_9)
{
  MR_bool succeeded;
  MR_Integer CharInt_6;

{
#define MR_PROC_LABEL mercury__string__count_utf16_to_utf8_code_units_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character = Char_4 ;
		{

    Int = (MR_UnsignedChar) Character;


		;}
#undef MR_PROC_LABEL
	CharInt_6  = Int;
}
  succeeded = (CharInt_6 <= (MR_Integer) 127);
  if (succeeded)
    *STATE_VARIABLE_Length_9 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_Length_0_8 + (MR_Unsigned) 1);
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
        mercury__require__error_2_p_0((MR_String) "predicate \140string.count_utf16_to_utf8_code_units\'/3", (MR_String) "surrogate code point");
        return;
      }
  }
}

void MR_CALL 
mercury__string__count_codepoints_2_p_0(
  MR_String String_3,
  MR_Integer * Count_4)
{
  mercury__string__count_code_points_loop_4_p_0(String_3, (MR_Integer) 0, (MR_Integer) 0, Count_4);
}

MR_Integer MR_CALL 
mercury__string__count_codepoints_1_f_0(
  MR_String String_3)
{
  MR_Integer Count_4;

  mercury__string__count_code_points_loop_4_p_0(String_3, (MR_Integer) 0, (MR_Integer) 0, &Count_4);
  return Count_4;
}

void MR_CALL 
mercury__string__count_code_points_2_p_0(
  MR_String String_3,
  MR_Integer * Count_4)
{
  mercury__string__count_code_points_loop_4_p_0(String_3, (MR_Integer) 0, (MR_Integer) 0, Count_4);
}

MR_Integer MR_CALL 
mercury__string__count_code_points_1_f_0(
  MR_String String_3)
{
  MR_Integer Count_4;

  mercury__string__count_code_points_loop_4_p_0(String_3, (MR_Integer) 0, (MR_Integer) 0, &Count_4);
  return Count_4;
}

void MR_CALL 
mercury__string__count_code_points_loop_4_p_0(
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
    MR_Integer _ReplacedCodeUnit_13;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__count_code_points_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_5 ;
	Index = I_6 ;
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
	J_9  = NextIndex;
	Var_10  = Ch;
	_ReplacedCodeUnit_13  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) Count0_7 + (MR_Unsigned) 1);
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
mercury__string__count_code_units_2_p_0(
  MR_String Str_3,
  MR_Integer * Length_4)
{
{
#define MR_PROC_LABEL mercury__string__count_code_units_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	*Length_4  = Length;
}
}

MR_Integer MR_CALL 
mercury__string__count_code_units_1_f_0(
  MR_String Str_3)
{
  MR_Integer HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__string__count_code_units_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = Length;
}
  return HeadVar__2_2;
}

void MR_CALL 
mercury__string__length_2_p_1(
  MR_String Str_1,
  MR_Integer * Length_2)
{
{
#define MR_PROC_LABEL mercury__string__length_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str = Str_1 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	*Length_2  = Length;
}
}

void MR_CALL 
mercury__string__length_2_p_0(
  MR_String Str_1,
  MR_Integer * Length_2)
{
{
#define MR_PROC_LABEL mercury__string__length_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_1 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	*Length_2  = Length;
}
}

MR_Integer MR_CALL 
mercury__string__length_1_f_0(
  MR_String S_3)
{
  MR_Integer L_4;

{
#define MR_PROC_LABEL mercury__string__length_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	L_4  = Length;
}
  return L_4;
}

MR_String MR_CALL 
mercury__string__unsafe_set_char_3_f_0(
  MR_Char C_5,
  MR_Integer N_6,
  MR_String S0_7)
{
  MR_String S_8;

  mercury__string__unsafe_set_char_4_p_0(C_5, N_6, S0_7, &S_8);
  return S_8;
}

void MR_CALL 
mercury__string__unsafe_set_char_4_p_0(
  MR_Char Char_5,
  MR_Integer Index_6,
  MR_String Str0_7,
  MR_String * Str_8)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character = Char_5 ;
	Int = (MR_Integer) 0 ;
		{

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.unsafe_set_char\'/4", (MR_String) "null character");
      return;
    }
  else
  {
{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = mercury__char__is_surrogate_1_p_0(Char_5);
    if (succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.unsafe_set_char\'/4", (MR_String) "surrogate code point");
        return;
      }
    else
    {
      MR_Integer Len0_9;

{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str0_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len0_9  = Length;
}
{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_4_p_0

	MR_Char Ch;
	MR_Integer Index;
	MR_Integer Len0;
	MR_String Str0;
	MR_String Str;

	Ch = Char_5 ;
	Index = Index_6 ;
	Len0 = Len0_9 ;
	Str0 = Str0_7 ;
		{

    int b;
    size_t oldlen;
    size_t oldwidth;
    size_t newwidth;
    size_t newlen;

    // The cast to (unsigned char *) is to prevent sign extension.
    b = ((const unsigned char *) Str0)[Index];
    if (MR_utf8_is_lead_byte(b)) {
        MR_Integer next_index = Index;
        int oldc = MR_utf8_get_next_mb(Str0, &next_index);
        if (oldc < 0) {
            oldwidth = 1;
        } else {
            oldwidth = next_index - Index;
        }
    } else {
        oldwidth = 1;
    }

    if (MR_is_ascii(Ch)) {
        // Fast path.
        newwidth = 1;
    } else {
        newwidth = MR_utf8_width(Ch);
    }

    oldlen = Len0;
    newlen = oldlen - oldwidth + newwidth;

    MR_allocate_aligned_string_msg(Str, newlen, MR_ALLOC_ID);
    MR_memcpy(Str, Str0, Index);
    if (MR_is_ascii(Ch)) {
        // Fast path.
        Str[Index] = Ch;
    } else {
        MR_utf8_encode(Str + Index, Ch);
    }
    MR_memcpy(Str + Index + newwidth,
        Str0 + Index + oldwidth,
        oldlen - Index - oldwidth + 1);


		;}
#undef MR_PROC_LABEL
	*Str_8  = Str;
}
    }
  }
}

void MR_CALL 
mercury__string__det_set_char_4_p_0(
  MR_Char Char_5,
  MR_Integer Int_6,
  MR_String String0_7,
  MR_String * String_8)
{
  MR_bool succeeded;
  MR_String String1_9;

  succeeded = mercury__string__set_char_4_p_0(Char_5, Int_6, String0_7, &String1_9);
  if (succeeded)
    *String_8 = String1_9;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.det_set_char\'/4", (MR_String) "index out of range");
      return;
    }
}

MR_String MR_CALL 
mercury__string__det_set_char_3_f_0(
  MR_Char C_5,
  MR_Integer N_6,
  MR_String S0_7)
{
  MR_bool succeeded;
  MR_String S_8;
  MR_String String1_9;

  succeeded = mercury__string__set_char_4_p_0(C_5, N_6, S0_7, &String1_9);
  if (succeeded)
    S_8 = String1_9;
  else
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.det_set_char\'/4", (MR_String) "index out of range");
  return S_8;
}

MR_bool MR_CALL 
mercury__string__set_char_4_p_0(
  MR_Char Char_5,
  MR_Integer Index_6,
  MR_String Str0_7,
  MR_String * Str_8)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__set_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character = Char_5 ;
	Int = (MR_Integer) 0 ;
		{

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);


		;}
#undef MR_PROC_LABEL
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

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = mercury__char__is_surrogate_1_p_0(Char_5);
    if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.set_char\'/4", (MR_String) "surrogate code point");
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer Len0_9;

{
#define MR_PROC_LABEL mercury__string__set_char_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str0_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len0_9  = Length;
}
{
#define MR_PROC_LABEL mercury__string__set_char_4_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = Index_6 ;
	Length = Len0_9 ;
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
#define MR_PROC_LABEL mercury__string__set_char_4_p_0

	MR_Char Ch;
	MR_Integer Index;
	MR_Integer Len0;
	MR_String Str0;
	MR_String Str;

	Ch = Char_5 ;
	Index = Index_6 ;
	Len0 = Len0_9 ;
	Str0 = Str0_7 ;
		{

    int b;
    size_t oldlen;
    size_t oldwidth;
    size_t newwidth;
    size_t newlen;

    // The cast to (unsigned char *) is to prevent sign extension.
    b = ((const unsigned char *) Str0)[Index];
    if (MR_utf8_is_lead_byte(b)) {
        MR_Integer next_index = Index;
        int oldc = MR_utf8_get_next_mb(Str0, &next_index);
        if (oldc < 0) {
            oldwidth = 1;
        } else {
            oldwidth = next_index - Index;
        }
    } else {
        oldwidth = 1;
    }

    if (MR_is_ascii(Ch)) {
        // Fast path.
        newwidth = 1;
    } else {
        newwidth = MR_utf8_width(Ch);
    }

    oldlen = Len0;
    newlen = oldlen - oldwidth + newwidth;

    MR_allocate_aligned_string_msg(Str, newlen, MR_ALLOC_ID);
    MR_memcpy(Str, Str0, Index);
    if (MR_is_ascii(Ch)) {
        // Fast path.
        Str[Index] = Ch;
    } else {
        MR_utf8_encode(Str + Index, Ch);
    }
    MR_memcpy(Str + Index + newwidth,
        Str0 + Index + oldwidth,
        oldlen - Index - oldwidth + 1);


		;}
#undef MR_PROC_LABEL
	*Str_8  = Str;
}
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__string__unsafe_index_code_unit_3_p_0(
  MR_String Str_1,
  MR_Integer Index_2,
  MR_Integer * Code_3)
{
{
#define MR_PROC_LABEL mercury__string__unsafe_index_code_unit_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str = Str_1 ;
	Index = Index_2 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	*Code_3  = Code;
}
}

MR_bool MR_CALL 
mercury__string__unsafe_prev_index_repl_5_p_0(
  MR_String Str_6,
  MR_Integer Index_7,
  MR_Integer * PrevIndex_8,
  MR_Char * Ch_9,
  MR_Word * MaybeReplaced_10)
{
  MR_bool succeeded;
  MR_Integer ReplacedCodeUnit_11;

{
#define MR_PROC_LABEL mercury__string__unsafe_prev_index_repl_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_6 ;
	Index = Index_7 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*PrevIndex_8  = PrevIndex;
	*Ch_9  = Ch;
	ReplacedCodeUnit_11  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    succeeded = (ReplacedCodeUnit_11 == (MR_Integer) -1);
    if (succeeded)
      *MaybeReplaced_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      uint8_t CodeUnit_12;

{
#define MR_PROC_LABEL mercury__string__unsafe_prev_index_repl_5_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_11 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_12  = U8;
}
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeReplaced_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (CodeUnit_12));
      }
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__unsafe_prev_index_4_p_0(
  MR_String Str_5,
  MR_Integer Index_6,
  MR_Integer * PrevIndex_7,
  MR_Char * Ch_8)
{
  MR_bool succeeded;
  MR_Integer _ReplacedCodeUnit_9;

{
#define MR_PROC_LABEL mercury__string__unsafe_prev_index_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_5 ;
	Index = Index_6 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*PrevIndex_7  = PrevIndex;
	*Ch_8  = Ch;
	_ReplacedCodeUnit_9  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__prev_index_repl_5_p_0(
  MR_String Str_6,
  MR_Integer Index_7,
  MR_Integer * PrevIndex_8,
  MR_Char * Char_9,
  MR_Word * MaybeReplaced_10)
{
  MR_bool succeeded;
  MR_Integer Len_11;
  MR_Integer Var_12;
  MR_Integer ReplacedCodeUnit_14;

{
#define MR_PROC_LABEL mercury__string__prev_index_repl_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_11  = Length;
}
  Var_12 = (MR_Integer) ((MR_Unsigned) Index_7 - (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__string__prev_index_repl_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = Var_12 ;
	Length = Len_11 ;
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
#define MR_PROC_LABEL mercury__string__prev_index_repl_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_6 ;
	Index = Index_7 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*PrevIndex_8  = PrevIndex;
	*Char_9  = Ch;
	ReplacedCodeUnit_14  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_14 == (MR_Integer) -1);
      if (succeeded)
        *MaybeReplaced_10 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_15;

{
#define MR_PROC_LABEL mercury__string__prev_index_repl_5_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_14 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_15  = U8;
}
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeReplaced_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (CodeUnit_15));
        }
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__prev_index_4_p_0(
  MR_String Str_5,
  MR_Integer Index_6,
  MR_Integer * PrevIndex_7,
  MR_Char * Char_8)
{
  MR_bool succeeded;
  MR_Integer Len_10;
  MR_Integer Var_11;
  MR_Integer ReplacedCodeUnit_13;

{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_10  = Length;
}
  Var_11 = (MR_Integer) ((MR_Unsigned) Index_6 - (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = Var_11 ;
	Length = Len_10 ;
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
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_5 ;
	Index = Index_6 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*PrevIndex_7  = PrevIndex;
	*Char_8  = Ch;
	ReplacedCodeUnit_13  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__unsafe_index_next_repl_5_p_0(
  MR_String Str_6,
  MR_Integer Index_7,
  MR_Integer * NextIndex_8,
  MR_Char * Ch_9,
  MR_Word * MaybeReplaced_10)
{
  MR_bool succeeded;
  MR_Integer ReplacedCodeUnit_11;

{
#define MR_PROC_LABEL mercury__string__unsafe_index_next_repl_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_6 ;
	Index = Index_7 ;
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
	*NextIndex_8  = NextIndex;
	*Ch_9  = Ch;
	ReplacedCodeUnit_11  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    succeeded = (ReplacedCodeUnit_11 == (MR_Integer) -1);
    if (succeeded)
      *MaybeReplaced_10 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      uint8_t CodeUnit_12;

{
#define MR_PROC_LABEL mercury__string__unsafe_index_next_repl_5_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_11 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_12  = U8;
}
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeReplaced_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (CodeUnit_12));
      }
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__unsafe_index_next_4_p_0(
  MR_String Str_5,
  MR_Integer Index_6,
  MR_Integer * NextIndex_7,
  MR_Char * Ch_8)
{
  MR_bool succeeded;
  MR_Integer _ReplacedCodeUnit_9;

{
#define MR_PROC_LABEL mercury__string__unsafe_index_next_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_5 ;
	Index = Index_6 ;
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
	*NextIndex_7  = NextIndex;
	*Ch_8  = Ch;
	_ReplacedCodeUnit_9  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__index_next_repl_5_p_0(
  MR_String Str_6,
  MR_Integer Index_7,
  MR_Integer * NextIndex_8,
  MR_Char * Char_9,
  MR_Word * MaybeReplaced_10)
{
  MR_bool succeeded;
  MR_Integer Len_11;
  MR_Integer ReplacedCodeUnit_12;

{
#define MR_PROC_LABEL mercury__string__index_next_repl_5_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_6 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_11  = Length;
}
{
#define MR_PROC_LABEL mercury__string__index_next_repl_5_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = Index_7 ;
	Length = Len_11 ;
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
#define MR_PROC_LABEL mercury__string__index_next_repl_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_6 ;
	Index = Index_7 ;
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
	*NextIndex_8  = NextIndex;
	*Char_9  = Ch;
	ReplacedCodeUnit_12  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_12 == (MR_Integer) -1);
      if (succeeded)
        *MaybeReplaced_10 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_13;

{
#define MR_PROC_LABEL mercury__string__index_next_repl_5_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_12 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_13  = U8;
}
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeReplaced_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (CodeUnit_13));
        }
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__index_next_4_p_0(
  MR_String Str_5,
  MR_Integer Index_6,
  MR_Integer * NextIndex_7,
  MR_Char * Char_8)
{
  MR_bool succeeded;
  MR_Integer Len_10;
  MR_Integer ReplacedCodeUnit_11;

{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_10  = Length;
}
{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = Index_6 ;
	Length = Len_10 ;
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
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_5 ;
	Index = Index_6 ;
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
	*NextIndex_7  = NextIndex;
	*Char_8  = Ch;
	ReplacedCodeUnit_11  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
  }
  return succeeded;
}

MR_Char MR_CALL 
mercury__string__unsafe_elem_2_f_0(
  MR_Integer Index_5,
  MR_String String_4)
{
  MR_Char HeadVar__3_3;

{
#define MR_PROC_LABEL mercury__string__unsafe_elem_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = String_4 ;
	Index = Index_5 ;
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
	HeadVar__3_3  = Ch;
}
  return HeadVar__3_3;
}

MR_Char MR_CALL 
mercury__string__elem_2_f_0(
  MR_Integer Index_5,
  MR_String String_4)
{
  MR_Char HeadVar__3_3;

  HeadVar__3_3 = mercury__string__det_index_2_f_0(String_4, Index_5);
  return HeadVar__3_3;
}

void MR_CALL 
mercury__string__unsafe_index_3_p_0(
  MR_String Str_1,
  MR_Integer Index_2,
  MR_Char * Ch_3)
{
{
#define MR_PROC_LABEL mercury__string__unsafe_index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = Str_1 ;
	Index = Index_2 ;
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
	*Ch_3  = Ch;
}
}

MR_Char MR_CALL 
mercury__string__unsafe_index_2_f_0(
  MR_String S_4,
  MR_Integer N_5)
{
  MR_Char C_6;

{
#define MR_PROC_LABEL mercury__string__unsafe_index_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = S_4 ;
	Index = N_5 ;
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
	C_6  = Ch;
}
  return C_6;
}

void MR_CALL 
mercury__string__det_index_3_p_0(
  MR_String String_4,
  MR_Integer Int_5,
  MR_Char * Char_6)
{
  MR_bool succeeded;
  MR_Char Char0_7;
  MR_Integer Len_10;

{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_10  = Length;
}
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = Int_5 ;
	Length = Len_10 ;
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
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = String_4 ;
	Index = Int_5 ;
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
	Char0_7  = Ch;
}
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *Char_6 = Char0_7;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.det_index\'/3", (MR_String) "index out of range");
      return;
    }
}

MR_Char MR_CALL 
mercury__string__det_index_2_f_0(
  MR_String S_4,
  MR_Integer N_5)
{
  MR_bool succeeded;
  MR_Char C_6;
  MR_Char Char0_7;
  MR_Integer Len_10;

{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Len_10  = Length;
}
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index = N_5 ;
	Length = Len_10 ;
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
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = S_4 ;
	Index = N_5 ;
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
	Char0_7  = Ch;
}
    succeeded = MR_TRUE;
  }
  if (succeeded)
    C_6 = Char0_7;
  else
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.det_index\'/3", (MR_String) "index out of range");
  return C_6;
}

MR_bool MR_CALL 
mercury__string__index_3_p_0(
  MR_String Str_4,
  MR_Integer Index_5,
  MR_Char * Char_6)
{
  MR_bool succeeded;
  MR_Integer Len_7;

{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_4 ;
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

	Index = Index_5 ;
	Length = Len_7 ;
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
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = Str_4 ;
	Index = Index_5 ;
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
	*Char_6  = Ch;
}
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_String MR_CALL 
mercury__string__duplicate_char_2_f_0(
  MR_Char C_4,
  MR_Integer N_5)
{
  MR_String S_6;

  mercury__string__duplicate_char_3_p_0(C_4, N_5, &S_6);
  return S_6;
}

void MR_CALL 
mercury__string__duplicate_char_3_p_0(
  MR_Char Char_4,
  MR_Integer Count_5,
  MR_String * String_6)
{
  MR_bool succeeded;
  MR_Word Var_7;
  MR_String Str0_10;

  mercury__list__accumulate_n_copies_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Count_5, ((MR_Box) (MR_Word) (Char_4)), (MR_Word) ((MR_Unsigned) 0U), &Var_7);
  succeeded = mercury__string__semidet_from_char_list_2_p_0(Var_7, &Str0_10);
  if (succeeded)
    *String_6 = Str0_10;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_char_list\'/2", (MR_String) "null character or surrogate code point in list");
      return;
    }
}

MR_bool MR_CALL 
mercury__string__from_utf16_code_unit_list_2_p_0(
  MR_Word CodeList_3,
  MR_String * String_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__from_utf16_code_unit_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    MR_Word RevChars_5;

    succeeded = mercury__string__decode_utf16_3_p_0(CodeList_3, (MR_Word) ((MR_Unsigned) 0U), &RevChars_5);
    if (succeeded)
      succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(RevChars_5, String_4);
  }
  else
    succeeded = mercury__string__do_from_code_unit_list_3_p_0(CodeList_3, (MR_Integer) 1, String_4);
  return succeeded;
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
      MR_Integer A_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word FollowA_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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

            succeeded = (FollowA_6 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              B_11 = ((MR_Integer) ((MR_hl_field(1, FollowA_6, (MR_Integer) 0))));
              Rest_10 = ((MR_Word) ((MR_hl_field(1, FollowA_6, (MR_Integer) 1))));
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

	Int = CharInt_9 ;
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
            Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_23, 0) = ((MR_Box) (MR_Word) (Char_12));
            MR_hl_field(1, Var_23, 1) = ((MR_Box) (HeadVar__2_2));
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
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__from_utf8_code_unit_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    succeeded = mercury__string__do_from_code_unit_list_3_p_0(CodeList_3, (MR_Integer) 1, String_4);
  else
  {
    MR_Word RevChars_5;

    succeeded = mercury__string__decode_utf8_3_p_0(CodeList_3, (MR_Word) ((MR_Unsigned) 0U), &RevChars_5);
    if (succeeded)
      succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(RevChars_5, String_4);
  }
  return succeeded;
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
      MR_Integer A_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word FollowA_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
              MR_Integer Var_64;
              MR_Integer Var_65;

              succeeded = (FollowA_6 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                B_11 = ((MR_Integer) ((MR_hl_field(1, FollowA_6, (MR_Integer) 0))));
                Rest_10 = ((MR_Word) ((MR_hl_field(1, FollowA_6, (MR_Integer) 1))));
                Var_65 = (MR_Integer) 192;
                Var_64 = (B_11 & Var_65);
                succeeded = (Var_64 == (MR_Integer) 128);
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
                MR_Integer Var_66;
                MR_Integer Var_67;
                MR_Integer Var_68;
                MR_Integer Var_69;

                succeeded = (FollowA_6 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  B_61 = ((MR_Integer) ((MR_hl_field(1, FollowA_6, (MR_Integer) 0))));
                  Var_27 = ((MR_Word) ((MR_hl_field(1, FollowA_6, (MR_Integer) 1))));
                  succeeded = (Var_27 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    C_12 = ((MR_Integer) ((MR_hl_field(1, Var_27, (MR_Integer) 0))));
                    Rest_10 = ((MR_Word) ((MR_hl_field(1, Var_27, (MR_Integer) 1))));
                    Var_67 = (MR_Integer) 192;
                    Var_66 = (B_61 & Var_67);
                    succeeded = (Var_66 == (MR_Integer) 128);
                    if (succeeded)
                    {
                      Var_69 = (MR_Integer) 192;
                      Var_68 = (C_12 & Var_69);
                      succeeded = (Var_68 == (MR_Integer) 128);
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
                MR_Integer Var_70;
                MR_Integer Var_71;
                MR_Integer Var_72;
                MR_Integer Var_73;
                MR_Integer Var_74;
                MR_Integer Var_75;

                succeeded = (A_5 <= (MR_Integer) 244);
                if (succeeded)
                {
                  succeeded = (FollowA_6 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    B_62 = ((MR_Integer) ((MR_hl_field(1, FollowA_6, (MR_Integer) 0))));
                    Var_41 = ((MR_Word) ((MR_hl_field(1, FollowA_6, (MR_Integer) 1))));
                    succeeded = (Var_41 != (MR_Word) ((MR_Unsigned) 0U));
                    if (succeeded)
                    {
                      C_63 = ((MR_Integer) ((MR_hl_field(1, Var_41, (MR_Integer) 0))));
                      Var_42 = ((MR_Word) ((MR_hl_field(1, Var_41, (MR_Integer) 1))));
                      succeeded = (Var_42 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        D_13 = ((MR_Integer) ((MR_hl_field(1, Var_42, (MR_Integer) 0))));
                        Rest_10 = ((MR_Word) ((MR_hl_field(1, Var_42, (MR_Integer) 1))));
                        Var_71 = (MR_Integer) 192;
                        Var_70 = (B_62 & Var_71);
                        succeeded = (Var_70 == (MR_Integer) 128);
                        if (succeeded)
                        {
                          Var_73 = (MR_Integer) 192;
                          Var_72 = (C_63 & Var_73);
                          succeeded = (Var_72 == (MR_Integer) 128);
                          if (succeeded)
                          {
                            Var_75 = (MR_Integer) 192;
                            Var_74 = (D_13 & Var_75);
                            succeeded = (Var_74 == (MR_Integer) 128);
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

	Int = CharInt_9 ;
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
            Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_60, 0) = ((MR_Box) (MR_Word) (Char_14));
            MR_hl_field(1, Var_60, 1) = ((MR_Box) (HeadVar__2_2));
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
mercury__string__from_code_unit_list_allow_ill_formed_2_p_0(
  MR_Word CodeList_3,
  MR_String * Str_4)
{
  MR_bool succeeded;

  succeeded = mercury__string__do_from_code_unit_list_3_p_0(CodeList_3, (MR_Integer) 0, Str_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__from_code_unit_list_2_p_0(
  MR_Word CodeList_3,
  MR_String * Str_4)
{
  MR_bool succeeded;

  succeeded = mercury__string__do_from_code_unit_list_3_p_0(CodeList_3, (MR_Integer) 1, Str_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__string__do_from_code_unit_list_3_p_0(
  MR_Word CodeList_1,
  MR_Word Verify_2,
  MR_String * Str_3)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__do_from_code_unit_list_3_p_0

	MR_Word CodeList;
	MR_Word Verify;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	CodeList = CodeList_1 ;
	Verify = Verify_2 ;
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
        unsigned c = (unsigned) MR_list_head(list_ptr);
        // Check for null character or invalid code unit.
        if (c == 0 || c > 0xff) {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        Str[size] = c;
        size++;
        list_ptr = MR_list_tail(list_ptr);
    }

    Str[size] = '\0';

    if (SUCCESS_INDICATOR && Verify == MR_YES) {
        SUCCESS_INDICATOR = MR_utf8_verify(Str);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	*Str_3  = Str;
	}
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

void MR_CALL 
mercury__string__to_utf16_code_unit_list_2_p_0(
  MR_String String_3,
  MR_Word * CodeList_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__to_utf16_code_unit_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    MR_Integer Var_5;

{
#define MR_PROC_LABEL mercury__string__to_utf16_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_5  = Length;
}
    mercury__string__utf8_to_utf16_code_units_loop_4_p_0(String_3, Var_5, (MR_Word) ((MR_Unsigned) 0U), CodeList_4);
  }
  else
  {
    MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__string__to_utf16_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_8  = Length;
}
    mercury__string__to_code_unit_list_loop_4_p_0(String_3, (MR_Integer) 0, Var_8, CodeList_4);
  }
}

void MR_CALL 
mercury__string__utf8_to_utf16_code_units_loop_4_p_0(
  MR_String String_5,
  MR_Integer Index_6,
  MR_Word CodeList0_7,
  MR_Word * CodeList_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer PrevIndex_9;
    MR_Char Char_10;
    MR_Word MaybeReplaced_11;
    MR_Integer ReplacedCodeUnit_20;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__utf8_to_utf16_code_units_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_5 ;
	Index = Index_6 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	PrevIndex_9  = PrevIndex;
	Char_10  = Ch;
	ReplacedCodeUnit_20  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (ReplacedCodeUnit_20 == (MR_Integer) -1);
      if (succeeded)
        MaybeReplaced_11 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t CodeUnit_21;

{
#define MR_PROC_LABEL mercury__string__utf8_to_utf16_code_units_loop_4_p_0

	MR_Integer I;
	uint8_t U8;

	I = ReplacedCodeUnit_20 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	CodeUnit_21  = U8;
}
        {
          MaybeReplaced_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeReplaced_11, 0) = ((MR_Box) (MR_Word) (CodeUnit_21));
        }
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word CodeList1_14;
      MR_Integer next_value_of_Index_6;
      MR_Word next_value_of_CodeList0_7;

      if ((MaybeReplaced_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word CharCodes_13;

        succeeded = mercury__char__to_utf16_2_p_0(Char_10, &CharCodes_13);
        if (succeeded)
          mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CharCodes_13, CodeList0_7, &CodeList1_14);
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.utf8_to_utf16_code_units_loop\'/4", (MR_String) "char.to_utf16 failed");
            return;
          }
      }
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.utf8_to_utf16_code_units_loop\'/4", (MR_String) "ill-formed code unit sequence");
          return;
        }
      // direct tailcall eliminated
      ;
      next_value_of_Index_6 = PrevIndex_9;
      next_value_of_CodeList0_7 = CodeList1_14;
      Index_6 = next_value_of_Index_6;
      CodeList0_7 = next_value_of_CodeList0_7;
      continue;
    }
    else
      *CodeList_8 = CodeList0_7;
    break;
  }
}

void MR_CALL 
mercury__string__to_utf8_code_unit_list_2_p_0(
  MR_String String_3,
  MR_Word * CodeList_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__to_utf8_code_unit_list_2_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    MR_Integer Var_12;

{
#define MR_PROC_LABEL mercury__string__to_utf8_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_12  = Length;
}
    mercury__string__to_code_unit_list_loop_4_p_0(String_3, (MR_Integer) 0, Var_12, CodeList_4);
  }
  else
  {
    MR_Integer Var_15;
    MR_Integer Start_18;
    MR_Integer End_19;
    MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__string__to_utf8_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_15  = Length;
}
    succeeded = ((MR_Integer) 0 > (MR_Integer) 0);
    if (succeeded)
      Start_18 = (MR_Integer) 0;
    else
      Start_18 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__string__to_utf8_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_21  = Length;
}
    succeeded = (Var_15 < Var_21);
    if (succeeded)
      End_19 = Var_15;
    else
      End_19 = Var_21;
    mercury__string__foldr_between_2__ho48_6_p_0(String_3, Start_18, End_19, (MR_Word) ((MR_Unsigned) 0U), CodeList_4);
  }
}

static void MR_CALL 
mercury__string__foldr_between_2__ho48_6_p_0(
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
    MR_Integer _ReplacedCodeUnit_18;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__string__foldr_between_2__ho48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = String_8 ;
	Index = I_10 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	J_12  = PrevIndex;
	Char_13  = Ch;
	_ReplacedCodeUnit_18  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = (J_12 >= Start_9);
    }
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_Acc_16_16;
      MR_Word CharCodes_19;
      MR_Integer next_value_of_I_10;
      MR_Word next_value_of_STATE_VARIABLE_Acc_0_14;

      succeeded = mercury__char__to_utf8_2_p_0(Char_13, &CharCodes_19);
      if (succeeded)
        mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), CharCodes_19, STATE_VARIABLE_Acc_0_14, &STATE_VARIABLE_Acc_16_16);
      else
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.encode_utf8\'/3", (MR_String) "surrogate code point");
          return;
        }
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
mercury__string__to_code_unit_list_2_p_0(
  MR_String String_3,
  MR_Word * List_4)
{
  MR_Integer Var_6;

{
#define MR_PROC_LABEL mercury__string__to_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str = String_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_6  = Length;
}
  mercury__string__to_code_unit_list_loop_4_p_0(String_3, (MR_Integer) 0, Var_6, List_4);
}

void MR_CALL 
mercury__string__to_code_unit_list_loop_4_p_0(
  MR_String String_5,
  MR_Integer Index_6,
  MR_Integer End_7,
  MR_Word * List_8)
{
  MR_bool succeeded = (Index_6 >= End_7);

  if (succeeded)
    *List_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Integer Code_9;
    MR_Integer Var_11;
    MR_Word * AddrTail_13;

{
#define MR_PROC_LABEL mercury__string__to_code_unit_list_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str = String_5 ;
	Index = Index_6 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	Code_9  = Code;
}
    Var_11 = (MR_Integer) ((MR_Unsigned) Index_6 + (MR_Unsigned) 1);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *List_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Code_9));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrTail_13 = (MR_Word *) (&(MR_hl_field(1, *List_8, (MR_Integer) 1)));
    mercury__string__LCMC__pred__to_code_unit_list_loop__1_4_p_0(String_5, Var_11, End_7, AddrTail_13);
  }
}

void MR_CALL 
mercury__string__LCMC__pred__to_code_unit_list_loop__1_4_p_0(
  MR_String String_5,
  MR_Integer Index_6,
  MR_Integer End_7,
  MR_Word * AddrOfList_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index_6 >= End_7);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      *AddrOfList_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Integer Code_9;
      MR_Integer Var_11;
      MR_Word * AddrTail_13;
      MR_Word List_15;
      MR_Integer next_value_of_Index_6;
      MR_Word * next_value_of_AddrOfList_14;

{
#define MR_PROC_LABEL mercury__string__LCMC__pred__to_code_unit_list_loop__1_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str = String_5 ;
	Index = Index_6 ;
		{

    const unsigned char *s = (const unsigned char *) Str;
    Code = s[Index];


		;}
#undef MR_PROC_LABEL
	Code_9  = Code;
}
      Var_11 = (MR_Integer) ((MR_Unsigned) Index_6 + (MR_Unsigned) 1);
      {
        List_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, List_15, 0) = ((MR_Box) (Code_9));
        MR_hl_field(1, List_15, 1) = NULL;
      }
      AddrTail_13 = (MR_Word *) (&(MR_hl_field(1, List_15, (MR_Integer) 1)));
      *AddrOfList_14 = List_15;
      // direct tailcall eliminated
      ;
      next_value_of_Index_6 = Var_11;
      next_value_of_AddrOfList_14 = AddrTail_13;
      Index_6 = next_value_of_Index_6;
      AddrOfList_14 = next_value_of_AddrOfList_14;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__string__from_rev_char_list_2_p_0(
  MR_Word Chars_3,
  MR_String * Str_4)
{
  MR_bool succeeded;
  MR_String Str0_5;

  succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(Chars_3, &Str0_5);
  if (succeeded)
    *Str_4 = Str0_5;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_rev_char_list\'/2", (MR_String) "null character or surrogate code point in list");
      return;
    }
}

MR_String MR_CALL 
mercury__string__from_rev_char_list_1_f_0(
  MR_Word Cs_3)
{
  MR_bool succeeded;
  MR_String S_4;
  MR_String Str0_5;

  succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(Cs_3, &Str0_5);
  if (succeeded)
    S_4 = Str0_5;
  else
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_rev_char_list\'/2", (MR_String) "null character or surrogate code point in list");
  return S_4;
}

MR_bool MR_CALL 
mercury__string__semidet_from_rev_char_list_2_p_0(
  MR_Word Chars_1,
  MR_String * Str_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__semidet_from_rev_char_list_2_p_0

	MR_Word Chars;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Chars = Chars_1 ;
		{
{
    MR_Word list_ptr;
    MR_Word size;

    // Loop to calculate list length in `size' using list in `list_ptr'.
    SUCCESS_INDICATOR = MR_TRUE;
    size = 0;
    list_ptr = Chars;
    while (!MR_list_is_empty(list_ptr)) {
        MR_Char c = (MR_Char) MR_list_head(list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        if (MR_is_ascii(c)) {
            size++;
        } else {
            size_t csize = MR_utf8_width(c);
            if (csize == 0) {
                // c is a surrogate code point (or even out of range,
                // but that is not supposed to happen).
                SUCCESS_INDICATOR = MR_FALSE;
                break;
            }
            size += csize;
        }
        list_ptr = MR_list_tail(list_ptr);
    }

    if (SUCCESS_INDICATOR) {
        // Allocate heap space for string.
        MR_allocate_aligned_string_msg(Str, size, MR_ALLOC_ID);

        // Set size to be the offset of the end of the string
        // (ie the \0) and null terminate the string.
        Str[size] = '\0';

        // Loop to copy the characters from the list_ptr to the string
        // in reverse order.
        list_ptr = Chars;
        while (! MR_list_is_empty(list_ptr)) {
            MR_Char c = (MR_Char) MR_list_head(list_ptr);
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

void MR_CALL 
mercury__string__from_char_list_2_p_0(
  MR_Word Chars_3,
  MR_String * Str_4)
{
  MR_bool succeeded;
  MR_String Str0_5;

  succeeded = mercury__string__semidet_from_char_list_2_p_0(Chars_3, &Str0_5);
  if (succeeded)
    *Str_4 = Str0_5;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_char_list\'/2", (MR_String) "null character or surrogate code point in list");
      return;
    }
}

MR_String MR_CALL 
mercury__string__from_char_list_1_f_0(
  MR_Word Cs_3)
{
  MR_bool succeeded;
  MR_String S_4;
  MR_String Str0_5;

  succeeded = mercury__string__semidet_from_char_list_2_p_0(Cs_3, &Str0_5);
  if (succeeded)
    S_4 = Str0_5;
  else
    mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.from_char_list\'/2", (MR_String) "null character or surrogate code point in list");
  return S_4;
}

MR_bool MR_CALL 
mercury__string__semidet_from_char_list_2_p_0(
  MR_Word CharList_1,
  MR_String * Str_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__string__semidet_from_char_list_2_p_0

	MR_Word CharList;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	CharList = CharList_1 ;
		{
{
    MR_Word char_list_ptr;
    size_t size;

    // Loop to calculate list length + sizeof(MR_Word) in `size'
    // using list in `char_list_ptr'.
    SUCCESS_INDICATOR = MR_TRUE;
    size = 0;
    char_list_ptr = CharList;
    while (! MR_list_is_empty(char_list_ptr)) {
        MR_Char c = (MR_Char) MR_list_head(char_list_ptr);
        if (c == '\0') {
            SUCCESS_INDICATOR = MR_FALSE;
            break;
        }
        if (MR_is_ascii(c)) {
            size++;
        } else {
            size_t csize = MR_utf8_width(c);
            if (csize == 0) {
                // c is a surrogate code point (or even out of range,
                // but that is not supposed to happen).
                SUCCESS_INDICATOR = MR_FALSE;
                break;
            }
            size += csize;
        }
        char_list_ptr = MR_list_tail(char_list_ptr);
    }

    if (SUCCESS_INDICATOR) {
        // Allocate heap space for string.
        MR_allocate_aligned_string_msg(Str, size, MR_ALLOC_ID);

        // Loop to copy the characters from the char_list to the string.
        size = 0;
        char_list_ptr = CharList;
        while (! MR_list_is_empty(char_list_ptr)) {
            MR_Char c = (MR_Char) MR_list_head(char_list_ptr);
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

void MR_CALL 
mercury__string__to_rev_char_list_2_p_0(
  MR_String Str_3,
  MR_Word * RevCharList_4)
{
  mercury__string__do_to_rev_char_list_loop_4_p_0(Str_3, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), RevCharList_4);
}

MR_Word MR_CALL 
mercury__string__to_rev_char_list_1_f_0(
  MR_String S_3)
{
  MR_Word Cs_4;

  mercury__string__do_to_rev_char_list_loop_4_p_0(S_3, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), &Cs_4);
  return Cs_4;
}

void MR_CALL 
mercury__string__do_to_rev_char_list_loop_4_p_0(
  MR_String Str_5,
  MR_Integer Index0_6,
  MR_Word STATE_VARIABLE_RevCharList_0_10,
  MR_Word * STATE_VARIABLE_RevCharList_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Index1_8;
    MR_Char C_9;
    MR_Integer _ReplacedCodeUnit_13;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__do_to_rev_char_list_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_5 ;
	Index = Index0_6 ;
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
	Index1_8  = NextIndex;
	C_9  = Ch;
	_ReplacedCodeUnit_13  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_RevCharList_12_12;
      MR_Integer next_value_of_Index0_6;
      MR_Word next_value_of_STATE_VARIABLE_RevCharList_0_10;

      {
        STATE_VARIABLE_RevCharList_12_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_RevCharList_12_12, 0) = ((MR_Box) (MR_Word) (C_9));
        MR_hl_field(1, STATE_VARIABLE_RevCharList_12_12, 1) = ((MR_Box) (STATE_VARIABLE_RevCharList_0_10));
      }
      // direct tailcall eliminated
      ;
      next_value_of_Index0_6 = Index1_8;
      next_value_of_STATE_VARIABLE_RevCharList_0_10 = STATE_VARIABLE_RevCharList_12_12;
      Index0_6 = next_value_of_Index0_6;
      STATE_VARIABLE_RevCharList_0_10 = next_value_of_STATE_VARIABLE_RevCharList_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_RevCharList_11 = STATE_VARIABLE_RevCharList_0_10;
    break;
  }
}

void MR_CALL 
mercury__string__to_char_list_2_p_0(
  MR_String Str_3,
  MR_Word * CharList_4)
{
  MR_Integer Var_5;

{
#define MR_PROC_LABEL mercury__string__to_char_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Str_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_5  = Length;
}
  mercury__string__do_to_char_list_loop_4_p_0(Str_3, Var_5, (MR_Word) ((MR_Unsigned) 0U), CharList_4);
}

MR_Word MR_CALL 
mercury__string__to_char_list_1_f_0(
  MR_String S_3)
{
  MR_Word Cs_4;
  MR_Integer Var_5;

{
#define MR_PROC_LABEL mercury__string__to_char_list_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = S_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_5  = Length;
}
  mercury__string__do_to_char_list_loop_4_p_0(S_3, Var_5, (MR_Word) ((MR_Unsigned) 0U), &Cs_4);
  return Cs_4;
}

void MR_CALL 
mercury__string__do_to_char_list_loop_4_p_0(
  MR_String Str_5,
  MR_Integer Index0_6,
  MR_Word STATE_VARIABLE_CharList_0_10,
  MR_Word * STATE_VARIABLE_CharList_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Index1_8;
    MR_Char C_9;
    MR_Integer _ReplacedCodeUnit_13;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__string__do_to_char_list_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Str_5 ;
	Index = Index0_6 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Index1_8  = PrevIndex;
	C_9  = Ch;
	_ReplacedCodeUnit_13  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_CharList_12_12;
      MR_Integer next_value_of_Index0_6;
      MR_Word next_value_of_STATE_VARIABLE_CharList_0_10;

      {
        STATE_VARIABLE_CharList_12_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, STATE_VARIABLE_CharList_12_12, 0) = ((MR_Box) (MR_Word) (C_9));
        MR_hl_field(1, STATE_VARIABLE_CharList_12_12, 1) = ((MR_Box) (STATE_VARIABLE_CharList_0_10));
      }
      // direct tailcall eliminated
      ;
      next_value_of_Index0_6 = Index1_8;
      next_value_of_STATE_VARIABLE_CharList_0_10 = STATE_VARIABLE_CharList_12_12;
      Index0_6 = next_value_of_Index0_6;
      STATE_VARIABLE_CharList_0_10 = next_value_of_STATE_VARIABLE_CharList_0_10;
      continue;
    }
    else
      *STATE_VARIABLE_CharList_11 = STATE_VARIABLE_CharList_0_10;
    break;
  }
}

static MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string____Unify____justified_column_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string____Compare____justified_column_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string____Compare____justified_column_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string____Unify____justify_sense_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string____Compare____justify_sense_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string____Compare____justify_sense_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string____Unify____line_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string____Unify____line_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string____Compare____line_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string____Compare____line_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string____Unify____maybe_replaced_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string____Unify____maybe_replaced_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string____Compare____maybe_replaced_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string____Compare____maybe_replaced_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string____Unify____poly_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string____Compare____poly_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string____Compare____poly_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string____Unify____string_buffer_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string____Unify____string_buffer_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string____Compare____string_buffer_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string____Compare____string_buffer_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string____Unify____string_piece_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string____Unify____string_piece_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string____Compare____string_piece_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string____Compare____string_piece_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__string____Unify____text_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__string____Compare____text_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__string____Compare____text_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&mercury__string__string__type_ctor_info_maybe_replaced_0);
	MR_register_type_ctor_info(&mercury__string__string__type_ctor_info_poly_type_0);
	MR_register_type_ctor_info(&mercury__string__string__type_ctor_info_string_buffer_0);
	MR_register_type_ctor_info(&mercury__string__string__type_ctor_info_string_piece_0);
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
