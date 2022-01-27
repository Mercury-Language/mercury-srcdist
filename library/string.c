/*
** Automatically generated from `string.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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



#line 4664 "string.m"
struct mercury__string__foldr_between_2_6_p_4_env_0_s {
#line 4664 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18;
#line 4664 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_4_env_0__Closure_7;
#line 4664 "string.m"
  MR_String mercury__string__foldr_between_2_6_p_4_env_0__String_8;
#line 4664 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_4_env_0__Start_9;
#line 4664 "string.m"
  MR_Box * mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15;
#line 4664 "string.m"
  MR_Cont mercury__string__foldr_between_2_6_p_4_env_0__cont;
#line 4664 "string.m"
  void * mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr;
#line 4675 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_4_env_0__J_12;
#line 4673 "string.m"
  MR_Box mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16;
#line 4664 "string.m"
};

#line 4662 "string.m"
struct mercury__string__foldr_between_2_6_p_3_env_0_s {
#line 4662 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18;
#line 4662 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_3_env_0__Closure_7;
#line 4662 "string.m"
  MR_String mercury__string__foldr_between_2_6_p_3_env_0__String_8;
#line 4662 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_3_env_0__Start_9;
#line 4662 "string.m"
  MR_Box * mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15;
#line 4662 "string.m"
  MR_Cont mercury__string__foldr_between_2_6_p_3_env_0__cont;
#line 4662 "string.m"
  void * mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr;
#line 4675 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_3_env_0__J_12;
#line 4673 "string.m"
  MR_Box mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16;
#line 4662 "string.m"
};

#line 4609 "string.m"
struct mercury__string__foldl2_between_2_8_p_5_env_0_s {
#line 4609 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25;
#line 4609 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26;
#line 4609 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9;
#line 4609 "string.m"
  MR_String mercury__string__foldl2_between_2_8_p_5_env_0__String_10;
#line 4609 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_5_env_0__End_12;
#line 4609 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18;
#line 4609 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20;
#line 4609 "string.m"
  MR_Cont mercury__string__foldl2_between_2_8_p_5_env_0__cont;
#line 4609 "string.m"
  void * mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr;
#line 4620 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_5_env_0__J_15;
#line 4618 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21;
#line 4618 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22;
#line 4609 "string.m"
};

#line 4607 "string.m"
struct mercury__string__foldl2_between_2_8_p_4_env_0_s {
#line 4607 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25;
#line 4607 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26;
#line 4607 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9;
#line 4607 "string.m"
  MR_String mercury__string__foldl2_between_2_8_p_4_env_0__String_10;
#line 4607 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_4_env_0__End_12;
#line 4607 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18;
#line 4607 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20;
#line 4607 "string.m"
  MR_Cont mercury__string__foldl2_between_2_8_p_4_env_0__cont;
#line 4607 "string.m"
  void * mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr;
#line 4620 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_4_env_0__J_15;
#line 4618 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21;
#line 4618 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22;
#line 4607 "string.m"
};

#line 4582 "string.m"
struct mercury__string__foldl_between_2_6_p_4_env_0_s {
#line 4582 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18;
#line 4582 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_4_env_0__Closure_7;
#line 4582 "string.m"
  MR_String mercury__string__foldl_between_2_6_p_4_env_0__String_8;
#line 4582 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_4_env_0__End_10;
#line 4582 "string.m"
  MR_Box * mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15;
#line 4582 "string.m"
  MR_Cont mercury__string__foldl_between_2_6_p_4_env_0__cont;
#line 4582 "string.m"
  void * mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr;
#line 4593 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_4_env_0__J_12;
#line 4591 "string.m"
  MR_Box mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16;
#line 4582 "string.m"
};

#line 4580 "string.m"
struct mercury__string__foldl_between_2_6_p_3_env_0_s {
#line 4580 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18;
#line 4580 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_3_env_0__Closure_7;
#line 4580 "string.m"
  MR_String mercury__string__foldl_between_2_6_p_3_env_0__String_8;
#line 4580 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_3_env_0__End_10;
#line 4580 "string.m"
  MR_Box * mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15;
#line 4580 "string.m"
  MR_Cont mercury__string__foldl_between_2_6_p_3_env_0__cont;
#line 4580 "string.m"
  void * mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr;
#line 4593 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_3_env_0__J_12;
#line 4591 "string.m"
  MR_Box mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16;
#line 4580 "string.m"
};

#line 3242 "string.m"
struct mercury__string__mercury_append_3_p_3_env_0_s {
#line 3242 "string.m"
  MR_String * mercury__string__mercury_append_3_p_3_env_0__X_4;
#line 3242 "string.m"
  MR_String * mercury__string__mercury_append_3_p_3_env_0__Y_5;
#line 3242 "string.m"
  MR_Cont mercury__string__mercury_append_3_p_3_env_0__cont;
#line 3242 "string.m"
  void * mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr;
#line 3244 "string.m"
  MR_bool mercury__string__mercury_append_3_p_3_env_0__succeeded;
#line 3244 "string.m"
  MR_Word mercury__string__mercury_append_3_p_3_env_0__XList_7;
#line 3244 "string.m"
  MR_Word mercury__string__mercury_append_3_p_3_env_0__YList_8;
#line 3242 "string.m"
};


#line 261 "string.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__list__ti_list_1builtin__type_ctor_info_string_0;

#line 264 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_0[1];

#line 267 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_justified_column_0_0;

#line 270 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_1[1];

#line 273 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_justified_column_0_1;

#line 276 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_0[1];

#line 279 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_1[1];

#line 282 "string.c"
static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_justified_column_0[2];

#line 285 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_justified_column_0[2];

#line 288 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_justified_column_0[2];

#line 291 "string.c"
static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_0;

#line 294 "string.c"
static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_1;

#line 297 "string.c"
static const MR_EnumFunctorDescPtr mercury__string__string__enum_value_ordered_justify_sense_0[2];

#line 300 "string.c"
static const MR_EnumFunctorDescPtr mercury__string__string__enum_name_ordered_justify_sense_0[2];

#line 303 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_justify_sense_0[2];

#line 306 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_line_0[1];

#line 309 "string.c"
static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_line_0;

#line 312 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_0[1];

#line 315 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_0;

#line 318 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_1[1];

#line 321 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_1;

#line 324 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_2[1];

#line 327 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_2;

#line 330 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_3[1];

#line 333 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_3;

#line 336 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_0[1];

#line 339 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_1[1];

#line 342 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_2[1];

#line 345 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_3[1];

#line 348 "string.c"
static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_poly_type_0[4];

#line 351 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_poly_type_0[4];

#line 354 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_poly_type_0[4];

#line 357 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_text_file_0[1];

#line 360 "string.c"
static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_text_file_0;

#line 363 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0_10001(
#line 366 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 368 "string.c"
  MR_Box mercury__string__wrapper_arg_2);

#line 371 "string.c"
static void MR_CALL 
mercury__string____Compare____justified_column_0_0_10001(
#line 374 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 376 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 378 "string.c"
  MR_Box mercury__string__wrapper_arg_3);

#line 381 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0_10001(
#line 384 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 386 "string.c"
  MR_Box mercury__string__wrapper_arg_2);

#line 389 "string.c"
static void MR_CALL 
mercury__string____Compare____justify_sense_0_0_10001(
#line 392 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 394 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 396 "string.c"
  MR_Box mercury__string__wrapper_arg_3);

#line 399 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____line_0_0_10001(
#line 402 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 404 "string.c"
  MR_Box mercury__string__wrapper_arg_2);

#line 407 "string.c"
static void MR_CALL 
mercury__string____Compare____line_0_0_10001(
#line 410 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 412 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 414 "string.c"
  MR_Box mercury__string__wrapper_arg_3);

#line 417 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0_10001(
#line 420 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 422 "string.c"
  MR_Box mercury__string__wrapper_arg_2);

#line 425 "string.c"
static void MR_CALL 
mercury__string____Compare____poly_type_0_0_10001(
#line 428 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 430 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 432 "string.c"
  MR_Box mercury__string__wrapper_arg_3);

#line 435 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0_10001(
#line 438 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 440 "string.c"
  MR_Box mercury__string__wrapper_arg_2);

#line 443 "string.c"
static void MR_CALL 
mercury__string____Compare____text_file_0_0_10001(
#line 446 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 448 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 450 "string.c"
  MR_Box mercury__string__wrapper_arg_3);

#line 435 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_50_95_95_91_50_93_95_48_3_f_in__list_0(
#line 435 "list.int"
  MR_String mercury__string__V_36_36,
#line 435 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 435 "list.int"
  MR_Word mercury__string__HeadVar__3_3);

#line 4576 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_93_95_48_6_p_0(
#line 4576 "string.m"
  MR_String mercury__string__V_21_21,
#line 4576 "string.m"
  MR_String mercury__string__String_8,
#line 4576 "string.m"
  MR_Integer mercury__string__I_9,
#line 4576 "string.m"
  MR_Integer mercury__string__End_10,
#line 4576 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4576 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15);

#line 4576 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4576 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4576 "string.m"
  MR_String mercury__string__String_8,
#line 4576 "string.m"
  MR_Integer mercury__string__I_9,
#line 4576 "string.m"
  MR_Integer mercury__string__End_10,
#line 4576 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4576 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4656 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4656 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4656 "string.m"
  MR_String mercury__string__String_8,
#line 4656 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4656 "string.m"
  MR_Integer mercury__string__I_10,
#line 4656 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4656 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4578 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_51_95_95_91_50_93_95_48_6_p_0(
#line 4578 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4578 "string.m"
  MR_String mercury__string__String_8,
#line 4578 "string.m"
  MR_Integer mercury__string__I_9,
#line 4578 "string.m"
  MR_Integer mercury__string__End_10,
#line 4578 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4578 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15);

#line 4578 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_50_93_95_48_6_p_0(
#line 4578 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4578 "string.m"
  MR_String mercury__string__String_8,
#line 4578 "string.m"
  MR_Integer mercury__string__I_9,
#line 4578 "string.m"
  MR_Integer mercury__string__End_10,
#line 4578 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4578 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15);

#line 133 "list.int"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_52_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_String mercury__string__V_20_20,
#line 133 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__string__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__string__HeadVar__4_4);

#line 4656 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4656 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4656 "string.m"
  MR_String mercury__string__String_8,
#line 4656 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4656 "string.m"
  MR_Integer mercury__string__I_10,
#line 4656 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4656 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4576 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_56_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4576 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4576 "string.m"
  MR_String mercury__string__String_8,
#line 4576 "string.m"
  MR_Integer mercury__string__I_9,
#line 4576 "string.m"
  MR_Integer mercury__string__End_10,
#line 4576 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4576 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4120 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_49_95_95_91_50_93_95_48_6_p_0(
#line 4120 "string.m"
  MR_Char mercury__string__V_21_21,
#line 4120 "string.m"
  MR_String mercury__string__Str_8,
#line 4120 "string.m"
  MR_Integer mercury__string__I_9,
#line 4120 "string.m"
  MR_Integer mercury__string__SegEnd_10,
#line 4120 "string.m"
  MR_Word mercury__string__Acc0_11,
#line 4120 "string.m"
  MR_Word * mercury__string__Acc_12);

#line 911 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(
#line 911 "string.m"
  MR_Integer mercury__string__V_20_20,
#line 911 "string.m"
  MR_String mercury__string__String_8,
#line 911 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 911 "string.m"
  MR_Integer mercury__string__End0_10,
#line 911 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 911 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15);

#line 4101 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_120_116_95_98_111_117_110_100_97_114_121_95_95_104_111_49_48_95_95_91_50_93_95_48_4_p_0(
#line 4101 "string.m"
  MR_Word mercury__string__V_11_11,
#line 4101 "string.m"
  MR_String mercury__string__String_6,
#line 4101 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4101 "string.m"
  MR_Integer * mercury__string__NextWordStart_8);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_String mercury__string__V_12_12,
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Char mercury__string__V_12_12,
#line 324 "list.int"
  MR_Integer mercury__string__V_13_13,
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Char mercury__string__V_12_12,
#line 324 "list.int"
  MR_Integer mercury__string__V_13_13,
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 4101 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho10__ho47_4_p_0(
#line 4101 "string.m"
  MR_String mercury__string__String_6,
#line 4101 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4101 "string.m"
  MR_Integer * mercury__string__NextWordStart_8);

#line 4081 "string.m"
static void MR_CALL 
mercury__string__words_loop__ho36_4_p_0(
#line 4081 "string.m"
  MR_String mercury__string__String_6,
#line 4081 "string.m"
  MR_Integer mercury__string__WordStart_7,
#line 4081 "string.m"
  MR_Word * mercury__string__Words_8);

#line 4101 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho35_4_p_0(
#line 4101 "string.m"
  MR_String mercury__string__String_6,
#line 4101 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4101 "string.m"
  MR_Integer * mercury__string__NextWordStart_8);

#line 2918 "string.m"
static void MR_CALL 
mercury__string__suffix_length_loop__ho33_4_p_0(
#line 2918 "string.m"
  MR_String mercury__string__S_6,
#line 2918 "string.m"
  MR_Integer mercury__string__I_7,
#line 2918 "string.m"
  MR_Integer * mercury__string__Index_8);

#line 2901 "string.m"
static void MR_CALL 
mercury__string__prefix_length_loop__ho32_4_p_0(
#line 2901 "string.m"
  MR_String mercury__string__S_6,
#line 2901 "string.m"
  MR_Integer mercury__string__I_7,
#line 2901 "string.m"
  MR_Integer * mercury__string__Index_8);

#line 2829 "string.m"
static MR_bool MR_CALL 
mercury__string__all_match_loop__ho30_3_p_0(
#line 2829 "string.m"
  MR_String mercury__string__String_5,
#line 2829 "string.m"
  MR_Integer mercury__string__Cur_6);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho16_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 435 "list.int"
static MR_Word MR_CALL 
mercury__string__map_corresponding__ho15_3_f_in__list_0(
#line 435 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 435 "list.int"
  MR_Word mercury__string__HeadVar__3_3);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho14_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho13_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2);

#line 133 "list.int"
static void MR_CALL 
mercury__string__foldl__ho8_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 133 "list.int"
  MR_Integer mercury__string__HeadVar__3_3,
#line 133 "list.int"
  MR_Integer * mercury__string__HeadVar__4_4);

#line 4521 "string.m"
static MR_String MR_CALL 
mercury__string__IntroducedFrom__func__word_wrap_loop__4521__1_2_f_0(
#line 4521 "string.m"
  MR_String mercury__string__WordSep_2,
#line 4521 "string.m"
  MR_String mercury__string__HeadVar__2_60);

#line 4391 "string.m"
static MR_Word MR_CALL 
mercury__string__IntroducedFrom__func__replace_all__4391__1_3_f_0(
#line 4391 "string.m"
  MR_String mercury__string__Subst_7,
#line 4391 "string.m"
  MR_Char mercury__string__HeadVar__2_16,
#line 4391 "string.m"
  MR_Word mercury__string__HeadVar__3_17);

#line 4673 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_4_1(
#line 4673 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4673 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_3_1(
#line 4673 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4618 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_5_1(
#line 4618 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4618 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_4_1(
#line 4618 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4591 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_4_1(
#line 4591 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4591 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_3_1(
#line 4591 "string.m"
  void * mercury__string__env_ptr_arg);

#line 3244 "string.m"
static void MR_CALL 
mercury__string__mercury_append_3_p_3_1(
#line 3244 "string.m"
  void * mercury__string__env_ptr_arg);


static /* final */ const MR_Box mercury__string_scalar_common_1[5][2];

static /* final */ const MR_Box mercury__string_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__string_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__string_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__string_scalar_common_5[1][1];




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

static /* final */ const MR_Box mercury__string_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__string_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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
#include "type_desc.mh"
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

#line 4926 "string.m"
MR_bool 
ML_string_to_float(
#line 4926 "string.m"
  MR_String mercury__string__FloatString_1,
#line 4926 "string.m"
  MR_Float * mercury__string__FloatVal_2)
#line 4926 "string.m"
{
#line 4926 "string.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mercury__string__to_float_2_p_0((MR_String) mercury__string__FloatString_1, (MR_Float *) mercury__string__FloatVal_2);
	return ret_value;
}


#line 1218 "string.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1226 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__string__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1231 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_justified_column_0_0 = {
  (MR_String) "left",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__string__string__field_types_justified_column_0_0,
  NULL,
  NULL,
  NULL
};

#line 1246 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__string__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1251 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_justified_column_0_1 = {
  (MR_String) "right",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__string__string__field_types_justified_column_0_1,
  NULL,
  NULL,
  NULL
};

#line 1266 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_0[1] = {
  &mercury__string__string__du_functor_desc_justified_column_0_0
};

#line 1271 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_1[1] = {
  &mercury__string__string__du_functor_desc_justified_column_0_1
};

#line 1276 "string.c"
static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_justified_column_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_justified_column_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_justified_column_0_1
  }
};

#line 1290 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_justified_column_0[2] = {
  &mercury__string__string__du_functor_desc_justified_column_0_0,
  &mercury__string__string__du_functor_desc_justified_column_0_1
};

#line 1296 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_justified_column_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1302 "string.c"
const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_justified_column_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string____Unify____justified_column_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____justified_column_0_0_10001)),
  (MR_String) "string",
  (MR_String) "justified_column",
  {
    mercury__string__string__du_name_ordered_justified_column_0
  },
  {
    mercury__string__string__du_ptag_ordered_justified_column_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__string__functor_number_map_justified_column_0
};

#line 1323 "string.c"
static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_0 = {
  (MR_String) "just_left",
  (MR_Integer) 0
};

#line 1329 "string.c"
static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_1 = {
  (MR_String) "just_right",
  (MR_Integer) 1
};

#line 1335 "string.c"
static const MR_EnumFunctorDescPtr mercury__string__string__enum_value_ordered_justify_sense_0[2] = {
  &mercury__string__string__enum_functor_desc_justify_sense_0_0,
  &mercury__string__string__enum_functor_desc_justify_sense_0_1
};

#line 1341 "string.c"
static const MR_EnumFunctorDescPtr mercury__string__string__enum_name_ordered_justify_sense_0[2] = {
  &mercury__string__string__enum_functor_desc_justify_sense_0_0,
  &mercury__string__string__enum_functor_desc_justify_sense_0_1
};

#line 1347 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_justify_sense_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1353 "string.c"
const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_justify_sense_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__string____Unify____justify_sense_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____justify_sense_0_0_10001)),
  (MR_String) "string",
  (MR_String) "justify_sense",
  {
    mercury__string__string__enum_name_ordered_justify_sense_0
  },
  {
    mercury__string__string__enum_value_ordered_justify_sense_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__string__string__functor_number_map_justify_sense_0
};

#line 1374 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_line_0[1] = {
  (MR_Integer) 0
};

#line 1379 "string.c"
static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_line_0 = {
  (MR_String) "line",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 1386 "string.c"
const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_line_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__string____Unify____line_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____line_0_0_10001)),
  (MR_String) "string",
  (MR_String) "line",
  {
    &mercury__string__string__notag_functor_desc_line_0
  },
  {
    &mercury__string__string__notag_functor_desc_line_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__string__functor_number_map_line_0
};

#line 1407 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1412 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_0 = {
  (MR_String) "f",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__string__string__field_types_poly_type_0_0,
  NULL,
  NULL,
  NULL
};

#line 1427 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1432 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_1 = {
  (MR_String) "i",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__string__string__field_types_poly_type_0_1,
  NULL,
  NULL,
  NULL
};

#line 1447 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1452 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_2 = {
  (MR_String) "s",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__string__string__field_types_poly_type_0_2,
  NULL,
  NULL,
  NULL
};

#line 1467 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 1472 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_3 = {
  (MR_String) "c",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mercury__string__string__field_types_poly_type_0_3,
  NULL,
  NULL,
  NULL
};

#line 1487 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_0[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_0
};

#line 1492 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_1[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_1
};

#line 1497 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_2[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_2
};

#line 1502 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_3[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_3
};

#line 1507 "string.c"
static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_poly_type_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_poly_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_poly_type_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_poly_type_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__string__string__du_stag_ordered_poly_type_0_3
  }
};

#line 1531 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_poly_type_0[4] = {
  &mercury__string__string__du_functor_desc_poly_type_0_3,
  &mercury__string__string__du_functor_desc_poly_type_0_0,
  &mercury__string__string__du_functor_desc_poly_type_0_1,
  &mercury__string__string__du_functor_desc_poly_type_0_2
};

#line 1539 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_poly_type_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 1547 "string.c"
const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_poly_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__string____Unify____poly_type_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____poly_type_0_0_10001)),
  (MR_String) "string",
  (MR_String) "poly_type",
  {
    mercury__string__string__du_name_ordered_poly_type_0
  },
  {
    mercury__string__string__du_ptag_ordered_poly_type_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__string__string__functor_number_map_poly_type_0
};

#line 1568 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_text_file_0[1] = {
  (MR_Integer) 0
};

#line 1573 "string.c"
static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_text_file_0 = {
  (MR_String) "text_file",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 1580 "string.c"
const MR_TypeCtorInfo_Struct mercury__string__string__type_ctor_info_text_file_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__string____Unify____text_file_0_0_10001)),
  ((MR_Box) (mercury__string____Compare____text_file_0_0_10001)),
  (MR_String) "string",
  (MR_String) "text_file",
  {
    &mercury__string__string__notag_functor_desc_text_file_0
  },
  {
    &mercury__string__string__notag_functor_desc_text_file_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__string__string__functor_number_map_text_file_0
};

#line 1601 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0_10001(
#line 1604 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1606 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1608 "string.c"
{
#line 1610 "string.c"
  {
#line 1612 "string.c"
    MR_bool mercury__string__succeeded;

#line 1615 "string.c"
    {
#line 1617 "string.c"
      mercury__string__succeeded = mercury__string____Unify____justified_column_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1620 "string.c"
    return mercury__string__succeeded;
#line 1622 "string.c"
  }
#line 1624 "string.c"
}

#line 1627 "string.c"
static void MR_CALL 
mercury__string____Compare____justified_column_0_0_10001(
#line 1630 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1632 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1634 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1636 "string.c"
{
#line 1638 "string.c"
  {
#line 1640 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1643 "string.c"
    {
#line 1645 "string.c"
      mercury__string____Compare____justified_column_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1648 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1650 "string.c"
  }
#line 1652 "string.c"
}

#line 1655 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0_10001(
#line 1658 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1660 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1662 "string.c"
{
#line 1664 "string.c"
  {
#line 1666 "string.c"
    MR_bool mercury__string__succeeded;

#line 1669 "string.c"
    {
#line 1671 "string.c"
      mercury__string__succeeded = mercury__string____Unify____justify_sense_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1674 "string.c"
    return mercury__string__succeeded;
#line 1676 "string.c"
  }
#line 1678 "string.c"
}

#line 1681 "string.c"
static void MR_CALL 
mercury__string____Compare____justify_sense_0_0_10001(
#line 1684 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1686 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1688 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1690 "string.c"
{
#line 1692 "string.c"
  {
#line 1694 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1697 "string.c"
    {
#line 1699 "string.c"
      mercury__string____Compare____justify_sense_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1702 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1704 "string.c"
  }
#line 1706 "string.c"
}

#line 1709 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____line_0_0_10001(
#line 1712 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1714 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1716 "string.c"
{
#line 1718 "string.c"
  {
#line 1720 "string.c"
    MR_bool mercury__string__succeeded;

#line 1723 "string.c"
    {
#line 1725 "string.c"
      mercury__string__succeeded = mercury__string____Unify____line_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1728 "string.c"
    return mercury__string__succeeded;
#line 1730 "string.c"
  }
#line 1732 "string.c"
}

#line 1735 "string.c"
static void MR_CALL 
mercury__string____Compare____line_0_0_10001(
#line 1738 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1740 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1742 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1744 "string.c"
{
#line 1746 "string.c"
  {
#line 1748 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1751 "string.c"
    {
#line 1753 "string.c"
      mercury__string____Compare____line_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1756 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1758 "string.c"
  }
#line 1760 "string.c"
}

#line 1763 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0_10001(
#line 1766 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1768 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1770 "string.c"
{
#line 1772 "string.c"
  {
#line 1774 "string.c"
    MR_bool mercury__string__succeeded;

#line 1777 "string.c"
    {
#line 1779 "string.c"
      mercury__string__succeeded = mercury__string____Unify____poly_type_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1782 "string.c"
    return mercury__string__succeeded;
#line 1784 "string.c"
  }
#line 1786 "string.c"
}

#line 1789 "string.c"
static void MR_CALL 
mercury__string____Compare____poly_type_0_0_10001(
#line 1792 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1794 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1796 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1798 "string.c"
{
#line 1800 "string.c"
  {
#line 1802 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1805 "string.c"
    {
#line 1807 "string.c"
      mercury__string____Compare____poly_type_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1810 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1812 "string.c"
  }
#line 1814 "string.c"
}

#line 1817 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0_10001(
#line 1820 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1822 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1824 "string.c"
{
#line 1826 "string.c"
  {
#line 1828 "string.c"
    MR_bool mercury__string__succeeded;

#line 1831 "string.c"
    {
#line 1833 "string.c"
      mercury__string__succeeded = mercury__string____Unify____text_file_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1836 "string.c"
    return mercury__string__succeeded;
#line 1838 "string.c"
  }
#line 1840 "string.c"
}

#line 1843 "string.c"
static void MR_CALL 
mercury__string____Compare____text_file_0_0_10001(
#line 1846 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1848 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1850 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1852 "string.c"
{
#line 1854 "string.c"
  {
#line 1856 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1859 "string.c"
    {
#line 1861 "string.c"
      mercury__string____Compare____text_file_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1864 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1866 "string.c"
  }
#line 1868 "string.c"
}

#line 435 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_50_95_95_91_50_93_95_48_3_f_in__list_0(
#line 435 "list.int"
  MR_String mercury__string__V_36_36,
#line 435 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 435 "list.int"
  MR_Word mercury__string__HeadVar__3_3)
#line 435 "list.int"
{
#line 202 "list.opt"
  {
#line 202 "list.opt"
    MR_bool mercury__string__succeeded;
#line 202 "list.opt"
    MR_Word mercury__string__HeadVar__4_4;

#line 202 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "list.opt"
      if ((mercury__string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "list.opt"
        mercury__string__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "list.opt"
      else
#line 203 "list.opt"
        {
#line 10 "require.opt"
          {
#line 10 "require.opt"
            mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
          }
#line 203 "list.opt"
        }
#line 202 "list.opt"
    else
#line 202 "list.opt"
      {
#line 202 "list.opt"
        MR_Word mercury__string__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 202 "list.opt"
        MR_String mercury__string__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 202 "list.opt"
        if ((mercury__string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "list.opt"
          {
#line 10 "require.opt"
            {
#line 10 "require.opt"
              mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
            }
#line 208 "list.opt"
          }
#line 202 "list.opt"
        else
#line 213 "list.opt"
          {
#line 213 "list.opt"
            MR_String mercury__string__HB_21_23 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
#line 213 "list.opt"
            MR_Word mercury__string__TBs_22_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 1)));
#line 213 "list.opt"
            MR_String mercury__string__V_23_25;
#line 213 "list.opt"
            MR_Word mercury__string__V_24_26;
#line 213 "list.opt"
            MR_String mercury__string__V_48_48;

#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_50_95_95_91_50_93_95_48_3_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_36_36 ;
	S2 =  mercury__string__V_35_35 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 1961 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_48_48  = S3;
#line 3149 "string.m"
}
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_50_95_95_91_50_93_95_48_3_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__HB_21_23 ;
	S2 =  mercury__string__V_48_48 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 1988 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_23_25  = S3;
#line 3149 "string.m"
}
#line 215 "list.opt"
            {
#line 215 "list.opt"
              mercury__string__V_24_26 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_50_95_95_91_50_93_95_48_3_f_in__list_0(mercury__string__V_36_36, mercury__string__V_34_34, mercury__string__TBs_22_24);
            }
#line 213 "list.opt"
            {
#line 213 "list.opt"
              mercury__string__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_4, 0) = ((MR_Box) (mercury__string__V_23_25));
#line 213 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_4, 1) = ((MR_Box) (mercury__string__V_24_26));
#line 213 "list.opt"
            }
#line 213 "list.opt"
          }
#line 202 "list.opt"
      }
#line 202 "list.opt"
    return mercury__string__HeadVar__4_4;
#line 202 "list.opt"
  }
#line 435 "list.int"
}

#line 4576 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_93_95_48_6_p_0(
#line 4576 "string.m"
  MR_String mercury__string__V_21_21,
#line 4576 "string.m"
  MR_String mercury__string__String_8,
#line 4576 "string.m"
  MR_Integer mercury__string__I_9,
#line 4576 "string.m"
  MR_Integer mercury__string__End_10,
#line 4576 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4576 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15)
#line 4576 "string.m"
{
#line 4593 "string.m"
  while (MR_TRUE)
#line 4593 "string.m"
    {
#line 4593 "string.m"
      /* tailcall optimized into a loop */
#line 4593 "string.m"
      {
#line 4593 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4593 "string.m"
        MR_Integer mercury__string__J_12;
#line 4593 "string.m"
        MR_Char mercury__string__Char_13;

#line 4587 "string.m"
        if (mercury__string__succeeded)
#line 4587 "string.m"
          {
#line 1944 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2082 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4587 "string.m"
            if (mercury__string__succeeded)
#line 4589 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4587 "string.m"
          }
#line 4593 "string.m"
        if (mercury__string__succeeded)
#line 4591 "string.m"
          {
#line 4591 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4548 "string.m"
            {
#line 4548 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__IntroducedFrom__func__replace_all__4391__1_3_f_0(mercury__string__V_21_21, mercury__string__Char_13, mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4592 "string.m"
            /* direct tailcall eliminated */
#line 4592 "string.m"
            {
#line 4592 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4592 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4592 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4592 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4592 "string.m"
            }
#line 4592 "string.m"
            continue;
#line 4591 "string.m"
          }
#line 4593 "string.m"
        else
#line 4592 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4593 "string.m"
      }
#line 4593 "string.m"
      break;
#line 4593 "string.m"
    }
#line 4576 "string.m"
}

#line 4576 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4576 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4576 "string.m"
  MR_String mercury__string__String_8,
#line 4576 "string.m"
  MR_Integer mercury__string__I_9,
#line 4576 "string.m"
  MR_Integer mercury__string__End_10,
#line 4576 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4576 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4576 "string.m"
{
#line 4593 "string.m"
  while (MR_TRUE)
#line 4593 "string.m"
    {
#line 4593 "string.m"
      /* tailcall optimized into a loop */
#line 4593 "string.m"
      {
#line 4593 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4593 "string.m"
        MR_Integer mercury__string__J_12;
#line 4593 "string.m"
        MR_Char mercury__string__Char_13;

#line 4587 "string.m"
        if (mercury__string__succeeded)
#line 4587 "string.m"
          {
#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2204 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4587 "string.m"
            if (mercury__string__succeeded)
#line 4589 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4587 "string.m"
          }
#line 4593 "string.m"
        if (mercury__string__succeeded)
#line 4591 "string.m"
          {
#line 4591 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4548 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4548 "string.m"
            {
#line 4548 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4592 "string.m"
            /* direct tailcall eliminated */
#line 4592 "string.m"
            {
#line 4592 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4592 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4592 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4592 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4592 "string.m"
            }
#line 4592 "string.m"
            continue;
#line 4591 "string.m"
          }
#line 4593 "string.m"
        else
#line 4592 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4593 "string.m"
      }
#line 4593 "string.m"
      break;
#line 4593 "string.m"
    }
#line 4576 "string.m"
}

#line 4656 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4656 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4656 "string.m"
  MR_String mercury__string__String_8,
#line 4656 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4656 "string.m"
  MR_Integer mercury__string__I_10,
#line 4656 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4656 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4656 "string.m"
{
#line 4675 "string.m"
  while (MR_TRUE)
#line 4675 "string.m"
    {
#line 4675 "string.m"
      /* tailcall optimized into a loop */
#line 4675 "string.m"
      {
#line 4675 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4675 "string.m"
        MR_Integer mercury__string__J_12;
#line 4675 "string.m"
        MR_Char mercury__string__Char_13;

#line 4669 "string.m"
        if (mercury__string__succeeded)
#line 4669 "string.m"
          {
#line 2033 "string.m"
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
#line 2033 "string.m"

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

#line 2331 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2033 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4669 "string.m"
            if (mercury__string__succeeded)
#line 4671 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4669 "string.m"
          }
#line 4675 "string.m"
        if (mercury__string__succeeded)
#line 4673 "string.m"
          {
#line 4673 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4640 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4640 "string.m"
            {
#line 4640 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4674 "string.m"
            /* direct tailcall eliminated */
#line 4674 "string.m"
            {
#line 4674 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4674 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4674 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4674 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4674 "string.m"
            }
#line 4674 "string.m"
            continue;
#line 4673 "string.m"
          }
#line 4675 "string.m"
        else
#line 4674 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4675 "string.m"
      }
#line 4675 "string.m"
      break;
#line 4675 "string.m"
    }
#line 4656 "string.m"
}

#line 4578 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_51_95_95_91_50_93_95_48_6_p_0(
#line 4578 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4578 "string.m"
  MR_String mercury__string__String_8,
#line 4578 "string.m"
  MR_Integer mercury__string__I_9,
#line 4578 "string.m"
  MR_Integer mercury__string__End_10,
#line 4578 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4578 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15)
#line 4578 "string.m"
{
#line 4593 "string.m"
  while (MR_TRUE)
#line 4593 "string.m"
    {
#line 4593 "string.m"
      /* tailcall optimized into a loop */
#line 4593 "string.m"
      {
#line 4593 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4593 "string.m"
        MR_Integer mercury__string__J_12;
#line 4593 "string.m"
        MR_Char mercury__string__Char_13;

#line 4587 "string.m"
        if (mercury__string__succeeded)
#line 4587 "string.m"
          {
#line 1944 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_51_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2455 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4587 "string.m"
            if (mercury__string__succeeded)
#line 4589 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4587 "string.m"
          }
#line 4593 "string.m"
        if (mercury__string__succeeded)
#line 4591 "string.m"
          {
#line 4591 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4591 "string.m"
            MR_Integer mercury__string__M_24;
#line 4591 "string.m"
            MR_Integer mercury__string__V_25_25;

#line 4912 "string.m"
            {
#line 4912 "string.m"
              mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__V_19_19, mercury__string__Char_13, &mercury__string__M_24);
            }
#line 4591 "string.m"
            if (mercury__string__succeeded)
#line 4591 "string.m"
              {
#line 4913 "string.m"
                mercury__string__V_25_25 = (mercury__string__V_19_19 * mercury__string__STATE_VARIABLE_Acc_0_14);
#line 4913 "string.m"
                mercury__string__STATE_VARIABLE_Acc_16_16 = (mercury__string__V_25_25 + mercury__string__M_24);
#line 4914 "string.m"
                mercury__string__succeeded = (mercury__string__STATE_VARIABLE_Acc_0_14 <= mercury__string__STATE_VARIABLE_Acc_16_16);
#line 4914 "string.m"
                if (!(mercury__string__succeeded))
#line 4914 "string.m"
                  {
#line 4914 "string.m"
                    mercury__string__succeeded = (mercury__string__V_19_19 == (MR_Integer) 10);
#line 4914 "string.m"
                    mercury__string__succeeded = !(mercury__string__succeeded);
#line 4914 "string.m"
                  }
#line 4591 "string.m"
                if (mercury__string__succeeded)
#line 4592 "string.m"
                  {
#line 4592 "string.m"
                    /* direct tailcall eliminated */
#line 4592 "string.m"
                    {
#line 4592 "string.m"
                      MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4592 "string.m"
                      MR_Integer mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4592 "string.m"
                      mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4592 "string.m"
                      mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4592 "string.m"
                    }
#line 4592 "string.m"
                    continue;
#line 4592 "string.m"
                  }
#line 4591 "string.m"
              }
#line 4591 "string.m"
          }
#line 4593 "string.m"
        else
#line 4592 "string.m"
          {
#line 4592 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4592 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4592 "string.m"
          }
#line 4593 "string.m"
        return mercury__string__succeeded;
#line 4593 "string.m"
      }
#line 4593 "string.m"
      break;
#line 4593 "string.m"
    }
#line 4578 "string.m"
}

#line 4578 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_50_93_95_48_6_p_0(
#line 4578 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4578 "string.m"
  MR_String mercury__string__String_8,
#line 4578 "string.m"
  MR_Integer mercury__string__I_9,
#line 4578 "string.m"
  MR_Integer mercury__string__End_10,
#line 4578 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4578 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15)
#line 4578 "string.m"
{
#line 4593 "string.m"
  while (MR_TRUE)
#line 4593 "string.m"
    {
#line 4593 "string.m"
      /* tailcall optimized into a loop */
#line 4593 "string.m"
      {
#line 4593 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4593 "string.m"
        MR_Integer mercury__string__J_12;
#line 4593 "string.m"
        MR_Char mercury__string__Char_13;

#line 4587 "string.m"
        if (mercury__string__succeeded)
#line 4587 "string.m"
          {
#line 1944 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2617 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4587 "string.m"
            if (mercury__string__succeeded)
#line 4589 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4587 "string.m"
          }
#line 4593 "string.m"
        if (mercury__string__succeeded)
#line 4591 "string.m"
          {
#line 4591 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4591 "string.m"
            MR_Integer mercury__string__M_24;
#line 4591 "string.m"
            MR_Integer mercury__string__V_25_25;

#line 4920 "string.m"
            {
#line 4920 "string.m"
              mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__V_19_19, mercury__string__Char_13, &mercury__string__M_24);
            }
#line 4591 "string.m"
            if (mercury__string__succeeded)
#line 4591 "string.m"
              {
#line 4921 "string.m"
                mercury__string__V_25_25 = (mercury__string__V_19_19 * mercury__string__STATE_VARIABLE_Acc_0_14);
#line 4921 "string.m"
                mercury__string__STATE_VARIABLE_Acc_16_16 = (mercury__string__V_25_25 - mercury__string__M_24);
#line 4922 "string.m"
                mercury__string__succeeded = (mercury__string__STATE_VARIABLE_Acc_16_16 <= mercury__string__STATE_VARIABLE_Acc_0_14);
#line 4922 "string.m"
                if (!(mercury__string__succeeded))
#line 4922 "string.m"
                  {
#line 4922 "string.m"
                    mercury__string__succeeded = (mercury__string__V_19_19 == (MR_Integer) 10);
#line 4922 "string.m"
                    mercury__string__succeeded = !(mercury__string__succeeded);
#line 4922 "string.m"
                  }
#line 4591 "string.m"
                if (mercury__string__succeeded)
#line 4592 "string.m"
                  {
#line 4592 "string.m"
                    /* direct tailcall eliminated */
#line 4592 "string.m"
                    {
#line 4592 "string.m"
                      MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4592 "string.m"
                      MR_Integer mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4592 "string.m"
                      mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4592 "string.m"
                      mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4592 "string.m"
                    }
#line 4592 "string.m"
                    continue;
#line 4592 "string.m"
                  }
#line 4591 "string.m"
              }
#line 4591 "string.m"
          }
#line 4593 "string.m"
        else
#line 4592 "string.m"
          {
#line 4592 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4592 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4592 "string.m"
          }
#line 4593 "string.m"
        return mercury__string__succeeded;
#line 4593 "string.m"
      }
#line 4593 "string.m"
      break;
#line 4593 "string.m"
    }
#line 4578 "string.m"
}

#line 133 "list.int"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_52_93_95_48_4_p_in__list_0(
#line 133 "list.int"
  MR_String mercury__string__V_20_20,
#line 133 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 133 "list.int"
  MR_Word mercury__string__HeadVar__3_3,
#line 133 "list.int"
  MR_Word * mercury__string__HeadVar__4_4)
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
        MR_bool mercury__string__succeeded;

#line 380 "list.opt"
        if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__string__HeadVar__4_4 = mercury__string__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_Word mercury__string__H_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__string__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Word mercury__string__STATE_VARIABLE_A_15_15_13;

#line 4712 "string.m"
            {
#line 4712 "string.m"
              mercury__string__STATE_VARIABLE_A_15_15_13 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_50_95_95_91_50_93_95_48_3_f_in__list_0(mercury__string__V_20_20, mercury__string__H_10_9, mercury__string__HeadVar__3_3);
            }
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__string__HeadVar__2__tmp_copy_2 = mercury__string__T_11_10;
#line 384 "list.opt"
              MR_Word mercury__string__HeadVar__3__tmp_copy_3 = mercury__string__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__string__HeadVar__3_3 = mercury__string__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__string__HeadVar__2_2 = mercury__string__HeadVar__2__tmp_copy_2;
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

#line 4656 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4656 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4656 "string.m"
  MR_String mercury__string__String_8,
#line 4656 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4656 "string.m"
  MR_Integer mercury__string__I_10,
#line 4656 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4656 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4656 "string.m"
{
#line 4675 "string.m"
  while (MR_TRUE)
#line 4675 "string.m"
    {
#line 4675 "string.m"
      /* tailcall optimized into a loop */
#line 4675 "string.m"
      {
#line 4675 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4675 "string.m"
        MR_Integer mercury__string__J_12;
#line 4675 "string.m"
        MR_Char mercury__string__Char_13;

#line 4669 "string.m"
        if (mercury__string__succeeded)
#line 4669 "string.m"
          {
#line 2033 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_10 ;
		{
#line 2033 "string.m"

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

#line 2854 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2033 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4669 "string.m"
            if (mercury__string__succeeded)
#line 4671 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4669 "string.m"
          }
#line 4675 "string.m"
        if (mercury__string__succeeded)
#line 4673 "string.m"
          {
#line 4673 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4647 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4647 "string.m"
            {
#line 4647 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4674 "string.m"
            /* direct tailcall eliminated */
#line 4674 "string.m"
            {
#line 4674 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4674 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4674 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4674 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4674 "string.m"
            }
#line 4674 "string.m"
            continue;
#line 4673 "string.m"
          }
#line 4675 "string.m"
        else
#line 4674 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4675 "string.m"
      }
#line 4675 "string.m"
      break;
#line 4675 "string.m"
    }
#line 4656 "string.m"
}

#line 4576 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_56_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4576 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4576 "string.m"
  MR_String mercury__string__String_8,
#line 4576 "string.m"
  MR_Integer mercury__string__I_9,
#line 4576 "string.m"
  MR_Integer mercury__string__End_10,
#line 4576 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4576 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4576 "string.m"
{
#line 4593 "string.m"
  while (MR_TRUE)
#line 4593 "string.m"
    {
#line 4593 "string.m"
      /* tailcall optimized into a loop */
#line 4593 "string.m"
      {
#line 4593 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4593 "string.m"
        MR_Integer mercury__string__J_12;
#line 4593 "string.m"
        MR_Char mercury__string__Char_13;

#line 4587 "string.m"
        if (mercury__string__succeeded)
#line 4587 "string.m"
          {
#line 1944 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_56_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2978 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4587 "string.m"
            if (mercury__string__succeeded)
#line 4589 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4587 "string.m"
          }
#line 4593 "string.m"
        if (mercury__string__succeeded)
#line 4591 "string.m"
          {
#line 4591 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4565 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4565 "string.m"
            {
#line 4565 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4592 "string.m"
            /* direct tailcall eliminated */
#line 4592 "string.m"
            {
#line 4592 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4592 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4592 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4592 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4592 "string.m"
            }
#line 4592 "string.m"
            continue;
#line 4591 "string.m"
          }
#line 4593 "string.m"
        else
#line 4592 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4593 "string.m"
      }
#line 4593 "string.m"
      break;
#line 4593 "string.m"
    }
#line 4576 "string.m"
}

#line 4120 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_49_95_95_91_50_93_95_48_6_p_0(
#line 4120 "string.m"
  MR_Char mercury__string__V_21_21,
#line 4120 "string.m"
  MR_String mercury__string__Str_8,
#line 4120 "string.m"
  MR_Integer mercury__string__I_9,
#line 4120 "string.m"
  MR_Integer mercury__string__SegEnd_10,
#line 4120 "string.m"
  MR_Word mercury__string__Acc0_11,
#line 4120 "string.m"
  MR_Word * mercury__string__Acc_12)
#line 4120 "string.m"
{
#line 4140 "string.m"
  while (MR_TRUE)
#line 4140 "string.m"
    {
#line 4140 "string.m"
      /* tailcall optimized into a loop */
#line 4140 "string.m"
      {
#line 4140 "string.m"
        MR_bool mercury__string__succeeded;
#line 4140 "string.m"
        MR_Integer mercury__string__J_13;
#line 4140 "string.m"
        MR_Char mercury__string__C_14;

#line 2033 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_49_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 2033 "string.m"

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

#line 3101 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_13  = PrevIndex;
	 mercury__string__C_14  = Ch;
#line 2033 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4140 "string.m"
        if (mercury__string__succeeded)
#line 4136 "string.m"
          {
#line 4149 "string.m"
            mercury__string__succeeded = (mercury__string__V_21_21 == mercury__string__C_14);
#line 4136 "string.m"
            if (mercury__string__succeeded)
#line 4133 "string.m"
              {
#line 4133 "string.m"
                MR_String mercury__string__Seg_16;
#line 4133 "string.m"
                MR_Word mercury__string__V_18_18;

#line 4039 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_49_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_8 ;
	Start =  mercury__string__I_9 ;
	End =  mercury__string__SegEnd_10 ;
		{
#line 4039 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 3149 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_16  = SubString;
#line 4039 "string.m"
}
#line 4135 "string.m"
                {
#line 4135 "string.m"
                  mercury__string__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4135 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 0) = ((MR_Box) (mercury__string__Seg_16));
#line 4135 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4135 "string.m"
                }
#line 4135 "string.m"
                /* direct tailcall eliminated */
#line 4135 "string.m"
                {
#line 4135 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;
#line 4135 "string.m"
                  MR_Integer mercury__string__SegEnd__tmp_copy_10 = mercury__string__J_13;
#line 4135 "string.m"
                  MR_Word mercury__string__Acc0__tmp_copy_11 = mercury__string__V_18_18;

#line 4135 "string.m"
                  mercury__string__Acc0_11 = mercury__string__Acc0__tmp_copy_11;
#line 4135 "string.m"
                  mercury__string__SegEnd_10 = mercury__string__SegEnd__tmp_copy_10;
#line 4135 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4135 "string.m"
                }
#line 4135 "string.m"
                continue;
#line 4133 "string.m"
              }
#line 4136 "string.m"
            else
#line 4138 "string.m"
              {
#line 4138 "string.m"
                /* direct tailcall eliminated */
#line 4138 "string.m"
                {
#line 4138 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;

#line 4138 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4138 "string.m"
                }
#line 4138 "string.m"
                continue;
#line 4138 "string.m"
              }
#line 4136 "string.m"
          }
#line 4140 "string.m"
        else
#line 4142 "string.m"
          {
#line 4142 "string.m"
            MR_String mercury__string__Seg_20;

#line 4039 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_49_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_8 ;
	Start =  (MR_Integer) 0 ;
	End =  mercury__string__SegEnd_10 ;
		{
#line 4039 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 3239 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_20  = SubString;
#line 4039 "string.m"
}
#line 4143 "string.m"
            {
#line 4143 "string.m"
              MR_Word base;
#line 4143 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4143 "string.m"
              *mercury__string__Acc_12 = base;
#line 4143 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Seg_20));
#line 4143 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4143 "string.m"
            }
#line 4142 "string.m"
          }
#line 4140 "string.m"
      }
#line 4140 "string.m"
      break;
#line 4140 "string.m"
    }
#line 4120 "string.m"
}

#line 911 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(
#line 911 "string.m"
  MR_Integer mercury__string__V_20_20,
#line 911 "string.m"
  MR_String mercury__string__String_8,
#line 911 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 911 "string.m"
  MR_Integer mercury__string__End0_10,
#line 911 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 911 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15)
#line 911 "string.m"
{
#line 4559 "string.m"
  {
#line 4559 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4559 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4559 "string.m"
    MR_Integer mercury__string__End_13;
#line 4559 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 3320 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4562 "string.m"
    {
#line 4562 "string.m"
      return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_51_95_95_91_50_93_95_48_6_p_0(mercury__string__V_20_20, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4559 "string.m"
    return mercury__string__succeeded;
#line 4559 "string.m"
  }
#line 911 "string.m"
}

#line 4101 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_120_116_95_98_111_117_110_100_97_114_121_95_95_104_111_49_48_95_95_91_50_93_95_48_4_p_0(
#line 4101 "string.m"
  MR_Word mercury__string__V_11_11,
#line 4101 "string.m"
  MR_String mercury__string__String_6,
#line 4101 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4101 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4101 "string.m"
{
#line 4110 "string.m"
  while (MR_TRUE)
#line 4110 "string.m"
    {
#line 4110 "string.m"
      /* tailcall optimized into a loop */
#line 4110 "string.m"
      {
#line 4110 "string.m"
        MR_bool mercury__string__succeeded;
#line 4110 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4106 "string.m"
        MR_Char mercury__string__Char_10;
#line 38 "std_util.opt"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 1944 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_120_116_95_98_111_117_110_100_97_114_121_95_95_104_111_49_48_95_95_91_50_93_95_48_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Cur_7 ;
		{
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 3404 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4106 "string.m"
        if (mercury__string__succeeded)
#line 4106 "string.m"
          {
#line 38 "std_util.opt"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_11_11, (MR_Integer) 1)));
#line 38 "std_util.opt"
            {
#line 38 "std_util.opt"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__V_11_11), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 37 "std_util.opt"
            mercury__string__succeeded = !(mercury__string__succeeded);
#line 4106 "string.m"
          }
#line 4110 "string.m"
        if (mercury__string__succeeded)
#line 4109 "string.m"
          {
#line 4109 "string.m"
            /* direct tailcall eliminated */
#line 4109 "string.m"
            {
#line 4109 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4109 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4109 "string.m"
            }
#line 4109 "string.m"
            continue;
#line 4109 "string.m"
          }
#line 4110 "string.m"
        else
#line 4111 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4110 "string.m"
      }
#line 4110 "string.m"
      break;
#line 4110 "string.m"
    }
#line 4101 "string.m"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_String mercury__string__V_12_12,
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__string__succeeded;
#line 170 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_String mercury__string__H_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__string__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_String mercury__string__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__string__V_9_9;

#line 172 "list.opt"
        {
#line 172 "list.opt"
          mercury__string__V_8_8 = mercury__string__IntroducedFrom__func__word_wrap_loop__4521__1_2_f_0(mercury__string__V_12_12, mercury__string__H_6_6);
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__string__V_9_9 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_f_in__list_0(mercury__string__V_12_12, mercury__string__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Char mercury__string__V_12_12,
#line 324 "list.int"
  MR_Integer mercury__string__V_13_13,
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__string__succeeded;
#line 170 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_String mercury__string__H_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__string__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_String mercury__string__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__string__V_9_9;
#line 171 "list.opt"
        MR_Integer mercury__string__Length_25;

#line 4344 "string.m"
        {
#line 4344 "string.m"
          mercury__string__count_codepoints_2_p_0(mercury__string__H_6_6, &mercury__string__Length_25);
        }
#line 4345 "string.m"
        mercury__string__succeeded = (mercury__string__Length_25 < mercury__string__V_13_13);
#line 4349 "string.m"
        if (mercury__string__succeeded)
#line 4346 "string.m"
          {
#line 4346 "string.m"
            MR_Integer mercury__string__Count_26 = (mercury__string__V_13_13 - mercury__string__Length_25);
#line 4346 "string.m"
            MR_String mercury__string__PadString_27;

#line 4347 "string.m"
            {
#line 4347 "string.m"
              mercury__string__duplicate_char_3_p_0(mercury__string__V_12_12, mercury__string__Count_26, &mercury__string__PadString_27);
            }
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__H_6_6 ;
	S2 =  mercury__string__PadString_27 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 3602 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3149 "string.m"
}
#line 4346 "string.m"
          }
#line 4349 "string.m"
        else
#line 4350 "string.m"
          mercury__string__V_8_8 = mercury__string__H_6_6;
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__string__V_9_9 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0(mercury__string__V_12_12, mercury__string__V_13_13, mercury__string__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0(
#line 324 "list.int"
  MR_Char mercury__string__V_12_12,
#line 324 "list.int"
  MR_Integer mercury__string__V_13_13,
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__string__succeeded;
#line 170 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_String mercury__string__H_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__string__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_String mercury__string__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__string__V_9_9;
#line 171 "list.opt"
        MR_Integer mercury__string__Length_25;

#line 4331 "string.m"
        {
#line 4331 "string.m"
          mercury__string__count_codepoints_2_p_0(mercury__string__H_6_6, &mercury__string__Length_25);
        }
#line 4332 "string.m"
        mercury__string__succeeded = (mercury__string__Length_25 < mercury__string__V_13_13);
#line 4336 "string.m"
        if (mercury__string__succeeded)
#line 4333 "string.m"
          {
#line 4333 "string.m"
            MR_Integer mercury__string__Count_26 = (mercury__string__V_13_13 - mercury__string__Length_25);
#line 4333 "string.m"
            MR_String mercury__string__PadString_27;

#line 4334 "string.m"
            {
#line 4334 "string.m"
              mercury__string__duplicate_char_3_p_0(mercury__string__V_12_12, mercury__string__Count_26, &mercury__string__PadString_27);
            }
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_27 ;
	S2 =  mercury__string__H_6_6 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 3717 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3149 "string.m"
}
#line 4333 "string.m"
          }
#line 4336 "string.m"
        else
#line 4337 "string.m"
          mercury__string__V_8_8 = mercury__string__H_6_6;
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__string__V_9_9 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0(mercury__string__V_12_12, mercury__string__V_13_13, mercury__string__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__string__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 4101 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho10__ho47_4_p_0(
#line 4101 "string.m"
  MR_String mercury__string__String_6,
#line 4101 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4101 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4101 "string.m"
{
#line 4110 "string.m"
  while (MR_TRUE)
#line 4110 "string.m"
    {
#line 4110 "string.m"
      /* tailcall optimized into a loop */
#line 4110 "string.m"
      {
#line 4110 "string.m"
        MR_bool mercury__string__succeeded;
#line 4110 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4106 "string.m"
        MR_Char mercury__string__Char_10;

#line 1944 "string.m"
{
#define MR_PROC_LABEL mercury__string__next_boundary__ho10__ho47_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Cur_7 ;
		{
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 3822 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4106 "string.m"
        if (mercury__string__succeeded)
#line 4106 "string.m"
          {
#line 38 "std_util.opt"
            {
#line 38 "std_util.opt"
              mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
            }
#line 37 "std_util.opt"
            mercury__string__succeeded = !(mercury__string__succeeded);
#line 4106 "string.m"
          }
#line 4110 "string.m"
        if (mercury__string__succeeded)
#line 4109 "string.m"
          {
#line 4109 "string.m"
            /* direct tailcall eliminated */
#line 4109 "string.m"
            {
#line 4109 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4109 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4109 "string.m"
            }
#line 4109 "string.m"
            continue;
#line 4109 "string.m"
          }
#line 4110 "string.m"
        else
#line 4111 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4110 "string.m"
      }
#line 4110 "string.m"
      break;
#line 4110 "string.m"
    }
#line 4101 "string.m"
}

#line 4081 "string.m"
static void MR_CALL 
mercury__string__words_loop__ho36_4_p_0(
#line 4081 "string.m"
  MR_String mercury__string__String_6,
#line 4081 "string.m"
  MR_Integer mercury__string__WordStart_7,
#line 4081 "string.m"
  MR_Word * mercury__string__Words_8)
#line 4081 "string.m"
{
#line 4084 "string.m"
  {
#line 4084 "string.m"
    MR_bool mercury__string__succeeded;
#line 4084 "string.m"
    MR_Integer mercury__string__WordEnd_9;

#line 4085 "string.m"
    {
#line 4085 "string.m"
      mercury__string__next_boundary__ho10__ho47_4_p_0(mercury__string__String_6, mercury__string__WordStart_7, &mercury__string__WordEnd_9);
    }
#line 4086 "string.m"
    mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__WordStart_7);
#line 4088 "string.m"
    if (mercury__string__succeeded)
#line 4087 "string.m"
      *mercury__string__Words_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4088 "string.m"
    else
#line 4089 "string.m"
      {
#line 4089 "string.m"
        MR_String mercury__string__Word_10;
#line 4089 "string.m"
        MR_Integer mercury__string__NextWordStart_11;

#line 4039 "string.m"
{
#define MR_PROC_LABEL mercury__string__words_loop__ho36_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__String_6 ;
	Start =  mercury__string__WordStart_7 ;
	End =  mercury__string__WordEnd_9 ;
		{
#line 4039 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 3938 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Word_10  = SubString;
#line 4039 "string.m"
}
#line 4090 "string.m"
        {
#line 4090 "string.m"
          mercury__string__next_boundary__ho35_4_p_0(mercury__string__String_6, mercury__string__WordEnd_9, &mercury__string__NextWordStart_11);
        }
#line 4091 "string.m"
        mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__NextWordStart_11);
#line 4093 "string.m"
        if (mercury__string__succeeded)
#line 4092 "string.m"
          {
#line 4092 "string.m"
            MR_Word mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 4092 "string.m"
            {
#line 4092 "string.m"
              MR_Word base;
#line 4092 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4092 "string.m"
              *mercury__string__Words_8 = base;
#line 4092 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4092 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__V_14_14));
#line 4092 "string.m"
            }
#line 4092 "string.m"
          }
#line 4093 "string.m"
        else
#line 4094 "string.m"
          {
#line 4094 "string.m"
            MR_Word mercury__string__Words0_12;

#line 4094 "string.m"
            {
#line 4094 "string.m"
              mercury__string__words_loop__ho36_4_p_0(mercury__string__String_6, mercury__string__NextWordStart_11, &mercury__string__Words0_12);
            }
#line 4095 "string.m"
            {
#line 4095 "string.m"
              MR_Word base;
#line 4095 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4095 "string.m"
              *mercury__string__Words_8 = base;
#line 4095 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4095 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Words0_12));
#line 4095 "string.m"
            }
#line 4094 "string.m"
          }
#line 4089 "string.m"
      }
#line 4084 "string.m"
  }
#line 4081 "string.m"
}

#line 4101 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho35_4_p_0(
#line 4101 "string.m"
  MR_String mercury__string__String_6,
#line 4101 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4101 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4101 "string.m"
{
#line 4110 "string.m"
  while (MR_TRUE)
#line 4110 "string.m"
    {
#line 4110 "string.m"
      /* tailcall optimized into a loop */
#line 4110 "string.m"
      {
#line 4110 "string.m"
        MR_bool mercury__string__succeeded;
#line 4110 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4106 "string.m"
        MR_Char mercury__string__Char_10;

#line 1944 "string.m"
{
#define MR_PROC_LABEL mercury__string__next_boundary__ho35_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Cur_7 ;
		{
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4061 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4106 "string.m"
        if (mercury__string__succeeded)
#line 4107 "string.m"
          {
#line 4107 "string.m"
            mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
          }
#line 4110 "string.m"
        if (mercury__string__succeeded)
#line 4109 "string.m"
          {
#line 4109 "string.m"
            /* direct tailcall eliminated */
#line 4109 "string.m"
            {
#line 4109 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4109 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4109 "string.m"
            }
#line 4109 "string.m"
            continue;
#line 4109 "string.m"
          }
#line 4110 "string.m"
        else
#line 4111 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4110 "string.m"
      }
#line 4110 "string.m"
      break;
#line 4110 "string.m"
    }
#line 4101 "string.m"
}

#line 2918 "string.m"
static void MR_CALL 
mercury__string__suffix_length_loop__ho33_4_p_0(
#line 2918 "string.m"
  MR_String mercury__string__S_6,
#line 2918 "string.m"
  MR_Integer mercury__string__I_7,
#line 2918 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 2918 "string.m"
{
#line 2927 "string.m"
  while (MR_TRUE)
#line 2927 "string.m"
    {
#line 2927 "string.m"
      /* tailcall optimized into a loop */
#line 2927 "string.m"
      {
#line 2927 "string.m"
        MR_bool mercury__string__succeeded;
#line 2927 "string.m"
        MR_Integer mercury__string__J_9;
#line 2923 "string.m"
        MR_Char mercury__string__Char_10;

#line 2033 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_length_loop__ho33_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_6 ;
	Index =  mercury__string__I_7 ;
		{
#line 2033 "string.m"

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

#line 4165 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = PrevIndex;
	 mercury__string__Char_10  = Ch;
#line 2033 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2923 "string.m"
        if (mercury__string__succeeded)
#line 2924 "string.m"
          {
#line 2924 "string.m"
            mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
          }
#line 2927 "string.m"
        if (mercury__string__succeeded)
#line 2926 "string.m"
          {
#line 2926 "string.m"
            /* direct tailcall eliminated */
#line 2926 "string.m"
            {
#line 2926 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 2926 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 2926 "string.m"
            }
#line 2926 "string.m"
            continue;
#line 2926 "string.m"
          }
#line 2927 "string.m"
        else
#line 2928 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 2927 "string.m"
      }
#line 2927 "string.m"
      break;
#line 2927 "string.m"
    }
#line 2918 "string.m"
}

#line 2901 "string.m"
static void MR_CALL 
mercury__string__prefix_length_loop__ho32_4_p_0(
#line 2901 "string.m"
  MR_String mercury__string__S_6,
#line 2901 "string.m"
  MR_Integer mercury__string__I_7,
#line 2901 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 2901 "string.m"
{
#line 2910 "string.m"
  while (MR_TRUE)
#line 2910 "string.m"
    {
#line 2910 "string.m"
      /* tailcall optimized into a loop */
#line 2910 "string.m"
      {
#line 2910 "string.m"
        MR_bool mercury__string__succeeded;
#line 2910 "string.m"
        MR_Integer mercury__string__J_9;
#line 2906 "string.m"
        MR_Char mercury__string__Char_10;

#line 1944 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_length_loop__ho32_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_6 ;
	Index =  mercury__string__I_7 ;
		{
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4266 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2906 "string.m"
        if (mercury__string__succeeded)
#line 2907 "string.m"
          {
#line 2907 "string.m"
            mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
          }
#line 2910 "string.m"
        if (mercury__string__succeeded)
#line 2909 "string.m"
          {
#line 2909 "string.m"
            /* direct tailcall eliminated */
#line 2909 "string.m"
            {
#line 2909 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 2909 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 2909 "string.m"
            }
#line 2909 "string.m"
            continue;
#line 2909 "string.m"
          }
#line 2910 "string.m"
        else
#line 2911 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 2910 "string.m"
      }
#line 2910 "string.m"
      break;
#line 2910 "string.m"
    }
#line 2901 "string.m"
}

#line 2829 "string.m"
static MR_bool MR_CALL 
mercury__string__all_match_loop__ho30_3_p_0(
#line 2829 "string.m"
  MR_String mercury__string__String_5,
#line 2829 "string.m"
  MR_Integer mercury__string__Cur_6)
#line 2829 "string.m"
{
#line 2836 "string.m"
  while (MR_TRUE)
#line 2836 "string.m"
    {
#line 2836 "string.m"
      /* tailcall optimized into a loop */
#line 2836 "string.m"
      {
#line 2836 "string.m"
        MR_bool mercury__string__succeeded;
#line 2836 "string.m"
        MR_Integer mercury__string__Next_7;
#line 2836 "string.m"
        MR_Char mercury__string__Char_8;

#line 1944 "string.m"
{
#define MR_PROC_LABEL mercury__string__all_match_loop__ho30_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_5 ;
	Index =  mercury__string__Cur_6 ;
		{
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4365 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__Char_8  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2836 "string.m"
        if (mercury__string__succeeded)
#line 2834 "string.m"
          {
#line 2834 "string.m"
            {
#line 2834 "string.m"
              mercury__string__succeeded = mercury__char__is_alnum_1_p_0(mercury__string__Char_8);
            }
#line 2834 "string.m"
            if (mercury__string__succeeded)
#line 2835 "string.m"
              {
#line 2835 "string.m"
                /* direct tailcall eliminated */
#line 2835 "string.m"
                {
#line 2835 "string.m"
                  MR_Integer mercury__string__Cur__tmp_copy_6 = mercury__string__Next_7;

#line 2835 "string.m"
                  mercury__string__Cur_6 = mercury__string__Cur__tmp_copy_6;
#line 2835 "string.m"
                }
#line 2835 "string.m"
                continue;
#line 2835 "string.m"
              }
#line 2834 "string.m"
          }
#line 2836 "string.m"
        else
#line 2837 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 2836 "string.m"
        return mercury__string__succeeded;
#line 2836 "string.m"
      }
#line 2836 "string.m"
      break;
#line 2836 "string.m"
    }
#line 2829 "string.m"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho16_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__string__succeeded;
#line 170 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_Word mercury__string__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__string__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Integer mercury__string__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__string__V_9_9;

#line 172 "list.opt"
        {
#line 172 "list.opt"
          mercury__string__V_8_8 = mercury__string__find_max_length_1_f_0(mercury__string__H_6_6);
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__string__V_9_9 = mercury__string__map__ho16_2_f_in__list_0(mercury__string__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 435 "list.int"
static MR_Word MR_CALL 
mercury__string__map_corresponding__ho15_3_f_in__list_0(
#line 435 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 435 "list.int"
  MR_Word mercury__string__HeadVar__3_3)
#line 435 "list.int"
{
#line 202 "list.opt"
  {
#line 202 "list.opt"
    MR_bool mercury__string__succeeded;
#line 202 "list.opt"
    MR_Word mercury__string__HeadVar__4_4;

#line 202 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "list.opt"
      if ((mercury__string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "list.opt"
        mercury__string__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "list.opt"
      else
#line 203 "list.opt"
        {
#line 10 "require.opt"
          {
#line 10 "require.opt"
            mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
          }
#line 203 "list.opt"
        }
#line 202 "list.opt"
    else
#line 202 "list.opt"
      {
#line 202 "list.opt"
        MR_Word mercury__string__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 202 "list.opt"
        MR_Integer mercury__string__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 202 "list.opt"
        if ((mercury__string__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 208 "list.opt"
          {
#line 10 "require.opt"
            {
#line 10 "require.opt"
              mercury__require__unexpected_3_p_0((MR_String) "list", (MR_String) "function \140list.map_corresponding\'/3", (MR_String) "mismatched list lengths");
            }
#line 208 "list.opt"
          }
#line 202 "list.opt"
        else
#line 213 "list.opt"
          {
#line 213 "list.opt"
            MR_Word mercury__string__HB_21_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
#line 213 "list.opt"
            MR_Word mercury__string__TBs_22_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 1)));
#line 213 "list.opt"
            MR_Word mercury__string__V_23_25;
#line 213 "list.opt"
            MR_Word mercury__string__V_24_26;

#line 214 "list.opt"
            {
#line 214 "list.opt"
              mercury__string__V_23_25 = mercury__string__pad_column_2_f_0(mercury__string__V_35_35, mercury__string__HB_21_23);
            }
#line 215 "list.opt"
            {
#line 215 "list.opt"
              mercury__string__V_24_26 = mercury__string__map_corresponding__ho15_3_f_in__list_0(mercury__string__V_34_34, mercury__string__TBs_22_24);
            }
#line 213 "list.opt"
            {
#line 213 "list.opt"
              mercury__string__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_4, 0) = ((MR_Box) (mercury__string__V_23_25));
#line 213 "list.opt"
              MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_4, 1) = ((MR_Box) (mercury__string__V_24_26));
#line 213 "list.opt"
            }
#line 213 "list.opt"
          }
#line 202 "list.opt"
      }
#line 202 "list.opt"
    return mercury__string__HeadVar__4_4;
#line 202 "list.opt"
  }
#line 435 "list.int"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho14_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__string__succeeded;
#line 170 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_Word mercury__string__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__string__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Word mercury__string__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__string__V_9_9;

#line 172 "list.opt"
        {
#line 172 "list.opt"
          mercury__string__V_8_8 = mercury__string__find_max_length_with_limit_1_f_0(mercury__string__H_6_6);
        }
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__string__V_9_9 = mercury__string__map__ho14_2_f_in__list_0(mercury__string__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 324 "list.int"
static MR_Word MR_CALL 
mercury__string__map__ho13_2_f_in__list_0(
#line 324 "list.int"
  MR_Word mercury__string__HeadVar__2_2)
#line 324 "list.int"
{
#line 170 "list.opt"
  {
#line 170 "list.opt"
    MR_bool mercury__string__succeeded;
#line 170 "list.opt"
    MR_Word mercury__string__HeadVar__3_3;

#line 170 "list.opt"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "list.opt"
      mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "list.opt"
    else
#line 171 "list.opt"
      {
#line 171 "list.opt"
        MR_Word mercury__string__H_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "list.opt"
        MR_Word mercury__string__T_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "list.opt"
        MR_Word mercury__string__V_8_8;
#line 171 "list.opt"
        MR_Word mercury__string__V_9_9;
#line 171 "list.opt"
        MR_Word mercury__string__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__H_6_6, (MR_Integer) 0)));
#line 4731 "string.m"
        MR_Word mercury__string__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__H_6_6, (MR_Integer) 1)));

#line 4731 "string.m"
        if (((MR_tag((MR_Word) mercury__string__V_19_19)) == (MR_mktag((MR_Integer) 0))))
#line 4731 "string.m"
          mercury__string__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_19_19, (MR_Integer) 0)));
#line 4731 "string.m"
        else
#line 4732 "string.m"
          mercury__string__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_19_19, (MR_Integer) 0)));
#line 173 "list.opt"
        {
#line 173 "list.opt"
          mercury__string__V_9_9 = mercury__string__map__ho13_2_f_in__list_0(mercury__string__T_7_7);
        }
#line 171 "list.opt"
        {
#line 171 "list.opt"
          mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 171 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 171 "list.opt"
        }
#line 171 "list.opt"
      }
#line 170 "list.opt"
    return mercury__string__HeadVar__3_3;
#line 170 "list.opt"
  }
#line 324 "list.int"
}

#line 133 "list.int"
static void MR_CALL 
mercury__string__foldl__ho8_4_p_in__list_0(
#line 133 "list.int"
  MR_Word mercury__string__HeadVar__2_2,
#line 133 "list.int"
  MR_Integer mercury__string__HeadVar__3_3,
#line 133 "list.int"
  MR_Integer * mercury__string__HeadVar__4_4)
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
        MR_bool mercury__string__succeeded;

#line 380 "list.opt"
        if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "list.opt"
          *mercury__string__HeadVar__4_4 = mercury__string__HeadVar__3_3;
#line 380 "list.opt"
        else
#line 382 "list.opt"
          {
#line 382 "list.opt"
            MR_String mercury__string__H_10_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "list.opt"
            MR_Word mercury__string__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 382 "list.opt"
            MR_Integer mercury__string__STATE_VARIABLE_A_15_15_13;
#line 382 "list.opt"
            MR_Integer mercury__string__Length_19;

#line 2460 "string.m"
            {
#line 2460 "string.m"
              mercury__string__count_codepoints_2_p_0(mercury__string__H_10_9, &mercury__string__Length_19);
            }
#line 4866 "string.m"
            mercury__string__succeeded = (mercury__string__Length_19 > mercury__string__HeadVar__3_3);
#line 4868 "string.m"
            if (mercury__string__succeeded)
#line 4867 "string.m"
              mercury__string__STATE_VARIABLE_A_15_15_13 = mercury__string__Length_19;
#line 4868 "string.m"
            else
#line 4869 "string.m"
              mercury__string__STATE_VARIABLE_A_15_15_13 = mercury__string__HeadVar__3_3;
#line 384 "list.opt"
            /* direct tailcall eliminated */
#line 384 "list.opt"
            {
#line 384 "list.opt"
              MR_Word mercury__string__HeadVar__2__tmp_copy_2 = mercury__string__T_11_10;
#line 384 "list.opt"
              MR_Integer mercury__string__HeadVar__3__tmp_copy_3 = mercury__string__STATE_VARIABLE_A_15_15_13;

#line 384 "list.opt"
              mercury__string__HeadVar__3_3 = mercury__string__HeadVar__3__tmp_copy_3;
#line 384 "list.opt"
              mercury__string__HeadVar__2_2 = mercury__string__HeadVar__2__tmp_copy_2;
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

#line 4521 "string.m"
static MR_String MR_CALL 
mercury__string__IntroducedFrom__func__word_wrap_loop__4521__1_2_f_0(
#line 4521 "string.m"
  MR_String mercury__string__WordSep_2,
#line 4521 "string.m"
  MR_String mercury__string__HeadVar__2_60)
#line 4521 "string.m"
{
#line 4521 "string.m"
  {
#line 4521 "string.m"
    MR_bool mercury__string__succeeded;
#line 4521 "string.m"
    MR_String mercury__string__HeadVar__3_61;
#line 4521 "string.m"
    MR_String mercury__string__V_62_62;

#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__IntroducedFrom__func__word_wrap_loop__4521__1_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__WordSep_2 ;
	S2 =  (MR_String) "\n" ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 4825 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_62_62  = S3;
#line 3149 "string.m"
}
#line 4521 "string.m"
    {
#line 4521 "string.m"
      return mercury__string__HeadVar__3_61 = mercury__string__f_43_43_2_f_0(mercury__string__HeadVar__2_60, mercury__string__V_62_62);
    }
#line 4521 "string.m"
    return mercury__string__HeadVar__3_61;
#line 4521 "string.m"
  }
#line 4521 "string.m"
}

#line 4391 "string.m"
static MR_Word MR_CALL 
mercury__string__IntroducedFrom__func__replace_all__4391__1_3_f_0(
#line 4391 "string.m"
  MR_String mercury__string__Subst_7,
#line 4391 "string.m"
  MR_Char mercury__string__HeadVar__2_16,
#line 4391 "string.m"
  MR_Word mercury__string__HeadVar__3_17)
#line 4391 "string.m"
{
#line 4391 "string.m"
  {
#line 4391 "string.m"
    MR_bool mercury__string__succeeded;
#line 4391 "string.m"
    MR_Word mercury__string__HeadVar__4_18;
#line 4391 "string.m"
    MR_String mercury__string__V_19_19;
#line 4391 "string.m"
    MR_String mercury__string__V_20_20;
#line 4391 "string.m"
    MR_Word mercury__string__V_35_35;
#line 4391 "string.m"
    MR_Word mercury__string__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1442 "string.m"
    MR_String mercury__string__Str0_45;

#line 5053 "string.m"
    {
#line 5053 "string.m"
      mercury__string__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5053 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_35_35, 0) = ((MR_Box) (MR_Word) (mercury__string__HeadVar__2_16));
#line 5053 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_35_35, 1) = ((MR_Box) (mercury__string__V_36_36));
#line 5053 "string.m"
    }
#line 1440 "string.m"
    {
#line 1440 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_35_35, &mercury__string__Str0_45);
    }
#line 1442 "string.m"
    if (mercury__string__succeeded)
#line 1441 "string.m"
      mercury__string__V_20_20 = mercury__string__Str0_45;
#line 1442 "string.m"
    else
#line 1443 "string.m"
      {
#line 1443 "string.m"
        {
#line 1443 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1443 "string.m"
      }
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__IntroducedFrom__func__replace_all__4391__1_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_20_20 ;
	S2 =  mercury__string__Subst_7 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 4922 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_19_19  = S3;
#line 3149 "string.m"
}
#line 4391 "string.m"
    {
#line 4391 "string.m"
      mercury__string__HeadVar__4_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4391 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_18, 0) = ((MR_Box) (mercury__string__V_19_19));
#line 4391 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_18, 1) = ((MR_Box) (mercury__string__HeadVar__3_17));
#line 4391 "string.m"
    }
#line 4391 "string.m"
    return mercury__string__HeadVar__4_18;
#line 4391 "string.m"
  }
#line 4391 "string.m"
}

#line 107 "string.m"
void MR_CALL 
mercury__string____Compare____text_file_0_0(
#line 107 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 107 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 107 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 107 "string.m"
{
#line 107 "string.m"
  {
#line 107 "string.m"
    MR_bool mercury__string__succeeded;
#line 107 "string.m"
    MR_Integer mercury__string__CastX_6 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 107 "string.m"
    MR_Integer mercury__string__CastY_7 = (MR_Integer) mercury__string__HeadVar__3_3;

#line 107 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_6 == mercury__string__CastY_7);
#line 107 "string.m"
    if (mercury__string__succeeded)
#line 4970 "string.c"
      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 107 "string.m"
    else
#line 107 "string.m"
      {
#line 107 "string.m"
        MR_String mercury__string__V_4_4 = (MR_String) mercury__string__HeadVar__2_2;
#line 107 "string.m"
        MR_String mercury__string__V_5_5 = (MR_String) mercury__string__HeadVar__3_3;
#line 107 "string.m"
        MR_Integer mercury__string__Res_7_12;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____text_file_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__V_4_4 ;
	S2 =  mercury__string__V_5_5 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 4998 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Res_7_12  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
        mercury__string__succeeded = (mercury__string__Res_7_12 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
        if (mercury__string__succeeded)
#line 104 "private_builtin.opt"
          *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
        else
#line 110 "private_builtin.opt"
          {
#line 107 "private_builtin.opt"
            mercury__string__succeeded = (mercury__string__Res_7_12 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
            if (mercury__string__succeeded)
#line 109 "private_builtin.opt"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
            else
#line 111 "private_builtin.opt"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
          }
#line 107 "string.m"
      }
#line 107 "string.m"
  }
#line 107 "string.m"
}

#line 107 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0(
#line 107 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 107 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 107 "string.m"
{
#line 107 "string.m"
  {
#line 107 "string.m"
    MR_bool mercury__string__succeeded;
#line 107 "string.m"
    MR_Integer mercury__string__CastX_5 = (MR_Integer) mercury__string__HeadVar__1_1;
#line 107 "string.m"
    MR_Integer mercury__string__CastY_6 = (MR_Integer) mercury__string__HeadVar__2_2;

#line 107 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_5 == mercury__string__CastY_6);
#line 107 "string.m"
    if (mercury__string__succeeded)
#line 107 "string.m"
      mercury__string__succeeded = MR_TRUE;
#line 107 "string.m"
    else
#line 107 "string.m"
      {
#line 107 "string.m"
        MR_String mercury__string__V_3_3 = (MR_String) mercury__string__HeadVar__1_1;
#line 107 "string.m"
        MR_String mercury__string__V_4_4 = (MR_String) mercury__string__HeadVar__2_2;

#line 5067 "string.c"
        mercury__string__succeeded = (strcmp(mercury__string__V_3_3, mercury__string__V_4_4) == 0);
#line 107 "string.m"
      }
#line 107 "string.m"
    return mercury__string__succeeded;
#line 107 "string.m"
  }
#line 107 "string.m"
}

#line 1236 "string.m"
void MR_CALL 
mercury__string____Compare____poly_type_0_0(
#line 1236 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 1236 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 1236 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 1236 "string.m"
{
#line 1236 "string.m"
  {
#line 1236 "string.m"
    MR_bool mercury__string__succeeded;
#line 1236 "string.m"
    MR_Integer mercury__string__CastX_36 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 1236 "string.m"
    MR_Integer mercury__string__CastY_37 = (MR_Integer) mercury__string__HeadVar__3_3;

#line 1236 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_36 == mercury__string__CastY_37);
#line 1236 "string.m"
    if (mercury__string__succeeded)
#line 5102 "string.c"
      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 1236 "string.m"
    else
#line 1236 "string.m"
      if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 1236 "string.m"
        {
#line 1236 "string.m"
          MR_Char mercury__string__V_42_42 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1236 "string.m"
          if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1236 "string.m"
            {
#line 1236 "string.m"
              MR_Char mercury__string__V_35_35 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
#line 1236 "string.m"
              MR_Integer mercury__string__XI_7_49;
#line 1236 "string.m"
              MR_Integer mercury__string__YI_8_50;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__V_42_42 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 5137 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XI_7_49  = Int;
#line 66 "char.opt"
}
#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__V_35_35 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 5157 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__YI_8_50  = Int;
#line 66 "char.opt"
}
#line 84 "private_builtin.opt"
              mercury__string__succeeded = (mercury__string__XI_7_49 < mercury__string__YI_8_50);
#line 87 "private_builtin.opt"
              if (mercury__string__succeeded)
#line 86 "private_builtin.opt"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 87 "private_builtin.opt"
              else
#line 92 "private_builtin.opt"
                {
#line 89 "private_builtin.opt"
                  mercury__string__succeeded = (mercury__string__XI_7_49 == mercury__string__YI_8_50);
#line 92 "private_builtin.opt"
                  if (mercury__string__succeeded)
#line 91 "private_builtin.opt"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 92 "private_builtin.opt"
                  else
#line 93 "private_builtin.opt"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 92 "private_builtin.opt"
                }
#line 1236 "string.m"
            }
#line 1236 "string.m"
          else
#line 1236 "string.m"
            if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5192 "string.c"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1236 "string.m"
            else
#line 1236 "string.m"
              if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5198 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1236 "string.m"
              else
#line 5202 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1236 "string.m"
        }
#line 1236 "string.m"
      else
#line 1236 "string.m"
        if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1236 "string.m"
          {
#line 1236 "string.m"
            MR_Float mercury__string__V_43_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1236 "string.m"
            if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5217 "string.c"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1236 "string.m"
            else
#line 1236 "string.m"
              if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1236 "string.m"
                {
#line 1236 "string.m"
                  MR_Float mercury__string__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

#line 118 "private_builtin.opt"
                  mercury__string__succeeded = (mercury__string__V_43_43 < mercury__string__V_5_5);
#line 121 "private_builtin.opt"
                  if (mercury__string__succeeded)
#line 120 "private_builtin.opt"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 121 "private_builtin.opt"
                  else
#line 126 "private_builtin.opt"
                    {
#line 123 "private_builtin.opt"
                      mercury__string__succeeded = (mercury__string__V_43_43 > mercury__string__V_5_5);
#line 126 "private_builtin.opt"
                      if (mercury__string__succeeded)
#line 125 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 126 "private_builtin.opt"
                      else
#line 127 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 126 "private_builtin.opt"
                    }
#line 1236 "string.m"
                }
#line 1236 "string.m"
              else
#line 1236 "string.m"
                if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5256 "string.c"
                  *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1236 "string.m"
                else
#line 5260 "string.c"
                  *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1236 "string.m"
          }
#line 1236 "string.m"
        else
#line 1236 "string.m"
          if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1236 "string.m"
            {
#line 1236 "string.m"
              MR_Integer mercury__string__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1236 "string.m"
              if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5275 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1236 "string.m"
              else
#line 1236 "string.m"
                if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5281 "string.c"
                  *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1236 "string.m"
                else
#line 1236 "string.m"
                  if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1236 "string.m"
                    {
#line 1236 "string.m"
                      MR_Integer mercury__string__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

#line 66 "private_builtin.opt"
                      mercury__string__succeeded = (mercury__string__V_44_44 < mercury__string__V_15_15);
#line 69 "private_builtin.opt"
                      if (mercury__string__succeeded)
#line 68 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
                      else
#line 74 "private_builtin.opt"
                        {
#line 71 "private_builtin.opt"
                          mercury__string__succeeded = (mercury__string__V_44_44 == mercury__string__V_15_15);
#line 74 "private_builtin.opt"
                          if (mercury__string__succeeded)
#line 73 "private_builtin.opt"
                            *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
                          else
#line 75 "private_builtin.opt"
                            *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
                        }
#line 1236 "string.m"
                    }
#line 1236 "string.m"
                  else
#line 5318 "string.c"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1236 "string.m"
            }
#line 1236 "string.m"
          else
#line 1236 "string.m"
            {
#line 1236 "string.m"
              MR_String mercury__string__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1236 "string.m"
              if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5331 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1236 "string.m"
              else
#line 1236 "string.m"
                if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5337 "string.c"
                  *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1236 "string.m"
                else
#line 1236 "string.m"
                  if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5343 "string.c"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1236 "string.m"
                  else
#line 1236 "string.m"
                    {
#line 1236 "string.m"
                      MR_String mercury__string__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
#line 1236 "string.m"
                      MR_Integer mercury__string__Res_7_60;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__V_45_45 ;
	S2 =  mercury__string__V_25_25 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 5369 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Res_7_60  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
                      mercury__string__succeeded = (mercury__string__Res_7_60 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
                      if (mercury__string__succeeded)
#line 104 "private_builtin.opt"
                        *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
                      else
#line 110 "private_builtin.opt"
                        {
#line 107 "private_builtin.opt"
                          mercury__string__succeeded = (mercury__string__Res_7_60 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
                          if (mercury__string__succeeded)
#line 109 "private_builtin.opt"
                            *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
                          else
#line 111 "private_builtin.opt"
                            *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
                        }
#line 1236 "string.m"
                    }
#line 1236 "string.m"
            }
#line 1236 "string.m"
  }
#line 1236 "string.m"
}

#line 1236 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0(
#line 1236 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 1236 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 1236 "string.m"
{
#line 1236 "string.m"
  {
#line 1236 "string.m"
    MR_bool mercury__string__succeeded;
#line 1236 "string.m"
    MR_Integer mercury__string__CastX_11 = (MR_Integer) mercury__string__HeadVar__1_1;
#line 1236 "string.m"
    MR_Integer mercury__string__CastY_12 = (MR_Integer) mercury__string__HeadVar__2_2;

#line 1236 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_11 == mercury__string__CastY_12);
#line 1236 "string.m"
    if (mercury__string__succeeded)
#line 1236 "string.m"
      mercury__string__succeeded = MR_TRUE;
#line 1236 "string.m"
    else
#line 1236 "string.m"
      if (((MR_tag((MR_Word) mercury__string__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 1236 "string.m"
        {
#line 1236 "string.m"
          MR_Char mercury__string__V_9_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1236 "string.m"
          MR_Char mercury__string__V_10_10;

#line 1236 "string.m"
          mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1236 "string.m"
          if (mercury__string__succeeded)
#line 1236 "string.m"
            {
#line 1236 "string.m"
              mercury__string__V_10_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5450 "string.c"
              mercury__string__succeeded = (mercury__string__V_9_9 == mercury__string__V_10_10);
#line 1236 "string.m"
            }
#line 1236 "string.m"
        }
#line 1236 "string.m"
      else
#line 1236 "string.m"
        if (((MR_tag((MR_Word) mercury__string__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1236 "string.m"
          {
#line 1236 "string.m"
            MR_Float mercury__string__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1236 "string.m"
            MR_Float mercury__string__V_4_4;

#line 1236 "string.m"
            mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1236 "string.m"
            if (mercury__string__succeeded)
#line 1236 "string.m"
              {
#line 1236 "string.m"
                mercury__string__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5475 "string.c"
                mercury__string__succeeded = (mercury__string__V_3_3 == mercury__string__V_4_4);
#line 1236 "string.m"
              }
#line 1236 "string.m"
          }
#line 1236 "string.m"
        else
#line 1236 "string.m"
          if (((MR_tag((MR_Word) mercury__string__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1236 "string.m"
            {
#line 1236 "string.m"
              MR_Integer mercury__string__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1236 "string.m"
              MR_Integer mercury__string__V_6_6;

#line 1236 "string.m"
              mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1236 "string.m"
              if (mercury__string__succeeded)
#line 1236 "string.m"
                {
#line 1236 "string.m"
                  mercury__string__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5500 "string.c"
                  mercury__string__succeeded = (mercury__string__V_5_5 == mercury__string__V_6_6);
#line 1236 "string.m"
                }
#line 1236 "string.m"
            }
#line 1236 "string.m"
          else
#line 1236 "string.m"
            {
#line 1236 "string.m"
              MR_String mercury__string__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1236 "string.m"
              MR_String mercury__string__V_8_8;

#line 1236 "string.m"
              mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1236 "string.m"
              if (mercury__string__succeeded)
#line 1236 "string.m"
                {
#line 1236 "string.m"
                  mercury__string__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5523 "string.c"
                  mercury__string__succeeded = (strcmp(mercury__string__V_7_7, mercury__string__V_8_8) == 0);
#line 1236 "string.m"
                }
#line 1236 "string.m"
            }
#line 1236 "string.m"
    return mercury__string__succeeded;
#line 1236 "string.m"
  }
#line 1236 "string.m"
}

#line 101 "string.m"
void MR_CALL 
mercury__string____Compare____line_0_0(
#line 101 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 101 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 101 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 101 "string.m"
{
#line 101 "string.m"
  {
#line 101 "string.m"
    MR_bool mercury__string__succeeded;
#line 101 "string.m"
    MR_Integer mercury__string__CastX_6 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 101 "string.m"
    MR_Integer mercury__string__CastY_7 = (MR_Integer) mercury__string__HeadVar__3_3;

#line 101 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_6 == mercury__string__CastY_7);
#line 101 "string.m"
    if (mercury__string__succeeded)
#line 5560 "string.c"
      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 101 "string.m"
    else
#line 101 "string.m"
      {
#line 101 "string.m"
        MR_String mercury__string__V_4_4 = (MR_String) mercury__string__HeadVar__2_2;
#line 101 "string.m"
        MR_String mercury__string__V_5_5 = (MR_String) mercury__string__HeadVar__3_3;
#line 101 "string.m"
        MR_Integer mercury__string__Res_7_12;

#line 130 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____line_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__V_4_4 ;
	S2 =  mercury__string__V_5_5 ;
		{
#line 130 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 5588 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Res_7_12  = Res;
#line 130 "private_builtin.opt"
}
#line 102 "private_builtin.opt"
        mercury__string__succeeded = (mercury__string__Res_7_12 < (MR_Integer) 0);
#line 105 "private_builtin.opt"
        if (mercury__string__succeeded)
#line 104 "private_builtin.opt"
          *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 105 "private_builtin.opt"
        else
#line 110 "private_builtin.opt"
          {
#line 107 "private_builtin.opt"
            mercury__string__succeeded = (mercury__string__Res_7_12 == (MR_Integer) 0);
#line 110 "private_builtin.opt"
            if (mercury__string__succeeded)
#line 109 "private_builtin.opt"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 110 "private_builtin.opt"
            else
#line 111 "private_builtin.opt"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 110 "private_builtin.opt"
          }
#line 101 "string.m"
      }
#line 101 "string.m"
  }
#line 101 "string.m"
}

#line 101 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____line_0_0(
#line 101 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 101 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 101 "string.m"
{
#line 101 "string.m"
  {
#line 101 "string.m"
    MR_bool mercury__string__succeeded;
#line 101 "string.m"
    MR_Integer mercury__string__CastX_5 = (MR_Integer) mercury__string__HeadVar__1_1;
#line 101 "string.m"
    MR_Integer mercury__string__CastY_6 = (MR_Integer) mercury__string__HeadVar__2_2;

#line 101 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_5 == mercury__string__CastY_6);
#line 101 "string.m"
    if (mercury__string__succeeded)
#line 101 "string.m"
      mercury__string__succeeded = MR_TRUE;
#line 101 "string.m"
    else
#line 101 "string.m"
      {
#line 101 "string.m"
        MR_String mercury__string__V_3_3 = (MR_String) mercury__string__HeadVar__1_1;
#line 101 "string.m"
        MR_String mercury__string__V_4_4 = (MR_String) mercury__string__HeadVar__2_2;

#line 5657 "string.c"
        mercury__string__succeeded = (strcmp(mercury__string__V_3_3, mercury__string__V_4_4) == 0);
#line 101 "string.m"
      }
#line 101 "string.m"
    return mercury__string__succeeded;
#line 101 "string.m"
  }
#line 101 "string.m"
}

#line 4819 "string.m"
void MR_CALL 
mercury__string____Compare____justify_sense_0_0(
#line 4819 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 4819 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 4819 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 4819 "string.m"
{
#line 4819 "string.m"
  {
#line 4819 "string.m"
    MR_bool mercury__string__succeeded;
#line 4819 "string.m"
    MR_Integer mercury__string__Cast_HeadVar1_4 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 4819 "string.m"
    MR_Integer mercury__string__Cast_HeadVar2_5 = (MR_Integer) mercury__string__HeadVar__3_3;

#line 66 "private_builtin.opt"
    mercury__string__succeeded = (mercury__string__Cast_HeadVar1_4 < mercury__string__Cast_HeadVar2_5);
#line 69 "private_builtin.opt"
    if (mercury__string__succeeded)
#line 68 "private_builtin.opt"
      *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "private_builtin.opt"
    else
#line 74 "private_builtin.opt"
      {
#line 71 "private_builtin.opt"
        mercury__string__succeeded = (mercury__string__Cast_HeadVar1_4 == mercury__string__Cast_HeadVar2_5);
#line 74 "private_builtin.opt"
        if (mercury__string__succeeded)
#line 73 "private_builtin.opt"
          *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 74 "private_builtin.opt"
        else
#line 75 "private_builtin.opt"
          *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 74 "private_builtin.opt"
      }
#line 4819 "string.m"
  }
#line 4819 "string.m"
}

#line 4819 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0(
#line 4819 "string.m"
  MR_Word mercury__string__HeadVar__2_1,
#line 4819 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 4819 "string.m"
{
#line 5724 "string.c"
  {
#line 5726 "string.c"
    MR_bool mercury__string__succeeded = (mercury__string__HeadVar__2_1 == mercury__string__HeadVar__2_2);

#line 5729 "string.c"
    return mercury__string__succeeded;
#line 5731 "string.c"
  }
#line 4819 "string.m"
}

#line 1028 "string.m"
void MR_CALL 
mercury__string____Compare____justified_column_0_0(
#line 1028 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 1028 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 1028 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 1028 "string.m"
{
#line 1028 "string.m"
  {
#line 1028 "string.m"
    MR_bool mercury__string__succeeded;
#line 1028 "string.m"
    MR_Integer mercury__string__CastX_12 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 1028 "string.m"
    MR_Integer mercury__string__CastY_13 = (MR_Integer) mercury__string__HeadVar__3_3;

#line 1028 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_12 == mercury__string__CastY_13);
#line 1028 "string.m"
    if (mercury__string__succeeded)
#line 5760 "string.c"
      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 1028 "string.m"
    else
#line 1028 "string.m"
      if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1028 "string.m"
        {
#line 1028 "string.m"
          MR_Word mercury__string__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1028 "string.m"
          if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1028 "string.m"
            {
#line 1028 "string.m"
              MR_Word mercury__string__TypeInfo_15_15 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 1028 "string.m"
              MR_Word mercury__string__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

#line 1028 "string.m"
              {
#line 1028 "string.m"
                mercury__builtin__compare_3_p_0(mercury__string__TypeInfo_15_15, mercury__string__HeadVar__1_1, ((MR_Box) (mercury__string__V_16_16)), ((MR_Box) (mercury__string__V_5_5)));
#line 1028 "string.m"
                return;
              }
#line 1028 "string.m"
            }
#line 1028 "string.m"
          else
#line 5791 "string.c"
            *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1028 "string.m"
        }
#line 1028 "string.m"
      else
#line 1028 "string.m"
        {
#line 1028 "string.m"
          MR_Word mercury__string__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1028 "string.m"
          if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5804 "string.c"
            *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1028 "string.m"
          else
#line 1028 "string.m"
            {
#line 1028 "string.m"
              MR_Word mercury__string__TypeInfo_14_14 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 1028 "string.m"
              MR_Word mercury__string__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

#line 1028 "string.m"
              {
#line 1028 "string.m"
                mercury__builtin__compare_3_p_0(mercury__string__TypeInfo_14_14, mercury__string__HeadVar__1_1, ((MR_Box) (mercury__string__V_17_17)), ((MR_Box) (mercury__string__V_11_11)));
#line 1028 "string.m"
                return;
              }
#line 1028 "string.m"
            }
#line 1028 "string.m"
        }
#line 1028 "string.m"
  }
#line 1028 "string.m"
}

#line 1028 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0(
#line 1028 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 1028 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 1028 "string.m"
{
#line 1028 "string.m"
  {
#line 1028 "string.m"
    MR_bool mercury__string__succeeded;
#line 1028 "string.m"
    MR_Integer mercury__string__CastX_7 = (MR_Integer) mercury__string__HeadVar__1_1;
#line 1028 "string.m"
    MR_Integer mercury__string__CastY_8 = (MR_Integer) mercury__string__HeadVar__2_2;

#line 1028 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_7 == mercury__string__CastY_8);
#line 1028 "string.m"
    if (mercury__string__succeeded)
#line 1028 "string.m"
      mercury__string__succeeded = MR_TRUE;
#line 1028 "string.m"
    else
#line 1028 "string.m"
      if (((MR_tag((MR_Word) mercury__string__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1028 "string.m"
        {
#line 1028 "string.m"
          MR_Word mercury__string__TypeInfo_9_9;
#line 1028 "string.m"
          MR_Word mercury__string__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1028 "string.m"
          MR_Word mercury__string__V_4_4;

#line 1028 "string.m"
          mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1028 "string.m"
          if (mercury__string__succeeded)
#line 1028 "string.m"
            {
#line 1028 "string.m"
              mercury__string__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5876 "string.c"
              mercury__string__TypeInfo_9_9 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 5878 "string.c"
              {
#line 5880 "string.c"
                return mercury__string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__TypeInfo_9_9, ((MR_Box) (mercury__string__V_3_3)), ((MR_Box) (mercury__string__V_4_4)));
              }
#line 1028 "string.m"
            }
#line 1028 "string.m"
        }
#line 1028 "string.m"
      else
#line 1028 "string.m"
        {
#line 1028 "string.m"
          MR_Word mercury__string__TypeInfo_10_10;
#line 1028 "string.m"
          MR_Word mercury__string__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1028 "string.m"
          MR_Word mercury__string__V_6_6;

#line 1028 "string.m"
          mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1028 "string.m"
          if (mercury__string__succeeded)
#line 1028 "string.m"
            {
#line 1028 "string.m"
              mercury__string__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5906 "string.c"
              mercury__string__TypeInfo_10_10 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 5908 "string.c"
              {
#line 5910 "string.c"
                return mercury__string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__TypeInfo_10_10, ((MR_Box) (mercury__string__V_5_5)), ((MR_Box) (mercury__string__V_6_6)));
              }
#line 1028 "string.m"
            }
#line 1028 "string.m"
        }
#line 1028 "string.m"
    return mercury__string__succeeded;
#line 1028 "string.m"
  }
#line 1028 "string.m"
}

#line 5269 "string.m"
MR_Integer MR_CALL 
mercury__string__max_precision_0_f_0(void)
#line 5269 "string.m"
{
#line 5271 "string.m"
  {
#line 5271 "string.m"
    MR_bool mercury__string__succeeded;

#line 5271 "string.m"
    return (MR_Integer) 17;
#line 5271 "string.m"
  }
#line 5269 "string.m"
}

#line 5263 "string.m"
MR_Integer MR_CALL 
mercury__string__min_precision_0_f_0(void)
#line 5263 "string.m"
{
#line 5265 "string.m"
  {
#line 5265 "string.m"
    MR_bool mercury__string__succeeded;

#line 5265 "string.m"
    return (MR_Integer) 15;
#line 5265 "string.m"
  }
#line 5263 "string.m"
}

#line 5245 "string.m"
MR_String MR_CALL 
mercury__string__float_to_string_loop_2_f_0(
#line 5245 "string.m"
  MR_Integer mercury__string__Prec_4,
#line 5245 "string.m"
  MR_Float mercury__string__Float_5)
#line 5245 "string.m"
{
#line 5247 "string.m"
  while (MR_TRUE)
#line 5247 "string.m"
    {
#line 5247 "string.m"
      /* tailcall optimized into a loop */
#line 5247 "string.m"
      {
#line 5247 "string.m"
        MR_bool mercury__string__succeeded;
#line 5247 "string.m"
        MR_String mercury__string__String_6;
#line 5247 "string.m"
        MR_String mercury__string__Tmp_7;
#line 5247 "string.m"
        MR_String mercury__string__V_8_8;
#line 5247 "string.m"
        MR_Word mercury__string__V_9_9;
#line 5247 "string.m"
        MR_String mercury__string__V_11_11;
#line 5247 "string.m"
        MR_String mercury__string__V_12_12;
#line 5247 "string.m"
        MR_Word mercury__string__V_14_14;
#line 5247 "string.m"
        MR_Word mercury__string__V_15_15;

#line 5063 "string.m"
        {
#line 5063 "string.m"
          mercury__string__int_to_base_string_3_p_0(mercury__string__Prec_4, (MR_Integer) 10, &mercury__string__V_12_12);
        }
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_12_12 ;
	S2 =  (MR_String) "g" ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6019 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = S3;
#line 3149 "string.m"
}
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "%#." ;
	S2 =  mercury__string__V_11_11 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6046 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3149 "string.m"
}
#line 5248 "string.m"
        {
#line 5248 "string.m"
          mercury__string__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 5248 "string.m"
          MR_hl_field(MR_mktag(0), mercury__string__V_14_14, 0) = MR_box_float(mercury__string__Float_5);
#line 5248 "string.m"
        }
#line 5248 "string.m"
        mercury__string__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5248 "string.m"
        {
#line 5248 "string.m"
          mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5248 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_9_9, 0) = ((MR_Box) (mercury__string__V_14_14));
#line 5248 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_9_9, 1) = ((MR_Box) (mercury__string__V_15_15));
#line 5248 "string.m"
        }
#line 5333 "string.m"
        {
#line 5333 "string.m"
          mercury__string__format__format_impl_3_p_0(mercury__string__V_8_8, mercury__string__V_9_9, &mercury__string__Tmp_7);
        }
#line 5249 "string.m"
        mercury__string__succeeded = (mercury__string__Prec_4 == (MR_Integer) 17);
#line 5251 "string.m"
        if (mercury__string__succeeded)
#line 5250 "string.m"
          mercury__string__String_6 = mercury__string__Tmp_7;
#line 5251 "string.m"
        else
#line 5254 "string.m"
          {
#line 5252 "string.m"
            MR_Float mercury__string__V_19_19;

#line 4935 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__Tmp_7 ;
		{
#line 4935 "string.m"
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
#line 6113 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__V_19_19  = FloatVal;
#line 4935 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 5252 "string.m"
            if (mercury__string__succeeded)
#line 5252 "string.m"
              mercury__string__succeeded = (mercury__string__Float_5 == mercury__string__V_19_19);
#line 5254 "string.m"
            if (mercury__string__succeeded)
#line 5253 "string.m"
              mercury__string__String_6 = mercury__string__Tmp_7;
#line 5254 "string.m"
            else
#line 5255 "string.m"
              {
#line 5255 "string.m"
                MR_Integer mercury__string__V_16_16 = (mercury__string__Prec_4 + (MR_Integer) 1);

#line 5255 "string.m"
                /* direct tailcall eliminated */
#line 5255 "string.m"
                {
#line 5255 "string.m"
                  MR_Integer mercury__string__Prec__tmp_copy_4 = mercury__string__V_16_16;

#line 5255 "string.m"
                  mercury__string__Prec_4 = mercury__string__Prec__tmp_copy_4;
#line 5255 "string.m"
                }
#line 5255 "string.m"
                continue;
#line 5255 "string.m"
              }
#line 5254 "string.m"
          }
#line 5247 "string.m"
        return mercury__string__String_6;
#line 5247 "string.m"
      }
#line 5247 "string.m"
      break;
#line 5247 "string.m"
    }
#line 5245 "string.m"
}

#line 5149 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_group_2_6_p_0(
#line 5149 "string.m"
  MR_Integer mercury__string__NegN_7,
#line 5149 "string.m"
  MR_Integer mercury__string__Base_8,
#line 5149 "string.m"
  MR_Integer mercury__string__Curr_9,
#line 5149 "string.m"
  MR_Integer mercury__string__GroupLength_10,
#line 5149 "string.m"
  MR_String mercury__string__Sep_11,
#line 5149 "string.m"
  MR_String * mercury__string__Str_12)
#line 5149 "string.m"
{
#line 5160 "string.m"
  {
#line 5160 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__Curr_9 == mercury__string__GroupLength_10);
#line 5154 "string.m"
    MR_Integer mercury__string__V_19_19;

#line 5154 "string.m"
    if (mercury__string__succeeded)
#line 5154 "string.m"
      {
#line 5155 "string.m"
        mercury__string__V_19_19 = (MR_Integer) 0;
#line 5155 "string.m"
        mercury__string__succeeded = (mercury__string__GroupLength_10 > mercury__string__V_19_19);
#line 5154 "string.m"
      }
#line 5160 "string.m"
    if (mercury__string__succeeded)
#line 5158 "string.m"
      {
#line 5158 "string.m"
        MR_String mercury__string__Str1_13;

#line 5157 "string.m"
        {
#line 5157 "string.m"
          mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__NegN_7, mercury__string__Base_8, (MR_Integer) 0, mercury__string__GroupLength_10, mercury__string__Sep_11, &mercury__string__Str1_13);
        }
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str1_13 ;
	S2 =  mercury__string__Sep_11 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6232 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_12  = S3;
#line 3149 "string.m"
}
#line 5158 "string.m"
      }
#line 5160 "string.m"
    else
#line 5165 "string.m"
      {
#line 5161 "string.m"
        MR_Integer mercury__string__V_21_21 = ((MR_Integer) 0 - mercury__string__Base_8);

#line 5161 "string.m"
        mercury__string__succeeded = (mercury__string__NegN_7 > mercury__string__V_21_21);
#line 5165 "string.m"
        if (mercury__string__succeeded)
#line 5162 "string.m"
          {
#line 5162 "string.m"
            MR_Integer mercury__string__N_14 = ((MR_Integer) 0 - mercury__string__NegN_7);
#line 5162 "string.m"
            MR_Char mercury__string__DigitChar_15;
#line 5162 "string.m"
            MR_Word mercury__string__V_45_45;
#line 5162 "string.m"
            MR_Word mercury__string__V_46_46;
#line 1442 "string.m"
            MR_String mercury__string__Str0_55;

#line 5163 "string.m"
            {
#line 5163 "string.m"
              mercury__string__DigitChar_15 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_8, mercury__string__N_14);
            }
#line 5053 "string.m"
            mercury__string__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5053 "string.m"
            {
#line 5053 "string.m"
              mercury__string__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5053 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_15));
#line 5053 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 1) = ((MR_Box) (mercury__string__V_46_46));
#line 5053 "string.m"
            }
#line 1440 "string.m"
            {
#line 1440 "string.m"
              mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_45_45, &mercury__string__Str0_55);
            }
#line 1442 "string.m"
            if (mercury__string__succeeded)
#line 1441 "string.m"
              *mercury__string__Str_12 = mercury__string__Str0_55;
#line 1442 "string.m"
            else
#line 1443 "string.m"
              {
#line 1443 "string.m"
                {
#line 1443 "string.m"
                  mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1443 "string.m"
                  return;
                }
#line 1443 "string.m"
              }
#line 5162 "string.m"
          }
#line 5165 "string.m"
        else
#line 5166 "string.m"
          {
#line 5166 "string.m"
            MR_Integer mercury__string__NegN1_16;
#line 5166 "string.m"
            MR_Integer mercury__string__N10_17;
#line 5166 "string.m"
            MR_String mercury__string__DigitString_18;
#line 5166 "string.m"
            MR_Integer mercury__string__V_22_22;
#line 5166 "string.m"
            MR_Integer mercury__string__V_23_23;
#line 5166 "string.m"
            MR_String mercury__string__Str1_25;
#line 5166 "string.m"
            MR_Char mercury__string__DigitChar_26;
#line 5166 "string.m"
            MR_Word mercury__string__V_65_65;
#line 5166 "string.m"
            MR_Word mercury__string__V_66_66;
#line 1442 "string.m"
            MR_String mercury__string__Str0_75;

#line 292 "int.opt"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 292 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 6346 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 292 "int.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 98 "int.opt"
            if (mercury__string__succeeded)
#line 99 "int.opt"
              mercury__string__succeeded = (mercury__string__Base_8 == (MR_Integer) 0);
#line 104 "int.opt"
            if (mercury__string__succeeded)
#line 101 "int.opt"
              {
#line 101 "int.opt"
                MR_Word mercury__string__TypeCtorInfo_9_62 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 101 "int.opt"
                MR_Word mercury__string__V_7_60 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

#line 103 "int.opt"
                {
#line 103 "int.opt"
                  mercury__exception__throw_1_p_0(mercury__string__TypeCtorInfo_9_62, ((MR_Box) (mercury__string__V_7_60)));
#line 103 "int.opt"
                  return;
                }
#line 101 "int.opt"
              }
#line 104 "int.opt"
            else
#line 105 "int.opt"
              mercury__string__NegN1_16 = (mercury__string__NegN_7 / mercury__string__Base_8);
#line 5167 "string.m"
            mercury__string__V_22_22 = (mercury__string__NegN1_16 * mercury__string__Base_8);
#line 5167 "string.m"
            mercury__string__N10_17 = (mercury__string__V_22_22 - mercury__string__NegN_7);
#line 5168 "string.m"
            {
#line 5168 "string.m"
              mercury__string__DigitChar_26 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_8, mercury__string__N10_17);
            }
#line 5053 "string.m"
            mercury__string__V_66_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5053 "string.m"
            {
#line 5053 "string.m"
              mercury__string__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5053 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_65_65, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_26));
#line 5053 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_65_65, 1) = ((MR_Box) (mercury__string__V_66_66));
#line 5053 "string.m"
            }
#line 1440 "string.m"
            {
#line 1440 "string.m"
              mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_65_65, &mercury__string__Str0_75);
            }
#line 1442 "string.m"
            if (mercury__string__succeeded)
#line 1441 "string.m"
              mercury__string__DigitString_18 = mercury__string__Str0_75;
#line 1442 "string.m"
            else
#line 1443 "string.m"
              {
#line 1443 "string.m"
                {
#line 1443 "string.m"
                  mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1443 "string.m"
                  return;
                }
#line 1443 "string.m"
              }
#line 5170 "string.m"
            mercury__string__V_23_23 = (mercury__string__Curr_9 + (MR_Integer) 1);
#line 5170 "string.m"
            {
#line 5170 "string.m"
              mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__NegN1_16, mercury__string__Base_8, mercury__string__V_23_23, mercury__string__GroupLength_10, mercury__string__Sep_11, &mercury__string__Str1_25);
            }
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str1_25 ;
	S2 =  mercury__string__DigitString_18 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6451 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_12  = S3;
#line 3149 "string.m"
}
#line 5166 "string.m"
          }
#line 5165 "string.m"
      }
#line 5160 "string.m"
  }
#line 5149 "string.m"
}

#line 5125 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_group_1_5_p_0(
#line 5125 "string.m"
  MR_Integer mercury__string__N_6,
#line 5125 "string.m"
  MR_Integer mercury__string__Base_7,
#line 5125 "string.m"
  MR_Integer mercury__string__GroupLength_8,
#line 5125 "string.m"
  MR_String mercury__string__Sep_9,
#line 5125 "string.m"
  MR_String * mercury__string__Str_10)
#line 5125 "string.m"
{
#line 5135 "string.m"
  {
#line 5135 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__N_6 < (MR_Integer) 0);

#line 5135 "string.m"
    if (mercury__string__succeeded)
#line 5133 "string.m"
      {
#line 5133 "string.m"
        MR_String mercury__string__Str1_11;

#line 5133 "string.m"
        {
#line 5133 "string.m"
          mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__N_6, mercury__string__Base_7, (MR_Integer) 0, mercury__string__GroupLength_8, mercury__string__Sep_9, &mercury__string__Str1_11);
        }
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_1_5_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "-" ;
	S2 =  mercury__string__Str1_11 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6519 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_10  = S3;
#line 3149 "string.m"
}
#line 5133 "string.m"
      }
#line 5135 "string.m"
    else
#line 5136 "string.m"
      {
#line 5136 "string.m"
        MR_Integer mercury__string__N1_12 = ((MR_Integer) 0 - mercury__string__N_6);

#line 5137 "string.m"
        {
#line 5137 "string.m"
          mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__N1_12, mercury__string__Base_7, (MR_Integer) 0, mercury__string__GroupLength_8, mercury__string__Sep_9, mercury__string__Str_10);
#line 5137 "string.m"
          return;
        }
#line 5136 "string.m"
      }
#line 5135 "string.m"
  }
#line 5125 "string.m"
}

#line 5095 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_2_4_p_0(
#line 5095 "string.m"
  MR_Integer mercury__string__NegN_5,
#line 5095 "string.m"
  MR_Integer mercury__string__Base_6,
#line 5095 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_RevChars_0_12,
#line 5095 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_RevChars_13)
#line 5095 "string.m"
{
#line 5106 "string.m"
  {
#line 5106 "string.m"
    MR_bool mercury__string__succeeded;
#line 5102 "string.m"
    MR_Integer mercury__string__V_14_14 = ((MR_Integer) 0 - mercury__string__Base_6);

#line 5102 "string.m"
    mercury__string__succeeded = (mercury__string__NegN_5 > mercury__string__V_14_14);
#line 5106 "string.m"
    if (mercury__string__succeeded)
#line 5103 "string.m"
      {
#line 5103 "string.m"
        MR_Integer mercury__string__N_8 = ((MR_Integer) 0 - mercury__string__NegN_5);
#line 5103 "string.m"
        MR_Char mercury__string__DigitChar_9;

#line 5104 "string.m"
        {
#line 5104 "string.m"
          mercury__string__DigitChar_9 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_6, mercury__string__N_8);
        }
#line 5105 "string.m"
        {
#line 5105 "string.m"
          MR_Word base;
#line 5105 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5105 "string.m"
          *mercury__string__STATE_VARIABLE_RevChars_13 = base;
#line 5105 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_9));
#line 5105 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevChars_0_12));
#line 5105 "string.m"
        }
#line 5103 "string.m"
      }
#line 5106 "string.m"
    else
#line 5107 "string.m"
      {
#line 5107 "string.m"
        MR_Integer mercury__string__NegN1_10;
#line 5107 "string.m"
        MR_Integer mercury__string__N10_11;
#line 5107 "string.m"
        MR_Integer mercury__string__V_16_16;
#line 5107 "string.m"
        MR_Word mercury__string__STATE_VARIABLE_RevChars_17_17;
#line 5107 "string.m"
        MR_Char mercury__string__DigitChar_19;

#line 292 "int.opt"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_2_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 292 "int.opt"

#ifdef ML_OMIT_MATH_DOMAIN_CHECKS
    SUCCESS_INDICATOR = MR_FALSE;
#else
    SUCCESS_INDICATOR = MR_TRUE;
#endif

#line 6631 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 292 "int.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 98 "int.opt"
        if (mercury__string__succeeded)
#line 99 "int.opt"
          mercury__string__succeeded = (mercury__string__Base_6 == (MR_Integer) 0);
#line 104 "int.opt"
        if (mercury__string__succeeded)
#line 101 "int.opt"
          {
#line 101 "int.opt"
            MR_Word mercury__string__TypeCtorInfo_9_25 = (MR_Word) &mercury__math__math__type_ctor_info_domain_error_0;
#line 101 "int.opt"
            MR_Word mercury__string__V_7_23 = (MR_Word) ((MR_Box) ((MR_String) "int.\'//\': division by zero"));

#line 103 "int.opt"
            {
#line 103 "int.opt"
              mercury__exception__throw_1_p_0(mercury__string__TypeCtorInfo_9_25, ((MR_Box) (mercury__string__V_7_23)));
#line 103 "int.opt"
              return;
            }
#line 101 "int.opt"
          }
#line 104 "int.opt"
        else
#line 105 "int.opt"
          mercury__string__NegN1_10 = (mercury__string__NegN_5 / mercury__string__Base_6);
#line 5108 "string.m"
        mercury__string__V_16_16 = (mercury__string__NegN1_10 * mercury__string__Base_6);
#line 5108 "string.m"
        mercury__string__N10_11 = (mercury__string__V_16_16 - mercury__string__NegN_5);
#line 5109 "string.m"
        {
#line 5109 "string.m"
          mercury__string__DigitChar_19 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_6, mercury__string__N10_11);
        }
#line 5110 "string.m"
        {
#line 5110 "string.m"
          mercury__string__int_to_base_string_2_4_p_0(mercury__string__NegN1_10, mercury__string__Base_6, mercury__string__STATE_VARIABLE_RevChars_0_12, &mercury__string__STATE_VARIABLE_RevChars_17_17);
        }
#line 5111 "string.m"
        {
#line 5111 "string.m"
          MR_Word base;
#line 5111 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5111 "string.m"
          *mercury__string__STATE_VARIABLE_RevChars_13 = base;
#line 5111 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_19));
#line 5111 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevChars_17_17));
#line 5111 "string.m"
        }
#line 5107 "string.m"
      }
#line 5106 "string.m"
  }
#line 5095 "string.m"
}

#line 5081 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_1_3_p_0(
#line 5081 "string.m"
  MR_Integer mercury__string__N_4,
#line 5081 "string.m"
  MR_Integer mercury__string__Base_5,
#line 5081 "string.m"
  MR_String * mercury__string__Str_6)
#line 5081 "string.m"
{
#line 5083 "string.m"
  {
#line 5083 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__N_4 < (MR_Integer) 0);
#line 5083 "string.m"
    MR_Word mercury__string__RevChars_7;
#line 1580 "string.m"
    MR_String mercury__string__Str0_17;

#line 5089 "string.m"
    if (mercury__string__succeeded)
#line 5088 "string.m"
      {
#line 5088 "string.m"
        MR_Word mercury__string__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_1[4]);
#line 5088 "string.m"
        MR_Word mercury__string__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 5088 "string.m"
        {
#line 5088 "string.m"
          mercury__string__int_to_base_string_2_4_p_0(mercury__string__N_4, mercury__string__Base_5, mercury__string__V_10_10, &mercury__string__RevChars_7);
        }
#line 5088 "string.m"
      }
#line 5089 "string.m"
    else
#line 5090 "string.m"
      {
#line 5090 "string.m"
        MR_Integer mercury__string__NegN_8 = ((MR_Integer) 0 - mercury__string__N_4);
#line 5090 "string.m"
        MR_Word mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 5091 "string.m"
        {
#line 5091 "string.m"
          mercury__string__int_to_base_string_2_4_p_0(mercury__string__NegN_8, mercury__string__Base_5, mercury__string__V_14_14, &mercury__string__RevChars_7);
        }
#line 5090 "string.m"
      }
#line 1578 "string.m"
    {
#line 1578 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__RevChars_7, &mercury__string__Str0_17);
    }
#line 1580 "string.m"
    if (mercury__string__succeeded)
#line 1579 "string.m"
      *mercury__string__Str_6 = mercury__string__Str0_17;
#line 1580 "string.m"
    else
#line 1581 "string.m"
      {
#line 1581 "string.m"
        {
#line 1581 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
#line 1581 "string.m"
          return;
        }
#line 1581 "string.m"
      }
#line 5083 "string.m"
  }
#line 5081 "string.m"
}

#line 4916 "string.m"
MR_bool MR_CALL 
mercury__string__accumulate_negative_int_4_p_0(
#line 4916 "string.m"
  MR_Integer mercury__string__Base_5,
#line 4916 "string.m"
  MR_Char mercury__string__Char_6,
#line 4916 "string.m"
  MR_Integer mercury__string__N0_7,
#line 4916 "string.m"
  MR_Integer * mercury__string__N_8)
#line 4916 "string.m"
{
#line 4919 "string.m"
  {
#line 4919 "string.m"
    MR_bool mercury__string__succeeded;
#line 4919 "string.m"
    MR_Integer mercury__string__M_9;
#line 4919 "string.m"
    MR_Integer mercury__string__V_10_10;

#line 4920 "string.m"
    {
#line 4920 "string.m"
      mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__Base_5, mercury__string__Char_6, &mercury__string__M_9);
    }
#line 4919 "string.m"
    if (mercury__string__succeeded)
#line 4919 "string.m"
      {
#line 4921 "string.m"
        mercury__string__V_10_10 = (mercury__string__Base_5 * mercury__string__N0_7);
#line 4921 "string.m"
        *mercury__string__N_8 = (mercury__string__V_10_10 - mercury__string__M_9);
#line 4922 "string.m"
        mercury__string__succeeded = (*mercury__string__N_8 <= mercury__string__N0_7);
#line 4922 "string.m"
        if (!(mercury__string__succeeded))
#line 4922 "string.m"
          {
#line 4922 "string.m"
            mercury__string__succeeded = (mercury__string__Base_5 == (MR_Integer) 10);
#line 4922 "string.m"
            mercury__string__succeeded = !(mercury__string__succeeded);
#line 4922 "string.m"
          }
#line 4919 "string.m"
      }
#line 4919 "string.m"
    return mercury__string__succeeded;
#line 4919 "string.m"
  }
#line 4916 "string.m"
}

#line 4909 "string.m"
MR_bool MR_CALL 
mercury__string__accumulate_int_4_p_0(
#line 4909 "string.m"
  MR_Integer mercury__string__Base_5,
#line 4909 "string.m"
  MR_Char mercury__string__Char_6,
#line 4909 "string.m"
  MR_Integer mercury__string__N0_7,
#line 4909 "string.m"
  MR_Integer * mercury__string__N_8)
#line 4909 "string.m"
{
#line 4911 "string.m"
  {
#line 4911 "string.m"
    MR_bool mercury__string__succeeded;
#line 4911 "string.m"
    MR_Integer mercury__string__M_9;
#line 4911 "string.m"
    MR_Integer mercury__string__V_10_10;

#line 4912 "string.m"
    {
#line 4912 "string.m"
      mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__Base_5, mercury__string__Char_6, &mercury__string__M_9);
    }
#line 4911 "string.m"
    if (mercury__string__succeeded)
#line 4911 "string.m"
      {
#line 4913 "string.m"
        mercury__string__V_10_10 = (mercury__string__Base_5 * mercury__string__N0_7);
#line 4913 "string.m"
        *mercury__string__N_8 = (mercury__string__V_10_10 + mercury__string__M_9);
#line 4914 "string.m"
        mercury__string__succeeded = (mercury__string__N0_7 <= *mercury__string__N_8);
#line 4914 "string.m"
        if (!(mercury__string__succeeded))
#line 4914 "string.m"
          {
#line 4914 "string.m"
            mercury__string__succeeded = (mercury__string__Base_5 == (MR_Integer) 10);
#line 4914 "string.m"
            mercury__string__succeeded = !(mercury__string__succeeded);
#line 4914 "string.m"
          }
#line 4911 "string.m"
      }
#line 4911 "string.m"
    return mercury__string__succeeded;
#line 4911 "string.m"
  }
#line 4909 "string.m"
}

#line 4862 "string.m"
void MR_CALL 
mercury__string__max_str_length_3_p_0(
#line 4862 "string.m"
  MR_String mercury__string__Str_4,
#line 4862 "string.m"
  MR_Integer mercury__string__PrevMaxLen_5,
#line 4862 "string.m"
  MR_Integer * mercury__string__MaxLen_6)
#line 4862 "string.m"
{
#line 4864 "string.m"
  {
#line 4864 "string.m"
    MR_bool mercury__string__succeeded;
#line 4864 "string.m"
    MR_Integer mercury__string__Length_7;

#line 2460 "string.m"
    {
#line 2460 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Str_4, &mercury__string__Length_7);
    }
#line 4866 "string.m"
    mercury__string__succeeded = (mercury__string__Length_7 > mercury__string__PrevMaxLen_5);
#line 4868 "string.m"
    if (mercury__string__succeeded)
#line 4867 "string.m"
      *mercury__string__MaxLen_6 = mercury__string__Length_7;
#line 4868 "string.m"
    else
#line 4869 "string.m"
      *mercury__string__MaxLen_6 = mercury__string__PrevMaxLen_5;
#line 4864 "string.m"
  }
#line 4862 "string.m"
}

#line 4858 "string.m"
MR_String MR_CALL 
mercury__string__lpad_3_f_0(
#line 4858 "string.m"
  MR_Char mercury__string__Chr_5,
#line 4858 "string.m"
  MR_Integer mercury__string__N_6,
#line 4858 "string.m"
  MR_String mercury__string__Str_7)
#line 4858 "string.m"
{
#line 4330 "string.m"
  {
#line 4330 "string.m"
    MR_bool mercury__string__succeeded;
#line 4330 "string.m"
    MR_String mercury__string__HeadVar__4_4;
#line 4330 "string.m"
    MR_Integer mercury__string__Length_16;

#line 4331 "string.m"
    {
#line 4331 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Str_7, &mercury__string__Length_16);
    }
#line 4332 "string.m"
    mercury__string__succeeded = (mercury__string__Length_16 < mercury__string__N_6);
#line 4336 "string.m"
    if (mercury__string__succeeded)
#line 4333 "string.m"
      {
#line 4333 "string.m"
        MR_Integer mercury__string__Count_17 = (mercury__string__N_6 - mercury__string__Length_16);
#line 4333 "string.m"
        MR_String mercury__string__PadString_18;

#line 4334 "string.m"
        {
#line 4334 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__Chr_5, mercury__string__Count_17, &mercury__string__PadString_18);
        }
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__lpad_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_18 ;
	S2 =  mercury__string__Str_7 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6991 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
#line 3149 "string.m"
}
#line 4333 "string.m"
      }
#line 4336 "string.m"
    else
#line 4337 "string.m"
      mercury__string__HeadVar__4_4 = mercury__string__Str_7;
#line 4330 "string.m"
    return mercury__string__HeadVar__4_4;
#line 4330 "string.m"
  }
#line 4858 "string.m"
}

#line 4854 "string.m"
MR_String MR_CALL 
mercury__string__rpad_3_f_0(
#line 4854 "string.m"
  MR_Char mercury__string__Chr_5,
#line 4854 "string.m"
  MR_Integer mercury__string__N_6,
#line 4854 "string.m"
  MR_String mercury__string__Str_7)
#line 4854 "string.m"
{
#line 4343 "string.m"
  {
#line 4343 "string.m"
    MR_bool mercury__string__succeeded;
#line 4343 "string.m"
    MR_String mercury__string__HeadVar__4_4;
#line 4343 "string.m"
    MR_Integer mercury__string__Length_16;

#line 4344 "string.m"
    {
#line 4344 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Str_7, &mercury__string__Length_16);
    }
#line 4345 "string.m"
    mercury__string__succeeded = (mercury__string__Length_16 < mercury__string__N_6);
#line 4349 "string.m"
    if (mercury__string__succeeded)
#line 4346 "string.m"
      {
#line 4346 "string.m"
        MR_Integer mercury__string__Count_17 = (mercury__string__N_6 - mercury__string__Length_16);
#line 4346 "string.m"
        MR_String mercury__string__PadString_18;

#line 4347 "string.m"
        {
#line 4347 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__Chr_5, mercury__string__Count_17, &mercury__string__PadString_18);
        }
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__rpad_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str_7 ;
	S2 =  mercury__string__PadString_18 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7072 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
#line 3149 "string.m"
}
#line 4346 "string.m"
      }
#line 4349 "string.m"
    else
#line 4350 "string.m"
      mercury__string__HeadVar__4_4 = mercury__string__Str_7;
#line 4343 "string.m"
    return mercury__string__HeadVar__4_4;
#line 4343 "string.m"
  }
#line 4854 "string.m"
}

#line 4847 "string.m"
MR_Word MR_CALL 
mercury__string__pad_column_2_f_0(
#line 4847 "string.m"
  MR_Integer mercury__string__Width_1,
#line 4847 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 4847 "string.m"
{
#line 4849 "string.m"
  {
#line 4849 "string.m"
    MR_bool mercury__string__succeeded;
#line 4849 "string.m"
    MR_Word mercury__string__HeadVar__3_3;

#line 4849 "string.m"
    if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 4849 "string.m"
      {
#line 4849 "string.m"
        MR_Word mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 4850 "string.m"
        {
#line 4850 "string.m"
          return mercury__string__HeadVar__3_3 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0((MR_Char) 32, mercury__string__Width_1, mercury__string__Strings_5);
        }
#line 4849 "string.m"
      }
#line 4849 "string.m"
    else
#line 4851 "string.m"
      {
#line 4851 "string.m"
        MR_Word mercury__string__Strings_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 4852 "string.m"
        {
#line 4852 "string.m"
          return mercury__string__HeadVar__3_3 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0((MR_Char) 32, mercury__string__Width_1, mercury__string__Strings_9);
        }
#line 4851 "string.m"
      }
#line 4849 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4849 "string.m"
  }
#line 4847 "string.m"
}

#line 4823 "string.m"
MR_Word MR_CALL 
mercury__string__find_max_length_with_limit_1_f_0(
#line 4823 "string.m"
  MR_Word mercury__string__HeadVar__1_1)
#line 4823 "string.m"
{
#line 4826 "string.m"
  {
#line 4826 "string.m"
    MR_bool mercury__string__succeeded;
#line 4826 "string.m"
    MR_Word mercury__string__HeadVar__2_2;
#line 4826 "string.m"
    MR_Word mercury__string__JustColumn_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4826 "string.m"
    MR_Word mercury__string__MaybeLimit_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4826 "string.m"
    MR_Word mercury__string__Sense_5;
#line 4826 "string.m"
    MR_Integer mercury__string__MaxLength_6;
#line 4826 "string.m"
    MR_Word mercury__string__Strings_7;
#line 4826 "string.m"
    MR_Integer mercury__string__MaxLength0_8;

#line 4830 "string.m"
    if (((MR_tag((MR_Word) mercury__string__JustColumn_3)) == (MR_mktag((MR_Integer) 0))))
#line 4828 "string.m"
      {
#line 4828 "string.m"
        mercury__string__Strings_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 4829 "string.m"
        mercury__string__Sense_5 = (MR_Integer) 0;
#line 4828 "string.m"
      }
#line 4830 "string.m"
    else
#line 4831 "string.m"
      {
#line 4831 "string.m"
        mercury__string__Strings_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 4832 "string.m"
        mercury__string__Sense_5 = (MR_Integer) 1;
#line 4831 "string.m"
      }
#line 4834 "string.m"
    {
#line 4834 "string.m"
      mercury__string__foldl__ho8_4_p_in__list_0(mercury__string__Strings_7, (MR_Integer) 0, &mercury__string__MaxLength0_8);
    }
#line 4842 "string.m"
    if ((mercury__string__MaybeLimit_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4844 "string.m"
      mercury__string__MaxLength_6 = mercury__string__MaxLength0_8;
#line 4842 "string.m"
    else
#line 4836 "string.m"
      {
#line 4836 "string.m"
        MR_Integer mercury__string__Limit_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__MaybeLimit_4, (MR_Integer) 0)));

#line 4837 "string.m"
        mercury__string__succeeded = (mercury__string__MaxLength0_8 > mercury__string__Limit_9);
#line 4839 "string.m"
        if (mercury__string__succeeded)
#line 4838 "string.m"
          mercury__string__MaxLength_6 = mercury__string__Limit_9;
#line 4839 "string.m"
        else
#line 4840 "string.m"
          mercury__string__MaxLength_6 = mercury__string__MaxLength0_8;
#line 4836 "string.m"
      }
#line 4826 "string.m"
    {
#line 4826 "string.m"
      mercury__string__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4826 "string.m"
      MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, 0) = ((MR_Box) (mercury__string__Sense_5));
#line 4826 "string.m"
      MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, 1) = ((MR_Box) (mercury__string__MaxLength_6));
#line 4826 "string.m"
    }
#line 4826 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4826 "string.m"
  }
#line 4823 "string.m"
}

#line 4811 "string.m"
MR_Integer MR_CALL 
mercury__string__find_max_length_1_f_0(
#line 4811 "string.m"
  MR_Word mercury__string__JustColumn_3)
#line 4811 "string.m"
{
#line 4813 "string.m"
  {
#line 4813 "string.m"
    MR_bool mercury__string__succeeded;
#line 4813 "string.m"
    MR_Integer mercury__string__MaxLength_4;
#line 4813 "string.m"
    MR_Word mercury__string__Strings_5;

#line 4815 "string.m"
    if (((MR_tag((MR_Word) mercury__string__JustColumn_3)) == (MR_mktag((MR_Integer) 0))))
#line 4814 "string.m"
      mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 4815 "string.m"
    else
#line 4815 "string.m"
      mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 4817 "string.m"
    {
#line 4817 "string.m"
      mercury__string__foldl__ho8_4_p_in__list_0(mercury__string__Strings_5, (MR_Integer) 0, &mercury__string__MaxLength_4);
    }
#line 4813 "string.m"
    return mercury__string__MaxLength_4;
#line 4813 "string.m"
  }
#line 4811 "string.m"
}

#line 4807 "string.m"
MR_String MR_CALL 
mercury__string__join_rev_columns_3_f_0(
#line 4807 "string.m"
  MR_String mercury__string__Separator_5,
#line 4807 "string.m"
  MR_String mercury__string__Col1_6,
#line 4807 "string.m"
  MR_String mercury__string__Col2_7)
#line 4807 "string.m"
{
#line 4809 "string.m"
  {
#line 4809 "string.m"
    MR_bool mercury__string__succeeded;
#line 4809 "string.m"
    MR_String mercury__string__HeadVar__4_4;
#line 4809 "string.m"
    MR_String mercury__string__V_8_8;

#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_rev_columns_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Separator_5 ;
	S2 =  mercury__string__Col1_6 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7310 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3149 "string.m"
}
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_rev_columns_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Col2_7 ;
	S2 =  mercury__string__V_8_8 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7337 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
#line 3149 "string.m"
}
#line 4809 "string.m"
    return mercury__string__HeadVar__4_4;
#line 4809 "string.m"
  }
#line 4807 "string.m"
}

#line 4768 "string.m"
void MR_CALL 
mercury__string__pad_row_6_p_0(
#line 4768 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4768 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 4768 "string.m"
  MR_String mercury__string__Separator_3,
#line 4768 "string.m"
  MR_Integer mercury__string__SepLen_4,
#line 4768 "string.m"
  MR_Integer mercury__string__CurColumn_5,
#line 4768 "string.m"
  MR_String * mercury__string__HeadVar__6_6)
#line 4768 "string.m"
{
#line 4771 "string.m"
  {
#line 4771 "string.m"
    MR_bool mercury__string__succeeded;

#line 4771 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4771 "string.m"
      if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4771 "string.m"
        *mercury__string__HeadVar__6_6 = (MR_String) "";
#line 4771 "string.m"
      else
#line 4802 "string.m"
        {
#line 4803 "string.m"
          {
#line 4803 "string.m"
            mercury__require__error_2_p_0((MR_String) "predicate \140string.pad_row\'/6", (MR_String) "list length mismatch");
#line 4803 "string.m"
            return;
          }
#line 4802 "string.m"
        }
#line 4771 "string.m"
    else
#line 4771 "string.m"
      {
#line 4771 "string.m"
        MR_Word mercury__string__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4771 "string.m"
        MR_Word mercury__string__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));

#line 4771 "string.m"
        if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4804 "string.m"
          {
#line 4805 "string.m"
            {
#line 4805 "string.m"
              mercury__require__error_2_p_0((MR_String) "predicate \140string.pad_row\'/6", (MR_String) "list length mismatch");
#line 4805 "string.m"
              return;
            }
#line 4804 "string.m"
          }
#line 4771 "string.m"
        else
#line 4773 "string.m"
          {
#line 4773 "string.m"
            MR_Word mercury__string__Justify_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_55_55, (MR_Integer) 0)));
#line 4773 "string.m"
            MR_Integer mercury__string__MaxWidth_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__V_55_55, (MR_Integer) 1)));
#line 4773 "string.m"
            MR_String mercury__string__ColumnStr0_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 4773 "string.m"
            MR_Word mercury__string__ColumnStrs0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 4773 "string.m"
            MR_Integer mercury__string__NextColumn_19;
#line 4773 "string.m"
            MR_String mercury__string__LineRest_20;
#line 4773 "string.m"
            MR_Integer mercury__string__V_27_27 = (mercury__string__CurColumn_5 + mercury__string__MaxWidth_11);
#line 4777 "string.m"
            MR_Integer mercury__string__V_28_28;

#line 4774 "string.m"
            mercury__string__NextColumn_19 = (mercury__string__V_27_27 + mercury__string__SepLen_4);
#line 4775 "string.m"
            {
#line 4775 "string.m"
              mercury__string__pad_row_6_p_0(mercury__string__V_54_54, mercury__string__ColumnStrs0_14, mercury__string__Separator_3, mercury__string__SepLen_4, mercury__string__NextColumn_19, &mercury__string__LineRest_20);
            }
#line 2460 "string.m"
            {
#line 2460 "string.m"
              mercury__string__count_codepoints_2_p_0(mercury__string__ColumnStr0_13, &mercury__string__V_28_28);
            }
#line 4777 "string.m"
            mercury__string__succeeded = (mercury__string__V_28_28 <= mercury__string__MaxWidth_11);
#line 4792 "string.m"
            if (mercury__string__succeeded)
#line 4784 "string.m"
              {
#line 4784 "string.m"
                MR_String mercury__string__ColumnStr_21;

#line 4781 "string.m"
                if ((mercury__string__Justify_10 == (MR_Integer) 0))
#line 4779 "string.m"
                  {
#line 4779 "string.m"
                    MR_Integer mercury__string__Length_66;

#line 4344 "string.m"
                    {
#line 4344 "string.m"
                      mercury__string__count_codepoints_2_p_0(mercury__string__ColumnStr0_13, &mercury__string__Length_66);
                    }
#line 4345 "string.m"
                    mercury__string__succeeded = (mercury__string__Length_66 < mercury__string__MaxWidth_11);
#line 4349 "string.m"
                    if (mercury__string__succeeded)
#line 4346 "string.m"
                      {
#line 4346 "string.m"
                        MR_Integer mercury__string__Count_67 = (mercury__string__MaxWidth_11 - mercury__string__Length_66);
#line 4346 "string.m"
                        MR_String mercury__string__PadString_68;

#line 4347 "string.m"
                        {
#line 4347 "string.m"
                          mercury__string__duplicate_char_3_p_0((MR_Char) 32, mercury__string__Count_67, &mercury__string__PadString_68);
                        }
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_row_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__ColumnStr0_13 ;
	S2 =  mercury__string__PadString_68 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7504 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ColumnStr_21  = S3;
#line 3149 "string.m"
}
#line 4346 "string.m"
                      }
#line 4349 "string.m"
                    else
#line 4350 "string.m"
                      mercury__string__ColumnStr_21 = mercury__string__ColumnStr0_13;
#line 4779 "string.m"
                  }
#line 4781 "string.m"
                else
#line 4782 "string.m"
                  {
#line 4783 "string.m"
                    {
#line 4783 "string.m"
                      mercury__string__ColumnStr_21 = mercury__string__pad_left_3_f_0(mercury__string__ColumnStr0_13, (MR_Char) 32, mercury__string__MaxWidth_11);
                    }
#line 4782 "string.m"
                  }
#line 4788 "string.m"
                if ((mercury__string__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4786 "string.m"
                  *mercury__string__HeadVar__6_6 = mercury__string__ColumnStr_21;
#line 4788 "string.m"
                else
#line 4789 "string.m"
                  {
#line 4789 "string.m"
                    MR_String mercury__string__V_31_31;

#line 4790 "string.m"
                    {
#line 4790 "string.m"
                      mercury__string__V_31_31 = mercury__string__f_43_43_2_f_0(mercury__string__Separator_3, mercury__string__LineRest_20);
                    }
#line 4790 "string.m"
                    {
#line 4790 "string.m"
                      *mercury__string__HeadVar__6_6 = mercury__string__f_43_43_2_f_0(mercury__string__ColumnStr_21, mercury__string__V_31_31);
                    }
#line 4789 "string.m"
                  }
#line 4784 "string.m"
              }
#line 4792 "string.m"
            else
#line 4796 "string.m"
              if ((mercury__string__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4794 "string.m"
                *mercury__string__HeadVar__6_6 = mercury__string__ColumnStr0_13;
#line 4796 "string.m"
              else
#line 4797 "string.m"
                {
#line 4797 "string.m"
                  MR_String mercury__string__V_32_32;
#line 4797 "string.m"
                  MR_String mercury__string__V_33_33;
#line 4797 "string.m"
                  MR_String mercury__string__V_35_35;
#line 4797 "string.m"
                  MR_String mercury__string__V_36_36;

#line 1827 "string.m"
                  {
#line 1827 "string.m"
                    mercury__string__duplicate_char_3_p_0((MR_Char) 32, mercury__string__NextColumn_19, &mercury__string__V_36_36);
                  }
#line 4799 "string.m"
                  {
#line 4799 "string.m"
                    mercury__string__V_35_35 = mercury__string__f_43_43_2_f_0(mercury__string__V_36_36, mercury__string__LineRest_20);
                  }
#line 4798 "string.m"
                  {
#line 4798 "string.m"
                    mercury__string__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "\n", mercury__string__V_35_35);
                  }
#line 4798 "string.m"
                  {
#line 4798 "string.m"
                    mercury__string__V_32_32 = mercury__string__f_43_43_2_f_0(mercury__string__Separator_3, mercury__string__V_33_33);
                  }
#line 4798 "string.m"
                  {
#line 4798 "string.m"
                    *mercury__string__HeadVar__6_6 = mercury__string__f_43_43_2_f_0(mercury__string__ColumnStr0_13, mercury__string__V_32_32);
                  }
#line 4797 "string.m"
                }
#line 4773 "string.m"
          }
#line 4771 "string.m"
      }
#line 4771 "string.m"
  }
#line 4768 "string.m"
}

#line 4754 "string.m"
void MR_CALL 
mercury__string__get_next_line_3_p_0(
#line 4754 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4754 "string.m"
  MR_Word * mercury__string__HeadVar__2_2,
#line 4754 "string.m"
  MR_Word * mercury__string__HeadVar__3_3)
#line 4754 "string.m"
{
#line 4757 "string.m"
  {
#line 4757 "string.m"
    MR_bool mercury__string__succeeded;

#line 4757 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4757 "string.m"
      {
#line 4757 "string.m"
        *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4757 "string.m"
        *mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4757 "string.m"
      }
#line 4757 "string.m"
    else
#line 4759 "string.m"
      {
#line 4759 "string.m"
        MR_Word mercury__string__Column_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4759 "string.m"
        MR_Word mercury__string__Columns_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4759 "string.m"
        MR_String mercury__string__ColumnTop_6;
#line 4759 "string.m"
        MR_Word mercury__string__ColumnTops_7;
#line 4759 "string.m"
        MR_Word mercury__string__ColumnRest_8;
#line 4759 "string.m"
        MR_Word mercury__string__ColumnRests_9;

#line 4763 "string.m"
        if ((mercury__string__Column_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4761 "string.m"
          {
#line 4762 "string.m"
            {
#line 4762 "string.m"
              mercury__require__error_2_p_0((MR_String) "predicate \140string.get_next_line\'/3", (MR_String) "list length mismatch");
#line 4762 "string.m"
              return;
            }
#line 4761 "string.m"
          }
#line 4763 "string.m"
        else
#line 4764 "string.m"
          {
#line 4764 "string.m"
            mercury__string__ColumnTop_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__Column_4, (MR_Integer) 0)));
#line 4764 "string.m"
            mercury__string__ColumnRest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__Column_4, (MR_Integer) 1)));
#line 4764 "string.m"
          }
#line 4766 "string.m"
        {
#line 4766 "string.m"
          mercury__string__get_next_line_3_p_0(mercury__string__Columns_5, &mercury__string__ColumnTops_7, &mercury__string__ColumnRests_9);
        }
#line 4758 "string.m"
        {
#line 4758 "string.m"
          MR_Word base;
#line 4758 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4758 "string.m"
          *mercury__string__HeadVar__2_2 = base;
#line 4758 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__ColumnTop_6));
#line 4758 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__ColumnTops_7));
#line 4758 "string.m"
        }
#line 4759 "string.m"
        {
#line 4759 "string.m"
          MR_Word base;
#line 4759 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4759 "string.m"
          *mercury__string__HeadVar__3_3 = base;
#line 4759 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__ColumnRest_8));
#line 4759 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__ColumnRests_9));
#line 4759 "string.m"
        }
#line 4759 "string.m"
      }
#line 4757 "string.m"
  }
#line 4754 "string.m"
}

#line 4747 "string.m"
MR_bool MR_CALL 
mercury__string__all_empty_1_p_0(
#line 4747 "string.m"
  MR_Word mercury__string__HeadVar__1_1)
#line 4747 "string.m"
{
#line 4749 "string.m"
  while (MR_TRUE)
#line 4749 "string.m"
    {
#line 4749 "string.m"
      /* tailcall optimized into a loop */
#line 4749 "string.m"
      {
#line 4749 "string.m"
        MR_bool mercury__string__succeeded;

#line 4749 "string.m"
        if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4749 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 4749 "string.m"
        else
#line 4750 "string.m"
          {
#line 4750 "string.m"
            MR_Word mercury__string__List_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4750 "string.m"
            MR_Word mercury__string__Lists_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));

#line 4751 "string.m"
            mercury__string__succeeded = (mercury__string__List_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 4750 "string.m"
            if (mercury__string__succeeded)
#line 4752 "string.m"
              {
#line 4752 "string.m"
                /* direct tailcall eliminated */
#line 4752 "string.m"
                {
#line 4752 "string.m"
                  MR_Word mercury__string__HeadVar__1__tmp_copy_1 = mercury__string__Lists_3;

#line 4752 "string.m"
                  mercury__string__HeadVar__1_1 = mercury__string__HeadVar__1__tmp_copy_1;
#line 4752 "string.m"
                }
#line 4752 "string.m"
                continue;
#line 4752 "string.m"
              }
#line 4750 "string.m"
          }
#line 4749 "string.m"
        return mercury__string__succeeded;
#line 4749 "string.m"
      }
#line 4749 "string.m"
      break;
#line 4749 "string.m"
    }
#line 4747 "string.m"
}

#line 4734 "string.m"
void MR_CALL 
mercury__string__generate_rows_6_p_0(
#line 4734 "string.m"
  MR_Word mercury__string__MaxWidthsSenses_7,
#line 4734 "string.m"
  MR_String mercury__string__Separator_8,
#line 4734 "string.m"
  MR_Integer mercury__string__SepLen_9,
#line 4734 "string.m"
  MR_Word mercury__string__Columns0_10,
#line 4734 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_RevRows_0_15,
#line 4734 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_RevRows_16)
#line 4734 "string.m"
{
#line 4740 "string.m"
  while (MR_TRUE)
#line 4740 "string.m"
    {
#line 4740 "string.m"
      /* tailcall optimized into a loop */
#line 4740 "string.m"
      {
#line 4740 "string.m"
        MR_bool mercury__string__succeeded;

#line 4738 "string.m"
        {
#line 4738 "string.m"
          mercury__string__succeeded = mercury__string__all_empty_1_p_0(mercury__string__Columns0_10);
        }
#line 4740 "string.m"
        if (mercury__string__succeeded)
#line 4738 "string.m"
          *mercury__string__STATE_VARIABLE_RevRows_16 = mercury__string__STATE_VARIABLE_RevRows_0_15;
#line 4740 "string.m"
        else
#line 4741 "string.m"
          {
#line 4741 "string.m"
            MR_Word mercury__string__Line_12;
#line 4741 "string.m"
            MR_Word mercury__string__Columns_13;
#line 4741 "string.m"
            MR_String mercury__string__Row_14;
#line 4741 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_RevRows_18_18;

#line 4741 "string.m"
            {
#line 4741 "string.m"
              mercury__string__get_next_line_3_p_0(mercury__string__Columns0_10, &mercury__string__Line_12, &mercury__string__Columns_13);
            }
#line 4742 "string.m"
            {
#line 4742 "string.m"
              mercury__string__pad_row_6_p_0(mercury__string__MaxWidthsSenses_7, mercury__string__Line_12, mercury__string__Separator_8, mercury__string__SepLen_9, (MR_Integer) 0, &mercury__string__Row_14);
            }
#line 4743 "string.m"
            {
#line 4743 "string.m"
              mercury__string__STATE_VARIABLE_RevRows_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4743 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevRows_18_18, 0) = ((MR_Box) (mercury__string__Row_14));
#line 4743 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevRows_18_18, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevRows_0_15));
#line 4743 "string.m"
            }
#line 4744 "string.m"
            /* direct tailcall eliminated */
#line 4744 "string.m"
            {
#line 4744 "string.m"
              MR_Word mercury__string__Columns0__tmp_copy_10 = mercury__string__Columns_13;
#line 4744 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_RevRows_0__tmp_copy_15 = mercury__string__STATE_VARIABLE_RevRows_18_18;

#line 4744 "string.m"
              mercury__string__STATE_VARIABLE_RevRows_0_15 = mercury__string__STATE_VARIABLE_RevRows_0__tmp_copy_15;
#line 4744 "string.m"
              mercury__string__Columns0_10 = mercury__string__Columns0__tmp_copy_10;
#line 4744 "string.m"
            }
#line 4744 "string.m"
            continue;
#line 4741 "string.m"
          }
#line 4740 "string.m"
      }
#line 4740 "string.m"
      break;
#line 4740 "string.m"
    }
#line 4734 "string.m"
}

#line 4728 "string.m"
MR_Word MR_CALL 
mercury__string__project_column_strings_1_f_0(
#line 4728 "string.m"
  MR_Word mercury__string__HeadVar__1_1)
#line 4728 "string.m"
{
#line 4731 "string.m"
  {
#line 4731 "string.m"
    MR_bool mercury__string__succeeded;
#line 4731 "string.m"
    MR_Word mercury__string__Strings_2;
#line 4731 "string.m"
    MR_Word mercury__string__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4731 "string.m"
    MR_Word mercury__string__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 1)));

#line 4731 "string.m"
    if (((MR_tag((MR_Word) mercury__string__V_10_10)) == (MR_mktag((MR_Integer) 0))))
#line 4731 "string.m"
      mercury__string__Strings_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_10_10, (MR_Integer) 0)));
#line 4731 "string.m"
    else
#line 4732 "string.m"
      mercury__string__Strings_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_10_10, (MR_Integer) 0)));
#line 4731 "string.m"
    return mercury__string__Strings_2;
#line 4731 "string.m"
  }
#line 4728 "string.m"
}

#line 4673 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_4_1(
#line 4673 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4673 "string.m"
{
#line 4673 "string.m"
  {
#line 4673 "string.m"
    struct mercury__string__foldr_between_2_6_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldr_between_2_6_p_4_env_0_s *) mercury__string__env_ptr_arg;

#line 4674 "string.m"
    {
#line 4674 "string.m"
      mercury__string__foldr_between_2_6_p_4((mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__Start_9, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr);
#line 4674 "string.m"
      return;
    }
#line 4673 "string.m"
  }
#line 4673 "string.m"
}

#line 4664 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_4(
#line 4664 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4664 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4664 "string.m"
  MR_String mercury__string__String_8,
#line 4664 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4664 "string.m"
  MR_Integer mercury__string__I_10,
#line 4664 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4664 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4664 "string.m"
  MR_Cont mercury__string__cont,
#line 4664 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4664 "string.m"
{
#line 4664 "string.m"
  {
#line 4664 "string.m"
    struct mercury__string__foldr_between_2_6_p_4_env_0_s mercury__string__env;

#line 4664 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18 = mercury__string__TypeInfo_for_T_18;
#line 4664 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7 = mercury__string__Closure_7;
#line 4664 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__String_8 = mercury__string__String_8;
#line 4664 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9 = mercury__string__Start_9;
#line 4664 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4664 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont = mercury__string__cont;
#line 4664 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4675 "string.m"
    {
#line 4675 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9);
#line 4675 "string.m"
      MR_Char mercury__string__Char_13;

#line 4669 "string.m"
      if (mercury__string__succeeded)
#line 4669 "string.m"
        {
#line 2033 "string.m"
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
#line 2033 "string.m"

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

#line 8017 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2033 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4669 "string.m"
          if (mercury__string__succeeded)
#line 4671 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__J_12 >= (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9);
#line 4669 "string.m"
        }
#line 4675 "string.m"
      if (mercury__string__succeeded)
#line 4673 "string.m"
        {
#line 4673 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7, (MR_Integer) 1)));

#line 4673 "string.m"
          {
#line 4673 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldr_between_2_6_p_4_1, &mercury__string__env);
          }
#line 4673 "string.m"
        }
#line 4675 "string.m"
      else
#line 4674 "string.m"
        {
#line 4674 "string.m"
          *((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4674 "string.m"
          {
#line 4674 "string.m"
            ((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont)((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr);
#line 4674 "string.m"
            return;
          }
#line 4674 "string.m"
        }
#line 4675 "string.m"
    }
#line 4664 "string.m"
  }
#line 4664 "string.m"
}

#line 4673 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_3_1(
#line 4673 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4673 "string.m"
{
#line 4673 "string.m"
  {
#line 4673 "string.m"
    struct mercury__string__foldr_between_2_6_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldr_between_2_6_p_3_env_0_s *) mercury__string__env_ptr_arg;

#line 4674 "string.m"
    {
#line 4674 "string.m"
      mercury__string__foldr_between_2_6_p_3((mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__Start_9, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr);
#line 4674 "string.m"
      return;
    }
#line 4673 "string.m"
  }
#line 4673 "string.m"
}

#line 4662 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_3(
#line 4662 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4662 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4662 "string.m"
  MR_String mercury__string__String_8,
#line 4662 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4662 "string.m"
  MR_Integer mercury__string__I_10,
#line 4662 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4662 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4662 "string.m"
  MR_Cont mercury__string__cont,
#line 4662 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4662 "string.m"
{
#line 4662 "string.m"
  {
#line 4662 "string.m"
    struct mercury__string__foldr_between_2_6_p_3_env_0_s mercury__string__env;

#line 4662 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18 = mercury__string__TypeInfo_for_T_18;
#line 4662 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7 = mercury__string__Closure_7;
#line 4662 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__String_8 = mercury__string__String_8;
#line 4662 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9 = mercury__string__Start_9;
#line 4662 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4662 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont = mercury__string__cont;
#line 4662 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4675 "string.m"
    {
#line 4675 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9);
#line 4675 "string.m"
      MR_Char mercury__string__Char_13;

#line 4669 "string.m"
      if (mercury__string__succeeded)
#line 4669 "string.m"
        {
#line 2033 "string.m"
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
#line 2033 "string.m"

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

#line 8175 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2033 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4669 "string.m"
          if (mercury__string__succeeded)
#line 4671 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__J_12 >= (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9);
#line 4669 "string.m"
        }
#line 4675 "string.m"
      if (mercury__string__succeeded)
#line 4673 "string.m"
        {
#line 4673 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7, (MR_Integer) 1)));

#line 4673 "string.m"
          {
#line 4673 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldr_between_2_6_p_3_1, &mercury__string__env);
          }
#line 4673 "string.m"
        }
#line 4675 "string.m"
      else
#line 4674 "string.m"
        {
#line 4674 "string.m"
          *((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4674 "string.m"
          {
#line 4674 "string.m"
            ((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont)((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr);
#line 4674 "string.m"
            return;
          }
#line 4674 "string.m"
        }
#line 4675 "string.m"
    }
#line 4662 "string.m"
  }
#line 4662 "string.m"
}

#line 4660 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_between_2_6_p_2(
#line 4660 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4660 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4660 "string.m"
  MR_String mercury__string__String_8,
#line 4660 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4660 "string.m"
  MR_Integer mercury__string__I_10,
#line 4660 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4660 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4660 "string.m"
{
#line 4675 "string.m"
  while (MR_TRUE)
#line 4675 "string.m"
    {
#line 4675 "string.m"
      /* tailcall optimized into a loop */
#line 4675 "string.m"
      {
#line 4675 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4675 "string.m"
        MR_Integer mercury__string__J_12;
#line 4675 "string.m"
        MR_Char mercury__string__Char_13;

#line 4669 "string.m"
        if (mercury__string__succeeded)
#line 4669 "string.m"
          {
#line 2033 "string.m"
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
#line 2033 "string.m"

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

#line 8294 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2033 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4669 "string.m"
            if (mercury__string__succeeded)
#line 4671 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4669 "string.m"
          }
#line 4675 "string.m"
        if (mercury__string__succeeded)
#line 4673 "string.m"
          {
#line 4673 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4673 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4673 "string.m"
            {
#line 4673 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4673 "string.m"
            if (mercury__string__succeeded)
#line 4674 "string.m"
              {
#line 4674 "string.m"
                /* direct tailcall eliminated */
#line 4674 "string.m"
                {
#line 4674 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4674 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4674 "string.m"
                  mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4674 "string.m"
                  mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4674 "string.m"
                }
#line 4674 "string.m"
                continue;
#line 4674 "string.m"
              }
#line 4673 "string.m"
          }
#line 4675 "string.m"
        else
#line 4674 "string.m"
          {
#line 4674 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4674 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4674 "string.m"
          }
#line 4675 "string.m"
        return mercury__string__succeeded;
#line 4675 "string.m"
      }
#line 4675 "string.m"
      break;
#line 4675 "string.m"
    }
#line 4660 "string.m"
}

#line 4658 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_1(
#line 4658 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4658 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4658 "string.m"
  MR_String mercury__string__String_8,
#line 4658 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4658 "string.m"
  MR_Integer mercury__string__I_10,
#line 4658 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4658 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4658 "string.m"
{
#line 4675 "string.m"
  while (MR_TRUE)
#line 4675 "string.m"
    {
#line 4675 "string.m"
      /* tailcall optimized into a loop */
#line 4675 "string.m"
      {
#line 4675 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4675 "string.m"
        MR_Integer mercury__string__J_12;
#line 4675 "string.m"
        MR_Char mercury__string__Char_13;

#line 4669 "string.m"
        if (mercury__string__succeeded)
#line 4669 "string.m"
          {
#line 2033 "string.m"
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
#line 2033 "string.m"

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

#line 8437 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2033 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4669 "string.m"
            if (mercury__string__succeeded)
#line 4671 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4669 "string.m"
          }
#line 4675 "string.m"
        if (mercury__string__succeeded)
#line 4673 "string.m"
          {
#line 4673 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4673 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4673 "string.m"
            {
#line 4673 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4674 "string.m"
            /* direct tailcall eliminated */
#line 4674 "string.m"
            {
#line 4674 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4674 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4674 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4674 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4674 "string.m"
            }
#line 4674 "string.m"
            continue;
#line 4673 "string.m"
          }
#line 4675 "string.m"
        else
#line 4674 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4675 "string.m"
      }
#line 4675 "string.m"
      break;
#line 4675 "string.m"
    }
#line 4658 "string.m"
}

#line 4656 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_0(
#line 4656 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4656 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4656 "string.m"
  MR_String mercury__string__String_8,
#line 4656 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4656 "string.m"
  MR_Integer mercury__string__I_10,
#line 4656 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4656 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4656 "string.m"
{
#line 4675 "string.m"
  while (MR_TRUE)
#line 4675 "string.m"
    {
#line 4675 "string.m"
      /* tailcall optimized into a loop */
#line 4675 "string.m"
      {
#line 4675 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4675 "string.m"
        MR_Integer mercury__string__J_12;
#line 4675 "string.m"
        MR_Char mercury__string__Char_13;

#line 4669 "string.m"
        if (mercury__string__succeeded)
#line 4669 "string.m"
          {
#line 2033 "string.m"
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
#line 2033 "string.m"

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

#line 8566 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2033 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4669 "string.m"
            if (mercury__string__succeeded)
#line 4671 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4669 "string.m"
          }
#line 4675 "string.m"
        if (mercury__string__succeeded)
#line 4673 "string.m"
          {
#line 4673 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4673 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4673 "string.m"
            {
#line 4673 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4674 "string.m"
            /* direct tailcall eliminated */
#line 4674 "string.m"
            {
#line 4674 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4674 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4674 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4674 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4674 "string.m"
            }
#line 4674 "string.m"
            continue;
#line 4673 "string.m"
          }
#line 4675 "string.m"
        else
#line 4674 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4675 "string.m"
      }
#line 4675 "string.m"
      break;
#line 4675 "string.m"
    }
#line 4656 "string.m"
}

#line 4618 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_5_1(
#line 4618 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4618 "string.m"
{
#line 4618 "string.m"
  {
#line 4618 "string.m"
    struct mercury__string__foldl2_between_2_8_p_5_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl2_between_2_8_p_5_env_0_s *) mercury__string__env_ptr_arg;

#line 4619 "string.m"
    {
#line 4619 "string.m"
      mercury__string__foldl2_between_2_8_p_5((mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__String_10, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__J_15, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__End_12, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr);
#line 4619 "string.m"
      return;
    }
#line 4618 "string.m"
  }
#line 4618 "string.m"
}

#line 4609 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_5(
#line 4609 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4609 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4609 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4609 "string.m"
  MR_String mercury__string__String_10,
#line 4609 "string.m"
  MR_Integer mercury__string__I_11,
#line 4609 "string.m"
  MR_Integer mercury__string__End_12,
#line 4609 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4609 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4609 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4609 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 4609 "string.m"
  MR_Cont mercury__string__cont,
#line 4609 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4609 "string.m"
{
#line 4609 "string.m"
  {
#line 4609 "string.m"
    struct mercury__string__foldl2_between_2_8_p_5_env_0_s mercury__string__env;

#line 4609 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25 = mercury__string__TypeInfo_for_A_25;
#line 4609 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26 = mercury__string__TypeInfo_for_B_26;
#line 4609 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9 = mercury__string__Closure_9;
#line 4609 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__String_10 = mercury__string__String_10;
#line 4609 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12 = mercury__string__End_12;
#line 4609 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_18;
#line 4609 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_20;
#line 4609 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont = mercury__string__cont;
#line 4609 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4620 "string.m"
    {
#line 4620 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_11 < (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12);
#line 4620 "string.m"
      MR_Char mercury__string__Char_16;

#line 4614 "string.m"
      if (mercury__string__succeeded)
#line 4614 "string.m"
        {
#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 8741 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4614 "string.m"
          if (mercury__string__succeeded)
#line 4616 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__J_15 <= (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12);
#line 4614 "string.m"
        }
#line 4620 "string.m"
      if (mercury__string__succeeded)
#line 4618 "string.m"
        {
#line 4618 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9, (MR_Integer) 1)));

#line 4618 "string.m"
          {
#line 4618 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22, mercury__string__foldl2_between_2_8_p_5_1, &mercury__string__env);
          }
#line 4618 "string.m"
        }
#line 4620 "string.m"
      else
#line 4621 "string.m"
        {
#line 4621 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20) = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4621 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18) = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4621 "string.m"
          {
#line 4621 "string.m"
            ((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont)((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr);
#line 4621 "string.m"
            return;
          }
#line 4621 "string.m"
        }
#line 4620 "string.m"
    }
#line 4609 "string.m"
  }
#line 4609 "string.m"
}

#line 4618 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_4_1(
#line 4618 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4618 "string.m"
{
#line 4618 "string.m"
  {
#line 4618 "string.m"
    struct mercury__string__foldl2_between_2_8_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl2_between_2_8_p_4_env_0_s *) mercury__string__env_ptr_arg;

#line 4619 "string.m"
    {
#line 4619 "string.m"
      mercury__string__foldl2_between_2_8_p_4((mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__String_10, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__J_15, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__End_12, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr);
#line 4619 "string.m"
      return;
    }
#line 4618 "string.m"
  }
#line 4618 "string.m"
}

#line 4607 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_4(
#line 4607 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4607 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4607 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4607 "string.m"
  MR_String mercury__string__String_10,
#line 4607 "string.m"
  MR_Integer mercury__string__I_11,
#line 4607 "string.m"
  MR_Integer mercury__string__End_12,
#line 4607 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4607 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4607 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4607 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 4607 "string.m"
  MR_Cont mercury__string__cont,
#line 4607 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4607 "string.m"
{
#line 4607 "string.m"
  {
#line 4607 "string.m"
    struct mercury__string__foldl2_between_2_8_p_4_env_0_s mercury__string__env;

#line 4607 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25 = mercury__string__TypeInfo_for_A_25;
#line 4607 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26 = mercury__string__TypeInfo_for_B_26;
#line 4607 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9 = mercury__string__Closure_9;
#line 4607 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__String_10 = mercury__string__String_10;
#line 4607 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12 = mercury__string__End_12;
#line 4607 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_18;
#line 4607 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_20;
#line 4607 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont = mercury__string__cont;
#line 4607 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4620 "string.m"
    {
#line 4620 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_11 < (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12);
#line 4620 "string.m"
      MR_Char mercury__string__Char_16;

#line 4614 "string.m"
      if (mercury__string__succeeded)
#line 4614 "string.m"
        {
#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 8908 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4614 "string.m"
          if (mercury__string__succeeded)
#line 4616 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__J_15 <= (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12);
#line 4614 "string.m"
        }
#line 4620 "string.m"
      if (mercury__string__succeeded)
#line 4618 "string.m"
        {
#line 4618 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9, (MR_Integer) 1)));

#line 4618 "string.m"
          {
#line 4618 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22, mercury__string__foldl2_between_2_8_p_4_1, &mercury__string__env);
          }
#line 4618 "string.m"
        }
#line 4620 "string.m"
      else
#line 4621 "string.m"
        {
#line 4621 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20) = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4621 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18) = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4621 "string.m"
          {
#line 4621 "string.m"
            ((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont)((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr);
#line 4621 "string.m"
            return;
          }
#line 4621 "string.m"
        }
#line 4620 "string.m"
    }
#line 4607 "string.m"
  }
#line 4607 "string.m"
}

#line 4605 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_between_2_8_p_3(
#line 4605 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4605 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4605 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4605 "string.m"
  MR_String mercury__string__String_10,
#line 4605 "string.m"
  MR_Integer mercury__string__I_11,
#line 4605 "string.m"
  MR_Integer mercury__string__End_12,
#line 4605 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4605 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4605 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4605 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4605 "string.m"
{
#line 4620 "string.m"
  while (MR_TRUE)
#line 4620 "string.m"
    {
#line 4620 "string.m"
      /* tailcall optimized into a loop */
#line 4620 "string.m"
      {
#line 4620 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4620 "string.m"
        MR_Integer mercury__string__J_15;
#line 4620 "string.m"
        MR_Char mercury__string__Char_16;

#line 4614 "string.m"
        if (mercury__string__succeeded)
#line 4614 "string.m"
          {
#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9032 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4614 "string.m"
            if (mercury__string__succeeded)
#line 4616 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4614 "string.m"
          }
#line 4620 "string.m"
        if (mercury__string__succeeded)
#line 4618 "string.m"
          {
#line 4618 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4618 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4618 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4618 "string.m"
            {
#line 4618 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4618 "string.m"
            if (mercury__string__succeeded)
#line 4619 "string.m"
              {
#line 4619 "string.m"
                /* direct tailcall eliminated */
#line 4619 "string.m"
                {
#line 4619 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4619 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4619 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4619 "string.m"
                  mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4619 "string.m"
                  mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4619 "string.m"
                  mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4619 "string.m"
                }
#line 4619 "string.m"
                continue;
#line 4619 "string.m"
              }
#line 4618 "string.m"
          }
#line 4620 "string.m"
        else
#line 4621 "string.m"
          {
#line 4621 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4621 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4621 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4621 "string.m"
          }
#line 4620 "string.m"
        return mercury__string__succeeded;
#line 4620 "string.m"
      }
#line 4620 "string.m"
      break;
#line 4620 "string.m"
    }
#line 4605 "string.m"
}

#line 4603 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_2(
#line 4603 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4603 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4603 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4603 "string.m"
  MR_String mercury__string__String_10,
#line 4603 "string.m"
  MR_Integer mercury__string__I_11,
#line 4603 "string.m"
  MR_Integer mercury__string__End_12,
#line 4603 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4603 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4603 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4603 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4603 "string.m"
{
#line 4620 "string.m"
  while (MR_TRUE)
#line 4620 "string.m"
    {
#line 4620 "string.m"
      /* tailcall optimized into a loop */
#line 4620 "string.m"
      {
#line 4620 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4620 "string.m"
        MR_Integer mercury__string__J_15;
#line 4620 "string.m"
        MR_Char mercury__string__Char_16;

#line 4614 "string.m"
        if (mercury__string__succeeded)
#line 4614 "string.m"
          {
#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9186 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4614 "string.m"
            if (mercury__string__succeeded)
#line 4616 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4614 "string.m"
          }
#line 4620 "string.m"
        if (mercury__string__succeeded)
#line 4618 "string.m"
          {
#line 4618 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4618 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4618 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4618 "string.m"
            {
#line 4618 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4619 "string.m"
            /* direct tailcall eliminated */
#line 4619 "string.m"
            {
#line 4619 "string.m"
              MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4619 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4619 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4619 "string.m"
              mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4619 "string.m"
              mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4619 "string.m"
              mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4619 "string.m"
            }
#line 4619 "string.m"
            continue;
#line 4618 "string.m"
          }
#line 4620 "string.m"
        else
#line 4621 "string.m"
          {
#line 4621 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4621 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4621 "string.m"
          }
#line 4620 "string.m"
      }
#line 4620 "string.m"
      break;
#line 4620 "string.m"
    }
#line 4603 "string.m"
}

#line 4601 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_1(
#line 4601 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4601 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4601 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4601 "string.m"
  MR_String mercury__string__String_10,
#line 4601 "string.m"
  MR_Integer mercury__string__I_11,
#line 4601 "string.m"
  MR_Integer mercury__string__End_12,
#line 4601 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4601 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4601 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4601 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4601 "string.m"
{
#line 4620 "string.m"
  while (MR_TRUE)
#line 4620 "string.m"
    {
#line 4620 "string.m"
      /* tailcall optimized into a loop */
#line 4620 "string.m"
      {
#line 4620 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4620 "string.m"
        MR_Integer mercury__string__J_15;
#line 4620 "string.m"
        MR_Char mercury__string__Char_16;

#line 4614 "string.m"
        if (mercury__string__succeeded)
#line 4614 "string.m"
          {
#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9330 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4614 "string.m"
            if (mercury__string__succeeded)
#line 4616 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4614 "string.m"
          }
#line 4620 "string.m"
        if (mercury__string__succeeded)
#line 4618 "string.m"
          {
#line 4618 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4618 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4618 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4618 "string.m"
            {
#line 4618 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4619 "string.m"
            /* direct tailcall eliminated */
#line 4619 "string.m"
            {
#line 4619 "string.m"
              MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4619 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4619 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4619 "string.m"
              mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4619 "string.m"
              mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4619 "string.m"
              mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4619 "string.m"
            }
#line 4619 "string.m"
            continue;
#line 4618 "string.m"
          }
#line 4620 "string.m"
        else
#line 4621 "string.m"
          {
#line 4621 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4621 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4621 "string.m"
          }
#line 4620 "string.m"
      }
#line 4620 "string.m"
      break;
#line 4620 "string.m"
    }
#line 4601 "string.m"
}

#line 4599 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_0(
#line 4599 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4599 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4599 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4599 "string.m"
  MR_String mercury__string__String_10,
#line 4599 "string.m"
  MR_Integer mercury__string__I_11,
#line 4599 "string.m"
  MR_Integer mercury__string__End_12,
#line 4599 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4599 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4599 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4599 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4599 "string.m"
{
#line 4620 "string.m"
  while (MR_TRUE)
#line 4620 "string.m"
    {
#line 4620 "string.m"
      /* tailcall optimized into a loop */
#line 4620 "string.m"
      {
#line 4620 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4620 "string.m"
        MR_Integer mercury__string__J_15;
#line 4620 "string.m"
        MR_Char mercury__string__Char_16;

#line 4614 "string.m"
        if (mercury__string__succeeded)
#line 4614 "string.m"
          {
#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9474 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4614 "string.m"
            if (mercury__string__succeeded)
#line 4616 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4614 "string.m"
          }
#line 4620 "string.m"
        if (mercury__string__succeeded)
#line 4618 "string.m"
          {
#line 4618 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4618 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4618 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4618 "string.m"
            {
#line 4618 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4619 "string.m"
            /* direct tailcall eliminated */
#line 4619 "string.m"
            {
#line 4619 "string.m"
              MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4619 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4619 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4619 "string.m"
              mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4619 "string.m"
              mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4619 "string.m"
              mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4619 "string.m"
            }
#line 4619 "string.m"
            continue;
#line 4618 "string.m"
          }
#line 4620 "string.m"
        else
#line 4621 "string.m"
          {
#line 4621 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4621 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4621 "string.m"
          }
#line 4620 "string.m"
      }
#line 4620 "string.m"
      break;
#line 4620 "string.m"
    }
#line 4599 "string.m"
}

#line 4591 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_4_1(
#line 4591 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4591 "string.m"
{
#line 4591 "string.m"
  {
#line 4591 "string.m"
    struct mercury__string__foldl_between_2_6_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl_between_2_6_p_4_env_0_s *) mercury__string__env_ptr_arg;

#line 4592 "string.m"
    {
#line 4592 "string.m"
      mercury__string__foldl_between_2_6_p_4((mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__End_10, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr);
#line 4592 "string.m"
      return;
    }
#line 4591 "string.m"
  }
#line 4591 "string.m"
}

#line 4582 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_4(
#line 4582 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4582 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4582 "string.m"
  MR_String mercury__string__String_8,
#line 4582 "string.m"
  MR_Integer mercury__string__I_9,
#line 4582 "string.m"
  MR_Integer mercury__string__End_10,
#line 4582 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4582 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4582 "string.m"
  MR_Cont mercury__string__cont,
#line 4582 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4582 "string.m"
{
#line 4582 "string.m"
  {
#line 4582 "string.m"
    struct mercury__string__foldl_between_2_6_p_4_env_0_s mercury__string__env;

#line 4582 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18 = mercury__string__TypeInfo_for_A_18;
#line 4582 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7 = mercury__string__Closure_7;
#line 4582 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__String_8 = mercury__string__String_8;
#line 4582 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10 = mercury__string__End_10;
#line 4582 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4582 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont = mercury__string__cont;
#line 4582 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4593 "string.m"
    {
#line 4593 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10);
#line 4593 "string.m"
      MR_Char mercury__string__Char_13;

#line 4587 "string.m"
      if (mercury__string__succeeded)
#line 4587 "string.m"
        {
#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9651 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4587 "string.m"
          if (mercury__string__succeeded)
#line 4589 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__J_12 <= (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10);
#line 4587 "string.m"
        }
#line 4593 "string.m"
      if (mercury__string__succeeded)
#line 4591 "string.m"
        {
#line 4591 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7, (MR_Integer) 1)));

#line 4591 "string.m"
          {
#line 4591 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldl_between_2_6_p_4_1, &mercury__string__env);
          }
#line 4591 "string.m"
        }
#line 4593 "string.m"
      else
#line 4592 "string.m"
        {
#line 4592 "string.m"
          *((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4592 "string.m"
          {
#line 4592 "string.m"
            ((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont)((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr);
#line 4592 "string.m"
            return;
          }
#line 4592 "string.m"
        }
#line 4593 "string.m"
    }
#line 4582 "string.m"
  }
#line 4582 "string.m"
}

#line 4591 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_3_1(
#line 4591 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4591 "string.m"
{
#line 4591 "string.m"
  {
#line 4591 "string.m"
    struct mercury__string__foldl_between_2_6_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl_between_2_6_p_3_env_0_s *) mercury__string__env_ptr_arg;

#line 4592 "string.m"
    {
#line 4592 "string.m"
      mercury__string__foldl_between_2_6_p_3((mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__End_10, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr);
#line 4592 "string.m"
      return;
    }
#line 4591 "string.m"
  }
#line 4591 "string.m"
}

#line 4580 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_3(
#line 4580 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4580 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4580 "string.m"
  MR_String mercury__string__String_8,
#line 4580 "string.m"
  MR_Integer mercury__string__I_9,
#line 4580 "string.m"
  MR_Integer mercury__string__End_10,
#line 4580 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4580 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4580 "string.m"
  MR_Cont mercury__string__cont,
#line 4580 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4580 "string.m"
{
#line 4580 "string.m"
  {
#line 4580 "string.m"
    struct mercury__string__foldl_between_2_6_p_3_env_0_s mercury__string__env;

#line 4580 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18 = mercury__string__TypeInfo_for_A_18;
#line 4580 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7 = mercury__string__Closure_7;
#line 4580 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__String_8 = mercury__string__String_8;
#line 4580 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10 = mercury__string__End_10;
#line 4580 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4580 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont = mercury__string__cont;
#line 4580 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4593 "string.m"
    {
#line 4593 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10);
#line 4593 "string.m"
      MR_Char mercury__string__Char_13;

#line 4587 "string.m"
      if (mercury__string__succeeded)
#line 4587 "string.m"
        {
#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9806 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4587 "string.m"
          if (mercury__string__succeeded)
#line 4589 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__J_12 <= (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10);
#line 4587 "string.m"
        }
#line 4593 "string.m"
      if (mercury__string__succeeded)
#line 4591 "string.m"
        {
#line 4591 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7, (MR_Integer) 1)));

#line 4591 "string.m"
          {
#line 4591 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldl_between_2_6_p_3_1, &mercury__string__env);
          }
#line 4591 "string.m"
        }
#line 4593 "string.m"
      else
#line 4592 "string.m"
        {
#line 4592 "string.m"
          *((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4592 "string.m"
          {
#line 4592 "string.m"
            ((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont)((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr);
#line 4592 "string.m"
            return;
          }
#line 4592 "string.m"
        }
#line 4593 "string.m"
    }
#line 4580 "string.m"
  }
#line 4580 "string.m"
}

#line 4578 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_between_2_6_p_2(
#line 4578 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4578 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4578 "string.m"
  MR_String mercury__string__String_8,
#line 4578 "string.m"
  MR_Integer mercury__string__I_9,
#line 4578 "string.m"
  MR_Integer mercury__string__End_10,
#line 4578 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4578 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4578 "string.m"
{
#line 4593 "string.m"
  while (MR_TRUE)
#line 4593 "string.m"
    {
#line 4593 "string.m"
      /* tailcall optimized into a loop */
#line 4593 "string.m"
      {
#line 4593 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4593 "string.m"
        MR_Integer mercury__string__J_12;
#line 4593 "string.m"
        MR_Char mercury__string__Char_13;

#line 4587 "string.m"
        if (mercury__string__succeeded)
#line 4587 "string.m"
          {
#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9922 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4587 "string.m"
            if (mercury__string__succeeded)
#line 4589 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4587 "string.m"
          }
#line 4593 "string.m"
        if (mercury__string__succeeded)
#line 4591 "string.m"
          {
#line 4591 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4591 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4591 "string.m"
            {
#line 4591 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4591 "string.m"
            if (mercury__string__succeeded)
#line 4592 "string.m"
              {
#line 4592 "string.m"
                /* direct tailcall eliminated */
#line 4592 "string.m"
                {
#line 4592 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4592 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4592 "string.m"
                  mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4592 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4592 "string.m"
                }
#line 4592 "string.m"
                continue;
#line 4592 "string.m"
              }
#line 4591 "string.m"
          }
#line 4593 "string.m"
        else
#line 4592 "string.m"
          {
#line 4592 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4592 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4592 "string.m"
          }
#line 4593 "string.m"
        return mercury__string__succeeded;
#line 4593 "string.m"
      }
#line 4593 "string.m"
      break;
#line 4593 "string.m"
    }
#line 4578 "string.m"
}

#line 4576 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_1(
#line 4576 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4576 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4576 "string.m"
  MR_String mercury__string__String_8,
#line 4576 "string.m"
  MR_Integer mercury__string__I_9,
#line 4576 "string.m"
  MR_Integer mercury__string__End_10,
#line 4576 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4576 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4576 "string.m"
{
#line 4593 "string.m"
  while (MR_TRUE)
#line 4593 "string.m"
    {
#line 4593 "string.m"
      /* tailcall optimized into a loop */
#line 4593 "string.m"
      {
#line 4593 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4593 "string.m"
        MR_Integer mercury__string__J_12;
#line 4593 "string.m"
        MR_Char mercury__string__Char_13;

#line 4587 "string.m"
        if (mercury__string__succeeded)
#line 4587 "string.m"
          {
#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 10062 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4587 "string.m"
            if (mercury__string__succeeded)
#line 4589 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4587 "string.m"
          }
#line 4593 "string.m"
        if (mercury__string__succeeded)
#line 4591 "string.m"
          {
#line 4591 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4591 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4591 "string.m"
            {
#line 4591 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4592 "string.m"
            /* direct tailcall eliminated */
#line 4592 "string.m"
            {
#line 4592 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4592 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4592 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4592 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4592 "string.m"
            }
#line 4592 "string.m"
            continue;
#line 4591 "string.m"
          }
#line 4593 "string.m"
        else
#line 4592 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4593 "string.m"
      }
#line 4593 "string.m"
      break;
#line 4593 "string.m"
    }
#line 4576 "string.m"
}

#line 4574 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_0(
#line 4574 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4574 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4574 "string.m"
  MR_String mercury__string__String_8,
#line 4574 "string.m"
  MR_Integer mercury__string__I_9,
#line 4574 "string.m"
  MR_Integer mercury__string__End_10,
#line 4574 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4574 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4574 "string.m"
{
#line 4593 "string.m"
  while (MR_TRUE)
#line 4593 "string.m"
    {
#line 4593 "string.m"
      /* tailcall optimized into a loop */
#line 4593 "string.m"
      {
#line 4593 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4593 "string.m"
        MR_Integer mercury__string__J_12;
#line 4593 "string.m"
        MR_Char mercury__string__Char_13;

#line 4587 "string.m"
        if (mercury__string__succeeded)
#line 4587 "string.m"
          {
#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 10188 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4587 "string.m"
            if (mercury__string__succeeded)
#line 4589 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4587 "string.m"
          }
#line 4593 "string.m"
        if (mercury__string__succeeded)
#line 4591 "string.m"
          {
#line 4591 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4591 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4591 "string.m"
            {
#line 4591 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4592 "string.m"
            /* direct tailcall eliminated */
#line 4592 "string.m"
            {
#line 4592 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4592 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4592 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4592 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4592 "string.m"
            }
#line 4592 "string.m"
            continue;
#line 4591 "string.m"
          }
#line 4593 "string.m"
        else
#line 4592 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4593 "string.m"
      }
#line 4593 "string.m"
      break;
#line 4593 "string.m"
    }
#line 4574 "string.m"
}

#line 4532 "string.m"
MR_Word MR_CALL 
mercury__string__break_up_string_reverse_3_f_0(
#line 4532 "string.m"
  MR_String mercury__string__Str_5,
#line 4532 "string.m"
  MR_Integer mercury__string__N_6,
#line 4532 "string.m"
  MR_Word mercury__string__Prev_7)
#line 4532 "string.m"
{
#line 4537 "string.m"
  while (MR_TRUE)
#line 4537 "string.m"
    {
#line 4537 "string.m"
      /* tailcall optimized into a loop */
#line 4537 "string.m"
      {
#line 4537 "string.m"
        MR_bool mercury__string__succeeded;
#line 4537 "string.m"
        MR_Word mercury__string__Strs_8;
#line 4535 "string.m"
        MR_Integer mercury__string__V_11_11;

#line 2460 "string.m"
        {
#line 2460 "string.m"
          mercury__string__count_codepoints_2_p_0(mercury__string__Str_5, &mercury__string__V_11_11);
        }
#line 4535 "string.m"
        mercury__string__succeeded = (mercury__string__V_11_11 <= mercury__string__N_6);
#line 4537 "string.m"
        if (mercury__string__succeeded)
#line 4536 "string.m"
          {
#line 4536 "string.m"
            mercury__string__Strs_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4536 "string.m"
            MR_hl_field(MR_mktag(1), mercury__string__Strs_8, 0) = ((MR_Box) (mercury__string__Str_5));
#line 4536 "string.m"
            MR_hl_field(MR_mktag(1), mercury__string__Strs_8, 1) = ((MR_Box) (mercury__string__Prev_7));
#line 4536 "string.m"
          }
#line 4537 "string.m"
        else
#line 4538 "string.m"
          {
#line 4538 "string.m"
            MR_String mercury__string__Left_9;
#line 4538 "string.m"
            MR_String mercury__string__Right_10;
#line 4538 "string.m"
            MR_Word mercury__string__V_12_12;

#line 4538 "string.m"
            {
#line 4538 "string.m"
              mercury__string__split_by_codepoint_4_p_0(mercury__string__Str_5, mercury__string__N_6, &mercury__string__Left_9, &mercury__string__Right_10);
            }
#line 4539 "string.m"
            {
#line 4539 "string.m"
              mercury__string__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4539 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_12_12, 0) = ((MR_Box) (mercury__string__Left_9));
#line 4539 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_12_12, 1) = ((MR_Box) (mercury__string__Prev_7));
#line 4539 "string.m"
            }
#line 4539 "string.m"
            /* direct tailcall eliminated */
#line 4539 "string.m"
            {
#line 4539 "string.m"
              MR_String mercury__string__Str__tmp_copy_5 = mercury__string__Right_10;
#line 4539 "string.m"
              MR_Word mercury__string__Prev__tmp_copy_7 = mercury__string__V_12_12;

#line 4539 "string.m"
              mercury__string__Prev_7 = mercury__string__Prev__tmp_copy_7;
#line 4539 "string.m"
              mercury__string__Str_5 = mercury__string__Str__tmp_copy_5;
#line 4539 "string.m"
            }
#line 4539 "string.m"
            continue;
#line 4538 "string.m"
          }
#line 4537 "string.m"
        return mercury__string__Strs_8;
#line 4537 "string.m"
      }
#line 4537 "string.m"
      break;
#line 4537 "string.m"
    }
#line 4532 "string.m"
}

#line 4455 "string.m"
void MR_CALL 
mercury__string__word_wrap_loop_7_p_0(
#line 4455 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4455 "string.m"
  MR_String mercury__string__WordSep_2,
#line 4455 "string.m"
  MR_Integer mercury__string__SepLen_3,
#line 4455 "string.m"
  MR_Integer mercury__string__CurCol_4,
#line 4455 "string.m"
  MR_Integer mercury__string__MaxCol_5,
#line 4455 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6,
#line 4455 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_RevWordsSpacesNls_7)
#line 4455 "string.m"
{
#line 4458 "string.m"
  while (MR_TRUE)
#line 4458 "string.m"
    {
#line 4458 "string.m"
      /* tailcall optimized into a loop */
#line 4458 "string.m"
      {
#line 4458 "string.m"
        MR_bool mercury__string__succeeded;

#line 4458 "string.m"
        if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4458 "string.m"
          *mercury__string__STATE_VARIABLE_RevWordsSpacesNls_7 = mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6;
#line 4458 "string.m"
        else
#line 4460 "string.m"
          {
#line 4460 "string.m"
            MR_String mercury__string__Word_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4460 "string.m"
            MR_Word mercury__string__Words_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4460 "string.m"
            MR_Integer mercury__string__WordLen_22;
#line 4460 "string.m"
            MR_Word mercury__string__NewWords_23;
#line 4460 "string.m"
            MR_Integer mercury__string__NewCol_24;
#line 4460 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36;

#line 2460 "string.m"
            {
#line 2460 "string.m"
              mercury__string__count_codepoints_2_p_0(mercury__string__Word_15, &mercury__string__WordLen_22);
            }
#line 4465 "string.m"
            mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
#line 4465 "string.m"
            if (mercury__string__succeeded)
#line 4466 "string.m"
              mercury__string__succeeded = (mercury__string__WordLen_22 < mercury__string__MaxCol_5);
#line 4471 "string.m"
            if (mercury__string__succeeded)
#line 4468 "string.m"
              {
#line 4468 "string.m"
                mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4469 "string.m"
                mercury__string__NewCol_24 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);
#line 4470 "string.m"
                {
#line 4470 "string.m"
                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4470 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4470 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4470 "string.m"
                }
#line 4468 "string.m"
              }
#line 4471 "string.m"
            else
#line 4486 "string.m"
              {
#line 4473 "string.m"
                mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
#line 4473 "string.m"
                if (mercury__string__succeeded)
#line 4474 "string.m"
                  mercury__string__succeeded = (mercury__string__WordLen_22 == mercury__string__MaxCol_5);
#line 4486 "string.m"
                if (mercury__string__succeeded)
#line 4476 "string.m"
                  {
#line 4476 "string.m"
                    mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4477 "string.m"
                    mercury__string__NewCol_24 = (MR_Integer) 1;
#line 4482 "string.m"
                    if ((mercury__string__NewWords_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4481 "string.m"
                      {
#line 4481 "string.m"
                        mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4481 "string.m"
                        MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4481 "string.m"
                        MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4481 "string.m"
                      }
#line 4482 "string.m"
                    else
#line 4483 "string.m"
                      {
#line 4483 "string.m"
                        MR_Word mercury__string__V_39_39;

#line 4484 "string.m"
                        {
#line 4484 "string.m"
                          mercury__string__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4484 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_39_39, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4484 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_39_39, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4484 "string.m"
                        }
#line 4484 "string.m"
                        {
#line 4484 "string.m"
                          mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4484 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
#line 4484 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_39_39));
#line 4484 "string.m"
                        }
#line 4483 "string.m"
                      }
#line 4476 "string.m"
                  }
#line 4486 "string.m"
                else
#line 4494 "string.m"
                  {
#line 4489 "string.m"
                    MR_Integer mercury__string__V_41_41 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);

#line 4489 "string.m"
                    mercury__string__succeeded = (mercury__string__V_41_41 < mercury__string__MaxCol_5);
#line 4494 "string.m"
                    if (mercury__string__succeeded)
#line 4491 "string.m"
                      {
#line 4491 "string.m"
                        MR_Integer mercury__string__V_42_42;
#line 4491 "string.m"
                        MR_Word mercury__string__V_45_45;

#line 4491 "string.m"
                        mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4492 "string.m"
                        mercury__string__V_42_42 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);
#line 4492 "string.m"
                        mercury__string__NewCol_24 = (mercury__string__V_42_42 + (MR_Integer) 1);
#line 4493 "string.m"
                        {
#line 4493 "string.m"
                          mercury__string__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4493 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 0) = ((MR_Box) ((MR_String) " "));
#line 4493 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4493 "string.m"
                        }
#line 4493 "string.m"
                        {
#line 4493 "string.m"
                          mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4493 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4493 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_45_45));
#line 4493 "string.m"
                        }
#line 4491 "string.m"
                      }
#line 4494 "string.m"
                    else
#line 4508 "string.m"
                      {
#line 4496 "string.m"
                        MR_Integer mercury__string__V_70_70 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);

#line 4496 "string.m"
                        mercury__string__succeeded = (mercury__string__MaxCol_5 == mercury__string__V_70_70);
#line 4508 "string.m"
                        if (mercury__string__succeeded)
#line 4498 "string.m"
                          {
#line 4498 "string.m"
                            mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4499 "string.m"
                            mercury__string__NewCol_24 = (MR_Integer) 1;
#line 4504 "string.m"
                            if ((mercury__string__NewWords_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4502 "string.m"
                              {
#line 4502 "string.m"
                                MR_Word mercury__string__V_53_53;

#line 4503 "string.m"
                                {
#line 4503 "string.m"
                                  mercury__string__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4503 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_53_53, 0) = ((MR_Box) ((MR_String) " "));
#line 4503 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_53_53, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4503 "string.m"
                                }
#line 4503 "string.m"
                                {
#line 4503 "string.m"
                                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4503 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4503 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_53_53));
#line 4503 "string.m"
                                }
#line 4502 "string.m"
                              }
#line 4504 "string.m"
                            else
#line 4505 "string.m"
                              {
#line 4505 "string.m"
                                MR_Word mercury__string__V_49_49;
#line 4505 "string.m"
                                MR_Word mercury__string__V_50_50;

#line 4506 "string.m"
                                {
#line 4506 "string.m"
                                  mercury__string__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4506 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_50_50, 0) = ((MR_Box) ((MR_String) " "));
#line 4506 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_50_50, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4506 "string.m"
                                }
#line 4506 "string.m"
                                {
#line 4506 "string.m"
                                  mercury__string__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4506 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_49_49, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4506 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_49_49, 1) = ((MR_Box) (mercury__string__V_50_50));
#line 4506 "string.m"
                                }
#line 4506 "string.m"
                                {
#line 4506 "string.m"
                                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4506 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
#line 4506 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_49_49));
#line 4506 "string.m"
                                }
#line 4505 "string.m"
                              }
#line 4498 "string.m"
                          }
#line 4508 "string.m"
                        else
#line 4523 "string.m"
                          {
#line 4510 "string.m"
                            mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
#line 4523 "string.m"
                            if (mercury__string__succeeded)
#line 4512 "string.m"
                              {
#line 4512 "string.m"
                                MR_Word mercury__string__TypeCtorInfo_69_69;
#line 4512 "string.m"
                                MR_Word mercury__string__RevPieces_29;
#line 4512 "string.m"
                                MR_String mercury__string__LastPiece_30;
#line 4512 "string.m"
                                MR_Word mercury__string__Rest_31;
#line 4512 "string.m"
                                MR_Word mercury__string__RestWithSep_32;
#line 4512 "string.m"
                                MR_Integer mercury__string__V_55_55 = (mercury__string__MaxCol_5 - mercury__string__SepLen_3);
#line 4512 "string.m"
                                MR_Word mercury__string__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 4512 "string.m"
                                {
#line 4512 "string.m"
                                  mercury__string__RevPieces_29 = mercury__string__break_up_string_reverse_3_f_0(mercury__string__Word_15, mercury__string__V_55_55, mercury__string__V_56_56);
                                }
#line 4515 "string.m"
                                if ((mercury__string__RevPieces_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4516 "string.m"
                                  {
#line 4517 "string.m"
                                    {
#line 4517 "string.m"
                                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.word_wrap_loop\'/7", (MR_String) "no pieces");
#line 4517 "string.m"
                                      return;
                                    }
#line 4516 "string.m"
                                  }
#line 4515 "string.m"
                                else
#line 4514 "string.m"
                                  {
#line 4514 "string.m"
                                    mercury__string__LastPiece_30 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__RevPieces_29, (MR_Integer) 0)));
#line 4514 "string.m"
                                    mercury__string__Rest_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__RevPieces_29, (MR_Integer) 1)));
#line 4514 "string.m"
                                  }
#line 4519 "string.m"
                                {
#line 4519 "string.m"
                                  mercury__string__NewWords_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4519 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__NewWords_23, 0) = ((MR_Box) (mercury__string__LastPiece_30));
#line 4519 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__NewWords_23, 1) = ((MR_Box) (mercury__string__Words_16));
#line 4519 "string.m"
                                }
#line 4520 "string.m"
                                mercury__string__NewCol_24 = (MR_Integer) 1;
#line 10695 "string.c"
                                mercury__string__TypeCtorInfo_69_69 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4521 "string.m"
                                {
#line 4521 "string.m"
                                  mercury__string__RestWithSep_32 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_f_in__list_0(mercury__string__WordSep_2, mercury__string__Rest_31);
                                }
#line 46 "list.opt"
                                {
#line 46 "list.opt"
                                  mercury__list__append_3_p_1(mercury__string__TypeCtorInfo_69_69, mercury__string__RestWithSep_32, mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6, &mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36);
                                }
#line 4512 "string.m"
                              }
#line 4523 "string.m"
                            else
#line 4524 "string.m"
                              {
#line 4524 "string.m"
                                mercury__string__NewWords_23 = mercury__string__HeadVar__1_1;
#line 4525 "string.m"
                                mercury__string__NewCol_24 = (MR_Integer) 1;
#line 4526 "string.m"
                                {
#line 4526 "string.m"
                                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4526 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
#line 4526 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4526 "string.m"
                                }
#line 4524 "string.m"
                              }
#line 4523 "string.m"
                          }
#line 4508 "string.m"
                      }
#line 4494 "string.m"
                  }
#line 4486 "string.m"
              }
#line 4529 "string.m"
            /* direct tailcall eliminated */
#line 4529 "string.m"
            {
#line 4529 "string.m"
              MR_Word mercury__string__HeadVar__1__tmp_copy_1 = mercury__string__NewWords_23;
#line 4529 "string.m"
              MR_Integer mercury__string__CurCol__tmp_copy_4 = mercury__string__NewCol_24;
#line 4529 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0__tmp_copy_6 = mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36;

#line 4529 "string.m"
              mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6 = mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0__tmp_copy_6;
#line 4529 "string.m"
              mercury__string__CurCol_4 = mercury__string__CurCol__tmp_copy_4;
#line 4529 "string.m"
              mercury__string__HeadVar__1_1 = mercury__string__HeadVar__1__tmp_copy_1;
#line 4529 "string.m"
            }
#line 4529 "string.m"
            continue;
#line 4460 "string.m"
          }
#line 4458 "string.m"
      }
#line 4458 "string.m"
      break;
#line 4458 "string.m"
    }
#line 4455 "string.m"
}

#line 4401 "string.m"
void MR_CALL 
mercury__string__replace_all_loop_7_p_0(
#line 4401 "string.m"
  MR_String mercury__string__Str_8,
#line 4401 "string.m"
  MR_String mercury__string__Pat_9,
#line 4401 "string.m"
  MR_String mercury__string__Subst_10,
#line 4401 "string.m"
  MR_Integer mercury__string__PatLength_11,
#line 4401 "string.m"
  MR_Integer mercury__string__BeginAt_12,
#line 4401 "string.m"
  MR_Word mercury__string__RevChunks0_13,
#line 4401 "string.m"
  MR_Word * mercury__string__RevChunks_14)
#line 4401 "string.m"
{
#line 4411 "string.m"
  while (MR_TRUE)
#line 4411 "string.m"
    {
#line 4411 "string.m"
      /* tailcall optimized into a loop */
#line 4411 "string.m"
      {
#line 4411 "string.m"
        MR_bool mercury__string__succeeded;
#line 4411 "string.m"
        MR_Integer mercury__string__Index_15;

#line 2941 "string.m"
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
#line 2941 "string.m"
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
#line 10830 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Index_15  = Index;
#line 2941 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4411 "string.m"
        if (mercury__string__succeeded)
#line 4407 "string.m"
          {
#line 4407 "string.m"
            MR_String mercury__string__Initial_16;
#line 4407 "string.m"
            MR_Integer mercury__string__Start_17;
#line 4407 "string.m"
            MR_Word mercury__string__V_19_19;
#line 4407 "string.m"
            MR_Word mercury__string__V_20_20;

#line 4039 "string.m"
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
#line 4039 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 10875 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Initial_16  = SubString;
#line 4039 "string.m"
}
#line 4408 "string.m"
            mercury__string__Start_17 = (mercury__string__Index_15 + mercury__string__PatLength_11);
#line 4410 "string.m"
            {
#line 4410 "string.m"
              mercury__string__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4410 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_20_20, 0) = ((MR_Box) (mercury__string__Initial_16));
#line 4410 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_20_20, 1) = ((MR_Box) (mercury__string__RevChunks0_13));
#line 4410 "string.m"
            }
#line 4410 "string.m"
            {
#line 4410 "string.m"
              mercury__string__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4410 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_19_19, 0) = ((MR_Box) (mercury__string__Subst_10));
#line 4410 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_19_19, 1) = ((MR_Box) (mercury__string__V_20_20));
#line 4410 "string.m"
            }
#line 4409 "string.m"
            /* direct tailcall eliminated */
#line 4409 "string.m"
            {
#line 4409 "string.m"
              MR_Integer mercury__string__BeginAt__tmp_copy_12 = mercury__string__Start_17;
#line 4409 "string.m"
              MR_Word mercury__string__RevChunks0__tmp_copy_13 = mercury__string__V_19_19;

#line 4409 "string.m"
              mercury__string__RevChunks0_13 = mercury__string__RevChunks0__tmp_copy_13;
#line 4409 "string.m"
              mercury__string__BeginAt_12 = mercury__string__BeginAt__tmp_copy_12;
#line 4409 "string.m"
            }
#line 4409 "string.m"
            continue;
#line 4407 "string.m"
          }
#line 4411 "string.m"
        else
#line 4412 "string.m"
          {
#line 4412 "string.m"
            MR_String mercury__string__EndString_18;
#line 4412 "string.m"
            MR_Integer mercury__string__V_21_21;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_loop_7_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_8 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 10945 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_21_21  = Length;
#line 2400 "string.m"
}
#line 4039 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_loop_7_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_8 ;
	Start =  mercury__string__BeginAt_12 ;
	End =  mercury__string__V_21_21 ;
		{
#line 4039 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 10974 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__EndString_18  = SubString;
#line 4039 "string.m"
}
#line 4413 "string.m"
            {
#line 4413 "string.m"
              MR_Word base;
#line 4413 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4413 "string.m"
              *mercury__string__RevChunks_14 = base;
#line 4413 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__EndString_18));
#line 4413 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__RevChunks0_13));
#line 4413 "string.m"
            }
#line 4412 "string.m"
          }
#line 4411 "string.m"
      }
#line 4411 "string.m"
      break;
#line 4411 "string.m"
    }
#line 4401 "string.m"
}

#line 4318 "string.m"
void MR_CALL 
mercury__string__char_list_to_lower_2_p_0(
#line 4318 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4318 "string.m"
  MR_Word * mercury__string__HeadVar__2_2)
#line 4318 "string.m"
{
#line 4320 "string.m"
  {
#line 4320 "string.m"
    MR_bool mercury__string__succeeded;

#line 4320 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4320 "string.m"
      *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4320 "string.m"
    else
#line 4321 "string.m"
      {
#line 4321 "string.m"
        MR_Char mercury__string__X_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4321 "string.m"
        MR_Word mercury__string__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4321 "string.m"
        MR_Char mercury__string__Y_5;
#line 4321 "string.m"
        MR_Word mercury__string__Ys_6;
#line 98 "char.opt"
        MR_Char mercury__string__LowerChar_5_9;

#line 95 "char.opt"
        {
#line 95 "char.opt"
          mercury__string__succeeded = mercury__char__lower_upper_2_p_1(&mercury__string__LowerChar_5_9, mercury__string__X_3);
        }
#line 98 "char.opt"
        if (mercury__string__succeeded)
#line 97 "char.opt"
          mercury__string__Y_5 = mercury__string__LowerChar_5_9;
#line 98 "char.opt"
        else
#line 99 "char.opt"
          mercury__string__Y_5 = mercury__string__X_3;
#line 4323 "string.m"
        {
#line 4323 "string.m"
          mercury__string__char_list_to_lower_2_p_0(mercury__string__Xs_4, &mercury__string__Ys_6);
        }
#line 4321 "string.m"
        {
#line 4321 "string.m"
          MR_Word base;
#line 4321 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4321 "string.m"
          *mercury__string__HeadVar__2_2 = base;
#line 4321 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__Y_5));
#line 4321 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Ys_6));
#line 4321 "string.m"
        }
#line 4321 "string.m"
      }
#line 4320 "string.m"
  }
#line 4318 "string.m"
}

#line 4303 "string.m"
void MR_CALL 
mercury__string__char_list_to_upper_2_p_0(
#line 4303 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4303 "string.m"
  MR_Word * mercury__string__HeadVar__2_2)
#line 4303 "string.m"
{
#line 4305 "string.m"
  {
#line 4305 "string.m"
    MR_bool mercury__string__succeeded;

#line 4305 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4305 "string.m"
      *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4305 "string.m"
    else
#line 4306 "string.m"
      {
#line 4306 "string.m"
        MR_Char mercury__string__X_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4306 "string.m"
        MR_Word mercury__string__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4306 "string.m"
        MR_Char mercury__string__Y_5;
#line 4306 "string.m"
        MR_Word mercury__string__Ys_6;
#line 88 "char.opt"
        MR_Char mercury__string__UpperChar_5_9;

#line 85 "char.opt"
        {
#line 85 "char.opt"
          mercury__string__succeeded = mercury__char__lower_upper_2_p_0(mercury__string__X_3, &mercury__string__UpperChar_5_9);
        }
#line 88 "char.opt"
        if (mercury__string__succeeded)
#line 87 "char.opt"
          mercury__string__Y_5 = mercury__string__UpperChar_5_9;
#line 88 "char.opt"
        else
#line 89 "char.opt"
          mercury__string__Y_5 = mercury__string__X_3;
#line 4308 "string.m"
        {
#line 4308 "string.m"
          mercury__string__char_list_to_upper_2_p_0(mercury__string__Xs_4, &mercury__string__Ys_6);
        }
#line 4306 "string.m"
        {
#line 4306 "string.m"
          MR_Word base;
#line 4306 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4306 "string.m"
          *mercury__string__HeadVar__2_2 = base;
#line 4306 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__Y_5));
#line 4306 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Ys_6));
#line 4306 "string.m"
        }
#line 4306 "string.m"
      }
#line 4305 "string.m"
  }
#line 4303 "string.m"
}

#line 4226 "string.m"
void MR_CALL 
mercury__string__suffix_2_ioii_4_p_0(
#line 4226 "string.m"
  MR_String mercury__string__String_5,
#line 4226 "string.m"
  MR_String * mercury__string__Suffix_6,
#line 4226 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4226 "string.m"
  MR_Integer mercury__string__Len_8,
#line 4226 "string.m"
  MR_Cont mercury__string__cont,
#line 4226 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4226 "string.m"
{
#line 4230 "string.m"
  while (MR_TRUE)
#line 4230 "string.m"
    {
#line 4230 "string.m"
      /* tailcall optimized into a loop */
#line 4230 "string.m"
      {
#line 4230 "string.m"
        MR_bool mercury__string__succeeded;

#line 4039 "string.m"
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
#line 4039 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11200 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Suffix_6  = SubString;
#line 4039 "string.m"
}
#line 4035 "string.m"
        {
#line 4035 "string.m"
          mercury__string__cont(mercury__string__cont_env_ptr);
        }
#line 4232 "string.m"
        {
#line 4232 "string.m"
          MR_Integer mercury__string__Prev_9;
#line 2029 "string.m"
          MR_Char mercury__string__V_10_10;

#line 2033 "string.m"
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
#line 2033 "string.m"

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

#line 11247 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Prev_9  = PrevIndex;
	 mercury__string__V_10_10  = Ch;
#line 2033 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4232 "string.m"
          if (mercury__string__succeeded)
#line 4233 "string.m"
            {
#line 4233 "string.m"
              /* direct tailcall eliminated */
#line 4233 "string.m"
              {
#line 4233 "string.m"
                MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Prev_9;

#line 4233 "string.m"
                mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4233 "string.m"
              }
#line 4233 "string.m"
              continue;
#line 4233 "string.m"
            }
#line 4232 "string.m"
        }
#line 4230 "string.m"
      }
#line 4230 "string.m"
      break;
#line 4230 "string.m"
    }
#line 4226 "string.m"
}

#line 4214 "string.m"
MR_bool MR_CALL 
mercury__string__suffix_2_iiii_5_p_0(
#line 4214 "string.m"
  MR_String mercury__string__String_6,
#line 4214 "string.m"
  MR_String mercury__string__Suffix_7,
#line 4214 "string.m"
  MR_Integer mercury__string__I_8,
#line 4214 "string.m"
  MR_Integer mercury__string__Offset_9,
#line 4214 "string.m"
  MR_Integer mercury__string__Len_10)
#line 4214 "string.m"
{
#line 4222 "string.m"
  while (MR_TRUE)
#line 4222 "string.m"
    {
#line 4222 "string.m"
      /* tailcall optimized into a loop */
#line 4222 "string.m"
      {
#line 4222 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_8 < mercury__string__Len_10);

#line 4222 "string.m"
        if (mercury__string__succeeded)
#line 4219 "string.m"
          {
#line 4219 "string.m"
            MR_Integer mercury__string__C_11;
#line 4219 "string.m"
            MR_Integer mercury__string__V_12_12 = (mercury__string__I_8 + mercury__string__Offset_9);
#line 4219 "string.m"
            MR_Integer mercury__string__V_13_13;
#line 4219 "string.m"
            MR_Integer mercury__string__V_14_14;
#line 4219 "string.m"
            MR_Integer mercury__string__V_15_15;

#line 2160 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_iiii_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__V_12_12 ;
		{
#line 2160 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 11345 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_11  = Code;
#line 2160 "string.m"
}
#line 2160 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_iiii_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Suffix_7 ;
	Index =  mercury__string__I_8 ;
		{
#line 2160 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 11368 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_15_15  = Code;
#line 2160 "string.m"
}
#line 4220 "string.m"
            mercury__string__succeeded = (mercury__string__C_11 == mercury__string__V_15_15);
#line 4219 "string.m"
            if (mercury__string__succeeded)
#line 4219 "string.m"
              {
#line 4221 "string.m"
                mercury__string__V_14_14 = (MR_Integer) 1;
#line 4221 "string.m"
                mercury__string__V_13_13 = (mercury__string__I_8 + mercury__string__V_14_14);
#line 4221 "string.m"
                /* direct tailcall eliminated */
#line 4221 "string.m"
                {
#line 4221 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_8 = mercury__string__V_13_13;

#line 4221 "string.m"
                  mercury__string__I_8 = mercury__string__I__tmp_copy_8;
#line 4221 "string.m"
                }
#line 4221 "string.m"
                continue;
#line 4219 "string.m"
              }
#line 4219 "string.m"
          }
#line 4222 "string.m"
        else
#line 4223 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 4222 "string.m"
        return mercury__string__succeeded;
#line 4222 "string.m"
      }
#line 4222 "string.m"
      break;
#line 4222 "string.m"
    }
#line 4214 "string.m"
}

#line 4193 "string.m"
void MR_CALL 
mercury__string__prefix_2_ioi_3_p_0(
#line 4193 "string.m"
  MR_String mercury__string__String_4,
#line 4193 "string.m"
  MR_String * mercury__string__Prefix_5,
#line 4193 "string.m"
  MR_Integer mercury__string__Cur_6,
#line 4193 "string.m"
  MR_Cont mercury__string__cont,
#line 4193 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4193 "string.m"
{
#line 4197 "string.m"
  while (MR_TRUE)
#line 4197 "string.m"
    {
#line 4197 "string.m"
      /* tailcall optimized into a loop */
#line 4197 "string.m"
      {
#line 4197 "string.m"
        MR_bool mercury__string__succeeded;

#line 4039 "string.m"
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
#line 4039 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11465 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Prefix_5  = SubString;
#line 4039 "string.m"
}
#line 4197 "string.m"
        {
#line 4197 "string.m"
          mercury__string__cont(mercury__string__cont_env_ptr);
        }
#line 4199 "string.m"
        {
#line 4199 "string.m"
          MR_Integer mercury__string__Next_7;
#line 1940 "string.m"
          MR_Char mercury__string__V_8_8;

#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 11509 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__V_8_8  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4199 "string.m"
          if (mercury__string__succeeded)
#line 4200 "string.m"
            {
#line 4200 "string.m"
              /* direct tailcall eliminated */
#line 4200 "string.m"
              {
#line 4200 "string.m"
                MR_Integer mercury__string__Cur__tmp_copy_6 = mercury__string__Next_7;

#line 4200 "string.m"
                mercury__string__Cur_6 = mercury__string__Cur__tmp_copy_6;
#line 4200 "string.m"
              }
#line 4200 "string.m"
              continue;
#line 4200 "string.m"
            }
#line 4199 "string.m"
        }
#line 4197 "string.m"
      }
#line 4197 "string.m"
      break;
#line 4197 "string.m"
    }
#line 4193 "string.m"
}

#line 4182 "string.m"
MR_bool MR_CALL 
mercury__string__prefix_2_iii_3_p_0(
#line 4182 "string.m"
  MR_String mercury__string__String_4,
#line 4182 "string.m"
  MR_String mercury__string__Prefix_5,
#line 4182 "string.m"
  MR_Integer mercury__string__I_6)
#line 4182 "string.m"
{
#line 4189 "string.m"
  while (MR_TRUE)
#line 4189 "string.m"
    {
#line 4189 "string.m"
      /* tailcall optimized into a loop */
#line 4189 "string.m"
      {
#line 4189 "string.m"
        MR_bool mercury__string__succeeded = ((MR_Integer) 0 <= mercury__string__I_6);

#line 4189 "string.m"
        if (mercury__string__succeeded)
#line 4186 "string.m"
          {
#line 4186 "string.m"
            MR_Integer mercury__string__C_7;
#line 4186 "string.m"
            MR_Integer mercury__string__V_9_9;
#line 4186 "string.m"
            MR_Integer mercury__string__V_10_10;
#line 4186 "string.m"
            MR_Integer mercury__string__V_11_11;

#line 2160 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_iii_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__I_6 ;
		{
#line 2160 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 11601 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_7  = Code;
#line 2160 "string.m"
}
#line 2160 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_iii_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Prefix_5 ;
	Index =  mercury__string__I_6 ;
		{
#line 2160 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 11624 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Code;
#line 2160 "string.m"
}
#line 4187 "string.m"
            mercury__string__succeeded = (mercury__string__C_7 == mercury__string__V_11_11);
#line 4186 "string.m"
            if (mercury__string__succeeded)
#line 4186 "string.m"
              {
#line 4188 "string.m"
                mercury__string__V_10_10 = (MR_Integer) 1;
#line 4188 "string.m"
                mercury__string__V_9_9 = (mercury__string__I_6 - mercury__string__V_10_10);
#line 4188 "string.m"
                /* direct tailcall eliminated */
#line 4188 "string.m"
                {
#line 4188 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_6 = mercury__string__V_9_9;

#line 4188 "string.m"
                  mercury__string__I_6 = mercury__string__I__tmp_copy_6;
#line 4188 "string.m"
                }
#line 4188 "string.m"
                continue;
#line 4186 "string.m"
              }
#line 4186 "string.m"
          }
#line 4189 "string.m"
        else
#line 4190 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 4189 "string.m"
        return mercury__string__succeeded;
#line 4189 "string.m"
      }
#line 4189 "string.m"
      break;
#line 4189 "string.m"
    }
#line 4182 "string.m"
}

#line 4154 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_string_loop_4_f_0(
#line 4154 "string.m"
  MR_Integer mercury__string__StartAt_6,
#line 4154 "string.m"
  MR_Integer mercury__string__NeedleLen_7,
#line 4154 "string.m"
  MR_String mercury__string__Needle_8,
#line 4154 "string.m"
  MR_String mercury__string__Total_9)
#line 4154 "string.m"
{
#line 4162 "string.m"
  {
#line 4162 "string.m"
    MR_bool mercury__string__succeeded;
#line 4162 "string.m"
    MR_Word mercury__string__Out_10;
#line 4162 "string.m"
    MR_Integer mercury__string__NeedlePos_11;

#line 2941 "string.m"
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
#line 2941 "string.m"
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
#line 11724 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__NeedlePos_11  = Index;
#line 2941 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4162 "string.m"
    if (mercury__string__succeeded)
#line 4158 "string.m"
      {
#line 4158 "string.m"
        MR_String mercury__string__BeforeNeedle_12;
#line 4158 "string.m"
        MR_Word mercury__string__Tail_13;
#line 4158 "string.m"
        MR_Integer mercury__string__V_16_16;

#line 3883 "string.m"
        {
#line 3883 "string.m"
          mercury__string__between_4_p_0(mercury__string__Total_9, mercury__string__StartAt_6, mercury__string__NeedlePos_11, &mercury__string__BeforeNeedle_12);
        }
#line 4159 "string.m"
        mercury__string__V_16_16 = (mercury__string__NeedlePos_11 + mercury__string__NeedleLen_7);
#line 4159 "string.m"
        {
#line 4159 "string.m"
          mercury__string__Tail_13 = mercury__string__split_at_string_loop_4_f_0(mercury__string__V_16_16, mercury__string__NeedleLen_7, mercury__string__Needle_8, mercury__string__Total_9);
        }
#line 4161 "string.m"
        {
#line 4161 "string.m"
          mercury__string__Out_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4161 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 0) = ((MR_Box) (mercury__string__BeforeNeedle_12));
#line 4161 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 1) = ((MR_Box) (mercury__string__Tail_13));
#line 4161 "string.m"
        }
#line 4158 "string.m"
      }
#line 4162 "string.m"
    else
#line 4163 "string.m"
      {
#line 4163 "string.m"
        MR_String mercury__string__Last_15;
#line 4163 "string.m"
        MR_Word mercury__string__V_17_17;
#line 4163 "string.m"
        MR_String mercury__string___Skip_14;

#line 4163 "string.m"
        {
#line 4163 "string.m"
          mercury__string__split_4_p_0(mercury__string__Total_9, mercury__string__StartAt_6, &mercury__string___Skip_14, &mercury__string__Last_15);
        }
#line 4164 "string.m"
        mercury__string__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4164 "string.m"
        {
#line 4164 "string.m"
          mercury__string__Out_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4164 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 0) = ((MR_Box) (mercury__string__Last_15));
#line 4164 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 1) = ((MR_Box) (mercury__string__V_17_17));
#line 4164 "string.m"
        }
#line 4163 "string.m"
      }
#line 4162 "string.m"
    return mercury__string__Out_10;
#line 4162 "string.m"
  }
#line 4154 "string.m"
}

#line 4120 "string.m"
void MR_CALL 
mercury__string__split_at_separator_loop_6_p_0(
#line 4120 "string.m"
  MR_Word mercury__string__DelimP_7,
#line 4120 "string.m"
  MR_String mercury__string__Str_8,
#line 4120 "string.m"
  MR_Integer mercury__string__I_9,
#line 4120 "string.m"
  MR_Integer mercury__string__SegEnd_10,
#line 4120 "string.m"
  MR_Word mercury__string__Acc0_11,
#line 4120 "string.m"
  MR_Word * mercury__string__Acc_12)
#line 4120 "string.m"
{
#line 4140 "string.m"
  while (MR_TRUE)
#line 4140 "string.m"
    {
#line 4140 "string.m"
      /* tailcall optimized into a loop */
#line 4140 "string.m"
      {
#line 4140 "string.m"
        MR_bool mercury__string__succeeded;
#line 4140 "string.m"
        MR_Integer mercury__string__J_13;
#line 4140 "string.m"
        MR_Char mercury__string__C_14;

#line 2033 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_separator_loop_6_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_8 ;
	Index =  mercury__string__I_9 ;
		{
#line 2033 "string.m"

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

#line 11866 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_13  = PrevIndex;
	 mercury__string__C_14  = Ch;
#line 2033 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4140 "string.m"
        if (mercury__string__succeeded)
#line 4136 "string.m"
          {
#line 4131 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__DelimP_7, (MR_Integer) 1)));

#line 4131 "string.m"
            {
#line 4131 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__DelimP_7), ((MR_Box) (MR_Word) (mercury__string__C_14)));
            }
#line 4136 "string.m"
            if (mercury__string__succeeded)
#line 4133 "string.m"
              {
#line 4133 "string.m"
                MR_String mercury__string__Seg_16;
#line 4133 "string.m"
                MR_Word mercury__string__V_18_18;

#line 4039 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_separator_loop_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_8 ;
	Start =  mercury__string__I_9 ;
	End =  mercury__string__SegEnd_10 ;
		{
#line 4039 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11920 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_16  = SubString;
#line 4039 "string.m"
}
#line 4135 "string.m"
                {
#line 4135 "string.m"
                  mercury__string__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4135 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 0) = ((MR_Box) (mercury__string__Seg_16));
#line 4135 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4135 "string.m"
                }
#line 4135 "string.m"
                /* direct tailcall eliminated */
#line 4135 "string.m"
                {
#line 4135 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;
#line 4135 "string.m"
                  MR_Integer mercury__string__SegEnd__tmp_copy_10 = mercury__string__J_13;
#line 4135 "string.m"
                  MR_Word mercury__string__Acc0__tmp_copy_11 = mercury__string__V_18_18;

#line 4135 "string.m"
                  mercury__string__Acc0_11 = mercury__string__Acc0__tmp_copy_11;
#line 4135 "string.m"
                  mercury__string__SegEnd_10 = mercury__string__SegEnd__tmp_copy_10;
#line 4135 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4135 "string.m"
                }
#line 4135 "string.m"
                continue;
#line 4133 "string.m"
              }
#line 4136 "string.m"
            else
#line 4138 "string.m"
              {
#line 4138 "string.m"
                /* direct tailcall eliminated */
#line 4138 "string.m"
                {
#line 4138 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;

#line 4138 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4138 "string.m"
                }
#line 4138 "string.m"
                continue;
#line 4138 "string.m"
              }
#line 4136 "string.m"
          }
#line 4140 "string.m"
        else
#line 4142 "string.m"
          {
#line 4142 "string.m"
            MR_String mercury__string__Seg_20;

#line 4039 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_separator_loop_6_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_8 ;
	Start =  (MR_Integer) 0 ;
	End =  mercury__string__SegEnd_10 ;
		{
#line 4039 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 12010 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_20  = SubString;
#line 4039 "string.m"
}
#line 4143 "string.m"
            {
#line 4143 "string.m"
              MR_Word base;
#line 4143 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4143 "string.m"
              *mercury__string__Acc_12 = base;
#line 4143 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Seg_20));
#line 4143 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4143 "string.m"
            }
#line 4142 "string.m"
          }
#line 4140 "string.m"
      }
#line 4140 "string.m"
      break;
#line 4140 "string.m"
    }
#line 4120 "string.m"
}

#line 4101 "string.m"
void MR_CALL 
mercury__string__next_boundary_4_p_0(
#line 4101 "string.m"
  MR_Word mercury__string__P_5,
#line 4101 "string.m"
  MR_String mercury__string__String_6,
#line 4101 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4101 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4101 "string.m"
{
#line 4110 "string.m"
  while (MR_TRUE)
#line 4110 "string.m"
    {
#line 4110 "string.m"
      /* tailcall optimized into a loop */
#line 4110 "string.m"
      {
#line 4110 "string.m"
        MR_bool mercury__string__succeeded;
#line 4110 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4106 "string.m"
        MR_Char mercury__string__Char_10;
#line 4107 "string.m"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 1944 "string.m"
{
#define MR_PROC_LABEL mercury__string__next_boundary_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Cur_7 ;
		{
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 12097 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4106 "string.m"
        if (mercury__string__succeeded)
#line 4106 "string.m"
          {
#line 4107 "string.m"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_5, (MR_Integer) 1)));
#line 4107 "string.m"
            {
#line 4107 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 4106 "string.m"
          }
#line 4110 "string.m"
        if (mercury__string__succeeded)
#line 4109 "string.m"
          {
#line 4109 "string.m"
            /* direct tailcall eliminated */
#line 4109 "string.m"
            {
#line 4109 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4109 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4109 "string.m"
            }
#line 4109 "string.m"
            continue;
#line 4109 "string.m"
          }
#line 4110 "string.m"
        else
#line 4111 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4110 "string.m"
      }
#line 4110 "string.m"
      break;
#line 4110 "string.m"
    }
#line 4101 "string.m"
}

#line 4081 "string.m"
void MR_CALL 
mercury__string__words_loop_4_p_0(
#line 4081 "string.m"
  MR_Word mercury__string__SepP_5,
#line 4081 "string.m"
  MR_String mercury__string__String_6,
#line 4081 "string.m"
  MR_Integer mercury__string__WordStart_7,
#line 4081 "string.m"
  MR_Word * mercury__string__Words_8)
#line 4081 "string.m"
{
#line 4084 "string.m"
  {
#line 4084 "string.m"
    MR_bool mercury__string__succeeded;
#line 4084 "string.m"
    MR_Integer mercury__string__WordEnd_9;

#line 4085 "string.m"
    {
#line 4085 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_120_116_95_98_111_117_110_100_97_114_121_95_95_104_111_49_48_95_95_91_50_93_95_48_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__WordStart_7, &mercury__string__WordEnd_9);
    }
#line 4086 "string.m"
    mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__WordStart_7);
#line 4088 "string.m"
    if (mercury__string__succeeded)
#line 4087 "string.m"
      *mercury__string__Words_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4088 "string.m"
    else
#line 4089 "string.m"
      {
#line 4089 "string.m"
        MR_String mercury__string__Word_10;
#line 4089 "string.m"
        MR_Integer mercury__string__NextWordStart_11;

#line 4039 "string.m"
{
#define MR_PROC_LABEL mercury__string__words_loop_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__String_6 ;
	Start =  mercury__string__WordStart_7 ;
	End =  mercury__string__WordEnd_9 ;
		{
#line 4039 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 12215 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Word_10  = SubString;
#line 4039 "string.m"
}
#line 4090 "string.m"
        {
#line 4090 "string.m"
          mercury__string__next_boundary_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__WordEnd_9, &mercury__string__NextWordStart_11);
        }
#line 4091 "string.m"
        mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__NextWordStart_11);
#line 4093 "string.m"
        if (mercury__string__succeeded)
#line 4092 "string.m"
          {
#line 4092 "string.m"
            MR_Word mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 4092 "string.m"
            {
#line 4092 "string.m"
              MR_Word base;
#line 4092 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4092 "string.m"
              *mercury__string__Words_8 = base;
#line 4092 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4092 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__V_14_14));
#line 4092 "string.m"
            }
#line 4092 "string.m"
          }
#line 4093 "string.m"
        else
#line 4094 "string.m"
          {
#line 4094 "string.m"
            MR_Word mercury__string__Words0_12;

#line 4094 "string.m"
            {
#line 4094 "string.m"
              mercury__string__words_loop_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__NextWordStart_11, &mercury__string__Words0_12);
            }
#line 4095 "string.m"
            {
#line 4095 "string.m"
              MR_Word base;
#line 4095 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4095 "string.m"
              *mercury__string__Words_8 = base;
#line 4095 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4095 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Words0_12));
#line 4095 "string.m"
            }
#line 4094 "string.m"
          }
#line 4089 "string.m"
      }
#line 4084 "string.m"
  }
#line 4081 "string.m"
}

#line 3997 "string.m"
void MR_CALL 
mercury__string__convert_endpoints_4_p_0(
#line 3997 "string.m"
  MR_Integer mercury__string__Start_5,
#line 3997 "string.m"
  MR_Integer mercury__string__Count_6,
#line 3997 "string.m"
  MR_Integer * mercury__string__ClampStart_7,
#line 3997 "string.m"
  MR_Integer * mercury__string__ClampEnd_8)
#line 3997 "string.m"
{
#line 3999 "string.m"
  {
#line 3999 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_5);

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      *mercury__string__ClampStart_7 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      *mercury__string__ClampStart_7 = mercury__string__Start_5;
#line 4001 "string.m"
    mercury__string__succeeded = (mercury__string__Count_6 <= (MR_Integer) 0);
#line 4003 "string.m"
    if (mercury__string__succeeded)
#line 4002 "string.m"
      *mercury__string__ClampEnd_8 = *mercury__string__ClampStart_7;
#line 4003 "string.m"
    else
#line 4007 "string.m"
      {
#line 4005 "string.m"
        MR_Integer mercury__string__V_11_11;
#line 4005 "string.m"
        MR_Integer mercury__string__V_12_12;

#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__string__convert_endpoints_4_p_0

	MR_Integer Max;

		{
#line 141 "int.opt"

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

#line 12349 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_12_12  = Max;
#line 141 "int.opt"
}
#line 4005 "string.m"
        mercury__string__V_11_11 = (mercury__string__V_12_12 - mercury__string__Count_6);
#line 4005 "string.m"
        mercury__string__succeeded = (*mercury__string__ClampStart_7 > mercury__string__V_11_11);
#line 4007 "string.m"
        if (mercury__string__succeeded)
#line 141 "int.opt"
          {
#line 141 "int.opt"
{
#define MR_PROC_LABEL mercury__string__convert_endpoints_4_p_0

	MR_Integer Max;

		{
#line 141 "int.opt"

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

#line 12385 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__ClampEnd_8  = Max;
#line 141 "int.opt"
}
#line 141 "int.opt"
          }
#line 4007 "string.m"
        else
#line 4008 "string.m"
          *mercury__string__ClampEnd_8 = (*mercury__string__ClampStart_7 + mercury__string__Count_6);
#line 4007 "string.m"
      }
#line 3999 "string.m"
  }
#line 3997 "string.m"
}

#line 3974 "string.m"
MR_Word MR_CALL 
mercury__string__between_loop_3_f_0(
#line 3974 "string.m"
  MR_Integer mercury__string__I_5,
#line 3974 "string.m"
  MR_Integer mercury__string__End_6,
#line 3974 "string.m"
  MR_String mercury__string__Str_7)
#line 3974 "string.m"
{
#line 3984 "string.m"
  {
#line 3984 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__I_5 < mercury__string__End_6);
#line 3984 "string.m"
    MR_Word mercury__string__Chars_8;
#line 3984 "string.m"
    MR_Integer mercury__string__J_9;
#line 3984 "string.m"
    MR_Char mercury__string__C_10;

#line 3978 "string.m"
    if (mercury__string__succeeded)
#line 3978 "string.m"
      {
#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 12456 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__C_10  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3978 "string.m"
        if (mercury__string__succeeded)
#line 3980 "string.m"
          mercury__string__succeeded = (mercury__string__J_9 <= mercury__string__End_6);
#line 3978 "string.m"
      }
#line 3984 "string.m"
    if (mercury__string__succeeded)
#line 3982 "string.m"
      {
#line 3982 "string.m"
        MR_Word mercury__string__Cs_11;

#line 3982 "string.m"
        {
#line 3982 "string.m"
          mercury__string__Cs_11 = mercury__string__between_loop_3_f_0(mercury__string__J_9, mercury__string__End_6, mercury__string__Str_7);
        }
#line 3983 "string.m"
        {
#line 3983 "string.m"
          mercury__string__Chars_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3983 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Chars_8, 0) = ((MR_Box) (MR_Word) (mercury__string__C_10));
#line 3983 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Chars_8, 1) = ((MR_Box) (mercury__string__Cs_11));
#line 3983 "string.m"
        }
#line 3982 "string.m"
      }
#line 3984 "string.m"
    else
#line 3985 "string.m"
      mercury__string__Chars_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3984 "string.m"
    return mercury__string__Chars_8;
#line 3984 "string.m"
  }
#line 3974 "string.m"
}

#line 3425 "string.m"
MR_String MR_CALL 
mercury__string__join_list_loop_2_f_0(
#line 3425 "string.m"
  MR_String mercury__string__Sep_1,
#line 3425 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 3425 "string.m"
{
#line 3427 "string.m"
  {
#line 3427 "string.m"
    MR_bool mercury__string__succeeded;
#line 3427 "string.m"
    MR_String mercury__string__HeadVar__3_3;

#line 3427 "string.m"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3427 "string.m"
      mercury__string__HeadVar__3_3 = (MR_String) "";
#line 3427 "string.m"
    else
#line 3428 "string.m"
      {
#line 3428 "string.m"
        MR_String mercury__string__H_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 3428 "string.m"
        MR_Word mercury__string__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 3428 "string.m"
        MR_String mercury__string__V_8_8;
#line 3428 "string.m"
        MR_String mercury__string__V_9_9;

#line 3428 "string.m"
        {
#line 3428 "string.m"
          mercury__string__V_9_9 = mercury__string__join_list_loop_2_f_0(mercury__string__Sep_1, mercury__string__T_7);
        }
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_list_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__H_6 ;
	S2 =  mercury__string__V_9_9 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 12566 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3149 "string.m"
}
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_list_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Sep_1 ;
	S2 =  mercury__string__V_8_8 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 12593 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__3_3  = S3;
#line 3149 "string.m"
}
#line 3428 "string.m"
      }
#line 3427 "string.m"
    return mercury__string__HeadVar__3_3;
#line 3427 "string.m"
  }
#line 3425 "string.m"
}

#line 3244 "string.m"
static void MR_CALL 
mercury__string__mercury_append_3_p_3_1(
#line 3244 "string.m"
  void * mercury__string__env_ptr_arg)
#line 3244 "string.m"
{
#line 3244 "string.m"
  {
#line 3244 "string.m"
    struct mercury__string__mercury_append_3_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__mercury_append_3_p_3_env_0_s *) mercury__string__env_ptr_arg;

#line 3244 "string.m"
    {
#line 1442 "string.m"
      MR_String mercury__string__Str0_27;
#line 1442 "string.m"
      MR_String mercury__string__Str0_37;

#line 1440 "string.m"
      {
#line 1440 "string.m"
        (mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded = mercury__string__semidet_from_char_list_2_p_0((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__XList_7, &mercury__string__Str0_27);
      }
#line 1442 "string.m"
      if ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded)
#line 1441 "string.m"
        *((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__X_4) = mercury__string__Str0_27;
#line 1442 "string.m"
      else
#line 1443 "string.m"
        {
#line 1443 "string.m"
          {
#line 1443 "string.m"
            mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1443 "string.m"
            return;
          }
#line 1443 "string.m"
        }
#line 1440 "string.m"
      {
#line 1440 "string.m"
        (mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded = mercury__string__semidet_from_char_list_2_p_0((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__YList_8, &mercury__string__Str0_37);
      }
#line 1442 "string.m"
      if ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded)
#line 1441 "string.m"
        *((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__Y_5) = mercury__string__Str0_37;
#line 1442 "string.m"
      else
#line 1443 "string.m"
        {
#line 1443 "string.m"
          {
#line 1443 "string.m"
            mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1443 "string.m"
            return;
          }
#line 1443 "string.m"
        }
#line 1442 "string.m"
      {
#line 1442 "string.m"
        ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__cont)((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr);
#line 1442 "string.m"
        return;
      }
#line 3244 "string.m"
    }
#line 3244 "string.m"
  }
#line 3244 "string.m"
}

#line 3242 "string.m"
void MR_CALL 
mercury__string__mercury_append_3_p_3(
#line 3242 "string.m"
  MR_String * mercury__string__X_4,
#line 3242 "string.m"
  MR_String * mercury__string__Y_5,
#line 3242 "string.m"
  MR_String mercury__string__Z_6,
#line 3242 "string.m"
  MR_Cont mercury__string__cont,
#line 3242 "string.m"
  void * mercury__string__cont_env_ptr)
#line 3242 "string.m"
{
#line 3242 "string.m"
  {
#line 3242 "string.m"
    struct mercury__string__mercury_append_3_p_3_env_0_s mercury__string__env;

#line 3242 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__X_4 = mercury__string__X_4;
#line 3242 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__Y_5 = mercury__string__Y_5;
#line 3242 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__cont = mercury__string__cont;
#line 3242 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 3244 "string.m"
    {
#line 3244 "string.m"
      MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3244 "string.m"
      MR_Word mercury__string__ZList_9;

#line 1364 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_3

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
#line 1364 "string.m"
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
#line 12745 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
#line 1364 "string.m"
}
#line 12752 "string.c"
      mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3248 "string.m"
      {
#line 3248 "string.m"
        mercury__list__append_3_p_4(mercury__string__TypeCtorInfo_10_10, &(mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__XList_7, &(mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__YList_8, mercury__string__ZList_9, mercury__string__mercury_append_3_p_3_1, &mercury__string__env);
      }
#line 3244 "string.m"
    }
#line 3242 "string.m"
  }
#line 3242 "string.m"
}

#line 3241 "string.m"
void MR_CALL 
mercury__string__mercury_append_3_p_2(
#line 3241 "string.m"
  MR_String mercury__string__X_4,
#line 3241 "string.m"
  MR_String mercury__string__Y_5,
#line 3241 "string.m"
  MR_String * mercury__string__Z_6)
#line 3241 "string.m"
{
#line 3244 "string.m"
  {
#line 3244 "string.m"
    MR_bool mercury__string__succeeded;
#line 3244 "string.m"
    MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3244 "string.m"
    MR_Word mercury__string__XList_7;
#line 3244 "string.m"
    MR_Word mercury__string__YList_8;
#line 3244 "string.m"
    MR_Word mercury__string__ZList_9;
#line 1442 "string.m"
    MR_String mercury__string__Str0_35;

#line 1364 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_2

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
#line 1364 "string.m"
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
#line 12816 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
#line 1364 "string.m"
}
#line 1364 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_2

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Y_5 ;
		{
#line 1364 "string.m"
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
#line 12847 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__YList_8  = CharList;
#line 1364 "string.m"
}
#line 12854 "string.c"
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3248 "string.m"
    {
#line 3248 "string.m"
      mercury__list__append_3_p_1(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, mercury__string__YList_8, &mercury__string__ZList_9);
    }
#line 1440 "string.m"
    {
#line 1440 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ZList_9, &mercury__string__Str0_35);
    }
#line 1442 "string.m"
    if (mercury__string__succeeded)
#line 1441 "string.m"
      *mercury__string__Z_6 = mercury__string__Str0_35;
#line 1442 "string.m"
    else
#line 1443 "string.m"
      {
#line 1443 "string.m"
        {
#line 1443 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1443 "string.m"
          return;
        }
#line 1443 "string.m"
      }
#line 3244 "string.m"
  }
#line 3241 "string.m"
}

#line 3240 "string.m"
MR_bool MR_CALL 
mercury__string__mercury_append_3_p_1(
#line 3240 "string.m"
  MR_String mercury__string__X_4,
#line 3240 "string.m"
  MR_String * mercury__string__Y_5,
#line 3240 "string.m"
  MR_String mercury__string__Z_6)
#line 3240 "string.m"
{
#line 3244 "string.m"
  {
#line 3244 "string.m"
    MR_bool mercury__string__succeeded;
#line 3244 "string.m"
    MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3244 "string.m"
    MR_Word mercury__string__XList_7;
#line 3244 "string.m"
    MR_Word mercury__string__YList_8;
#line 3244 "string.m"
    MR_Word mercury__string__ZList_9;
#line 1442 "string.m"
    MR_String mercury__string__Str0_35;

#line 1364 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
#line 1364 "string.m"
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
#line 12938 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
#line 1364 "string.m"
}
#line 1364 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
#line 1364 "string.m"
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
#line 12969 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
#line 1364 "string.m"
}
#line 12976 "string.c"
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3248 "string.m"
    {
#line 3248 "string.m"
      mercury__string__succeeded = mercury__list__append_3_p_3(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, &mercury__string__YList_8, mercury__string__ZList_9);
    }
#line 3244 "string.m"
    if (mercury__string__succeeded)
#line 3244 "string.m"
      {
#line 1440 "string.m"
        {
#line 1440 "string.m"
          mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__YList_8, &mercury__string__Str0_35);
        }
#line 1442 "string.m"
        if (mercury__string__succeeded)
#line 1441 "string.m"
          *mercury__string__Y_5 = mercury__string__Str0_35;
#line 1442 "string.m"
        else
#line 1443 "string.m"
          {
#line 1443 "string.m"
            {
#line 1443 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
            }
#line 1443 "string.m"
          }
#line 1442 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 3244 "string.m"
      }
#line 3244 "string.m"
    return mercury__string__succeeded;
#line 3244 "string.m"
  }
#line 3240 "string.m"
}

#line 3239 "string.m"
MR_bool MR_CALL 
mercury__string__mercury_append_3_p_0(
#line 3239 "string.m"
  MR_String mercury__string__X_4,
#line 3239 "string.m"
  MR_String mercury__string__Y_5,
#line 3239 "string.m"
  MR_String mercury__string__Z_6)
#line 3239 "string.m"
{
#line 3244 "string.m"
  {
#line 3244 "string.m"
    MR_bool mercury__string__succeeded;
#line 3244 "string.m"
    MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3244 "string.m"
    MR_Word mercury__string__XList_7;
#line 3244 "string.m"
    MR_Word mercury__string__YList_8;
#line 3244 "string.m"
    MR_Word mercury__string__ZList_9;

#line 1364 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
#line 1364 "string.m"
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
#line 13066 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
#line 1364 "string.m"
}
#line 1364 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Y_5 ;
		{
#line 1364 "string.m"
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
#line 13097 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__YList_8  = CharList;
#line 1364 "string.m"
}
#line 1364 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
#line 1364 "string.m"
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
#line 13128 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
#line 1364 "string.m"
}
#line 13135 "string.c"
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3248 "string.m"
    {
#line 3248 "string.m"
      return mercury__string__succeeded = mercury__list__append_3_p_2(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, mercury__string__YList_8, mercury__string__ZList_9);
    }
#line 3244 "string.m"
    return mercury__string__succeeded;
#line 3244 "string.m"
  }
#line 3239 "string.m"
}

#line 3200 "string.m"
void MR_CALL 
mercury__string__append_ooi_3_5_p_0(
#line 3200 "string.m"
  MR_Integer mercury__string__S1Len_1,
#line 3200 "string.m"
  MR_Integer mercury__string__S3Len_2,
#line 3200 "string.m"
  MR_String * mercury__string__S1_3,
#line 3200 "string.m"
  MR_String * mercury__string__S2_4,
#line 3200 "string.m"
  MR_String mercury__string__S3_5)
#line 3200 "string.m"
{
#line 3203 "string.m"
  {
#line 3203 "string.m"
    MR_bool mercury__string__succeeded;

#line 3207 "string.m"
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
#line 3207 "string.m"
{
    MR_allocate_aligned_string_msg(S1, S1Len, MR_ALLOC_ID);
    MR_memcpy(S1, S3, S1Len);
    S1[S1Len] = '\0';
    MR_allocate_aligned_string_msg(S2, S3Len - S1Len, MR_ALLOC_ID);
    strcpy(S2, S3 + S1Len);
}
#line 13191 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S1_3  = S1;
	 *mercury__string__S2_4  = S2;
#line 3207 "string.m"
}
#line 3203 "string.m"
  }
#line 3200 "string.m"
}

#line 3185 "string.m"
void MR_CALL 
mercury__string__append_ooi_2_5_p_0(
#line 3185 "string.m"
  MR_Integer mercury__string__NextS1Len_6,
#line 3185 "string.m"
  MR_Integer mercury__string__S3Len_7,
#line 3185 "string.m"
  MR_String * mercury__string__S1_8,
#line 3185 "string.m"
  MR_String * mercury__string__S2_9,
#line 3185 "string.m"
  MR_String mercury__string__S3_10,
#line 3185 "string.m"
  MR_Cont mercury__string__cont,
#line 3185 "string.m"
  void * mercury__string__cont_env_ptr)
#line 3185 "string.m"
{
#line 3191 "string.m"
  while (MR_TRUE)
#line 3191 "string.m"
    {
#line 3191 "string.m"
      /* tailcall optimized into a loop */
#line 3191 "string.m"
      {
#line 3191 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__NextS1Len_6 == mercury__string__S3Len_7);

#line 3191 "string.m"
        if (mercury__string__succeeded)
#line 3190 "string.m"
          {
#line 3190 "string.m"
            {
#line 3190 "string.m"
              mercury__string__append_ooi_3_5_p_0(mercury__string__NextS1Len_6, mercury__string__S3Len_7, mercury__string__S1_8, mercury__string__S2_9, mercury__string__S3_10);
            }
#line 3190 "string.m"
            {
#line 3190 "string.m"
              mercury__string__cont(mercury__string__cont_env_ptr);
#line 3190 "string.m"
              return;
            }
#line 3190 "string.m"
          }
#line 3191 "string.m"
        else
#line 3194 "string.m"
          {
#line 3193 "string.m"
            {
#line 3193 "string.m"
              mercury__string__append_ooi_3_5_p_0(mercury__string__NextS1Len_6, mercury__string__S3Len_7, mercury__string__S1_8, mercury__string__S2_9, mercury__string__S3_10);
            }
#line 3193 "string.m"
            {
#line 3193 "string.m"
              mercury__string__cont(mercury__string__cont_env_ptr);
            }
#line 3195 "string.m"
            {
#line 3195 "string.m"
              MR_Integer mercury__string__AdvS1Len_11;
#line 1940 "string.m"
              MR_Char mercury__string__V_12_12;

#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 13298 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__AdvS1Len_11  = NextIndex;
	 mercury__string__V_12_12  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3195 "string.m"
              if (mercury__string__succeeded)
#line 3196 "string.m"
                {
#line 3196 "string.m"
                  /* direct tailcall eliminated */
#line 3196 "string.m"
                  {
#line 3196 "string.m"
                    MR_Integer mercury__string__NextS1Len__tmp_copy_6 = mercury__string__AdvS1Len_11;

#line 3196 "string.m"
                    mercury__string__NextS1Len_6 = mercury__string__NextS1Len__tmp_copy_6;
#line 3196 "string.m"
                  }
#line 3196 "string.m"
                  continue;
#line 3196 "string.m"
                }
#line 3195 "string.m"
            }
#line 3194 "string.m"
          }
#line 3191 "string.m"
      }
#line 3191 "string.m"
      break;
#line 3191 "string.m"
    }
#line 3185 "string.m"
}

#line 3179 "string.m"
void MR_CALL 
mercury__string__append_ooi_3_p_0(
#line 3179 "string.m"
  MR_String * mercury__string__S1_4,
#line 3179 "string.m"
  MR_String * mercury__string__S2_5,
#line 3179 "string.m"
  MR_String mercury__string__S3_6,
#line 3179 "string.m"
  MR_Cont mercury__string__cont,
#line 3179 "string.m"
  void * mercury__string__cont_env_ptr)
#line 3179 "string.m"
{
#line 3181 "string.m"
  {
#line 3181 "string.m"
    MR_bool mercury__string__succeeded;
#line 3181 "string.m"
    MR_Integer mercury__string__S3Len_7;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_ooi_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S3_6 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 13376 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S3Len_7  = Length;
#line 2400 "string.m"
}
#line 3183 "string.m"
    {
#line 3183 "string.m"
      mercury__string__append_ooi_2_5_p_0((MR_Integer) 0, mercury__string__S3Len_7, mercury__string__S1_4, mercury__string__S2_5, mercury__string__S3_6, mercury__string__cont, mercury__string__cont_env_ptr);
#line 3183 "string.m"
      return;
    }
#line 3181 "string.m"
  }
#line 3179 "string.m"
}

#line 3143 "string.m"
void MR_CALL 
mercury__string__append_iio_3_p_0(
#line 3143 "string.m"
  MR_String mercury__string__S1_1,
#line 3143 "string.m"
  MR_String mercury__string__S2_2,
#line 3143 "string.m"
  MR_String * mercury__string__S3_3)
#line 3143 "string.m"
{
#line 3145 "string.m"
  {
#line 3145 "string.m"
    MR_bool mercury__string__succeeded;

#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_iio_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_1 ;
	S2 =  mercury__string__S2_2 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 13431 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S3_3  = S3;
#line 3149 "string.m"
}
#line 3145 "string.m"
  }
#line 3143 "string.m"
}

#line 3091 "string.m"
MR_bool MR_CALL 
mercury__string__append_ioi_3_p_0(
#line 3091 "string.m"
  MR_String mercury__string__S1_1,
#line 3091 "string.m"
  MR_String * mercury__string__S2_2,
#line 3091 "string.m"
  MR_String mercury__string__S3_3)
#line 3091 "string.m"
{
#line 3093 "string.m"
  {
#line 3093 "string.m"
    MR_bool mercury__string__succeeded;

#line 3097 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_ioi_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__S1_1 ;
	S3 =  mercury__string__S3_3 ;
		{
#line 3097 "string.m"
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
#line 13489 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__S2_2  = S2;
#line 3097 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3093 "string.m"
    return mercury__string__succeeded;
#line 3093 "string.m"
  }
#line 3091 "string.m"
}

#line 3048 "string.m"
MR_bool MR_CALL 
mercury__string__append_iii_3_p_0(
#line 3048 "string.m"
  MR_String mercury__string__S1_1,
#line 3048 "string.m"
  MR_String mercury__string__S2_2,
#line 3048 "string.m"
  MR_String mercury__string__S3_3)
#line 3048 "string.m"
{
#line 3050 "string.m"
  {
#line 3050 "string.m"
    MR_bool mercury__string__succeeded;

#line 3054 "string.m"
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
#line 3054 "string.m"
{
    size_t len_1 = strlen(S1);
    SUCCESS_INDICATOR = (
        strncmp(S1, S3, len_1) == 0 &&
        strcmp(S2, S3 + len_1) == 0
    );
}
#line 13543 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3054 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3050 "string.m"
    return mercury__string__succeeded;
#line 3050 "string.m"
  }
#line 3048 "string.m"
}

#line 3008 "string.m"
MR_bool MR_CALL 
mercury__string__sub_string_search_start_loop_6_p_0(
#line 3008 "string.m"
  MR_String mercury__string__String_7,
#line 3008 "string.m"
  MR_String mercury__string__SubString_8,
#line 3008 "string.m"
  MR_Integer mercury__string__I_9,
#line 3008 "string.m"
  MR_Integer mercury__string__Len_10,
#line 3008 "string.m"
  MR_Integer mercury__string__SubLen_11,
#line 3008 "string.m"
  MR_Integer * mercury__string__Index_12)
#line 3008 "string.m"
{
#line 3011 "string.m"
  while (MR_TRUE)
#line 3011 "string.m"
    {
#line 3011 "string.m"
      /* tailcall optimized into a loop */
#line 3011 "string.m"
      {
#line 3011 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__Len_10);
#line 3019 "string.m"
        MR_Integer mercury__string__V_13_13;
#line 3019 "string.m"
        MR_String mercury__string__V_17_17;

#line 3011 "string.m"
        if (mercury__string__succeeded)
#line 3011 "string.m"
          {
#line 3019 "string.m"
            mercury__string__V_13_13 = (mercury__string__I_9 + mercury__string__SubLen_11);
#line 3883 "string.m"
            {
#line 3883 "string.m"
              mercury__string__between_4_p_0(mercury__string__String_7, mercury__string__I_9, mercury__string__V_13_13, &mercury__string__V_17_17);
            }
#line 3019 "string.m"
            mercury__string__succeeded = (strcmp(mercury__string__SubString_8, mercury__string__V_17_17) == 0);
#line 3022 "string.m"
            if (mercury__string__succeeded)
#line 3021 "string.m"
              {
#line 3021 "string.m"
                *mercury__string__Index_12 = mercury__string__I_9;
#line 3021 "string.m"
                mercury__string__succeeded = MR_TRUE;
#line 3021 "string.m"
              }
#line 3022 "string.m"
            else
#line 3023 "string.m"
              {
#line 3023 "string.m"
                MR_Integer mercury__string__V_14_14 = (mercury__string__I_9 + (MR_Integer) 1);

#line 3023 "string.m"
                /* direct tailcall eliminated */
#line 3023 "string.m"
                {
#line 3023 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__V_14_14;

#line 3023 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 3023 "string.m"
                }
#line 3023 "string.m"
                continue;
#line 3023 "string.m"
              }
#line 3011 "string.m"
          }
#line 3011 "string.m"
        return mercury__string__succeeded;
#line 3011 "string.m"
      }
#line 3011 "string.m"
      break;
#line 3011 "string.m"
    }
#line 3008 "string.m"
}

#line 2918 "string.m"
void MR_CALL 
mercury__string__suffix_length_loop_4_p_0(
#line 2918 "string.m"
  MR_Word mercury__string__P_5,
#line 2918 "string.m"
  MR_String mercury__string__S_6,
#line 2918 "string.m"
  MR_Integer mercury__string__I_7,
#line 2918 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 2918 "string.m"
{
#line 2927 "string.m"
  while (MR_TRUE)
#line 2927 "string.m"
    {
#line 2927 "string.m"
      /* tailcall optimized into a loop */
#line 2927 "string.m"
      {
#line 2927 "string.m"
        MR_bool mercury__string__succeeded;
#line 2927 "string.m"
        MR_Integer mercury__string__J_9;
#line 2923 "string.m"
        MR_Char mercury__string__Char_10;
#line 2924 "string.m"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 2033 "string.m"
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
#line 2033 "string.m"

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

#line 13707 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = PrevIndex;
	 mercury__string__Char_10  = Ch;
#line 2033 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2923 "string.m"
        if (mercury__string__succeeded)
#line 2923 "string.m"
          {
#line 2924 "string.m"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_5, (MR_Integer) 1)));
#line 2924 "string.m"
            {
#line 2924 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 2923 "string.m"
          }
#line 2927 "string.m"
        if (mercury__string__succeeded)
#line 2926 "string.m"
          {
#line 2926 "string.m"
            /* direct tailcall eliminated */
#line 2926 "string.m"
            {
#line 2926 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 2926 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 2926 "string.m"
            }
#line 2926 "string.m"
            continue;
#line 2926 "string.m"
          }
#line 2927 "string.m"
        else
#line 2928 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 2927 "string.m"
      }
#line 2927 "string.m"
      break;
#line 2927 "string.m"
    }
#line 2918 "string.m"
}

#line 2901 "string.m"
void MR_CALL 
mercury__string__prefix_length_loop_4_p_0(
#line 2901 "string.m"
  MR_Word mercury__string__P_5,
#line 2901 "string.m"
  MR_String mercury__string__S_6,
#line 2901 "string.m"
  MR_Integer mercury__string__I_7,
#line 2901 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 2901 "string.m"
{
#line 2910 "string.m"
  while (MR_TRUE)
#line 2910 "string.m"
    {
#line 2910 "string.m"
      /* tailcall optimized into a loop */
#line 2910 "string.m"
      {
#line 2910 "string.m"
        MR_bool mercury__string__succeeded;
#line 2910 "string.m"
        MR_Integer mercury__string__J_9;
#line 2906 "string.m"
        MR_Char mercury__string__Char_10;
#line 2907 "string.m"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 13818 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2906 "string.m"
        if (mercury__string__succeeded)
#line 2906 "string.m"
          {
#line 2907 "string.m"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_5, (MR_Integer) 1)));
#line 2907 "string.m"
            {
#line 2907 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 2906 "string.m"
          }
#line 2910 "string.m"
        if (mercury__string__succeeded)
#line 2909 "string.m"
          {
#line 2909 "string.m"
            /* direct tailcall eliminated */
#line 2909 "string.m"
            {
#line 2909 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 2909 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 2909 "string.m"
            }
#line 2909 "string.m"
            continue;
#line 2909 "string.m"
          }
#line 2910 "string.m"
        else
#line 2911 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 2910 "string.m"
      }
#line 2910 "string.m"
      break;
#line 2910 "string.m"
    }
#line 2901 "string.m"
}

#line 2883 "string.m"
MR_bool MR_CALL 
mercury__string__contains_char_3_p_0(
#line 2883 "string.m"
  MR_String mercury__string__Str_4,
#line 2883 "string.m"
  MR_Char mercury__string__Char_5,
#line 2883 "string.m"
  MR_Integer mercury__string__I_6)
#line 2883 "string.m"
{
#line 2892 "string.m"
  while (MR_TRUE)
#line 2892 "string.m"
    {
#line 2892 "string.m"
      /* tailcall optimized into a loop */
#line 2892 "string.m"
      {
#line 2892 "string.m"
        MR_bool mercury__string__succeeded;
#line 2892 "string.m"
        MR_Integer mercury__string__J_7;
#line 2892 "string.m"
        MR_Char mercury__string__IndexChar_8;

#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 13925 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_7  = NextIndex;
	 mercury__string__IndexChar_8  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2892 "string.m"
        if (mercury__string__succeeded)
#line 2892 "string.m"
          {
#line 2887 "string.m"
            mercury__string__succeeded = (mercury__string__IndexChar_8 == mercury__string__Char_5);
#line 2889 "string.m"
            if (mercury__string__succeeded)
#line 2888 "string.m"
              mercury__string__succeeded = MR_TRUE;
#line 2889 "string.m"
            else
#line 2890 "string.m"
              {
#line 2890 "string.m"
                /* direct tailcall eliminated */
#line 2890 "string.m"
                {
#line 2890 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_6 = mercury__string__J_7;

#line 2890 "string.m"
                  mercury__string__I_6 = mercury__string__I__tmp_copy_6;
#line 2890 "string.m"
                }
#line 2890 "string.m"
                continue;
#line 2890 "string.m"
              }
#line 2892 "string.m"
          }
#line 2892 "string.m"
        return mercury__string__succeeded;
#line 2892 "string.m"
      }
#line 2892 "string.m"
      break;
#line 2892 "string.m"
    }
#line 2883 "string.m"
}

#line 2829 "string.m"
MR_bool MR_CALL 
mercury__string__all_match_loop_3_p_0(
#line 2829 "string.m"
  MR_Word mercury__string__P_4,
#line 2829 "string.m"
  MR_String mercury__string__String_5,
#line 2829 "string.m"
  MR_Integer mercury__string__Cur_6)
#line 2829 "string.m"
{
#line 2836 "string.m"
  while (MR_TRUE)
#line 2836 "string.m"
    {
#line 2836 "string.m"
      /* tailcall optimized into a loop */
#line 2836 "string.m"
      {
#line 2836 "string.m"
        MR_bool mercury__string__succeeded;
#line 2836 "string.m"
        MR_Integer mercury__string__Next_7;
#line 2836 "string.m"
        MR_Char mercury__string__Char_8;

#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 14029 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__Char_8  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2836 "string.m"
        if (mercury__string__succeeded)
#line 2834 "string.m"
          {
#line 2834 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_4, (MR_Integer) 1)));

#line 2834 "string.m"
            {
#line 2834 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_4), ((MR_Box) (MR_Word) (mercury__string__Char_8)));
            }
#line 2834 "string.m"
            if (mercury__string__succeeded)
#line 2835 "string.m"
              {
#line 2835 "string.m"
                /* direct tailcall eliminated */
#line 2835 "string.m"
                {
#line 2835 "string.m"
                  MR_Integer mercury__string__Cur__tmp_copy_6 = mercury__string__Next_7;

#line 2835 "string.m"
                  mercury__string__Cur_6 = mercury__string__Cur__tmp_copy_6;
#line 2835 "string.m"
                }
#line 2835 "string.m"
                continue;
#line 2835 "string.m"
              }
#line 2834 "string.m"
          }
#line 2836 "string.m"
        else
#line 2837 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 2836 "string.m"
        return mercury__string__succeeded;
#line 2836 "string.m"
      }
#line 2836 "string.m"
      break;
#line 2836 "string.m"
    }
#line 2829 "string.m"
}

#line 2664 "string.m"
void MR_CALL 
mercury__string__hash3_loop_5_p_0(
#line 2664 "string.m"
  MR_String mercury__string__String_6,
#line 2664 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2664 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2664 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2664 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2664 "string.m"
{
#line 2673 "string.m"
  while (MR_TRUE)
#line 2673 "string.m"
    {
#line 2673 "string.m"
      /* tailcall optimized into a loop */
#line 2673 "string.m"
      {
#line 2673 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2673 "string.m"
        if (mercury__string__succeeded)
#line 2669 "string.m"
          {
#line 2669 "string.m"
            MR_Integer mercury__string__C_10;
#line 2669 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2669 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_15_15;
#line 2669 "string.m"
            MR_Integer mercury__string__V_16_16;

#line 2160 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash3_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2160 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 14143 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2160 "string.m"
}
#line 2670 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 49);
#line 2671 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_15_15 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
#line 2672 "string.m"
            mercury__string__V_16_16 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2672 "string.m"
            /* direct tailcall eliminated */
#line 2672 "string.m"
            {
#line 2672 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_16_16;
#line 2672 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_15_15;

#line 2672 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2672 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2672 "string.m"
            }
#line 2672 "string.m"
            continue;
#line 2669 "string.m"
          }
#line 2673 "string.m"
        else
#line 2672 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2673 "string.m"
      }
#line 2673 "string.m"
      break;
#line 2673 "string.m"
    }
#line 2664 "string.m"
}

#line 2646 "string.m"
void MR_CALL 
mercury__string__hash2_loop_5_p_0(
#line 2646 "string.m"
  MR_String mercury__string__String_6,
#line 2646 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2646 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2646 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2646 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2646 "string.m"
{
#line 2655 "string.m"
  while (MR_TRUE)
#line 2655 "string.m"
    {
#line 2655 "string.m"
      /* tailcall optimized into a loop */
#line 2655 "string.m"
      {
#line 2655 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2655 "string.m"
        if (mercury__string__succeeded)
#line 2651 "string.m"
          {
#line 2651 "string.m"
            MR_Integer mercury__string__C_10;
#line 2651 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2651 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_15_15;
#line 2651 "string.m"
            MR_Integer mercury__string__V_16_16;

#line 2160 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash2_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2160 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 14243 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2160 "string.m"
}
#line 2652 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 37);
#line 2653 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_15_15 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
#line 2654 "string.m"
            mercury__string__V_16_16 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2654 "string.m"
            /* direct tailcall eliminated */
#line 2654 "string.m"
            {
#line 2654 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_16_16;
#line 2654 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_15_15;

#line 2654 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2654 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2654 "string.m"
            }
#line 2654 "string.m"
            continue;
#line 2651 "string.m"
          }
#line 2655 "string.m"
        else
#line 2654 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2655 "string.m"
      }
#line 2655 "string.m"
      break;
#line 2655 "string.m"
    }
#line 2646 "string.m"
}

#line 2628 "string.m"
void MR_CALL 
mercury__string__hash_loop_5_p_0(
#line 2628 "string.m"
  MR_String mercury__string__String_6,
#line 2628 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2628 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2628 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2628 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2628 "string.m"
{
#line 2637 "string.m"
  while (MR_TRUE)
#line 2637 "string.m"
    {
#line 2637 "string.m"
      /* tailcall optimized into a loop */
#line 2637 "string.m"
      {
#line 2637 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2637 "string.m"
        if (mercury__string__succeeded)
#line 2633 "string.m"
          {
#line 2633 "string.m"
            MR_Integer mercury__string__C_10;
#line 2633 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2633 "string.m"
            MR_Integer mercury__string__V_14_14;
#line 2633 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_16_16;
#line 2633 "string.m"
            MR_Integer mercury__string__V_17_17;

#line 2160 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2160 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 14345 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2160 "string.m"
}
#line 2634 "string.m"
            mercury__string__V_14_14 = (mercury__string__STATE_VARIABLE_HashVal_0_11 << (MR_Integer) 5);
#line 2634 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 ^ mercury__string__V_14_14);
#line 2635 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_16_16 = (mercury__string__STATE_VARIABLE_HashVal_13_13 ^ mercury__string__C_10);
#line 2636 "string.m"
            mercury__string__V_17_17 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2636 "string.m"
            /* direct tailcall eliminated */
#line 2636 "string.m"
            {
#line 2636 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_17_17;
#line 2636 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_16_16;

#line 2636 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2636 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2636 "string.m"
            }
#line 2636 "string.m"
            continue;
#line 2633 "string.m"
          }
#line 2637 "string.m"
        else
#line 2636 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2637 "string.m"
      }
#line 2637 "string.m"
      break;
#line 2637 "string.m"
    }
#line 2628 "string.m"
}

#line 2598 "string.m"
MR_bool MR_CALL 
mercury__string__codepoint_offset_loop_5_p_0(
#line 2598 "string.m"
  MR_String mercury__string__String_6,
#line 2598 "string.m"
  MR_Integer mercury__string__Offset_7,
#line 2598 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2598 "string.m"
  MR_Integer mercury__string__N_9,
#line 2598 "string.m"
  MR_Integer * mercury__string__Index_10)
#line 2598 "string.m"
{
#line 2601 "string.m"
  while (MR_TRUE)
#line 2601 "string.m"
    {
#line 2601 "string.m"
      /* tailcall optimized into a loop */
#line 2601 "string.m"
      {
#line 2601 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Offset_7 < mercury__string__Length_8);

#line 2601 "string.m"
        if (mercury__string__succeeded)
#line 2601 "string.m"
          {
#line 2603 "string.m"
            mercury__string__succeeded = (mercury__string__N_9 == (MR_Integer) 0);
#line 2605 "string.m"
            if (mercury__string__succeeded)
#line 2604 "string.m"
              {
#line 2604 "string.m"
                *mercury__string__Index_10 = mercury__string__Offset_7;
#line 2604 "string.m"
                mercury__string__succeeded = MR_TRUE;
#line 2604 "string.m"
              }
#line 2605 "string.m"
            else
#line 2606 "string.m"
              {
#line 2606 "string.m"
                MR_Integer mercury__string__NextOffset_11;
#line 2606 "string.m"
                MR_Integer mercury__string__V_13_13;
#line 2606 "string.m"
                MR_Integer mercury__string__V_14_14;
#line 1940 "string.m"
                MR_Char mercury__string__V_12_12;

#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 14472 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__NextOffset_11  = NextIndex;
	 mercury__string__V_12_12  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2606 "string.m"
                if (mercury__string__succeeded)
#line 2606 "string.m"
                  {
#line 2607 "string.m"
                    mercury__string__V_14_14 = (MR_Integer) 1;
#line 2607 "string.m"
                    mercury__string__V_13_13 = (mercury__string__N_9 - mercury__string__V_14_14);
#line 2607 "string.m"
                    /* direct tailcall eliminated */
#line 2607 "string.m"
                    {
#line 2607 "string.m"
                      MR_Integer mercury__string__Offset__tmp_copy_7 = mercury__string__NextOffset_11;
#line 2607 "string.m"
                      MR_Integer mercury__string__N__tmp_copy_9 = mercury__string__V_13_13;

#line 2607 "string.m"
                      mercury__string__N_9 = mercury__string__N__tmp_copy_9;
#line 2607 "string.m"
                      mercury__string__Offset_7 = mercury__string__Offset__tmp_copy_7;
#line 2607 "string.m"
                    }
#line 2607 "string.m"
                    continue;
#line 2606 "string.m"
                  }
#line 2606 "string.m"
              }
#line 2601 "string.m"
          }
#line 2601 "string.m"
        return mercury__string__succeeded;
#line 2601 "string.m"
      }
#line 2601 "string.m"
      break;
#line 2601 "string.m"
    }
#line 2598 "string.m"
}

#line 2528 "string.m"
void MR_CALL 
mercury__string__count_utf8_code_units_2_3_p_0(
#line 2528 "string.m"
  MR_Char mercury__string__Char_4,
#line 2528 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Length_0_8,
#line 2528 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Length_9)
#line 2528 "string.m"
{
#line 2530 "string.m"
  {
#line 2530 "string.m"
    MR_bool mercury__string__succeeded;
#line 2530 "string.m"
    MR_Integer mercury__string__CharInt_6;

#line 66 "char.opt"
{
#define MR_PROC_LABEL mercury__string__count_utf8_code_units_2_3_p_0

	MR_Char Character;
	MR_Integer Int;

	Character =  mercury__string__Char_4 ;
		{
#line 66 "char.opt"

    Int = (MR_UnsignedChar) Character;

#line 14556 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__CharInt_6  = Int;
#line 66 "char.opt"
}
#line 2532 "string.m"
    mercury__string__succeeded = (mercury__string__CharInt_6 <= (MR_Integer) 127);
#line 2534 "string.m"
    if (mercury__string__succeeded)
#line 2533 "string.m"
      {
#line 2533 "string.m"
        *mercury__string__STATE_VARIABLE_Length_9 = (mercury__string__STATE_VARIABLE_Length_0_8 + (MR_Integer) 1);
#line 2533 "string.m"
      }
#line 2534 "string.m"
    else
#line 2536 "string.m"
      {
#line 2536 "string.m"
        MR_Word mercury__string__UTF8_7;

#line 2534 "string.m"
        {
#line 2534 "string.m"
          mercury__string__succeeded = mercury__char__to_utf8_2_p_0(mercury__string__Char_4, &mercury__string__UTF8_7);
        }
#line 2536 "string.m"
        if (mercury__string__succeeded)
#line 2535 "string.m"
          {
#line 2535 "string.m"
            MR_Word mercury__string__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2535 "string.m"
            MR_Integer mercury__string__V_14_14;

#line 78 "list.opt"
            {
#line 78 "list.opt"
              mercury__list__length_2_3_p_0(mercury__string__TypeCtorInfo_17_17, mercury__string__UTF8_7, (MR_Integer) 0, &mercury__string__V_14_14);
            }
#line 2535 "string.m"
            *mercury__string__STATE_VARIABLE_Length_9 = (mercury__string__STATE_VARIABLE_Length_0_8 + mercury__string__V_14_14);
#line 2535 "string.m"
          }
#line 2536 "string.m"
        else
#line 2537 "string.m"
          {
#line 2537 "string.m"
            {
#line 2537 "string.m"
              mercury__require__error_2_p_0((MR_String) "predicate \140string.count_utf8_code_units_2\'/3", (MR_String) "char.to_utf8 failed");
#line 2537 "string.m"
              return;
            }
#line 2537 "string.m"
          }
#line 2536 "string.m"
      }
#line 2530 "string.m"
  }
#line 2528 "string.m"
}

#line 2501 "string.m"
void MR_CALL 
mercury__string__count_codepoints_loop_4_p_0(
#line 2501 "string.m"
  MR_String mercury__string__String_5,
#line 2501 "string.m"
  MR_Integer mercury__string__I_6,
#line 2501 "string.m"
  MR_Integer mercury__string__Count0_7,
#line 2501 "string.m"
  MR_Integer * mercury__string__Count_8)
#line 2501 "string.m"
{
#line 2506 "string.m"
  while (MR_TRUE)
#line 2506 "string.m"
    {
#line 2506 "string.m"
      /* tailcall optimized into a loop */
#line 2506 "string.m"
      {
#line 2506 "string.m"
        MR_bool mercury__string__succeeded;
#line 2506 "string.m"
        MR_Integer mercury__string__J_9;
#line 1940 "string.m"
        MR_Char mercury__string__V_10_10;

#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 14676 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__V_10_10  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2506 "string.m"
        if (mercury__string__succeeded)
#line 2505 "string.m"
          {
#line 2505 "string.m"
            MR_Integer mercury__string__V_11_11 = (mercury__string__Count0_7 + (MR_Integer) 1);

#line 2505 "string.m"
            /* direct tailcall eliminated */
#line 2505 "string.m"
            {
#line 2505 "string.m"
              MR_Integer mercury__string__I__tmp_copy_6 = mercury__string__J_9;
#line 2505 "string.m"
              MR_Integer mercury__string__Count0__tmp_copy_7 = mercury__string__V_11_11;

#line 2505 "string.m"
              mercury__string__Count0_7 = mercury__string__Count0__tmp_copy_7;
#line 2505 "string.m"
              mercury__string__I_6 = mercury__string__I__tmp_copy_6;
#line 2505 "string.m"
            }
#line 2505 "string.m"
            continue;
#line 2505 "string.m"
          }
#line 2506 "string.m"
        else
#line 2507 "string.m"
          *mercury__string__Count_8 = mercury__string__Count0_7;
#line 2506 "string.m"
      }
#line 2506 "string.m"
      break;
#line 2506 "string.m"
    }
#line 2501 "string.m"
}

#line 2320 "string.m"
void MR_CALL 
mercury__string__unsafe_set_char_non_null_4_p_0(
#line 2320 "string.m"
  MR_Char mercury__string__Ch_1,
#line 2320 "string.m"
  MR_Integer mercury__string__Index_2,
#line 2320 "string.m"
  MR_String mercury__string__Str0_3,
#line 2320 "string.m"
  MR_String * mercury__string__Str_4)
#line 2320 "string.m"
{
#line 2325 "string.m"
  {
#line 2325 "string.m"
    MR_bool mercury__string__succeeded;

#line 2329 "string.m"
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
#line 2329 "string.m"

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

#line 14779 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_4  = Str;
#line 2329 "string.m"
}
#line 2325 "string.m"
  }
#line 2320 "string.m"
}

#line 2196 "string.m"
MR_bool MR_CALL 
mercury__string__set_char_non_null_4_p_0(
#line 2196 "string.m"
  MR_Char mercury__string__Ch_1,
#line 2196 "string.m"
  MR_Integer mercury__string__Index_2,
#line 2196 "string.m"
  MR_String mercury__string__Str0_3,
#line 2196 "string.m"
  MR_String * mercury__string__Str_4)
#line 2196 "string.m"
{
#line 2201 "string.m"
  {
#line 2201 "string.m"
    MR_bool mercury__string__succeeded;

#line 2205 "string.m"
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
#line 2205 "string.m"

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

#line 14852 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_4  = Str;
#line 2205 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2201 "string.m"
    return mercury__string__succeeded;
#line 2201 "string.m"
  }
#line 2196 "string.m"
}

#line 2128 "string.m"
MR_bool MR_CALL 
mercury__string__index_check_2_p_0(
#line 2128 "string.m"
  MR_Integer mercury__string__Index_1,
#line 2128 "string.m"
  MR_Integer mercury__string__Length_2)
#line 2128 "string.m"
{
#line 2130 "string.m"
  {
#line 2130 "string.m"
    MR_bool mercury__string__succeeded;

#line 2134 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_check_2_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_1 ;
	Length =  mercury__string__Length_2 ;
		{
#line 2134 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 14905 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2134 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2130 "string.m"
    return mercury__string__succeeded;
#line 2130 "string.m"
  }
#line 2128 "string.m"
}

#line 1874 "string.m"
MR_bool MR_CALL 
mercury__string__unsafe_index_2_3_p_0(
#line 1874 "string.m"
  MR_String mercury__string__Str_1,
#line 1874 "string.m"
  MR_Integer mercury__string__Index_2,
#line 1874 "string.m"
  MR_Char * mercury__string__Ch_3)
#line 1874 "string.m"
{
#line 1876 "string.m"
  {
#line 1876 "string.m"
    MR_bool mercury__string__succeeded;

#line 1880 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_2_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Index =  mercury__string__Index_2 ;
		{
#line 1880 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 14958 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Ch_3  = Ch;
#line 1880 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1876 "string.m"
    return mercury__string__succeeded;
#line 1876 "string.m"
  }
#line 1874 "string.m"
}

#line 1687 "string.m"
void MR_CALL 
mercury__string__to_code_unit_list_loop_4_p_0(
#line 1687 "string.m"
  MR_String mercury__string__String_5,
#line 1687 "string.m"
  MR_Integer mercury__string__Index_6,
#line 1687 "string.m"
  MR_Integer mercury__string__End_7,
#line 1687 "string.m"
  MR_Word * mercury__string__List_8)
#line 1687 "string.m"
{
#line 1693 "string.m"
  {
#line 1693 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__Index_6 >= mercury__string__End_7);

#line 1693 "string.m"
    if (mercury__string__succeeded)
#line 1692 "string.m"
      *mercury__string__List_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1693 "string.m"
    else
#line 1694 "string.m"
      {
#line 1694 "string.m"
        MR_Integer mercury__string__Code_9;
#line 1694 "string.m"
        MR_Word mercury__string__Tail_10;
#line 1694 "string.m"
        MR_Integer mercury__string__V_11_11;

#line 2160 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_code_unit_list_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_5 ;
	Index =  mercury__string__Index_6 ;
		{
#line 2160 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 15024 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Code_9  = Code;
#line 2160 "string.m"
}
#line 1695 "string.m"
        mercury__string__V_11_11 = (mercury__string__Index_6 + (MR_Integer) 1);
#line 1695 "string.m"
        {
#line 1695 "string.m"
          mercury__string__to_code_unit_list_loop_4_p_0(mercury__string__String_5, mercury__string__V_11_11, mercury__string__End_7, &mercury__string__Tail_10);
        }
#line 1696 "string.m"
        {
#line 1696 "string.m"
          MR_Word base;
#line 1696 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1696 "string.m"
          *mercury__string__List_8 = base;
#line 1696 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Code_9));
#line 1696 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Tail_10));
#line 1696 "string.m"
        }
#line 1694 "string.m"
      }
#line 1693 "string.m"
  }
#line 1687 "string.m"
}

#line 1358 "string.m"
void MR_CALL 
mercury__string__to_char_list_forward_2_p_0(
#line 1358 "string.m"
  MR_String mercury__string__Str_1,
#line 1358 "string.m"
  MR_Word * mercury__string__CharList_2)
#line 1358 "string.m"
{
#line 1360 "string.m"
  {
#line 1360 "string.m"
    MR_bool mercury__string__succeeded;

#line 1364 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_char_list_forward_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_1 ;
		{
#line 1364 "string.m"
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
#line 15097 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__CharList_2  = CharList;
#line 1364 "string.m"
}
#line 1360 "string.m"
  }
#line 1358 "string.m"
}

#line 1293 "string.m"
void MR_CALL 
mercury__string__format_3_p_0(
#line 1293 "string.m"
  MR_String mercury__string__FormatString_4,
#line 1293 "string.m"
  MR_Word mercury__string__PolyList_5,
#line 1293 "string.m"
  MR_String * mercury__string__String_6)
#line 1293 "string.m"
{
#line 5333 "string.m"
  {
#line 5333 "string.m"
    MR_bool mercury__string__succeeded;

#line 5333 "string.m"
    {
#line 5333 "string.m"
      mercury__string__format__format_impl_3_p_0(mercury__string__FormatString_4, mercury__string__PolyList_5, mercury__string__String_6);
#line 5333 "string.m"
      return;
    }
#line 5333 "string.m"
  }
#line 1293 "string.m"
}

#line 1292 "string.m"
MR_String MR_CALL 
mercury__string__format_2_f_0(
#line 1292 "string.m"
  MR_String mercury__string__S1_4,
#line 1292 "string.m"
  MR_Word mercury__string__PT_5)
#line 1292 "string.m"
{
#line 5333 "string.m"
  {
#line 5333 "string.m"
    MR_bool mercury__string__succeeded;
#line 5333 "string.m"
    MR_String mercury__string__S2_6;

#line 5333 "string.m"
    {
#line 5333 "string.m"
      mercury__string__format__format_impl_3_p_0(mercury__string__S1_4, mercury__string__PT_5, &mercury__string__S2_6);
    }
#line 5333 "string.m"
    return mercury__string__S2_6;
#line 5333 "string.m"
  }
#line 1292 "string.m"
}

#line 1223 "string.m"
void MR_CALL 
mercury__string__string_ops_noncanon_4_p_3(
#line 1223 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_9,
#line 1223 "string.m"
  MR_Word mercury__string__NonCanon_5,
#line 1223 "string.m"
  MR_Box mercury__string__X_7,
#line 1223 "string.m"
  MR_String * mercury__string__String_8)
#line 1223 "string.m"
{
#line 21 "string.to_string.opt"
  {
#line 21 "string.to_string.opt"
    MR_bool mercury__string__succeeded;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__TypeCtorInfo_13_17;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__TypeClassInfo_for_op_table_26 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 21 "string.to_string.opt"
    MR_Word mercury__string__V_10_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 21 "string.to_string.opt"
    MR_Word mercury__string__RevStrings_9_15;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__V_11_16;
#line 21 "string.to_string.opt"
    MR_Integer mercury__string__Priority_10_23;
#line 21 "string.to_string.opt"
    MR_Integer mercury__string__V_13_24;
#line 15196 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15198 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 15201 "string.c"
    {
#line 15203 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15206 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__Priority_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__RevStrings_9_15);
    }
#line 15215 "string.c"
    mercury__string__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_17, mercury__string__RevStrings_9_15, &mercury__string__V_11_16);
    }
#line 24 "string.to_string.opt"
    {
#line 24 "string.to_string.opt"
      *mercury__string__String_8 = mercury__string__append_list_1_f_0(mercury__string__V_11_16);
    }
#line 21 "string.to_string.opt"
  }
#line 1223 "string.m"
}

#line 1222 "string.m"
void MR_CALL 
mercury__string__string_ops_noncanon_4_p_2(
#line 1222 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_9,
#line 1222 "string.m"
  MR_Word mercury__string__NonCanon_5,
#line 1222 "string.m"
  MR_Box mercury__string__X_7,
#line 1222 "string.m"
  MR_String * mercury__string__String_8)
#line 1222 "string.m"
{
#line 21 "string.to_string.opt"
  {
#line 21 "string.to_string.opt"
    MR_bool mercury__string__succeeded;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__TypeCtorInfo_13_17;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__TypeClassInfo_for_op_table_26 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 21 "string.to_string.opt"
    MR_Word mercury__string__V_10_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 21 "string.to_string.opt"
    MR_Word mercury__string__RevStrings_9_15;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__V_11_16;
#line 21 "string.to_string.opt"
    MR_Integer mercury__string__Priority_10_23;
#line 21 "string.to_string.opt"
    MR_Integer mercury__string__V_13_24;
#line 15263 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15265 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 15268 "string.c"
    {
#line 15270 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15273 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__Priority_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__RevStrings_9_15);
    }
#line 15282 "string.c"
    mercury__string__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_17, mercury__string__RevStrings_9_15, &mercury__string__V_11_16);
    }
#line 24 "string.to_string.opt"
    {
#line 24 "string.to_string.opt"
      *mercury__string__String_8 = mercury__string__append_list_1_f_0(mercury__string__V_11_16);
    }
#line 21 "string.to_string.opt"
  }
#line 1222 "string.m"
}

#line 1221 "string.m"
void MR_CALL 
mercury__string__string_ops_noncanon_4_p_1(
#line 1221 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_9,
#line 1221 "string.m"
  MR_Word mercury__string__NonCanon_5,
#line 1221 "string.m"
  MR_Box mercury__string__X_7,
#line 1221 "string.m"
  MR_String * mercury__string__String_8)
#line 1221 "string.m"
{
#line 21 "string.to_string.opt"
  {
#line 21 "string.to_string.opt"
    MR_bool mercury__string__succeeded;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__TypeCtorInfo_13_17;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__TypeClassInfo_for_op_table_26 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 21 "string.to_string.opt"
    MR_Word mercury__string__V_10_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 21 "string.to_string.opt"
    MR_Word mercury__string__RevStrings_9_15;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__V_11_16;
#line 21 "string.to_string.opt"
    MR_Integer mercury__string__Priority_10_23;
#line 21 "string.to_string.opt"
    MR_Integer mercury__string__V_13_24;
#line 15330 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15332 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 15335 "string.c"
    {
#line 15337 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15340 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__Priority_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__RevStrings_9_15);
    }
#line 15349 "string.c"
    mercury__string__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_17, mercury__string__RevStrings_9_15, &mercury__string__V_11_16);
    }
#line 24 "string.to_string.opt"
    {
#line 24 "string.to_string.opt"
      *mercury__string__String_8 = mercury__string__append_list_1_f_0(mercury__string__V_11_16);
    }
#line 21 "string.to_string.opt"
  }
#line 1221 "string.m"
}

#line 1220 "string.m"
void MR_CALL 
mercury__string__string_ops_noncanon_4_p_0(
#line 1220 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_9,
#line 1220 "string.m"
  MR_Word mercury__string__NonCanon_5,
#line 1220 "string.m"
  MR_Box mercury__string__X_7,
#line 1220 "string.m"
  MR_String * mercury__string__String_8)
#line 1220 "string.m"
{
#line 21 "string.to_string.opt"
  {
#line 21 "string.to_string.opt"
    MR_bool mercury__string__succeeded;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__TypeCtorInfo_13_17;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__TypeClassInfo_for_op_table_26 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 21 "string.to_string.opt"
    MR_Word mercury__string__V_10_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 21 "string.to_string.opt"
    MR_Word mercury__string__RevStrings_9_15;
#line 21 "string.to_string.opt"
    MR_Word mercury__string__V_11_16;
#line 21 "string.to_string.opt"
    MR_Integer mercury__string__Priority_10_23;
#line 21 "string.to_string.opt"
    MR_Integer mercury__string__V_13_24;
#line 15397 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15399 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 15402 "string.c"
    {
#line 15404 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15407 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__Priority_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__RevStrings_9_15);
    }
#line 15416 "string.c"
    mercury__string__TypeCtorInfo_13_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_17, mercury__string__RevStrings_9_15, &mercury__string__V_11_16);
    }
#line 24 "string.to_string.opt"
    {
#line 24 "string.to_string.opt"
      *mercury__string__String_8 = mercury__string__append_list_1_f_0(mercury__string__V_11_16);
    }
#line 21 "string.to_string.opt"
  }
#line 1220 "string.m"
}

#line 1204 "string.m"
MR_String MR_CALL 
mercury__string__string_ops_2_f_0(
#line 1204 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_6,
#line 1204 "string.m"
  MR_Box mercury__string__X_5)
#line 1204 "string.m"
{
#line 18 "string.to_string.opt"
  {
#line 18 "string.to_string.opt"
    MR_bool mercury__string__succeeded;
#line 18 "string.to_string.opt"
    MR_String mercury__string__HeadVar__3_3;
#line 18 "string.to_string.opt"
    MR_Word mercury__string__TypeCtorInfo_13_18;
#line 18 "string.to_string.opt"
    MR_Word mercury__string__TypeClassInfo_for_op_table_27 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 18 "string.to_string.opt"
    MR_Word mercury__string__V_10_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 18 "string.to_string.opt"
    MR_Word mercury__string__RevStrings_9_16;
#line 18 "string.to_string.opt"
    MR_Word mercury__string__V_11_17;
#line 18 "string.to_string.opt"
    MR_Integer mercury__string__Priority_10_24;
#line 18 "string.to_string.opt"
    MR_Integer mercury__string__V_13_25;
#line 15462 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_27, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15464 "string.c"
    MR_Box mercury__string__conv1_V_13_25;

#line 15467 "string.c"
    {
#line 15469 "string.c"
      mercury__string__conv1_V_13_25 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_27), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15472 "string.c"
    mercury__string__V_13_25 = ((MR_Integer) mercury__string__conv1_V_13_25);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_24 = (mercury__string__V_13_25 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_6, (MR_Integer) 1, mercury__string__Priority_10_24, mercury__string__X_5, mercury__string__V_10_15, &mercury__string__RevStrings_9_16);
    }
#line 15481 "string.c"
    mercury__string__TypeCtorInfo_13_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_18, mercury__string__RevStrings_9_16, &mercury__string__V_11_17);
    }
#line 24 "string.to_string.opt"
    {
#line 24 "string.to_string.opt"
      return mercury__string__HeadVar__3_3 = mercury__string__append_list_1_f_0(mercury__string__V_11_17);
    }
#line 18 "string.to_string.opt"
    return mercury__string__HeadVar__3_3;
#line 18 "string.to_string.opt"
  }
#line 1204 "string.m"
}

#line 1200 "string.m"
MR_String MR_CALL 
mercury__string__string_1_f_0(
#line 1200 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_4,
#line 1200 "string.m"
  MR_Box mercury__string__X_3)
#line 1200 "string.m"
{
#line 14 "string.to_string.opt"
  {
#line 14 "string.to_string.opt"
    MR_bool mercury__string__succeeded;
#line 14 "string.to_string.opt"
    MR_String mercury__string__HeadVar__2_2;
#line 14 "string.to_string.opt"
    MR_Word mercury__string__TypeCtorInfo_13_16;
#line 14 "string.to_string.opt"
    MR_Word mercury__string__TypeClassInfo_for_op_table_25;
#line 14 "string.to_string.opt"
    MR_Word mercury__string__V_10_13;
#line 14 "string.to_string.opt"
    MR_Word mercury__string__RevStrings_9_14;
#line 14 "string.to_string.opt"
    MR_Word mercury__string__V_11_15;
#line 14 "string.to_string.opt"
    MR_Integer mercury__string__Priority_10_22;
#line 14 "string.to_string.opt"
    MR_Integer mercury__string__V_13_23;
#line 15529 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);
#line 15531 "string.c"
    MR_Box mercury__string__conv1_V_13_23;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 22 "string.to_string.opt"
    mercury__string__V_10_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 15538 "string.c"
    mercury__string__TypeClassInfo_for_op_table_25 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 15540 "string.c"
    mercury__string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_25, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15542 "string.c"
    {
#line 15544 "string.c"
      mercury__string__conv1_V_13_23 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_25), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15547 "string.c"
    mercury__string__V_13_23 = ((MR_Integer) mercury__string__conv1_V_13_23);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_22 = (mercury__string__V_13_23 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_4, (MR_Integer) 1, mercury__string__Priority_10_22, mercury__string__X_3, mercury__string__V_10_13, &mercury__string__RevStrings_9_14);
    }
#line 15556 "string.c"
    mercury__string__TypeCtorInfo_13_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_13_16, mercury__string__RevStrings_9_14, &mercury__string__V_11_15);
    }
#line 24 "string.to_string.opt"
    {
#line 24 "string.to_string.opt"
      return mercury__string__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__string__V_11_15);
    }
#line 14 "string.to_string.opt"
    return mercury__string__HeadVar__2_2;
#line 14 "string.to_string.opt"
  }
#line 1200 "string.m"
}

#line 1190 "string.m"
MR_String MR_CALL 
mercury__string__from_c_pointer_1_f_0(
#line 1190 "string.m"
  MR_Word mercury__string__P_3)
#line 1190 "string.m"
{
#line 5306 "string.m"
  {
#line 5306 "string.m"
    MR_bool mercury__string__succeeded;
#line 5306 "string.m"
    MR_String mercury__string__S_4;
#line 5306 "string.m"
    MR_Integer mercury__string__Int_7 = (MR_Integer) mercury__string__P_3;
#line 5306 "string.m"
    MR_String mercury__string__V_9_9;
#line 5306 "string.m"
    MR_String mercury__string__V_10_10;

#line 5071 "string.m"
    {
#line 5071 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__Int_7, (MR_Integer) 16, &mercury__string__V_10_10);
    }
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_c_pointer_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_10_10 ;
	S2 =  (MR_String) ")" ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15620 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_9_9  = S3;
#line 3149 "string.m"
}
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_c_pointer_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__V_9_9 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15647 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S_4  = S3;
#line 3149 "string.m"
}
#line 5306 "string.m"
    return mercury__string__S_4;
#line 5306 "string.m"
  }
#line 1190 "string.m"
}

#line 1186 "string.m"
void MR_CALL 
mercury__string__c_pointer_to_string_2_p_0(
#line 1186 "string.m"
  MR_Word mercury__string__C_Pointer_3,
#line 1186 "string.m"
  MR_String * mercury__string__Str_4)
#line 1186 "string.m"
{
#line 5306 "string.m"
  {
#line 5306 "string.m"
    MR_bool mercury__string__succeeded;
#line 5306 "string.m"
    MR_Integer mercury__string__Int_5 = (MR_Integer) mercury__string__C_Pointer_3;
#line 5306 "string.m"
    MR_String mercury__string__V_7_7;
#line 5306 "string.m"
    MR_String mercury__string__V_8_8;

#line 5071 "string.m"
    {
#line 5071 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__Int_5, (MR_Integer) 16, &mercury__string__V_8_8);
    }
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_2_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_8_8 ;
	S2 =  (MR_String) ")" ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15706 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = S3;
#line 3149 "string.m"
}
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_2_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__V_7_7 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15733 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_4  = S3;
#line 3149 "string.m"
}
#line 5306 "string.m"
  }
#line 1186 "string.m"
}

#line 1185 "string.m"
MR_String MR_CALL 
mercury__string__c_pointer_to_string_1_f_0(
#line 1185 "string.m"
  MR_Word mercury__string__P_3)
#line 1185 "string.m"
{
#line 5306 "string.m"
  {
#line 5306 "string.m"
    MR_bool mercury__string__succeeded;
#line 5306 "string.m"
    MR_String mercury__string__S_4;
#line 5306 "string.m"
    MR_Integer mercury__string__Int_7 = (MR_Integer) mercury__string__P_3;
#line 5306 "string.m"
    MR_String mercury__string__V_9_9;
#line 5306 "string.m"
    MR_String mercury__string__V_10_10;

#line 5071 "string.m"
    {
#line 5071 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__Int_7, (MR_Integer) 16, &mercury__string__V_10_10);
    }
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_10_10 ;
	S2 =  (MR_String) ")" ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15790 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_9_9  = S3;
#line 3149 "string.m"
}
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__V_9_9 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15817 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S_4  = S3;
#line 3149 "string.m"
}
#line 5306 "string.m"
    return mercury__string__S_4;
#line 5306 "string.m"
  }
#line 1185 "string.m"
}

#line 1180 "string.m"
MR_String MR_CALL 
mercury__string__from_float_1_f_0(
#line 1180 "string.m"
  MR_Float mercury__string__Float_3)
#line 1180 "string.m"
{
#line 5178 "string.m"
  {
#line 5178 "string.m"
    MR_bool mercury__string__succeeded;
#line 5178 "string.m"
    MR_String mercury__string__HeadVar__2_2;

#line 5182 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_float_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Float_3 ;
		{
#line 5182 "string.m"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 15862 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__2_2  = Str;
#line 5182 "string.m"
}
#line 5178 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5178 "string.m"
  }
#line 1180 "string.m"
}

#line 1176 "string.m"
void MR_CALL 
mercury__string__float_to_string_2_p_0(
#line 1176 "string.m"
  MR_Float mercury__string__Flt_1,
#line 1176 "string.m"
  MR_String * mercury__string__Str_2)
#line 1176 "string.m"
{
#line 5178 "string.m"
  {
#line 5178 "string.m"
    MR_bool mercury__string__succeeded;

#line 5182 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_2_p_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Flt_1 ;
		{
#line 5182 "string.m"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 15907 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_2  = Str;
#line 5182 "string.m"
}
#line 5178 "string.m"
  }
#line 1176 "string.m"
}

#line 1175 "string.m"
MR_String MR_CALL 
mercury__string__float_to_string_1_f_0(
#line 1175 "string.m"
  MR_Float mercury__string__Float_3)
#line 1175 "string.m"
{
#line 5178 "string.m"
  {
#line 5178 "string.m"
    MR_bool mercury__string__succeeded;
#line 5178 "string.m"
    MR_String mercury__string__S2_4;

#line 5182 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Float_3 ;
		{
#line 5182 "string.m"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 15950 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_4  = Str;
#line 5182 "string.m"
}
#line 5178 "string.m"
    return mercury__string__S2_4;
#line 5178 "string.m"
  }
#line 1175 "string.m"
}

#line 1165 "string.m"
MR_String MR_CALL 
mercury__string__int_to_base_string_group_4_f_0(
#line 1165 "string.m"
  MR_Integer mercury__string__N_6,
#line 1165 "string.m"
  MR_Integer mercury__string__Base_7,
#line 1165 "string.m"
  MR_Integer mercury__string__GroupLength_8,
#line 1165 "string.m"
  MR_String mercury__string__Sep_9)
#line 1165 "string.m"
{
#line 5117 "string.m"
  {
#line 5117 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 2 <= mercury__string__Base_7);
#line 5117 "string.m"
    MR_String mercury__string__Str_10;
#line 5118 "string.m"
    MR_Integer mercury__string__V_12_12;

#line 5118 "string.m"
    if (mercury__string__succeeded)
#line 5118 "string.m"
      {
#line 5118 "string.m"
        mercury__string__V_12_12 = (MR_Integer) 36;
#line 5118 "string.m"
        mercury__string__succeeded = (mercury__string__Base_7 <= mercury__string__V_12_12);
#line 5118 "string.m"
      }
#line 5120 "string.m"
    if (mercury__string__succeeded)
#line 5119 "string.m"
      {
#line 5119 "string.m"
      }
#line 5120 "string.m"
    else
#line 5121 "string.m"
      {
#line 5121 "string.m"
        {
#line 5121 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.int_to_base_string_group: invalid base");
        }
#line 5121 "string.m"
      }
#line 5123 "string.m"
    {
#line 5123 "string.m"
      mercury__string__int_to_base_string_group_1_5_p_0(mercury__string__N_6, mercury__string__Base_7, mercury__string__GroupLength_8, mercury__string__Sep_9, &mercury__string__Str_10);
    }
#line 5117 "string.m"
    return mercury__string__Str_10;
#line 5117 "string.m"
  }
#line 1165 "string.m"
}

#line 1152 "string.m"
MR_String MR_CALL 
mercury__string__int_to_string_thousands_1_f_0(
#line 1152 "string.m"
  MR_Integer mercury__string__N_3)
#line 1152 "string.m"
{
#line 5114 "string.m"
  {
#line 5114 "string.m"
    MR_bool mercury__string__succeeded;
#line 5114 "string.m"
    MR_String mercury__string__HeadVar__2_2;

#line 5115 "string.m"
    {
#line 5115 "string.m"
      return mercury__string__HeadVar__2_2 = mercury__string__int_to_base_string_group_4_f_0(mercury__string__N_3, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
#line 5114 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5114 "string.m"
  }
#line 1152 "string.m"
}

#line 1148 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_3_p_0(
#line 1148 "string.m"
  MR_Integer mercury__string__N_4,
#line 1148 "string.m"
  MR_Integer mercury__string__Base_5,
#line 1148 "string.m"
  MR_String * mercury__string__Str_6)
#line 1148 "string.m"
{
#line 5073 "string.m"
  {
#line 5073 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 2 <= mercury__string__Base_5);
#line 5074 "string.m"
    MR_Integer mercury__string__V_8_8;

#line 5074 "string.m"
    if (mercury__string__succeeded)
#line 5074 "string.m"
      {
#line 5074 "string.m"
        mercury__string__V_8_8 = (MR_Integer) 36;
#line 5074 "string.m"
        mercury__string__succeeded = (mercury__string__Base_5 <= mercury__string__V_8_8);
#line 5074 "string.m"
      }
#line 5076 "string.m"
    if (mercury__string__succeeded)
#line 5075 "string.m"
      {
#line 5075 "string.m"
      }
#line 5076 "string.m"
    else
#line 5077 "string.m"
      {
#line 5077 "string.m"
        {
#line 5077 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.int_to_base_string: invalid base");
#line 5077 "string.m"
          return;
        }
#line 5077 "string.m"
      }
#line 5079 "string.m"
    {
#line 5079 "string.m"
      mercury__string__int_to_base_string_1_3_p_0(mercury__string__N_4, mercury__string__Base_5, mercury__string__Str_6);
#line 5079 "string.m"
      return;
    }
#line 5073 "string.m"
  }
#line 1148 "string.m"
}

#line 1147 "string.m"
MR_String MR_CALL 
mercury__string__int_to_base_string_2_f_0(
#line 1147 "string.m"
  MR_Integer mercury__string__N1_4,
#line 1147 "string.m"
  MR_Integer mercury__string__N2_5)
#line 1147 "string.m"
{
#line 5071 "string.m"
  {
#line 5071 "string.m"
    MR_bool mercury__string__succeeded;
#line 5071 "string.m"
    MR_String mercury__string__S2_6;

#line 5071 "string.m"
    {
#line 5071 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N1_4, mercury__string__N2_5, &mercury__string__S2_6);
    }
#line 5071 "string.m"
    return mercury__string__S2_6;
#line 5071 "string.m"
  }
#line 1147 "string.m"
}

#line 1138 "string.m"
MR_String MR_CALL 
mercury__string__from_int_1_f_0(
#line 1138 "string.m"
  MR_Integer mercury__string__N_3)
#line 1138 "string.m"
{
#line 5062 "string.m"
  {
#line 5062 "string.m"
    MR_bool mercury__string__succeeded;
#line 5062 "string.m"
    MR_String mercury__string__HeadVar__2_2;

#line 5063 "string.m"
    {
#line 5063 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, &mercury__string__HeadVar__2_2);
    }
#line 5062 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5062 "string.m"
  }
#line 1138 "string.m"
}

#line 1134 "string.m"
void MR_CALL 
mercury__string__int_to_string_2_p_0(
#line 1134 "string.m"
  MR_Integer mercury__string__N_3,
#line 1134 "string.m"
  MR_String * mercury__string__Str_4)
#line 1134 "string.m"
{
#line 5062 "string.m"
  {
#line 5062 "string.m"
    MR_bool mercury__string__succeeded;

#line 5063 "string.m"
    {
#line 5063 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, mercury__string__Str_4);
#line 5063 "string.m"
      return;
    }
#line 5062 "string.m"
  }
#line 1134 "string.m"
}

#line 1133 "string.m"
MR_String MR_CALL 
mercury__string__int_to_string_1_f_0(
#line 1133 "string.m"
  MR_Integer mercury__string__N_3)
#line 1133 "string.m"
{
#line 5062 "string.m"
  {
#line 5062 "string.m"
    MR_bool mercury__string__succeeded;
#line 5062 "string.m"
    MR_String mercury__string__S1_4;

#line 5063 "string.m"
    {
#line 5063 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, &mercury__string__S1_4);
    }
#line 5062 "string.m"
    return mercury__string__S1_4;
#line 5062 "string.m"
  }
#line 1133 "string.m"
}

#line 1129 "string.m"
MR_String MR_CALL 
mercury__string__from_char_1_f_0(
#line 1129 "string.m"
  MR_Char mercury__string__Char_3)
#line 1129 "string.m"
{
#line 5052 "string.m"
  {
#line 5052 "string.m"
    MR_bool mercury__string__succeeded;
#line 5052 "string.m"
    MR_String mercury__string__HeadVar__2_2;
#line 5052 "string.m"
    MR_Word mercury__string__V_8_8;
#line 5052 "string.m"
    MR_Word mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1442 "string.m"
    MR_String mercury__string__Str0_18;

#line 5053 "string.m"
    {
#line 5053 "string.m"
      mercury__string__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5053 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_8_8, 0) = ((MR_Box) (MR_Word) (mercury__string__Char_3));
#line 5053 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_8_8, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 5053 "string.m"
    }
#line 1440 "string.m"
    {
#line 1440 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_8_8, &mercury__string__Str0_18);
    }
#line 1442 "string.m"
    if (mercury__string__succeeded)
#line 1441 "string.m"
      mercury__string__HeadVar__2_2 = mercury__string__Str0_18;
#line 1442 "string.m"
    else
#line 1443 "string.m"
      {
#line 1443 "string.m"
        {
#line 1443 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1443 "string.m"
      }
#line 5052 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5052 "string.m"
  }
#line 1129 "string.m"
}

#line 1125 "string.m"
MR_bool MR_CALL 
mercury__string__char_to_string_2_p_1(
#line 1125 "string.m"
  MR_Char * mercury__string__Char_3,
#line 1125 "string.m"
  MR_String mercury__string__String_4)
#line 1125 "string.m"
{
#line 5052 "string.m"
  {
#line 5052 "string.m"
    MR_bool mercury__string__succeeded;
#line 5052 "string.m"
    MR_Word mercury__string__TypeInfo_8_8;
#line 5052 "string.m"
    MR_Word mercury__string__V_5_5;
#line 5052 "string.m"
    MR_Word mercury__string__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5052 "string.m"
    MR_Word mercury__string__V_7_7;

#line 1364 "string.m"
{
#define MR_PROC_LABEL mercury__string__char_to_string_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__String_4 ;
		{
#line 1364 "string.m"
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
#line 16319 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_5_5  = CharList;
#line 1364 "string.m"
}
#line 5053 "string.m"
    mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 5053 "string.m"
    if (mercury__string__succeeded)
#line 5053 "string.m"
      {
#line 5053 "string.m"
        *mercury__string__Char_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_5_5, (MR_Integer) 0)));
#line 5053 "string.m"
        mercury__string__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_5_5, (MR_Integer) 1)));
#line 16336 "string.c"
        mercury__string__TypeInfo_8_8 = (MR_Word) &mercury__string_scalar_common_1[2];
#line 5053 "string.m"
        {
#line 5053 "string.m"
          return mercury__string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__TypeInfo_8_8, ((MR_Box) (mercury__string__V_6_6)), ((MR_Box) (mercury__string__V_7_7)));
        }
#line 5053 "string.m"
      }
#line 5052 "string.m"
    return mercury__string__succeeded;
#line 5052 "string.m"
  }
#line 1125 "string.m"
}

#line 1124 "string.m"
void MR_CALL 
mercury__string__char_to_string_2_p_0(
#line 1124 "string.m"
  MR_Char mercury__string__Char_3,
#line 1124 "string.m"
  MR_String * mercury__string__String_4)
#line 1124 "string.m"
{
#line 5052 "string.m"
  {
#line 5052 "string.m"
    MR_bool mercury__string__succeeded;
#line 5052 "string.m"
    MR_Word mercury__string__V_5_5;
#line 5052 "string.m"
    MR_Word mercury__string__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1442 "string.m"
    MR_String mercury__string__Str0_15;

#line 5053 "string.m"
    {
#line 5053 "string.m"
      mercury__string__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5053 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_5_5, 0) = ((MR_Box) (MR_Word) (mercury__string__Char_3));
#line 5053 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_5_5, 1) = ((MR_Box) (mercury__string__V_6_6));
#line 5053 "string.m"
    }
#line 1440 "string.m"
    {
#line 1440 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_5_5, &mercury__string__Str0_15);
    }
#line 1442 "string.m"
    if (mercury__string__succeeded)
#line 1441 "string.m"
      *mercury__string__String_4 = mercury__string__Str0_15;
#line 1442 "string.m"
    else
#line 1443 "string.m"
      {
#line 1443 "string.m"
        {
#line 1443 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1443 "string.m"
          return;
        }
#line 1443 "string.m"
      }
#line 5052 "string.m"
  }
#line 1124 "string.m"
}

#line 1122 "string.m"
MR_String MR_CALL 
mercury__string__char_to_string_1_f_0(
#line 1122 "string.m"
  MR_Char mercury__string__C_3)
#line 1122 "string.m"
{
#line 5052 "string.m"
  {
#line 5052 "string.m"
    MR_bool mercury__string__succeeded;
#line 5052 "string.m"
    MR_String mercury__string__S1_4;
#line 5052 "string.m"
    MR_Word mercury__string__V_7_7;
#line 5052 "string.m"
    MR_Word mercury__string__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1442 "string.m"
    MR_String mercury__string__Str0_17;

#line 5053 "string.m"
    {
#line 5053 "string.m"
      mercury__string__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5053 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 0) = ((MR_Box) (MR_Word) (mercury__string__C_3));
#line 5053 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 1) = ((MR_Box) (mercury__string__V_8_8));
#line 5053 "string.m"
    }
#line 1440 "string.m"
    {
#line 1440 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_7_7, &mercury__string__Str0_17);
    }
#line 1442 "string.m"
    if (mercury__string__succeeded)
#line 1441 "string.m"
      mercury__string__S1_4 = mercury__string__Str0_17;
#line 1442 "string.m"
    else
#line 1443 "string.m"
      {
#line 1443 "string.m"
        {
#line 1443 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1443 "string.m"
      }
#line 5052 "string.m"
    return mercury__string__S1_4;
#line 5052 "string.m"
  }
#line 1122 "string.m"
}

#line 1111 "string.m"
MR_Float MR_CALL 
mercury__string__det_to_float_1_f_0(
#line 1111 "string.m"
  MR_String mercury__string__FloatString_3)
#line 1111 "string.m"
{
#line 5043 "string.m"
  {
#line 5043 "string.m"
    MR_bool mercury__string__succeeded;
#line 5043 "string.m"
    MR_Float mercury__string__Float_4;
#line 5043 "string.m"
    MR_Float mercury__string__FloatPrime_5;

#line 4935 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_to_float_1_f_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__FloatString_3 ;
		{
#line 4935 "string.m"
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
#line 16504 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__FloatPrime_5  = FloatVal;
#line 4935 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 5043 "string.m"
    if (mercury__string__succeeded)
#line 5042 "string.m"
      mercury__string__Float_4 = mercury__string__FloatPrime_5;
#line 5043 "string.m"
    else
#line 5044 "string.m"
      {
#line 5044 "string.m"
        {
#line 5044 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_to_float/1: conversion failed.");
        }
#line 5044 "string.m"
      }
#line 5043 "string.m"
    return mercury__string__Float_4;
#line 5043 "string.m"
  }
#line 1111 "string.m"
}

#line 1105 "string.m"
MR_bool MR_CALL 
mercury__string__to_float_2_p_0(
#line 1105 "string.m"
  MR_String mercury__string__FloatString_1,
#line 1105 "string.m"
  MR_Float * mercury__string__FloatVal_2)
#line 1105 "string.m"
{
#line 4931 "string.m"
  {
#line 4931 "string.m"
    MR_bool mercury__string__succeeded;

#line 4935 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_float_2_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__FloatString_1 ;
		{
#line 4935 "string.m"
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
#line 16572 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__FloatVal_2  = FloatVal;
#line 4935 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4931 "string.m"
    return mercury__string__succeeded;
#line 4931 "string.m"
  }
#line 1105 "string.m"
}

#line 1099 "string.m"
MR_Integer MR_CALL 
mercury__string__det_base_string_to_int_2_f_0(
#line 1099 "string.m"
  MR_Integer mercury__string__Base_4,
#line 1099 "string.m"
  MR_String mercury__string__S_5)
#line 1099 "string.m"
{
#line 4905 "string.m"
  {
#line 4905 "string.m"
    MR_bool mercury__string__succeeded;
#line 4905 "string.m"
    MR_Integer mercury__string__N_6;
#line 4905 "string.m"
    MR_Integer mercury__string__N0_7;

#line 4903 "string.m"
    {
#line 4903 "string.m"
      mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__string__Base_4, mercury__string__S_5, &mercury__string__N0_7);
    }
#line 4905 "string.m"
    if (mercury__string__succeeded)
#line 4904 "string.m"
      mercury__string__N_6 = mercury__string__N0_7;
#line 4905 "string.m"
    else
#line 4906 "string.m"
      {
#line 4906 "string.m"
        {
#line 4906 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_base_string_to_int: conversion failed");
        }
#line 4906 "string.m"
      }
#line 4905 "string.m"
    return mercury__string__N_6;
#line 4905 "string.m"
  }
#line 1099 "string.m"
}

#line 1092 "string.m"
MR_bool MR_CALL 
mercury__string__base_string_to_int_3_p_0(
#line 1092 "string.m"
  MR_Integer mercury__string__Base_4,
#line 1092 "string.m"
  MR_String mercury__string__String_5,
#line 1092 "string.m"
  MR_Integer * mercury__string__Int_6)
#line 1092 "string.m"
{
#line 4889 "string.m"
  {
#line 4889 "string.m"
    MR_bool mercury__string__succeeded;
#line 4889 "string.m"
    MR_Char mercury__string__Char_7;
#line 4889 "string.m"
    MR_Integer mercury__string__End_8;
#line 4889 "string.m"
    MR_Integer mercury__string__Len_36;
#line 1870 "string.m"
    MR_Char mercury__string__CharPrime_48;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 16671 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_36  = Length;
#line 2400 "string.m"
}
#line 2134 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__string__Len_36 ;
		{
#line 2134 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 16700 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2134 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4889 "string.m"
    if (mercury__string__succeeded)
#line 4889 "string.m"
      {
#line 1880 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_5 ;
	Index =  (MR_Integer) 0 ;
		{
#line 1880 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 16734 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_48  = Ch;
#line 1880 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1870 "string.m"
        if (mercury__string__succeeded)
#line 1869 "string.m"
          mercury__string__Char_7 = mercury__string__CharPrime_48;
#line 1870 "string.m"
        else
#line 1871 "string.m"
          {
#line 1871 "string.m"
            {
#line 1871 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
            }
#line 1871 "string.m"
          }
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 16772 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_8  = Length;
#line 2400 "string.m"
}
#line 4892 "string.m"
        mercury__string__succeeded = (mercury__string__Char_7 == (MR_Char) 45);
#line 4895 "string.m"
        if (mercury__string__succeeded)
#line 4893 "string.m"
          {
#line 4893 "string.m"
            MR_Integer mercury__string__V_12_12;
#line 4893 "string.m"
            MR_Integer mercury__string__V_13_13;
#line 4893 "string.m"
            MR_Integer mercury__string__Start_63;
#line 4893 "string.m"
            MR_Integer mercury__string__End_64;
#line 4893 "string.m"
            MR_Integer mercury__string__V_66_66;
#line 4560 "string.m"
            MR_Integer mercury__string__V_65_65;

#line 4893 "string.m"
            mercury__string__succeeded = (mercury__string__End_8 > (MR_Integer) 1);
#line 4893 "string.m"
            if (mercury__string__succeeded)
#line 4893 "string.m"
              {
#line 4894 "string.m"
                mercury__string__V_12_12 = (MR_Integer) 1;
#line 4894 "string.m"
                mercury__string__V_13_13 = (MR_Integer) 0;
#line 4560 "string.m"
                mercury__string__V_65_65 = (MR_Integer) 0;
#line 79 "int.opt"
                mercury__string__Start_63 = mercury__string__V_12_12;
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 16825 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_66_66  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
                mercury__string__succeeded = (mercury__string__End_8 < mercury__string__V_66_66);
#line 88 "int.opt"
                if (mercury__string__succeeded)
#line 87 "int.opt"
                  mercury__string__End_64 = mercury__string__End_8;
#line 88 "int.opt"
                else
#line 89 "int.opt"
                  mercury__string__End_64 = mercury__string__V_66_66;
#line 4562 "string.m"
                {
#line 4562 "string.m"
                  return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_50_93_95_48_6_p_0(mercury__string__Base_4, mercury__string__String_5, mercury__string__Start_63, mercury__string__End_64, mercury__string__V_13_13, mercury__string__Int_6);
                }
#line 4893 "string.m"
              }
#line 4893 "string.m"
          }
#line 4895 "string.m"
        else
#line 4898 "string.m"
          {
#line 4895 "string.m"
            mercury__string__succeeded = (mercury__string__Char_7 == (MR_Char) 43);
#line 4898 "string.m"
            if (mercury__string__succeeded)
#line 4896 "string.m"
              {
#line 4896 "string.m"
                MR_Integer mercury__string__V_16_16;
#line 4896 "string.m"
                MR_Integer mercury__string__V_17_17;

#line 4896 "string.m"
                mercury__string__succeeded = (mercury__string__End_8 > (MR_Integer) 1);
#line 4896 "string.m"
                if (mercury__string__succeeded)
#line 4896 "string.m"
                  {
#line 4897 "string.m"
                    mercury__string__V_16_16 = (MR_Integer) 1;
#line 4897 "string.m"
                    mercury__string__V_17_17 = (MR_Integer) 0;
#line 4897 "string.m"
                    {
#line 4897 "string.m"
                      return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(mercury__string__Base_4, mercury__string__String_5, mercury__string__V_16_16, mercury__string__End_8, mercury__string__V_17_17, mercury__string__Int_6);
                    }
#line 4896 "string.m"
                  }
#line 4896 "string.m"
              }
#line 4898 "string.m"
            else
#line 4899 "string.m"
              {
#line 4899 "string.m"
                {
#line 4899 "string.m"
                  return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(mercury__string__Base_4, mercury__string__String_5, (MR_Integer) 0, mercury__string__End_8, (MR_Integer) 0, mercury__string__Int_6);
                }
#line 4899 "string.m"
              }
#line 4898 "string.m"
          }
#line 4889 "string.m"
      }
#line 4889 "string.m"
    return mercury__string__succeeded;
#line 4889 "string.m"
  }
#line 1092 "string.m"
}

#line 1083 "string.m"
MR_Integer MR_CALL 
mercury__string__det_to_int_1_f_0(
#line 1083 "string.m"
  MR_String mercury__string__S_3)
#line 1083 "string.m"
{
#line 4887 "string.m"
  {
#line 4887 "string.m"
    MR_bool mercury__string__succeeded;
#line 4887 "string.m"
    MR_Integer mercury__string__HeadVar__2_2;
#line 4905 "string.m"
    MR_Integer mercury__string__N0_8;

#line 4903 "string.m"
    {
#line 4903 "string.m"
      mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, mercury__string__S_3, &mercury__string__N0_8);
    }
#line 4905 "string.m"
    if (mercury__string__succeeded)
#line 4904 "string.m"
      mercury__string__HeadVar__2_2 = mercury__string__N0_8;
#line 4905 "string.m"
    else
#line 4906 "string.m"
      {
#line 4906 "string.m"
        {
#line 4906 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_base_string_to_int: conversion failed");
        }
#line 4906 "string.m"
      }
#line 4887 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4887 "string.m"
  }
#line 1083 "string.m"
}

#line 1077 "string.m"
MR_bool MR_CALL 
mercury__string__to_int_2_p_0(
#line 1077 "string.m"
  MR_String mercury__string__String_3,
#line 1077 "string.m"
  MR_Integer * mercury__string__Int_4)
#line 1077 "string.m"
{
#line 4884 "string.m"
  {
#line 4884 "string.m"
    MR_bool mercury__string__succeeded;

#line 4885 "string.m"
    {
#line 4885 "string.m"
      return mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, mercury__string__String_3, mercury__string__Int_4);
    }
#line 4884 "string.m"
    return mercury__string__succeeded;
#line 4884 "string.m"
  }
#line 1077 "string.m"
}

#line 1065 "string.m"
MR_Word MR_CALL 
mercury__string__string_to_doc_1_f_0(
#line 1065 "string.m"
  MR_String mercury__string__S_3)
#line 1065 "string.m"
{
#line 4877 "string.m"
  {
#line 4877 "string.m"
    MR_bool mercury__string__succeeded;
#line 4877 "string.m"
    MR_Word mercury__string__HeadVar__2_2;
#line 4877 "string.m"
    MR_Word mercury__string__V_4_4;
#line 4877 "string.m"
    MR_Word mercury__string__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_5[0]);
#line 4877 "string.m"
    MR_Word mercury__string__V_7_7;
#line 4877 "string.m"
    MR_Word mercury__string__V_8_8;
#line 4877 "string.m"
    MR_Word mercury__string__V_9_9;
#line 4877 "string.m"
    MR_Word mercury__string__V_12_12;

#line 4877 "string.m"
    {
#line 4877 "string.m"
      mercury__string__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 4877 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_8_8, 0) = ((MR_Box) (mercury__string__S_3));
#line 4877 "string.m"
    }
#line 4877 "string.m"
    mercury__string__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4877 "string.m"
    mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_1[3]);
#line 4877 "string.m"
    {
#line 4877 "string.m"
      mercury__string__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4877 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 4877 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 4877 "string.m"
    }
#line 4877 "string.m"
    {
#line 4877 "string.m"
      mercury__string__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4877 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_4_4, 0) = ((MR_Box) (mercury__string__V_5_5));
#line 4877 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_4_4, 1) = ((MR_Box) (mercury__string__V_7_7));
#line 4877 "string.m"
    }
#line 4877 "string.m"
    {
#line 4877 "string.m"
      mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 4877 "string.m"
      MR_hl_field(MR_mktag(2), mercury__string__HeadVar__2_2, 0) = ((MR_Box) (mercury__string__V_4_4));
#line 4877 "string.m"
    }
#line 4877 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4877 "string.m"
  }
#line 1065 "string.m"
}

#line 1055 "string.m"
MR_String MR_CALL 
mercury__string__format_table_max_2_f_0(
#line 1055 "string.m"
  MR_Word mercury__string__ColumnsLimits_4,
#line 1055 "string.m"
  MR_String mercury__string__Separator_5)
#line 1055 "string.m"
{
#line 4720 "string.m"
  {
#line 4720 "string.m"
    MR_bool mercury__string__succeeded;
#line 4720 "string.m"
    MR_String mercury__string__Table_6;
#line 4720 "string.m"
    MR_Word mercury__string__TypeCtorInfo_23_23;
#line 4720 "string.m"
    MR_Word mercury__string__MaxWidthsSenses_7;
#line 4720 "string.m"
    MR_Word mercury__string__Columns_8;
#line 4720 "string.m"
    MR_Integer mercury__string__SepLen_9;
#line 4720 "string.m"
    MR_Word mercury__string__RevRows_10;
#line 4720 "string.m"
    MR_Word mercury__string__Rows_11;
#line 4720 "string.m"
    MR_Word mercury__string__V_14_14;

#line 4721 "string.m"
    {
#line 4721 "string.m"
      mercury__string__MaxWidthsSenses_7 = mercury__string__map__ho14_2_f_in__list_0(mercury__string__ColumnsLimits_4);
    }
#line 4722 "string.m"
    {
#line 4722 "string.m"
      mercury__string__Columns_8 = mercury__string__map__ho13_2_f_in__list_0(mercury__string__ColumnsLimits_4);
    }
#line 2460 "string.m"
    {
#line 2460 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Separator_5, &mercury__string__SepLen_9);
    }
#line 4724 "string.m"
    mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4724 "string.m"
    {
#line 4724 "string.m"
      mercury__string__generate_rows_6_p_0(mercury__string__MaxWidthsSenses_7, mercury__string__Separator_5, mercury__string__SepLen_9, mercury__string__Columns_8, mercury__string__V_14_14, &mercury__string__RevRows_10);
    }
#line 17101 "string.c"
    mercury__string__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4725 "string.m"
    {
#line 4725 "string.m"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_23_23, mercury__string__RevRows_10, &mercury__string__Rows_11);
    }
#line 4726 "string.m"
    {
#line 4726 "string.m"
      return mercury__string__Table_6 = mercury__string__join_list_2_f_0((MR_String) "\n", mercury__string__Rows_11);
    }
#line 4720 "string.m"
    return mercury__string__Table_6;
#line 4720 "string.m"
  }
#line 1055 "string.m"
}

#line 1050 "string.m"
MR_String MR_CALL 
mercury__string__format_table_2_f_0(
#line 1050 "string.m"
  MR_Word mercury__string__Columns_4,
#line 1050 "string.m"
  MR_String mercury__string__Separator_5)
#line 1050 "string.m"
{
#line 4703 "string.m"
  {
#line 4703 "string.m"
    MR_bool mercury__string__succeeded;
#line 4703 "string.m"
    MR_String mercury__string__Table_6;
#line 4703 "string.m"
    MR_Word mercury__string__MaxWidths_7;
#line 4703 "string.m"
    MR_Word mercury__string__PaddedColumns_8;
#line 4703 "string.m"
    MR_Word mercury__string__Rows_11;

#line 4704 "string.m"
    {
#line 4704 "string.m"
      mercury__string__MaxWidths_7 = mercury__string__map__ho16_2_f_in__list_0(mercury__string__Columns_4);
    }
#line 4709 "string.m"
    {
#line 4709 "string.m"
      mercury__string__PaddedColumns_8 = mercury__string__map_corresponding__ho15_3_f_in__list_0(mercury__string__MaxWidths_7, mercury__string__Columns_4);
    }
#line 4714 "string.m"
    if ((mercury__string__PaddedColumns_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4716 "string.m"
      mercury__string__Rows_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4714 "string.m"
    else
#line 4711 "string.m"
      {
#line 4711 "string.m"
        MR_Word mercury__string__PaddedHead_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__PaddedColumns_8, (MR_Integer) 0)));
#line 4711 "string.m"
        MR_Word mercury__string__PaddedTail_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__PaddedColumns_8, (MR_Integer) 1)));

#line 395 "list.opt"
        {
#line 395 "list.opt"
          mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_52_93_95_48_4_p_in__list_0(mercury__string__Separator_5, mercury__string__PaddedTail_10, mercury__string__PaddedHead_9, &mercury__string__Rows_11);
        }
#line 4711 "string.m"
      }
#line 4718 "string.m"
    {
#line 4718 "string.m"
      return mercury__string__Table_6 = mercury__string__join_list_2_f_0((MR_String) "\n", mercury__string__Rows_11);
    }
#line 4703 "string.m"
    return mercury__string__Table_6;
#line 4703 "string.m"
  }
#line 1050 "string.m"
}

#line 1020 "string.m"
void MR_CALL 
mercury__string__foldr_substring_6_p_4(
#line 1020 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1020 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1020 "string.m"
  MR_String mercury__string__String_8,
#line 1020 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1020 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1020 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1020 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 1020 "string.m"
  MR_Cont mercury__string__cont,
#line 1020 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1020 "string.m"
{
#line 4683 "string.m"
  {
#line 4683 "string.m"
    MR_bool mercury__string__succeeded;
#line 4683 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4683 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4684 "string.m"
    {
#line 4684 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4685 "string.m"
    {
#line 4685 "string.m"
      mercury__string__foldr_between_6_p_4(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4685 "string.m"
      return;
    }
#line 4683 "string.m"
  }
#line 1020 "string.m"
}

#line 1018 "string.m"
void MR_CALL 
mercury__string__foldr_substring_6_p_3(
#line 1018 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1018 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1018 "string.m"
  MR_String mercury__string__String_8,
#line 1018 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1018 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1018 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1018 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 1018 "string.m"
  MR_Cont mercury__string__cont,
#line 1018 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1018 "string.m"
{
#line 4683 "string.m"
  {
#line 4683 "string.m"
    MR_bool mercury__string__succeeded;
#line 4683 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4683 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4684 "string.m"
    {
#line 4684 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4685 "string.m"
    {
#line 4685 "string.m"
      mercury__string__foldr_between_6_p_3(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4685 "string.m"
      return;
    }
#line 4683 "string.m"
  }
#line 1018 "string.m"
}

#line 1016 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_substring_6_p_2(
#line 1016 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1016 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1016 "string.m"
  MR_String mercury__string__String_8,
#line 1016 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1016 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1016 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1016 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 1016 "string.m"
{
#line 4683 "string.m"
  {
#line 4683 "string.m"
    MR_bool mercury__string__succeeded;
#line 4683 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4683 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4684 "string.m"
    {
#line 4684 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4685 "string.m"
    {
#line 4685 "string.m"
      return mercury__string__succeeded = mercury__string__foldr_between_6_p_2(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4683 "string.m"
    return mercury__string__succeeded;
#line 4683 "string.m"
  }
#line 1016 "string.m"
}

#line 1014 "string.m"
void MR_CALL 
mercury__string__foldr_substring_6_p_1(
#line 1014 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1014 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1014 "string.m"
  MR_String mercury__string__String_8,
#line 1014 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1014 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1014 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1014 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 1014 "string.m"
{
#line 4683 "string.m"
  {
#line 4683 "string.m"
    MR_bool mercury__string__succeeded;
#line 4683 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4683 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4684 "string.m"
    {
#line 4684 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4685 "string.m"
    {
#line 4685 "string.m"
      mercury__string__foldr_between_6_p_1(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4685 "string.m"
      return;
    }
#line 4683 "string.m"
  }
#line 1014 "string.m"
}

#line 1012 "string.m"
void MR_CALL 
mercury__string__foldr_substring_6_p_0(
#line 1012 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1012 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1012 "string.m"
  MR_String mercury__string__String_8,
#line 1012 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1012 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1012 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1012 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 1012 "string.m"
{
#line 4683 "string.m"
  {
#line 4683 "string.m"
    MR_bool mercury__string__succeeded;
#line 4683 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4683 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4684 "string.m"
    {
#line 4684 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4685 "string.m"
    {
#line 4685 "string.m"
      mercury__string__foldr_between_6_p_0(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4685 "string.m"
      return;
    }
#line 4683 "string.m"
  }
#line 1012 "string.m"
}

#line 1010 "string.m"
MR_Box MR_CALL 
mercury__string__foldr_substring_5_f_0(
#line 1010 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_15,
#line 1010 "string.m"
  MR_Word mercury__string__F_7,
#line 1010 "string.m"
  MR_String mercury__string__String_8,
#line 1010 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1010 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1010 "string.m"
  MR_Box mercury__string__Acc0_11)
#line 1010 "string.m"
{
#line 4679 "string.m"
  {
#line 4679 "string.m"
    MR_bool mercury__string__succeeded;
#line 4679 "string.m"
    MR_Box mercury__string__Acc_12;
#line 4679 "string.m"
    MR_Integer mercury__string__ClampStart_13;
#line 4679 "string.m"
    MR_Integer mercury__string__ClampEnd_14;

#line 4680 "string.m"
    {
#line 4680 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    }
#line 4681 "string.m"
    {
#line 4681 "string.m"
      return mercury__string__Acc_12 = mercury__string__foldr_between_5_f_0(mercury__string__TypeInfo_for_T_15, mercury__string__F_7, mercury__string__String_8, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, mercury__string__Acc0_11);
    }
#line 4679 "string.m"
    return mercury__string__Acc_12;
#line 4679 "string.m"
  }
#line 1010 "string.m"
}

#line 1002 "string.m"
void MR_CALL 
mercury__string__foldr_between_6_p_4(
#line 1002 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 1002 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1002 "string.m"
  MR_String mercury__string__String_8,
#line 1002 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 1002 "string.m"
  MR_Integer mercury__string__End0_10,
#line 1002 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1002 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 1002 "string.m"
  MR_Cont mercury__string__cont,
#line 1002 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1002 "string.m"
{
#line 4650 "string.m"
  {
#line 4650 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4650 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4650 "string.m"
    MR_Integer mercury__string__End_13;
#line 4650 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 17517 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4653 "string.m"
    {
#line 4653 "string.m"
      mercury__string__foldr_between_2_6_p_4(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4653 "string.m"
      return;
    }
#line 4650 "string.m"
  }
#line 1002 "string.m"
}

#line 1000 "string.m"
void MR_CALL 
mercury__string__foldr_between_6_p_3(
#line 1000 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 1000 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1000 "string.m"
  MR_String mercury__string__String_8,
#line 1000 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 1000 "string.m"
  MR_Integer mercury__string__End0_10,
#line 1000 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1000 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 1000 "string.m"
  MR_Cont mercury__string__cont,
#line 1000 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1000 "string.m"
{
#line 4650 "string.m"
  {
#line 4650 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4650 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4650 "string.m"
    MR_Integer mercury__string__End_13;
#line 4650 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 17601 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4653 "string.m"
    {
#line 4653 "string.m"
      mercury__string__foldr_between_2_6_p_3(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4653 "string.m"
      return;
    }
#line 4650 "string.m"
  }
#line 1000 "string.m"
}

#line 998 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_between_6_p_2(
#line 998 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 998 "string.m"
  MR_Word mercury__string__Closure_7,
#line 998 "string.m"
  MR_String mercury__string__String_8,
#line 998 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 998 "string.m"
  MR_Integer mercury__string__End0_10,
#line 998 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 998 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 998 "string.m"
{
#line 4650 "string.m"
  {
#line 4650 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4650 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4650 "string.m"
    MR_Integer mercury__string__End_13;
#line 4650 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 17681 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4653 "string.m"
    {
#line 4653 "string.m"
      return mercury__string__succeeded = mercury__string__foldr_between_2_6_p_2(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4650 "string.m"
    return mercury__string__succeeded;
#line 4650 "string.m"
  }
#line 998 "string.m"
}

#line 996 "string.m"
void MR_CALL 
mercury__string__foldr_between_6_p_1(
#line 996 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 996 "string.m"
  MR_Word mercury__string__Closure_7,
#line 996 "string.m"
  MR_String mercury__string__String_8,
#line 996 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 996 "string.m"
  MR_Integer mercury__string__End0_10,
#line 996 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 996 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 996 "string.m"
{
#line 4650 "string.m"
  {
#line 4650 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4650 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4650 "string.m"
    MR_Integer mercury__string__End_13;
#line 4650 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 17761 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4653 "string.m"
    {
#line 4653 "string.m"
      mercury__string__foldr_between_2_6_p_1(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4653 "string.m"
      return;
    }
#line 4650 "string.m"
  }
#line 996 "string.m"
}

#line 994 "string.m"
void MR_CALL 
mercury__string__foldr_between_6_p_0(
#line 994 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 994 "string.m"
  MR_Word mercury__string__Closure_7,
#line 994 "string.m"
  MR_String mercury__string__String_8,
#line 994 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 994 "string.m"
  MR_Integer mercury__string__End0_10,
#line 994 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 994 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 994 "string.m"
{
#line 4650 "string.m"
  {
#line 4650 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4650 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4650 "string.m"
    MR_Integer mercury__string__End_13;
#line 4650 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 17841 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4653 "string.m"
    {
#line 4653 "string.m"
      mercury__string__foldr_between_2_6_p_0(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4653 "string.m"
      return;
    }
#line 4650 "string.m"
  }
#line 994 "string.m"
}

#line 992 "string.m"
MR_Box MR_CALL 
mercury__string__foldr_between_5_f_0(
#line 992 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_23,
#line 992 "string.m"
  MR_Word mercury__string__F_7,
#line 992 "string.m"
  MR_String mercury__string__String_8,
#line 992 "string.m"
  MR_Integer mercury__string__Start_9,
#line 992 "string.m"
  MR_Integer mercury__string__Count_10,
#line 992 "string.m"
  MR_Box mercury__string__Acc0_11)
#line 992 "string.m"
{
#line 4646 "string.m"
  {
#line 4646 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_9);
#line 4646 "string.m"
    MR_Box mercury__string__Acc_12;
#line 4646 "string.m"
    MR_Integer mercury__string__Start_31;
#line 4646 "string.m"
    MR_Integer mercury__string__End_32;
#line 4646 "string.m"
    MR_Integer mercury__string__V_34_34;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_31 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_31 = mercury__string__Start_9;
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_5_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 17921 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_34_34  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__Count_10 < mercury__string__V_34_34);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_32 = mercury__string__Count_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_32 = mercury__string__V_34_34;
#line 4653 "string.m"
    {
#line 4653 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_7, mercury__string__String_8, mercury__string__Start_31, mercury__string__End_32, mercury__string__Acc0_11, &mercury__string__Acc_12);
    }
#line 4646 "string.m"
    return mercury__string__Acc_12;
#line 4646 "string.m"
  }
#line 992 "string.m"
}

#line 984 "string.m"
void MR_CALL 
mercury__string__foldr_4_p_4(
#line 984 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 984 "string.m"
  MR_Word mercury__string__Closure_5,
#line 984 "string.m"
  MR_String mercury__string__String_6,
#line 984 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 984 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9,
#line 984 "string.m"
  MR_Cont mercury__string__cont,
#line 984 "string.m"
  void * mercury__string__cont_env_ptr)
#line 984 "string.m"
{
#line 4643 "string.m"
  {
#line 4643 "string.m"
    MR_bool mercury__string__succeeded;
#line 4643 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 17989 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2400 "string.m"
}
#line 4644 "string.m"
    {
#line 4644 "string.m"
      mercury__string__foldr_between_6_p_4(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4644 "string.m"
      return;
    }
#line 4643 "string.m"
  }
#line 984 "string.m"
}

#line 983 "string.m"
void MR_CALL 
mercury__string__foldr_4_p_3(
#line 983 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 983 "string.m"
  MR_Word mercury__string__Closure_5,
#line 983 "string.m"
  MR_String mercury__string__String_6,
#line 983 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 983 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9,
#line 983 "string.m"
  MR_Cont mercury__string__cont,
#line 983 "string.m"
  void * mercury__string__cont_env_ptr)
#line 983 "string.m"
{
#line 4643 "string.m"
  {
#line 4643 "string.m"
    MR_bool mercury__string__succeeded;
#line 4643 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 18047 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2400 "string.m"
}
#line 4644 "string.m"
    {
#line 4644 "string.m"
      mercury__string__foldr_between_6_p_3(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4644 "string.m"
      return;
    }
#line 4643 "string.m"
  }
#line 983 "string.m"
}

#line 982 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_4_p_2(
#line 982 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 982 "string.m"
  MR_Word mercury__string__Closure_5,
#line 982 "string.m"
  MR_String mercury__string__String_6,
#line 982 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 982 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9)
#line 982 "string.m"
{
#line 4643 "string.m"
  {
#line 4643 "string.m"
    MR_bool mercury__string__succeeded;
#line 4643 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 18101 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2400 "string.m"
}
#line 4644 "string.m"
    {
#line 4644 "string.m"
      return mercury__string__succeeded = mercury__string__foldr_between_6_p_2(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
    }
#line 4643 "string.m"
    return mercury__string__succeeded;
#line 4643 "string.m"
  }
#line 982 "string.m"
}

#line 981 "string.m"
void MR_CALL 
mercury__string__foldr_4_p_1(
#line 981 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 981 "string.m"
  MR_Word mercury__string__Closure_5,
#line 981 "string.m"
  MR_String mercury__string__String_6,
#line 981 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 981 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9)
#line 981 "string.m"
{
#line 4643 "string.m"
  {
#line 4643 "string.m"
    MR_bool mercury__string__succeeded;
#line 4643 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 18155 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2400 "string.m"
}
#line 4644 "string.m"
    {
#line 4644 "string.m"
      mercury__string__foldr_between_6_p_1(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
#line 4644 "string.m"
      return;
    }
#line 4643 "string.m"
  }
#line 981 "string.m"
}

#line 980 "string.m"
void MR_CALL 
mercury__string__foldr_4_p_0(
#line 980 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 980 "string.m"
  MR_Word mercury__string__Closure_5,
#line 980 "string.m"
  MR_String mercury__string__String_6,
#line 980 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 980 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9)
#line 980 "string.m"
{
#line 4643 "string.m"
  {
#line 4643 "string.m"
    MR_bool mercury__string__succeeded;
#line 4643 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 18209 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2400 "string.m"
}
#line 4644 "string.m"
    {
#line 4644 "string.m"
      mercury__string__foldr_between_6_p_0(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
#line 4644 "string.m"
      return;
    }
#line 4643 "string.m"
  }
#line 980 "string.m"
}

#line 978 "string.m"
MR_Box MR_CALL 
mercury__string__foldr_3_f_0(
#line 978 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 978 "string.m"
  MR_Word mercury__string__F_5,
#line 978 "string.m"
  MR_String mercury__string__String_6,
#line 978 "string.m"
  MR_Box mercury__string__Acc0_7)
#line 978 "string.m"
{
#line 4639 "string.m"
  {
#line 4639 "string.m"
    MR_bool mercury__string__succeeded;
#line 4639 "string.m"
    MR_Box mercury__string__Acc_8;
#line 4639 "string.m"
    MR_Integer mercury__string__V_26_26;
#line 4639 "string.m"
    MR_Integer mercury__string__End_41;
#line 4639 "string.m"
    MR_Integer mercury__string__V_43_43;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 18267 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_26_26  = Length;
#line 2400 "string.m"
}
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 18287 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_43_43  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__V_26_26 < mercury__string__V_43_43);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_41 = mercury__string__V_26_26;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_41 = mercury__string__V_43_43;
#line 4653 "string.m"
    {
#line 4653 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__End_41, mercury__string__Acc0_7, &mercury__string__Acc_8);
    }
#line 4639 "string.m"
    return mercury__string__Acc_8;
#line 4639 "string.m"
  }
#line 978 "string.m"
}

#line 972 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_5(
#line 972 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 972 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 972 "string.m"
  MR_Word mercury__string__Closure_9,
#line 972 "string.m"
  MR_String mercury__string__String_10,
#line 972 "string.m"
  MR_Integer mercury__string__Start_11,
#line 972 "string.m"
  MR_Integer mercury__string__Count_12,
#line 972 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 972 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 972 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 972 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 972 "string.m"
  MR_Cont mercury__string__cont,
#line 972 "string.m"
  void * mercury__string__cont_env_ptr)
#line 972 "string.m"
{
#line 4632 "string.m"
  {
#line 4632 "string.m"
    MR_bool mercury__string__succeeded;
#line 4632 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4632 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4633 "string.m"
    {
#line 4633 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4634 "string.m"
    {
#line 4634 "string.m"
      mercury__string__foldl2_between_8_p_5(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4634 "string.m"
      return;
    }
#line 4632 "string.m"
  }
#line 972 "string.m"
}

#line 970 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_4(
#line 970 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 970 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 970 "string.m"
  MR_Word mercury__string__Closure_9,
#line 970 "string.m"
  MR_String mercury__string__String_10,
#line 970 "string.m"
  MR_Integer mercury__string__Start_11,
#line 970 "string.m"
  MR_Integer mercury__string__Count_12,
#line 970 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 970 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 970 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 970 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 970 "string.m"
  MR_Cont mercury__string__cont,
#line 970 "string.m"
  void * mercury__string__cont_env_ptr)
#line 970 "string.m"
{
#line 4632 "string.m"
  {
#line 4632 "string.m"
    MR_bool mercury__string__succeeded;
#line 4632 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4632 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4633 "string.m"
    {
#line 4633 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4634 "string.m"
    {
#line 4634 "string.m"
      mercury__string__foldl2_between_8_p_4(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4634 "string.m"
      return;
    }
#line 4632 "string.m"
  }
#line 970 "string.m"
}

#line 968 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_substring_8_p_3(
#line 968 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 968 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 968 "string.m"
  MR_Word mercury__string__Closure_9,
#line 968 "string.m"
  MR_String mercury__string__String_10,
#line 968 "string.m"
  MR_Integer mercury__string__Start_11,
#line 968 "string.m"
  MR_Integer mercury__string__Count_12,
#line 968 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 968 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 968 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 968 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 968 "string.m"
{
#line 4632 "string.m"
  {
#line 4632 "string.m"
    MR_bool mercury__string__succeeded;
#line 4632 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4632 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4633 "string.m"
    {
#line 4633 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4634 "string.m"
    {
#line 4634 "string.m"
      return mercury__string__succeeded = mercury__string__foldl2_between_8_p_3(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
    }
#line 4632 "string.m"
    return mercury__string__succeeded;
#line 4632 "string.m"
  }
#line 968 "string.m"
}

#line 966 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_2(
#line 966 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 966 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 966 "string.m"
  MR_Word mercury__string__Closure_9,
#line 966 "string.m"
  MR_String mercury__string__String_10,
#line 966 "string.m"
  MR_Integer mercury__string__Start_11,
#line 966 "string.m"
  MR_Integer mercury__string__Count_12,
#line 966 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 966 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 966 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 966 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 966 "string.m"
{
#line 4632 "string.m"
  {
#line 4632 "string.m"
    MR_bool mercury__string__succeeded;
#line 4632 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4632 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4633 "string.m"
    {
#line 4633 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4634 "string.m"
    {
#line 4634 "string.m"
      mercury__string__foldl2_between_8_p_2(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4634 "string.m"
      return;
    }
#line 4632 "string.m"
  }
#line 966 "string.m"
}

#line 964 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_1(
#line 964 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 964 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 964 "string.m"
  MR_Word mercury__string__Closure_9,
#line 964 "string.m"
  MR_String mercury__string__String_10,
#line 964 "string.m"
  MR_Integer mercury__string__Start_11,
#line 964 "string.m"
  MR_Integer mercury__string__Count_12,
#line 964 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 964 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 964 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 964 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 964 "string.m"
{
#line 4632 "string.m"
  {
#line 4632 "string.m"
    MR_bool mercury__string__succeeded;
#line 4632 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4632 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4633 "string.m"
    {
#line 4633 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4634 "string.m"
    {
#line 4634 "string.m"
      mercury__string__foldl2_between_8_p_1(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4634 "string.m"
      return;
    }
#line 4632 "string.m"
  }
#line 964 "string.m"
}

#line 962 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_0(
#line 962 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 962 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 962 "string.m"
  MR_Word mercury__string__Closure_9,
#line 962 "string.m"
  MR_String mercury__string__String_10,
#line 962 "string.m"
  MR_Integer mercury__string__Start_11,
#line 962 "string.m"
  MR_Integer mercury__string__Count_12,
#line 962 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 962 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 962 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 962 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 962 "string.m"
{
#line 4632 "string.m"
  {
#line 4632 "string.m"
    MR_bool mercury__string__succeeded;
#line 4632 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4632 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4633 "string.m"
    {
#line 4633 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4634 "string.m"
    {
#line 4634 "string.m"
      mercury__string__foldl2_between_8_p_0(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4634 "string.m"
      return;
    }
#line 4632 "string.m"
  }
#line 962 "string.m"
}

#line 953 "string.m"
void MR_CALL 
mercury__string__foldl_substring_6_p_4(
#line 953 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 953 "string.m"
  MR_Word mercury__string__Closure_7,
#line 953 "string.m"
  MR_String mercury__string__String_8,
#line 953 "string.m"
  MR_Integer mercury__string__Start_9,
#line 953 "string.m"
  MR_Integer mercury__string__Count_10,
#line 953 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 953 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 953 "string.m"
  MR_Cont mercury__string__cont,
#line 953 "string.m"
  void * mercury__string__cont_env_ptr)
#line 953 "string.m"
{
#line 4628 "string.m"
  {
#line 4628 "string.m"
    MR_bool mercury__string__succeeded;
#line 4628 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4628 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4629 "string.m"
    {
#line 4629 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4630 "string.m"
    {
#line 4630 "string.m"
      mercury__string__foldl_between_6_p_4(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4630 "string.m"
      return;
    }
#line 4628 "string.m"
  }
#line 953 "string.m"
}

#line 951 "string.m"
void MR_CALL 
mercury__string__foldl_substring_6_p_3(
#line 951 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 951 "string.m"
  MR_Word mercury__string__Closure_7,
#line 951 "string.m"
  MR_String mercury__string__String_8,
#line 951 "string.m"
  MR_Integer mercury__string__Start_9,
#line 951 "string.m"
  MR_Integer mercury__string__Count_10,
#line 951 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 951 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 951 "string.m"
  MR_Cont mercury__string__cont,
#line 951 "string.m"
  void * mercury__string__cont_env_ptr)
#line 951 "string.m"
{
#line 4628 "string.m"
  {
#line 4628 "string.m"
    MR_bool mercury__string__succeeded;
#line 4628 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4628 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4629 "string.m"
    {
#line 4629 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4630 "string.m"
    {
#line 4630 "string.m"
      mercury__string__foldl_between_6_p_3(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4630 "string.m"
      return;
    }
#line 4628 "string.m"
  }
#line 951 "string.m"
}

#line 949 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_substring_6_p_2(
#line 949 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 949 "string.m"
  MR_Word mercury__string__Closure_7,
#line 949 "string.m"
  MR_String mercury__string__String_8,
#line 949 "string.m"
  MR_Integer mercury__string__Start_9,
#line 949 "string.m"
  MR_Integer mercury__string__Count_10,
#line 949 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 949 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 949 "string.m"
{
#line 4628 "string.m"
  {
#line 4628 "string.m"
    MR_bool mercury__string__succeeded;
#line 4628 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4628 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4629 "string.m"
    {
#line 4629 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4630 "string.m"
    {
#line 4630 "string.m"
      return mercury__string__succeeded = mercury__string__foldl_between_6_p_2(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4628 "string.m"
    return mercury__string__succeeded;
#line 4628 "string.m"
  }
#line 949 "string.m"
}

#line 947 "string.m"
void MR_CALL 
mercury__string__foldl_substring_6_p_1(
#line 947 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 947 "string.m"
  MR_Word mercury__string__Closure_7,
#line 947 "string.m"
  MR_String mercury__string__String_8,
#line 947 "string.m"
  MR_Integer mercury__string__Start_9,
#line 947 "string.m"
  MR_Integer mercury__string__Count_10,
#line 947 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 947 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 947 "string.m"
{
#line 4628 "string.m"
  {
#line 4628 "string.m"
    MR_bool mercury__string__succeeded;
#line 4628 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4628 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4629 "string.m"
    {
#line 4629 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4630 "string.m"
    {
#line 4630 "string.m"
      mercury__string__foldl_between_6_p_1(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4630 "string.m"
      return;
    }
#line 4628 "string.m"
  }
#line 947 "string.m"
}

#line 945 "string.m"
void MR_CALL 
mercury__string__foldl_substring_6_p_0(
#line 945 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 945 "string.m"
  MR_Word mercury__string__Closure_7,
#line 945 "string.m"
  MR_String mercury__string__String_8,
#line 945 "string.m"
  MR_Integer mercury__string__Start_9,
#line 945 "string.m"
  MR_Integer mercury__string__Count_10,
#line 945 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 945 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 945 "string.m"
{
#line 4628 "string.m"
  {
#line 4628 "string.m"
    MR_bool mercury__string__succeeded;
#line 4628 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4628 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4629 "string.m"
    {
#line 4629 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4630 "string.m"
    {
#line 4630 "string.m"
      mercury__string__foldl_between_6_p_0(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4630 "string.m"
      return;
    }
#line 4628 "string.m"
  }
#line 945 "string.m"
}

#line 943 "string.m"
MR_Box MR_CALL 
mercury__string__foldl_substring_5_f_0(
#line 943 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_15,
#line 943 "string.m"
  MR_Word mercury__string__F_7,
#line 943 "string.m"
  MR_String mercury__string__String_8,
#line 943 "string.m"
  MR_Integer mercury__string__Start_9,
#line 943 "string.m"
  MR_Integer mercury__string__Count_10,
#line 943 "string.m"
  MR_Box mercury__string__Acc0_11)
#line 943 "string.m"
{
#line 4624 "string.m"
  {
#line 4624 "string.m"
    MR_bool mercury__string__succeeded;
#line 4624 "string.m"
    MR_Box mercury__string__Acc_12;
#line 4624 "string.m"
    MR_Integer mercury__string__ClampStart_13;
#line 4624 "string.m"
    MR_Integer mercury__string__ClampEnd_14;

#line 4625 "string.m"
    {
#line 4625 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    }
#line 4626 "string.m"
    {
#line 4626 "string.m"
      return mercury__string__Acc_12 = mercury__string__foldl_between_5_f_0(mercury__string__TypeInfo_for_A_15, mercury__string__F_7, mercury__string__String_8, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, mercury__string__Acc0_11);
    }
#line 4624 "string.m"
    return mercury__string__Acc_12;
#line 4624 "string.m"
  }
#line 943 "string.m"
}

#line 935 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_5(
#line 935 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 935 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 935 "string.m"
  MR_Word mercury__string__Closure_9,
#line 935 "string.m"
  MR_String mercury__string__String_10,
#line 935 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 935 "string.m"
  MR_Integer mercury__string__End0_12,
#line 935 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 935 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 935 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 935 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 935 "string.m"
  MR_Cont mercury__string__cont,
#line 935 "string.m"
  void * mercury__string__cont_env_ptr)
#line 935 "string.m"
{
#line 4568 "string.m"
  {
#line 4568 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4568 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4568 "string.m"
    MR_Integer mercury__string__End_16;
#line 4568 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_5

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 18969 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4571 "string.m"
    {
#line 4571 "string.m"
      mercury__string__foldl2_between_2_8_p_5(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4571 "string.m"
      return;
    }
#line 4568 "string.m"
  }
#line 935 "string.m"
}

#line 933 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_4(
#line 933 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 933 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 933 "string.m"
  MR_Word mercury__string__Closure_9,
#line 933 "string.m"
  MR_String mercury__string__String_10,
#line 933 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 933 "string.m"
  MR_Integer mercury__string__End0_12,
#line 933 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 933 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 933 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 933 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 933 "string.m"
  MR_Cont mercury__string__cont,
#line 933 "string.m"
  void * mercury__string__cont_env_ptr)
#line 933 "string.m"
{
#line 4568 "string.m"
  {
#line 4568 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4568 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4568 "string.m"
    MR_Integer mercury__string__End_16;
#line 4568 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 19059 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4571 "string.m"
    {
#line 4571 "string.m"
      mercury__string__foldl2_between_2_8_p_4(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4571 "string.m"
      return;
    }
#line 4568 "string.m"
  }
#line 933 "string.m"
}

#line 931 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_between_8_p_3(
#line 931 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 931 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 931 "string.m"
  MR_Word mercury__string__Closure_9,
#line 931 "string.m"
  MR_String mercury__string__String_10,
#line 931 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 931 "string.m"
  MR_Integer mercury__string__End0_12,
#line 931 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 931 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 931 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 931 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 931 "string.m"
{
#line 4568 "string.m"
  {
#line 4568 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4568 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4568 "string.m"
    MR_Integer mercury__string__End_16;
#line 4568 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 19145 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4571 "string.m"
    {
#line 4571 "string.m"
      return mercury__string__succeeded = mercury__string__foldl2_between_2_8_p_3(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
    }
#line 4568 "string.m"
    return mercury__string__succeeded;
#line 4568 "string.m"
  }
#line 931 "string.m"
}

#line 929 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_2(
#line 929 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 929 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 929 "string.m"
  MR_Word mercury__string__Closure_9,
#line 929 "string.m"
  MR_String mercury__string__String_10,
#line 929 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 929 "string.m"
  MR_Integer mercury__string__End0_12,
#line 929 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 929 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 929 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 929 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 929 "string.m"
{
#line 4568 "string.m"
  {
#line 4568 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4568 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4568 "string.m"
    MR_Integer mercury__string__End_16;
#line 4568 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 19231 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4571 "string.m"
    {
#line 4571 "string.m"
      mercury__string__foldl2_between_2_8_p_2(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4571 "string.m"
      return;
    }
#line 4568 "string.m"
  }
#line 929 "string.m"
}

#line 927 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_1(
#line 927 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 927 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 927 "string.m"
  MR_Word mercury__string__Closure_9,
#line 927 "string.m"
  MR_String mercury__string__String_10,
#line 927 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 927 "string.m"
  MR_Integer mercury__string__End0_12,
#line 927 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 927 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 927 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 927 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 927 "string.m"
{
#line 4568 "string.m"
  {
#line 4568 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4568 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4568 "string.m"
    MR_Integer mercury__string__End_16;
#line 4568 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 19317 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4571 "string.m"
    {
#line 4571 "string.m"
      mercury__string__foldl2_between_2_8_p_1(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4571 "string.m"
      return;
    }
#line 4568 "string.m"
  }
#line 927 "string.m"
}

#line 925 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_0(
#line 925 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 925 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 925 "string.m"
  MR_Word mercury__string__Closure_9,
#line 925 "string.m"
  MR_String mercury__string__String_10,
#line 925 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 925 "string.m"
  MR_Integer mercury__string__End0_12,
#line 925 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 925 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 925 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 925 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 925 "string.m"
{
#line 4568 "string.m"
  {
#line 4568 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4568 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4568 "string.m"
    MR_Integer mercury__string__End_16;
#line 4568 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 19403 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_12 < mercury__string__V_22_22);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_16 = mercury__string__End0_12;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_16 = mercury__string__V_22_22;
#line 4571 "string.m"
    {
#line 4571 "string.m"
      mercury__string__foldl2_between_2_8_p_0(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4571 "string.m"
      return;
    }
#line 4568 "string.m"
  }
#line 925 "string.m"
}

#line 915 "string.m"
void MR_CALL 
mercury__string__foldl_between_6_p_4(
#line 915 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 915 "string.m"
  MR_Word mercury__string__Closure_7,
#line 915 "string.m"
  MR_String mercury__string__String_8,
#line 915 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 915 "string.m"
  MR_Integer mercury__string__End0_10,
#line 915 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 915 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 915 "string.m"
  MR_Cont mercury__string__cont,
#line 915 "string.m"
  void * mercury__string__cont_env_ptr)
#line 915 "string.m"
{
#line 4559 "string.m"
  {
#line 4559 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4559 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4559 "string.m"
    MR_Integer mercury__string__End_13;
#line 4559 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 19487 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4562 "string.m"
    {
#line 4562 "string.m"
      mercury__string__foldl_between_2_6_p_4(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4562 "string.m"
      return;
    }
#line 4559 "string.m"
  }
#line 915 "string.m"
}

#line 913 "string.m"
void MR_CALL 
mercury__string__foldl_between_6_p_3(
#line 913 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 913 "string.m"
  MR_Word mercury__string__Closure_7,
#line 913 "string.m"
  MR_String mercury__string__String_8,
#line 913 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 913 "string.m"
  MR_Integer mercury__string__End0_10,
#line 913 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 913 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 913 "string.m"
  MR_Cont mercury__string__cont,
#line 913 "string.m"
  void * mercury__string__cont_env_ptr)
#line 913 "string.m"
{
#line 4559 "string.m"
  {
#line 4559 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4559 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4559 "string.m"
    MR_Integer mercury__string__End_13;
#line 4559 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 19571 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4562 "string.m"
    {
#line 4562 "string.m"
      mercury__string__foldl_between_2_6_p_3(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4562 "string.m"
      return;
    }
#line 4559 "string.m"
  }
#line 913 "string.m"
}

#line 911 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_between_6_p_2(
#line 911 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 911 "string.m"
  MR_Word mercury__string__Closure_7,
#line 911 "string.m"
  MR_String mercury__string__String_8,
#line 911 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 911 "string.m"
  MR_Integer mercury__string__End0_10,
#line 911 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 911 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 911 "string.m"
{
#line 4559 "string.m"
  {
#line 4559 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4559 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4559 "string.m"
    MR_Integer mercury__string__End_13;
#line 4559 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 19651 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4562 "string.m"
    {
#line 4562 "string.m"
      return mercury__string__succeeded = mercury__string__foldl_between_2_6_p_2(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4559 "string.m"
    return mercury__string__succeeded;
#line 4559 "string.m"
  }
#line 911 "string.m"
}

#line 909 "string.m"
void MR_CALL 
mercury__string__foldl_between_6_p_1(
#line 909 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 909 "string.m"
  MR_Word mercury__string__Closure_7,
#line 909 "string.m"
  MR_String mercury__string__String_8,
#line 909 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 909 "string.m"
  MR_Integer mercury__string__End0_10,
#line 909 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 909 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 909 "string.m"
{
#line 4559 "string.m"
  {
#line 4559 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4559 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4559 "string.m"
    MR_Integer mercury__string__End_13;
#line 4559 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 19731 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4562 "string.m"
    {
#line 4562 "string.m"
      mercury__string__foldl_between_2_6_p_0(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4562 "string.m"
      return;
    }
#line 4559 "string.m"
  }
#line 909 "string.m"
}

#line 907 "string.m"
void MR_CALL 
mercury__string__foldl_between_6_p_0(
#line 907 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 907 "string.m"
  MR_Word mercury__string__Closure_7,
#line 907 "string.m"
  MR_String mercury__string__String_8,
#line 907 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 907 "string.m"
  MR_Integer mercury__string__End0_10,
#line 907 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 907 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 907 "string.m"
{
#line 4559 "string.m"
  {
#line 4559 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4559 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4559 "string.m"
    MR_Integer mercury__string__End_13;
#line 4559 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 19811 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End0_10 < mercury__string__V_17_17);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_13 = mercury__string__End0_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_13 = mercury__string__V_17_17;
#line 4562 "string.m"
    {
#line 4562 "string.m"
      mercury__string__foldl_between_2_6_p_1(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4562 "string.m"
      return;
    }
#line 4559 "string.m"
  }
#line 907 "string.m"
}

#line 905 "string.m"
MR_Box MR_CALL 
mercury__string__foldl_between_5_f_0(
#line 905 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 905 "string.m"
  MR_Word mercury__string__F_7,
#line 905 "string.m"
  MR_String mercury__string__S_8,
#line 905 "string.m"
  MR_Integer mercury__string__Start_9,
#line 905 "string.m"
  MR_Integer mercury__string__End_10,
#line 905 "string.m"
  MR_Box mercury__string__A_11)
#line 905 "string.m"
{
#line 4564 "string.m"
  {
#line 4564 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_9);
#line 4564 "string.m"
    MR_Box mercury__string__B_12;
#line 4564 "string.m"
    MR_Integer mercury__string__Start_31;
#line 4564 "string.m"
    MR_Integer mercury__string__End_32;
#line 4564 "string.m"
    MR_Integer mercury__string__V_34_34;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_31 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_31 = mercury__string__Start_9;
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_5_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_8 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 19891 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_34_34  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__End_10 < mercury__string__V_34_34);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_32 = mercury__string__End_10;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_32 = mercury__string__V_34_34;
#line 4562 "string.m"
    {
#line 4562 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_56_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_7, mercury__string__S_8, mercury__string__Start_31, mercury__string__End_32, mercury__string__A_11, &mercury__string__B_12);
    }
#line 4564 "string.m"
    return mercury__string__B_12;
#line 4564 "string.m"
  }
#line 905 "string.m"
}

#line 896 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_5(
#line 896 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 896 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 896 "string.m"
  MR_Word mercury__string__Closure_7,
#line 896 "string.m"
  MR_String mercury__string__String_8,
#line 896 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 896 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 896 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 896 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15,
#line 896 "string.m"
  MR_Cont mercury__string__cont,
#line 896 "string.m"
  void * mercury__string__cont_env_ptr)
#line 896 "string.m"
{
#line 4555 "string.m"
  {
#line 4555 "string.m"
    MR_bool mercury__string__succeeded;
#line 4555 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_5

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 19965 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2400 "string.m"
}
#line 4557 "string.m"
    {
#line 4557 "string.m"
      mercury__string__foldl2_between_8_p_5(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4557 "string.m"
      return;
    }
#line 4555 "string.m"
  }
#line 896 "string.m"
}

#line 894 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_4(
#line 894 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 894 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 894 "string.m"
  MR_Word mercury__string__Closure_7,
#line 894 "string.m"
  MR_String mercury__string__String_8,
#line 894 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 894 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 894 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 894 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15,
#line 894 "string.m"
  MR_Cont mercury__string__cont,
#line 894 "string.m"
  void * mercury__string__cont_env_ptr)
#line 894 "string.m"
{
#line 4555 "string.m"
  {
#line 4555 "string.m"
    MR_bool mercury__string__succeeded;
#line 4555 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 20029 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2400 "string.m"
}
#line 4557 "string.m"
    {
#line 4557 "string.m"
      mercury__string__foldl2_between_8_p_4(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4557 "string.m"
      return;
    }
#line 4555 "string.m"
  }
#line 894 "string.m"
}

#line 892 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_6_p_3(
#line 892 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 892 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 892 "string.m"
  MR_Word mercury__string__Closure_7,
#line 892 "string.m"
  MR_String mercury__string__String_8,
#line 892 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 892 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 892 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 892 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
#line 892 "string.m"
{
#line 4555 "string.m"
  {
#line 4555 "string.m"
    MR_bool mercury__string__succeeded;
#line 4555 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 20089 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2400 "string.m"
}
#line 4557 "string.m"
    {
#line 4557 "string.m"
      return mercury__string__succeeded = mercury__string__foldl2_between_8_p_3(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
    }
#line 4555 "string.m"
    return mercury__string__succeeded;
#line 4555 "string.m"
  }
#line 892 "string.m"
}

#line 890 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_2(
#line 890 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 890 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 890 "string.m"
  MR_Word mercury__string__Closure_7,
#line 890 "string.m"
  MR_String mercury__string__String_8,
#line 890 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 890 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 890 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 890 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
#line 890 "string.m"
{
#line 4555 "string.m"
  {
#line 4555 "string.m"
    MR_bool mercury__string__succeeded;
#line 4555 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 20149 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2400 "string.m"
}
#line 4557 "string.m"
    {
#line 4557 "string.m"
      mercury__string__foldl2_between_8_p_2(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
#line 4557 "string.m"
      return;
    }
#line 4555 "string.m"
  }
#line 890 "string.m"
}

#line 888 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_1(
#line 888 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 888 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 888 "string.m"
  MR_Word mercury__string__Closure_7,
#line 888 "string.m"
  MR_String mercury__string__String_8,
#line 888 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 888 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 888 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 888 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
#line 888 "string.m"
{
#line 4555 "string.m"
  {
#line 4555 "string.m"
    MR_bool mercury__string__succeeded;
#line 4555 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 20209 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2400 "string.m"
}
#line 4557 "string.m"
    {
#line 4557 "string.m"
      mercury__string__foldl2_between_8_p_1(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
#line 4557 "string.m"
      return;
    }
#line 4555 "string.m"
  }
#line 888 "string.m"
}

#line 886 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_0(
#line 886 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 886 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 886 "string.m"
  MR_Word mercury__string__Closure_7,
#line 886 "string.m"
  MR_String mercury__string__String_8,
#line 886 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 886 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 886 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 886 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
#line 886 "string.m"
{
#line 4555 "string.m"
  {
#line 4555 "string.m"
    MR_bool mercury__string__succeeded;
#line 4555 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 20269 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2400 "string.m"
}
#line 4557 "string.m"
    {
#line 4557 "string.m"
      mercury__string__foldl2_between_8_p_0(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
#line 4557 "string.m"
      return;
    }
#line 4555 "string.m"
  }
#line 886 "string.m"
}

#line 880 "string.m"
void MR_CALL 
mercury__string__foldl_4_p_4(
#line 880 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 880 "string.m"
  MR_Word mercury__string__Closure_5,
#line 880 "string.m"
  MR_String mercury__string__String_6,
#line 880 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 880 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10,
#line 880 "string.m"
  MR_Cont mercury__string__cont,
#line 880 "string.m"
  void * mercury__string__cont_env_ptr)
#line 880 "string.m"
{
#line 4551 "string.m"
  {
#line 4551 "string.m"
    MR_bool mercury__string__succeeded;
#line 4551 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 20327 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2400 "string.m"
}
#line 4553 "string.m"
    {
#line 4553 "string.m"
      mercury__string__foldl_between_6_p_4(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4553 "string.m"
      return;
    }
#line 4551 "string.m"
  }
#line 880 "string.m"
}

#line 879 "string.m"
void MR_CALL 
mercury__string__foldl_4_p_3(
#line 879 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 879 "string.m"
  MR_Word mercury__string__Closure_5,
#line 879 "string.m"
  MR_String mercury__string__String_6,
#line 879 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 879 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10,
#line 879 "string.m"
  MR_Cont mercury__string__cont,
#line 879 "string.m"
  void * mercury__string__cont_env_ptr)
#line 879 "string.m"
{
#line 4551 "string.m"
  {
#line 4551 "string.m"
    MR_bool mercury__string__succeeded;
#line 4551 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 20385 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2400 "string.m"
}
#line 4553 "string.m"
    {
#line 4553 "string.m"
      mercury__string__foldl_between_6_p_3(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4553 "string.m"
      return;
    }
#line 4551 "string.m"
  }
#line 879 "string.m"
}

#line 878 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_4_p_2(
#line 878 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 878 "string.m"
  MR_Word mercury__string__Closure_5,
#line 878 "string.m"
  MR_String mercury__string__String_6,
#line 878 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 878 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10)
#line 878 "string.m"
{
#line 4551 "string.m"
  {
#line 4551 "string.m"
    MR_bool mercury__string__succeeded;
#line 4551 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 20439 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2400 "string.m"
}
#line 4553 "string.m"
    {
#line 4553 "string.m"
      return mercury__string__succeeded = mercury__string__foldl_between_6_p_2(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
    }
#line 4551 "string.m"
    return mercury__string__succeeded;
#line 4551 "string.m"
  }
#line 878 "string.m"
}

#line 877 "string.m"
void MR_CALL 
mercury__string__foldl_4_p_1(
#line 877 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 877 "string.m"
  MR_Word mercury__string__Closure_5,
#line 877 "string.m"
  MR_String mercury__string__String_6,
#line 877 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 877 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10)
#line 877 "string.m"
{
#line 4551 "string.m"
  {
#line 4551 "string.m"
    MR_bool mercury__string__succeeded;
#line 4551 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 20493 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2400 "string.m"
}
#line 4553 "string.m"
    {
#line 4553 "string.m"
      mercury__string__foldl_between_6_p_0(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
#line 4553 "string.m"
      return;
    }
#line 4551 "string.m"
  }
#line 877 "string.m"
}

#line 876 "string.m"
void MR_CALL 
mercury__string__foldl_4_p_0(
#line 876 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 876 "string.m"
  MR_Word mercury__string__Closure_5,
#line 876 "string.m"
  MR_String mercury__string__String_6,
#line 876 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 876 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10)
#line 876 "string.m"
{
#line 4551 "string.m"
  {
#line 4551 "string.m"
    MR_bool mercury__string__succeeded;
#line 4551 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 20547 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2400 "string.m"
}
#line 4553 "string.m"
    {
#line 4553 "string.m"
      mercury__string__foldl_between_6_p_1(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
#line 4553 "string.m"
      return;
    }
#line 4551 "string.m"
  }
#line 876 "string.m"
}

#line 874 "string.m"
MR_Box MR_CALL 
mercury__string__foldl_3_f_0(
#line 874 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 874 "string.m"
  MR_Word mercury__string__F_5,
#line 874 "string.m"
  MR_String mercury__string__S_6,
#line 874 "string.m"
  MR_Box mercury__string__A_7)
#line 874 "string.m"
{
#line 4547 "string.m"
  {
#line 4547 "string.m"
    MR_bool mercury__string__succeeded;
#line 4547 "string.m"
    MR_Box mercury__string__B_8;
#line 4547 "string.m"
    MR_Integer mercury__string__Length_25;
#line 4547 "string.m"
    MR_Integer mercury__string__End_39;
#line 4547 "string.m"
    MR_Integer mercury__string__V_41_41;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_6 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 20605 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_25  = Length;
#line 2400 "string.m"
}
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_6 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 20625 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_41_41  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
    mercury__string__succeeded = (mercury__string__Length_25 < mercury__string__V_41_41);
#line 88 "int.opt"
    if (mercury__string__succeeded)
#line 87 "int.opt"
      mercury__string__End_39 = mercury__string__Length_25;
#line 88 "int.opt"
    else
#line 89 "int.opt"
      mercury__string__End_39 = mercury__string__V_41_41;
#line 4562 "string.m"
    {
#line 4562 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_5, mercury__string__S_6, (MR_Integer) 0, mercury__string__End_39, mercury__string__A_7, &mercury__string__B_8);
    }
#line 4547 "string.m"
    return mercury__string__B_8;
#line 4547 "string.m"
  }
#line 874 "string.m"
}

#line 857 "string.m"
MR_String MR_CALL 
mercury__string__word_wrap_separator_3_f_0(
#line 857 "string.m"
  MR_String mercury__string__Str_5,
#line 857 "string.m"
  MR_Integer mercury__string__N_6,
#line 857 "string.m"
  MR_String mercury__string__WordSep0_7)
#line 857 "string.m"
{
#line 4420 "string.m"
  {
#line 4420 "string.m"
    MR_bool mercury__string__succeeded;
#line 4420 "string.m"
    MR_String mercury__string__Wrapped_8;
#line 4420 "string.m"
    MR_Word mercury__string__TypeCtorInfo_20_20;
#line 4420 "string.m"
    MR_Word mercury__string__Words_9;
#line 4420 "string.m"
    MR_Integer mercury__string__SepLen0_10;
#line 4420 "string.m"
    MR_String mercury__string__WordSep_11;
#line 4420 "string.m"
    MR_Integer mercury__string__SepLen_12;
#line 4420 "string.m"
    MR_Word mercury__string__RevWordsSpacesNls0_15;
#line 4420 "string.m"
    MR_Word mercury__string__RevWordsSpacesNls_16;
#line 4420 "string.m"
    MR_Word mercury__string__WordsSpacesNls_17;
#line 4420 "string.m"
    MR_Integer mercury__string__WordStart_25;

#line 4076 "string.m"
    {
#line 4076 "string.m"
      mercury__string__next_boundary__ho35_4_p_0(mercury__string__Str_5, (MR_Integer) 0, &mercury__string__WordStart_25);
    }
#line 4077 "string.m"
    {
#line 4077 "string.m"
      mercury__string__words_loop__ho36_4_p_0(mercury__string__Str_5, mercury__string__WordStart_25, &mercury__string__Words_9);
    }
#line 2460 "string.m"
    {
#line 2460 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__WordSep0_7, &mercury__string__SepLen0_10);
    }
#line 4423 "string.m"
    mercury__string__succeeded = (mercury__string__SepLen0_10 < mercury__string__N_6);
#line 4426 "string.m"
    if (mercury__string__succeeded)
#line 4424 "string.m"
      {
#line 4424 "string.m"
        mercury__string__WordSep_11 = mercury__string__WordSep0_7;
#line 4425 "string.m"
        mercury__string__SepLen_12 = mercury__string__SepLen0_10;
#line 4424 "string.m"
      }
#line 4426 "string.m"
    else
#line 4427 "string.m"
      {
#line 4427 "string.m"
        mercury__string__WordSep_11 = (MR_String) "";
#line 4428 "string.m"
        mercury__string__SepLen_12 = (MR_Integer) 0;
#line 4427 "string.m"
      }
#line 4432 "string.m"
    mercury__string__RevWordsSpacesNls0_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4433 "string.m"
    {
#line 4433 "string.m"
      mercury__string__word_wrap_loop_7_p_0(mercury__string__Words_9, mercury__string__WordSep_11, mercury__string__SepLen_12, (MR_Integer) 1, mercury__string__N_6, mercury__string__RevWordsSpacesNls0_15, &mercury__string__RevWordsSpacesNls_16);
    }
#line 20734 "string.c"
    mercury__string__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4435 "string.m"
    {
#line 4435 "string.m"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_20_20, mercury__string__RevWordsSpacesNls_16, &mercury__string__WordsSpacesNls_17);
    }
#line 4436 "string.m"
    {
#line 4436 "string.m"
      return mercury__string__Wrapped_8 = mercury__string__append_list_1_f_0(mercury__string__WordsSpacesNls_17);
    }
#line 4420 "string.m"
    return mercury__string__Wrapped_8;
#line 4420 "string.m"
  }
#line 857 "string.m"
}

#line 848 "string.m"
MR_String MR_CALL 
mercury__string__word_wrap_2_f_0(
#line 848 "string.m"
  MR_String mercury__string__Str_4,
#line 848 "string.m"
  MR_Integer mercury__string__N_5)
#line 848 "string.m"
{
#line 4418 "string.m"
  {
#line 4418 "string.m"
    MR_bool mercury__string__succeeded;
#line 4418 "string.m"
    MR_String mercury__string__HeadVar__3_3;

#line 4418 "string.m"
    {
#line 4418 "string.m"
      return mercury__string__HeadVar__3_3 = mercury__string__word_wrap_separator_3_f_0(mercury__string__Str_4, mercury__string__N_5, (MR_String) "");
    }
#line 4418 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4418 "string.m"
  }
#line 848 "string.m"
}

#line 837 "string.m"
void MR_CALL 
mercury__string__replace_all_4_p_0(
#line 837 "string.m"
  MR_String mercury__string__Str_5,
#line 837 "string.m"
  MR_String mercury__string__Pat_6,
#line 837 "string.m"
  MR_String mercury__string__Subst_7,
#line 837 "string.m"
  MR_String * mercury__string__Result_8)
#line 837 "string.m"
{
#line 4394 "string.m"
  {
#line 4394 "string.m"
    MR_bool mercury__string__succeeded = (strcmp(mercury__string__Pat_6, (MR_String) "") == 0);

#line 4394 "string.m"
    if (mercury__string__succeeded)
#line 4391 "string.m"
      {
#line 4391 "string.m"
        MR_Word mercury__string__TypeCtorInfo_29_29;
#line 4391 "string.m"
        MR_Word mercury__string__Foldl_12;
#line 4391 "string.m"
        MR_Word mercury__string__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4391 "string.m"
        MR_Word mercury__string__V_22_22;
#line 4391 "string.m"
        MR_Word mercury__string__V_23_23;
#line 4391 "string.m"
        MR_Integer mercury__string__Length_51;
#line 4391 "string.m"
        MR_Integer mercury__string__End_67;
#line 4391 "string.m"
        MR_Integer mercury__string__V_69_69;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 20833 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_51  = Length;
#line 2400 "string.m"
}
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 20853 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_69_69  = Length;
#line 2400 "string.m"
}
#line 85 "int.opt"
        mercury__string__succeeded = (mercury__string__Length_51 < mercury__string__V_69_69);
#line 88 "int.opt"
        if (mercury__string__succeeded)
#line 87 "int.opt"
          mercury__string__End_67 = mercury__string__Length_51;
#line 88 "int.opt"
        else
#line 89 "int.opt"
          mercury__string__End_67 = mercury__string__V_69_69;
#line 4562 "string.m"
        {
#line 4562 "string.m"
          mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_93_95_48_6_p_0(mercury__string__Subst_7, mercury__string__Str_5, (MR_Integer) 0, mercury__string__End_67, mercury__string__V_21_21, &mercury__string__Foldl_12);
        }
#line 20875 "string.c"
        mercury__string__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
        {
#line 118 "list.opt"
          mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_29_29, mercury__string__Foldl_12, &mercury__string__V_23_23);
        }
#line 4393 "string.m"
        {
#line 4393 "string.m"
          mercury__string__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4393 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_22_22, 0) = ((MR_Box) (mercury__string__Subst_7));
#line 4393 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_22_22, 1) = ((MR_Box) (mercury__string__V_23_23));
#line 4393 "string.m"
        }
#line 4393 "string.m"
        {
#line 4393 "string.m"
          *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__V_22_22);
        }
#line 4391 "string.m"
      }
#line 4394 "string.m"
    else
#line 4395 "string.m"
      {
#line 4395 "string.m"
        MR_Word mercury__string__TypeCtorInfo_30_30;
#line 4395 "string.m"
        MR_Integer mercury__string__PatLength_13;
#line 4395 "string.m"
        MR_Word mercury__string__ReversedChunks_14;
#line 4395 "string.m"
        MR_Word mercury__string__Chunks_15;
#line 4395 "string.m"
        MR_Word mercury__string__V_25_25;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Pat_6 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 20927 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PatLength_13  = Length;
#line 2400 "string.m"
}
#line 4396 "string.m"
        mercury__string__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4396 "string.m"
        {
#line 4396 "string.m"
          mercury__string__replace_all_loop_7_p_0(mercury__string__Str_5, mercury__string__Pat_6, mercury__string__Subst_7, mercury__string__PatLength_13, (MR_Integer) 0, mercury__string__V_25_25, &mercury__string__ReversedChunks_14);
        }
#line 20941 "string.c"
        mercury__string__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4397 "string.m"
        {
#line 4397 "string.m"
          mercury__string__Chunks_15 = mercury__list__reverse_1_f_0(mercury__string__TypeCtorInfo_30_30, mercury__string__ReversedChunks_14);
        }
#line 4398 "string.m"
        {
#line 4398 "string.m"
          *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__Chunks_15);
        }
#line 4395 "string.m"
      }
#line 4394 "string.m"
  }
#line 837 "string.m"
}

#line 836 "string.m"
MR_String MR_CALL 
mercury__string__replace_all_3_f_0(
#line 836 "string.m"
  MR_String mercury__string__S1_5,
#line 836 "string.m"
  MR_String mercury__string__S2_6,
#line 836 "string.m"
  MR_String mercury__string__S3_7)
#line 836 "string.m"
{
#line 4387 "string.m"
  {
#line 4387 "string.m"
    MR_bool mercury__string__succeeded;
#line 4387 "string.m"
    MR_String mercury__string__S4_8;

#line 4387 "string.m"
    {
#line 4387 "string.m"
      mercury__string__replace_all_4_p_0(mercury__string__S1_5, mercury__string__S2_6, mercury__string__S3_7, &mercury__string__S4_8);
    }
#line 4387 "string.m"
    return mercury__string__S4_8;
#line 4387 "string.m"
  }
#line 836 "string.m"
}

#line 829 "string.m"
MR_bool MR_CALL 
mercury__string__replace_4_p_0(
#line 829 "string.m"
  MR_String mercury__string__Str_5,
#line 829 "string.m"
  MR_String mercury__string__Pat_6,
#line 829 "string.m"
  MR_String mercury__string__Subst_7,
#line 829 "string.m"
  MR_String * mercury__string__Result_8)
#line 829 "string.m"
{
#line 4375 "string.m"
  {
#line 4375 "string.m"
    MR_bool mercury__string__succeeded;
#line 4375 "string.m"
    MR_Integer mercury__string__Index_9;
#line 4375 "string.m"
    MR_String mercury__string__Initial_10;
#line 4375 "string.m"
    MR_Integer mercury__string__BeginAt_11;
#line 4375 "string.m"
    MR_Integer mercury__string__EndAt_12;
#line 4375 "string.m"
    MR_String mercury__string__Final_13;
#line 4375 "string.m"
    MR_Integer mercury__string__V_14_14;
#line 4375 "string.m"
    MR_Integer mercury__string__V_15_15;
#line 4375 "string.m"
    MR_Word mercury__string__V_16_16;
#line 4375 "string.m"
    MR_Word mercury__string__V_17_17;
#line 4375 "string.m"
    MR_Word mercury__string__V_18_18;
#line 4375 "string.m"
    MR_Word mercury__string__V_19_19;

#line 2941 "string.m"
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
#line 2941 "string.m"
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
#line 21059 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Index_9  = Index;
#line 2941 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4375 "string.m"
    if (mercury__string__succeeded)
#line 4375 "string.m"
      {
#line 4378 "string.m"
        mercury__string__V_14_14 = (MR_Integer) 0;
#line 4039 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_5 ;
	Start =  mercury__string__V_14_14 ;
	End =  mercury__string__Index_9 ;
		{
#line 4039 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 21097 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Initial_10  = SubString;
#line 4039 "string.m"
}
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Pat_6 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 21117 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_15_15  = Length;
#line 2400 "string.m"
}
#line 4380 "string.m"
        mercury__string__BeginAt_11 = (mercury__string__Index_9 + mercury__string__V_15_15);
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 21139 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__EndAt_12  = Length;
#line 2400 "string.m"
}
#line 4039 "string.m"
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
#line 4039 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 21168 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Final_13  = SubString;
#line 4039 "string.m"
}
#line 4384 "string.m"
        mercury__string__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4384 "string.m"
        {
#line 4384 "string.m"
          mercury__string__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4384 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 0) = ((MR_Box) (mercury__string__Final_13));
#line 4384 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 1) = ((MR_Box) (mercury__string__V_19_19));
#line 4384 "string.m"
        }
#line 4384 "string.m"
        {
#line 4384 "string.m"
          mercury__string__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4384 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_17_17, 0) = ((MR_Box) (mercury__string__Subst_7));
#line 4384 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_17_17, 1) = ((MR_Box) (mercury__string__V_18_18));
#line 4384 "string.m"
        }
#line 4384 "string.m"
        {
#line 4384 "string.m"
          mercury__string__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4384 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_16_16, 0) = ((MR_Box) (mercury__string__Initial_10));
#line 4384 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_16_16, 1) = ((MR_Box) (mercury__string__V_17_17));
#line 4384 "string.m"
        }
#line 4384 "string.m"
        {
#line 4384 "string.m"
          *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__V_16_16);
        }
#line 4384 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 4375 "string.m"
      }
#line 4375 "string.m"
    return mercury__string__succeeded;
#line 4375 "string.m"
  }
#line 829 "string.m"
}

#line 820 "string.m"
MR_String MR_CALL 
mercury__string__rstrip_pred_2_f_0(
#line 820 "string.m"
  MR_Word mercury__string__P_4,
#line 820 "string.m"
  MR_String mercury__string__S_5)
#line 820 "string.m"
{
#line 4369 "string.m"
  {
#line 4369 "string.m"
    MR_bool mercury__string__succeeded;
#line 4369 "string.m"
    MR_String mercury__string__HeadVar__3_3;
#line 4369 "string.m"
    MR_Integer mercury__string__V_6_6;
#line 4369 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4369 "string.m"
    MR_Integer mercury__string__V_8_8;
#line 4369 "string.m"
    MR_Integer mercury__string__End_16;
#line 4369 "string.m"
    MR_Integer mercury__string__Index_17;
#line 3856 "string.m"
    MR_String mercury__string___RightString_29;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 21264 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = Length;
#line 2400 "string.m"
}
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 21284 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_16  = Length;
#line 2400 "string.m"
}
#line 2916 "string.m"
    {
#line 2916 "string.m"
      mercury__string__suffix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, mercury__string__End_16, &mercury__string__Index_17);
    }
#line 2914 "string.m"
    mercury__string__V_8_8 = (mercury__string__End_16 - mercury__string__Index_17);
#line 4369 "string.m"
    mercury__string__V_6_6 = (mercury__string__V_7_7 - mercury__string__V_8_8);
#line 3856 "string.m"
    {
#line 3856 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_5, mercury__string__V_6_6, &mercury__string__HeadVar__3_3, &mercury__string___RightString_29);
    }
#line 4369 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4369 "string.m"
  }
#line 820 "string.m"
}

#line 812 "string.m"
MR_String MR_CALL 
mercury__string__lstrip_pred_2_f_0(
#line 812 "string.m"
  MR_Word mercury__string__P_4,
#line 812 "string.m"
  MR_String mercury__string__S_5)
#line 812 "string.m"
{
#line 4371 "string.m"
  {
#line 4371 "string.m"
    MR_bool mercury__string__succeeded;
#line 4371 "string.m"
    MR_String mercury__string__HeadVar__3_3;
#line 4371 "string.m"
    MR_Integer mercury__string__V_6_6;
#line 4371 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4371 "string.m"
    MR_Integer mercury__string__V_8_8;
#line 4371 "string.m"
    MR_Integer mercury__string__Length_24;
#line 4371 "string.m"
    MR_Integer mercury__string__LeftCount_25;
#line 3870 "string.m"
    MR_String mercury__string___LeftString_26;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 21353 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = Length;
#line 2400 "string.m"
}
#line 2899 "string.m"
    {
#line 2899 "string.m"
      mercury__string__prefix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, (MR_Integer) 0, &mercury__string__V_8_8);
    }
#line 4371 "string.m"
    mercury__string__V_6_6 = (mercury__string__V_7_7 - mercury__string__V_8_8);
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 21380 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_24  = Length;
#line 2400 "string.m"
}
#line 3869 "string.m"
    mercury__string__LeftCount_25 = (mercury__string__Length_24 - mercury__string__V_6_6);
#line 3870 "string.m"
    {
#line 3870 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_5, mercury__string__LeftCount_25, &mercury__string___LeftString_26, &mercury__string__HeadVar__3_3);
    }
#line 4371 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4371 "string.m"
  }
#line 812 "string.m"
}

#line 805 "string.m"
MR_String MR_CALL 
mercury__string__strip_1_f_0(
#line 805 "string.m"
  MR_String mercury__string__S0_3)
#line 805 "string.m"
{
#line 4360 "string.m"
  {
#line 4360 "string.m"
    MR_bool mercury__string__succeeded;
#line 4360 "string.m"
    MR_String mercury__string__S_4;
#line 4360 "string.m"
    MR_Integer mercury__string__L_5;
#line 4360 "string.m"
    MR_Integer mercury__string__R_6;
#line 4360 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4360 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4360 "string.m"
    MR_Integer mercury__string__End_21;
#line 4360 "string.m"
    MR_Integer mercury__string__Index_22;

#line 2899 "string.m"
    {
#line 2899 "string.m"
      mercury__string__prefix_length_loop__ho32_4_p_0(mercury__string__S0_3, (MR_Integer) 0, &mercury__string__L_5);
    }
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__strip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S0_3 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 21445 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_21  = Length;
#line 2400 "string.m"
}
#line 2916 "string.m"
    {
#line 2916 "string.m"
      mercury__string__suffix_length_loop__ho33_4_p_0(mercury__string__S0_3, mercury__string__End_21, &mercury__string__Index_22);
    }
#line 2914 "string.m"
    mercury__string__R_6 = (mercury__string__End_21 - mercury__string__Index_22);
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__strip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S0_3 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 21472 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2400 "string.m"
}
#line 4363 "string.m"
    mercury__string__V_9_9 = (mercury__string__V_10_10 - mercury__string__R_6);
#line 3883 "string.m"
    {
#line 3883 "string.m"
      mercury__string__between_4_p_0(mercury__string__S0_3, mercury__string__L_5, mercury__string__V_9_9, &mercury__string__S_4);
    }
#line 4360 "string.m"
    return mercury__string__S_4;
#line 4360 "string.m"
  }
#line 805 "string.m"
}

#line 798 "string.m"
MR_String MR_CALL 
mercury__string__rstrip_1_f_0(
#line 798 "string.m"
  MR_String mercury__string__S_3)
#line 798 "string.m"
{
#line 4365 "string.m"
  {
#line 4365 "string.m"
    MR_bool mercury__string__succeeded;
#line 4365 "string.m"
    MR_String mercury__string__HeadVar__2_2;
#line 4365 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4365 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4365 "string.m"
    MR_Integer mercury__string__V_11_11;
#line 4365 "string.m"
    MR_Integer mercury__string__End_20;
#line 4365 "string.m"
    MR_Integer mercury__string__Index_21;
#line 3856 "string.m"
    MR_String mercury__string___RightString_33;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 21532 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2400 "string.m"
}
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 21552 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_20  = Length;
#line 2400 "string.m"
}
#line 2916 "string.m"
    {
#line 2916 "string.m"
      mercury__string__suffix_length_loop__ho33_4_p_0(mercury__string__S_3, mercury__string__End_20, &mercury__string__Index_21);
    }
#line 2914 "string.m"
    mercury__string__V_11_11 = (mercury__string__End_20 - mercury__string__Index_21);
#line 4369 "string.m"
    mercury__string__V_9_9 = (mercury__string__V_10_10 - mercury__string__V_11_11);
#line 3856 "string.m"
    {
#line 3856 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__V_9_9, &mercury__string__HeadVar__2_2, &mercury__string___RightString_33);
    }
#line 4365 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4365 "string.m"
  }
#line 798 "string.m"
}

#line 791 "string.m"
MR_String MR_CALL 
mercury__string__lstrip_1_f_0(
#line 791 "string.m"
  MR_String mercury__string__S_3)
#line 791 "string.m"
{
#line 4367 "string.m"
  {
#line 4367 "string.m"
    MR_bool mercury__string__succeeded;
#line 4367 "string.m"
    MR_String mercury__string__HeadVar__2_2;
#line 4367 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4367 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4367 "string.m"
    MR_Integer mercury__string__V_11_11;
#line 4367 "string.m"
    MR_Integer mercury__string__Length_28;
#line 4367 "string.m"
    MR_Integer mercury__string__LeftCount_29;
#line 3870 "string.m"
    MR_String mercury__string___LeftString_30;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 21619 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2400 "string.m"
}
#line 2899 "string.m"
    {
#line 2899 "string.m"
      mercury__string__prefix_length_loop__ho32_4_p_0(mercury__string__S_3, (MR_Integer) 0, &mercury__string__V_11_11);
    }
#line 4371 "string.m"
    mercury__string__V_9_9 = (mercury__string__V_10_10 - mercury__string__V_11_11);
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 21646 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_28  = Length;
#line 2400 "string.m"
}
#line 3869 "string.m"
    mercury__string__LeftCount_29 = (mercury__string__Length_28 - mercury__string__V_9_9);
#line 3870 "string.m"
    {
#line 3870 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__LeftCount_29, &mercury__string___LeftString_30, &mercury__string__HeadVar__2_2);
    }
#line 4367 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4367 "string.m"
  }
#line 791 "string.m"
}

#line 784 "string.m"
MR_String MR_CALL 
mercury__string__chomp_1_f_0(
#line 784 "string.m"
  MR_String mercury__string__S_3)
#line 784 "string.m"
{
#line 4356 "string.m"
  {
#line 4356 "string.m"
    MR_bool mercury__string__succeeded;
#line 4356 "string.m"
    MR_String mercury__string__Chomp_4;
#line 4356 "string.m"
    MR_Integer mercury__string__Offset_5;
#line 4354 "string.m"
    MR_Integer mercury__string__V_6_6;
#line 4354 "string.m"
    MR_Char mercury__string__V_8_8;
#line 4354 "string.m"
    MR_Integer mercury__string__Len_18;
#line 4354 "string.m"
    MR_Integer mercury__string__V_19_19;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 21704 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_6_6  = Length;
#line 2400 "string.m"
}
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 21724 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_18  = Length;
#line 2400 "string.m"
}
#line 2023 "string.m"
    mercury__string__V_19_19 = (mercury__string__V_6_6 - (MR_Integer) 1);
#line 2134 "string.m"
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__V_19_19 ;
	Length =  mercury__string__Len_18 ;
		{
#line 2134 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 21755 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2134 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4354 "string.m"
    if (mercury__string__succeeded)
#line 4354 "string.m"
      {
#line 2033 "string.m"
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_3 ;
	Index =  mercury__string__V_6_6 ;
		{
#line 2033 "string.m"

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

#line 21796 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Offset_5  = PrevIndex;
	 mercury__string__V_8_8  = Ch;
#line 2033 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4354 "string.m"
        if (mercury__string__succeeded)
#line 4354 "string.m"
          mercury__string__succeeded = ((MR_Char) 10 == mercury__string__V_8_8);
#line 4354 "string.m"
      }
#line 4356 "string.m"
    if (mercury__string__succeeded)
#line 3856 "string.m"
      {
#line 3856 "string.m"
        MR_String mercury__string___RightString_35;

#line 3856 "string.m"
        {
#line 3856 "string.m"
          mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__Offset_5, &mercury__string__Chomp_4, &mercury__string___RightString_35);
        }
#line 3856 "string.m"
      }
#line 4356 "string.m"
    else
#line 4357 "string.m"
      mercury__string__Chomp_4 = mercury__string__S_3;
#line 4356 "string.m"
    return mercury__string__Chomp_4;
#line 4356 "string.m"
  }
#line 784 "string.m"
}

#line 778 "string.m"
void MR_CALL 
mercury__string__pad_right_4_p_0(
#line 778 "string.m"
  MR_String mercury__string__String0_5,
#line 778 "string.m"
  MR_Char mercury__string__PadChar_6,
#line 778 "string.m"
  MR_Integer mercury__string__Width_7,
#line 778 "string.m"
  MR_String * mercury__string__String_8)
#line 778 "string.m"
{
#line 4343 "string.m"
  {
#line 4343 "string.m"
    MR_bool mercury__string__succeeded;
#line 4343 "string.m"
    MR_Integer mercury__string__Length_9;

#line 4344 "string.m"
    {
#line 4344 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String0_5, &mercury__string__Length_9);
    }
#line 4345 "string.m"
    mercury__string__succeeded = (mercury__string__Length_9 < mercury__string__Width_7);
#line 4349 "string.m"
    if (mercury__string__succeeded)
#line 4346 "string.m"
      {
#line 4346 "string.m"
        MR_Integer mercury__string__Count_10 = (mercury__string__Width_7 - mercury__string__Length_9);
#line 4346 "string.m"
        MR_String mercury__string__PadString_11;

#line 4347 "string.m"
        {
#line 4347 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__PadChar_6, mercury__string__Count_10, &mercury__string__PadString_11);
        }
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_right_4_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__String0_5 ;
	S2 =  mercury__string__PadString_11 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 21899 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__String_8  = S3;
#line 3149 "string.m"
}
#line 4346 "string.m"
      }
#line 4349 "string.m"
    else
#line 4350 "string.m"
      *mercury__string__String_8 = mercury__string__String0_5;
#line 4343 "string.m"
  }
#line 778 "string.m"
}

#line 777 "string.m"
MR_String MR_CALL 
mercury__string__pad_right_3_f_0(
#line 777 "string.m"
  MR_String mercury__string__S1_5,
#line 777 "string.m"
  MR_Char mercury__string__C_6,
#line 777 "string.m"
  MR_Integer mercury__string__N_7)
#line 777 "string.m"
{
#line 4343 "string.m"
  {
#line 4343 "string.m"
    MR_bool mercury__string__succeeded;
#line 4343 "string.m"
    MR_String mercury__string__S2_8;
#line 4343 "string.m"
    MR_Integer mercury__string__Length_13;

#line 4344 "string.m"
    {
#line 4344 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__S1_5, &mercury__string__Length_13);
    }
#line 4345 "string.m"
    mercury__string__succeeded = (mercury__string__Length_13 < mercury__string__N_7);
#line 4349 "string.m"
    if (mercury__string__succeeded)
#line 4346 "string.m"
      {
#line 4346 "string.m"
        MR_Integer mercury__string__Count_14 = (mercury__string__N_7 - mercury__string__Length_13);
#line 4346 "string.m"
        MR_String mercury__string__PadString_15;

#line 4347 "string.m"
        {
#line 4347 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__C_6, mercury__string__Count_14, &mercury__string__PadString_15);
        }
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_right_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_5 ;
	S2 =  mercury__string__PadString_15 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 21978 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_8  = S3;
#line 3149 "string.m"
}
#line 4346 "string.m"
      }
#line 4349 "string.m"
    else
#line 4350 "string.m"
      mercury__string__S2_8 = mercury__string__S1_5;
#line 4343 "string.m"
    return mercury__string__S2_8;
#line 4343 "string.m"
  }
#line 777 "string.m"
}

#line 769 "string.m"
void MR_CALL 
mercury__string__pad_left_4_p_0(
#line 769 "string.m"
  MR_String mercury__string__String0_5,
#line 769 "string.m"
  MR_Char mercury__string__PadChar_6,
#line 769 "string.m"
  MR_Integer mercury__string__Width_7,
#line 769 "string.m"
  MR_String * mercury__string__String_8)
#line 769 "string.m"
{
#line 4330 "string.m"
  {
#line 4330 "string.m"
    MR_bool mercury__string__succeeded;
#line 4330 "string.m"
    MR_Integer mercury__string__Length_9;

#line 4331 "string.m"
    {
#line 4331 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String0_5, &mercury__string__Length_9);
    }
#line 4332 "string.m"
    mercury__string__succeeded = (mercury__string__Length_9 < mercury__string__Width_7);
#line 4336 "string.m"
    if (mercury__string__succeeded)
#line 4333 "string.m"
      {
#line 4333 "string.m"
        MR_Integer mercury__string__Count_10 = (mercury__string__Width_7 - mercury__string__Length_9);
#line 4333 "string.m"
        MR_String mercury__string__PadString_11;

#line 4334 "string.m"
        {
#line 4334 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__PadChar_6, mercury__string__Count_10, &mercury__string__PadString_11);
        }
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_left_4_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_11 ;
	S2 =  mercury__string__String0_5 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 22059 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__String_8  = S3;
#line 3149 "string.m"
}
#line 4333 "string.m"
      }
#line 4336 "string.m"
    else
#line 4337 "string.m"
      *mercury__string__String_8 = mercury__string__String0_5;
#line 4330 "string.m"
  }
#line 769 "string.m"
}

#line 768 "string.m"
MR_String MR_CALL 
mercury__string__pad_left_3_f_0(
#line 768 "string.m"
  MR_String mercury__string__S1_5,
#line 768 "string.m"
  MR_Char mercury__string__C_6,
#line 768 "string.m"
  MR_Integer mercury__string__N_7)
#line 768 "string.m"
{
#line 4330 "string.m"
  {
#line 4330 "string.m"
    MR_bool mercury__string__succeeded;
#line 4330 "string.m"
    MR_String mercury__string__S2_8;
#line 4330 "string.m"
    MR_Integer mercury__string__Length_13;

#line 4331 "string.m"
    {
#line 4331 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__S1_5, &mercury__string__Length_13);
    }
#line 4332 "string.m"
    mercury__string__succeeded = (mercury__string__Length_13 < mercury__string__N_7);
#line 4336 "string.m"
    if (mercury__string__succeeded)
#line 4333 "string.m"
      {
#line 4333 "string.m"
        MR_Integer mercury__string__Count_14 = (mercury__string__N_7 - mercury__string__Length_13);
#line 4333 "string.m"
        MR_String mercury__string__PadString_15;

#line 4334 "string.m"
        {
#line 4334 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__C_6, mercury__string__Count_14, &mercury__string__PadString_15);
        }
#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_left_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_15 ;
	S2 =  mercury__string__S1_5 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 22138 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_8  = S3;
#line 3149 "string.m"
}
#line 4333 "string.m"
      }
#line 4336 "string.m"
    else
#line 4337 "string.m"
      mercury__string__S2_8 = mercury__string__S1_5;
#line 4330 "string.m"
    return mercury__string__S2_8;
#line 4330 "string.m"
  }
#line 768 "string.m"
}

#line 760 "string.m"
MR_bool MR_CALL 
mercury__string__to_lower_2_p_1(
#line 760 "string.m"
  MR_String mercury__string__StrIn_3,
#line 760 "string.m"
  MR_String mercury__string__StrOut_4)
#line 760 "string.m"
{
#line 4313 "string.m"
  {
#line 4313 "string.m"
    MR_bool mercury__string__succeeded;
#line 4313 "string.m"
    MR_Word mercury__string__List_5;
#line 4313 "string.m"
    MR_Word mercury__string__ListLow_6;
#line 4313 "string.m"
    MR_String mercury__string__V_7_7;
#line 1442 "string.m"
    MR_String mercury__string__Str0_20;

#line 1364 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1364 "string.m"
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
#line 22204 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1364 "string.m"
}
#line 4315 "string.m"
    {
#line 4315 "string.m"
      mercury__string__char_list_to_lower_2_p_0(mercury__string__List_5, &mercury__string__ListLow_6);
    }
#line 1440 "string.m"
    {
#line 1440 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListLow_6, &mercury__string__Str0_20);
    }
#line 1442 "string.m"
    if (mercury__string__succeeded)
#line 1441 "string.m"
      mercury__string__V_7_7 = mercury__string__Str0_20;
#line 1442 "string.m"
    else
#line 1443 "string.m"
      {
#line 1443 "string.m"
        {
#line 1443 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1443 "string.m"
      }
#line 4316 "string.m"
    mercury__string__succeeded = (strcmp(mercury__string__StrOut_4, mercury__string__V_7_7) == 0);
#line 4313 "string.m"
    return mercury__string__succeeded;
#line 4313 "string.m"
  }
#line 760 "string.m"
}

#line 759 "string.m"
void MR_CALL 
mercury__string__to_lower_2_p_0(
#line 759 "string.m"
  MR_String mercury__string__StrIn_3,
#line 759 "string.m"
  MR_String * mercury__string__StrOut_4)
#line 759 "string.m"
{
#line 4313 "string.m"
  {
#line 4313 "string.m"
    MR_bool mercury__string__succeeded;
#line 4313 "string.m"
    MR_Word mercury__string__List_5;
#line 4313 "string.m"
    MR_Word mercury__string__ListLow_6;
#line 1442 "string.m"
    MR_String mercury__string__Str0_19;

#line 1364 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1364 "string.m"
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
#line 22289 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1364 "string.m"
}
#line 4315 "string.m"
    {
#line 4315 "string.m"
      mercury__string__char_list_to_lower_2_p_0(mercury__string__List_5, &mercury__string__ListLow_6);
    }
#line 1440 "string.m"
    {
#line 1440 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListLow_6, &mercury__string__Str0_19);
    }
#line 1442 "string.m"
    if (mercury__string__succeeded)
#line 1441 "string.m"
      *mercury__string__StrOut_4 = mercury__string__Str0_19;
#line 1442 "string.m"
    else
#line 1443 "string.m"
      {
#line 1443 "string.m"
        {
#line 1443 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1443 "string.m"
          return;
        }
#line 1443 "string.m"
      }
#line 4313 "string.m"
  }
#line 759 "string.m"
}

#line 757 "string.m"
MR_String MR_CALL 
mercury__string__to_lower_1_f_0(
#line 757 "string.m"
  MR_String mercury__string__S1_3)
#line 757 "string.m"
{
#line 4313 "string.m"
  {
#line 4313 "string.m"
    MR_bool mercury__string__succeeded;
#line 4313 "string.m"
    MR_String mercury__string__S2_4;
#line 4313 "string.m"
    MR_Word mercury__string__List_7;
#line 4313 "string.m"
    MR_Word mercury__string__ListLow_8;
#line 1442 "string.m"
    MR_String mercury__string__Str0_21;

#line 1364 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_lower_1_f_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__S1_3 ;
		{
#line 1364 "string.m"
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
#line 22372 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_7  = CharList;
#line 1364 "string.m"
}
#line 4315 "string.m"
    {
#line 4315 "string.m"
      mercury__string__char_list_to_lower_2_p_0(mercury__string__List_7, &mercury__string__ListLow_8);
    }
#line 1440 "string.m"
    {
#line 1440 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListLow_8, &mercury__string__Str0_21);
    }
#line 1442 "string.m"
    if (mercury__string__succeeded)
#line 1441 "string.m"
      mercury__string__S2_4 = mercury__string__Str0_21;
#line 1442 "string.m"
    else
#line 1443 "string.m"
      {
#line 1443 "string.m"
        {
#line 1443 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1443 "string.m"
      }
#line 4313 "string.m"
    return mercury__string__S2_4;
#line 4313 "string.m"
  }
#line 757 "string.m"
}

#line 752 "string.m"
MR_bool MR_CALL 
mercury__string__to_upper_2_p_1(
#line 752 "string.m"
  MR_String mercury__string__StrIn_3,
#line 752 "string.m"
  MR_String mercury__string__StrOut_4)
#line 752 "string.m"
{
#line 4298 "string.m"
  {
#line 4298 "string.m"
    MR_bool mercury__string__succeeded;
#line 4298 "string.m"
    MR_Word mercury__string__List_5;
#line 4298 "string.m"
    MR_Word mercury__string__ListUpp_6;
#line 4298 "string.m"
    MR_String mercury__string__V_7_7;
#line 1442 "string.m"
    MR_String mercury__string__Str0_20;

#line 1364 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1364 "string.m"
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
#line 22457 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1364 "string.m"
}
#line 4300 "string.m"
    {
#line 4300 "string.m"
      mercury__string__char_list_to_upper_2_p_0(mercury__string__List_5, &mercury__string__ListUpp_6);
    }
#line 1440 "string.m"
    {
#line 1440 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListUpp_6, &mercury__string__Str0_20);
    }
#line 1442 "string.m"
    if (mercury__string__succeeded)
#line 1441 "string.m"
      mercury__string__V_7_7 = mercury__string__Str0_20;
#line 1442 "string.m"
    else
#line 1443 "string.m"
      {
#line 1443 "string.m"
        {
#line 1443 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1443 "string.m"
      }
#line 4301 "string.m"
    mercury__string__succeeded = (strcmp(mercury__string__StrOut_4, mercury__string__V_7_7) == 0);
#line 4298 "string.m"
    return mercury__string__succeeded;
#line 4298 "string.m"
  }
#line 752 "string.m"
}

#line 751 "string.m"
void MR_CALL 
mercury__string__to_upper_2_p_0(
#line 751 "string.m"
  MR_String mercury__string__StrIn_3,
#line 751 "string.m"
  MR_String * mercury__string__StrOut_4)
#line 751 "string.m"
{
#line 4298 "string.m"
  {
#line 4298 "string.m"
    MR_bool mercury__string__succeeded;
#line 4298 "string.m"
    MR_Word mercury__string__List_5;
#line 4298 "string.m"
    MR_Word mercury__string__ListUpp_6;
#line 1442 "string.m"
    MR_String mercury__string__Str0_19;

#line 1364 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1364 "string.m"
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
#line 22542 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1364 "string.m"
}
#line 4300 "string.m"
    {
#line 4300 "string.m"
      mercury__string__char_list_to_upper_2_p_0(mercury__string__List_5, &mercury__string__ListUpp_6);
    }
#line 1440 "string.m"
    {
#line 1440 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListUpp_6, &mercury__string__Str0_19);
    }
#line 1442 "string.m"
    if (mercury__string__succeeded)
#line 1441 "string.m"
      *mercury__string__StrOut_4 = mercury__string__Str0_19;
#line 1442 "string.m"
    else
#line 1443 "string.m"
      {
#line 1443 "string.m"
        {
#line 1443 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1443 "string.m"
          return;
        }
#line 1443 "string.m"
      }
#line 4298 "string.m"
  }
#line 751 "string.m"
}

#line 749 "string.m"
MR_String MR_CALL 
mercury__string__to_upper_1_f_0(
#line 749 "string.m"
  MR_String mercury__string__S1_3)
#line 749 "string.m"
{
#line 4298 "string.m"
  {
#line 4298 "string.m"
    MR_bool mercury__string__succeeded;
#line 4298 "string.m"
    MR_String mercury__string__S2_4;
#line 4298 "string.m"
    MR_Word mercury__string__List_7;
#line 4298 "string.m"
    MR_Word mercury__string__ListUpp_8;
#line 1442 "string.m"
    MR_String mercury__string__Str0_21;

#line 1364 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_upper_1_f_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__S1_3 ;
		{
#line 1364 "string.m"
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
#line 22625 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_7  = CharList;
#line 1364 "string.m"
}
#line 4300 "string.m"
    {
#line 4300 "string.m"
      mercury__string__char_list_to_upper_2_p_0(mercury__string__List_7, &mercury__string__ListUpp_8);
    }
#line 1440 "string.m"
    {
#line 1440 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListUpp_8, &mercury__string__Str0_21);
    }
#line 1442 "string.m"
    if (mercury__string__succeeded)
#line 1441 "string.m"
      mercury__string__S2_4 = mercury__string__Str0_21;
#line 1442 "string.m"
    else
#line 1443 "string.m"
      {
#line 1443 "string.m"
        {
#line 1443 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1443 "string.m"
      }
#line 4298 "string.m"
    return mercury__string__S2_4;
#line 4298 "string.m"
  }
#line 749 "string.m"
}

#line 744 "string.m"
void MR_CALL 
mercury__string__uncapitalize_first_2_p_0(
#line 744 "string.m"
  MR_String mercury__string__S0_3,
#line 744 "string.m"
  MR_String * mercury__string__S_4)
#line 744 "string.m"
{
#line 4291 "string.m"
  {
#line 4291 "string.m"
    MR_bool mercury__string__succeeded;
#line 4291 "string.m"
    MR_Char mercury__string__C_5;
#line 4291 "string.m"
    MR_String mercury__string__S1_6;

#line 3627 "string.m"
{
#define MR_PROC_LABEL mercury__string__uncapitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S0_3 ;
		{
#line 3627 "string.m"
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
#line 22709 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__C_5  = First;
	 mercury__string__S1_6  = Rest;
#line 3627 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4291 "string.m"
    if (mercury__string__succeeded)
#line 4289 "string.m"
      {
#line 4289 "string.m"
        MR_Char mercury__string__LowerC_7;
#line 98 "char.opt"
        MR_Char mercury__string__LowerChar_5_10;

#line 95 "char.opt"
        {
#line 95 "char.opt"
          mercury__string__succeeded = mercury__char__lower_upper_2_p_1(&mercury__string__LowerChar_5_10, mercury__string__C_5);
        }
#line 98 "char.opt"
        if (mercury__string__succeeded)
#line 97 "char.opt"
          mercury__string__LowerC_7 = mercury__string__LowerChar_5_10;
#line 98 "char.opt"
        else
#line 99 "char.opt"
          mercury__string__LowerC_7 = mercury__string__C_5;
#line 3699 "string.m"
{
#define MR_PROC_LABEL mercury__string__uncapitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__LowerC_7 ;
	Rest =  mercury__string__S1_6 ;
		{
#line 3699 "string.m"
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}
#line 22761 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S_4  = Str;
#line 3699 "string.m"
}
#line 4289 "string.m"
      }
#line 4291 "string.m"
    else
#line 4292 "string.m"
      *mercury__string__S_4 = mercury__string__S0_3;
#line 4291 "string.m"
  }
#line 744 "string.m"
}

#line 743 "string.m"
MR_String MR_CALL 
mercury__string__uncapitalize_first_1_f_0(
#line 743 "string.m"
  MR_String mercury__string__S1_3)
#line 743 "string.m"
{
#line 4285 "string.m"
  {
#line 4285 "string.m"
    MR_bool mercury__string__succeeded;
#line 4285 "string.m"
    MR_String mercury__string__S2_4;

#line 4285 "string.m"
    {
#line 4285 "string.m"
      mercury__string__uncapitalize_first_2_p_0(mercury__string__S1_3, &mercury__string__S2_4);
    }
#line 4285 "string.m"
    return mercury__string__S2_4;
#line 4285 "string.m"
  }
#line 743 "string.m"
}

#line 738 "string.m"
void MR_CALL 
mercury__string__capitalize_first_2_p_0(
#line 738 "string.m"
  MR_String mercury__string__S0_3,
#line 738 "string.m"
  MR_String * mercury__string__S_4)
#line 738 "string.m"
{
#line 4280 "string.m"
  {
#line 4280 "string.m"
    MR_bool mercury__string__succeeded;
#line 4280 "string.m"
    MR_Char mercury__string__C_5;
#line 4280 "string.m"
    MR_String mercury__string__S1_6;

#line 3627 "string.m"
{
#define MR_PROC_LABEL mercury__string__capitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S0_3 ;
		{
#line 3627 "string.m"
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
#line 22850 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__C_5  = First;
	 mercury__string__S1_6  = Rest;
#line 3627 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4280 "string.m"
    if (mercury__string__succeeded)
#line 4278 "string.m"
      {
#line 4278 "string.m"
        MR_Char mercury__string__UpperC_7;
#line 88 "char.opt"
        MR_Char mercury__string__UpperChar_5_10;

#line 85 "char.opt"
        {
#line 85 "char.opt"
          mercury__string__succeeded = mercury__char__lower_upper_2_p_0(mercury__string__C_5, &mercury__string__UpperChar_5_10);
        }
#line 88 "char.opt"
        if (mercury__string__succeeded)
#line 87 "char.opt"
          mercury__string__UpperC_7 = mercury__string__UpperChar_5_10;
#line 88 "char.opt"
        else
#line 89 "char.opt"
          mercury__string__UpperC_7 = mercury__string__C_5;
#line 3699 "string.m"
{
#define MR_PROC_LABEL mercury__string__capitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__UpperC_7 ;
	Rest =  mercury__string__S1_6 ;
		{
#line 3699 "string.m"
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}
#line 22902 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S_4  = Str;
#line 3699 "string.m"
}
#line 4278 "string.m"
      }
#line 4280 "string.m"
    else
#line 4281 "string.m"
      *mercury__string__S_4 = mercury__string__S0_3;
#line 4280 "string.m"
  }
#line 738 "string.m"
}

#line 737 "string.m"
MR_String MR_CALL 
mercury__string__capitalize_first_1_f_0(
#line 737 "string.m"
  MR_String mercury__string__S1_3)
#line 737 "string.m"
{
#line 4274 "string.m"
  {
#line 4274 "string.m"
    MR_bool mercury__string__succeeded;
#line 4274 "string.m"
    MR_String mercury__string__S2_4;

#line 4274 "string.m"
    {
#line 4274 "string.m"
      mercury__string__capitalize_first_2_p_0(mercury__string__S1_3, &mercury__string__S2_4);
    }
#line 4274 "string.m"
    return mercury__string__S2_4;
#line 4274 "string.m"
  }
#line 737 "string.m"
}

#line 727 "string.m"
MR_String MR_CALL 
mercury__string__remove_suffix_if_present_2_f_0(
#line 727 "string.m"
  MR_String mercury__string__Suffix_4,
#line 727 "string.m"
  MR_String mercury__string__String_5)
#line 727 "string.m"
{
#line 4259 "string.m"
  {
#line 4259 "string.m"
    MR_bool mercury__string__succeeded;
#line 4259 "string.m"
    MR_String mercury__string__Out_6;
#line 4259 "string.m"
    MR_Integer mercury__string__LeftCount_7;
#line 4259 "string.m"
    MR_String mercury__string__LeftString_8;
#line 4259 "string.m"
    MR_String mercury__string__RightString_9;
#line 4259 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4259 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_if_present_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 22985 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2400 "string.m"
}
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_if_present_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_4 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 23005 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2400 "string.m"
}
#line 4260 "string.m"
    mercury__string__LeftCount_7 = (mercury__string__V_10_10 - mercury__string__V_11_11);
#line 4261 "string.m"
    {
#line 4261 "string.m"
      mercury__string__split_4_p_0(mercury__string__String_5, mercury__string__LeftCount_7, &mercury__string__LeftString_8, &mercury__string__RightString_9);
    }
#line 4262 "string.m"
    mercury__string__succeeded = (strcmp(mercury__string__RightString_9, mercury__string__Suffix_4) == 0);
#line 4264 "string.m"
    if (mercury__string__succeeded)
#line 4263 "string.m"
      mercury__string__Out_6 = mercury__string__LeftString_8;
#line 4264 "string.m"
    else
#line 4265 "string.m"
      mercury__string__Out_6 = mercury__string__String_5;
#line 4259 "string.m"
    return mercury__string__Out_6;
#line 4259 "string.m"
  }
#line 727 "string.m"
}

#line 722 "string.m"
MR_String MR_CALL 
mercury__string__det_remove_suffix_2_f_0(
#line 722 "string.m"
  MR_String mercury__string__String_4,
#line 722 "string.m"
  MR_String mercury__string__Suffix_5)
#line 722 "string.m"
{
#line 4255 "string.m"
  {
#line 4255 "string.m"
    MR_bool mercury__string__succeeded;
#line 4255 "string.m"
    MR_String mercury__string__StringWithoutSuffix_6;
#line 4255 "string.m"
    MR_String mercury__string__StringWithoutSuffixPrime_7;

#line 4253 "string.m"
    {
#line 4253 "string.m"
      mercury__string__succeeded = mercury__string__remove_suffix_3_p_0(mercury__string__String_4, mercury__string__Suffix_5, &mercury__string__StringWithoutSuffixPrime_7);
    }
#line 4255 "string.m"
    if (mercury__string__succeeded)
#line 4254 "string.m"
      mercury__string__StringWithoutSuffix_6 = mercury__string__StringWithoutSuffixPrime_7;
#line 4255 "string.m"
    else
#line 4256 "string.m"
      {
#line 4256 "string.m"
        {
#line 4256 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_remove_suffix: string does not have given suffix");
        }
#line 4256 "string.m"
      }
#line 4255 "string.m"
    return mercury__string__StringWithoutSuffix_6;
#line 4255 "string.m"
  }
#line 722 "string.m"
}

#line 717 "string.m"
MR_bool MR_CALL 
mercury__string__remove_suffix_3_p_0(
#line 717 "string.m"
  MR_String mercury__string__String_4,
#line 717 "string.m"
  MR_String mercury__string__Suffix_5,
#line 717 "string.m"
  MR_String * mercury__string__StringWithoutSuffix_6)
#line 717 "string.m"
{
#line 4248 "string.m"
  {
#line 4248 "string.m"
    MR_bool mercury__string__succeeded;
#line 4248 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4248 "string.m"
    MR_Integer mercury__string__V_8_8;
#line 4248 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4248 "string.m"
    MR_Integer mercury__string__Len_12;
#line 4248 "string.m"
    MR_Integer mercury__string__PreLen_13;
#line 4248 "string.m"
    MR_Integer mercury__string__V_14_14;
#line 4248 "string.m"
    MR_Integer mercury__string__V_15_15;
#line 3856 "string.m"
    MR_String mercury__string___RightString_43;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 23126 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_12  = Length;
#line 2400 "string.m"
}
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_5 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 23146 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_13  = Length;
#line 2400 "string.m"
}
#line 4208 "string.m"
    mercury__string__succeeded = (mercury__string__PreLen_13 <= mercury__string__Len_12);
#line 4248 "string.m"
    if (mercury__string__succeeded)
#line 4248 "string.m"
      {
#line 4209 "string.m"
        mercury__string__V_14_14 = (MR_Integer) 0;
#line 4209 "string.m"
        mercury__string__V_15_15 = (mercury__string__Len_12 - mercury__string__PreLen_13);
#line 4209 "string.m"
        {
#line 4209 "string.m"
          mercury__string__succeeded = mercury__string__suffix_2_iiii_5_p_0(mercury__string__String_4, mercury__string__Suffix_5, mercury__string__V_14_14, mercury__string__V_15_15, mercury__string__PreLen_13);
        }
#line 4248 "string.m"
        if (mercury__string__succeeded)
#line 4248 "string.m"
          {
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 23185 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = Length;
#line 2400 "string.m"
}
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_5 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 23205 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_9_9  = Length;
#line 2400 "string.m"
}
#line 4250 "string.m"
            mercury__string__V_7_7 = (mercury__string__V_8_8 - mercury__string__V_9_9);
#line 3856 "string.m"
            {
#line 3856 "string.m"
              mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__V_7_7, mercury__string__StringWithoutSuffix_6, &mercury__string___RightString_43);
            }
#line 3856 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4248 "string.m"
          }
#line 4248 "string.m"
      }
#line 4248 "string.m"
    return mercury__string__succeeded;
#line 4248 "string.m"
  }
#line 717 "string.m"
}

#line 710 "string.m"
MR_String MR_CALL 
mercury__string__remove_prefix_if_present_2_f_0(
#line 710 "string.m"
  MR_String mercury__string__Prefix_4,
#line 710 "string.m"
  MR_String mercury__string__String_5)
#line 710 "string.m"
{
#line 4244 "string.m"
  {
#line 4244 "string.m"
    MR_bool mercury__string__succeeded;
#line 4244 "string.m"
    MR_String mercury__string__Out_6;
#line 4244 "string.m"
    MR_String mercury__string__Suffix_7;

#line 3097 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_prefix_if_present_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__Prefix_4 ;
	S3 =  mercury__string__String_5 ;
		{
#line 3097 "string.m"
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
#line 23280 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Suffix_7  = S2;
#line 3097 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4244 "string.m"
    if (mercury__string__succeeded)
#line 4243 "string.m"
      mercury__string__Out_6 = mercury__string__Suffix_7;
#line 4244 "string.m"
    else
#line 4245 "string.m"
      mercury__string__Out_6 = mercury__string__String_5;
#line 4244 "string.m"
    return mercury__string__Out_6;
#line 4244 "string.m"
  }
#line 710 "string.m"
}

#line 705 "string.m"
MR_bool MR_CALL 
mercury__string__remove_prefix_3_p_0(
#line 705 "string.m"
  MR_String mercury__string__Prefix_4,
#line 705 "string.m"
  MR_String mercury__string__String_5,
#line 705 "string.m"
  MR_String * mercury__string__Suffix_6)
#line 705 "string.m"
{
#line 3093 "string.m"
  {
#line 3093 "string.m"
    MR_bool mercury__string__succeeded;

#line 3097 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_prefix_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__Prefix_4 ;
	S3 =  mercury__string__String_5 ;
		{
#line 3097 "string.m"
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
#line 23351 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Suffix_6  = S2;
#line 3097 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3093 "string.m"
    return mercury__string__succeeded;
#line 3093 "string.m"
  }
#line 705 "string.m"
}

#line 698 "string.m"
void MR_CALL 
mercury__string__suffix_2_p_1(
#line 698 "string.m"
  MR_String mercury__string__String_1,
#line 698 "string.m"
  MR_String * mercury__string__Suffix_2,
#line 698 "string.m"
  MR_Cont mercury__string__cont,
#line 698 "string.m"
  void * mercury__string__cont_env_ptr)
#line 698 "string.m"
{
#line 4210 "string.m"
  {
#line 4210 "string.m"
    MR_bool mercury__string__succeeded;
#line 4210 "string.m"
    MR_Integer mercury__string__Len_11;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 23401 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_11  = Length;
#line 2400 "string.m"
}
#line 4212 "string.m"
    {
#line 4212 "string.m"
      mercury__string__suffix_2_ioii_4_p_0(mercury__string__String_1, mercury__string__Suffix_2, mercury__string__Len_11, mercury__string__Len_11, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4212 "string.m"
      return;
    }
#line 4210 "string.m"
  }
#line 698 "string.m"
}

#line 697 "string.m"
MR_bool MR_CALL 
mercury__string__suffix_2_p_0(
#line 697 "string.m"
  MR_String mercury__string__String_1,
#line 697 "string.m"
  MR_String mercury__string__Suffix_2)
#line 697 "string.m"
{
#line 4205 "string.m"
  {
#line 4205 "string.m"
    MR_bool mercury__string__succeeded;
#line 4205 "string.m"
    MR_Integer mercury__string__Len_5;
#line 4205 "string.m"
    MR_Integer mercury__string__PreLen_6;
#line 4205 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4205 "string.m"
    MR_Integer mercury__string__V_8_8;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 23455 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_5  = Length;
#line 2400 "string.m"
}
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_2 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 23475 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_6  = Length;
#line 2400 "string.m"
}
#line 4208 "string.m"
    mercury__string__succeeded = (mercury__string__PreLen_6 <= mercury__string__Len_5);
#line 4205 "string.m"
    if (mercury__string__succeeded)
#line 4205 "string.m"
      {
#line 4209 "string.m"
        mercury__string__V_7_7 = (MR_Integer) 0;
#line 4209 "string.m"
        mercury__string__V_8_8 = (mercury__string__Len_5 - mercury__string__PreLen_6);
#line 4209 "string.m"
        {
#line 4209 "string.m"
          return mercury__string__succeeded = mercury__string__suffix_2_iiii_5_p_0(mercury__string__String_1, mercury__string__Suffix_2, mercury__string__V_7_7, mercury__string__V_8_8, mercury__string__PreLen_6);
        }
#line 4205 "string.m"
      }
#line 4205 "string.m"
    return mercury__string__succeeded;
#line 4205 "string.m"
  }
#line 697 "string.m"
}

#line 691 "string.m"
void MR_CALL 
mercury__string__prefix_2_p_1(
#line 691 "string.m"
  MR_String mercury__string__String_1,
#line 691 "string.m"
  MR_String * mercury__string__Prefix_2,
#line 691 "string.m"
  MR_Cont mercury__string__cont,
#line 691 "string.m"
  void * mercury__string__cont_env_ptr)
#line 691 "string.m"
{
#line 4179 "string.m"
  {
#line 4179 "string.m"
    MR_bool mercury__string__succeeded;

#line 4180 "string.m"
    {
#line 4180 "string.m"
      mercury__string__prefix_2_ioi_3_p_0(mercury__string__String_1, mercury__string__Prefix_2, (MR_Integer) 0, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4180 "string.m"
      return;
    }
#line 4179 "string.m"
  }
#line 691 "string.m"
}

#line 690 "string.m"
MR_bool MR_CALL 
mercury__string__prefix_2_p_0(
#line 690 "string.m"
  MR_String mercury__string__String_1,
#line 690 "string.m"
  MR_String mercury__string__Prefix_2)
#line 690 "string.m"
{
#line 4174 "string.m"
  {
#line 4174 "string.m"
    MR_bool mercury__string__succeeded;
#line 4174 "string.m"
    MR_Integer mercury__string__Len_5;
#line 4174 "string.m"
    MR_Integer mercury__string__PreLen_6;
#line 4174 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4174 "string.m"
    MR_Integer mercury__string__V_8_8;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 23571 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_5  = Length;
#line 2400 "string.m"
}
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Prefix_2 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 23591 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_6  = Length;
#line 2400 "string.m"
}
#line 4177 "string.m"
    mercury__string__succeeded = (mercury__string__PreLen_6 <= mercury__string__Len_5);
#line 4174 "string.m"
    if (mercury__string__succeeded)
#line 4174 "string.m"
      {
#line 4178 "string.m"
        mercury__string__V_8_8 = (MR_Integer) 1;
#line 4178 "string.m"
        mercury__string__V_7_7 = (mercury__string__PreLen_6 - mercury__string__V_8_8);
#line 4178 "string.m"
        {
#line 4178 "string.m"
          return mercury__string__succeeded = mercury__string__prefix_2_iii_3_p_0(mercury__string__String_1, mercury__string__Prefix_2, mercury__string__V_7_7);
        }
#line 4174 "string.m"
      }
#line 4174 "string.m"
    return mercury__string__succeeded;
#line 4174 "string.m"
  }
#line 690 "string.m"
}

#line 679 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_string_2_f_0(
#line 679 "string.m"
  MR_String mercury__string__Needle_4,
#line 679 "string.m"
  MR_String mercury__string__Total_5)
#line 679 "string.m"
{
#line 4151 "string.m"
  {
#line 4151 "string.m"
    MR_bool mercury__string__succeeded;
#line 4151 "string.m"
    MR_Word mercury__string__HeadVar__3_3;
#line 4151 "string.m"
    MR_Integer mercury__string__V_7_7;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Needle_4 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 23653 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = Length;
#line 2400 "string.m"
}
#line 4152 "string.m"
    {
#line 4152 "string.m"
      return mercury__string__HeadVar__3_3 = mercury__string__split_at_string_loop_4_f_0((MR_Integer) 0, mercury__string__V_7_7, mercury__string__Needle_4, mercury__string__Total_5);
    }
#line 4151 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4151 "string.m"
  }
#line 679 "string.m"
}

#line 669 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_char_2_f_0(
#line 669 "string.m"
  MR_Char mercury__string__C_4,
#line 669 "string.m"
  MR_String mercury__string__String_5)
#line 669 "string.m"
{
#line 4148 "string.m"
  {
#line 4148 "string.m"
    MR_bool mercury__string__succeeded;
#line 4148 "string.m"
    MR_Word mercury__string__HeadVar__3_3;
#line 4148 "string.m"
    MR_Integer mercury__string__Len_12;
#line 4148 "string.m"
    MR_Word mercury__string__V_14_14;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_char_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 23705 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_12  = Length;
#line 2400 "string.m"
}
#line 4118 "string.m"
    mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4118 "string.m"
    {
#line 4118 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_49_95_95_91_50_93_95_48_6_p_0(mercury__string__C_4, mercury__string__String_5, mercury__string__Len_12, mercury__string__Len_12, mercury__string__V_14_14, &mercury__string__HeadVar__3_3);
    }
#line 4148 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4148 "string.m"
  }
#line 669 "string.m"
}

#line 664 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_separator_2_f_0(
#line 664 "string.m"
  MR_Word mercury__string__DelimP_4,
#line 664 "string.m"
  MR_String mercury__string__String_5)
#line 664 "string.m"
{
#line 4116 "string.m"
  {
#line 4116 "string.m"
    MR_bool mercury__string__succeeded;
#line 4116 "string.m"
    MR_Word mercury__string__Substrings_6;
#line 4116 "string.m"
    MR_Integer mercury__string__Len_7;
#line 4116 "string.m"
    MR_Word mercury__string__V_9_9;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_separator_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 23759 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_7  = Length;
#line 2400 "string.m"
}
#line 4118 "string.m"
    mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4118 "string.m"
    {
#line 4118 "string.m"
      mercury__string__split_at_separator_loop_6_p_0(mercury__string__DelimP_4, mercury__string__String_5, mercury__string__Len_7, mercury__string__Len_7, mercury__string__V_9_9, &mercury__string__Substrings_6);
    }
#line 4116 "string.m"
    return mercury__string__Substrings_6;
#line 4116 "string.m"
  }
#line 664 "string.m"
}

#line 652 "string.m"
MR_Word MR_CALL 
mercury__string__words_1_f_0(
#line 652 "string.m"
  MR_String mercury__string__String_3)
#line 652 "string.m"
{
#line 4079 "string.m"
  {
#line 4079 "string.m"
    MR_bool mercury__string__succeeded;
#line 4079 "string.m"
    MR_Word mercury__string__HeadVar__2_2;
#line 4079 "string.m"
    MR_Integer mercury__string__WordStart_10;

#line 4076 "string.m"
    {
#line 4076 "string.m"
      mercury__string__next_boundary__ho35_4_p_0(mercury__string__String_3, (MR_Integer) 0, &mercury__string__WordStart_10);
    }
#line 4077 "string.m"
    {
#line 4077 "string.m"
      mercury__string__words_loop__ho36_4_p_0(mercury__string__String_3, mercury__string__WordStart_10, &mercury__string__HeadVar__2_2);
    }
#line 4079 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4079 "string.m"
  }
#line 652 "string.m"
}

#line 647 "string.m"
MR_Word MR_CALL 
mercury__string__words_separator_2_f_0(
#line 647 "string.m"
  MR_Word mercury__string__SepP_4,
#line 647 "string.m"
  MR_String mercury__string__String_5)
#line 647 "string.m"
{
#line 4075 "string.m"
  {
#line 4075 "string.m"
    MR_bool mercury__string__succeeded;
#line 4075 "string.m"
    MR_Word mercury__string__Words_6;
#line 4075 "string.m"
    MR_Integer mercury__string__WordStart_7;

#line 4076 "string.m"
    {
#line 4076 "string.m"
      mercury__string__next_boundary_4_p_0(mercury__string__SepP_4, mercury__string__String_5, (MR_Integer) 0, &mercury__string__WordStart_7);
    }
#line 4077 "string.m"
    {
#line 4077 "string.m"
      mercury__string__words_loop_4_p_0(mercury__string__SepP_4, mercury__string__String_5, mercury__string__WordStart_7, &mercury__string__Words_6);
    }
#line 4075 "string.m"
    return mercury__string__Words_6;
#line 4075 "string.m"
  }
#line 647 "string.m"
}

#line 634 "string.m"
void MR_CALL 
mercury__string__unsafe_substring_4_p_0(
#line 634 "string.m"
  MR_String mercury__string__Str_5,
#line 634 "string.m"
  MR_Integer mercury__string__Start_6,
#line 634 "string.m"
  MR_Integer mercury__string__Count_7,
#line 634 "string.m"
  MR_String * mercury__string__SubString_8)
#line 634 "string.m"
{
#line 4070 "string.m"
  {
#line 4070 "string.m"
    MR_bool mercury__string__succeeded;
#line 4070 "string.m"
    MR_Integer mercury__string__V_9_9 = (mercury__string__Start_6 + mercury__string__Count_7);

#line 4039 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_substring_4_p_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_5 ;
	Start =  mercury__string__Start_6 ;
	End =  mercury__string__V_9_9 ;
		{
#line 4039 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 23890 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_8  = SubString;
#line 4039 "string.m"
}
#line 4070 "string.m"
  }
#line 634 "string.m"
}

#line 633 "string.m"
MR_String MR_CALL 
mercury__string__unsafe_substring_3_f_0(
#line 633 "string.m"
  MR_String mercury__string__Str_5,
#line 633 "string.m"
  MR_Integer mercury__string__Start_6,
#line 633 "string.m"
  MR_Integer mercury__string__Count_7)
#line 633 "string.m"
{
#line 4067 "string.m"
  {
#line 4067 "string.m"
    MR_bool mercury__string__succeeded;
#line 4067 "string.m"
    MR_String mercury__string__SubString_8;
#line 4067 "string.m"
    MR_Integer mercury__string__V_9_9 = (mercury__string__Start_6 + mercury__string__Count_7);

#line 4039 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_substring_3_f_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  mercury__string__Str_5 ;
	Start =  mercury__string__Start_6 ;
	End =  mercury__string__V_9_9 ;
		{
#line 4039 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 23944 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__SubString_8  = SubString;
#line 4039 "string.m"
}
#line 4067 "string.m"
    return mercury__string__SubString_8;
#line 4067 "string.m"
  }
#line 633 "string.m"
}

#line 626 "string.m"
void MR_CALL 
mercury__string__unsafe_between_4_p_0(
#line 626 "string.m"
  MR_String mercury__string__Str_1,
#line 626 "string.m"
  MR_Integer mercury__string__Start_2,
#line 626 "string.m"
  MR_Integer mercury__string__End_3,
#line 626 "string.m"
  MR_String * mercury__string__SubString_4)
#line 626 "string.m"
{
#line 4035 "string.m"
  {
#line 4035 "string.m"
    MR_bool mercury__string__succeeded;

#line 4039 "string.m"
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
#line 4039 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 23998 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_4  = SubString;
#line 4039 "string.m"
}
#line 4035 "string.m"
  }
#line 626 "string.m"
}

#line 625 "string.m"
MR_String MR_CALL 
mercury__string__unsafe_between_3_f_0(
#line 625 "string.m"
  MR_String mercury__string__Str_5,
#line 625 "string.m"
  MR_Integer mercury__string__Start_6,
#line 625 "string.m"
  MR_Integer mercury__string__End_7)
#line 625 "string.m"
{
#line 4035 "string.m"
  {
#line 4035 "string.m"
    MR_bool mercury__string__succeeded;
#line 4035 "string.m"
    MR_String mercury__string__SubString_8;

#line 4039 "string.m"
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
#line 4039 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 24050 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__SubString_8  = SubString;
#line 4039 "string.m"
}
#line 4035 "string.m"
    return mercury__string__SubString_8;
#line 4035 "string.m"
  }
#line 625 "string.m"
}

#line 612 "string.m"
void MR_CALL 
mercury__string__between_codepoints_4_p_0(
#line 612 "string.m"
  MR_String mercury__string__Str_5,
#line 612 "string.m"
  MR_Integer mercury__string__Start_6,
#line 612 "string.m"
  MR_Integer mercury__string__End_7,
#line 612 "string.m"
  MR_String * mercury__string__SubString_8)
#line 612 "string.m"
{
#line 4017 "string.m"
  {
#line 4017 "string.m"
    MR_bool mercury__string__succeeded;
#line 4017 "string.m"
    MR_Integer mercury__string__StartOffset_10;
#line 4017 "string.m"
    MR_Integer mercury__string__EndOffset_12;
#line 4020 "string.m"
    MR_Integer mercury__string__StartOffset0_9;
#line 4025 "string.m"
    MR_Integer mercury__string__EndOffset0_11;

#line 2591 "string.m"
    {
#line 2591 "string.m"
      mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__Start_6, &mercury__string__StartOffset0_9);
    }
#line 4020 "string.m"
    if (mercury__string__succeeded)
#line 4019 "string.m"
      mercury__string__StartOffset_10 = mercury__string__StartOffset0_9;
#line 4020 "string.m"
    else
#line 4021 "string.m"
      mercury__string__StartOffset_10 = (MR_Integer) 0;
#line 2591 "string.m"
    {
#line 2591 "string.m"
      mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__End_7, &mercury__string__EndOffset0_11);
    }
#line 4025 "string.m"
    if (mercury__string__succeeded)
#line 4024 "string.m"
      mercury__string__EndOffset_12 = mercury__string__EndOffset0_11;
#line 4025 "string.m"
    else
#line 2396 "string.m"
      {
#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__between_codepoints_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 24129 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__EndOffset_12  = Length;
#line 2400 "string.m"
}
#line 2396 "string.m"
      }
#line 4028 "string.m"
    {
#line 4028 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__StartOffset_10, mercury__string__EndOffset_12, mercury__string__SubString_8);
#line 4028 "string.m"
      return;
    }
#line 4017 "string.m"
  }
#line 612 "string.m"
}

#line 610 "string.m"
MR_String MR_CALL 
mercury__string__between_codepoints_3_f_0(
#line 610 "string.m"
  MR_String mercury__string__Str_5,
#line 610 "string.m"
  MR_Integer mercury__string__Start_6,
#line 610 "string.m"
  MR_Integer mercury__string__End_7)
#line 610 "string.m"
{
#line 4015 "string.m"
  {
#line 4015 "string.m"
    MR_bool mercury__string__succeeded;
#line 4015 "string.m"
    MR_String mercury__string__SubString_8;

#line 4015 "string.m"
    {
#line 4015 "string.m"
      mercury__string__between_codepoints_4_p_0(mercury__string__Str_5, mercury__string__Start_6, mercury__string__End_7, &mercury__string__SubString_8);
    }
#line 4015 "string.m"
    return mercury__string__SubString_8;
#line 4015 "string.m"
  }
#line 610 "string.m"
}

#line 599 "string.m"
void MR_CALL 
mercury__string__substring_4_p_0(
#line 599 "string.m"
  MR_String mercury__string__Str_5,
#line 599 "string.m"
  MR_Integer mercury__string__Start_6,
#line 599 "string.m"
  MR_Integer mercury__string__Count_7,
#line 599 "string.m"
  MR_String * mercury__string__SubString_8)
#line 599 "string.m"
{
#line 3993 "string.m"
  {
#line 3993 "string.m"
    MR_bool mercury__string__succeeded;
#line 3993 "string.m"
    MR_Integer mercury__string__ClampStart_9;
#line 3993 "string.m"
    MR_Integer mercury__string__ClampEnd_10;

#line 3994 "string.m"
    {
#line 3994 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_6, mercury__string__Count_7, &mercury__string__ClampStart_9, &mercury__string__ClampEnd_10);
    }
#line 3995 "string.m"
    {
#line 3995 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__ClampStart_9, mercury__string__ClampEnd_10, mercury__string__SubString_8);
#line 3995 "string.m"
      return;
    }
#line 3993 "string.m"
  }
#line 599 "string.m"
}

#line 598 "string.m"
MR_String MR_CALL 
mercury__string__substring_3_f_0(
#line 598 "string.m"
  MR_String mercury__string__Str_5,
#line 598 "string.m"
  MR_Integer mercury__string__Start_6,
#line 598 "string.m"
  MR_Integer mercury__string__Count_7)
#line 598 "string.m"
{
#line 3993 "string.m"
  {
#line 3993 "string.m"
    MR_bool mercury__string__succeeded;
#line 3993 "string.m"
    MR_String mercury__string__SubString_8;
#line 3993 "string.m"
    MR_Integer mercury__string__ClampStart_13;
#line 3993 "string.m"
    MR_Integer mercury__string__ClampEnd_14;

#line 3994 "string.m"
    {
#line 3994 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_6, mercury__string__Count_7, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    }
#line 3995 "string.m"
    {
#line 3995 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, &mercury__string__SubString_8);
    }
#line 3993 "string.m"
    return mercury__string__SubString_8;
#line 3993 "string.m"
  }
#line 598 "string.m"
}

#line 591 "string.m"
void MR_CALL 
mercury__string__between_4_p_0(
#line 591 "string.m"
  MR_String mercury__string__Str_1,
#line 591 "string.m"
  MR_Integer mercury__string__Start_2,
#line 591 "string.m"
  MR_Integer mercury__string__End_3,
#line 591 "string.m"
  MR_String * mercury__string__SubString_4)
#line 591 "string.m"
{
#line 3885 "string.m"
  {
#line 3885 "string.m"
    MR_bool mercury__string__succeeded;

#line 3889 "string.m"
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
#line 3889 "string.m"
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
#line 24311 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_4  = SubString;
#line 3889 "string.m"
}
#line 3885 "string.m"
  }
#line 591 "string.m"
}

#line 590 "string.m"
MR_String MR_CALL 
mercury__string__between_3_f_0(
#line 590 "string.m"
  MR_String mercury__string__Str_5,
#line 590 "string.m"
  MR_Integer mercury__string__Start_6,
#line 590 "string.m"
  MR_Integer mercury__string__End_7)
#line 590 "string.m"
{
#line 3883 "string.m"
  {
#line 3883 "string.m"
    MR_bool mercury__string__succeeded;
#line 3883 "string.m"
    MR_String mercury__string__SubString_8;

#line 3883 "string.m"
    {
#line 3883 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__Start_6, mercury__string__End_7, &mercury__string__SubString_8);
    }
#line 3883 "string.m"
    return mercury__string__SubString_8;
#line 3883 "string.m"
  }
#line 590 "string.m"
}

#line 579 "string.m"
void MR_CALL 
mercury__string__right_by_codepoint_3_p_0(
#line 579 "string.m"
  MR_String mercury__string__String_4,
#line 579 "string.m"
  MR_Integer mercury__string__RightCount_5,
#line 579 "string.m"
  MR_String * mercury__string__RightString_6)
#line 579 "string.m"
{
#line 3875 "string.m"
  {
#line 3875 "string.m"
    MR_bool mercury__string__succeeded;
#line 3875 "string.m"
    MR_Integer mercury__string__TotalCount_7;
#line 3875 "string.m"
    MR_Integer mercury__string__LeftCount_8;
#line 3878 "string.m"
    MR_String mercury__string___LeftString_9;

#line 3876 "string.m"
    {
#line 3876 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String_4, &mercury__string__TotalCount_7);
    }
#line 3877 "string.m"
    mercury__string__LeftCount_8 = (mercury__string__TotalCount_7 - mercury__string__RightCount_5);
#line 3878 "string.m"
    {
#line 3878 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__LeftCount_8, &mercury__string___LeftString_9, mercury__string__RightString_6);
    }
#line 3875 "string.m"
  }
#line 579 "string.m"
}

#line 578 "string.m"
MR_String MR_CALL 
mercury__string__right_by_codepoint_2_f_0(
#line 578 "string.m"
  MR_String mercury__string__String_4,
#line 578 "string.m"
  MR_Integer mercury__string__RightCount_5)
#line 578 "string.m"
{
#line 3875 "string.m"
  {
#line 3875 "string.m"
    MR_bool mercury__string__succeeded;
#line 3875 "string.m"
    MR_String mercury__string__RightString_6;
#line 3875 "string.m"
    MR_Integer mercury__string__TotalCount_10;
#line 3875 "string.m"
    MR_Integer mercury__string__LeftCount_11;
#line 3878 "string.m"
    MR_String mercury__string___LeftString_12;

#line 3876 "string.m"
    {
#line 3876 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String_4, &mercury__string__TotalCount_10);
    }
#line 3877 "string.m"
    mercury__string__LeftCount_11 = (mercury__string__TotalCount_10 - mercury__string__RightCount_5);
#line 3878 "string.m"
    {
#line 3878 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__LeftCount_11, &mercury__string___LeftString_12, &mercury__string__RightString_6);
    }
#line 3875 "string.m"
    return mercury__string__RightString_6;
#line 3875 "string.m"
  }
#line 578 "string.m"
}

#line 569 "string.m"
void MR_CALL 
mercury__string__right_3_p_0(
#line 569 "string.m"
  MR_String mercury__string__String_4,
#line 569 "string.m"
  MR_Integer mercury__string__RightCount_5,
#line 569 "string.m"
  MR_String * mercury__string__RightString_6)
#line 569 "string.m"
{
#line 3867 "string.m"
  {
#line 3867 "string.m"
    MR_bool mercury__string__succeeded;
#line 3867 "string.m"
    MR_Integer mercury__string__Length_7;
#line 3867 "string.m"
    MR_Integer mercury__string__LeftCount_8;
#line 3870 "string.m"
    MR_String mercury__string___LeftString_9;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__right_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 24468 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_7  = Length;
#line 2400 "string.m"
}
#line 3869 "string.m"
    mercury__string__LeftCount_8 = (mercury__string__Length_7 - mercury__string__RightCount_5);
#line 3870 "string.m"
    {
#line 3870 "string.m"
      mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__LeftCount_8, &mercury__string___LeftString_9, mercury__string__RightString_6);
    }
#line 3867 "string.m"
  }
#line 569 "string.m"
}

#line 568 "string.m"
MR_String MR_CALL 
mercury__string__right_2_f_0(
#line 568 "string.m"
  MR_String mercury__string__S1_4,
#line 568 "string.m"
  MR_Integer mercury__string__N_5)
#line 568 "string.m"
{
#line 3867 "string.m"
  {
#line 3867 "string.m"
    MR_bool mercury__string__succeeded;
#line 3867 "string.m"
    MR_String mercury__string__S2_6;
#line 3867 "string.m"
    MR_Integer mercury__string__Length_10;
#line 3867 "string.m"
    MR_Integer mercury__string__LeftCount_11;
#line 3870 "string.m"
    MR_String mercury__string___LeftString_12;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__right_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S1_4 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 24522 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_10  = Length;
#line 2400 "string.m"
}
#line 3869 "string.m"
    mercury__string__LeftCount_11 = (mercury__string__Length_10 - mercury__string__N_5);
#line 3870 "string.m"
    {
#line 3870 "string.m"
      mercury__string__split_4_p_0(mercury__string__S1_4, mercury__string__LeftCount_11, &mercury__string___LeftString_12, &mercury__string__S2_6);
    }
#line 3867 "string.m"
    return mercury__string__S2_6;
#line 3867 "string.m"
  }
#line 568 "string.m"
}

#line 560 "string.m"
void MR_CALL 
mercury__string__left_by_codepoint_3_p_0(
#line 560 "string.m"
  MR_String mercury__string__String_4,
#line 560 "string.m"
  MR_Integer mercury__string__Count_5,
#line 560 "string.m"
  MR_String * mercury__string__LeftString_6)
#line 560 "string.m"
{
#line 3862 "string.m"
  {
#line 3862 "string.m"
    MR_bool mercury__string__succeeded;
#line 3862 "string.m"
    MR_String mercury__string___RightString_7;

#line 3862 "string.m"
    {
#line 3862 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__Count_5, mercury__string__LeftString_6, &mercury__string___RightString_7);
    }
#line 3862 "string.m"
  }
#line 560 "string.m"
}

#line 559 "string.m"
MR_String MR_CALL 
mercury__string__left_by_codepoint_2_f_0(
#line 559 "string.m"
  MR_String mercury__string__String_4,
#line 559 "string.m"
  MR_Integer mercury__string__Count_5)
#line 559 "string.m"
{
#line 3862 "string.m"
  {
#line 3862 "string.m"
    MR_bool mercury__string__succeeded;
#line 3862 "string.m"
    MR_String mercury__string__LeftString_6;
#line 3862 "string.m"
    MR_String mercury__string___RightString_10;

#line 3862 "string.m"
    {
#line 3862 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__Count_5, &mercury__string__LeftString_6, &mercury__string___RightString_10);
    }
#line 3862 "string.m"
    return mercury__string__LeftString_6;
#line 3862 "string.m"
  }
#line 559 "string.m"
}

#line 550 "string.m"
void MR_CALL 
mercury__string__left_3_p_0(
#line 550 "string.m"
  MR_String mercury__string__String_4,
#line 550 "string.m"
  MR_Integer mercury__string__Count_5,
#line 550 "string.m"
  MR_String * mercury__string__LeftString_6)
#line 550 "string.m"
{
#line 3856 "string.m"
  {
#line 3856 "string.m"
    MR_bool mercury__string__succeeded;
#line 3856 "string.m"
    MR_String mercury__string___RightString_7;

#line 3856 "string.m"
    {
#line 3856 "string.m"
      mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__Count_5, mercury__string__LeftString_6, &mercury__string___RightString_7);
    }
#line 3856 "string.m"
  }
#line 550 "string.m"
}

#line 549 "string.m"
MR_String MR_CALL 
mercury__string__left_2_f_0(
#line 549 "string.m"
  MR_String mercury__string__S1_4,
#line 549 "string.m"
  MR_Integer mercury__string__N_5)
#line 549 "string.m"
{
#line 3856 "string.m"
  {
#line 3856 "string.m"
    MR_bool mercury__string__succeeded;
#line 3856 "string.m"
    MR_String mercury__string__S2_6;
#line 3856 "string.m"
    MR_String mercury__string___RightString_10;

#line 3856 "string.m"
    {
#line 3856 "string.m"
      mercury__string__split_4_p_0(mercury__string__S1_4, mercury__string__N_5, &mercury__string__S2_6, &mercury__string___RightString_10);
    }
#line 3856 "string.m"
    return mercury__string__S2_6;
#line 3856 "string.m"
  }
#line 549 "string.m"
}

#line 540 "string.m"
void MR_CALL 
mercury__string__split_by_codepoint_4_p_0(
#line 540 "string.m"
  MR_String mercury__string__Str_5,
#line 540 "string.m"
  MR_Integer mercury__string__Count_6,
#line 540 "string.m"
  MR_String * mercury__string__Left_7,
#line 540 "string.m"
  MR_String * mercury__string__Right_8)
#line 540 "string.m"
{
#line 3842 "string.m"
  {
#line 3842 "string.m"
    MR_bool mercury__string__succeeded;
#line 3842 "string.m"
    MR_Integer mercury__string__Offset_9;

#line 2591 "string.m"
    {
#line 2591 "string.m"
      mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__Count_6, &mercury__string__Offset_9);
    }
#line 3842 "string.m"
    if (mercury__string__succeeded)
#line 3841 "string.m"
      {
#line 3841 "string.m"
        mercury__string__split_4_p_0(mercury__string__Str_5, mercury__string__Offset_9, mercury__string__Left_7, mercury__string__Right_8);
#line 3841 "string.m"
        return;
      }
#line 3842 "string.m"
    else
#line 3845 "string.m"
      {
#line 3842 "string.m"
        mercury__string__succeeded = (mercury__string__Count_6 <= (MR_Integer) 0);
#line 3845 "string.m"
        if (mercury__string__succeeded)
#line 3843 "string.m"
          {
#line 3843 "string.m"
            *mercury__string__Left_7 = (MR_String) "";
#line 3844 "string.m"
            *mercury__string__Right_8 = mercury__string__Str_5;
#line 3843 "string.m"
          }
#line 3845 "string.m"
        else
#line 3846 "string.m"
          {
#line 3846 "string.m"
            *mercury__string__Left_7 = mercury__string__Str_5;
#line 3847 "string.m"
            *mercury__string__Right_8 = (MR_String) "";
#line 3846 "string.m"
          }
#line 3845 "string.m"
      }
#line 3842 "string.m"
  }
#line 540 "string.m"
}

#line 531 "string.m"
void MR_CALL 
mercury__string__split_4_p_0(
#line 531 "string.m"
  MR_String mercury__string__Str_1,
#line 531 "string.m"
  MR_Integer mercury__string__Count_2,
#line 531 "string.m"
  MR_String * mercury__string__Left_3,
#line 531 "string.m"
  MR_String * mercury__string__Right_4)
#line 531 "string.m"
{
#line 3738 "string.m"
  {
#line 3738 "string.m"
    MR_bool mercury__string__succeeded;

#line 3742 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_4_p_0

	MR_String Str;
	MR_Integer Count;
	MR_String Left;
	MR_String Right;

	Str =  mercury__string__Str_1 ;
	Count =  mercury__string__Count_2 ;
		{
#line 3742 "string.m"
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
#line 24780 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Left_3  = Left;
	 *mercury__string__Right_4  = Right;
#line 3742 "string.m"
}
#line 3738 "string.m"
  }
#line 531 "string.m"
}

#line 523 "string.m"
void MR_CALL 
mercury__string__first_char_3_p_4(
#line 523 "string.m"
  MR_String * mercury__string__Str_1,
#line 523 "string.m"
  MR_Char mercury__string__First_2,
#line 523 "string.m"
  MR_String mercury__string__Rest_3)
#line 523 "string.m"
{
#line 3695 "string.m"
  {
#line 3695 "string.m"
    MR_bool mercury__string__succeeded;

#line 3699 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_4

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__First_2 ;
	Rest =  mercury__string__Rest_3 ;
		{
#line 3699 "string.m"
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}
#line 24828 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_1  = Str;
#line 3699 "string.m"
}
#line 3695 "string.m"
  }
#line 523 "string.m"
}

#line 522 "string.m"
MR_bool MR_CALL 
mercury__string__first_char_3_p_3(
#line 522 "string.m"
  MR_String mercury__string__Str_1,
#line 522 "string.m"
  MR_Char * mercury__string__First_2,
#line 522 "string.m"
  MR_String * mercury__string__Rest_3)
#line 522 "string.m"
{
#line 3623 "string.m"
  {
#line 3623 "string.m"
    MR_bool mercury__string__succeeded;

#line 3627 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_3

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
		{
#line 3627 "string.m"
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
#line 24883 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__First_2  = First;
	 *mercury__string__Rest_3  = Rest;
#line 3627 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3623 "string.m"
    return mercury__string__succeeded;
#line 3623 "string.m"
  }
#line 522 "string.m"
}

#line 521 "string.m"
MR_bool MR_CALL 
mercury__string__first_char_3_p_2(
#line 521 "string.m"
  MR_String mercury__string__Str_1,
#line 521 "string.m"
  MR_Char mercury__string__First_2,
#line 521 "string.m"
  MR_String * mercury__string__Rest_3)
#line 521 "string.m"
{
#line 3555 "string.m"
  {
#line 3555 "string.m"
    MR_bool mercury__string__succeeded;

#line 3559 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_2

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	First =  mercury__string__First_2 ;
		{
#line 3559 "string.m"
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
#line 24945 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Rest_3  = Rest;
#line 3559 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3555 "string.m"
    return mercury__string__succeeded;
#line 3555 "string.m"
  }
#line 521 "string.m"
}

#line 520 "string.m"
MR_bool MR_CALL 
mercury__string__first_char_3_p_1(
#line 520 "string.m"
  MR_String mercury__string__Str_1,
#line 520 "string.m"
  MR_Char * mercury__string__First_2,
#line 520 "string.m"
  MR_String mercury__string__Rest_3)
#line 520 "string.m"
{
#line 3492 "string.m"
  {
#line 3492 "string.m"
    MR_bool mercury__string__succeeded;

#line 3496 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_1

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Rest =  mercury__string__Rest_3 ;
		{
#line 3496 "string.m"

    MR_Integer pos = 0;
    First = MR_utf8_get_next(Str, &pos);
    SUCCESS_INDICATOR = (First > 0 && strcmp(Str + pos, Rest) == 0);

#line 24996 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__First_2  = First;
#line 3496 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3492 "string.m"
    return mercury__string__succeeded;
#line 3492 "string.m"
  }
#line 520 "string.m"
}

#line 519 "string.m"
MR_bool MR_CALL 
mercury__string__first_char_3_p_0(
#line 519 "string.m"
  MR_String mercury__string__Str_1,
#line 519 "string.m"
  MR_Char mercury__string__First_2,
#line 519 "string.m"
  MR_String mercury__string__Rest_3)
#line 519 "string.m"
{
#line 3435 "string.m"
  {
#line 3435 "string.m"
    MR_bool mercury__string__succeeded;

#line 3439 "string.m"
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
#line 3439 "string.m"

    MR_Integer pos = 0;
    int c = MR_utf8_get_next(Str, &pos);
    SUCCESS_INDICATOR = (
        c == First &&
        First != '\0' &&
        strcmp(Str + pos, Rest) == 0
    );

#line 25052 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3439 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3435 "string.m"
    return mercury__string__succeeded;
#line 3435 "string.m"
  }
#line 519 "string.m"
}

#line 501 "string.m"
MR_String MR_CALL 
mercury__string__join_list_2_f_0(
#line 501 "string.m"
  MR_String mercury__string__Sep_1,
#line 501 "string.m"
  MR_Word mercury__string__Strs_2)
#line 501 "string.m"
{
#line 3336 "string.m"
  {
#line 3336 "string.m"
    MR_bool mercury__string__succeeded;
#line 3336 "string.m"
    MR_String mercury__string__Str_3;

#line 3340 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_list_2_f_0

	MR_String Sep;
	MR_Word Strs;
	MR_String Str;

	Sep =  mercury__string__Sep_1 ;
	Strs =  mercury__string__Strs_2 ;
		{
#line 3340 "string.m"
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
#line 25139 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Str_3  = Str;
#line 3340 "string.m"
}
#line 3336 "string.m"
    return mercury__string__Str_3;
#line 3336 "string.m"
  }
#line 501 "string.m"
}

#line 493 "string.m"
void MR_CALL 
mercury__string__append_list_2_p_0(
#line 493 "string.m"
  MR_Word mercury__string__Lists_3,
#line 493 "string.m"
  MR_String * mercury__string__HeadVar__2_2)
#line 493 "string.m"
{
#line 3328 "string.m"
  {
#line 3328 "string.m"
    MR_bool mercury__string__succeeded;

#line 3328 "string.m"
    {
#line 3328 "string.m"
      *mercury__string__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__string__Lists_3);
    }
#line 3328 "string.m"
  }
#line 493 "string.m"
}

#line 492 "string.m"
MR_String MR_CALL 
mercury__string__append_list_1_f_0(
#line 492 "string.m"
  MR_Word mercury__string__Strs_1)
#line 492 "string.m"
{
#line 3256 "string.m"
  {
#line 3256 "string.m"
    MR_bool mercury__string__succeeded;
#line 3256 "string.m"
    MR_String mercury__string__Str_2;

#line 3260 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_list_1_f_0

	MR_Word Strs;
	MR_String Str;

	Strs =  mercury__string__Strs_1 ;
		{
#line 3260 "string.m"
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
#line 25226 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Str_2  = Str;
#line 3260 "string.m"
}
#line 3256 "string.m"
    return mercury__string__Str_2;
#line 3256 "string.m"
  }
#line 492 "string.m"
}

#line 488 "string.m"
MR_String MR_CALL 
mercury__string__f_43_43_2_f_0(
#line 488 "string.m"
  MR_String mercury__string__S1_4,
#line 488 "string.m"
  MR_String mercury__string__S2_5)
#line 488 "string.m"
{
#line 3145 "string.m"
  {
#line 3145 "string.m"
    MR_bool mercury__string__succeeded;
#line 3145 "string.m"
    MR_String mercury__string__HeadVar__3_3;

#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_43_43_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_4 ;
	S2 =  mercury__string__S2_5 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 25276 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__3_3  = S3;
#line 3149 "string.m"
}
#line 3145 "string.m"
    return mercury__string__HeadVar__3_3;
#line 3145 "string.m"
  }
#line 488 "string.m"
}

#line 476 "string.m"
void MR_CALL 
mercury__string__append_3_p_3(
#line 476 "string.m"
  MR_String * mercury__string__S1_1,
#line 476 "string.m"
  MR_String * mercury__string__S2_2,
#line 476 "string.m"
  MR_String mercury__string__S3_3,
#line 476 "string.m"
  MR_Cont mercury__string__cont,
#line 476 "string.m"
  void * mercury__string__cont_env_ptr)
#line 476 "string.m"
{
#line 3181 "string.m"
  {
#line 3181 "string.m"
    MR_bool mercury__string__succeeded;
#line 3181 "string.m"
    MR_Integer mercury__string__S3Len_19;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_3_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S3_3 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 25325 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S3Len_19  = Length;
#line 2400 "string.m"
}
#line 3183 "string.m"
    {
#line 3183 "string.m"
      mercury__string__append_ooi_2_5_p_0((MR_Integer) 0, mercury__string__S3Len_19, mercury__string__S1_1, mercury__string__S2_2, mercury__string__S3_3, mercury__string__cont, mercury__string__cont_env_ptr);
#line 3183 "string.m"
      return;
    }
#line 3181 "string.m"
  }
#line 476 "string.m"
}

#line 475 "string.m"
void MR_CALL 
mercury__string__append_3_p_2(
#line 475 "string.m"
  MR_String mercury__string__S1_1,
#line 475 "string.m"
  MR_String mercury__string__S2_2,
#line 475 "string.m"
  MR_String * mercury__string__S3_3)
#line 475 "string.m"
{
#line 3145 "string.m"
  {
#line 3145 "string.m"
    MR_bool mercury__string__succeeded;

#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_3_p_2

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_1 ;
	S2 =  mercury__string__S2_2 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 25380 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S3_3  = S3;
#line 3149 "string.m"
}
#line 3145 "string.m"
  }
#line 475 "string.m"
}

#line 474 "string.m"
MR_bool MR_CALL 
mercury__string__append_3_p_1(
#line 474 "string.m"
  MR_String mercury__string__S1_1,
#line 474 "string.m"
  MR_String * mercury__string__S2_2,
#line 474 "string.m"
  MR_String mercury__string__S3_3)
#line 474 "string.m"
{
#line 3093 "string.m"
  {
#line 3093 "string.m"
    MR_bool mercury__string__succeeded;

#line 3097 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_3_p_1

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__S1_1 ;
	S3 =  mercury__string__S3_3 ;
		{
#line 3097 "string.m"
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
#line 25438 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__S2_2  = S2;
#line 3097 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3093 "string.m"
    return mercury__string__succeeded;
#line 3093 "string.m"
  }
#line 474 "string.m"
}

#line 473 "string.m"
MR_bool MR_CALL 
mercury__string__append_3_p_0(
#line 473 "string.m"
  MR_String mercury__string__S1_1,
#line 473 "string.m"
  MR_String mercury__string__S2_2,
#line 473 "string.m"
  MR_String mercury__string__S3_3)
#line 473 "string.m"
{
#line 3050 "string.m"
  {
#line 3050 "string.m"
    MR_bool mercury__string__succeeded;

#line 3054 "string.m"
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
#line 3054 "string.m"
{
    size_t len_1 = strlen(S1);
    SUCCESS_INDICATOR = (
        strncmp(S1, S3, len_1) == 0 &&
        strcmp(S2, S3 + len_1) == 0
    );
}
#line 25492 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3054 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3050 "string.m"
    return mercury__string__succeeded;
#line 3050 "string.m"
  }
#line 473 "string.m"
}

#line 470 "string.m"
MR_String MR_CALL 
mercury__string__append_2_f_0(
#line 470 "string.m"
  MR_String mercury__string__S1_4,
#line 470 "string.m"
  MR_String mercury__string__S2_5)
#line 470 "string.m"
{
#line 3145 "string.m"
  {
#line 3145 "string.m"
    MR_bool mercury__string__succeeded;
#line 3145 "string.m"
    MR_String mercury__string__S3_6;

#line 3149 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_4 ;
	S2 =  mercury__string__S2_5 ;
		{
#line 3149 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 25544 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S3_6  = S3;
#line 3149 "string.m"
}
#line 3145 "string.m"
    return mercury__string__S3_6;
#line 3145 "string.m"
  }
#line 470 "string.m"
}

#line 460 "string.m"
MR_bool MR_CALL 
mercury__string__sub_string_search_start_4_p_0(
#line 460 "string.m"
  MR_String mercury__string__WholeString_1,
#line 460 "string.m"
  MR_String mercury__string__Pattern_2,
#line 460 "string.m"
  MR_Integer mercury__string__BeginAt_3,
#line 460 "string.m"
  MR_Integer * mercury__string__Index_4)
#line 460 "string.m"
{
#line 2936 "string.m"
  {
#line 2936 "string.m"
    MR_bool mercury__string__succeeded;

#line 2941 "string.m"
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
#line 2941 "string.m"
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
#line 25605 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_4  = Index;
#line 2941 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2936 "string.m"
    return mercury__string__succeeded;
#line 2936 "string.m"
  }
#line 460 "string.m"
}

#line 452 "string.m"
MR_bool MR_CALL 
mercury__string__sub_string_search_3_p_0(
#line 452 "string.m"
  MR_String mercury__string__WholeString_4,
#line 452 "string.m"
  MR_String mercury__string__Pattern_5,
#line 452 "string.m"
  MR_Integer * mercury__string__Index_6)
#line 452 "string.m"
{
#line 2933 "string.m"
  {
#line 2933 "string.m"
    MR_bool mercury__string__succeeded;

#line 2941 "string.m"
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
#line 2941 "string.m"
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
#line 25667 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_6  = Index;
#line 2941 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2933 "string.m"
    return mercury__string__succeeded;
#line 2933 "string.m"
  }
#line 452 "string.m"
}

#line 443 "string.m"
MR_Integer MR_CALL 
mercury__string__suffix_length_2_f_0(
#line 443 "string.m"
  MR_Word mercury__string__P_4,
#line 443 "string.m"
  MR_String mercury__string__S_5)
#line 443 "string.m"
{
#line 2914 "string.m"
  {
#line 2914 "string.m"
    MR_bool mercury__string__succeeded;
#line 2914 "string.m"
    MR_Integer mercury__string__HeadVar__3_3;
#line 2914 "string.m"
    MR_Integer mercury__string__End_6;
#line 2914 "string.m"
    MR_Integer mercury__string__Index_7;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_length_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 25717 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_6  = Length;
#line 2400 "string.m"
}
#line 2916 "string.m"
    {
#line 2916 "string.m"
      mercury__string__suffix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, mercury__string__End_6, &mercury__string__Index_7);
    }
#line 2914 "string.m"
    mercury__string__HeadVar__3_3 = (mercury__string__End_6 - mercury__string__Index_7);
#line 2914 "string.m"
    return mercury__string__HeadVar__3_3;
#line 2914 "string.m"
  }
#line 443 "string.m"
}

#line 435 "string.m"
MR_Integer MR_CALL 
mercury__string__prefix_length_2_f_0(
#line 435 "string.m"
  MR_Word mercury__string__P_4,
#line 435 "string.m"
  MR_String mercury__string__S_5)
#line 435 "string.m"
{
#line 2898 "string.m"
  {
#line 2898 "string.m"
    MR_bool mercury__string__succeeded;
#line 2898 "string.m"
    MR_Integer mercury__string__Index_6;

#line 2899 "string.m"
    {
#line 2899 "string.m"
      mercury__string__prefix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, (MR_Integer) 0, &mercury__string__Index_6);
    }
#line 2898 "string.m"
    return mercury__string__Index_6;
#line 2898 "string.m"
  }
#line 435 "string.m"
}

#line 428 "string.m"
MR_bool MR_CALL 
mercury__string__contains_char_2_p_0(
#line 428 "string.m"
  MR_String mercury__string__Str_1,
#line 428 "string.m"
  MR_Char mercury__string__Ch_2)
#line 428 "string.m"
{
#line 2845 "string.m"
  {
#line 2845 "string.m"
    MR_bool mercury__string__succeeded;

#line 2849 "string.m"
{
#define MR_PROC_LABEL mercury__string__contains_char_2_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Ch =  mercury__string__Ch_2 ;
		{
#line 2849 "string.m"

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

#line 25804 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2849 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2845 "string.m"
    return mercury__string__succeeded;
#line 2845 "string.m"
  }
#line 428 "string.m"
}

#line 422 "string.m"
MR_bool MR_CALL 
mercury__string__all_match_2_p_0(
#line 422 "string.m"
  MR_Word mercury__string__P_3,
#line 422 "string.m"
  MR_String mercury__string__String_4)
#line 422 "string.m"
{
#line 2826 "string.m"
  {
#line 2826 "string.m"
    MR_bool mercury__string__succeeded;

#line 2827 "string.m"
    {
#line 2827 "string.m"
      return mercury__string__succeeded = mercury__string__all_match_loop_3_p_0(mercury__string__P_3, mercury__string__String_4, (MR_Integer) 0);
    }
#line 2826 "string.m"
    return mercury__string__succeeded;
#line 2826 "string.m"
  }
#line 422 "string.m"
}

#line 415 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_digits_1_p_0(
#line 415 "string.m"
  MR_String mercury__string__S_1)
#line 415 "string.m"
{
#line 2800 "string.m"
  {
#line 2800 "string.m"
    MR_bool mercury__string__succeeded;

#line 2804 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_digits_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 2804 "string.m"

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

#line 25884 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2804 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2800 "string.m"
    return mercury__string__succeeded;
#line 2800 "string.m"
  }
#line 415 "string.m"
}

#line 411 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_alnum_or_underscore_1_p_0(
#line 411 "string.m"
  MR_String mercury__string__S_1)
#line 411 "string.m"
{
#line 2759 "string.m"
  {
#line 2759 "string.m"
    MR_bool mercury__string__succeeded;

#line 2763 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_alnum_or_underscore_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 2763 "string.m"

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

#line 25954 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2763 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2759 "string.m"
    return mercury__string__succeeded;
#line 2759 "string.m"
  }
#line 411 "string.m"
}

#line 406 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_alpha_or_underscore_1_p_0(
#line 406 "string.m"
  MR_String mercury__string__S_1)
#line 406 "string.m"
{
#line 2722 "string.m"
  {
#line 2722 "string.m"
    MR_bool mercury__string__succeeded;

#line 2726 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_alpha_or_underscore_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 2726 "string.m"

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

#line 26021 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2726 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2722 "string.m"
    return mercury__string__succeeded;
#line 2722 "string.m"
  }
#line 406 "string.m"
}

#line 401 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_alnum_1_p_0(
#line 401 "string.m"
  MR_String mercury__string__S_2)
#line 401 "string.m"
{
#line 2719 "string.m"
  {
#line 2719 "string.m"
    MR_bool mercury__string__succeeded;

#line 2827 "string.m"
    {
#line 2827 "string.m"
      return mercury__string__succeeded = mercury__string__all_match_loop__ho30_3_p_0(mercury__string__S_2, (MR_Integer) 0);
    }
#line 2719 "string.m"
    return mercury__string__succeeded;
#line 2719 "string.m"
  }
#line 401 "string.m"
}

#line 396 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_alpha_1_p_0(
#line 396 "string.m"
  MR_String mercury__string__S_1)
#line 396 "string.m"
{
#line 2684 "string.m"
  {
#line 2684 "string.m"
    MR_bool mercury__string__succeeded;

#line 2688 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_alpha_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 2688 "string.m"

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

#line 26110 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2688 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2684 "string.m"
    return mercury__string__succeeded;
#line 2684 "string.m"
  }
#line 396 "string.m"
}

#line 387 "string.m"
MR_Integer MR_CALL 
mercury__string__hash3_1_f_0(
#line 387 "string.m"
  MR_String mercury__string__String_3)
#line 387 "string.m"
{
#line 2659 "string.m"
  {
#line 2659 "string.m"
    MR_bool mercury__string__succeeded;
#line 2659 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2659 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2659 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash3_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 26157 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2400 "string.m"
}
#line 2661 "string.m"
    {
#line 2661 "string.m"
      mercury__string__hash3_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2662 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2659 "string.m"
    return mercury__string__HashVal_4;
#line 2659 "string.m"
  }
#line 387 "string.m"
}

#line 386 "string.m"
MR_Integer MR_CALL 
mercury__string__hash2_1_f_0(
#line 386 "string.m"
  MR_String mercury__string__String_3)
#line 386 "string.m"
{
#line 2641 "string.m"
  {
#line 2641 "string.m"
    MR_bool mercury__string__succeeded;
#line 2641 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2641 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2641 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash2_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 26209 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2400 "string.m"
}
#line 2643 "string.m"
    {
#line 2643 "string.m"
      mercury__string__hash2_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2644 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2641 "string.m"
    return mercury__string__HashVal_4;
#line 2641 "string.m"
  }
#line 386 "string.m"
}

#line 382 "string.m"
void MR_CALL 
mercury__string__hash_2_p_0(
#line 382 "string.m"
  MR_String mercury__string__String_3,
#line 382 "string.m"
  MR_Integer * mercury__string__HashVal_4)
#line 382 "string.m"
{
#line 2623 "string.m"
  {
#line 2623 "string.m"
    MR_bool mercury__string__succeeded;
#line 2623 "string.m"
    MR_Integer mercury__string__Length_7;
#line 2623 "string.m"
    MR_Integer mercury__string__HashVal1_8;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 26261 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_7  = Length;
#line 2400 "string.m"
}
#line 2625 "string.m"
    {
#line 2625 "string.m"
      mercury__string__hash_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_7, (MR_Integer) 0, &mercury__string__HashVal1_8);
    }
#line 2626 "string.m"
    *mercury__string__HashVal_4 = (mercury__string__HashVal1_8 ^ mercury__string__Length_7);
#line 2623 "string.m"
  }
#line 382 "string.m"
}

#line 381 "string.m"
MR_Integer MR_CALL 
mercury__string__hash_1_f_0(
#line 381 "string.m"
  MR_String mercury__string__String_3)
#line 381 "string.m"
{
#line 2623 "string.m"
  {
#line 2623 "string.m"
    MR_bool mercury__string__succeeded;
#line 2623 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2623 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2623 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 26311 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2400 "string.m"
}
#line 2625 "string.m"
    {
#line 2625 "string.m"
      mercury__string__hash_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2626 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2623 "string.m"
    return mercury__string__HashVal_4;
#line 2623 "string.m"
  }
#line 381 "string.m"
}

#line 372 "string.m"
MR_bool MR_CALL 
mercury__string__codepoint_offset_3_p_0(
#line 372 "string.m"
  MR_String mercury__string__String_4,
#line 372 "string.m"
  MR_Integer mercury__string__N_5,
#line 372 "string.m"
  MR_Integer * mercury__string__Index_6)
#line 372 "string.m"
{
#line 2588 "string.m"
  {
#line 2588 "string.m"
    MR_bool mercury__string__succeeded;

#line 2591 "string.m"
    {
#line 2591 "string.m"
      return mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__String_4, (MR_Integer) 0, mercury__string__N_5, mercury__string__Index_6);
    }
#line 2588 "string.m"
    return mercury__string__succeeded;
#line 2588 "string.m"
  }
#line 372 "string.m"
}

#line 366 "string.m"
MR_bool MR_CALL 
mercury__string__codepoint_offset_4_p_0(
#line 366 "string.m"
  MR_String mercury__string__String_1,
#line 366 "string.m"
  MR_Integer mercury__string__StartOffset_2,
#line 366 "string.m"
  MR_Integer mercury__string__N_3,
#line 366 "string.m"
  MR_Integer * mercury__string__Index_4)
#line 366 "string.m"
{
#line 2542 "string.m"
  {
#line 2542 "string.m"
    MR_bool mercury__string__succeeded;

#line 2545 "string.m"
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
#line 2545 "string.m"

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

#line 26409 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_4  = Index;
#line 2545 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2542 "string.m"
    return mercury__string__succeeded;
#line 2542 "string.m"
  }
#line 366 "string.m"
}

#line 358 "string.m"
MR_Integer MR_CALL 
mercury__string__count_utf8_code_units_1_f_0(
#line 358 "string.m"
  MR_String mercury__string__Str_1)
#line 358 "string.m"
{
#line 2512 "string.m"
  {
#line 2512 "string.m"
    MR_bool mercury__string__succeeded;
#line 2512 "string.m"
    MR_Integer mercury__string__Length_2;

#line 2515 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_utf8_code_units_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{
#line 2515 "string.m"

    Length = strlen(Str);

#line 26453 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_2  = Length;
#line 2515 "string.m"
}
#line 2512 "string.m"
    return mercury__string__Length_2;
#line 2512 "string.m"
  }
#line 358 "string.m"
}

#line 353 "string.m"
void MR_CALL 
mercury__string__count_codepoints_2_p_0(
#line 353 "string.m"
  MR_String mercury__string__String_1,
#line 353 "string.m"
  MR_Integer * mercury__string__Count_2)
#line 353 "string.m"
{
#line 2462 "string.m"
  {
#line 2462 "string.m"
    MR_bool mercury__string__succeeded;

#line 2465 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_codepoints_2_p_0

	MR_String String;
	MR_Integer Count;

	String =  mercury__string__String_1 ;
		{
#line 2465 "string.m"

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

#line 26506 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Count_2  = Count;
#line 2465 "string.m"
}
#line 2462 "string.m"
  }
#line 353 "string.m"
}

#line 352 "string.m"
MR_Integer MR_CALL 
mercury__string__count_codepoints_1_f_0(
#line 352 "string.m"
  MR_String mercury__string__String_3)
#line 352 "string.m"
{
#line 2460 "string.m"
  {
#line 2460 "string.m"
    MR_bool mercury__string__succeeded;
#line 2460 "string.m"
    MR_Integer mercury__string__Count_4;

#line 2460 "string.m"
    {
#line 2460 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String_3, &mercury__string__Count_4);
    }
#line 2460 "string.m"
    return mercury__string__Count_4;
#line 2460 "string.m"
  }
#line 352 "string.m"
}

#line 344 "string.m"
void MR_CALL 
mercury__string__count_code_units_2_p_0(
#line 344 "string.m"
  MR_String mercury__string__Str_3,
#line 344 "string.m"
  MR_Integer * mercury__string__Length_4)
#line 344 "string.m"
{
#line 2396 "string.m"
  {
#line 2396 "string.m"
    MR_bool mercury__string__succeeded;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_code_units_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_3 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 26571 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_4  = Length;
#line 2400 "string.m"
}
#line 2396 "string.m"
  }
#line 344 "string.m"
}

#line 343 "string.m"
MR_Integer MR_CALL 
mercury__string__count_code_units_1_f_0(
#line 343 "string.m"
  MR_String mercury__string__Str_3)
#line 343 "string.m"
{
#line 2396 "string.m"
  {
#line 2396 "string.m"
    MR_bool mercury__string__succeeded;
#line 2396 "string.m"
    MR_Integer mercury__string__HeadVar__2_2;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_code_units_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_3 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 26610 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__2_2  = Length;
#line 2400 "string.m"
}
#line 2396 "string.m"
    return mercury__string__HeadVar__2_2;
#line 2396 "string.m"
  }
#line 343 "string.m"
}

#line 339 "string.m"
void MR_CALL 
mercury__string__length_2_p_1(
#line 339 "string.m"
  MR_String mercury__string__Str_1,
#line 339 "string.m"
  MR_Integer * mercury__string__Length_2)
#line 339 "string.m"
{
#line 2422 "string.m"
  {
#line 2422 "string.m"
    MR_bool mercury__string__succeeded;

#line 2426 "string.m"
{
#define MR_PROC_LABEL mercury__string__length_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{
#line 2426 "string.m"

    Length = strlen(Str);

#line 26651 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_2  = Length;
#line 2426 "string.m"
}
#line 2422 "string.m"
  }
#line 339 "string.m"
}

#line 338 "string.m"
void MR_CALL 
mercury__string__length_2_p_0(
#line 338 "string.m"
  MR_String mercury__string__Str_1,
#line 338 "string.m"
  MR_Integer * mercury__string__Length_2)
#line 338 "string.m"
{
#line 2396 "string.m"
  {
#line 2396 "string.m"
    MR_bool mercury__string__succeeded;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__length_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 26690 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_2  = Length;
#line 2400 "string.m"
}
#line 2396 "string.m"
  }
#line 338 "string.m"
}

#line 336 "string.m"
MR_Integer MR_CALL 
mercury__string__length_1_f_0(
#line 336 "string.m"
  MR_String mercury__string__S_3)
#line 336 "string.m"
{
#line 2396 "string.m"
  {
#line 2396 "string.m"
    MR_bool mercury__string__succeeded;
#line 2396 "string.m"
    MR_Integer mercury__string__L_4;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__length_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 26729 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__L_4  = Length;
#line 2400 "string.m"
}
#line 2396 "string.m"
    return mercury__string__L_4;
#line 2396 "string.m"
  }
#line 336 "string.m"
}

#line 320 "string.m"
void MR_CALL 
mercury__string__unsafe_set_char_4_p_0(
#line 320 "string.m"
  MR_Char mercury__string__Char_5,
#line 320 "string.m"
  MR_Integer mercury__string__Index_6,
#line 320 "string.m"
  MR_String mercury__string__STATE_VARIABLE_Str_0_8,
#line 320 "string.m"
  MR_String * mercury__string__STATE_VARIABLE_Str_9)
#line 320 "string.m"
{
#line 2315 "string.m"
  {
#line 2315 "string.m"
    MR_bool mercury__string__succeeded;

#line 63 "char.opt"
{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__string__Char_5 ;
	Int =  (MR_Integer) 0 ;
		{
#line 63 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);

#line 26776 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 63 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2315 "string.m"
    if (mercury__string__succeeded)
#line 2314 "string.m"
      {
#line 2314 "string.m"
        {
#line 2314 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_set_char: null character");
#line 2314 "string.m"
          return;
        }
#line 2314 "string.m"
      }
#line 2315 "string.m"
    else
#line 2325 "string.m"
      {
#line 2329 "string.m"
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
#line 2329 "string.m"

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

#line 26837 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__STATE_VARIABLE_Str_9  = Str;
#line 2329 "string.m"
}
#line 2325 "string.m"
      }
#line 2315 "string.m"
  }
#line 320 "string.m"
}

#line 315 "string.m"
MR_String MR_CALL 
mercury__string__unsafe_set_char_3_f_0(
#line 315 "string.m"
  MR_Char mercury__string__C_5,
#line 315 "string.m"
  MR_Integer mercury__string__N_6,
#line 315 "string.m"
  MR_String mercury__string__S0_7)
#line 315 "string.m"
{
#line 2315 "string.m"
  {
#line 2315 "string.m"
    MR_bool mercury__string__succeeded;
#line 2315 "string.m"
    MR_String mercury__string__S_8;

#line 63 "char.opt"
{
#define MR_PROC_LABEL mercury__string__unsafe_set_char_3_f_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__string__C_5 ;
	Int =  (MR_Integer) 0 ;
		{
#line 63 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);

#line 26884 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 63 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2315 "string.m"
    if (mercury__string__succeeded)
#line 2314 "string.m"
      {
#line 2314 "string.m"
        {
#line 2314 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_set_char: null character");
        }
#line 2314 "string.m"
      }
#line 2315 "string.m"
    else
#line 2325 "string.m"
      {
#line 2329 "string.m"
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
#line 2329 "string.m"

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

#line 26943 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S_8  = Str;
#line 2329 "string.m"
}
#line 2325 "string.m"
      }
#line 2315 "string.m"
    return mercury__string__S_8;
#line 2315 "string.m"
  }
#line 315 "string.m"
}

#line 300 "string.m"
void MR_CALL 
mercury__string__det_set_char_4_p_0(
#line 300 "string.m"
  MR_Char mercury__string__Char_5,
#line 300 "string.m"
  MR_Integer mercury__string__Int_6,
#line 300 "string.m"
  MR_String mercury__string__String0_7,
#line 300 "string.m"
  MR_String * mercury__string__String_8)
#line 300 "string.m"
{
#line 2303 "string.m"
  {
#line 2303 "string.m"
    MR_bool mercury__string__succeeded;
#line 2303 "string.m"
    MR_String mercury__string__String1_9;

#line 63 "char.opt"
{
#define MR_PROC_LABEL mercury__string__det_set_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__string__Char_5 ;
	Int =  (MR_Integer) 0 ;
		{
#line 63 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);

#line 26994 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 63 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2191 "string.m"
    if (mercury__string__succeeded)
#line 2190 "string.m"
      {
#line 2190 "string.m"
        {
#line 2190 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.set_char: null character");
#line 2190 "string.m"
          return;
        }
#line 2190 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 2190 "string.m"
      }
#line 2191 "string.m"
    else
#line 2201 "string.m"
      {
#line 2205 "string.m"
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
#line 2205 "string.m"

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

#line 27065 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__String1_9  = Str;
#line 2205 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2201 "string.m"
      }
#line 2303 "string.m"
    if (mercury__string__succeeded)
#line 2302 "string.m"
      *mercury__string__String_8 = mercury__string__String1_9;
#line 2303 "string.m"
    else
#line 2304 "string.m"
      {
#line 2304 "string.m"
        {
#line 2304 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_set_char: index out of range");
#line 2304 "string.m"
          return;
        }
#line 2304 "string.m"
      }
#line 2303 "string.m"
  }
#line 300 "string.m"
}

#line 298 "string.m"
MR_String MR_CALL 
mercury__string__det_set_char_3_f_0(
#line 298 "string.m"
  MR_Char mercury__string__C_5,
#line 298 "string.m"
  MR_Integer mercury__string__N_6,
#line 298 "string.m"
  MR_String mercury__string__S0_7)
#line 298 "string.m"
{
#line 2298 "string.m"
  {
#line 2298 "string.m"
    MR_bool mercury__string__succeeded;
#line 2298 "string.m"
    MR_String mercury__string__S_8;

#line 2298 "string.m"
    {
#line 2298 "string.m"
      mercury__string__det_set_char_4_p_0(mercury__string__C_5, mercury__string__N_6, mercury__string__S0_7, &mercury__string__S_8);
    }
#line 2298 "string.m"
    return mercury__string__S_8;
#line 2298 "string.m"
  }
#line 298 "string.m"
}

#line 286 "string.m"
MR_bool MR_CALL 
mercury__string__set_char_4_p_0(
#line 286 "string.m"
  MR_Char mercury__string__Char_5,
#line 286 "string.m"
  MR_Integer mercury__string__Index_6,
#line 286 "string.m"
  MR_String mercury__string__STATE_VARIABLE_Str_0_8,
#line 286 "string.m"
  MR_String * mercury__string__STATE_VARIABLE_Str_9)
#line 286 "string.m"
{
#line 2191 "string.m"
  {
#line 2191 "string.m"
    MR_bool mercury__string__succeeded;

#line 63 "char.opt"
{
#define MR_PROC_LABEL mercury__string__set_char_4_p_0

	MR_Char Character;
	MR_Integer Int;
	MR_bool SUCCESS_INDICATOR;

	Character =  mercury__string__Char_5 ;
	Int =  (MR_Integer) 0 ;
		{
#line 63 "char.opt"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);

#line 27162 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 63 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2191 "string.m"
    if (mercury__string__succeeded)
#line 2190 "string.m"
      {
#line 2190 "string.m"
        {
#line 2190 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.set_char: null character");
        }
#line 2190 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 2190 "string.m"
      }
#line 2191 "string.m"
    else
#line 2201 "string.m"
      {
#line 2205 "string.m"
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
#line 2205 "string.m"

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

#line 27231 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__STATE_VARIABLE_Str_9  = Str;
#line 2205 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2201 "string.m"
      }
#line 2191 "string.m"
    return mercury__string__succeeded;
#line 2191 "string.m"
  }
#line 286 "string.m"
}

#line 271 "string.m"
void MR_CALL 
mercury__string__unsafe_index_code_unit_3_p_0(
#line 271 "string.m"
  MR_String mercury__string__Str_1,
#line 271 "string.m"
  MR_Integer mercury__string__Index_2,
#line 271 "string.m"
  MR_Integer * mercury__string__Code_3)
#line 271 "string.m"
{
#line 2157 "string.m"
  {
#line 2157 "string.m"
    MR_bool mercury__string__succeeded;

#line 2160 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_code_unit_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Str_1 ;
	Index =  mercury__string__Index_2 ;
		{
#line 2160 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 27282 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Code_3  = Code;
#line 2160 "string.m"
}
#line 2157 "string.m"
  }
#line 271 "string.m"
}

#line 263 "string.m"
MR_bool MR_CALL 
mercury__string__unsafe_prev_index_4_p_0(
#line 263 "string.m"
  MR_String mercury__string__Str_1,
#line 263 "string.m"
  MR_Integer mercury__string__Index_2,
#line 263 "string.m"
  MR_Integer * mercury__string__PrevIndex_3,
#line 263 "string.m"
  MR_Char * mercury__string__Ch_4)
#line 263 "string.m"
{
#line 2029 "string.m"
  {
#line 2029 "string.m"
    MR_bool mercury__string__succeeded;

#line 2033 "string.m"
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
#line 2033 "string.m"

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

#line 27340 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__PrevIndex_3  = PrevIndex;
	 *mercury__string__Ch_4  = Ch;
#line 2033 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2029 "string.m"
    return mercury__string__succeeded;
#line 2029 "string.m"
  }
#line 263 "string.m"
}

#line 253 "string.m"
MR_bool MR_CALL 
mercury__string__prev_index_4_p_0(
#line 253 "string.m"
  MR_String mercury__string__Str_5,
#line 253 "string.m"
  MR_Integer mercury__string__Index_6,
#line 253 "string.m"
  MR_Integer * mercury__string__CharIndex_7,
#line 253 "string.m"
  MR_Char * mercury__string__Char_8)
#line 253 "string.m"
{
#line 2021 "string.m"
  {
#line 2021 "string.m"
    MR_bool mercury__string__succeeded;
#line 2021 "string.m"
    MR_Integer mercury__string__Len_9;
#line 2021 "string.m"
    MR_Integer mercury__string__V_10_10;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 27393 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_9  = Length;
#line 2400 "string.m"
}
#line 2023 "string.m"
    mercury__string__V_10_10 = (mercury__string__Index_6 - (MR_Integer) 1);
#line 2134 "string.m"
{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__V_10_10 ;
	Length =  mercury__string__Len_9 ;
		{
#line 2134 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 27424 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2134 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2021 "string.m"
    if (mercury__string__succeeded)
#line 2021 "string.m"
      {
#line 2033 "string.m"
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
#line 2033 "string.m"

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

#line 27465 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__CharIndex_7  = PrevIndex;
	 *mercury__string__Char_8  = Ch;
#line 2033 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2021 "string.m"
      }
#line 2021 "string.m"
    return mercury__string__succeeded;
#line 2021 "string.m"
  }
#line 253 "string.m"
}

#line 245 "string.m"
MR_bool MR_CALL 
mercury__string__unsafe_index_next_4_p_0(
#line 245 "string.m"
  MR_String mercury__string__Str_1,
#line 245 "string.m"
  MR_Integer mercury__string__Index_2,
#line 245 "string.m"
  MR_Integer * mercury__string__NextIndex_3,
#line 245 "string.m"
  MR_Char * mercury__string__Ch_4)
#line 245 "string.m"
{
#line 1940 "string.m"
  {
#line 1940 "string.m"
    MR_bool mercury__string__succeeded;

#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 27528 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__NextIndex_3  = NextIndex;
	 *mercury__string__Ch_4  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1940 "string.m"
    return mercury__string__succeeded;
#line 1940 "string.m"
  }
#line 245 "string.m"
}

#line 235 "string.m"
MR_bool MR_CALL 
mercury__string__index_next_4_p_0(
#line 235 "string.m"
  MR_String mercury__string__Str_5,
#line 235 "string.m"
  MR_Integer mercury__string__Index_6,
#line 235 "string.m"
  MR_Integer * mercury__string__NextIndex_7,
#line 235 "string.m"
  MR_Char * mercury__string__Char_8)
#line 235 "string.m"
{
#line 1932 "string.m"
  {
#line 1932 "string.m"
    MR_bool mercury__string__succeeded;
#line 1932 "string.m"
    MR_Integer mercury__string__Len_9;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 27579 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_9  = Length;
#line 2400 "string.m"
}
#line 2134 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_6 ;
	Length =  mercury__string__Len_9 ;
		{
#line 2134 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 27608 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2134 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1932 "string.m"
    if (mercury__string__succeeded)
#line 1932 "string.m"
      {
#line 1944 "string.m"
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
#line 1944 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 27646 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__NextIndex_7  = NextIndex;
	 *mercury__string__Char_8  = Ch;
#line 1944 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1932 "string.m"
      }
#line 1932 "string.m"
    return mercury__string__succeeded;
#line 1932 "string.m"
  }
#line 235 "string.m"
}

#line 227 "string.m"
MR_Char MR_CALL 
mercury__string__unsafe_elem_2_f_0(
#line 227 "string.m"
  MR_Integer mercury__string__Index_5,
#line 227 "string.m"
  MR_String mercury__string__String_4)
#line 227 "string.m"
{
#line 1870 "string.m"
  {
#line 1870 "string.m"
    MR_bool mercury__string__succeeded;
#line 1870 "string.m"
    MR_Char mercury__string__HeadVar__3_3;
#line 1870 "string.m"
    MR_Char mercury__string__CharPrime_12;

#line 1880 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_elem_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__Index_5 ;
		{
#line 1880 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 27705 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_12  = Ch;
#line 1880 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1870 "string.m"
    if (mercury__string__succeeded)
#line 1869 "string.m"
      mercury__string__HeadVar__3_3 = mercury__string__CharPrime_12;
#line 1870 "string.m"
    else
#line 1871 "string.m"
      {
#line 1871 "string.m"
        {
#line 1871 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
        }
#line 1871 "string.m"
      }
#line 1870 "string.m"
    return mercury__string__HeadVar__3_3;
#line 1870 "string.m"
  }
#line 227 "string.m"
}

#line 222 "string.m"
MR_Char MR_CALL 
mercury__string__elem_2_f_0(
#line 222 "string.m"
  MR_Integer mercury__string__Index_5,
#line 222 "string.m"
  MR_String mercury__string__String_4)
#line 222 "string.m"
{
#line 1927 "string.m"
  {
#line 1927 "string.m"
    MR_bool mercury__string__succeeded;
#line 1927 "string.m"
    MR_Char mercury__string__HeadVar__3_3;

#line 1927 "string.m"
    {
#line 1927 "string.m"
      return mercury__string__HeadVar__3_3 = mercury__string__det_index_2_f_0(mercury__string__String_4, mercury__string__Index_5);
    }
#line 1927 "string.m"
    return mercury__string__HeadVar__3_3;
#line 1927 "string.m"
  }
#line 222 "string.m"
}

#line 217 "string.m"
void MR_CALL 
mercury__string__unsafe_index_3_p_0(
#line 217 "string.m"
  MR_String mercury__string__Str_4,
#line 217 "string.m"
  MR_Integer mercury__string__Index_5,
#line 217 "string.m"
  MR_Char * mercury__string__Char_6)
#line 217 "string.m"
{
#line 1870 "string.m"
  {
#line 1870 "string.m"
    MR_bool mercury__string__succeeded;
#line 1870 "string.m"
    MR_Char mercury__string__CharPrime_7;

#line 1880 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_4 ;
	Index =  mercury__string__Index_5 ;
		{
#line 1880 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 27804 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_7  = Ch;
#line 1880 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1870 "string.m"
    if (mercury__string__succeeded)
#line 1869 "string.m"
      *mercury__string__Char_6 = mercury__string__CharPrime_7;
#line 1870 "string.m"
    else
#line 1871 "string.m"
      {
#line 1871 "string.m"
        {
#line 1871 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
#line 1871 "string.m"
          return;
        }
#line 1871 "string.m"
      }
#line 1870 "string.m"
  }
#line 217 "string.m"
}

#line 216 "string.m"
MR_Char MR_CALL 
mercury__string__unsafe_index_2_f_0(
#line 216 "string.m"
  MR_String mercury__string__S_4,
#line 216 "string.m"
  MR_Integer mercury__string__N_5)
#line 216 "string.m"
{
#line 1870 "string.m"
  {
#line 1870 "string.m"
    MR_bool mercury__string__succeeded;
#line 1870 "string.m"
    MR_Char mercury__string__C_6;
#line 1870 "string.m"
    MR_Char mercury__string__CharPrime_10;

#line 1880 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_4 ;
	Index =  mercury__string__N_5 ;
		{
#line 1880 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 27875 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_10  = Ch;
#line 1880 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1870 "string.m"
    if (mercury__string__succeeded)
#line 1869 "string.m"
      mercury__string__C_6 = mercury__string__CharPrime_10;
#line 1870 "string.m"
    else
#line 1871 "string.m"
      {
#line 1871 "string.m"
        {
#line 1871 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
        }
#line 1871 "string.m"
      }
#line 1870 "string.m"
    return mercury__string__C_6;
#line 1870 "string.m"
  }
#line 216 "string.m"
}

#line 205 "string.m"
void MR_CALL 
mercury__string__det_index_3_p_0(
#line 205 "string.m"
  MR_String mercury__string__String_4,
#line 205 "string.m"
  MR_Integer mercury__string__Int_5,
#line 205 "string.m"
  MR_Char * mercury__string__Char_6)
#line 205 "string.m"
{
#line 1860 "string.m"
  {
#line 1860 "string.m"
    MR_bool mercury__string__succeeded;
#line 1860 "string.m"
    MR_Char mercury__string__Char0_7;
#line 1846 "string.m"
    MR_Integer mercury__string__Len_12;
#line 1870 "string.m"
    MR_Char mercury__string__CharPrime_24;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 27942 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_12  = Length;
#line 2400 "string.m"
}
#line 2134 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Int_5 ;
	Length =  mercury__string__Len_12 ;
		{
#line 2134 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 27971 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2134 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1846 "string.m"
    if (mercury__string__succeeded)
#line 1846 "string.m"
      {
#line 1880 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__Int_5 ;
		{
#line 1880 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 28005 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_24  = Ch;
#line 1880 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1870 "string.m"
        if (mercury__string__succeeded)
#line 1869 "string.m"
          mercury__string__Char0_7 = mercury__string__CharPrime_24;
#line 1870 "string.m"
        else
#line 1871 "string.m"
          {
#line 1871 "string.m"
            {
#line 1871 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
#line 1871 "string.m"
              return;
            }
#line 1871 "string.m"
          }
#line 1870 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 1846 "string.m"
      }
#line 1860 "string.m"
    if (mercury__string__succeeded)
#line 1859 "string.m"
      *mercury__string__Char_6 = mercury__string__Char0_7;
#line 1860 "string.m"
    else
#line 1861 "string.m"
      {
#line 1861 "string.m"
        {
#line 1861 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_index: index out of range");
#line 1861 "string.m"
          return;
        }
#line 1861 "string.m"
      }
#line 1860 "string.m"
  }
#line 205 "string.m"
}

#line 204 "string.m"
MR_Char MR_CALL 
mercury__string__det_index_2_f_0(
#line 204 "string.m"
  MR_String mercury__string__S_4,
#line 204 "string.m"
  MR_Integer mercury__string__N_5)
#line 204 "string.m"
{
#line 1860 "string.m"
  {
#line 1860 "string.m"
    MR_bool mercury__string__succeeded;
#line 1860 "string.m"
    MR_Char mercury__string__C_6;
#line 1860 "string.m"
    MR_Char mercury__string__Char0_10;
#line 1846 "string.m"
    MR_Integer mercury__string__Len_15;
#line 1870 "string.m"
    MR_Char mercury__string__CharPrime_27;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_4 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 28093 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_15  = Length;
#line 2400 "string.m"
}
#line 2134 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__N_5 ;
	Length =  mercury__string__Len_15 ;
		{
#line 2134 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 28122 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2134 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1846 "string.m"
    if (mercury__string__succeeded)
#line 1846 "string.m"
      {
#line 1880 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_4 ;
	Index =  mercury__string__N_5 ;
		{
#line 1880 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 28156 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_27  = Ch;
#line 1880 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1870 "string.m"
        if (mercury__string__succeeded)
#line 1869 "string.m"
          mercury__string__Char0_10 = mercury__string__CharPrime_27;
#line 1870 "string.m"
        else
#line 1871 "string.m"
          {
#line 1871 "string.m"
            {
#line 1871 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
            }
#line 1871 "string.m"
          }
#line 1870 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 1846 "string.m"
      }
#line 1860 "string.m"
    if (mercury__string__succeeded)
#line 1859 "string.m"
      mercury__string__C_6 = mercury__string__Char0_10;
#line 1860 "string.m"
    else
#line 1861 "string.m"
      {
#line 1861 "string.m"
        {
#line 1861 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_index: index out of range");
        }
#line 1861 "string.m"
      }
#line 1860 "string.m"
    return mercury__string__C_6;
#line 1860 "string.m"
  }
#line 204 "string.m"
}

#line 194 "string.m"
MR_bool MR_CALL 
mercury__string__index_3_p_0(
#line 194 "string.m"
  MR_String mercury__string__Str_4,
#line 194 "string.m"
  MR_Integer mercury__string__Index_5,
#line 194 "string.m"
  MR_Char * mercury__string__Char_6)
#line 194 "string.m"
{
#line 1846 "string.m"
  {
#line 1846 "string.m"
    MR_bool mercury__string__succeeded;
#line 1846 "string.m"
    MR_Integer mercury__string__Len_7;
#line 1870 "string.m"
    MR_Char mercury__string__CharPrime_19;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_4 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 28240 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_7  = Length;
#line 2400 "string.m"
}
#line 2134 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_5 ;
	Length =  mercury__string__Len_7 ;
		{
#line 2134 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 28269 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2134 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1846 "string.m"
    if (mercury__string__succeeded)
#line 1846 "string.m"
      {
#line 1880 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_4 ;
	Index =  mercury__string__Index_5 ;
		{
#line 1880 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 28303 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_19  = Ch;
#line 1880 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1870 "string.m"
        if (mercury__string__succeeded)
#line 1869 "string.m"
          *mercury__string__Char_6 = mercury__string__CharPrime_19;
#line 1870 "string.m"
        else
#line 1871 "string.m"
          {
#line 1871 "string.m"
            {
#line 1871 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
            }
#line 1871 "string.m"
          }
#line 1870 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 1846 "string.m"
      }
#line 1846 "string.m"
    return mercury__string__succeeded;
#line 1846 "string.m"
  }
#line 194 "string.m"
}

#line 179 "string.m"
void MR_CALL 
mercury__string__duplicate_char_3_p_0(
#line 179 "string.m"
  MR_Char mercury__string__Char_4,
#line 179 "string.m"
  MR_Integer mercury__string__Count_5,
#line 179 "string.m"
  MR_String * mercury__string__String_6)
#line 179 "string.m"
{
#line 1829 "string.m"
  {
#line 1829 "string.m"
    MR_bool mercury__string__succeeded;
#line 1829 "string.m"
    MR_Word mercury__string__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 1829 "string.m"
    MR_Word mercury__string__V_7_7;
#line 1829 "string.m"
    MR_Word mercury__string__V_6_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1442 "string.m"
    MR_String mercury__string__Str0_23;

#line 145 "list.opt"
    {
#line 145 "list.opt"
      mercury__string__V_7_7 = mercury__list__duplicate_2_3_f_0(mercury__string__TypeCtorInfo_8_8, mercury__string__Count_5, ((MR_Box) (MR_Word) (mercury__string__Char_4)), mercury__string__V_6_15);
    }
#line 1440 "string.m"
    {
#line 1440 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_7_7, &mercury__string__Str0_23);
    }
#line 1442 "string.m"
    if (mercury__string__succeeded)
#line 1441 "string.m"
      *mercury__string__String_6 = mercury__string__Str0_23;
#line 1442 "string.m"
    else
#line 1443 "string.m"
      {
#line 1443 "string.m"
        {
#line 1443 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1443 "string.m"
          return;
        }
#line 1443 "string.m"
      }
#line 1829 "string.m"
  }
#line 179 "string.m"
}

#line 178 "string.m"
MR_String MR_CALL 
mercury__string__duplicate_char_2_f_0(
#line 178 "string.m"
  MR_Char mercury__string__C_4,
#line 178 "string.m"
  MR_Integer mercury__string__N_5)
#line 178 "string.m"
{
#line 1827 "string.m"
  {
#line 1827 "string.m"
    MR_bool mercury__string__succeeded;
#line 1827 "string.m"
    MR_String mercury__string__S_6;

#line 1827 "string.m"
    {
#line 1827 "string.m"
      mercury__string__duplicate_char_3_p_0(mercury__string__C_4, mercury__string__N_5, &mercury__string__S_6);
    }
#line 1827 "string.m"
    return mercury__string__S_6;
#line 1827 "string.m"
  }
#line 178 "string.m"
}

#line 171 "string.m"
MR_bool MR_CALL 
mercury__string__from_code_unit_list_2_p_0(
#line 171 "string.m"
  MR_Word mercury__string__CodeList_1,
#line 171 "string.m"
  MR_String * mercury__string__Str_2)
#line 171 "string.m"
{
#line 1701 "string.m"
  {
#line 1701 "string.m"
    MR_bool mercury__string__succeeded;

#line 1705 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_code_unit_list_2_p_0

	MR_Word CodeList;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	CodeList =  mercury__string__CodeList_1 ;
		{
#line 1705 "string.m"

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

#line 28484 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
#line 1705 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1701 "string.m"
    return mercury__string__succeeded;
#line 1701 "string.m"
  }
#line 171 "string.m"
}

#line 165 "string.m"
void MR_CALL 
mercury__string__to_code_unit_list_2_p_0(
#line 165 "string.m"
  MR_String mercury__string__String_3,
#line 165 "string.m"
  MR_Word * mercury__string__List_4)
#line 165 "string.m"
{
#line 1684 "string.m"
  {
#line 1684 "string.m"
    MR_bool mercury__string__succeeded;
#line 1684 "string.m"
    MR_Integer mercury__string__V_6_6;

#line 2400 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2400 "string.m"

    Length = strlen(Str);

#line 28530 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_6_6  = Length;
#line 2400 "string.m"
}
#line 1685 "string.m"
    {
#line 1685 "string.m"
      mercury__string__to_code_unit_list_loop_4_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__V_6_6, mercury__string__List_4);
#line 1685 "string.m"
      return;
    }
#line 1684 "string.m"
  }
#line 165 "string.m"
}

#line 161 "string.m"
MR_bool MR_CALL 
mercury__string__semidet_from_rev_char_list_2_p_0(
#line 161 "string.m"
  MR_Word mercury__string__Chars_1,
#line 161 "string.m"
  MR_String * mercury__string__Str_2)
#line 161 "string.m"
{
#line 1584 "string.m"
  {
#line 1584 "string.m"
    MR_bool mercury__string__succeeded;

#line 1588 "string.m"
{
#define MR_PROC_LABEL mercury__string__semidet_from_rev_char_list_2_p_0

	MR_Word Chars;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Chars =  mercury__string__Chars_1 ;
		{
#line 1588 "string.m"
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
#line 28627 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
#line 1588 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1584 "string.m"
    return mercury__string__succeeded;
#line 1584 "string.m"
  }
#line 161 "string.m"
}

#line 153 "string.m"
void MR_CALL 
mercury__string__from_rev_char_list_2_p_0(
#line 153 "string.m"
  MR_Word mercury__string__Chars_3,
#line 153 "string.m"
  MR_String * mercury__string__Str_4)
#line 153 "string.m"
{
#line 1580 "string.m"
  {
#line 1580 "string.m"
    MR_bool mercury__string__succeeded;
#line 1580 "string.m"
    MR_String mercury__string__Str0_5;

#line 1578 "string.m"
    {
#line 1578 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__Chars_3, &mercury__string__Str0_5);
    }
#line 1580 "string.m"
    if (mercury__string__succeeded)
#line 1579 "string.m"
      *mercury__string__Str_4 = mercury__string__Str0_5;
#line 1580 "string.m"
    else
#line 1581 "string.m"
      {
#line 1581 "string.m"
        {
#line 1581 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
#line 1581 "string.m"
          return;
        }
#line 1581 "string.m"
      }
#line 1580 "string.m"
  }
#line 153 "string.m"
}

#line 152 "string.m"
MR_String MR_CALL 
mercury__string__from_rev_char_list_1_f_0(
#line 152 "string.m"
  MR_Word mercury__string__Cs_3)
#line 152 "string.m"
{
#line 1580 "string.m"
  {
#line 1580 "string.m"
    MR_bool mercury__string__succeeded;
#line 1580 "string.m"
    MR_String mercury__string__S_4;
#line 1580 "string.m"
    MR_String mercury__string__Str0_7;

#line 1578 "string.m"
    {
#line 1578 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__Cs_3, &mercury__string__Str0_7);
    }
#line 1580 "string.m"
    if (mercury__string__succeeded)
#line 1579 "string.m"
      mercury__string__S_4 = mercury__string__Str0_7;
#line 1580 "string.m"
    else
#line 1581 "string.m"
      {
#line 1581 "string.m"
        {
#line 1581 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
        }
#line 1581 "string.m"
      }
#line 1580 "string.m"
    return mercury__string__S_4;
#line 1580 "string.m"
  }
#line 152 "string.m"
}

#line 143 "string.m"
MR_bool MR_CALL 
mercury__string__semidet_from_char_list_2_p_0(
#line 143 "string.m"
  MR_Word mercury__string__CharList_1,
#line 143 "string.m"
  MR_String * mercury__string__Str_2)
#line 143 "string.m"
{
#line 1446 "string.m"
  {
#line 1446 "string.m"
    MR_bool mercury__string__succeeded;

#line 1450 "string.m"
{
#define MR_PROC_LABEL mercury__string__semidet_from_char_list_2_p_0

	MR_Word CharList;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	CharList =  mercury__string__CharList_1 ;
		{
#line 1450 "string.m"
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
#line 28809 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
#line 1450 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1446 "string.m"
    return mercury__string__succeeded;
#line 1446 "string.m"
  }
#line 143 "string.m"
}

#line 135 "string.m"
void MR_CALL 
mercury__string__from_char_list_2_p_1(
#line 135 "string.m"
  MR_Word * mercury__string__Chars_1,
#line 135 "string.m"
  MR_String mercury__string__Str_2)
#line 135 "string.m"
{
#line 1360 "string.m"
  {
#line 1360 "string.m"
    MR_bool mercury__string__succeeded;

#line 1364 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_char_list_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_2 ;
		{
#line 1364 "string.m"
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
#line 28864 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Chars_1  = CharList;
#line 1364 "string.m"
}
#line 1360 "string.m"
  }
#line 135 "string.m"
}

#line 134 "string.m"
void MR_CALL 
mercury__string__from_char_list_2_p_0(
#line 134 "string.m"
  MR_Word mercury__string__Chars_1,
#line 134 "string.m"
  MR_String * mercury__string__Str_2)
#line 134 "string.m"
{
#line 1442 "string.m"
  {
#line 1442 "string.m"
    MR_bool mercury__string__succeeded;
#line 1442 "string.m"
    MR_String mercury__string__Str0_7;

#line 1440 "string.m"
    {
#line 1440 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__Chars_1, &mercury__string__Str0_7);
    }
#line 1442 "string.m"
    if (mercury__string__succeeded)
#line 1441 "string.m"
      *mercury__string__Str_2 = mercury__string__Str0_7;
#line 1442 "string.m"
    else
#line 1443 "string.m"
      {
#line 1443 "string.m"
        {
#line 1443 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1443 "string.m"
          return;
        }
#line 1443 "string.m"
      }
#line 1442 "string.m"
  }
#line 134 "string.m"
}

#line 132 "string.m"
MR_String MR_CALL 
mercury__string__from_char_list_1_f_0(
#line 132 "string.m"
  MR_Word mercury__string__Cs_3)
#line 132 "string.m"
{
#line 1442 "string.m"
  {
#line 1442 "string.m"
    MR_bool mercury__string__succeeded;
#line 1442 "string.m"
    MR_String mercury__string__S_4;
#line 1442 "string.m"
    MR_String mercury__string__Str0_9;

#line 1440 "string.m"
    {
#line 1440 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__Cs_3, &mercury__string__Str0_9);
    }
#line 1442 "string.m"
    if (mercury__string__succeeded)
#line 1441 "string.m"
      mercury__string__S_4 = mercury__string__Str0_9;
#line 1442 "string.m"
    else
#line 1443 "string.m"
      {
#line 1443 "string.m"
        {
#line 1443 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1443 "string.m"
      }
#line 1442 "string.m"
    return mercury__string__S_4;
#line 1442 "string.m"
  }
#line 132 "string.m"
}

#line 124 "string.m"
void MR_CALL 
mercury__string__to_char_list_2_p_1(
#line 124 "string.m"
  MR_String * mercury__string__Str_1,
#line 124 "string.m"
  MR_Word mercury__string__CharList_2)
#line 124 "string.m"
{
#line 1442 "string.m"
  {
#line 1442 "string.m"
    MR_bool mercury__string__succeeded;
#line 1442 "string.m"
    MR_String mercury__string__Str0_11;

#line 1440 "string.m"
    {
#line 1440 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__CharList_2, &mercury__string__Str0_11);
    }
#line 1442 "string.m"
    if (mercury__string__succeeded)
#line 1441 "string.m"
      *mercury__string__Str_1 = mercury__string__Str0_11;
#line 1442 "string.m"
    else
#line 1443 "string.m"
      {
#line 1443 "string.m"
        {
#line 1443 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1443 "string.m"
          return;
        }
#line 1443 "string.m"
      }
#line 1442 "string.m"
  }
#line 124 "string.m"
}

#line 123 "string.m"
void MR_CALL 
mercury__string__to_char_list_2_p_0(
#line 123 "string.m"
  MR_String mercury__string__Str_1,
#line 123 "string.m"
  MR_Word * mercury__string__CharList_2)
#line 123 "string.m"
{
#line 1360 "string.m"
  {
#line 1360 "string.m"
    MR_bool mercury__string__succeeded;

#line 1364 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_char_list_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_1 ;
		{
#line 1364 "string.m"
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
#line 29043 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__CharList_2  = CharList;
#line 1364 "string.m"
}
#line 1360 "string.m"
  }
#line 123 "string.m"
}

#line 121 "string.m"
MR_Word MR_CALL 
mercury__string__to_char_list_1_f_0(
#line 121 "string.m"
  MR_String mercury__string__S_3)
#line 121 "string.m"
{
#line 1360 "string.m"
  {
#line 1360 "string.m"
    MR_bool mercury__string__succeeded;
#line 1360 "string.m"
    MR_Word mercury__string__Cs_4;

#line 1364 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_char_list_1_f_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__S_3 ;
		{
#line 1364 "string.m"
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
#line 29093 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Cs_4  = CharList;
#line 1364 "string.m"
}
#line 1360 "string.m"
    return mercury__string__Cs_4;
#line 1360 "string.m"
  }
#line 121 "string.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module string. */
