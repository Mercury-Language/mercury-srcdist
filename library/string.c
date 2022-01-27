/*
** Automatically generated from `string.m'
** by the Mercury compiler,
** version rotd-2014-11-20
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
#include "string.to_string.mih"



#line 4643 "string.m"
struct mercury__string__foldr_between_2_6_p_4_env_0_s {
#line 4643 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18;
#line 4643 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_4_env_0__Closure_7;
#line 4643 "string.m"
  MR_String mercury__string__foldr_between_2_6_p_4_env_0__String_8;
#line 4643 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_4_env_0__Start_9;
#line 4643 "string.m"
  MR_Box * mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15;
#line 4643 "string.m"
  MR_Cont mercury__string__foldr_between_2_6_p_4_env_0__cont;
#line 4643 "string.m"
  void * mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr;
#line 4654 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_4_env_0__J_12;
#line 4652 "string.m"
  MR_Box mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16;
#line 4643 "string.m"
};

#line 4641 "string.m"
struct mercury__string__foldr_between_2_6_p_3_env_0_s {
#line 4641 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18;
#line 4641 "string.m"
  MR_Word mercury__string__foldr_between_2_6_p_3_env_0__Closure_7;
#line 4641 "string.m"
  MR_String mercury__string__foldr_between_2_6_p_3_env_0__String_8;
#line 4641 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_3_env_0__Start_9;
#line 4641 "string.m"
  MR_Box * mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15;
#line 4641 "string.m"
  MR_Cont mercury__string__foldr_between_2_6_p_3_env_0__cont;
#line 4641 "string.m"
  void * mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr;
#line 4654 "string.m"
  MR_Integer mercury__string__foldr_between_2_6_p_3_env_0__J_12;
#line 4652 "string.m"
  MR_Box mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16;
#line 4641 "string.m"
};

#line 4588 "string.m"
struct mercury__string__foldl2_between_2_8_p_5_env_0_s {
#line 4588 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25;
#line 4588 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26;
#line 4588 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9;
#line 4588 "string.m"
  MR_String mercury__string__foldl2_between_2_8_p_5_env_0__String_10;
#line 4588 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_5_env_0__End_12;
#line 4588 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18;
#line 4588 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20;
#line 4588 "string.m"
  MR_Cont mercury__string__foldl2_between_2_8_p_5_env_0__cont;
#line 4588 "string.m"
  void * mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr;
#line 4599 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_5_env_0__J_15;
#line 4597 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21;
#line 4597 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22;
#line 4588 "string.m"
};

#line 4586 "string.m"
struct mercury__string__foldl2_between_2_8_p_4_env_0_s {
#line 4586 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25;
#line 4586 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26;
#line 4586 "string.m"
  MR_Word mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9;
#line 4586 "string.m"
  MR_String mercury__string__foldl2_between_2_8_p_4_env_0__String_10;
#line 4586 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_4_env_0__End_12;
#line 4586 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18;
#line 4586 "string.m"
  MR_Box * mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20;
#line 4586 "string.m"
  MR_Cont mercury__string__foldl2_between_2_8_p_4_env_0__cont;
#line 4586 "string.m"
  void * mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr;
#line 4599 "string.m"
  MR_Integer mercury__string__foldl2_between_2_8_p_4_env_0__J_15;
#line 4597 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21;
#line 4597 "string.m"
  MR_Box mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22;
#line 4586 "string.m"
};

#line 4561 "string.m"
struct mercury__string__foldl_between_2_6_p_4_env_0_s {
#line 4561 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18;
#line 4561 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_4_env_0__Closure_7;
#line 4561 "string.m"
  MR_String mercury__string__foldl_between_2_6_p_4_env_0__String_8;
#line 4561 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_4_env_0__End_10;
#line 4561 "string.m"
  MR_Box * mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15;
#line 4561 "string.m"
  MR_Cont mercury__string__foldl_between_2_6_p_4_env_0__cont;
#line 4561 "string.m"
  void * mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr;
#line 4572 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_4_env_0__J_12;
#line 4570 "string.m"
  MR_Box mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16;
#line 4561 "string.m"
};

#line 4559 "string.m"
struct mercury__string__foldl_between_2_6_p_3_env_0_s {
#line 4559 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18;
#line 4559 "string.m"
  MR_Word mercury__string__foldl_between_2_6_p_3_env_0__Closure_7;
#line 4559 "string.m"
  MR_String mercury__string__foldl_between_2_6_p_3_env_0__String_8;
#line 4559 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_3_env_0__End_10;
#line 4559 "string.m"
  MR_Box * mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15;
#line 4559 "string.m"
  MR_Cont mercury__string__foldl_between_2_6_p_3_env_0__cont;
#line 4559 "string.m"
  void * mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr;
#line 4572 "string.m"
  MR_Integer mercury__string__foldl_between_2_6_p_3_env_0__J_12;
#line 4570 "string.m"
  MR_Box mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16;
#line 4559 "string.m"
};

#line 3221 "string.m"
struct mercury__string__mercury_append_3_p_3_env_0_s {
#line 3221 "string.m"
  MR_String * mercury__string__mercury_append_3_p_3_env_0__X_4;
#line 3221 "string.m"
  MR_String * mercury__string__mercury_append_3_p_3_env_0__Y_5;
#line 3221 "string.m"
  MR_Cont mercury__string__mercury_append_3_p_3_env_0__cont;
#line 3221 "string.m"
  void * mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr;
#line 3223 "string.m"
  MR_bool mercury__string__mercury_append_3_p_3_env_0__succeeded;
#line 3223 "string.m"
  MR_Word mercury__string__mercury_append_3_p_3_env_0__XList_7;
#line 3223 "string.m"
  MR_Word mercury__string__mercury_append_3_p_3_env_0__YList_8;
#line 3221 "string.m"
};


#line 258 "string.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__list__ti_list_1builtin__type_ctor_info_string_0;

#line 261 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_0[1];

#line 264 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_justified_column_0_0;

#line 267 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_1[1];

#line 270 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_justified_column_0_1;

#line 273 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_0[1];

#line 276 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_1[1];

#line 279 "string.c"
static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_justified_column_0[2];

#line 282 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_justified_column_0[2];

#line 285 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_justified_column_0[2];

#line 288 "string.c"
static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_0;

#line 291 "string.c"
static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_1;

#line 294 "string.c"
static const MR_EnumFunctorDescPtr mercury__string__string__enum_value_ordered_justify_sense_0[2];

#line 297 "string.c"
static const MR_EnumFunctorDescPtr mercury__string__string__enum_name_ordered_justify_sense_0[2];

#line 300 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_justify_sense_0[2];

#line 303 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_line_0[1];

#line 306 "string.c"
static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_line_0;

#line 309 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_0[1];

#line 312 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_0;

#line 315 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_1[1];

#line 318 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_1;

#line 321 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_2[1];

#line 324 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_2;

#line 327 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_3[1];

#line 330 "string.c"
static const MR_DuFunctorDesc mercury__string__string__du_functor_desc_poly_type_0_3;

#line 333 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_0[1];

#line 336 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_1[1];

#line 339 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_2[1];

#line 342 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_3[1];

#line 345 "string.c"
static const MR_DuPtagLayout mercury__string__string__du_ptag_ordered_poly_type_0[4];

#line 348 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_poly_type_0[4];

#line 351 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_poly_type_0[4];

#line 354 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_text_file_0[1];

#line 357 "string.c"
static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_text_file_0;

#line 360 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0_10001(
#line 363 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 365 "string.c"
  MR_Box mercury__string__wrapper_arg_2);

#line 368 "string.c"
static void MR_CALL 
mercury__string____Compare____justified_column_0_0_10001(
#line 371 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 373 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 375 "string.c"
  MR_Box mercury__string__wrapper_arg_3);

#line 378 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0_10001(
#line 381 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 383 "string.c"
  MR_Box mercury__string__wrapper_arg_2);

#line 386 "string.c"
static void MR_CALL 
mercury__string____Compare____justify_sense_0_0_10001(
#line 389 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 391 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 393 "string.c"
  MR_Box mercury__string__wrapper_arg_3);

#line 396 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____line_0_0_10001(
#line 399 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 401 "string.c"
  MR_Box mercury__string__wrapper_arg_2);

#line 404 "string.c"
static void MR_CALL 
mercury__string____Compare____line_0_0_10001(
#line 407 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 409 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 411 "string.c"
  MR_Box mercury__string__wrapper_arg_3);

#line 414 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0_10001(
#line 417 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 419 "string.c"
  MR_Box mercury__string__wrapper_arg_2);

#line 422 "string.c"
static void MR_CALL 
mercury__string____Compare____poly_type_0_0_10001(
#line 425 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 427 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 429 "string.c"
  MR_Box mercury__string__wrapper_arg_3);

#line 432 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0_10001(
#line 435 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 437 "string.c"
  MR_Box mercury__string__wrapper_arg_2);

#line 440 "string.c"
static void MR_CALL 
mercury__string____Compare____text_file_0_0_10001(
#line 443 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 445 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 447 "string.c"
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

#line 4555 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_93_95_48_6_p_0(
#line 4555 "string.m"
  MR_String mercury__string__V_21_21,
#line 4555 "string.m"
  MR_String mercury__string__String_8,
#line 4555 "string.m"
  MR_Integer mercury__string__I_9,
#line 4555 "string.m"
  MR_Integer mercury__string__End_10,
#line 4555 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4555 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15);

#line 4555 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4555 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4555 "string.m"
  MR_String mercury__string__String_8,
#line 4555 "string.m"
  MR_Integer mercury__string__I_9,
#line 4555 "string.m"
  MR_Integer mercury__string__End_10,
#line 4555 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4555 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4635 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4635 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4635 "string.m"
  MR_String mercury__string__String_8,
#line 4635 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4635 "string.m"
  MR_Integer mercury__string__I_10,
#line 4635 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4635 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4557 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_51_95_95_91_50_93_95_48_6_p_0(
#line 4557 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4557 "string.m"
  MR_String mercury__string__String_8,
#line 4557 "string.m"
  MR_Integer mercury__string__I_9,
#line 4557 "string.m"
  MR_Integer mercury__string__End_10,
#line 4557 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4557 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15);

#line 4557 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_50_93_95_48_6_p_0(
#line 4557 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4557 "string.m"
  MR_String mercury__string__String_8,
#line 4557 "string.m"
  MR_Integer mercury__string__I_9,
#line 4557 "string.m"
  MR_Integer mercury__string__End_10,
#line 4557 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4557 "string.m"
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

#line 4635 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4635 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4635 "string.m"
  MR_String mercury__string__String_8,
#line 4635 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4635 "string.m"
  MR_Integer mercury__string__I_10,
#line 4635 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4635 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4555 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_56_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4555 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4555 "string.m"
  MR_String mercury__string__String_8,
#line 4555 "string.m"
  MR_Integer mercury__string__I_9,
#line 4555 "string.m"
  MR_Integer mercury__string__End_10,
#line 4555 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4555 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15);

#line 4099 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_49_95_95_91_50_93_95_48_6_p_0(
#line 4099 "string.m"
  MR_Char mercury__string__V_21_21,
#line 4099 "string.m"
  MR_String mercury__string__Str_8,
#line 4099 "string.m"
  MR_Integer mercury__string__I_9,
#line 4099 "string.m"
  MR_Integer mercury__string__SegEnd_10,
#line 4099 "string.m"
  MR_Word mercury__string__Acc0_11,
#line 4099 "string.m"
  MR_Word * mercury__string__Acc_12);

#line 913 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(
#line 913 "string.m"
  MR_Integer mercury__string__V_20_20,
#line 913 "string.m"
  MR_String mercury__string__String_8,
#line 913 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 913 "string.m"
  MR_Integer mercury__string__End0_10,
#line 913 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 913 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15);

#line 4080 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_120_116_95_98_111_117_110_100_97_114_121_95_95_104_111_49_48_95_95_91_50_93_95_48_4_p_0(
#line 4080 "string.m"
  MR_Word mercury__string__V_11_11,
#line 4080 "string.m"
  MR_String mercury__string__String_6,
#line 4080 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4080 "string.m"
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

#line 4080 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho10__ho47_4_p_0(
#line 4080 "string.m"
  MR_String mercury__string__String_6,
#line 4080 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4080 "string.m"
  MR_Integer * mercury__string__NextWordStart_8);

#line 4060 "string.m"
static void MR_CALL 
mercury__string__words_loop__ho36_4_p_0(
#line 4060 "string.m"
  MR_String mercury__string__String_6,
#line 4060 "string.m"
  MR_Integer mercury__string__WordStart_7,
#line 4060 "string.m"
  MR_Word * mercury__string__Words_8);

#line 4080 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho35_4_p_0(
#line 4080 "string.m"
  MR_String mercury__string__String_6,
#line 4080 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4080 "string.m"
  MR_Integer * mercury__string__NextWordStart_8);

#line 2897 "string.m"
static void MR_CALL 
mercury__string__suffix_length_loop__ho33_4_p_0(
#line 2897 "string.m"
  MR_String mercury__string__S_6,
#line 2897 "string.m"
  MR_Integer mercury__string__I_7,
#line 2897 "string.m"
  MR_Integer * mercury__string__Index_8);

#line 2880 "string.m"
static void MR_CALL 
mercury__string__prefix_length_loop__ho32_4_p_0(
#line 2880 "string.m"
  MR_String mercury__string__S_6,
#line 2880 "string.m"
  MR_Integer mercury__string__I_7,
#line 2880 "string.m"
  MR_Integer * mercury__string__Index_8);

#line 2808 "string.m"
static MR_bool MR_CALL 
mercury__string__all_match_loop__ho30_3_p_0(
#line 2808 "string.m"
  MR_String mercury__string__String_5,
#line 2808 "string.m"
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

#line 4500 "string.m"
static MR_String MR_CALL 
mercury__string__IntroducedFrom__func__word_wrap_loop__4500__1_2_f_0(
#line 4500 "string.m"
  MR_String mercury__string__WordSep_2,
#line 4500 "string.m"
  MR_String mercury__string__HeadVar__2_60);

#line 4370 "string.m"
static MR_Word MR_CALL 
mercury__string__IntroducedFrom__func__replace_all__4370__1_3_f_0(
#line 4370 "string.m"
  MR_String mercury__string__Subst_7,
#line 4370 "string.m"
  MR_Char mercury__string__HeadVar__2_16,
#line 4370 "string.m"
  MR_Word mercury__string__HeadVar__3_17);

#line 4652 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_4_1(
#line 4652 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4652 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_3_1(
#line 4652 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4597 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_5_1(
#line 4597 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4597 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_4_1(
#line 4597 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4570 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_4_1(
#line 4570 "string.m"
  void * mercury__string__env_ptr_arg);

#line 4570 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_3_1(
#line 4570 "string.m"
  void * mercury__string__env_ptr_arg);

#line 3223 "string.m"
static void MR_CALL 
mercury__string__mercury_append_3_p_3_1(
#line 3223 "string.m"
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
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

#line 4905 "string.m"
MR_bool 
ML_string_to_float(
#line 4905 "string.m"
  MR_String mercury__string__FloatString_1,
#line 4905 "string.m"
  MR_Float * mercury__string__FloatVal_2)
#line 4905 "string.m"
{
#line 4905 "string.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mercury__string__to_float_2_p_0((MR_String) mercury__string__FloatString_1, (MR_Float *) mercury__string__FloatVal_2);
	return ret_value;
}


#line 1215 "string.c"
static const MR_FA_TypeInfo_Struct1 mercury__string__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1223 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__string__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1228 "string.c"
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

#line 1243 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_justified_column_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__string__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1248 "string.c"
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

#line 1263 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_0[1] = {
  &mercury__string__string__du_functor_desc_justified_column_0_0
};

#line 1268 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_justified_column_0_1[1] = {
  &mercury__string__string__du_functor_desc_justified_column_0_1
};

#line 1273 "string.c"
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

#line 1287 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_justified_column_0[2] = {
  &mercury__string__string__du_functor_desc_justified_column_0_0,
  &mercury__string__string__du_functor_desc_justified_column_0_1
};

#line 1293 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_justified_column_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1299 "string.c"
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

#line 1320 "string.c"
static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_0 = {
  (MR_String) "just_left",
  (MR_Integer) 0
};

#line 1326 "string.c"
static const MR_EnumFunctorDesc mercury__string__string__enum_functor_desc_justify_sense_0_1 = {
  (MR_String) "just_right",
  (MR_Integer) 1
};

#line 1332 "string.c"
static const MR_EnumFunctorDescPtr mercury__string__string__enum_value_ordered_justify_sense_0[2] = {
  &mercury__string__string__enum_functor_desc_justify_sense_0_0,
  &mercury__string__string__enum_functor_desc_justify_sense_0_1
};

#line 1338 "string.c"
static const MR_EnumFunctorDescPtr mercury__string__string__enum_name_ordered_justify_sense_0[2] = {
  &mercury__string__string__enum_functor_desc_justify_sense_0_0,
  &mercury__string__string__enum_functor_desc_justify_sense_0_1
};

#line 1344 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_justify_sense_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1350 "string.c"
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

#line 1371 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_line_0[1] = {
  (MR_Integer) 0
};

#line 1376 "string.c"
static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_line_0 = {
  (MR_String) "line",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 1383 "string.c"
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

#line 1404 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0
};

#line 1409 "string.c"
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

#line 1424 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1429 "string.c"
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

#line 1444 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1449 "string.c"
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

#line 1464 "string.c"
static const MR_PseudoTypeInfo mercury__string__string__field_types_poly_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0
};

#line 1469 "string.c"
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

#line 1484 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_0[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_0
};

#line 1489 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_1[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_1
};

#line 1494 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_2[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_2
};

#line 1499 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_stag_ordered_poly_type_0_3[1] = {
  &mercury__string__string__du_functor_desc_poly_type_0_3
};

#line 1504 "string.c"
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

#line 1528 "string.c"
static const MR_DuFunctorDescPtr mercury__string__string__du_name_ordered_poly_type_0[4] = {
  &mercury__string__string__du_functor_desc_poly_type_0_3,
  &mercury__string__string__du_functor_desc_poly_type_0_0,
  &mercury__string__string__du_functor_desc_poly_type_0_1,
  &mercury__string__string__du_functor_desc_poly_type_0_2
};

#line 1536 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_poly_type_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 1544 "string.c"
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

#line 1565 "string.c"
static const MR_Integer mercury__string__string__functor_number_map_text_file_0[1] = {
  (MR_Integer) 0
};

#line 1570 "string.c"
static const MR_NotagFunctorDesc mercury__string__string__notag_functor_desc_text_file_0 = {
  (MR_String) "text_file",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 1577 "string.c"
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

#line 1598 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0_10001(
#line 1601 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1603 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1605 "string.c"
{
#line 1607 "string.c"
  {
#line 1609 "string.c"
    MR_bool mercury__string__succeeded;

#line 1612 "string.c"
    {
#line 1614 "string.c"
      mercury__string__succeeded = mercury__string____Unify____justified_column_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1617 "string.c"
    return mercury__string__succeeded;
#line 1619 "string.c"
  }
#line 1621 "string.c"
}

#line 1624 "string.c"
static void MR_CALL 
mercury__string____Compare____justified_column_0_0_10001(
#line 1627 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1629 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1631 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1633 "string.c"
{
#line 1635 "string.c"
  {
#line 1637 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1640 "string.c"
    {
#line 1642 "string.c"
      mercury__string____Compare____justified_column_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1645 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1647 "string.c"
  }
#line 1649 "string.c"
}

#line 1652 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0_10001(
#line 1655 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1657 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1659 "string.c"
{
#line 1661 "string.c"
  {
#line 1663 "string.c"
    MR_bool mercury__string__succeeded;

#line 1666 "string.c"
    {
#line 1668 "string.c"
      mercury__string__succeeded = mercury__string____Unify____justify_sense_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1671 "string.c"
    return mercury__string__succeeded;
#line 1673 "string.c"
  }
#line 1675 "string.c"
}

#line 1678 "string.c"
static void MR_CALL 
mercury__string____Compare____justify_sense_0_0_10001(
#line 1681 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1683 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1685 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1687 "string.c"
{
#line 1689 "string.c"
  {
#line 1691 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1694 "string.c"
    {
#line 1696 "string.c"
      mercury__string____Compare____justify_sense_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1699 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1701 "string.c"
  }
#line 1703 "string.c"
}

#line 1706 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____line_0_0_10001(
#line 1709 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1711 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1713 "string.c"
{
#line 1715 "string.c"
  {
#line 1717 "string.c"
    MR_bool mercury__string__succeeded;

#line 1720 "string.c"
    {
#line 1722 "string.c"
      mercury__string__succeeded = mercury__string____Unify____line_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1725 "string.c"
    return mercury__string__succeeded;
#line 1727 "string.c"
  }
#line 1729 "string.c"
}

#line 1732 "string.c"
static void MR_CALL 
mercury__string____Compare____line_0_0_10001(
#line 1735 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1737 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1739 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1741 "string.c"
{
#line 1743 "string.c"
  {
#line 1745 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1748 "string.c"
    {
#line 1750 "string.c"
      mercury__string____Compare____line_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1753 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1755 "string.c"
  }
#line 1757 "string.c"
}

#line 1760 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0_10001(
#line 1763 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1765 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1767 "string.c"
{
#line 1769 "string.c"
  {
#line 1771 "string.c"
    MR_bool mercury__string__succeeded;

#line 1774 "string.c"
    {
#line 1776 "string.c"
      mercury__string__succeeded = mercury__string____Unify____poly_type_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1779 "string.c"
    return mercury__string__succeeded;
#line 1781 "string.c"
  }
#line 1783 "string.c"
}

#line 1786 "string.c"
static void MR_CALL 
mercury__string____Compare____poly_type_0_0_10001(
#line 1789 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1791 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1793 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1795 "string.c"
{
#line 1797 "string.c"
  {
#line 1799 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1802 "string.c"
    {
#line 1804 "string.c"
      mercury__string____Compare____poly_type_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1807 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1809 "string.c"
  }
#line 1811 "string.c"
}

#line 1814 "string.c"
static MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0_10001(
#line 1817 "string.c"
  MR_Box mercury__string__wrapper_arg_1,
#line 1819 "string.c"
  MR_Box mercury__string__wrapper_arg_2)
#line 1821 "string.c"
{
#line 1823 "string.c"
  {
#line 1825 "string.c"
    MR_bool mercury__string__succeeded;

#line 1828 "string.c"
    {
#line 1830 "string.c"
      mercury__string__succeeded = mercury__string____Unify____text_file_0_0(((MR_Word) mercury__string__wrapper_arg_1), ((MR_Word) mercury__string__wrapper_arg_2));
    }
#line 1833 "string.c"
    return mercury__string__succeeded;
#line 1835 "string.c"
  }
#line 1837 "string.c"
}

#line 1840 "string.c"
static void MR_CALL 
mercury__string____Compare____text_file_0_0_10001(
#line 1843 "string.c"
  MR_Box * mercury__string__wrapper_arg_1,
#line 1845 "string.c"
  MR_Box mercury__string__wrapper_arg_2,
#line 1847 "string.c"
  MR_Box mercury__string__wrapper_arg_3)
#line 1849 "string.c"
{
#line 1851 "string.c"
  {
#line 1853 "string.c"
    MR_Word mercury__string__conv0_HeadVar__1_1;

#line 1856 "string.c"
    {
#line 1858 "string.c"
      mercury__string____Compare____text_file_0_0(&mercury__string__conv0_HeadVar__1_1, ((MR_Word) mercury__string__wrapper_arg_2), ((MR_Word) mercury__string__wrapper_arg_3));
    }
#line 1861 "string.c"
    *mercury__string__wrapper_arg_1 = ((MR_Box) (mercury__string__conv0_HeadVar__1_1));
#line 1863 "string.c"
  }
#line 1865 "string.c"
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

#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_50_95_95_91_50_93_95_48_3_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_36_36 ;
	S2 =  mercury__string__V_35_35 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 1958 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_48_48  = S3;
#line 3128 "string.m"
}
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_99_111_114_114_101_115_112_111_110_100_105_110_103_95_95_104_111_53_50_95_95_91_50_93_95_48_3_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__HB_21_23 ;
	S2 =  mercury__string__V_48_48 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 1985 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_23_25  = S3;
#line 3128 "string.m"
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

#line 4555 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_93_95_48_6_p_0(
#line 4555 "string.m"
  MR_String mercury__string__V_21_21,
#line 4555 "string.m"
  MR_String mercury__string__String_8,
#line 4555 "string.m"
  MR_Integer mercury__string__I_9,
#line 4555 "string.m"
  MR_Integer mercury__string__End_10,
#line 4555 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4555 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_Acc_15)
#line 4555 "string.m"
{
#line 4572 "string.m"
  while (MR_TRUE)
#line 4572 "string.m"
    {
#line 4572 "string.m"
      /* tailcall optimized into a loop */
#line 4572 "string.m"
      {
#line 4572 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4572 "string.m"
        MR_Integer mercury__string__J_12;
#line 4572 "string.m"
        MR_Char mercury__string__Char_13;

#line 4566 "string.m"
        if (mercury__string__succeeded)
#line 4566 "string.m"
          {
#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2079 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4566 "string.m"
            if (mercury__string__succeeded)
#line 4568 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4566 "string.m"
          }
#line 4572 "string.m"
        if (mercury__string__succeeded)
#line 4570 "string.m"
          {
#line 4570 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4527 "string.m"
            {
#line 4527 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__IntroducedFrom__func__replace_all__4370__1_3_f_0(mercury__string__V_21_21, mercury__string__Char_13, mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4571 "string.m"
            /* direct tailcall eliminated */
#line 4571 "string.m"
            {
#line 4571 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4571 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4571 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4571 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4571 "string.m"
            }
#line 4571 "string.m"
            continue;
#line 4570 "string.m"
          }
#line 4572 "string.m"
        else
#line 4571 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4572 "string.m"
      }
#line 4572 "string.m"
      break;
#line 4572 "string.m"
    }
#line 4555 "string.m"
}

#line 4555 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4555 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4555 "string.m"
  MR_String mercury__string__String_8,
#line 4555 "string.m"
  MR_Integer mercury__string__I_9,
#line 4555 "string.m"
  MR_Integer mercury__string__End_10,
#line 4555 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4555 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4555 "string.m"
{
#line 4572 "string.m"
  while (MR_TRUE)
#line 4572 "string.m"
    {
#line 4572 "string.m"
      /* tailcall optimized into a loop */
#line 4572 "string.m"
      {
#line 4572 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4572 "string.m"
        MR_Integer mercury__string__J_12;
#line 4572 "string.m"
        MR_Char mercury__string__Char_13;

#line 4566 "string.m"
        if (mercury__string__succeeded)
#line 4566 "string.m"
          {
#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2201 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4566 "string.m"
            if (mercury__string__succeeded)
#line 4568 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4566 "string.m"
          }
#line 4572 "string.m"
        if (mercury__string__succeeded)
#line 4570 "string.m"
          {
#line 4570 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4527 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4527 "string.m"
            {
#line 4527 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4571 "string.m"
            /* direct tailcall eliminated */
#line 4571 "string.m"
            {
#line 4571 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4571 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4571 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4571 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4571 "string.m"
            }
#line 4571 "string.m"
            continue;
#line 4570 "string.m"
          }
#line 4572 "string.m"
        else
#line 4571 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4572 "string.m"
      }
#line 4572 "string.m"
      break;
#line 4572 "string.m"
    }
#line 4555 "string.m"
}

#line 4635 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4635 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4635 "string.m"
  MR_String mercury__string__String_8,
#line 4635 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4635 "string.m"
  MR_Integer mercury__string__I_10,
#line 4635 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4635 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4635 "string.m"
{
#line 4654 "string.m"
  while (MR_TRUE)
#line 4654 "string.m"
    {
#line 4654 "string.m"
      /* tailcall optimized into a loop */
#line 4654 "string.m"
      {
#line 4654 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4654 "string.m"
        MR_Integer mercury__string__J_12;
#line 4654 "string.m"
        MR_Char mercury__string__Char_13;

#line 4648 "string.m"
        if (mercury__string__succeeded)
#line 4648 "string.m"
          {
#line 2012 "string.m"
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
#line 2012 "string.m"

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

#line 2328 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2012 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4648 "string.m"
            if (mercury__string__succeeded)
#line 4650 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4648 "string.m"
          }
#line 4654 "string.m"
        if (mercury__string__succeeded)
#line 4652 "string.m"
          {
#line 4652 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4619 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4619 "string.m"
            {
#line 4619 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4653 "string.m"
            /* direct tailcall eliminated */
#line 4653 "string.m"
            {
#line 4653 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4653 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4653 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4653 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4653 "string.m"
            }
#line 4653 "string.m"
            continue;
#line 4652 "string.m"
          }
#line 4654 "string.m"
        else
#line 4653 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4654 "string.m"
      }
#line 4654 "string.m"
      break;
#line 4654 "string.m"
    }
#line 4635 "string.m"
}

#line 4557 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_51_95_95_91_50_93_95_48_6_p_0(
#line 4557 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4557 "string.m"
  MR_String mercury__string__String_8,
#line 4557 "string.m"
  MR_Integer mercury__string__I_9,
#line 4557 "string.m"
  MR_Integer mercury__string__End_10,
#line 4557 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4557 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15)
#line 4557 "string.m"
{
#line 4572 "string.m"
  while (MR_TRUE)
#line 4572 "string.m"
    {
#line 4572 "string.m"
      /* tailcall optimized into a loop */
#line 4572 "string.m"
      {
#line 4572 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4572 "string.m"
        MR_Integer mercury__string__J_12;
#line 4572 "string.m"
        MR_Char mercury__string__Char_13;

#line 4566 "string.m"
        if (mercury__string__succeeded)
#line 4566 "string.m"
          {
#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2452 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4566 "string.m"
            if (mercury__string__succeeded)
#line 4568 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4566 "string.m"
          }
#line 4572 "string.m"
        if (mercury__string__succeeded)
#line 4570 "string.m"
          {
#line 4570 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4570 "string.m"
            MR_Integer mercury__string__M_24;
#line 4570 "string.m"
            MR_Integer mercury__string__V_25_25;

#line 4891 "string.m"
            {
#line 4891 "string.m"
              mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__V_19_19, mercury__string__Char_13, &mercury__string__M_24);
            }
#line 4570 "string.m"
            if (mercury__string__succeeded)
#line 4570 "string.m"
              {
#line 4892 "string.m"
                mercury__string__V_25_25 = (mercury__string__V_19_19 * mercury__string__STATE_VARIABLE_Acc_0_14);
#line 4892 "string.m"
                mercury__string__STATE_VARIABLE_Acc_16_16 = (mercury__string__V_25_25 + mercury__string__M_24);
#line 4893 "string.m"
                mercury__string__succeeded = (mercury__string__STATE_VARIABLE_Acc_0_14 <= mercury__string__STATE_VARIABLE_Acc_16_16);
#line 4893 "string.m"
                if (!(mercury__string__succeeded))
#line 4893 "string.m"
                  {
#line 4893 "string.m"
                    mercury__string__succeeded = (mercury__string__V_19_19 == (MR_Integer) 10);
#line 4893 "string.m"
                    mercury__string__succeeded = !(mercury__string__succeeded);
#line 4893 "string.m"
                  }
#line 4570 "string.m"
                if (mercury__string__succeeded)
#line 4571 "string.m"
                  {
#line 4571 "string.m"
                    /* direct tailcall eliminated */
#line 4571 "string.m"
                    {
#line 4571 "string.m"
                      MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4571 "string.m"
                      MR_Integer mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4571 "string.m"
                      mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4571 "string.m"
                      mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4571 "string.m"
                    }
#line 4571 "string.m"
                    continue;
#line 4571 "string.m"
                  }
#line 4570 "string.m"
              }
#line 4570 "string.m"
          }
#line 4572 "string.m"
        else
#line 4571 "string.m"
          {
#line 4571 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4571 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4571 "string.m"
          }
#line 4572 "string.m"
        return mercury__string__succeeded;
#line 4572 "string.m"
      }
#line 4572 "string.m"
      break;
#line 4572 "string.m"
    }
#line 4557 "string.m"
}

#line 4557 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_50_93_95_48_6_p_0(
#line 4557 "string.m"
  MR_Integer mercury__string__V_19_19,
#line 4557 "string.m"
  MR_String mercury__string__String_8,
#line 4557 "string.m"
  MR_Integer mercury__string__I_9,
#line 4557 "string.m"
  MR_Integer mercury__string__End_10,
#line 4557 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4557 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15)
#line 4557 "string.m"
{
#line 4572 "string.m"
  while (MR_TRUE)
#line 4572 "string.m"
    {
#line 4572 "string.m"
      /* tailcall optimized into a loop */
#line 4572 "string.m"
      {
#line 4572 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4572 "string.m"
        MR_Integer mercury__string__J_12;
#line 4572 "string.m"
        MR_Char mercury__string__Char_13;

#line 4566 "string.m"
        if (mercury__string__succeeded)
#line 4566 "string.m"
          {
#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2614 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4566 "string.m"
            if (mercury__string__succeeded)
#line 4568 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4566 "string.m"
          }
#line 4572 "string.m"
        if (mercury__string__succeeded)
#line 4570 "string.m"
          {
#line 4570 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4570 "string.m"
            MR_Integer mercury__string__M_24;
#line 4570 "string.m"
            MR_Integer mercury__string__V_25_25;

#line 4899 "string.m"
            {
#line 4899 "string.m"
              mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__V_19_19, mercury__string__Char_13, &mercury__string__M_24);
            }
#line 4570 "string.m"
            if (mercury__string__succeeded)
#line 4570 "string.m"
              {
#line 4900 "string.m"
                mercury__string__V_25_25 = (mercury__string__V_19_19 * mercury__string__STATE_VARIABLE_Acc_0_14);
#line 4900 "string.m"
                mercury__string__STATE_VARIABLE_Acc_16_16 = (mercury__string__V_25_25 - mercury__string__M_24);
#line 4901 "string.m"
                mercury__string__succeeded = (mercury__string__STATE_VARIABLE_Acc_16_16 <= mercury__string__STATE_VARIABLE_Acc_0_14);
#line 4901 "string.m"
                if (!(mercury__string__succeeded))
#line 4901 "string.m"
                  {
#line 4901 "string.m"
                    mercury__string__succeeded = (mercury__string__V_19_19 == (MR_Integer) 10);
#line 4901 "string.m"
                    mercury__string__succeeded = !(mercury__string__succeeded);
#line 4901 "string.m"
                  }
#line 4570 "string.m"
                if (mercury__string__succeeded)
#line 4571 "string.m"
                  {
#line 4571 "string.m"
                    /* direct tailcall eliminated */
#line 4571 "string.m"
                    {
#line 4571 "string.m"
                      MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4571 "string.m"
                      MR_Integer mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4571 "string.m"
                      mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4571 "string.m"
                      mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4571 "string.m"
                    }
#line 4571 "string.m"
                    continue;
#line 4571 "string.m"
                  }
#line 4570 "string.m"
              }
#line 4570 "string.m"
          }
#line 4572 "string.m"
        else
#line 4571 "string.m"
          {
#line 4571 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4571 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4571 "string.m"
          }
#line 4572 "string.m"
        return mercury__string__succeeded;
#line 4572 "string.m"
      }
#line 4572 "string.m"
      break;
#line 4572 "string.m"
    }
#line 4557 "string.m"
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

#line 4691 "string.m"
            {
#line 4691 "string.m"
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

#line 4635 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4635 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4635 "string.m"
  MR_String mercury__string__String_8,
#line 4635 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4635 "string.m"
  MR_Integer mercury__string__I_10,
#line 4635 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4635 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4635 "string.m"
{
#line 4654 "string.m"
  while (MR_TRUE)
#line 4654 "string.m"
    {
#line 4654 "string.m"
      /* tailcall optimized into a loop */
#line 4654 "string.m"
      {
#line 4654 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4654 "string.m"
        MR_Integer mercury__string__J_12;
#line 4654 "string.m"
        MR_Char mercury__string__Char_13;

#line 4648 "string.m"
        if (mercury__string__succeeded)
#line 4648 "string.m"
          {
#line 2012 "string.m"
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
#line 2012 "string.m"

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

#line 2851 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2012 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4648 "string.m"
            if (mercury__string__succeeded)
#line 4650 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4648 "string.m"
          }
#line 4654 "string.m"
        if (mercury__string__succeeded)
#line 4652 "string.m"
          {
#line 4652 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4626 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4626 "string.m"
            {
#line 4626 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4653 "string.m"
            /* direct tailcall eliminated */
#line 4653 "string.m"
            {
#line 4653 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4653 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4653 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4653 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4653 "string.m"
            }
#line 4653 "string.m"
            continue;
#line 4652 "string.m"
          }
#line 4654 "string.m"
        else
#line 4653 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4654 "string.m"
      }
#line 4654 "string.m"
      break;
#line 4654 "string.m"
    }
#line 4635 "string.m"
}

#line 4555 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_56_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(
#line 4555 "string.m"
  MR_Word mercury__string__V_20_20,
#line 4555 "string.m"
  MR_String mercury__string__String_8,
#line 4555 "string.m"
  MR_Integer mercury__string__I_9,
#line 4555 "string.m"
  MR_Integer mercury__string__End_10,
#line 4555 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4555 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4555 "string.m"
{
#line 4572 "string.m"
  while (MR_TRUE)
#line 4572 "string.m"
    {
#line 4572 "string.m"
      /* tailcall optimized into a loop */
#line 4572 "string.m"
      {
#line 4572 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4572 "string.m"
        MR_Integer mercury__string__J_12;
#line 4572 "string.m"
        MR_Char mercury__string__Char_13;

#line 4566 "string.m"
        if (mercury__string__succeeded)
#line 4566 "string.m"
          {
#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 2975 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4566 "string.m"
            if (mercury__string__succeeded)
#line 4568 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4566 "string.m"
          }
#line 4572 "string.m"
        if (mercury__string__succeeded)
#line 4570 "string.m"
          {
#line 4570 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4544 "string.m"
            MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__V_20_20, (MR_Integer) 1)));

#line 4544 "string.m"
            {
#line 4544 "string.m"
              mercury__string__STATE_VARIABLE_Acc_16_16 = mercury__string__func_0(((MR_Box) mercury__string__V_20_20), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14);
            }
#line 4571 "string.m"
            /* direct tailcall eliminated */
#line 4571 "string.m"
            {
#line 4571 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4571 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4571 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4571 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4571 "string.m"
            }
#line 4571 "string.m"
            continue;
#line 4570 "string.m"
          }
#line 4572 "string.m"
        else
#line 4571 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4572 "string.m"
      }
#line 4572 "string.m"
      break;
#line 4572 "string.m"
    }
#line 4555 "string.m"
}

#line 4099 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_49_95_95_91_50_93_95_48_6_p_0(
#line 4099 "string.m"
  MR_Char mercury__string__V_21_21,
#line 4099 "string.m"
  MR_String mercury__string__Str_8,
#line 4099 "string.m"
  MR_Integer mercury__string__I_9,
#line 4099 "string.m"
  MR_Integer mercury__string__SegEnd_10,
#line 4099 "string.m"
  MR_Word mercury__string__Acc0_11,
#line 4099 "string.m"
  MR_Word * mercury__string__Acc_12)
#line 4099 "string.m"
{
#line 4119 "string.m"
  while (MR_TRUE)
#line 4119 "string.m"
    {
#line 4119 "string.m"
      /* tailcall optimized into a loop */
#line 4119 "string.m"
      {
#line 4119 "string.m"
        MR_bool mercury__string__succeeded;
#line 4119 "string.m"
        MR_Integer mercury__string__J_13;
#line 4119 "string.m"
        MR_Char mercury__string__C_14;

#line 2012 "string.m"
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
#line 2012 "string.m"

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

#line 3098 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_13  = PrevIndex;
	 mercury__string__C_14  = Ch;
#line 2012 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4119 "string.m"
        if (mercury__string__succeeded)
#line 4115 "string.m"
          {
#line 4128 "string.m"
            mercury__string__succeeded = (mercury__string__V_21_21 == mercury__string__C_14);
#line 4115 "string.m"
            if (mercury__string__succeeded)
#line 4112 "string.m"
              {
#line 4112 "string.m"
                MR_String mercury__string__Seg_16;
#line 4112 "string.m"
                MR_Word mercury__string__V_18_18;

#line 4018 "string.m"
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
#line 4018 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 3146 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_16  = SubString;
#line 4018 "string.m"
}
#line 4114 "string.m"
                {
#line 4114 "string.m"
                  mercury__string__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4114 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 0) = ((MR_Box) (mercury__string__Seg_16));
#line 4114 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4114 "string.m"
                }
#line 4114 "string.m"
                /* direct tailcall eliminated */
#line 4114 "string.m"
                {
#line 4114 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;
#line 4114 "string.m"
                  MR_Integer mercury__string__SegEnd__tmp_copy_10 = mercury__string__J_13;
#line 4114 "string.m"
                  MR_Word mercury__string__Acc0__tmp_copy_11 = mercury__string__V_18_18;

#line 4114 "string.m"
                  mercury__string__Acc0_11 = mercury__string__Acc0__tmp_copy_11;
#line 4114 "string.m"
                  mercury__string__SegEnd_10 = mercury__string__SegEnd__tmp_copy_10;
#line 4114 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4114 "string.m"
                }
#line 4114 "string.m"
                continue;
#line 4112 "string.m"
              }
#line 4115 "string.m"
            else
#line 4117 "string.m"
              {
#line 4117 "string.m"
                /* direct tailcall eliminated */
#line 4117 "string.m"
                {
#line 4117 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;

#line 4117 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4117 "string.m"
                }
#line 4117 "string.m"
                continue;
#line 4117 "string.m"
              }
#line 4115 "string.m"
          }
#line 4119 "string.m"
        else
#line 4121 "string.m"
          {
#line 4121 "string.m"
            MR_String mercury__string__Seg_20;

#line 4018 "string.m"
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
#line 4018 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 3236 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_20  = SubString;
#line 4018 "string.m"
}
#line 4122 "string.m"
            {
#line 4122 "string.m"
              MR_Word base;
#line 4122 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4122 "string.m"
              *mercury__string__Acc_12 = base;
#line 4122 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Seg_20));
#line 4122 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4122 "string.m"
            }
#line 4121 "string.m"
          }
#line 4119 "string.m"
      }
#line 4119 "string.m"
      break;
#line 4119 "string.m"
    }
#line 4099 "string.m"
}

#line 913 "string.m"
static MR_bool MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(
#line 913 "string.m"
  MR_Integer mercury__string__V_20_20,
#line 913 "string.m"
  MR_String mercury__string__String_8,
#line 913 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 913 "string.m"
  MR_Integer mercury__string__End0_10,
#line 913 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Acc_0_14,
#line 913 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Acc_15)
#line 913 "string.m"
{
#line 4538 "string.m"
  {
#line 4538 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4538 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4538 "string.m"
    MR_Integer mercury__string__End_13;
#line 4538 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 3317 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2379 "string.m"
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
#line 4541 "string.m"
    {
#line 4541 "string.m"
      return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_51_95_95_91_50_93_95_48_6_p_0(mercury__string__V_20_20, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4538 "string.m"
    return mercury__string__succeeded;
#line 4538 "string.m"
  }
#line 913 "string.m"
}

#line 4080 "string.m"
static void MR_CALL 
mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_120_116_95_98_111_117_110_100_97_114_121_95_95_104_111_49_48_95_95_91_50_93_95_48_4_p_0(
#line 4080 "string.m"
  MR_Word mercury__string__V_11_11,
#line 4080 "string.m"
  MR_String mercury__string__String_6,
#line 4080 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4080 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4080 "string.m"
{
#line 4089 "string.m"
  while (MR_TRUE)
#line 4089 "string.m"
    {
#line 4089 "string.m"
      /* tailcall optimized into a loop */
#line 4089 "string.m"
      {
#line 4089 "string.m"
        MR_bool mercury__string__succeeded;
#line 4089 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4085 "string.m"
        MR_Char mercury__string__Char_10;
#line 38 "std_util.opt"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 3401 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4085 "string.m"
        if (mercury__string__succeeded)
#line 4085 "string.m"
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
#line 4085 "string.m"
          }
#line 4089 "string.m"
        if (mercury__string__succeeded)
#line 4088 "string.m"
          {
#line 4088 "string.m"
            /* direct tailcall eliminated */
#line 4088 "string.m"
            {
#line 4088 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4088 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4088 "string.m"
            }
#line 4088 "string.m"
            continue;
#line 4088 "string.m"
          }
#line 4089 "string.m"
        else
#line 4090 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4089 "string.m"
      }
#line 4089 "string.m"
      break;
#line 4089 "string.m"
    }
#line 4080 "string.m"
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
          mercury__string__V_8_8 = mercury__string__IntroducedFrom__func__word_wrap_loop__4500__1_2_f_0(mercury__string__V_12_12, mercury__string__H_6_6);
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

#line 4323 "string.m"
        {
#line 4323 "string.m"
          mercury__string__count_codepoints_2_p_0(mercury__string__H_6_6, &mercury__string__Length_25);
        }
#line 4324 "string.m"
        mercury__string__succeeded = (mercury__string__Length_25 < mercury__string__V_13_13);
#line 4328 "string.m"
        if (mercury__string__succeeded)
#line 4325 "string.m"
          {
#line 4325 "string.m"
            MR_Integer mercury__string__Count_26 = (mercury__string__V_13_13 - mercury__string__Length_25);
#line 4325 "string.m"
            MR_String mercury__string__PadString_27;

#line 4326 "string.m"
            {
#line 4326 "string.m"
              mercury__string__duplicate_char_3_p_0(mercury__string__V_12_12, mercury__string__Count_26, &mercury__string__PadString_27);
            }
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__H_6_6 ;
	S2 =  mercury__string__PadString_27 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 3599 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3128 "string.m"
}
#line 4325 "string.m"
          }
#line 4328 "string.m"
        else
#line 4329 "string.m"
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

#line 4310 "string.m"
        {
#line 4310 "string.m"
          mercury__string__count_codepoints_2_p_0(mercury__string__H_6_6, &mercury__string__Length_25);
        }
#line 4311 "string.m"
        mercury__string__succeeded = (mercury__string__Length_25 < mercury__string__V_13_13);
#line 4315 "string.m"
        if (mercury__string__succeeded)
#line 4312 "string.m"
          {
#line 4312 "string.m"
            MR_Integer mercury__string__Count_26 = (mercury__string__V_13_13 - mercury__string__Length_25);
#line 4312 "string.m"
            MR_String mercury__string__PadString_27;

#line 4313 "string.m"
            {
#line 4313 "string.m"
              mercury__string__duplicate_char_3_p_0(mercury__string__V_12_12, mercury__string__Count_26, &mercury__string__PadString_27);
            }
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_27 ;
	S2 =  mercury__string__H_6_6 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 3714 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3128 "string.m"
}
#line 4312 "string.m"
          }
#line 4315 "string.m"
        else
#line 4316 "string.m"
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

#line 4080 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho10__ho47_4_p_0(
#line 4080 "string.m"
  MR_String mercury__string__String_6,
#line 4080 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4080 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4080 "string.m"
{
#line 4089 "string.m"
  while (MR_TRUE)
#line 4089 "string.m"
    {
#line 4089 "string.m"
      /* tailcall optimized into a loop */
#line 4089 "string.m"
      {
#line 4089 "string.m"
        MR_bool mercury__string__succeeded;
#line 4089 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4085 "string.m"
        MR_Char mercury__string__Char_10;

#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 3819 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4085 "string.m"
        if (mercury__string__succeeded)
#line 4085 "string.m"
          {
#line 38 "std_util.opt"
            {
#line 38 "std_util.opt"
              mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
            }
#line 37 "std_util.opt"
            mercury__string__succeeded = !(mercury__string__succeeded);
#line 4085 "string.m"
          }
#line 4089 "string.m"
        if (mercury__string__succeeded)
#line 4088 "string.m"
          {
#line 4088 "string.m"
            /* direct tailcall eliminated */
#line 4088 "string.m"
            {
#line 4088 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4088 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4088 "string.m"
            }
#line 4088 "string.m"
            continue;
#line 4088 "string.m"
          }
#line 4089 "string.m"
        else
#line 4090 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4089 "string.m"
      }
#line 4089 "string.m"
      break;
#line 4089 "string.m"
    }
#line 4080 "string.m"
}

#line 4060 "string.m"
static void MR_CALL 
mercury__string__words_loop__ho36_4_p_0(
#line 4060 "string.m"
  MR_String mercury__string__String_6,
#line 4060 "string.m"
  MR_Integer mercury__string__WordStart_7,
#line 4060 "string.m"
  MR_Word * mercury__string__Words_8)
#line 4060 "string.m"
{
#line 4063 "string.m"
  {
#line 4063 "string.m"
    MR_bool mercury__string__succeeded;
#line 4063 "string.m"
    MR_Integer mercury__string__WordEnd_9;

#line 4064 "string.m"
    {
#line 4064 "string.m"
      mercury__string__next_boundary__ho10__ho47_4_p_0(mercury__string__String_6, mercury__string__WordStart_7, &mercury__string__WordEnd_9);
    }
#line 4065 "string.m"
    mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__WordStart_7);
#line 4067 "string.m"
    if (mercury__string__succeeded)
#line 4066 "string.m"
      *mercury__string__Words_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4067 "string.m"
    else
#line 4068 "string.m"
      {
#line 4068 "string.m"
        MR_String mercury__string__Word_10;
#line 4068 "string.m"
        MR_Integer mercury__string__NextWordStart_11;

#line 4018 "string.m"
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
#line 4018 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 3935 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Word_10  = SubString;
#line 4018 "string.m"
}
#line 4069 "string.m"
        {
#line 4069 "string.m"
          mercury__string__next_boundary__ho35_4_p_0(mercury__string__String_6, mercury__string__WordEnd_9, &mercury__string__NextWordStart_11);
        }
#line 4070 "string.m"
        mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__NextWordStart_11);
#line 4072 "string.m"
        if (mercury__string__succeeded)
#line 4071 "string.m"
          {
#line 4071 "string.m"
            MR_Word mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 4071 "string.m"
            {
#line 4071 "string.m"
              MR_Word base;
#line 4071 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4071 "string.m"
              *mercury__string__Words_8 = base;
#line 4071 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4071 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__V_14_14));
#line 4071 "string.m"
            }
#line 4071 "string.m"
          }
#line 4072 "string.m"
        else
#line 4073 "string.m"
          {
#line 4073 "string.m"
            MR_Word mercury__string__Words0_12;

#line 4073 "string.m"
            {
#line 4073 "string.m"
              mercury__string__words_loop__ho36_4_p_0(mercury__string__String_6, mercury__string__NextWordStart_11, &mercury__string__Words0_12);
            }
#line 4074 "string.m"
            {
#line 4074 "string.m"
              MR_Word base;
#line 4074 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4074 "string.m"
              *mercury__string__Words_8 = base;
#line 4074 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4074 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Words0_12));
#line 4074 "string.m"
            }
#line 4073 "string.m"
          }
#line 4068 "string.m"
      }
#line 4063 "string.m"
  }
#line 4060 "string.m"
}

#line 4080 "string.m"
static void MR_CALL 
mercury__string__next_boundary__ho35_4_p_0(
#line 4080 "string.m"
  MR_String mercury__string__String_6,
#line 4080 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4080 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4080 "string.m"
{
#line 4089 "string.m"
  while (MR_TRUE)
#line 4089 "string.m"
    {
#line 4089 "string.m"
      /* tailcall optimized into a loop */
#line 4089 "string.m"
      {
#line 4089 "string.m"
        MR_bool mercury__string__succeeded;
#line 4089 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4085 "string.m"
        MR_Char mercury__string__Char_10;

#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4058 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4085 "string.m"
        if (mercury__string__succeeded)
#line 4086 "string.m"
          {
#line 4086 "string.m"
            mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
          }
#line 4089 "string.m"
        if (mercury__string__succeeded)
#line 4088 "string.m"
          {
#line 4088 "string.m"
            /* direct tailcall eliminated */
#line 4088 "string.m"
            {
#line 4088 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4088 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4088 "string.m"
            }
#line 4088 "string.m"
            continue;
#line 4088 "string.m"
          }
#line 4089 "string.m"
        else
#line 4090 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4089 "string.m"
      }
#line 4089 "string.m"
      break;
#line 4089 "string.m"
    }
#line 4080 "string.m"
}

#line 2897 "string.m"
static void MR_CALL 
mercury__string__suffix_length_loop__ho33_4_p_0(
#line 2897 "string.m"
  MR_String mercury__string__S_6,
#line 2897 "string.m"
  MR_Integer mercury__string__I_7,
#line 2897 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 2897 "string.m"
{
#line 2906 "string.m"
  while (MR_TRUE)
#line 2906 "string.m"
    {
#line 2906 "string.m"
      /* tailcall optimized into a loop */
#line 2906 "string.m"
      {
#line 2906 "string.m"
        MR_bool mercury__string__succeeded;
#line 2906 "string.m"
        MR_Integer mercury__string__J_9;
#line 2902 "string.m"
        MR_Char mercury__string__Char_10;

#line 2012 "string.m"
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
#line 2012 "string.m"

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

#line 4162 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = PrevIndex;
	 mercury__string__Char_10  = Ch;
#line 2012 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2902 "string.m"
        if (mercury__string__succeeded)
#line 2903 "string.m"
          {
#line 2903 "string.m"
            mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
          }
#line 2906 "string.m"
        if (mercury__string__succeeded)
#line 2905 "string.m"
          {
#line 2905 "string.m"
            /* direct tailcall eliminated */
#line 2905 "string.m"
            {
#line 2905 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 2905 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 2905 "string.m"
            }
#line 2905 "string.m"
            continue;
#line 2905 "string.m"
          }
#line 2906 "string.m"
        else
#line 2907 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 2906 "string.m"
      }
#line 2906 "string.m"
      break;
#line 2906 "string.m"
    }
#line 2897 "string.m"
}

#line 2880 "string.m"
static void MR_CALL 
mercury__string__prefix_length_loop__ho32_4_p_0(
#line 2880 "string.m"
  MR_String mercury__string__S_6,
#line 2880 "string.m"
  MR_Integer mercury__string__I_7,
#line 2880 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 2880 "string.m"
{
#line 2889 "string.m"
  while (MR_TRUE)
#line 2889 "string.m"
    {
#line 2889 "string.m"
      /* tailcall optimized into a loop */
#line 2889 "string.m"
      {
#line 2889 "string.m"
        MR_bool mercury__string__succeeded;
#line 2889 "string.m"
        MR_Integer mercury__string__J_9;
#line 2885 "string.m"
        MR_Char mercury__string__Char_10;

#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4263 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2885 "string.m"
        if (mercury__string__succeeded)
#line 2886 "string.m"
          {
#line 2886 "string.m"
            mercury__string__succeeded = mercury__char__is_whitespace_1_p_0(mercury__string__Char_10);
          }
#line 2889 "string.m"
        if (mercury__string__succeeded)
#line 2888 "string.m"
          {
#line 2888 "string.m"
            /* direct tailcall eliminated */
#line 2888 "string.m"
            {
#line 2888 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 2888 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 2888 "string.m"
            }
#line 2888 "string.m"
            continue;
#line 2888 "string.m"
          }
#line 2889 "string.m"
        else
#line 2890 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 2889 "string.m"
      }
#line 2889 "string.m"
      break;
#line 2889 "string.m"
    }
#line 2880 "string.m"
}

#line 2808 "string.m"
static MR_bool MR_CALL 
mercury__string__all_match_loop__ho30_3_p_0(
#line 2808 "string.m"
  MR_String mercury__string__String_5,
#line 2808 "string.m"
  MR_Integer mercury__string__Cur_6)
#line 2808 "string.m"
{
#line 2815 "string.m"
  while (MR_TRUE)
#line 2815 "string.m"
    {
#line 2815 "string.m"
      /* tailcall optimized into a loop */
#line 2815 "string.m"
      {
#line 2815 "string.m"
        MR_bool mercury__string__succeeded;
#line 2815 "string.m"
        MR_Integer mercury__string__Next_7;
#line 2815 "string.m"
        MR_Char mercury__string__Char_8;

#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 4362 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__Char_8  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2815 "string.m"
        if (mercury__string__succeeded)
#line 2813 "string.m"
          {
#line 2813 "string.m"
            {
#line 2813 "string.m"
              mercury__string__succeeded = mercury__char__is_alnum_1_p_0(mercury__string__Char_8);
            }
#line 2813 "string.m"
            if (mercury__string__succeeded)
#line 2814 "string.m"
              {
#line 2814 "string.m"
                /* direct tailcall eliminated */
#line 2814 "string.m"
                {
#line 2814 "string.m"
                  MR_Integer mercury__string__Cur__tmp_copy_6 = mercury__string__Next_7;

#line 2814 "string.m"
                  mercury__string__Cur_6 = mercury__string__Cur__tmp_copy_6;
#line 2814 "string.m"
                }
#line 2814 "string.m"
                continue;
#line 2814 "string.m"
              }
#line 2813 "string.m"
          }
#line 2815 "string.m"
        else
#line 2816 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 2815 "string.m"
        return mercury__string__succeeded;
#line 2815 "string.m"
      }
#line 2815 "string.m"
      break;
#line 2815 "string.m"
    }
#line 2808 "string.m"
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
#line 4710 "string.m"
        MR_Word mercury__string__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__H_6_6, (MR_Integer) 1)));

#line 4710 "string.m"
        if (((MR_tag((MR_Word) mercury__string__V_19_19)) == (MR_mktag((MR_Integer) 0))))
#line 4710 "string.m"
          mercury__string__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_19_19, (MR_Integer) 0)));
#line 4710 "string.m"
        else
#line 4711 "string.m"
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

#line 2439 "string.m"
            {
#line 2439 "string.m"
              mercury__string__count_codepoints_2_p_0(mercury__string__H_10_9, &mercury__string__Length_19);
            }
#line 4845 "string.m"
            mercury__string__succeeded = (mercury__string__Length_19 > mercury__string__HeadVar__3_3);
#line 4847 "string.m"
            if (mercury__string__succeeded)
#line 4846 "string.m"
              mercury__string__STATE_VARIABLE_A_15_15_13 = mercury__string__Length_19;
#line 4847 "string.m"
            else
#line 4848 "string.m"
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

#line 4500 "string.m"
static MR_String MR_CALL 
mercury__string__IntroducedFrom__func__word_wrap_loop__4500__1_2_f_0(
#line 4500 "string.m"
  MR_String mercury__string__WordSep_2,
#line 4500 "string.m"
  MR_String mercury__string__HeadVar__2_60)
#line 4500 "string.m"
{
#line 4500 "string.m"
  {
#line 4500 "string.m"
    MR_bool mercury__string__succeeded;
#line 4500 "string.m"
    MR_String mercury__string__HeadVar__3_61;
#line 4500 "string.m"
    MR_String mercury__string__V_62_62;

#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__IntroducedFrom__func__word_wrap_loop__4500__1_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__WordSep_2 ;
	S2 =  (MR_String) "\n" ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 4822 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_62_62  = S3;
#line 3128 "string.m"
}
#line 4500 "string.m"
    {
#line 4500 "string.m"
      return mercury__string__HeadVar__3_61 = mercury__string__f_43_43_2_f_0(mercury__string__HeadVar__2_60, mercury__string__V_62_62);
    }
#line 4500 "string.m"
    return mercury__string__HeadVar__3_61;
#line 4500 "string.m"
  }
#line 4500 "string.m"
}

#line 4370 "string.m"
static MR_Word MR_CALL 
mercury__string__IntroducedFrom__func__replace_all__4370__1_3_f_0(
#line 4370 "string.m"
  MR_String mercury__string__Subst_7,
#line 4370 "string.m"
  MR_Char mercury__string__HeadVar__2_16,
#line 4370 "string.m"
  MR_Word mercury__string__HeadVar__3_17)
#line 4370 "string.m"
{
#line 4370 "string.m"
  {
#line 4370 "string.m"
    MR_bool mercury__string__succeeded;
#line 4370 "string.m"
    MR_Word mercury__string__HeadVar__4_18;
#line 4370 "string.m"
    MR_String mercury__string__V_19_19;
#line 4370 "string.m"
    MR_String mercury__string__V_20_20;
#line 4370 "string.m"
    MR_Word mercury__string__V_35_35;
#line 4370 "string.m"
    MR_Word mercury__string__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1421 "string.m"
    MR_String mercury__string__Str0_45;

#line 5028 "string.m"
    {
#line 5028 "string.m"
      mercury__string__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5028 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_35_35, 0) = ((MR_Box) (MR_Word) (mercury__string__HeadVar__2_16));
#line 5028 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_35_35, 1) = ((MR_Box) (mercury__string__V_36_36));
#line 5028 "string.m"
    }
#line 1419 "string.m"
    {
#line 1419 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_35_35, &mercury__string__Str0_45);
    }
#line 1421 "string.m"
    if (mercury__string__succeeded)
#line 1420 "string.m"
      mercury__string__V_20_20 = mercury__string__Str0_45;
#line 1421 "string.m"
    else
#line 1422 "string.m"
      {
#line 1422 "string.m"
        {
#line 1422 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1422 "string.m"
      }
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__IntroducedFrom__func__replace_all__4370__1_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_20_20 ;
	S2 =  mercury__string__Subst_7 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 4919 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_19_19  = S3;
#line 3128 "string.m"
}
#line 4370 "string.m"
    {
#line 4370 "string.m"
      mercury__string__HeadVar__4_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4370 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_18, 0) = ((MR_Box) (mercury__string__V_19_19));
#line 4370 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__HeadVar__4_18, 1) = ((MR_Box) (mercury__string__HeadVar__3_17));
#line 4370 "string.m"
    }
#line 4370 "string.m"
    return mercury__string__HeadVar__4_18;
#line 4370 "string.m"
  }
#line 4370 "string.m"
}

#line 109 "string.m"
void MR_CALL 
mercury__string____Compare____text_file_0_0(
#line 109 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 109 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 109 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 109 "string.m"
{
#line 109 "string.m"
  {
#line 109 "string.m"
    MR_bool mercury__string__succeeded;
#line 109 "string.m"
    MR_Integer mercury__string__CastX_6 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 109 "string.m"
    MR_Integer mercury__string__CastY_7 = (MR_Integer) mercury__string__HeadVar__3_3;

#line 109 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_6 == mercury__string__CastY_7);
#line 109 "string.m"
    if (mercury__string__succeeded)
#line 4967 "string.c"
      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 109 "string.m"
    else
#line 109 "string.m"
      {
#line 109 "string.m"
        MR_String mercury__string__V_4_4 = (MR_String) mercury__string__HeadVar__2_2;
#line 109 "string.m"
        MR_String mercury__string__V_5_5 = (MR_String) mercury__string__HeadVar__3_3;
#line 109 "string.m"
        MR_Integer mercury__string__Res_7_12;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____text_file_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__V_4_4 ;
	S2 =  mercury__string__V_5_5 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 4995 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Res_7_12  = Res;
#line 134 "private_builtin.opt"
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
#line 109 "string.m"
      }
#line 109 "string.m"
  }
#line 109 "string.m"
}

#line 109 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____text_file_0_0(
#line 109 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 109 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 109 "string.m"
{
#line 109 "string.m"
  {
#line 109 "string.m"
    MR_bool mercury__string__succeeded;
#line 109 "string.m"
    MR_Integer mercury__string__CastX_5 = (MR_Integer) mercury__string__HeadVar__1_1;
#line 109 "string.m"
    MR_Integer mercury__string__CastY_6 = (MR_Integer) mercury__string__HeadVar__2_2;

#line 109 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_5 == mercury__string__CastY_6);
#line 109 "string.m"
    if (mercury__string__succeeded)
#line 109 "string.m"
      mercury__string__succeeded = MR_TRUE;
#line 109 "string.m"
    else
#line 109 "string.m"
      {
#line 109 "string.m"
        MR_String mercury__string__V_3_3 = (MR_String) mercury__string__HeadVar__1_1;
#line 109 "string.m"
        MR_String mercury__string__V_4_4 = (MR_String) mercury__string__HeadVar__2_2;

#line 5064 "string.c"
        mercury__string__succeeded = (strcmp(mercury__string__V_3_3, mercury__string__V_4_4) == 0);
#line 109 "string.m"
      }
#line 109 "string.m"
    return mercury__string__succeeded;
#line 109 "string.m"
  }
#line 109 "string.m"
}

#line 1230 "string.m"
void MR_CALL 
mercury__string____Compare____poly_type_0_0(
#line 1230 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 1230 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 1230 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 1230 "string.m"
{
#line 1230 "string.m"
  {
#line 1230 "string.m"
    MR_bool mercury__string__succeeded;
#line 1230 "string.m"
    MR_Integer mercury__string__CastX_36 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 1230 "string.m"
    MR_Integer mercury__string__CastY_37 = (MR_Integer) mercury__string__HeadVar__3_3;

#line 1230 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_36 == mercury__string__CastY_37);
#line 1230 "string.m"
    if (mercury__string__succeeded)
#line 5099 "string.c"
      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 1230 "string.m"
    else
#line 1230 "string.m"
      if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 1230 "string.m"
        {
#line 1230 "string.m"
          MR_Char mercury__string__V_42_42 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1230 "string.m"
          if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1230 "string.m"
            {
#line 1230 "string.m"
              MR_Char mercury__string__V_35_35 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
#line 1230 "string.m"
              MR_Integer mercury__string__XI_7_49;
#line 1230 "string.m"
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

#line 5134 "string.c"

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

#line 5154 "string.c"

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
#line 1230 "string.m"
            }
#line 1230 "string.m"
          else
#line 1230 "string.m"
            if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5189 "string.c"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1230 "string.m"
            else
#line 1230 "string.m"
              if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5195 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1230 "string.m"
              else
#line 5199 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1230 "string.m"
        }
#line 1230 "string.m"
      else
#line 1230 "string.m"
        if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1230 "string.m"
          {
#line 1230 "string.m"
            MR_Float mercury__string__V_43_43 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1230 "string.m"
            if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5214 "string.c"
              *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1230 "string.m"
            else
#line 1230 "string.m"
              if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1230 "string.m"
                {
#line 1230 "string.m"
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
#line 1230 "string.m"
                }
#line 1230 "string.m"
              else
#line 1230 "string.m"
                if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5253 "string.c"
                  *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1230 "string.m"
                else
#line 5257 "string.c"
                  *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1230 "string.m"
          }
#line 1230 "string.m"
        else
#line 1230 "string.m"
          if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1230 "string.m"
            {
#line 1230 "string.m"
              MR_Integer mercury__string__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1230 "string.m"
              if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5272 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1230 "string.m"
              else
#line 1230 "string.m"
                if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5278 "string.c"
                  *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1230 "string.m"
                else
#line 1230 "string.m"
                  if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1230 "string.m"
                    {
#line 1230 "string.m"
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
#line 1230 "string.m"
                    }
#line 1230 "string.m"
                  else
#line 5315 "string.c"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1230 "string.m"
            }
#line 1230 "string.m"
          else
#line 1230 "string.m"
            {
#line 1230 "string.m"
              MR_String mercury__string__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1230 "string.m"
              if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 5328 "string.c"
                *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1230 "string.m"
              else
#line 1230 "string.m"
                if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5334 "string.c"
                  *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1230 "string.m"
                else
#line 1230 "string.m"
                  if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5340 "string.c"
                    *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1230 "string.m"
                  else
#line 1230 "string.m"
                    {
#line 1230 "string.m"
                      MR_String mercury__string__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__3_3, (MR_Integer) 0)));
#line 1230 "string.m"
                      MR_Integer mercury__string__Res_7_60;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____poly_type_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__V_45_45 ;
	S2 =  mercury__string__V_25_25 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 5366 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Res_7_60  = Res;
#line 134 "private_builtin.opt"
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
#line 1230 "string.m"
                    }
#line 1230 "string.m"
            }
#line 1230 "string.m"
  }
#line 1230 "string.m"
}

#line 1230 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____poly_type_0_0(
#line 1230 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 1230 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 1230 "string.m"
{
#line 1230 "string.m"
  {
#line 1230 "string.m"
    MR_bool mercury__string__succeeded;
#line 1230 "string.m"
    MR_Integer mercury__string__CastX_11 = (MR_Integer) mercury__string__HeadVar__1_1;
#line 1230 "string.m"
    MR_Integer mercury__string__CastY_12 = (MR_Integer) mercury__string__HeadVar__2_2;

#line 1230 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_11 == mercury__string__CastY_12);
#line 1230 "string.m"
    if (mercury__string__succeeded)
#line 1230 "string.m"
      mercury__string__succeeded = MR_TRUE;
#line 1230 "string.m"
    else
#line 1230 "string.m"
      if (((MR_tag((MR_Word) mercury__string__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 1230 "string.m"
        {
#line 1230 "string.m"
          MR_Char mercury__string__V_9_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1230 "string.m"
          MR_Char mercury__string__V_10_10;

#line 1230 "string.m"
          mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 1230 "string.m"
          if (mercury__string__succeeded)
#line 1230 "string.m"
            {
#line 1230 "string.m"
              mercury__string__V_10_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5447 "string.c"
              mercury__string__succeeded = (mercury__string__V_9_9 == mercury__string__V_10_10);
#line 1230 "string.m"
            }
#line 1230 "string.m"
        }
#line 1230 "string.m"
      else
#line 1230 "string.m"
        if (((MR_tag((MR_Word) mercury__string__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1230 "string.m"
          {
#line 1230 "string.m"
            MR_Float mercury__string__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1230 "string.m"
            MR_Float mercury__string__V_4_4;

#line 1230 "string.m"
            mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1230 "string.m"
            if (mercury__string__succeeded)
#line 1230 "string.m"
              {
#line 1230 "string.m"
                mercury__string__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5472 "string.c"
                mercury__string__succeeded = (mercury__string__V_3_3 == mercury__string__V_4_4);
#line 1230 "string.m"
              }
#line 1230 "string.m"
          }
#line 1230 "string.m"
        else
#line 1230 "string.m"
          if (((MR_tag((MR_Word) mercury__string__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1230 "string.m"
            {
#line 1230 "string.m"
              MR_Integer mercury__string__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1230 "string.m"
              MR_Integer mercury__string__V_6_6;

#line 1230 "string.m"
              mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1230 "string.m"
              if (mercury__string__succeeded)
#line 1230 "string.m"
                {
#line 1230 "string.m"
                  mercury__string__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5497 "string.c"
                  mercury__string__succeeded = (mercury__string__V_5_5 == mercury__string__V_6_6);
#line 1230 "string.m"
                }
#line 1230 "string.m"
            }
#line 1230 "string.m"
          else
#line 1230 "string.m"
            {
#line 1230 "string.m"
              MR_String mercury__string__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1230 "string.m"
              MR_String mercury__string__V_8_8;

#line 1230 "string.m"
              mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 1230 "string.m"
              if (mercury__string__succeeded)
#line 1230 "string.m"
                {
#line 1230 "string.m"
                  mercury__string__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5520 "string.c"
                  mercury__string__succeeded = (strcmp(mercury__string__V_7_7, mercury__string__V_8_8) == 0);
#line 1230 "string.m"
                }
#line 1230 "string.m"
            }
#line 1230 "string.m"
    return mercury__string__succeeded;
#line 1230 "string.m"
  }
#line 1230 "string.m"
}

#line 103 "string.m"
void MR_CALL 
mercury__string____Compare____line_0_0(
#line 103 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 103 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 103 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 103 "string.m"
{
#line 103 "string.m"
  {
#line 103 "string.m"
    MR_bool mercury__string__succeeded;
#line 103 "string.m"
    MR_Integer mercury__string__CastX_6 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 103 "string.m"
    MR_Integer mercury__string__CastY_7 = (MR_Integer) mercury__string__HeadVar__3_3;

#line 103 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_6 == mercury__string__CastY_7);
#line 103 "string.m"
    if (mercury__string__succeeded)
#line 5557 "string.c"
      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 103 "string.m"
    else
#line 103 "string.m"
      {
#line 103 "string.m"
        MR_String mercury__string__V_4_4 = (MR_String) mercury__string__HeadVar__2_2;
#line 103 "string.m"
        MR_String mercury__string__V_5_5 = (MR_String) mercury__string__HeadVar__3_3;
#line 103 "string.m"
        MR_Integer mercury__string__Res_7_12;

#line 134 "private_builtin.opt"
{
#define MR_PROC_LABEL mercury__string____Compare____line_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__string__V_4_4 ;
	S2 =  mercury__string__V_5_5 ;
		{
#line 134 "private_builtin.opt"

    Res = strcmp(S1, S2);

#line 5585 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Res_7_12  = Res;
#line 134 "private_builtin.opt"
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
#line 103 "string.m"
      }
#line 103 "string.m"
  }
#line 103 "string.m"
}

#line 103 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____line_0_0(
#line 103 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 103 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 103 "string.m"
{
#line 103 "string.m"
  {
#line 103 "string.m"
    MR_bool mercury__string__succeeded;
#line 103 "string.m"
    MR_Integer mercury__string__CastX_5 = (MR_Integer) mercury__string__HeadVar__1_1;
#line 103 "string.m"
    MR_Integer mercury__string__CastY_6 = (MR_Integer) mercury__string__HeadVar__2_2;

#line 103 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_5 == mercury__string__CastY_6);
#line 103 "string.m"
    if (mercury__string__succeeded)
#line 103 "string.m"
      mercury__string__succeeded = MR_TRUE;
#line 103 "string.m"
    else
#line 103 "string.m"
      {
#line 103 "string.m"
        MR_String mercury__string__V_3_3 = (MR_String) mercury__string__HeadVar__1_1;
#line 103 "string.m"
        MR_String mercury__string__V_4_4 = (MR_String) mercury__string__HeadVar__2_2;

#line 5654 "string.c"
        mercury__string__succeeded = (strcmp(mercury__string__V_3_3, mercury__string__V_4_4) == 0);
#line 103 "string.m"
      }
#line 103 "string.m"
    return mercury__string__succeeded;
#line 103 "string.m"
  }
#line 103 "string.m"
}

#line 4798 "string.m"
void MR_CALL 
mercury__string____Compare____justify_sense_0_0(
#line 4798 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 4798 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 4798 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 4798 "string.m"
{
#line 4798 "string.m"
  {
#line 4798 "string.m"
    MR_bool mercury__string__succeeded;
#line 4798 "string.m"
    MR_Integer mercury__string__Cast_HeadVar1_4 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 4798 "string.m"
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
#line 4798 "string.m"
  }
#line 4798 "string.m"
}

#line 4798 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____justify_sense_0_0(
#line 4798 "string.m"
  MR_Word mercury__string__HeadVar__2_1,
#line 4798 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 4798 "string.m"
{
#line 5721 "string.c"
  {
#line 5723 "string.c"
    MR_bool mercury__string__succeeded = (mercury__string__HeadVar__2_1 == mercury__string__HeadVar__2_2);

#line 5726 "string.c"
    return mercury__string__succeeded;
#line 5728 "string.c"
  }
#line 4798 "string.m"
}

#line 1030 "string.m"
void MR_CALL 
mercury__string____Compare____justified_column_0_0(
#line 1030 "string.m"
  MR_Word * mercury__string__HeadVar__1_1,
#line 1030 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 1030 "string.m"
  MR_Word mercury__string__HeadVar__3_3)
#line 1030 "string.m"
{
#line 1030 "string.m"
  {
#line 1030 "string.m"
    MR_bool mercury__string__succeeded;
#line 1030 "string.m"
    MR_Integer mercury__string__CastX_12 = (MR_Integer) mercury__string__HeadVar__2_2;
#line 1030 "string.m"
    MR_Integer mercury__string__CastY_13 = (MR_Integer) mercury__string__HeadVar__3_3;

#line 1030 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_12 == mercury__string__CastY_13);
#line 1030 "string.m"
    if (mercury__string__succeeded)
#line 5757 "string.c"
      *mercury__string__HeadVar__1_1 = (MR_Integer) 0;
#line 1030 "string.m"
    else
#line 1030 "string.m"
      if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1030 "string.m"
        {
#line 1030 "string.m"
          MR_Word mercury__string__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1030 "string.m"
          if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 1030 "string.m"
            {
#line 1030 "string.m"
              MR_Word mercury__string__TypeInfo_15_15 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 1030 "string.m"
              MR_Word mercury__string__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

#line 1030 "string.m"
              {
#line 1030 "string.m"
                mercury__builtin__compare_3_p_0(mercury__string__TypeInfo_15_15, mercury__string__HeadVar__1_1, ((MR_Box) (mercury__string__V_16_16)), ((MR_Box) (mercury__string__V_5_5)));
#line 1030 "string.m"
                return;
              }
#line 1030 "string.m"
            }
#line 1030 "string.m"
          else
#line 5788 "string.c"
            *mercury__string__HeadVar__1_1 = (MR_Integer) 1;
#line 1030 "string.m"
        }
#line 1030 "string.m"
      else
#line 1030 "string.m"
        {
#line 1030 "string.m"
          MR_Word mercury__string__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 1030 "string.m"
          if (((MR_tag((MR_Word) mercury__string__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5801 "string.c"
            *mercury__string__HeadVar__1_1 = (MR_Integer) 2;
#line 1030 "string.m"
          else
#line 1030 "string.m"
            {
#line 1030 "string.m"
              MR_Word mercury__string__TypeInfo_14_14 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 1030 "string.m"
              MR_Word mercury__string__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__3_3, (MR_Integer) 0)));

#line 1030 "string.m"
              {
#line 1030 "string.m"
                mercury__builtin__compare_3_p_0(mercury__string__TypeInfo_14_14, mercury__string__HeadVar__1_1, ((MR_Box) (mercury__string__V_17_17)), ((MR_Box) (mercury__string__V_11_11)));
#line 1030 "string.m"
                return;
              }
#line 1030 "string.m"
            }
#line 1030 "string.m"
        }
#line 1030 "string.m"
  }
#line 1030 "string.m"
}

#line 1030 "string.m"
MR_bool MR_CALL 
mercury__string____Unify____justified_column_0_0(
#line 1030 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 1030 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 1030 "string.m"
{
#line 1030 "string.m"
  {
#line 1030 "string.m"
    MR_bool mercury__string__succeeded;
#line 1030 "string.m"
    MR_Integer mercury__string__CastX_7 = (MR_Integer) mercury__string__HeadVar__1_1;
#line 1030 "string.m"
    MR_Integer mercury__string__CastY_8 = (MR_Integer) mercury__string__HeadVar__2_2;

#line 1030 "string.m"
    mercury__string__succeeded = (mercury__string__CastX_7 == mercury__string__CastY_8);
#line 1030 "string.m"
    if (mercury__string__succeeded)
#line 1030 "string.m"
      mercury__string__succeeded = MR_TRUE;
#line 1030 "string.m"
    else
#line 1030 "string.m"
      if (((MR_tag((MR_Word) mercury__string__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1030 "string.m"
        {
#line 1030 "string.m"
          MR_Word mercury__string__TypeInfo_9_9;
#line 1030 "string.m"
          MR_Word mercury__string__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1030 "string.m"
          MR_Word mercury__string__V_4_4;

#line 1030 "string.m"
          mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 1030 "string.m"
          if (mercury__string__succeeded)
#line 1030 "string.m"
            {
#line 1030 "string.m"
              mercury__string__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5873 "string.c"
              mercury__string__TypeInfo_9_9 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 5875 "string.c"
              {
#line 5877 "string.c"
                return mercury__string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__TypeInfo_9_9, ((MR_Box) (mercury__string__V_3_3)), ((MR_Box) (mercury__string__V_4_4)));
              }
#line 1030 "string.m"
            }
#line 1030 "string.m"
        }
#line 1030 "string.m"
      else
#line 1030 "string.m"
        {
#line 1030 "string.m"
          MR_Word mercury__string__TypeInfo_10_10;
#line 1030 "string.m"
          MR_Word mercury__string__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 1030 "string.m"
          MR_Word mercury__string__V_6_6;

#line 1030 "string.m"
          mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1030 "string.m"
          if (mercury__string__succeeded)
#line 1030 "string.m"
            {
#line 1030 "string.m"
              mercury__string__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 5903 "string.c"
              mercury__string__TypeInfo_10_10 = (MR_Word) &mercury__string_scalar_common_1[0];
#line 5905 "string.c"
              {
#line 5907 "string.c"
                return mercury__string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__TypeInfo_10_10, ((MR_Box) (mercury__string__V_5_5)), ((MR_Box) (mercury__string__V_6_6)));
              }
#line 1030 "string.m"
            }
#line 1030 "string.m"
        }
#line 1030 "string.m"
    return mercury__string__succeeded;
#line 1030 "string.m"
  }
#line 1030 "string.m"
}

#line 5244 "string.m"
MR_Integer MR_CALL 
mercury__string__max_precision_0_f_0(void)
#line 5244 "string.m"
{
#line 5246 "string.m"
  {
#line 5246 "string.m"
    MR_bool mercury__string__succeeded;

#line 5246 "string.m"
    return (MR_Integer) 17;
#line 5246 "string.m"
  }
#line 5244 "string.m"
}

#line 5238 "string.m"
MR_Integer MR_CALL 
mercury__string__min_precision_0_f_0(void)
#line 5238 "string.m"
{
#line 5240 "string.m"
  {
#line 5240 "string.m"
    MR_bool mercury__string__succeeded;

#line 5240 "string.m"
    return (MR_Integer) 15;
#line 5240 "string.m"
  }
#line 5238 "string.m"
}

#line 5220 "string.m"
MR_String MR_CALL 
mercury__string__float_to_string_loop_2_f_0(
#line 5220 "string.m"
  MR_Integer mercury__string__Prec_4,
#line 5220 "string.m"
  MR_Float mercury__string__Float_5)
#line 5220 "string.m"
{
#line 5222 "string.m"
  while (MR_TRUE)
#line 5222 "string.m"
    {
#line 5222 "string.m"
      /* tailcall optimized into a loop */
#line 5222 "string.m"
      {
#line 5222 "string.m"
        MR_bool mercury__string__succeeded;
#line 5222 "string.m"
        MR_String mercury__string__String_6;
#line 5222 "string.m"
        MR_String mercury__string__Tmp_7;
#line 5222 "string.m"
        MR_String mercury__string__V_8_8;
#line 5222 "string.m"
        MR_Word mercury__string__V_9_9;
#line 5222 "string.m"
        MR_String mercury__string__V_11_11;
#line 5222 "string.m"
        MR_String mercury__string__V_12_12;
#line 5222 "string.m"
        MR_Word mercury__string__V_14_14;
#line 5222 "string.m"
        MR_Word mercury__string__V_15_15;

#line 5038 "string.m"
        {
#line 5038 "string.m"
          mercury__string__int_to_base_string_3_p_0(mercury__string__Prec_4, (MR_Integer) 10, &mercury__string__V_12_12);
        }
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_12_12 ;
	S2 =  (MR_String) "g" ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6016 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = S3;
#line 3128 "string.m"
}
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "%#." ;
	S2 =  mercury__string__V_11_11 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6043 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3128 "string.m"
}
#line 5223 "string.m"
        {
#line 5223 "string.m"
          mercury__string__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 5223 "string.m"
          MR_hl_field(MR_mktag(0), mercury__string__V_14_14, 0) = MR_box_float(mercury__string__Float_5);
#line 5223 "string.m"
        }
#line 5223 "string.m"
        mercury__string__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5223 "string.m"
        {
#line 5223 "string.m"
          mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5223 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_9_9, 0) = ((MR_Box) (mercury__string__V_14_14));
#line 5223 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_9_9, 1) = ((MR_Box) (mercury__string__V_15_15));
#line 5223 "string.m"
        }
#line 5308 "string.m"
        {
#line 5308 "string.m"
          mercury__string__format__format_impl_3_p_0(mercury__string__V_8_8, mercury__string__V_9_9, &mercury__string__Tmp_7);
        }
#line 5224 "string.m"
        mercury__string__succeeded = (mercury__string__Prec_4 == (MR_Integer) 17);
#line 5226 "string.m"
        if (mercury__string__succeeded)
#line 5225 "string.m"
          mercury__string__String_6 = mercury__string__Tmp_7;
#line 5226 "string.m"
        else
#line 5229 "string.m"
          {
#line 5227 "string.m"
            MR_Float mercury__string__V_19_19;

#line 4914 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_loop_2_f_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__Tmp_7 ;
		{
#line 4914 "string.m"
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
#line 6110 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__V_19_19  = FloatVal;
#line 4914 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 5227 "string.m"
            if (mercury__string__succeeded)
#line 5227 "string.m"
              mercury__string__succeeded = (mercury__string__Float_5 == mercury__string__V_19_19);
#line 5229 "string.m"
            if (mercury__string__succeeded)
#line 5228 "string.m"
              mercury__string__String_6 = mercury__string__Tmp_7;
#line 5229 "string.m"
            else
#line 5230 "string.m"
              {
#line 5230 "string.m"
                MR_Integer mercury__string__V_16_16 = (mercury__string__Prec_4 + (MR_Integer) 1);

#line 5230 "string.m"
                /* direct tailcall eliminated */
#line 5230 "string.m"
                {
#line 5230 "string.m"
                  MR_Integer mercury__string__Prec__tmp_copy_4 = mercury__string__V_16_16;

#line 5230 "string.m"
                  mercury__string__Prec_4 = mercury__string__Prec__tmp_copy_4;
#line 5230 "string.m"
                }
#line 5230 "string.m"
                continue;
#line 5230 "string.m"
              }
#line 5229 "string.m"
          }
#line 5222 "string.m"
        return mercury__string__String_6;
#line 5222 "string.m"
      }
#line 5222 "string.m"
      break;
#line 5222 "string.m"
    }
#line 5220 "string.m"
}

#line 5124 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_group_2_6_p_0(
#line 5124 "string.m"
  MR_Integer mercury__string__NegN_7,
#line 5124 "string.m"
  MR_Integer mercury__string__Base_8,
#line 5124 "string.m"
  MR_Integer mercury__string__Curr_9,
#line 5124 "string.m"
  MR_Integer mercury__string__GroupLength_10,
#line 5124 "string.m"
  MR_String mercury__string__Sep_11,
#line 5124 "string.m"
  MR_String * mercury__string__Str_12)
#line 5124 "string.m"
{
#line 5135 "string.m"
  {
#line 5135 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__Curr_9 == mercury__string__GroupLength_10);
#line 5129 "string.m"
    MR_Integer mercury__string__V_19_19;

#line 5129 "string.m"
    if (mercury__string__succeeded)
#line 5129 "string.m"
      {
#line 5130 "string.m"
        mercury__string__V_19_19 = (MR_Integer) 0;
#line 5130 "string.m"
        mercury__string__succeeded = (mercury__string__GroupLength_10 > mercury__string__V_19_19);
#line 5129 "string.m"
      }
#line 5135 "string.m"
    if (mercury__string__succeeded)
#line 5133 "string.m"
      {
#line 5133 "string.m"
        MR_String mercury__string__Str1_13;

#line 5132 "string.m"
        {
#line 5132 "string.m"
          mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__NegN_7, mercury__string__Base_8, (MR_Integer) 0, mercury__string__GroupLength_10, mercury__string__Sep_11, &mercury__string__Str1_13);
        }
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str1_13 ;
	S2 =  mercury__string__Sep_11 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6229 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_12  = S3;
#line 3128 "string.m"
}
#line 5133 "string.m"
      }
#line 5135 "string.m"
    else
#line 5140 "string.m"
      {
#line 5136 "string.m"
        MR_Integer mercury__string__V_21_21 = ((MR_Integer) 0 - mercury__string__Base_8);

#line 5136 "string.m"
        mercury__string__succeeded = (mercury__string__NegN_7 > mercury__string__V_21_21);
#line 5140 "string.m"
        if (mercury__string__succeeded)
#line 5137 "string.m"
          {
#line 5137 "string.m"
            MR_Integer mercury__string__N_14 = ((MR_Integer) 0 - mercury__string__NegN_7);
#line 5137 "string.m"
            MR_Char mercury__string__DigitChar_15;
#line 5137 "string.m"
            MR_Word mercury__string__V_45_45;
#line 5137 "string.m"
            MR_Word mercury__string__V_46_46;
#line 1421 "string.m"
            MR_String mercury__string__Str0_55;

#line 5138 "string.m"
            {
#line 5138 "string.m"
              mercury__string__DigitChar_15 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_8, mercury__string__N_14);
            }
#line 5028 "string.m"
            mercury__string__V_46_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5028 "string.m"
            {
#line 5028 "string.m"
              mercury__string__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5028 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_15));
#line 5028 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 1) = ((MR_Box) (mercury__string__V_46_46));
#line 5028 "string.m"
            }
#line 1419 "string.m"
            {
#line 1419 "string.m"
              mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_45_45, &mercury__string__Str0_55);
            }
#line 1421 "string.m"
            if (mercury__string__succeeded)
#line 1420 "string.m"
              *mercury__string__Str_12 = mercury__string__Str0_55;
#line 1421 "string.m"
            else
#line 1422 "string.m"
              {
#line 1422 "string.m"
                {
#line 1422 "string.m"
                  mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1422 "string.m"
                  return;
                }
#line 1422 "string.m"
              }
#line 5137 "string.m"
          }
#line 5140 "string.m"
        else
#line 5141 "string.m"
          {
#line 5141 "string.m"
            MR_Integer mercury__string__NegN1_16;
#line 5141 "string.m"
            MR_Integer mercury__string__N10_17;
#line 5141 "string.m"
            MR_String mercury__string__DigitString_18;
#line 5141 "string.m"
            MR_Integer mercury__string__V_22_22;
#line 5141 "string.m"
            MR_Integer mercury__string__V_23_23;
#line 5141 "string.m"
            MR_String mercury__string__Str1_25;
#line 5141 "string.m"
            MR_Char mercury__string__DigitChar_26;
#line 5141 "string.m"
            MR_Word mercury__string__V_65_65;
#line 5141 "string.m"
            MR_Word mercury__string__V_66_66;
#line 1421 "string.m"
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

#line 6343 "string.c"

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
#line 5142 "string.m"
            mercury__string__V_22_22 = (mercury__string__NegN1_16 * mercury__string__Base_8);
#line 5142 "string.m"
            mercury__string__N10_17 = (mercury__string__V_22_22 - mercury__string__NegN_7);
#line 5143 "string.m"
            {
#line 5143 "string.m"
              mercury__string__DigitChar_26 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_8, mercury__string__N10_17);
            }
#line 5028 "string.m"
            mercury__string__V_66_66 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5028 "string.m"
            {
#line 5028 "string.m"
              mercury__string__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5028 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_65_65, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_26));
#line 5028 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_65_65, 1) = ((MR_Box) (mercury__string__V_66_66));
#line 5028 "string.m"
            }
#line 1419 "string.m"
            {
#line 1419 "string.m"
              mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_65_65, &mercury__string__Str0_75);
            }
#line 1421 "string.m"
            if (mercury__string__succeeded)
#line 1420 "string.m"
              mercury__string__DigitString_18 = mercury__string__Str0_75;
#line 1421 "string.m"
            else
#line 1422 "string.m"
              {
#line 1422 "string.m"
                {
#line 1422 "string.m"
                  mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1422 "string.m"
                  return;
                }
#line 1422 "string.m"
              }
#line 5145 "string.m"
            mercury__string__V_23_23 = (mercury__string__Curr_9 + (MR_Integer) 1);
#line 5145 "string.m"
            {
#line 5145 "string.m"
              mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__NegN1_16, mercury__string__Base_8, mercury__string__V_23_23, mercury__string__GroupLength_10, mercury__string__Sep_11, &mercury__string__Str1_25);
            }
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_2_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str1_25 ;
	S2 =  mercury__string__DigitString_18 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6448 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_12  = S3;
#line 3128 "string.m"
}
#line 5141 "string.m"
          }
#line 5140 "string.m"
      }
#line 5135 "string.m"
  }
#line 5124 "string.m"
}

#line 5100 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_group_1_5_p_0(
#line 5100 "string.m"
  MR_Integer mercury__string__N_6,
#line 5100 "string.m"
  MR_Integer mercury__string__Base_7,
#line 5100 "string.m"
  MR_Integer mercury__string__GroupLength_8,
#line 5100 "string.m"
  MR_String mercury__string__Sep_9,
#line 5100 "string.m"
  MR_String * mercury__string__Str_10)
#line 5100 "string.m"
{
#line 5110 "string.m"
  {
#line 5110 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__N_6 < (MR_Integer) 0);

#line 5110 "string.m"
    if (mercury__string__succeeded)
#line 5108 "string.m"
      {
#line 5108 "string.m"
        MR_String mercury__string__Str1_11;

#line 5108 "string.m"
        {
#line 5108 "string.m"
          mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__N_6, mercury__string__Base_7, (MR_Integer) 0, mercury__string__GroupLength_8, mercury__string__Sep_9, &mercury__string__Str1_11);
        }
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__int_to_base_string_group_1_5_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "-" ;
	S2 =  mercury__string__Str1_11 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6516 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_10  = S3;
#line 3128 "string.m"
}
#line 5108 "string.m"
      }
#line 5110 "string.m"
    else
#line 5111 "string.m"
      {
#line 5111 "string.m"
        MR_Integer mercury__string__N1_12 = ((MR_Integer) 0 - mercury__string__N_6);

#line 5112 "string.m"
        {
#line 5112 "string.m"
          mercury__string__int_to_base_string_group_2_6_p_0(mercury__string__N1_12, mercury__string__Base_7, (MR_Integer) 0, mercury__string__GroupLength_8, mercury__string__Sep_9, mercury__string__Str_10);
#line 5112 "string.m"
          return;
        }
#line 5111 "string.m"
      }
#line 5110 "string.m"
  }
#line 5100 "string.m"
}

#line 5070 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_2_4_p_0(
#line 5070 "string.m"
  MR_Integer mercury__string__NegN_5,
#line 5070 "string.m"
  MR_Integer mercury__string__Base_6,
#line 5070 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_RevChars_0_12,
#line 5070 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_RevChars_13)
#line 5070 "string.m"
{
#line 5081 "string.m"
  {
#line 5081 "string.m"
    MR_bool mercury__string__succeeded;
#line 5077 "string.m"
    MR_Integer mercury__string__V_14_14 = ((MR_Integer) 0 - mercury__string__Base_6);

#line 5077 "string.m"
    mercury__string__succeeded = (mercury__string__NegN_5 > mercury__string__V_14_14);
#line 5081 "string.m"
    if (mercury__string__succeeded)
#line 5078 "string.m"
      {
#line 5078 "string.m"
        MR_Integer mercury__string__N_8 = ((MR_Integer) 0 - mercury__string__NegN_5);
#line 5078 "string.m"
        MR_Char mercury__string__DigitChar_9;

#line 5079 "string.m"
        {
#line 5079 "string.m"
          mercury__string__DigitChar_9 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_6, mercury__string__N_8);
        }
#line 5080 "string.m"
        {
#line 5080 "string.m"
          MR_Word base;
#line 5080 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5080 "string.m"
          *mercury__string__STATE_VARIABLE_RevChars_13 = base;
#line 5080 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_9));
#line 5080 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevChars_0_12));
#line 5080 "string.m"
        }
#line 5078 "string.m"
      }
#line 5081 "string.m"
    else
#line 5082 "string.m"
      {
#line 5082 "string.m"
        MR_Integer mercury__string__NegN1_10;
#line 5082 "string.m"
        MR_Integer mercury__string__N10_11;
#line 5082 "string.m"
        MR_Integer mercury__string__V_16_16;
#line 5082 "string.m"
        MR_Word mercury__string__STATE_VARIABLE_RevChars_17_17;
#line 5082 "string.m"
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

#line 6628 "string.c"

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
#line 5083 "string.m"
        mercury__string__V_16_16 = (mercury__string__NegN1_10 * mercury__string__Base_6);
#line 5083 "string.m"
        mercury__string__N10_11 = (mercury__string__V_16_16 - mercury__string__NegN_5);
#line 5084 "string.m"
        {
#line 5084 "string.m"
          mercury__string__DigitChar_19 = mercury__char__det_base_int_to_digit_2_f_0(mercury__string__Base_6, mercury__string__N10_11);
        }
#line 5085 "string.m"
        {
#line 5085 "string.m"
          mercury__string__int_to_base_string_2_4_p_0(mercury__string__NegN1_10, mercury__string__Base_6, mercury__string__STATE_VARIABLE_RevChars_0_12, &mercury__string__STATE_VARIABLE_RevChars_17_17);
        }
#line 5086 "string.m"
        {
#line 5086 "string.m"
          MR_Word base;
#line 5086 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5086 "string.m"
          *mercury__string__STATE_VARIABLE_RevChars_13 = base;
#line 5086 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__DigitChar_19));
#line 5086 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevChars_17_17));
#line 5086 "string.m"
        }
#line 5082 "string.m"
      }
#line 5081 "string.m"
  }
#line 5070 "string.m"
}

#line 5056 "string.m"
void MR_CALL 
mercury__string__int_to_base_string_1_3_p_0(
#line 5056 "string.m"
  MR_Integer mercury__string__N_4,
#line 5056 "string.m"
  MR_Integer mercury__string__Base_5,
#line 5056 "string.m"
  MR_String * mercury__string__Str_6)
#line 5056 "string.m"
{
#line 5058 "string.m"
  {
#line 5058 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__N_4 < (MR_Integer) 0);
#line 5058 "string.m"
    MR_Word mercury__string__RevChars_7;
#line 1559 "string.m"
    MR_String mercury__string__Str0_17;

#line 5064 "string.m"
    if (mercury__string__succeeded)
#line 5063 "string.m"
      {
#line 5063 "string.m"
        MR_Word mercury__string__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_1[4]);
#line 5063 "string.m"
        MR_Word mercury__string__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 5063 "string.m"
        {
#line 5063 "string.m"
          mercury__string__int_to_base_string_2_4_p_0(mercury__string__N_4, mercury__string__Base_5, mercury__string__V_10_10, &mercury__string__RevChars_7);
        }
#line 5063 "string.m"
      }
#line 5064 "string.m"
    else
#line 5065 "string.m"
      {
#line 5065 "string.m"
        MR_Integer mercury__string__NegN_8 = ((MR_Integer) 0 - mercury__string__N_4);
#line 5065 "string.m"
        MR_Word mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 5066 "string.m"
        {
#line 5066 "string.m"
          mercury__string__int_to_base_string_2_4_p_0(mercury__string__NegN_8, mercury__string__Base_5, mercury__string__V_14_14, &mercury__string__RevChars_7);
        }
#line 5065 "string.m"
      }
#line 1557 "string.m"
    {
#line 1557 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__RevChars_7, &mercury__string__Str0_17);
    }
#line 1559 "string.m"
    if (mercury__string__succeeded)
#line 1558 "string.m"
      *mercury__string__Str_6 = mercury__string__Str0_17;
#line 1559 "string.m"
    else
#line 1560 "string.m"
      {
#line 1560 "string.m"
        {
#line 1560 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
#line 1560 "string.m"
          return;
        }
#line 1560 "string.m"
      }
#line 5058 "string.m"
  }
#line 5056 "string.m"
}

#line 4895 "string.m"
MR_bool MR_CALL 
mercury__string__accumulate_negative_int_4_p_0(
#line 4895 "string.m"
  MR_Integer mercury__string__Base_5,
#line 4895 "string.m"
  MR_Char mercury__string__Char_6,
#line 4895 "string.m"
  MR_Integer mercury__string__N0_7,
#line 4895 "string.m"
  MR_Integer * mercury__string__N_8)
#line 4895 "string.m"
{
#line 4898 "string.m"
  {
#line 4898 "string.m"
    MR_bool mercury__string__succeeded;
#line 4898 "string.m"
    MR_Integer mercury__string__M_9;
#line 4898 "string.m"
    MR_Integer mercury__string__V_10_10;

#line 4899 "string.m"
    {
#line 4899 "string.m"
      mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__Base_5, mercury__string__Char_6, &mercury__string__M_9);
    }
#line 4898 "string.m"
    if (mercury__string__succeeded)
#line 4898 "string.m"
      {
#line 4900 "string.m"
        mercury__string__V_10_10 = (mercury__string__Base_5 * mercury__string__N0_7);
#line 4900 "string.m"
        *mercury__string__N_8 = (mercury__string__V_10_10 - mercury__string__M_9);
#line 4901 "string.m"
        mercury__string__succeeded = (*mercury__string__N_8 <= mercury__string__N0_7);
#line 4901 "string.m"
        if (!(mercury__string__succeeded))
#line 4901 "string.m"
          {
#line 4901 "string.m"
            mercury__string__succeeded = (mercury__string__Base_5 == (MR_Integer) 10);
#line 4901 "string.m"
            mercury__string__succeeded = !(mercury__string__succeeded);
#line 4901 "string.m"
          }
#line 4898 "string.m"
      }
#line 4898 "string.m"
    return mercury__string__succeeded;
#line 4898 "string.m"
  }
#line 4895 "string.m"
}

#line 4888 "string.m"
MR_bool MR_CALL 
mercury__string__accumulate_int_4_p_0(
#line 4888 "string.m"
  MR_Integer mercury__string__Base_5,
#line 4888 "string.m"
  MR_Char mercury__string__Char_6,
#line 4888 "string.m"
  MR_Integer mercury__string__N0_7,
#line 4888 "string.m"
  MR_Integer * mercury__string__N_8)
#line 4888 "string.m"
{
#line 4890 "string.m"
  {
#line 4890 "string.m"
    MR_bool mercury__string__succeeded;
#line 4890 "string.m"
    MR_Integer mercury__string__M_9;
#line 4890 "string.m"
    MR_Integer mercury__string__V_10_10;

#line 4891 "string.m"
    {
#line 4891 "string.m"
      mercury__string__succeeded = mercury__char__base_digit_to_int_3_p_0(mercury__string__Base_5, mercury__string__Char_6, &mercury__string__M_9);
    }
#line 4890 "string.m"
    if (mercury__string__succeeded)
#line 4890 "string.m"
      {
#line 4892 "string.m"
        mercury__string__V_10_10 = (mercury__string__Base_5 * mercury__string__N0_7);
#line 4892 "string.m"
        *mercury__string__N_8 = (mercury__string__V_10_10 + mercury__string__M_9);
#line 4893 "string.m"
        mercury__string__succeeded = (mercury__string__N0_7 <= *mercury__string__N_8);
#line 4893 "string.m"
        if (!(mercury__string__succeeded))
#line 4893 "string.m"
          {
#line 4893 "string.m"
            mercury__string__succeeded = (mercury__string__Base_5 == (MR_Integer) 10);
#line 4893 "string.m"
            mercury__string__succeeded = !(mercury__string__succeeded);
#line 4893 "string.m"
          }
#line 4890 "string.m"
      }
#line 4890 "string.m"
    return mercury__string__succeeded;
#line 4890 "string.m"
  }
#line 4888 "string.m"
}

#line 4841 "string.m"
void MR_CALL 
mercury__string__max_str_length_3_p_0(
#line 4841 "string.m"
  MR_String mercury__string__Str_4,
#line 4841 "string.m"
  MR_Integer mercury__string__PrevMaxLen_5,
#line 4841 "string.m"
  MR_Integer * mercury__string__MaxLen_6)
#line 4841 "string.m"
{
#line 4843 "string.m"
  {
#line 4843 "string.m"
    MR_bool mercury__string__succeeded;
#line 4843 "string.m"
    MR_Integer mercury__string__Length_7;

#line 2439 "string.m"
    {
#line 2439 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Str_4, &mercury__string__Length_7);
    }
#line 4845 "string.m"
    mercury__string__succeeded = (mercury__string__Length_7 > mercury__string__PrevMaxLen_5);
#line 4847 "string.m"
    if (mercury__string__succeeded)
#line 4846 "string.m"
      *mercury__string__MaxLen_6 = mercury__string__Length_7;
#line 4847 "string.m"
    else
#line 4848 "string.m"
      *mercury__string__MaxLen_6 = mercury__string__PrevMaxLen_5;
#line 4843 "string.m"
  }
#line 4841 "string.m"
}

#line 4837 "string.m"
MR_String MR_CALL 
mercury__string__lpad_3_f_0(
#line 4837 "string.m"
  MR_Char mercury__string__Chr_5,
#line 4837 "string.m"
  MR_Integer mercury__string__N_6,
#line 4837 "string.m"
  MR_String mercury__string__Str_7)
#line 4837 "string.m"
{
#line 4309 "string.m"
  {
#line 4309 "string.m"
    MR_bool mercury__string__succeeded;
#line 4309 "string.m"
    MR_String mercury__string__HeadVar__4_4;
#line 4309 "string.m"
    MR_Integer mercury__string__Length_16;

#line 4310 "string.m"
    {
#line 4310 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Str_7, &mercury__string__Length_16);
    }
#line 4311 "string.m"
    mercury__string__succeeded = (mercury__string__Length_16 < mercury__string__N_6);
#line 4315 "string.m"
    if (mercury__string__succeeded)
#line 4312 "string.m"
      {
#line 4312 "string.m"
        MR_Integer mercury__string__Count_17 = (mercury__string__N_6 - mercury__string__Length_16);
#line 4312 "string.m"
        MR_String mercury__string__PadString_18;

#line 4313 "string.m"
        {
#line 4313 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__Chr_5, mercury__string__Count_17, &mercury__string__PadString_18);
        }
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__lpad_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_18 ;
	S2 =  mercury__string__Str_7 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 6988 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
#line 3128 "string.m"
}
#line 4312 "string.m"
      }
#line 4315 "string.m"
    else
#line 4316 "string.m"
      mercury__string__HeadVar__4_4 = mercury__string__Str_7;
#line 4309 "string.m"
    return mercury__string__HeadVar__4_4;
#line 4309 "string.m"
  }
#line 4837 "string.m"
}

#line 4833 "string.m"
MR_String MR_CALL 
mercury__string__rpad_3_f_0(
#line 4833 "string.m"
  MR_Char mercury__string__Chr_5,
#line 4833 "string.m"
  MR_Integer mercury__string__N_6,
#line 4833 "string.m"
  MR_String mercury__string__Str_7)
#line 4833 "string.m"
{
#line 4322 "string.m"
  {
#line 4322 "string.m"
    MR_bool mercury__string__succeeded;
#line 4322 "string.m"
    MR_String mercury__string__HeadVar__4_4;
#line 4322 "string.m"
    MR_Integer mercury__string__Length_16;

#line 4323 "string.m"
    {
#line 4323 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Str_7, &mercury__string__Length_16);
    }
#line 4324 "string.m"
    mercury__string__succeeded = (mercury__string__Length_16 < mercury__string__N_6);
#line 4328 "string.m"
    if (mercury__string__succeeded)
#line 4325 "string.m"
      {
#line 4325 "string.m"
        MR_Integer mercury__string__Count_17 = (mercury__string__N_6 - mercury__string__Length_16);
#line 4325 "string.m"
        MR_String mercury__string__PadString_18;

#line 4326 "string.m"
        {
#line 4326 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__Chr_5, mercury__string__Count_17, &mercury__string__PadString_18);
        }
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__rpad_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Str_7 ;
	S2 =  mercury__string__PadString_18 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7069 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
#line 3128 "string.m"
}
#line 4325 "string.m"
      }
#line 4328 "string.m"
    else
#line 4329 "string.m"
      mercury__string__HeadVar__4_4 = mercury__string__Str_7;
#line 4322 "string.m"
    return mercury__string__HeadVar__4_4;
#line 4322 "string.m"
  }
#line 4833 "string.m"
}

#line 4826 "string.m"
MR_Word MR_CALL 
mercury__string__pad_column_2_f_0(
#line 4826 "string.m"
  MR_Integer mercury__string__Width_1,
#line 4826 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 4826 "string.m"
{
#line 4828 "string.m"
  {
#line 4828 "string.m"
    MR_bool mercury__string__succeeded;
#line 4828 "string.m"
    MR_Word mercury__string__HeadVar__3_3;

#line 4828 "string.m"
    if (((MR_tag((MR_Word) mercury__string__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 4828 "string.m"
      {
#line 4828 "string.m"
        MR_Word mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 4829 "string.m"
        {
#line 4829 "string.m"
          return mercury__string__HeadVar__3_3 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_55_95_95_91_51_93_95_48_2_f_in__list_0((MR_Char) 32, mercury__string__Width_1, mercury__string__Strings_5);
        }
#line 4828 "string.m"
      }
#line 4828 "string.m"
    else
#line 4830 "string.m"
      {
#line 4830 "string.m"
        MR_Word mercury__string__Strings_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));

#line 4831 "string.m"
        {
#line 4831 "string.m"
          return mercury__string__HeadVar__3_3 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_51_93_95_48_2_f_in__list_0((MR_Char) 32, mercury__string__Width_1, mercury__string__Strings_9);
        }
#line 4830 "string.m"
      }
#line 4828 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4828 "string.m"
  }
#line 4826 "string.m"
}

#line 4802 "string.m"
MR_Word MR_CALL 
mercury__string__find_max_length_with_limit_1_f_0(
#line 4802 "string.m"
  MR_Word mercury__string__HeadVar__1_1)
#line 4802 "string.m"
{
#line 4805 "string.m"
  {
#line 4805 "string.m"
    MR_bool mercury__string__succeeded;
#line 4805 "string.m"
    MR_Word mercury__string__HeadVar__2_2;
#line 4805 "string.m"
    MR_Word mercury__string__JustColumn_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4805 "string.m"
    MR_Word mercury__string__MaybeLimit_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4805 "string.m"
    MR_Word mercury__string__Sense_5;
#line 4805 "string.m"
    MR_Integer mercury__string__MaxLength_6;
#line 4805 "string.m"
    MR_Word mercury__string__Strings_7;
#line 4805 "string.m"
    MR_Integer mercury__string__MaxLength0_8;

#line 4809 "string.m"
    if (((MR_tag((MR_Word) mercury__string__JustColumn_3)) == (MR_mktag((MR_Integer) 0))))
#line 4807 "string.m"
      {
#line 4807 "string.m"
        mercury__string__Strings_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 4808 "string.m"
        mercury__string__Sense_5 = (MR_Integer) 0;
#line 4807 "string.m"
      }
#line 4809 "string.m"
    else
#line 4810 "string.m"
      {
#line 4810 "string.m"
        mercury__string__Strings_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 4811 "string.m"
        mercury__string__Sense_5 = (MR_Integer) 1;
#line 4810 "string.m"
      }
#line 4813 "string.m"
    {
#line 4813 "string.m"
      mercury__string__foldl__ho8_4_p_in__list_0(mercury__string__Strings_7, (MR_Integer) 0, &mercury__string__MaxLength0_8);
    }
#line 4821 "string.m"
    if ((mercury__string__MaybeLimit_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4823 "string.m"
      mercury__string__MaxLength_6 = mercury__string__MaxLength0_8;
#line 4821 "string.m"
    else
#line 4815 "string.m"
      {
#line 4815 "string.m"
        MR_Integer mercury__string__Limit_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__string__MaybeLimit_4, (MR_Integer) 0)));

#line 4816 "string.m"
        mercury__string__succeeded = (mercury__string__MaxLength0_8 > mercury__string__Limit_9);
#line 4818 "string.m"
        if (mercury__string__succeeded)
#line 4817 "string.m"
          mercury__string__MaxLength_6 = mercury__string__Limit_9;
#line 4818 "string.m"
        else
#line 4819 "string.m"
          mercury__string__MaxLength_6 = mercury__string__MaxLength0_8;
#line 4815 "string.m"
      }
#line 4805 "string.m"
    {
#line 4805 "string.m"
      mercury__string__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4805 "string.m"
      MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, 0) = ((MR_Box) (mercury__string__Sense_5));
#line 4805 "string.m"
      MR_hl_field(MR_mktag(0), mercury__string__HeadVar__2_2, 1) = ((MR_Box) (mercury__string__MaxLength_6));
#line 4805 "string.m"
    }
#line 4805 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4805 "string.m"
  }
#line 4802 "string.m"
}

#line 4790 "string.m"
MR_Integer MR_CALL 
mercury__string__find_max_length_1_f_0(
#line 4790 "string.m"
  MR_Word mercury__string__JustColumn_3)
#line 4790 "string.m"
{
#line 4792 "string.m"
  {
#line 4792 "string.m"
    MR_bool mercury__string__succeeded;
#line 4792 "string.m"
    MR_Integer mercury__string__MaxLength_4;
#line 4792 "string.m"
    MR_Word mercury__string__Strings_5;

#line 4794 "string.m"
    if (((MR_tag((MR_Word) mercury__string__JustColumn_3)) == (MR_mktag((MR_Integer) 0))))
#line 4793 "string.m"
      mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 4794 "string.m"
    else
#line 4794 "string.m"
      mercury__string__Strings_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__JustColumn_3, (MR_Integer) 0)));
#line 4796 "string.m"
    {
#line 4796 "string.m"
      mercury__string__foldl__ho8_4_p_in__list_0(mercury__string__Strings_5, (MR_Integer) 0, &mercury__string__MaxLength_4);
    }
#line 4792 "string.m"
    return mercury__string__MaxLength_4;
#line 4792 "string.m"
  }
#line 4790 "string.m"
}

#line 4786 "string.m"
MR_String MR_CALL 
mercury__string__join_rev_columns_3_f_0(
#line 4786 "string.m"
  MR_String mercury__string__Separator_5,
#line 4786 "string.m"
  MR_String mercury__string__Col1_6,
#line 4786 "string.m"
  MR_String mercury__string__Col2_7)
#line 4786 "string.m"
{
#line 4788 "string.m"
  {
#line 4788 "string.m"
    MR_bool mercury__string__succeeded;
#line 4788 "string.m"
    MR_String mercury__string__HeadVar__4_4;
#line 4788 "string.m"
    MR_String mercury__string__V_8_8;

#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_rev_columns_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Separator_5 ;
	S2 =  mercury__string__Col1_6 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7307 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3128 "string.m"
}
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_rev_columns_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Col2_7 ;
	S2 =  mercury__string__V_8_8 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7334 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__4_4  = S3;
#line 3128 "string.m"
}
#line 4788 "string.m"
    return mercury__string__HeadVar__4_4;
#line 4788 "string.m"
  }
#line 4786 "string.m"
}

#line 4747 "string.m"
void MR_CALL 
mercury__string__pad_row_6_p_0(
#line 4747 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4747 "string.m"
  MR_Word mercury__string__HeadVar__2_2,
#line 4747 "string.m"
  MR_String mercury__string__Separator_3,
#line 4747 "string.m"
  MR_Integer mercury__string__SepLen_4,
#line 4747 "string.m"
  MR_Integer mercury__string__CurColumn_5,
#line 4747 "string.m"
  MR_String * mercury__string__HeadVar__6_6)
#line 4747 "string.m"
{
#line 4750 "string.m"
  {
#line 4750 "string.m"
    MR_bool mercury__string__succeeded;

#line 4750 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4750 "string.m"
      if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4750 "string.m"
        *mercury__string__HeadVar__6_6 = (MR_String) "";
#line 4750 "string.m"
      else
#line 4781 "string.m"
        {
#line 4782 "string.m"
          {
#line 4782 "string.m"
            mercury__require__error_2_p_0((MR_String) "predicate \140string.pad_row\'/6", (MR_String) "list length mismatch");
#line 4782 "string.m"
            return;
          }
#line 4781 "string.m"
        }
#line 4750 "string.m"
    else
#line 4750 "string.m"
      {
#line 4750 "string.m"
        MR_Word mercury__string__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4750 "string.m"
        MR_Word mercury__string__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));

#line 4750 "string.m"
        if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4783 "string.m"
          {
#line 4784 "string.m"
            {
#line 4784 "string.m"
              mercury__require__error_2_p_0((MR_String) "predicate \140string.pad_row\'/6", (MR_String) "list length mismatch");
#line 4784 "string.m"
              return;
            }
#line 4783 "string.m"
          }
#line 4750 "string.m"
        else
#line 4752 "string.m"
          {
#line 4752 "string.m"
            MR_Word mercury__string__Justify_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_55_55, (MR_Integer) 0)));
#line 4752 "string.m"
            MR_Integer mercury__string__MaxWidth_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__string__V_55_55, (MR_Integer) 1)));
#line 4752 "string.m"
            MR_String mercury__string__ColumnStr0_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 4752 "string.m"
            MR_Word mercury__string__ColumnStrs0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 4752 "string.m"
            MR_Integer mercury__string__NextColumn_19;
#line 4752 "string.m"
            MR_String mercury__string__LineRest_20;
#line 4752 "string.m"
            MR_Integer mercury__string__V_27_27 = (mercury__string__CurColumn_5 + mercury__string__MaxWidth_11);
#line 4756 "string.m"
            MR_Integer mercury__string__V_28_28;

#line 4753 "string.m"
            mercury__string__NextColumn_19 = (mercury__string__V_27_27 + mercury__string__SepLen_4);
#line 4754 "string.m"
            {
#line 4754 "string.m"
              mercury__string__pad_row_6_p_0(mercury__string__V_54_54, mercury__string__ColumnStrs0_14, mercury__string__Separator_3, mercury__string__SepLen_4, mercury__string__NextColumn_19, &mercury__string__LineRest_20);
            }
#line 2439 "string.m"
            {
#line 2439 "string.m"
              mercury__string__count_codepoints_2_p_0(mercury__string__ColumnStr0_13, &mercury__string__V_28_28);
            }
#line 4756 "string.m"
            mercury__string__succeeded = (mercury__string__V_28_28 <= mercury__string__MaxWidth_11);
#line 4771 "string.m"
            if (mercury__string__succeeded)
#line 4763 "string.m"
              {
#line 4763 "string.m"
                MR_String mercury__string__ColumnStr_21;

#line 4760 "string.m"
                if ((mercury__string__Justify_10 == (MR_Integer) 0))
#line 4758 "string.m"
                  {
#line 4758 "string.m"
                    MR_Integer mercury__string__Length_66;

#line 4323 "string.m"
                    {
#line 4323 "string.m"
                      mercury__string__count_codepoints_2_p_0(mercury__string__ColumnStr0_13, &mercury__string__Length_66);
                    }
#line 4324 "string.m"
                    mercury__string__succeeded = (mercury__string__Length_66 < mercury__string__MaxWidth_11);
#line 4328 "string.m"
                    if (mercury__string__succeeded)
#line 4325 "string.m"
                      {
#line 4325 "string.m"
                        MR_Integer mercury__string__Count_67 = (mercury__string__MaxWidth_11 - mercury__string__Length_66);
#line 4325 "string.m"
                        MR_String mercury__string__PadString_68;

#line 4326 "string.m"
                        {
#line 4326 "string.m"
                          mercury__string__duplicate_char_3_p_0((MR_Char) 32, mercury__string__Count_67, &mercury__string__PadString_68);
                        }
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_row_6_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__ColumnStr0_13 ;
	S2 =  mercury__string__PadString_68 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 7501 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ColumnStr_21  = S3;
#line 3128 "string.m"
}
#line 4325 "string.m"
                      }
#line 4328 "string.m"
                    else
#line 4329 "string.m"
                      mercury__string__ColumnStr_21 = mercury__string__ColumnStr0_13;
#line 4758 "string.m"
                  }
#line 4760 "string.m"
                else
#line 4761 "string.m"
                  {
#line 4762 "string.m"
                    {
#line 4762 "string.m"
                      mercury__string__ColumnStr_21 = mercury__string__pad_left_3_f_0(mercury__string__ColumnStr0_13, (MR_Char) 32, mercury__string__MaxWidth_11);
                    }
#line 4761 "string.m"
                  }
#line 4767 "string.m"
                if ((mercury__string__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4765 "string.m"
                  *mercury__string__HeadVar__6_6 = mercury__string__ColumnStr_21;
#line 4767 "string.m"
                else
#line 4768 "string.m"
                  {
#line 4768 "string.m"
                    MR_String mercury__string__V_31_31;

#line 4769 "string.m"
                    {
#line 4769 "string.m"
                      mercury__string__V_31_31 = mercury__string__f_43_43_2_f_0(mercury__string__Separator_3, mercury__string__LineRest_20);
                    }
#line 4769 "string.m"
                    {
#line 4769 "string.m"
                      *mercury__string__HeadVar__6_6 = mercury__string__f_43_43_2_f_0(mercury__string__ColumnStr_21, mercury__string__V_31_31);
                    }
#line 4768 "string.m"
                  }
#line 4763 "string.m"
              }
#line 4771 "string.m"
            else
#line 4775 "string.m"
              if ((mercury__string__V_54_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4773 "string.m"
                *mercury__string__HeadVar__6_6 = mercury__string__ColumnStr0_13;
#line 4775 "string.m"
              else
#line 4776 "string.m"
                {
#line 4776 "string.m"
                  MR_String mercury__string__V_32_32;
#line 4776 "string.m"
                  MR_String mercury__string__V_33_33;
#line 4776 "string.m"
                  MR_String mercury__string__V_35_35;
#line 4776 "string.m"
                  MR_String mercury__string__V_36_36;

#line 1806 "string.m"
                  {
#line 1806 "string.m"
                    mercury__string__duplicate_char_3_p_0((MR_Char) 32, mercury__string__NextColumn_19, &mercury__string__V_36_36);
                  }
#line 4778 "string.m"
                  {
#line 4778 "string.m"
                    mercury__string__V_35_35 = mercury__string__f_43_43_2_f_0(mercury__string__V_36_36, mercury__string__LineRest_20);
                  }
#line 4777 "string.m"
                  {
#line 4777 "string.m"
                    mercury__string__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "\n", mercury__string__V_35_35);
                  }
#line 4777 "string.m"
                  {
#line 4777 "string.m"
                    mercury__string__V_32_32 = mercury__string__f_43_43_2_f_0(mercury__string__Separator_3, mercury__string__V_33_33);
                  }
#line 4777 "string.m"
                  {
#line 4777 "string.m"
                    *mercury__string__HeadVar__6_6 = mercury__string__f_43_43_2_f_0(mercury__string__ColumnStr0_13, mercury__string__V_32_32);
                  }
#line 4776 "string.m"
                }
#line 4752 "string.m"
          }
#line 4750 "string.m"
      }
#line 4750 "string.m"
  }
#line 4747 "string.m"
}

#line 4733 "string.m"
void MR_CALL 
mercury__string__get_next_line_3_p_0(
#line 4733 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4733 "string.m"
  MR_Word * mercury__string__HeadVar__2_2,
#line 4733 "string.m"
  MR_Word * mercury__string__HeadVar__3_3)
#line 4733 "string.m"
{
#line 4736 "string.m"
  {
#line 4736 "string.m"
    MR_bool mercury__string__succeeded;

#line 4736 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4736 "string.m"
      {
#line 4736 "string.m"
        *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4736 "string.m"
        *mercury__string__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4736 "string.m"
      }
#line 4736 "string.m"
    else
#line 4738 "string.m"
      {
#line 4738 "string.m"
        MR_Word mercury__string__Column_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4738 "string.m"
        MR_Word mercury__string__Columns_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4738 "string.m"
        MR_String mercury__string__ColumnTop_6;
#line 4738 "string.m"
        MR_Word mercury__string__ColumnTops_7;
#line 4738 "string.m"
        MR_Word mercury__string__ColumnRest_8;
#line 4738 "string.m"
        MR_Word mercury__string__ColumnRests_9;

#line 4742 "string.m"
        if ((mercury__string__Column_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4740 "string.m"
          {
#line 4741 "string.m"
            {
#line 4741 "string.m"
              mercury__require__error_2_p_0((MR_String) "predicate \140string.get_next_line\'/3", (MR_String) "list length mismatch");
#line 4741 "string.m"
              return;
            }
#line 4740 "string.m"
          }
#line 4742 "string.m"
        else
#line 4743 "string.m"
          {
#line 4743 "string.m"
            mercury__string__ColumnTop_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__Column_4, (MR_Integer) 0)));
#line 4743 "string.m"
            mercury__string__ColumnRest_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__Column_4, (MR_Integer) 1)));
#line 4743 "string.m"
          }
#line 4745 "string.m"
        {
#line 4745 "string.m"
          mercury__string__get_next_line_3_p_0(mercury__string__Columns_5, &mercury__string__ColumnTops_7, &mercury__string__ColumnRests_9);
        }
#line 4737 "string.m"
        {
#line 4737 "string.m"
          MR_Word base;
#line 4737 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4737 "string.m"
          *mercury__string__HeadVar__2_2 = base;
#line 4737 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__ColumnTop_6));
#line 4737 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__ColumnTops_7));
#line 4737 "string.m"
        }
#line 4738 "string.m"
        {
#line 4738 "string.m"
          MR_Word base;
#line 4738 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4738 "string.m"
          *mercury__string__HeadVar__3_3 = base;
#line 4738 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__ColumnRest_8));
#line 4738 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__ColumnRests_9));
#line 4738 "string.m"
        }
#line 4738 "string.m"
      }
#line 4736 "string.m"
  }
#line 4733 "string.m"
}

#line 4726 "string.m"
MR_bool MR_CALL 
mercury__string__all_empty_1_p_0(
#line 4726 "string.m"
  MR_Word mercury__string__HeadVar__1_1)
#line 4726 "string.m"
{
#line 4728 "string.m"
  while (MR_TRUE)
#line 4728 "string.m"
    {
#line 4728 "string.m"
      /* tailcall optimized into a loop */
#line 4728 "string.m"
      {
#line 4728 "string.m"
        MR_bool mercury__string__succeeded;

#line 4728 "string.m"
        if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4728 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 4728 "string.m"
        else
#line 4729 "string.m"
          {
#line 4729 "string.m"
            MR_Word mercury__string__List_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4729 "string.m"
            MR_Word mercury__string__Lists_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));

#line 4730 "string.m"
            mercury__string__succeeded = (mercury__string__List_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 4729 "string.m"
            if (mercury__string__succeeded)
#line 4731 "string.m"
              {
#line 4731 "string.m"
                /* direct tailcall eliminated */
#line 4731 "string.m"
                {
#line 4731 "string.m"
                  MR_Word mercury__string__HeadVar__1__tmp_copy_1 = mercury__string__Lists_3;

#line 4731 "string.m"
                  mercury__string__HeadVar__1_1 = mercury__string__HeadVar__1__tmp_copy_1;
#line 4731 "string.m"
                }
#line 4731 "string.m"
                continue;
#line 4731 "string.m"
              }
#line 4729 "string.m"
          }
#line 4728 "string.m"
        return mercury__string__succeeded;
#line 4728 "string.m"
      }
#line 4728 "string.m"
      break;
#line 4728 "string.m"
    }
#line 4726 "string.m"
}

#line 4713 "string.m"
void MR_CALL 
mercury__string__generate_rows_6_p_0(
#line 4713 "string.m"
  MR_Word mercury__string__MaxWidthsSenses_7,
#line 4713 "string.m"
  MR_String mercury__string__Separator_8,
#line 4713 "string.m"
  MR_Integer mercury__string__SepLen_9,
#line 4713 "string.m"
  MR_Word mercury__string__Columns0_10,
#line 4713 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_RevRows_0_15,
#line 4713 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_RevRows_16)
#line 4713 "string.m"
{
#line 4719 "string.m"
  while (MR_TRUE)
#line 4719 "string.m"
    {
#line 4719 "string.m"
      /* tailcall optimized into a loop */
#line 4719 "string.m"
      {
#line 4719 "string.m"
        MR_bool mercury__string__succeeded;

#line 4717 "string.m"
        {
#line 4717 "string.m"
          mercury__string__succeeded = mercury__string__all_empty_1_p_0(mercury__string__Columns0_10);
        }
#line 4719 "string.m"
        if (mercury__string__succeeded)
#line 4717 "string.m"
          *mercury__string__STATE_VARIABLE_RevRows_16 = mercury__string__STATE_VARIABLE_RevRows_0_15;
#line 4719 "string.m"
        else
#line 4720 "string.m"
          {
#line 4720 "string.m"
            MR_Word mercury__string__Line_12;
#line 4720 "string.m"
            MR_Word mercury__string__Columns_13;
#line 4720 "string.m"
            MR_String mercury__string__Row_14;
#line 4720 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_RevRows_18_18;

#line 4720 "string.m"
            {
#line 4720 "string.m"
              mercury__string__get_next_line_3_p_0(mercury__string__Columns0_10, &mercury__string__Line_12, &mercury__string__Columns_13);
            }
#line 4721 "string.m"
            {
#line 4721 "string.m"
              mercury__string__pad_row_6_p_0(mercury__string__MaxWidthsSenses_7, mercury__string__Line_12, mercury__string__Separator_8, mercury__string__SepLen_9, (MR_Integer) 0, &mercury__string__Row_14);
            }
#line 4722 "string.m"
            {
#line 4722 "string.m"
              mercury__string__STATE_VARIABLE_RevRows_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4722 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevRows_18_18, 0) = ((MR_Box) (mercury__string__Row_14));
#line 4722 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevRows_18_18, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevRows_0_15));
#line 4722 "string.m"
            }
#line 4723 "string.m"
            /* direct tailcall eliminated */
#line 4723 "string.m"
            {
#line 4723 "string.m"
              MR_Word mercury__string__Columns0__tmp_copy_10 = mercury__string__Columns_13;
#line 4723 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_RevRows_0__tmp_copy_15 = mercury__string__STATE_VARIABLE_RevRows_18_18;

#line 4723 "string.m"
              mercury__string__STATE_VARIABLE_RevRows_0_15 = mercury__string__STATE_VARIABLE_RevRows_0__tmp_copy_15;
#line 4723 "string.m"
              mercury__string__Columns0_10 = mercury__string__Columns0__tmp_copy_10;
#line 4723 "string.m"
            }
#line 4723 "string.m"
            continue;
#line 4720 "string.m"
          }
#line 4719 "string.m"
      }
#line 4719 "string.m"
      break;
#line 4719 "string.m"
    }
#line 4713 "string.m"
}

#line 4707 "string.m"
MR_Word MR_CALL 
mercury__string__project_column_strings_1_f_0(
#line 4707 "string.m"
  MR_Word mercury__string__HeadVar__1_1)
#line 4707 "string.m"
{
#line 4710 "string.m"
  {
#line 4710 "string.m"
    MR_bool mercury__string__succeeded;
#line 4710 "string.m"
    MR_Word mercury__string__Strings_2;
#line 4710 "string.m"
    MR_Word mercury__string__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4710 "string.m"
    MR_Word mercury__string__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__HeadVar__1_1, (MR_Integer) 1)));

#line 4710 "string.m"
    if (((MR_tag((MR_Word) mercury__string__V_10_10)) == (MR_mktag((MR_Integer) 0))))
#line 4710 "string.m"
      mercury__string__Strings_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__string__V_10_10, (MR_Integer) 0)));
#line 4710 "string.m"
    else
#line 4711 "string.m"
      mercury__string__Strings_2 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_10_10, (MR_Integer) 0)));
#line 4710 "string.m"
    return mercury__string__Strings_2;
#line 4710 "string.m"
  }
#line 4707 "string.m"
}

#line 4652 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_4_1(
#line 4652 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4652 "string.m"
{
#line 4652 "string.m"
  {
#line 4652 "string.m"
    struct mercury__string__foldr_between_2_6_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldr_between_2_6_p_4_env_0_s *) mercury__string__env_ptr_arg;

#line 4653 "string.m"
    {
#line 4653 "string.m"
      mercury__string__foldr_between_2_6_p_4((mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__Start_9, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr);
#line 4653 "string.m"
      return;
    }
#line 4652 "string.m"
  }
#line 4652 "string.m"
}

#line 4643 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_4(
#line 4643 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4643 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4643 "string.m"
  MR_String mercury__string__String_8,
#line 4643 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4643 "string.m"
  MR_Integer mercury__string__I_10,
#line 4643 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4643 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4643 "string.m"
  MR_Cont mercury__string__cont,
#line 4643 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4643 "string.m"
{
#line 4643 "string.m"
  {
#line 4643 "string.m"
    struct mercury__string__foldr_between_2_6_p_4_env_0_s mercury__string__env;

#line 4643 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__TypeInfo_for_T_18 = mercury__string__TypeInfo_for_T_18;
#line 4643 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7 = mercury__string__Closure_7;
#line 4643 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__String_8 = mercury__string__String_8;
#line 4643 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9 = mercury__string__Start_9;
#line 4643 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4643 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont = mercury__string__cont;
#line 4643 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4654 "string.m"
    {
#line 4654 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9);
#line 4654 "string.m"
      MR_Char mercury__string__Char_13;

#line 4648 "string.m"
      if (mercury__string__succeeded)
#line 4648 "string.m"
        {
#line 2012 "string.m"
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
#line 2012 "string.m"

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

#line 8014 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2012 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4648 "string.m"
          if (mercury__string__succeeded)
#line 4650 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__J_12 >= (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Start_9);
#line 4648 "string.m"
        }
#line 4654 "string.m"
      if (mercury__string__succeeded)
#line 4652 "string.m"
        {
#line 4652 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7, (MR_Integer) 1)));

#line 4652 "string.m"
          {
#line 4652 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldr_between_2_6_p_4_1, &mercury__string__env);
          }
#line 4652 "string.m"
        }
#line 4654 "string.m"
      else
#line 4653 "string.m"
        {
#line 4653 "string.m"
          *((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4653 "string.m"
          {
#line 4653 "string.m"
            ((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont)((mercury__string__env).mercury__string__foldr_between_2_6_p_4_env_0__cont_env_ptr);
#line 4653 "string.m"
            return;
          }
#line 4653 "string.m"
        }
#line 4654 "string.m"
    }
#line 4643 "string.m"
  }
#line 4643 "string.m"
}

#line 4652 "string.m"
static void MR_CALL 
mercury__string__foldr_between_2_6_p_3_1(
#line 4652 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4652 "string.m"
{
#line 4652 "string.m"
  {
#line 4652 "string.m"
    struct mercury__string__foldr_between_2_6_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldr_between_2_6_p_3_env_0_s *) mercury__string__env_ptr_arg;

#line 4653 "string.m"
    {
#line 4653 "string.m"
      mercury__string__foldr_between_2_6_p_3((mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__Start_9, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr);
#line 4653 "string.m"
      return;
    }
#line 4652 "string.m"
  }
#line 4652 "string.m"
}

#line 4641 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_3(
#line 4641 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4641 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4641 "string.m"
  MR_String mercury__string__String_8,
#line 4641 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4641 "string.m"
  MR_Integer mercury__string__I_10,
#line 4641 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4641 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4641 "string.m"
  MR_Cont mercury__string__cont,
#line 4641 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4641 "string.m"
{
#line 4641 "string.m"
  {
#line 4641 "string.m"
    struct mercury__string__foldr_between_2_6_p_3_env_0_s mercury__string__env;

#line 4641 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__TypeInfo_for_T_18 = mercury__string__TypeInfo_for_T_18;
#line 4641 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7 = mercury__string__Closure_7;
#line 4641 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__String_8 = mercury__string__String_8;
#line 4641 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9 = mercury__string__Start_9;
#line 4641 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4641 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont = mercury__string__cont;
#line 4641 "string.m"
    (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4654 "string.m"
    {
#line 4654 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_10 > (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9);
#line 4654 "string.m"
      MR_Char mercury__string__Char_13;

#line 4648 "string.m"
      if (mercury__string__succeeded)
#line 4648 "string.m"
        {
#line 2012 "string.m"
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
#line 2012 "string.m"

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

#line 8172 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2012 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4648 "string.m"
          if (mercury__string__succeeded)
#line 4650 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__J_12 >= (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Start_9);
#line 4648 "string.m"
        }
#line 4654 "string.m"
      if (mercury__string__succeeded)
#line 4652 "string.m"
        {
#line 4652 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7, (MR_Integer) 1)));

#line 4652 "string.m"
          {
#line 4652 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldr_between_2_6_p_3_1, &mercury__string__env);
          }
#line 4652 "string.m"
        }
#line 4654 "string.m"
      else
#line 4653 "string.m"
        {
#line 4653 "string.m"
          *((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4653 "string.m"
          {
#line 4653 "string.m"
            ((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont)((mercury__string__env).mercury__string__foldr_between_2_6_p_3_env_0__cont_env_ptr);
#line 4653 "string.m"
            return;
          }
#line 4653 "string.m"
        }
#line 4654 "string.m"
    }
#line 4641 "string.m"
  }
#line 4641 "string.m"
}

#line 4639 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_between_2_6_p_2(
#line 4639 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4639 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4639 "string.m"
  MR_String mercury__string__String_8,
#line 4639 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4639 "string.m"
  MR_Integer mercury__string__I_10,
#line 4639 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4639 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4639 "string.m"
{
#line 4654 "string.m"
  while (MR_TRUE)
#line 4654 "string.m"
    {
#line 4654 "string.m"
      /* tailcall optimized into a loop */
#line 4654 "string.m"
      {
#line 4654 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4654 "string.m"
        MR_Integer mercury__string__J_12;
#line 4654 "string.m"
        MR_Char mercury__string__Char_13;

#line 4648 "string.m"
        if (mercury__string__succeeded)
#line 4648 "string.m"
          {
#line 2012 "string.m"
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
#line 2012 "string.m"

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

#line 8291 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2012 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4648 "string.m"
            if (mercury__string__succeeded)
#line 4650 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4648 "string.m"
          }
#line 4654 "string.m"
        if (mercury__string__succeeded)
#line 4652 "string.m"
          {
#line 4652 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4652 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4652 "string.m"
            {
#line 4652 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4652 "string.m"
            if (mercury__string__succeeded)
#line 4653 "string.m"
              {
#line 4653 "string.m"
                /* direct tailcall eliminated */
#line 4653 "string.m"
                {
#line 4653 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4653 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4653 "string.m"
                  mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4653 "string.m"
                  mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4653 "string.m"
                }
#line 4653 "string.m"
                continue;
#line 4653 "string.m"
              }
#line 4652 "string.m"
          }
#line 4654 "string.m"
        else
#line 4653 "string.m"
          {
#line 4653 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4653 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4653 "string.m"
          }
#line 4654 "string.m"
        return mercury__string__succeeded;
#line 4654 "string.m"
      }
#line 4654 "string.m"
      break;
#line 4654 "string.m"
    }
#line 4639 "string.m"
}

#line 4637 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_1(
#line 4637 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4637 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4637 "string.m"
  MR_String mercury__string__String_8,
#line 4637 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4637 "string.m"
  MR_Integer mercury__string__I_10,
#line 4637 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4637 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4637 "string.m"
{
#line 4654 "string.m"
  while (MR_TRUE)
#line 4654 "string.m"
    {
#line 4654 "string.m"
      /* tailcall optimized into a loop */
#line 4654 "string.m"
      {
#line 4654 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4654 "string.m"
        MR_Integer mercury__string__J_12;
#line 4654 "string.m"
        MR_Char mercury__string__Char_13;

#line 4648 "string.m"
        if (mercury__string__succeeded)
#line 4648 "string.m"
          {
#line 2012 "string.m"
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
#line 2012 "string.m"

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

#line 8434 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2012 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4648 "string.m"
            if (mercury__string__succeeded)
#line 4650 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4648 "string.m"
          }
#line 4654 "string.m"
        if (mercury__string__succeeded)
#line 4652 "string.m"
          {
#line 4652 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4652 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4652 "string.m"
            {
#line 4652 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4653 "string.m"
            /* direct tailcall eliminated */
#line 4653 "string.m"
            {
#line 4653 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4653 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4653 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4653 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4653 "string.m"
            }
#line 4653 "string.m"
            continue;
#line 4652 "string.m"
          }
#line 4654 "string.m"
        else
#line 4653 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4654 "string.m"
      }
#line 4654 "string.m"
      break;
#line 4654 "string.m"
    }
#line 4637 "string.m"
}

#line 4635 "string.m"
void MR_CALL 
mercury__string__foldr_between_2_6_p_0(
#line 4635 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_18,
#line 4635 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4635 "string.m"
  MR_String mercury__string__String_8,
#line 4635 "string.m"
  MR_Integer mercury__string__Start_9,
#line 4635 "string.m"
  MR_Integer mercury__string__I_10,
#line 4635 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4635 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4635 "string.m"
{
#line 4654 "string.m"
  while (MR_TRUE)
#line 4654 "string.m"
    {
#line 4654 "string.m"
      /* tailcall optimized into a loop */
#line 4654 "string.m"
      {
#line 4654 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_10 > mercury__string__Start_9);
#line 4654 "string.m"
        MR_Integer mercury__string__J_12;
#line 4654 "string.m"
        MR_Char mercury__string__Char_13;

#line 4648 "string.m"
        if (mercury__string__succeeded)
#line 4648 "string.m"
          {
#line 2012 "string.m"
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
#line 2012 "string.m"

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

#line 8563 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = PrevIndex;
	 mercury__string__Char_13  = Ch;
#line 2012 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4648 "string.m"
            if (mercury__string__succeeded)
#line 4650 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 >= mercury__string__Start_9);
#line 4648 "string.m"
          }
#line 4654 "string.m"
        if (mercury__string__succeeded)
#line 4652 "string.m"
          {
#line 4652 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4652 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4652 "string.m"
            {
#line 4652 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4653 "string.m"
            /* direct tailcall eliminated */
#line 4653 "string.m"
            {
#line 4653 "string.m"
              MR_Integer mercury__string__I__tmp_copy_10 = mercury__string__J_12;
#line 4653 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4653 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4653 "string.m"
              mercury__string__I_10 = mercury__string__I__tmp_copy_10;
#line 4653 "string.m"
            }
#line 4653 "string.m"
            continue;
#line 4652 "string.m"
          }
#line 4654 "string.m"
        else
#line 4653 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4654 "string.m"
      }
#line 4654 "string.m"
      break;
#line 4654 "string.m"
    }
#line 4635 "string.m"
}

#line 4597 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_5_1(
#line 4597 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4597 "string.m"
{
#line 4597 "string.m"
  {
#line 4597 "string.m"
    struct mercury__string__foldl2_between_2_8_p_5_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl2_between_2_8_p_5_env_0_s *) mercury__string__env_ptr_arg;

#line 4598 "string.m"
    {
#line 4598 "string.m"
      mercury__string__foldl2_between_2_8_p_5((mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__String_10, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__J_15, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__End_12, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr);
#line 4598 "string.m"
      return;
    }
#line 4597 "string.m"
  }
#line 4597 "string.m"
}

#line 4588 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_5(
#line 4588 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4588 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4588 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4588 "string.m"
  MR_String mercury__string__String_10,
#line 4588 "string.m"
  MR_Integer mercury__string__I_11,
#line 4588 "string.m"
  MR_Integer mercury__string__End_12,
#line 4588 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4588 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4588 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4588 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 4588 "string.m"
  MR_Cont mercury__string__cont,
#line 4588 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4588 "string.m"
{
#line 4588 "string.m"
  {
#line 4588 "string.m"
    struct mercury__string__foldl2_between_2_8_p_5_env_0_s mercury__string__env;

#line 4588 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_A_25 = mercury__string__TypeInfo_for_A_25;
#line 4588 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__TypeInfo_for_B_26 = mercury__string__TypeInfo_for_B_26;
#line 4588 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9 = mercury__string__Closure_9;
#line 4588 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__String_10 = mercury__string__String_10;
#line 4588 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12 = mercury__string__End_12;
#line 4588 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_18;
#line 4588 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_20;
#line 4588 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont = mercury__string__cont;
#line 4588 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4599 "string.m"
    {
#line 4599 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_11 < (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12);
#line 4599 "string.m"
      MR_Char mercury__string__Char_16;

#line 4593 "string.m"
      if (mercury__string__succeeded)
#line 4593 "string.m"
        {
#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 8738 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4593 "string.m"
          if (mercury__string__succeeded)
#line 4595 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__J_15 <= (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__End_12);
#line 4593 "string.m"
        }
#line 4599 "string.m"
      if (mercury__string__succeeded)
#line 4597 "string.m"
        {
#line 4597 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9, (MR_Integer) 1)));

#line 4597 "string.m"
          {
#line 4597 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_22_22, mercury__string__foldl2_between_2_8_p_5_1, &mercury__string__env);
          }
#line 4597 "string.m"
        }
#line 4599 "string.m"
      else
#line 4600 "string.m"
        {
#line 4600 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc2_20) = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4600 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__STATE_VARIABLE_Acc1_18) = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4600 "string.m"
          {
#line 4600 "string.m"
            ((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont)((mercury__string__env).mercury__string__foldl2_between_2_8_p_5_env_0__cont_env_ptr);
#line 4600 "string.m"
            return;
          }
#line 4600 "string.m"
        }
#line 4599 "string.m"
    }
#line 4588 "string.m"
  }
#line 4588 "string.m"
}

#line 4597 "string.m"
static void MR_CALL 
mercury__string__foldl2_between_2_8_p_4_1(
#line 4597 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4597 "string.m"
{
#line 4597 "string.m"
  {
#line 4597 "string.m"
    struct mercury__string__foldl2_between_2_8_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl2_between_2_8_p_4_env_0_s *) mercury__string__env_ptr_arg;

#line 4598 "string.m"
    {
#line 4598 "string.m"
      mercury__string__foldl2_between_2_8_p_4((mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__String_10, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__J_15, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__End_12, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr);
#line 4598 "string.m"
      return;
    }
#line 4597 "string.m"
  }
#line 4597 "string.m"
}

#line 4586 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_4(
#line 4586 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4586 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4586 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4586 "string.m"
  MR_String mercury__string__String_10,
#line 4586 "string.m"
  MR_Integer mercury__string__I_11,
#line 4586 "string.m"
  MR_Integer mercury__string__End_12,
#line 4586 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4586 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4586 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4586 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 4586 "string.m"
  MR_Cont mercury__string__cont,
#line 4586 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4586 "string.m"
{
#line 4586 "string.m"
  {
#line 4586 "string.m"
    struct mercury__string__foldl2_between_2_8_p_4_env_0_s mercury__string__env;

#line 4586 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_A_25 = mercury__string__TypeInfo_for_A_25;
#line 4586 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__TypeInfo_for_B_26 = mercury__string__TypeInfo_for_B_26;
#line 4586 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9 = mercury__string__Closure_9;
#line 4586 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__String_10 = mercury__string__String_10;
#line 4586 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12 = mercury__string__End_12;
#line 4586 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_18;
#line 4586 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_20;
#line 4586 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont = mercury__string__cont;
#line 4586 "string.m"
    (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4599 "string.m"
    {
#line 4599 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_11 < (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12);
#line 4599 "string.m"
      MR_Char mercury__string__Char_16;

#line 4593 "string.m"
      if (mercury__string__succeeded)
#line 4593 "string.m"
        {
#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 8905 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4593 "string.m"
          if (mercury__string__succeeded)
#line 4595 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__J_15 <= (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__End_12);
#line 4593 "string.m"
        }
#line 4599 "string.m"
      if (mercury__string__succeeded)
#line 4597 "string.m"
        {
#line 4597 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9, (MR_Integer) 1)));

#line 4597 "string.m"
          {
#line 4597 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &(mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_22_22, mercury__string__foldl2_between_2_8_p_4_1, &mercury__string__env);
          }
#line 4597 "string.m"
        }
#line 4599 "string.m"
      else
#line 4600 "string.m"
        {
#line 4600 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc2_20) = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4600 "string.m"
          *((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__STATE_VARIABLE_Acc1_18) = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4600 "string.m"
          {
#line 4600 "string.m"
            ((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont)((mercury__string__env).mercury__string__foldl2_between_2_8_p_4_env_0__cont_env_ptr);
#line 4600 "string.m"
            return;
          }
#line 4600 "string.m"
        }
#line 4599 "string.m"
    }
#line 4586 "string.m"
  }
#line 4586 "string.m"
}

#line 4584 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_between_2_8_p_3(
#line 4584 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4584 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4584 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4584 "string.m"
  MR_String mercury__string__String_10,
#line 4584 "string.m"
  MR_Integer mercury__string__I_11,
#line 4584 "string.m"
  MR_Integer mercury__string__End_12,
#line 4584 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4584 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4584 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4584 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4584 "string.m"
{
#line 4599 "string.m"
  while (MR_TRUE)
#line 4599 "string.m"
    {
#line 4599 "string.m"
      /* tailcall optimized into a loop */
#line 4599 "string.m"
      {
#line 4599 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4599 "string.m"
        MR_Integer mercury__string__J_15;
#line 4599 "string.m"
        MR_Char mercury__string__Char_16;

#line 4593 "string.m"
        if (mercury__string__succeeded)
#line 4593 "string.m"
          {
#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9029 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4593 "string.m"
            if (mercury__string__succeeded)
#line 4595 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4593 "string.m"
          }
#line 4599 "string.m"
        if (mercury__string__succeeded)
#line 4597 "string.m"
          {
#line 4597 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4597 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4597 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4597 "string.m"
            {
#line 4597 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4597 "string.m"
            if (mercury__string__succeeded)
#line 4598 "string.m"
              {
#line 4598 "string.m"
                /* direct tailcall eliminated */
#line 4598 "string.m"
                {
#line 4598 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4598 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4598 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4598 "string.m"
                  mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4598 "string.m"
                  mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4598 "string.m"
                  mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4598 "string.m"
                }
#line 4598 "string.m"
                continue;
#line 4598 "string.m"
              }
#line 4597 "string.m"
          }
#line 4599 "string.m"
        else
#line 4600 "string.m"
          {
#line 4600 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4600 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4600 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4600 "string.m"
          }
#line 4599 "string.m"
        return mercury__string__succeeded;
#line 4599 "string.m"
      }
#line 4599 "string.m"
      break;
#line 4599 "string.m"
    }
#line 4584 "string.m"
}

#line 4582 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_2(
#line 4582 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4582 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4582 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4582 "string.m"
  MR_String mercury__string__String_10,
#line 4582 "string.m"
  MR_Integer mercury__string__I_11,
#line 4582 "string.m"
  MR_Integer mercury__string__End_12,
#line 4582 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4582 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4582 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4582 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4582 "string.m"
{
#line 4599 "string.m"
  while (MR_TRUE)
#line 4599 "string.m"
    {
#line 4599 "string.m"
      /* tailcall optimized into a loop */
#line 4599 "string.m"
      {
#line 4599 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4599 "string.m"
        MR_Integer mercury__string__J_15;
#line 4599 "string.m"
        MR_Char mercury__string__Char_16;

#line 4593 "string.m"
        if (mercury__string__succeeded)
#line 4593 "string.m"
          {
#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9183 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4593 "string.m"
            if (mercury__string__succeeded)
#line 4595 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4593 "string.m"
          }
#line 4599 "string.m"
        if (mercury__string__succeeded)
#line 4597 "string.m"
          {
#line 4597 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4597 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4597 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4597 "string.m"
            {
#line 4597 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4598 "string.m"
            /* direct tailcall eliminated */
#line 4598 "string.m"
            {
#line 4598 "string.m"
              MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4598 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4598 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4598 "string.m"
              mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4598 "string.m"
              mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4598 "string.m"
              mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4598 "string.m"
            }
#line 4598 "string.m"
            continue;
#line 4597 "string.m"
          }
#line 4599 "string.m"
        else
#line 4600 "string.m"
          {
#line 4600 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4600 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4600 "string.m"
          }
#line 4599 "string.m"
      }
#line 4599 "string.m"
      break;
#line 4599 "string.m"
    }
#line 4582 "string.m"
}

#line 4580 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_1(
#line 4580 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4580 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4580 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4580 "string.m"
  MR_String mercury__string__String_10,
#line 4580 "string.m"
  MR_Integer mercury__string__I_11,
#line 4580 "string.m"
  MR_Integer mercury__string__End_12,
#line 4580 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4580 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4580 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4580 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4580 "string.m"
{
#line 4599 "string.m"
  while (MR_TRUE)
#line 4599 "string.m"
    {
#line 4599 "string.m"
      /* tailcall optimized into a loop */
#line 4599 "string.m"
      {
#line 4599 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4599 "string.m"
        MR_Integer mercury__string__J_15;
#line 4599 "string.m"
        MR_Char mercury__string__Char_16;

#line 4593 "string.m"
        if (mercury__string__succeeded)
#line 4593 "string.m"
          {
#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9327 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4593 "string.m"
            if (mercury__string__succeeded)
#line 4595 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4593 "string.m"
          }
#line 4599 "string.m"
        if (mercury__string__succeeded)
#line 4597 "string.m"
          {
#line 4597 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4597 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4597 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4597 "string.m"
            {
#line 4597 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4598 "string.m"
            /* direct tailcall eliminated */
#line 4598 "string.m"
            {
#line 4598 "string.m"
              MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4598 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4598 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4598 "string.m"
              mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4598 "string.m"
              mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4598 "string.m"
              mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4598 "string.m"
            }
#line 4598 "string.m"
            continue;
#line 4597 "string.m"
          }
#line 4599 "string.m"
        else
#line 4600 "string.m"
          {
#line 4600 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4600 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4600 "string.m"
          }
#line 4599 "string.m"
      }
#line 4599 "string.m"
      break;
#line 4599 "string.m"
    }
#line 4580 "string.m"
}

#line 4578 "string.m"
void MR_CALL 
mercury__string__foldl2_between_2_8_p_0(
#line 4578 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 4578 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 4578 "string.m"
  MR_Word mercury__string__Closure_9,
#line 4578 "string.m"
  MR_String mercury__string__String_10,
#line 4578 "string.m"
  MR_Integer mercury__string__I_11,
#line 4578 "string.m"
  MR_Integer mercury__string__End_12,
#line 4578 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 4578 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 4578 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 4578 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 4578 "string.m"
{
#line 4599 "string.m"
  while (MR_TRUE)
#line 4599 "string.m"
    {
#line 4599 "string.m"
      /* tailcall optimized into a loop */
#line 4599 "string.m"
      {
#line 4599 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_11 < mercury__string__End_12);
#line 4599 "string.m"
        MR_Integer mercury__string__J_15;
#line 4599 "string.m"
        MR_Char mercury__string__Char_16;

#line 4593 "string.m"
        if (mercury__string__succeeded)
#line 4593 "string.m"
          {
#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9471 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_15  = NextIndex;
	 mercury__string__Char_16  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4593 "string.m"
            if (mercury__string__succeeded)
#line 4595 "string.m"
              mercury__string__succeeded = (mercury__string__J_15 <= mercury__string__End_12);
#line 4593 "string.m"
          }
#line 4599 "string.m"
        if (mercury__string__succeeded)
#line 4597 "string.m"
          {
#line 4597 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4597 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc2_22_22;
#line 4597 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_9, (MR_Integer) 1)));

#line 4597 "string.m"
            {
#line 4597 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_9), ((MR_Box) (MR_Word) (mercury__string__Char_16)), mercury__string__STATE_VARIABLE_Acc1_0_17, &mercury__string__STATE_VARIABLE_Acc1_21_21, mercury__string__STATE_VARIABLE_Acc2_0_19, &mercury__string__STATE_VARIABLE_Acc2_22_22);
            }
#line 4598 "string.m"
            /* direct tailcall eliminated */
#line 4598 "string.m"
            {
#line 4598 "string.m"
              MR_Integer mercury__string__I__tmp_copy_11 = mercury__string__J_15;
#line 4598 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17 = mercury__string__STATE_VARIABLE_Acc1_21_21;
#line 4598 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19 = mercury__string__STATE_VARIABLE_Acc2_22_22;

#line 4598 "string.m"
              mercury__string__STATE_VARIABLE_Acc2_0_19 = mercury__string__STATE_VARIABLE_Acc2_0__tmp_copy_19;
#line 4598 "string.m"
              mercury__string__STATE_VARIABLE_Acc1_0_17 = mercury__string__STATE_VARIABLE_Acc1_0__tmp_copy_17;
#line 4598 "string.m"
              mercury__string__I_11 = mercury__string__I__tmp_copy_11;
#line 4598 "string.m"
            }
#line 4598 "string.m"
            continue;
#line 4597 "string.m"
          }
#line 4599 "string.m"
        else
#line 4600 "string.m"
          {
#line 4600 "string.m"
            *mercury__string__STATE_VARIABLE_Acc2_20 = mercury__string__STATE_VARIABLE_Acc2_0_19;
#line 4600 "string.m"
            *mercury__string__STATE_VARIABLE_Acc1_18 = mercury__string__STATE_VARIABLE_Acc1_0_17;
#line 4600 "string.m"
          }
#line 4599 "string.m"
      }
#line 4599 "string.m"
      break;
#line 4599 "string.m"
    }
#line 4578 "string.m"
}

#line 4570 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_4_1(
#line 4570 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4570 "string.m"
{
#line 4570 "string.m"
  {
#line 4570 "string.m"
    struct mercury__string__foldl_between_2_6_p_4_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl_between_2_6_p_4_env_0_s *) mercury__string__env_ptr_arg;

#line 4571 "string.m"
    {
#line 4571 "string.m"
      mercury__string__foldl_between_2_6_p_4((mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__End_10, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr);
#line 4571 "string.m"
      return;
    }
#line 4570 "string.m"
  }
#line 4570 "string.m"
}

#line 4561 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_4(
#line 4561 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4561 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4561 "string.m"
  MR_String mercury__string__String_8,
#line 4561 "string.m"
  MR_Integer mercury__string__I_9,
#line 4561 "string.m"
  MR_Integer mercury__string__End_10,
#line 4561 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4561 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4561 "string.m"
  MR_Cont mercury__string__cont,
#line 4561 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4561 "string.m"
{
#line 4561 "string.m"
  {
#line 4561 "string.m"
    struct mercury__string__foldl_between_2_6_p_4_env_0_s mercury__string__env;

#line 4561 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__TypeInfo_for_A_18 = mercury__string__TypeInfo_for_A_18;
#line 4561 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7 = mercury__string__Closure_7;
#line 4561 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__String_8 = mercury__string__String_8;
#line 4561 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10 = mercury__string__End_10;
#line 4561 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4561 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont = mercury__string__cont;
#line 4561 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4572 "string.m"
    {
#line 4572 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10);
#line 4572 "string.m"
      MR_Char mercury__string__Char_13;

#line 4566 "string.m"
      if (mercury__string__succeeded)
#line 4566 "string.m"
        {
#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9648 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4566 "string.m"
          if (mercury__string__succeeded)
#line 4568 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__J_12 <= (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__End_10);
#line 4566 "string.m"
        }
#line 4572 "string.m"
      if (mercury__string__succeeded)
#line 4570 "string.m"
        {
#line 4570 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7, (MR_Integer) 1)));

#line 4570 "string.m"
          {
#line 4570 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldl_between_2_6_p_4_1, &mercury__string__env);
          }
#line 4570 "string.m"
        }
#line 4572 "string.m"
      else
#line 4571 "string.m"
        {
#line 4571 "string.m"
          *((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4571 "string.m"
          {
#line 4571 "string.m"
            ((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont)((mercury__string__env).mercury__string__foldl_between_2_6_p_4_env_0__cont_env_ptr);
#line 4571 "string.m"
            return;
          }
#line 4571 "string.m"
        }
#line 4572 "string.m"
    }
#line 4561 "string.m"
  }
#line 4561 "string.m"
}

#line 4570 "string.m"
static void MR_CALL 
mercury__string__foldl_between_2_6_p_3_1(
#line 4570 "string.m"
  void * mercury__string__env_ptr_arg)
#line 4570 "string.m"
{
#line 4570 "string.m"
  {
#line 4570 "string.m"
    struct mercury__string__foldl_between_2_6_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__foldl_between_2_6_p_3_env_0_s *) mercury__string__env_ptr_arg;

#line 4571 "string.m"
    {
#line 4571 "string.m"
      mercury__string__foldl_between_2_6_p_3((mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__Closure_7, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__String_8, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__J_12, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__End_10, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__cont, (mercury__string__env_ptr)->mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr);
#line 4571 "string.m"
      return;
    }
#line 4570 "string.m"
  }
#line 4570 "string.m"
}

#line 4559 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_3(
#line 4559 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4559 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4559 "string.m"
  MR_String mercury__string__String_8,
#line 4559 "string.m"
  MR_Integer mercury__string__I_9,
#line 4559 "string.m"
  MR_Integer mercury__string__End_10,
#line 4559 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4559 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 4559 "string.m"
  MR_Cont mercury__string__cont,
#line 4559 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4559 "string.m"
{
#line 4559 "string.m"
  {
#line 4559 "string.m"
    struct mercury__string__foldl_between_2_6_p_3_env_0_s mercury__string__env;

#line 4559 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__TypeInfo_for_A_18 = mercury__string__TypeInfo_for_A_18;
#line 4559 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7 = mercury__string__Closure_7;
#line 4559 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__String_8 = mercury__string__String_8;
#line 4559 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10 = mercury__string__End_10;
#line 4559 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_15;
#line 4559 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont = mercury__string__cont;
#line 4559 "string.m"
    (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 4572 "string.m"
    {
#line 4572 "string.m"
      MR_bool mercury__string__succeeded = (mercury__string__I_9 < (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10);
#line 4572 "string.m"
      MR_Char mercury__string__Char_13;

#line 4566 "string.m"
      if (mercury__string__succeeded)
#line 4566 "string.m"
        {
#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9803 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4566 "string.m"
          if (mercury__string__succeeded)
#line 4568 "string.m"
            mercury__string__succeeded = ((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__J_12 <= (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__End_10);
#line 4566 "string.m"
        }
#line 4572 "string.m"
      if (mercury__string__succeeded)
#line 4570 "string.m"
        {
#line 4570 "string.m"
          void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7, (MR_Integer) 1)));

#line 4570 "string.m"
          {
#line 4570 "string.m"
            mercury__string__func_0(((MR_Box) (mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &(mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_16_16, mercury__string__foldl_between_2_6_p_3_1, &mercury__string__env);
          }
#line 4570 "string.m"
        }
#line 4572 "string.m"
      else
#line 4571 "string.m"
        {
#line 4571 "string.m"
          *((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__STATE_VARIABLE_Acc_15) = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4571 "string.m"
          {
#line 4571 "string.m"
            ((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont)((mercury__string__env).mercury__string__foldl_between_2_6_p_3_env_0__cont_env_ptr);
#line 4571 "string.m"
            return;
          }
#line 4571 "string.m"
        }
#line 4572 "string.m"
    }
#line 4559 "string.m"
  }
#line 4559 "string.m"
}

#line 4557 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_between_2_6_p_2(
#line 4557 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4557 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4557 "string.m"
  MR_String mercury__string__String_8,
#line 4557 "string.m"
  MR_Integer mercury__string__I_9,
#line 4557 "string.m"
  MR_Integer mercury__string__End_10,
#line 4557 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4557 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4557 "string.m"
{
#line 4572 "string.m"
  while (MR_TRUE)
#line 4572 "string.m"
    {
#line 4572 "string.m"
      /* tailcall optimized into a loop */
#line 4572 "string.m"
      {
#line 4572 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4572 "string.m"
        MR_Integer mercury__string__J_12;
#line 4572 "string.m"
        MR_Char mercury__string__Char_13;

#line 4566 "string.m"
        if (mercury__string__succeeded)
#line 4566 "string.m"
          {
#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 9919 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4566 "string.m"
            if (mercury__string__succeeded)
#line 4568 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4566 "string.m"
          }
#line 4572 "string.m"
        if (mercury__string__succeeded)
#line 4570 "string.m"
          {
#line 4570 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4570 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4570 "string.m"
            {
#line 4570 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4570 "string.m"
            if (mercury__string__succeeded)
#line 4571 "string.m"
              {
#line 4571 "string.m"
                /* direct tailcall eliminated */
#line 4571 "string.m"
                {
#line 4571 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4571 "string.m"
                  MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4571 "string.m"
                  mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4571 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4571 "string.m"
                }
#line 4571 "string.m"
                continue;
#line 4571 "string.m"
              }
#line 4570 "string.m"
          }
#line 4572 "string.m"
        else
#line 4571 "string.m"
          {
#line 4571 "string.m"
            *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4571 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4571 "string.m"
          }
#line 4572 "string.m"
        return mercury__string__succeeded;
#line 4572 "string.m"
      }
#line 4572 "string.m"
      break;
#line 4572 "string.m"
    }
#line 4557 "string.m"
}

#line 4555 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_1(
#line 4555 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4555 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4555 "string.m"
  MR_String mercury__string__String_8,
#line 4555 "string.m"
  MR_Integer mercury__string__I_9,
#line 4555 "string.m"
  MR_Integer mercury__string__End_10,
#line 4555 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4555 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4555 "string.m"
{
#line 4572 "string.m"
  while (MR_TRUE)
#line 4572 "string.m"
    {
#line 4572 "string.m"
      /* tailcall optimized into a loop */
#line 4572 "string.m"
      {
#line 4572 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4572 "string.m"
        MR_Integer mercury__string__J_12;
#line 4572 "string.m"
        MR_Char mercury__string__Char_13;

#line 4566 "string.m"
        if (mercury__string__succeeded)
#line 4566 "string.m"
          {
#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 10059 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4566 "string.m"
            if (mercury__string__succeeded)
#line 4568 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4566 "string.m"
          }
#line 4572 "string.m"
        if (mercury__string__succeeded)
#line 4570 "string.m"
          {
#line 4570 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4570 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4570 "string.m"
            {
#line 4570 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4571 "string.m"
            /* direct tailcall eliminated */
#line 4571 "string.m"
            {
#line 4571 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4571 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4571 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4571 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4571 "string.m"
            }
#line 4571 "string.m"
            continue;
#line 4570 "string.m"
          }
#line 4572 "string.m"
        else
#line 4571 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4572 "string.m"
      }
#line 4572 "string.m"
      break;
#line 4572 "string.m"
    }
#line 4555 "string.m"
}

#line 4553 "string.m"
void MR_CALL 
mercury__string__foldl_between_2_6_p_0(
#line 4553 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_18,
#line 4553 "string.m"
  MR_Word mercury__string__Closure_7,
#line 4553 "string.m"
  MR_String mercury__string__String_8,
#line 4553 "string.m"
  MR_Integer mercury__string__I_9,
#line 4553 "string.m"
  MR_Integer mercury__string__End_10,
#line 4553 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 4553 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 4553 "string.m"
{
#line 4572 "string.m"
  while (MR_TRUE)
#line 4572 "string.m"
    {
#line 4572 "string.m"
      /* tailcall optimized into a loop */
#line 4572 "string.m"
      {
#line 4572 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__End_10);
#line 4572 "string.m"
        MR_Integer mercury__string__J_12;
#line 4572 "string.m"
        MR_Char mercury__string__Char_13;

#line 4566 "string.m"
        if (mercury__string__succeeded)
#line 4566 "string.m"
          {
#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 10185 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_12  = NextIndex;
	 mercury__string__Char_13  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4566 "string.m"
            if (mercury__string__succeeded)
#line 4568 "string.m"
              mercury__string__succeeded = (mercury__string__J_12 <= mercury__string__End_10);
#line 4566 "string.m"
          }
#line 4572 "string.m"
        if (mercury__string__succeeded)
#line 4570 "string.m"
          {
#line 4570 "string.m"
            MR_Box mercury__string__STATE_VARIABLE_Acc_16_16;
#line 4570 "string.m"
            void MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__string__Closure_7, (MR_Integer) 1)));

#line 4570 "string.m"
            {
#line 4570 "string.m"
              mercury__string__func_0(((MR_Box) mercury__string__Closure_7), ((MR_Box) (MR_Word) (mercury__string__Char_13)), mercury__string__STATE_VARIABLE_Acc_0_14, &mercury__string__STATE_VARIABLE_Acc_16_16);
            }
#line 4571 "string.m"
            /* direct tailcall eliminated */
#line 4571 "string.m"
            {
#line 4571 "string.m"
              MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_12;
#line 4571 "string.m"
              MR_Box mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14 = mercury__string__STATE_VARIABLE_Acc_16_16;

#line 4571 "string.m"
              mercury__string__STATE_VARIABLE_Acc_0_14 = mercury__string__STATE_VARIABLE_Acc_0__tmp_copy_14;
#line 4571 "string.m"
              mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4571 "string.m"
            }
#line 4571 "string.m"
            continue;
#line 4570 "string.m"
          }
#line 4572 "string.m"
        else
#line 4571 "string.m"
          *mercury__string__STATE_VARIABLE_Acc_15 = mercury__string__STATE_VARIABLE_Acc_0_14;
#line 4572 "string.m"
      }
#line 4572 "string.m"
      break;
#line 4572 "string.m"
    }
#line 4553 "string.m"
}

#line 4511 "string.m"
MR_Word MR_CALL 
mercury__string__break_up_string_reverse_3_f_0(
#line 4511 "string.m"
  MR_String mercury__string__Str_5,
#line 4511 "string.m"
  MR_Integer mercury__string__N_6,
#line 4511 "string.m"
  MR_Word mercury__string__Prev_7)
#line 4511 "string.m"
{
#line 4516 "string.m"
  while (MR_TRUE)
#line 4516 "string.m"
    {
#line 4516 "string.m"
      /* tailcall optimized into a loop */
#line 4516 "string.m"
      {
#line 4516 "string.m"
        MR_bool mercury__string__succeeded;
#line 4516 "string.m"
        MR_Word mercury__string__Strs_8;
#line 4514 "string.m"
        MR_Integer mercury__string__V_11_11;

#line 2439 "string.m"
        {
#line 2439 "string.m"
          mercury__string__count_codepoints_2_p_0(mercury__string__Str_5, &mercury__string__V_11_11);
        }
#line 4514 "string.m"
        mercury__string__succeeded = (mercury__string__V_11_11 <= mercury__string__N_6);
#line 4516 "string.m"
        if (mercury__string__succeeded)
#line 4515 "string.m"
          {
#line 4515 "string.m"
            mercury__string__Strs_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4515 "string.m"
            MR_hl_field(MR_mktag(1), mercury__string__Strs_8, 0) = ((MR_Box) (mercury__string__Str_5));
#line 4515 "string.m"
            MR_hl_field(MR_mktag(1), mercury__string__Strs_8, 1) = ((MR_Box) (mercury__string__Prev_7));
#line 4515 "string.m"
          }
#line 4516 "string.m"
        else
#line 4517 "string.m"
          {
#line 4517 "string.m"
            MR_String mercury__string__Left_9;
#line 4517 "string.m"
            MR_String mercury__string__Right_10;
#line 4517 "string.m"
            MR_Word mercury__string__V_12_12;

#line 4517 "string.m"
            {
#line 4517 "string.m"
              mercury__string__split_by_codepoint_4_p_0(mercury__string__Str_5, mercury__string__N_6, &mercury__string__Left_9, &mercury__string__Right_10);
            }
#line 4518 "string.m"
            {
#line 4518 "string.m"
              mercury__string__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4518 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_12_12, 0) = ((MR_Box) (mercury__string__Left_9));
#line 4518 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_12_12, 1) = ((MR_Box) (mercury__string__Prev_7));
#line 4518 "string.m"
            }
#line 4518 "string.m"
            /* direct tailcall eliminated */
#line 4518 "string.m"
            {
#line 4518 "string.m"
              MR_String mercury__string__Str__tmp_copy_5 = mercury__string__Right_10;
#line 4518 "string.m"
              MR_Word mercury__string__Prev__tmp_copy_7 = mercury__string__V_12_12;

#line 4518 "string.m"
              mercury__string__Prev_7 = mercury__string__Prev__tmp_copy_7;
#line 4518 "string.m"
              mercury__string__Str_5 = mercury__string__Str__tmp_copy_5;
#line 4518 "string.m"
            }
#line 4518 "string.m"
            continue;
#line 4517 "string.m"
          }
#line 4516 "string.m"
        return mercury__string__Strs_8;
#line 4516 "string.m"
      }
#line 4516 "string.m"
      break;
#line 4516 "string.m"
    }
#line 4511 "string.m"
}

#line 4434 "string.m"
void MR_CALL 
mercury__string__word_wrap_loop_7_p_0(
#line 4434 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4434 "string.m"
  MR_String mercury__string__WordSep_2,
#line 4434 "string.m"
  MR_Integer mercury__string__SepLen_3,
#line 4434 "string.m"
  MR_Integer mercury__string__CurCol_4,
#line 4434 "string.m"
  MR_Integer mercury__string__MaxCol_5,
#line 4434 "string.m"
  MR_Word mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6,
#line 4434 "string.m"
  MR_Word * mercury__string__STATE_VARIABLE_RevWordsSpacesNls_7)
#line 4434 "string.m"
{
#line 4437 "string.m"
  while (MR_TRUE)
#line 4437 "string.m"
    {
#line 4437 "string.m"
      /* tailcall optimized into a loop */
#line 4437 "string.m"
      {
#line 4437 "string.m"
        MR_bool mercury__string__succeeded;

#line 4437 "string.m"
        if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4437 "string.m"
          *mercury__string__STATE_VARIABLE_RevWordsSpacesNls_7 = mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6;
#line 4437 "string.m"
        else
#line 4439 "string.m"
          {
#line 4439 "string.m"
            MR_String mercury__string__Word_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4439 "string.m"
            MR_Word mercury__string__Words_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4439 "string.m"
            MR_Integer mercury__string__WordLen_22;
#line 4439 "string.m"
            MR_Word mercury__string__NewWords_23;
#line 4439 "string.m"
            MR_Integer mercury__string__NewCol_24;
#line 4439 "string.m"
            MR_Word mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36;

#line 2439 "string.m"
            {
#line 2439 "string.m"
              mercury__string__count_codepoints_2_p_0(mercury__string__Word_15, &mercury__string__WordLen_22);
            }
#line 4444 "string.m"
            mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
#line 4444 "string.m"
            if (mercury__string__succeeded)
#line 4445 "string.m"
              mercury__string__succeeded = (mercury__string__WordLen_22 < mercury__string__MaxCol_5);
#line 4450 "string.m"
            if (mercury__string__succeeded)
#line 4447 "string.m"
              {
#line 4447 "string.m"
                mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4448 "string.m"
                mercury__string__NewCol_24 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);
#line 4449 "string.m"
                {
#line 4449 "string.m"
                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4449 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4449 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4449 "string.m"
                }
#line 4447 "string.m"
              }
#line 4450 "string.m"
            else
#line 4465 "string.m"
              {
#line 4452 "string.m"
                mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
#line 4452 "string.m"
                if (mercury__string__succeeded)
#line 4453 "string.m"
                  mercury__string__succeeded = (mercury__string__WordLen_22 == mercury__string__MaxCol_5);
#line 4465 "string.m"
                if (mercury__string__succeeded)
#line 4455 "string.m"
                  {
#line 4455 "string.m"
                    mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4456 "string.m"
                    mercury__string__NewCol_24 = (MR_Integer) 1;
#line 4461 "string.m"
                    if ((mercury__string__NewWords_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4460 "string.m"
                      {
#line 4460 "string.m"
                        mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4460 "string.m"
                        MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4460 "string.m"
                        MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4460 "string.m"
                      }
#line 4461 "string.m"
                    else
#line 4462 "string.m"
                      {
#line 4462 "string.m"
                        MR_Word mercury__string__V_39_39;

#line 4463 "string.m"
                        {
#line 4463 "string.m"
                          mercury__string__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4463 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_39_39, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4463 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_39_39, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4463 "string.m"
                        }
#line 4463 "string.m"
                        {
#line 4463 "string.m"
                          mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4463 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
#line 4463 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_39_39));
#line 4463 "string.m"
                        }
#line 4462 "string.m"
                      }
#line 4455 "string.m"
                  }
#line 4465 "string.m"
                else
#line 4473 "string.m"
                  {
#line 4468 "string.m"
                    MR_Integer mercury__string__V_41_41 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);

#line 4468 "string.m"
                    mercury__string__succeeded = (mercury__string__V_41_41 < mercury__string__MaxCol_5);
#line 4473 "string.m"
                    if (mercury__string__succeeded)
#line 4470 "string.m"
                      {
#line 4470 "string.m"
                        MR_Integer mercury__string__V_42_42;
#line 4470 "string.m"
                        MR_Word mercury__string__V_45_45;

#line 4470 "string.m"
                        mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4471 "string.m"
                        mercury__string__V_42_42 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);
#line 4471 "string.m"
                        mercury__string__NewCol_24 = (mercury__string__V_42_42 + (MR_Integer) 1);
#line 4472 "string.m"
                        {
#line 4472 "string.m"
                          mercury__string__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4472 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 0) = ((MR_Box) ((MR_String) " "));
#line 4472 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__V_45_45, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4472 "string.m"
                        }
#line 4472 "string.m"
                        {
#line 4472 "string.m"
                          mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4472 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4472 "string.m"
                          MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_45_45));
#line 4472 "string.m"
                        }
#line 4470 "string.m"
                      }
#line 4473 "string.m"
                    else
#line 4487 "string.m"
                      {
#line 4475 "string.m"
                        MR_Integer mercury__string__V_70_70 = (mercury__string__CurCol_4 + mercury__string__WordLen_22);

#line 4475 "string.m"
                        mercury__string__succeeded = (mercury__string__MaxCol_5 == mercury__string__V_70_70);
#line 4487 "string.m"
                        if (mercury__string__succeeded)
#line 4477 "string.m"
                          {
#line 4477 "string.m"
                            mercury__string__NewWords_23 = mercury__string__Words_16;
#line 4478 "string.m"
                            mercury__string__NewCol_24 = (MR_Integer) 1;
#line 4483 "string.m"
                            if ((mercury__string__NewWords_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4481 "string.m"
                              {
#line 4481 "string.m"
                                MR_Word mercury__string__V_53_53;

#line 4482 "string.m"
                                {
#line 4482 "string.m"
                                  mercury__string__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4482 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_53_53, 0) = ((MR_Box) ((MR_String) " "));
#line 4482 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_53_53, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4482 "string.m"
                                }
#line 4482 "string.m"
                                {
#line 4482 "string.m"
                                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4482 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4482 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_53_53));
#line 4482 "string.m"
                                }
#line 4481 "string.m"
                              }
#line 4483 "string.m"
                            else
#line 4484 "string.m"
                              {
#line 4484 "string.m"
                                MR_Word mercury__string__V_49_49;
#line 4484 "string.m"
                                MR_Word mercury__string__V_50_50;

#line 4485 "string.m"
                                {
#line 4485 "string.m"
                                  mercury__string__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4485 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_50_50, 0) = ((MR_Box) ((MR_String) " "));
#line 4485 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_50_50, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4485 "string.m"
                                }
#line 4485 "string.m"
                                {
#line 4485 "string.m"
                                  mercury__string__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4485 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_49_49, 0) = ((MR_Box) (mercury__string__Word_15));
#line 4485 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__V_49_49, 1) = ((MR_Box) (mercury__string__V_50_50));
#line 4485 "string.m"
                                }
#line 4485 "string.m"
                                {
#line 4485 "string.m"
                                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4485 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
#line 4485 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__V_49_49));
#line 4485 "string.m"
                                }
#line 4484 "string.m"
                              }
#line 4477 "string.m"
                          }
#line 4487 "string.m"
                        else
#line 4502 "string.m"
                          {
#line 4489 "string.m"
                            mercury__string__succeeded = (mercury__string__CurCol_4 == (MR_Integer) 1);
#line 4502 "string.m"
                            if (mercury__string__succeeded)
#line 4491 "string.m"
                              {
#line 4491 "string.m"
                                MR_Word mercury__string__TypeCtorInfo_69_69;
#line 4491 "string.m"
                                MR_Word mercury__string__RevPieces_29;
#line 4491 "string.m"
                                MR_String mercury__string__LastPiece_30;
#line 4491 "string.m"
                                MR_Word mercury__string__Rest_31;
#line 4491 "string.m"
                                MR_Word mercury__string__RestWithSep_32;
#line 4491 "string.m"
                                MR_Integer mercury__string__V_55_55 = (mercury__string__MaxCol_5 - mercury__string__SepLen_3);
#line 4491 "string.m"
                                MR_Word mercury__string__V_56_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 4491 "string.m"
                                {
#line 4491 "string.m"
                                  mercury__string__RevPieces_29 = mercury__string__break_up_string_reverse_3_f_0(mercury__string__Word_15, mercury__string__V_55_55, mercury__string__V_56_56);
                                }
#line 4494 "string.m"
                                if ((mercury__string__RevPieces_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4495 "string.m"
                                  {
#line 4496 "string.m"
                                    {
#line 4496 "string.m"
                                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140string.word_wrap_loop\'/7", (MR_String) "no pieces");
#line 4496 "string.m"
                                      return;
                                    }
#line 4495 "string.m"
                                  }
#line 4494 "string.m"
                                else
#line 4493 "string.m"
                                  {
#line 4493 "string.m"
                                    mercury__string__LastPiece_30 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__RevPieces_29, (MR_Integer) 0)));
#line 4493 "string.m"
                                    mercury__string__Rest_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__RevPieces_29, (MR_Integer) 1)));
#line 4493 "string.m"
                                  }
#line 4498 "string.m"
                                {
#line 4498 "string.m"
                                  mercury__string__NewWords_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4498 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__NewWords_23, 0) = ((MR_Box) (mercury__string__LastPiece_30));
#line 4498 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__NewWords_23, 1) = ((MR_Box) (mercury__string__Words_16));
#line 4498 "string.m"
                                }
#line 4499 "string.m"
                                mercury__string__NewCol_24 = (MR_Integer) 1;
#line 10692 "string.c"
                                mercury__string__TypeCtorInfo_69_69 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4500 "string.m"
                                {
#line 4500 "string.m"
                                  mercury__string__RestWithSep_32 = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_57_95_95_91_50_93_95_48_2_f_in__list_0(mercury__string__WordSep_2, mercury__string__Rest_31);
                                }
#line 46 "list.opt"
                                {
#line 46 "list.opt"
                                  mercury__list__append_3_p_1(mercury__string__TypeCtorInfo_69_69, mercury__string__RestWithSep_32, mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6, &mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36);
                                }
#line 4491 "string.m"
                              }
#line 4502 "string.m"
                            else
#line 4503 "string.m"
                              {
#line 4503 "string.m"
                                mercury__string__NewWords_23 = mercury__string__HeadVar__1_1;
#line 4504 "string.m"
                                mercury__string__NewCol_24 = (MR_Integer) 1;
#line 4505 "string.m"
                                {
#line 4505 "string.m"
                                  mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4505 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 0) = ((MR_Box) ((MR_String) "\n"));
#line 4505 "string.m"
                                  MR_hl_field(MR_mktag(1), mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36, 1) = ((MR_Box) (mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6));
#line 4505 "string.m"
                                }
#line 4503 "string.m"
                              }
#line 4502 "string.m"
                          }
#line 4487 "string.m"
                      }
#line 4473 "string.m"
                  }
#line 4465 "string.m"
              }
#line 4508 "string.m"
            /* direct tailcall eliminated */
#line 4508 "string.m"
            {
#line 4508 "string.m"
              MR_Word mercury__string__HeadVar__1__tmp_copy_1 = mercury__string__NewWords_23;
#line 4508 "string.m"
              MR_Integer mercury__string__CurCol__tmp_copy_4 = mercury__string__NewCol_24;
#line 4508 "string.m"
              MR_Word mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0__tmp_copy_6 = mercury__string__STATE_VARIABLE_RevWordsSpacesNls_36_36;

#line 4508 "string.m"
              mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0_6 = mercury__string__STATE_VARIABLE_RevWordsSpacesNls_0__tmp_copy_6;
#line 4508 "string.m"
              mercury__string__CurCol_4 = mercury__string__CurCol__tmp_copy_4;
#line 4508 "string.m"
              mercury__string__HeadVar__1_1 = mercury__string__HeadVar__1__tmp_copy_1;
#line 4508 "string.m"
            }
#line 4508 "string.m"
            continue;
#line 4439 "string.m"
          }
#line 4437 "string.m"
      }
#line 4437 "string.m"
      break;
#line 4437 "string.m"
    }
#line 4434 "string.m"
}

#line 4380 "string.m"
void MR_CALL 
mercury__string__replace_all_loop_7_p_0(
#line 4380 "string.m"
  MR_String mercury__string__Str_8,
#line 4380 "string.m"
  MR_String mercury__string__Pat_9,
#line 4380 "string.m"
  MR_String mercury__string__Subst_10,
#line 4380 "string.m"
  MR_Integer mercury__string__PatLength_11,
#line 4380 "string.m"
  MR_Integer mercury__string__BeginAt_12,
#line 4380 "string.m"
  MR_Word mercury__string__RevChunks0_13,
#line 4380 "string.m"
  MR_Word * mercury__string__RevChunks_14)
#line 4380 "string.m"
{
#line 4390 "string.m"
  while (MR_TRUE)
#line 4390 "string.m"
    {
#line 4390 "string.m"
      /* tailcall optimized into a loop */
#line 4390 "string.m"
      {
#line 4390 "string.m"
        MR_bool mercury__string__succeeded;
#line 4390 "string.m"
        MR_Integer mercury__string__Index_15;

#line 2920 "string.m"
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
#line 2920 "string.m"
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
#line 10827 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Index_15  = Index;
#line 2920 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4390 "string.m"
        if (mercury__string__succeeded)
#line 4386 "string.m"
          {
#line 4386 "string.m"
            MR_String mercury__string__Initial_16;
#line 4386 "string.m"
            MR_Integer mercury__string__Start_17;
#line 4386 "string.m"
            MR_Word mercury__string__V_19_19;
#line 4386 "string.m"
            MR_Word mercury__string__V_20_20;

#line 4018 "string.m"
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
#line 4018 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 10872 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Initial_16  = SubString;
#line 4018 "string.m"
}
#line 4387 "string.m"
            mercury__string__Start_17 = (mercury__string__Index_15 + mercury__string__PatLength_11);
#line 4389 "string.m"
            {
#line 4389 "string.m"
              mercury__string__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4389 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_20_20, 0) = ((MR_Box) (mercury__string__Initial_16));
#line 4389 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_20_20, 1) = ((MR_Box) (mercury__string__RevChunks0_13));
#line 4389 "string.m"
            }
#line 4389 "string.m"
            {
#line 4389 "string.m"
              mercury__string__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4389 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_19_19, 0) = ((MR_Box) (mercury__string__Subst_10));
#line 4389 "string.m"
              MR_hl_field(MR_mktag(1), mercury__string__V_19_19, 1) = ((MR_Box) (mercury__string__V_20_20));
#line 4389 "string.m"
            }
#line 4388 "string.m"
            /* direct tailcall eliminated */
#line 4388 "string.m"
            {
#line 4388 "string.m"
              MR_Integer mercury__string__BeginAt__tmp_copy_12 = mercury__string__Start_17;
#line 4388 "string.m"
              MR_Word mercury__string__RevChunks0__tmp_copy_13 = mercury__string__V_19_19;

#line 4388 "string.m"
              mercury__string__RevChunks0_13 = mercury__string__RevChunks0__tmp_copy_13;
#line 4388 "string.m"
              mercury__string__BeginAt_12 = mercury__string__BeginAt__tmp_copy_12;
#line 4388 "string.m"
            }
#line 4388 "string.m"
            continue;
#line 4386 "string.m"
          }
#line 4390 "string.m"
        else
#line 4391 "string.m"
          {
#line 4391 "string.m"
            MR_String mercury__string__EndString_18;
#line 4391 "string.m"
            MR_Integer mercury__string__V_21_21;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_loop_7_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_8 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 10942 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_21_21  = Length;
#line 2379 "string.m"
}
#line 4018 "string.m"
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
#line 4018 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 10971 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__EndString_18  = SubString;
#line 4018 "string.m"
}
#line 4392 "string.m"
            {
#line 4392 "string.m"
              MR_Word base;
#line 4392 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4392 "string.m"
              *mercury__string__RevChunks_14 = base;
#line 4392 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__EndString_18));
#line 4392 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__RevChunks0_13));
#line 4392 "string.m"
            }
#line 4391 "string.m"
          }
#line 4390 "string.m"
      }
#line 4390 "string.m"
      break;
#line 4390 "string.m"
    }
#line 4380 "string.m"
}

#line 4297 "string.m"
void MR_CALL 
mercury__string__char_list_to_lower_2_p_0(
#line 4297 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4297 "string.m"
  MR_Word * mercury__string__HeadVar__2_2)
#line 4297 "string.m"
{
#line 4299 "string.m"
  {
#line 4299 "string.m"
    MR_bool mercury__string__succeeded;

#line 4299 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4299 "string.m"
      *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4299 "string.m"
    else
#line 4300 "string.m"
      {
#line 4300 "string.m"
        MR_Char mercury__string__X_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4300 "string.m"
        MR_Word mercury__string__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4300 "string.m"
        MR_Char mercury__string__Y_5;
#line 4300 "string.m"
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
#line 4302 "string.m"
        {
#line 4302 "string.m"
          mercury__string__char_list_to_lower_2_p_0(mercury__string__Xs_4, &mercury__string__Ys_6);
        }
#line 4300 "string.m"
        {
#line 4300 "string.m"
          MR_Word base;
#line 4300 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4300 "string.m"
          *mercury__string__HeadVar__2_2 = base;
#line 4300 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__Y_5));
#line 4300 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Ys_6));
#line 4300 "string.m"
        }
#line 4300 "string.m"
      }
#line 4299 "string.m"
  }
#line 4297 "string.m"
}

#line 4282 "string.m"
void MR_CALL 
mercury__string__char_list_to_upper_2_p_0(
#line 4282 "string.m"
  MR_Word mercury__string__HeadVar__1_1,
#line 4282 "string.m"
  MR_Word * mercury__string__HeadVar__2_2)
#line 4282 "string.m"
{
#line 4284 "string.m"
  {
#line 4284 "string.m"
    MR_bool mercury__string__succeeded;

#line 4284 "string.m"
    if ((mercury__string__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4284 "string.m"
      *mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4284 "string.m"
    else
#line 4285 "string.m"
      {
#line 4285 "string.m"
        MR_Char mercury__string__X_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 0)));
#line 4285 "string.m"
        MR_Word mercury__string__Xs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__1_1, (MR_Integer) 1)));
#line 4285 "string.m"
        MR_Char mercury__string__Y_5;
#line 4285 "string.m"
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
#line 4287 "string.m"
        {
#line 4287 "string.m"
          mercury__string__char_list_to_upper_2_p_0(mercury__string__Xs_4, &mercury__string__Ys_6);
        }
#line 4285 "string.m"
        {
#line 4285 "string.m"
          MR_Word base;
#line 4285 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4285 "string.m"
          *mercury__string__HeadVar__2_2 = base;
#line 4285 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__string__Y_5));
#line 4285 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Ys_6));
#line 4285 "string.m"
        }
#line 4285 "string.m"
      }
#line 4284 "string.m"
  }
#line 4282 "string.m"
}

#line 4205 "string.m"
void MR_CALL 
mercury__string__suffix_2_ioii_4_p_0(
#line 4205 "string.m"
  MR_String mercury__string__String_5,
#line 4205 "string.m"
  MR_String * mercury__string__Suffix_6,
#line 4205 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4205 "string.m"
  MR_Integer mercury__string__Len_8,
#line 4205 "string.m"
  MR_Cont mercury__string__cont,
#line 4205 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4205 "string.m"
{
#line 4209 "string.m"
  while (MR_TRUE)
#line 4209 "string.m"
    {
#line 4209 "string.m"
      /* tailcall optimized into a loop */
#line 4209 "string.m"
      {
#line 4209 "string.m"
        MR_bool mercury__string__succeeded;

#line 4018 "string.m"
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
#line 4018 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11197 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Suffix_6  = SubString;
#line 4018 "string.m"
}
#line 4014 "string.m"
        {
#line 4014 "string.m"
          mercury__string__cont(mercury__string__cont_env_ptr);
        }
#line 4211 "string.m"
        {
#line 4211 "string.m"
          MR_Integer mercury__string__Prev_9;
#line 2008 "string.m"
          MR_Char mercury__string__V_10_10;

#line 2012 "string.m"
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
#line 2012 "string.m"

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

#line 11244 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Prev_9  = PrevIndex;
	 mercury__string__V_10_10  = Ch;
#line 2012 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4211 "string.m"
          if (mercury__string__succeeded)
#line 4212 "string.m"
            {
#line 4212 "string.m"
              /* direct tailcall eliminated */
#line 4212 "string.m"
              {
#line 4212 "string.m"
                MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Prev_9;

#line 4212 "string.m"
                mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4212 "string.m"
              }
#line 4212 "string.m"
              continue;
#line 4212 "string.m"
            }
#line 4211 "string.m"
        }
#line 4209 "string.m"
      }
#line 4209 "string.m"
      break;
#line 4209 "string.m"
    }
#line 4205 "string.m"
}

#line 4193 "string.m"
MR_bool MR_CALL 
mercury__string__suffix_2_iiii_5_p_0(
#line 4193 "string.m"
  MR_String mercury__string__String_6,
#line 4193 "string.m"
  MR_String mercury__string__Suffix_7,
#line 4193 "string.m"
  MR_Integer mercury__string__I_8,
#line 4193 "string.m"
  MR_Integer mercury__string__Offset_9,
#line 4193 "string.m"
  MR_Integer mercury__string__Len_10)
#line 4193 "string.m"
{
#line 4201 "string.m"
  while (MR_TRUE)
#line 4201 "string.m"
    {
#line 4201 "string.m"
      /* tailcall optimized into a loop */
#line 4201 "string.m"
      {
#line 4201 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_8 < mercury__string__Len_10);

#line 4201 "string.m"
        if (mercury__string__succeeded)
#line 4198 "string.m"
          {
#line 4198 "string.m"
            MR_Integer mercury__string__C_11;
#line 4198 "string.m"
            MR_Integer mercury__string__V_12_12 = (mercury__string__I_8 + mercury__string__Offset_9);
#line 4198 "string.m"
            MR_Integer mercury__string__V_13_13;
#line 4198 "string.m"
            MR_Integer mercury__string__V_14_14;
#line 4198 "string.m"
            MR_Integer mercury__string__V_15_15;

#line 2139 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_iiii_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__V_12_12 ;
		{
#line 2139 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 11342 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_11  = Code;
#line 2139 "string.m"
}
#line 2139 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_iiii_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Suffix_7 ;
	Index =  mercury__string__I_8 ;
		{
#line 2139 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 11365 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_15_15  = Code;
#line 2139 "string.m"
}
#line 4199 "string.m"
            mercury__string__succeeded = (mercury__string__C_11 == mercury__string__V_15_15);
#line 4198 "string.m"
            if (mercury__string__succeeded)
#line 4198 "string.m"
              {
#line 4200 "string.m"
                mercury__string__V_14_14 = (MR_Integer) 1;
#line 4200 "string.m"
                mercury__string__V_13_13 = (mercury__string__I_8 + mercury__string__V_14_14);
#line 4200 "string.m"
                /* direct tailcall eliminated */
#line 4200 "string.m"
                {
#line 4200 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_8 = mercury__string__V_13_13;

#line 4200 "string.m"
                  mercury__string__I_8 = mercury__string__I__tmp_copy_8;
#line 4200 "string.m"
                }
#line 4200 "string.m"
                continue;
#line 4198 "string.m"
              }
#line 4198 "string.m"
          }
#line 4201 "string.m"
        else
#line 4202 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 4201 "string.m"
        return mercury__string__succeeded;
#line 4201 "string.m"
      }
#line 4201 "string.m"
      break;
#line 4201 "string.m"
    }
#line 4193 "string.m"
}

#line 4172 "string.m"
void MR_CALL 
mercury__string__prefix_2_ioi_3_p_0(
#line 4172 "string.m"
  MR_String mercury__string__String_4,
#line 4172 "string.m"
  MR_String * mercury__string__Prefix_5,
#line 4172 "string.m"
  MR_Integer mercury__string__Cur_6,
#line 4172 "string.m"
  MR_Cont mercury__string__cont,
#line 4172 "string.m"
  void * mercury__string__cont_env_ptr)
#line 4172 "string.m"
{
#line 4176 "string.m"
  while (MR_TRUE)
#line 4176 "string.m"
    {
#line 4176 "string.m"
      /* tailcall optimized into a loop */
#line 4176 "string.m"
      {
#line 4176 "string.m"
        MR_bool mercury__string__succeeded;

#line 4018 "string.m"
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
#line 4018 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11462 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Prefix_5  = SubString;
#line 4018 "string.m"
}
#line 4176 "string.m"
        {
#line 4176 "string.m"
          mercury__string__cont(mercury__string__cont_env_ptr);
        }
#line 4178 "string.m"
        {
#line 4178 "string.m"
          MR_Integer mercury__string__Next_7;
#line 1919 "string.m"
          MR_Char mercury__string__V_8_8;

#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 11506 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__V_8_8  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4178 "string.m"
          if (mercury__string__succeeded)
#line 4179 "string.m"
            {
#line 4179 "string.m"
              /* direct tailcall eliminated */
#line 4179 "string.m"
              {
#line 4179 "string.m"
                MR_Integer mercury__string__Cur__tmp_copy_6 = mercury__string__Next_7;

#line 4179 "string.m"
                mercury__string__Cur_6 = mercury__string__Cur__tmp_copy_6;
#line 4179 "string.m"
              }
#line 4179 "string.m"
              continue;
#line 4179 "string.m"
            }
#line 4178 "string.m"
        }
#line 4176 "string.m"
      }
#line 4176 "string.m"
      break;
#line 4176 "string.m"
    }
#line 4172 "string.m"
}

#line 4161 "string.m"
MR_bool MR_CALL 
mercury__string__prefix_2_iii_3_p_0(
#line 4161 "string.m"
  MR_String mercury__string__String_4,
#line 4161 "string.m"
  MR_String mercury__string__Prefix_5,
#line 4161 "string.m"
  MR_Integer mercury__string__I_6)
#line 4161 "string.m"
{
#line 4168 "string.m"
  while (MR_TRUE)
#line 4168 "string.m"
    {
#line 4168 "string.m"
      /* tailcall optimized into a loop */
#line 4168 "string.m"
      {
#line 4168 "string.m"
        MR_bool mercury__string__succeeded = ((MR_Integer) 0 <= mercury__string__I_6);

#line 4168 "string.m"
        if (mercury__string__succeeded)
#line 4165 "string.m"
          {
#line 4165 "string.m"
            MR_Integer mercury__string__C_7;
#line 4165 "string.m"
            MR_Integer mercury__string__V_9_9;
#line 4165 "string.m"
            MR_Integer mercury__string__V_10_10;
#line 4165 "string.m"
            MR_Integer mercury__string__V_11_11;

#line 2139 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_iii_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__I_6 ;
		{
#line 2139 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 11598 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_7  = Code;
#line 2139 "string.m"
}
#line 2139 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_iii_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Prefix_5 ;
	Index =  mercury__string__I_6 ;
		{
#line 2139 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 11621 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Code;
#line 2139 "string.m"
}
#line 4166 "string.m"
            mercury__string__succeeded = (mercury__string__C_7 == mercury__string__V_11_11);
#line 4165 "string.m"
            if (mercury__string__succeeded)
#line 4165 "string.m"
              {
#line 4167 "string.m"
                mercury__string__V_10_10 = (MR_Integer) 1;
#line 4167 "string.m"
                mercury__string__V_9_9 = (mercury__string__I_6 - mercury__string__V_10_10);
#line 4167 "string.m"
                /* direct tailcall eliminated */
#line 4167 "string.m"
                {
#line 4167 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_6 = mercury__string__V_9_9;

#line 4167 "string.m"
                  mercury__string__I_6 = mercury__string__I__tmp_copy_6;
#line 4167 "string.m"
                }
#line 4167 "string.m"
                continue;
#line 4165 "string.m"
              }
#line 4165 "string.m"
          }
#line 4168 "string.m"
        else
#line 4169 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 4168 "string.m"
        return mercury__string__succeeded;
#line 4168 "string.m"
      }
#line 4168 "string.m"
      break;
#line 4168 "string.m"
    }
#line 4161 "string.m"
}

#line 4133 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_string_loop_4_f_0(
#line 4133 "string.m"
  MR_Integer mercury__string__StartAt_6,
#line 4133 "string.m"
  MR_Integer mercury__string__NeedleLen_7,
#line 4133 "string.m"
  MR_String mercury__string__Needle_8,
#line 4133 "string.m"
  MR_String mercury__string__Total_9)
#line 4133 "string.m"
{
#line 4141 "string.m"
  {
#line 4141 "string.m"
    MR_bool mercury__string__succeeded;
#line 4141 "string.m"
    MR_Word mercury__string__Out_10;
#line 4141 "string.m"
    MR_Integer mercury__string__NeedlePos_11;

#line 2920 "string.m"
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
#line 2920 "string.m"
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
#line 11721 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__NeedlePos_11  = Index;
#line 2920 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4141 "string.m"
    if (mercury__string__succeeded)
#line 4137 "string.m"
      {
#line 4137 "string.m"
        MR_String mercury__string__BeforeNeedle_12;
#line 4137 "string.m"
        MR_Word mercury__string__Tail_13;
#line 4137 "string.m"
        MR_Integer mercury__string__V_16_16;

#line 3862 "string.m"
        {
#line 3862 "string.m"
          mercury__string__between_4_p_0(mercury__string__Total_9, mercury__string__StartAt_6, mercury__string__NeedlePos_11, &mercury__string__BeforeNeedle_12);
        }
#line 4138 "string.m"
        mercury__string__V_16_16 = (mercury__string__NeedlePos_11 + mercury__string__NeedleLen_7);
#line 4138 "string.m"
        {
#line 4138 "string.m"
          mercury__string__Tail_13 = mercury__string__split_at_string_loop_4_f_0(mercury__string__V_16_16, mercury__string__NeedleLen_7, mercury__string__Needle_8, mercury__string__Total_9);
        }
#line 4140 "string.m"
        {
#line 4140 "string.m"
          mercury__string__Out_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4140 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 0) = ((MR_Box) (mercury__string__BeforeNeedle_12));
#line 4140 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 1) = ((MR_Box) (mercury__string__Tail_13));
#line 4140 "string.m"
        }
#line 4137 "string.m"
      }
#line 4141 "string.m"
    else
#line 4142 "string.m"
      {
#line 4142 "string.m"
        MR_String mercury__string__Last_15;
#line 4142 "string.m"
        MR_Word mercury__string__V_17_17;
#line 4142 "string.m"
        MR_String mercury__string___Skip_14;

#line 4142 "string.m"
        {
#line 4142 "string.m"
          mercury__string__split_4_p_0(mercury__string__Total_9, mercury__string__StartAt_6, &mercury__string___Skip_14, &mercury__string__Last_15);
        }
#line 4143 "string.m"
        mercury__string__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4143 "string.m"
        {
#line 4143 "string.m"
          mercury__string__Out_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4143 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 0) = ((MR_Box) (mercury__string__Last_15));
#line 4143 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Out_10, 1) = ((MR_Box) (mercury__string__V_17_17));
#line 4143 "string.m"
        }
#line 4142 "string.m"
      }
#line 4141 "string.m"
    return mercury__string__Out_10;
#line 4141 "string.m"
  }
#line 4133 "string.m"
}

#line 4099 "string.m"
void MR_CALL 
mercury__string__split_at_separator_loop_6_p_0(
#line 4099 "string.m"
  MR_Word mercury__string__DelimP_7,
#line 4099 "string.m"
  MR_String mercury__string__Str_8,
#line 4099 "string.m"
  MR_Integer mercury__string__I_9,
#line 4099 "string.m"
  MR_Integer mercury__string__SegEnd_10,
#line 4099 "string.m"
  MR_Word mercury__string__Acc0_11,
#line 4099 "string.m"
  MR_Word * mercury__string__Acc_12)
#line 4099 "string.m"
{
#line 4119 "string.m"
  while (MR_TRUE)
#line 4119 "string.m"
    {
#line 4119 "string.m"
      /* tailcall optimized into a loop */
#line 4119 "string.m"
      {
#line 4119 "string.m"
        MR_bool mercury__string__succeeded;
#line 4119 "string.m"
        MR_Integer mercury__string__J_13;
#line 4119 "string.m"
        MR_Char mercury__string__C_14;

#line 2012 "string.m"
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
#line 2012 "string.m"

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

#line 11863 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_13  = PrevIndex;
	 mercury__string__C_14  = Ch;
#line 2012 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4119 "string.m"
        if (mercury__string__succeeded)
#line 4115 "string.m"
          {
#line 4110 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__DelimP_7, (MR_Integer) 1)));

#line 4110 "string.m"
            {
#line 4110 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__DelimP_7), ((MR_Box) (MR_Word) (mercury__string__C_14)));
            }
#line 4115 "string.m"
            if (mercury__string__succeeded)
#line 4112 "string.m"
              {
#line 4112 "string.m"
                MR_String mercury__string__Seg_16;
#line 4112 "string.m"
                MR_Word mercury__string__V_18_18;

#line 4018 "string.m"
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
#line 4018 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 11917 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_16  = SubString;
#line 4018 "string.m"
}
#line 4114 "string.m"
                {
#line 4114 "string.m"
                  mercury__string__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4114 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 0) = ((MR_Box) (mercury__string__Seg_16));
#line 4114 "string.m"
                  MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4114 "string.m"
                }
#line 4114 "string.m"
                /* direct tailcall eliminated */
#line 4114 "string.m"
                {
#line 4114 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;
#line 4114 "string.m"
                  MR_Integer mercury__string__SegEnd__tmp_copy_10 = mercury__string__J_13;
#line 4114 "string.m"
                  MR_Word mercury__string__Acc0__tmp_copy_11 = mercury__string__V_18_18;

#line 4114 "string.m"
                  mercury__string__Acc0_11 = mercury__string__Acc0__tmp_copy_11;
#line 4114 "string.m"
                  mercury__string__SegEnd_10 = mercury__string__SegEnd__tmp_copy_10;
#line 4114 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4114 "string.m"
                }
#line 4114 "string.m"
                continue;
#line 4112 "string.m"
              }
#line 4115 "string.m"
            else
#line 4117 "string.m"
              {
#line 4117 "string.m"
                /* direct tailcall eliminated */
#line 4117 "string.m"
                {
#line 4117 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__J_13;

#line 4117 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 4117 "string.m"
                }
#line 4117 "string.m"
                continue;
#line 4117 "string.m"
              }
#line 4115 "string.m"
          }
#line 4119 "string.m"
        else
#line 4121 "string.m"
          {
#line 4121 "string.m"
            MR_String mercury__string__Seg_20;

#line 4018 "string.m"
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
#line 4018 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 12007 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Seg_20  = SubString;
#line 4018 "string.m"
}
#line 4122 "string.m"
            {
#line 4122 "string.m"
              MR_Word base;
#line 4122 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4122 "string.m"
              *mercury__string__Acc_12 = base;
#line 4122 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Seg_20));
#line 4122 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Acc0_11));
#line 4122 "string.m"
            }
#line 4121 "string.m"
          }
#line 4119 "string.m"
      }
#line 4119 "string.m"
      break;
#line 4119 "string.m"
    }
#line 4099 "string.m"
}

#line 4080 "string.m"
void MR_CALL 
mercury__string__next_boundary_4_p_0(
#line 4080 "string.m"
  MR_Word mercury__string__P_5,
#line 4080 "string.m"
  MR_String mercury__string__String_6,
#line 4080 "string.m"
  MR_Integer mercury__string__Cur_7,
#line 4080 "string.m"
  MR_Integer * mercury__string__NextWordStart_8)
#line 4080 "string.m"
{
#line 4089 "string.m"
  while (MR_TRUE)
#line 4089 "string.m"
    {
#line 4089 "string.m"
      /* tailcall optimized into a loop */
#line 4089 "string.m"
      {
#line 4089 "string.m"
        MR_bool mercury__string__succeeded;
#line 4089 "string.m"
        MR_Integer mercury__string__Next_9;
#line 4085 "string.m"
        MR_Char mercury__string__Char_10;
#line 4086 "string.m"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 12094 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4085 "string.m"
        if (mercury__string__succeeded)
#line 4085 "string.m"
          {
#line 4086 "string.m"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_5, (MR_Integer) 1)));
#line 4086 "string.m"
            {
#line 4086 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 4085 "string.m"
          }
#line 4089 "string.m"
        if (mercury__string__succeeded)
#line 4088 "string.m"
          {
#line 4088 "string.m"
            /* direct tailcall eliminated */
#line 4088 "string.m"
            {
#line 4088 "string.m"
              MR_Integer mercury__string__Cur__tmp_copy_7 = mercury__string__Next_9;

#line 4088 "string.m"
              mercury__string__Cur_7 = mercury__string__Cur__tmp_copy_7;
#line 4088 "string.m"
            }
#line 4088 "string.m"
            continue;
#line 4088 "string.m"
          }
#line 4089 "string.m"
        else
#line 4090 "string.m"
          *mercury__string__NextWordStart_8 = mercury__string__Cur_7;
#line 4089 "string.m"
      }
#line 4089 "string.m"
      break;
#line 4089 "string.m"
    }
#line 4080 "string.m"
}

#line 4060 "string.m"
void MR_CALL 
mercury__string__words_loop_4_p_0(
#line 4060 "string.m"
  MR_Word mercury__string__SepP_5,
#line 4060 "string.m"
  MR_String mercury__string__String_6,
#line 4060 "string.m"
  MR_Integer mercury__string__WordStart_7,
#line 4060 "string.m"
  MR_Word * mercury__string__Words_8)
#line 4060 "string.m"
{
#line 4063 "string.m"
  {
#line 4063 "string.m"
    MR_bool mercury__string__succeeded;
#line 4063 "string.m"
    MR_Integer mercury__string__WordEnd_9;

#line 4064 "string.m"
    {
#line 4064 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_101_120_116_95_98_111_117_110_100_97_114_121_95_95_104_111_49_48_95_95_91_50_93_95_48_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__WordStart_7, &mercury__string__WordEnd_9);
    }
#line 4065 "string.m"
    mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__WordStart_7);
#line 4067 "string.m"
    if (mercury__string__succeeded)
#line 4066 "string.m"
      *mercury__string__Words_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4067 "string.m"
    else
#line 4068 "string.m"
      {
#line 4068 "string.m"
        MR_String mercury__string__Word_10;
#line 4068 "string.m"
        MR_Integer mercury__string__NextWordStart_11;

#line 4018 "string.m"
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
#line 4018 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 12212 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Word_10  = SubString;
#line 4018 "string.m"
}
#line 4069 "string.m"
        {
#line 4069 "string.m"
          mercury__string__next_boundary_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__WordEnd_9, &mercury__string__NextWordStart_11);
        }
#line 4070 "string.m"
        mercury__string__succeeded = (mercury__string__WordEnd_9 == mercury__string__NextWordStart_11);
#line 4072 "string.m"
        if (mercury__string__succeeded)
#line 4071 "string.m"
          {
#line 4071 "string.m"
            MR_Word mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 4071 "string.m"
            {
#line 4071 "string.m"
              MR_Word base;
#line 4071 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4071 "string.m"
              *mercury__string__Words_8 = base;
#line 4071 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4071 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__V_14_14));
#line 4071 "string.m"
            }
#line 4071 "string.m"
          }
#line 4072 "string.m"
        else
#line 4073 "string.m"
          {
#line 4073 "string.m"
            MR_Word mercury__string__Words0_12;

#line 4073 "string.m"
            {
#line 4073 "string.m"
              mercury__string__words_loop_4_p_0(mercury__string__SepP_5, mercury__string__String_6, mercury__string__NextWordStart_11, &mercury__string__Words0_12);
            }
#line 4074 "string.m"
            {
#line 4074 "string.m"
              MR_Word base;
#line 4074 "string.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4074 "string.m"
              *mercury__string__Words_8 = base;
#line 4074 "string.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Word_10));
#line 4074 "string.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Words0_12));
#line 4074 "string.m"
            }
#line 4073 "string.m"
          }
#line 4068 "string.m"
      }
#line 4063 "string.m"
  }
#line 4060 "string.m"
}

#line 3976 "string.m"
void MR_CALL 
mercury__string__convert_endpoints_4_p_0(
#line 3976 "string.m"
  MR_Integer mercury__string__Start_5,
#line 3976 "string.m"
  MR_Integer mercury__string__Count_6,
#line 3976 "string.m"
  MR_Integer * mercury__string__ClampStart_7,
#line 3976 "string.m"
  MR_Integer * mercury__string__ClampEnd_8)
#line 3976 "string.m"
{
#line 3978 "string.m"
  {
#line 3978 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_5);

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      *mercury__string__ClampStart_7 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      *mercury__string__ClampStart_7 = mercury__string__Start_5;
#line 3980 "string.m"
    mercury__string__succeeded = (mercury__string__Count_6 <= (MR_Integer) 0);
#line 3982 "string.m"
    if (mercury__string__succeeded)
#line 3981 "string.m"
      *mercury__string__ClampEnd_8 = *mercury__string__ClampStart_7;
#line 3982 "string.m"
    else
#line 3986 "string.m"
      {
#line 3984 "string.m"
        MR_Integer mercury__string__V_11_11;
#line 3984 "string.m"
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

#line 12346 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_12_12  = Max;
#line 141 "int.opt"
}
#line 3984 "string.m"
        mercury__string__V_11_11 = (mercury__string__V_12_12 - mercury__string__Count_6);
#line 3984 "string.m"
        mercury__string__succeeded = (*mercury__string__ClampStart_7 > mercury__string__V_11_11);
#line 3986 "string.m"
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

#line 12382 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__ClampEnd_8  = Max;
#line 141 "int.opt"
}
#line 141 "int.opt"
          }
#line 3986 "string.m"
        else
#line 3987 "string.m"
          *mercury__string__ClampEnd_8 = (*mercury__string__ClampStart_7 + mercury__string__Count_6);
#line 3986 "string.m"
      }
#line 3978 "string.m"
  }
#line 3976 "string.m"
}

#line 3953 "string.m"
MR_Word MR_CALL 
mercury__string__between_loop_3_f_0(
#line 3953 "string.m"
  MR_Integer mercury__string__I_5,
#line 3953 "string.m"
  MR_Integer mercury__string__End_6,
#line 3953 "string.m"
  MR_String mercury__string__Str_7)
#line 3953 "string.m"
{
#line 3963 "string.m"
  {
#line 3963 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__I_5 < mercury__string__End_6);
#line 3963 "string.m"
    MR_Word mercury__string__Chars_8;
#line 3963 "string.m"
    MR_Integer mercury__string__J_9;
#line 3963 "string.m"
    MR_Char mercury__string__C_10;

#line 3957 "string.m"
    if (mercury__string__succeeded)
#line 3957 "string.m"
      {
#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 12453 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__C_10  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3957 "string.m"
        if (mercury__string__succeeded)
#line 3959 "string.m"
          mercury__string__succeeded = (mercury__string__J_9 <= mercury__string__End_6);
#line 3957 "string.m"
      }
#line 3963 "string.m"
    if (mercury__string__succeeded)
#line 3961 "string.m"
      {
#line 3961 "string.m"
        MR_Word mercury__string__Cs_11;

#line 3961 "string.m"
        {
#line 3961 "string.m"
          mercury__string__Cs_11 = mercury__string__between_loop_3_f_0(mercury__string__J_9, mercury__string__End_6, mercury__string__Str_7);
        }
#line 3962 "string.m"
        {
#line 3962 "string.m"
          mercury__string__Chars_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 3962 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Chars_8, 0) = ((MR_Box) (MR_Word) (mercury__string__C_10));
#line 3962 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__Chars_8, 1) = ((MR_Box) (mercury__string__Cs_11));
#line 3962 "string.m"
        }
#line 3961 "string.m"
      }
#line 3963 "string.m"
    else
#line 3964 "string.m"
      mercury__string__Chars_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3963 "string.m"
    return mercury__string__Chars_8;
#line 3963 "string.m"
  }
#line 3953 "string.m"
}

#line 3404 "string.m"
MR_String MR_CALL 
mercury__string__join_list_loop_2_f_0(
#line 3404 "string.m"
  MR_String mercury__string__Sep_1,
#line 3404 "string.m"
  MR_Word mercury__string__HeadVar__2_2)
#line 3404 "string.m"
{
#line 3406 "string.m"
  {
#line 3406 "string.m"
    MR_bool mercury__string__succeeded;
#line 3406 "string.m"
    MR_String mercury__string__HeadVar__3_3;

#line 3406 "string.m"
    if ((mercury__string__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3406 "string.m"
      mercury__string__HeadVar__3_3 = (MR_String) "";
#line 3406 "string.m"
    else
#line 3407 "string.m"
      {
#line 3407 "string.m"
        MR_String mercury__string__H_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 0)));
#line 3407 "string.m"
        MR_Word mercury__string__T_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__HeadVar__2_2, (MR_Integer) 1)));
#line 3407 "string.m"
        MR_String mercury__string__V_8_8;
#line 3407 "string.m"
        MR_String mercury__string__V_9_9;

#line 3407 "string.m"
        {
#line 3407 "string.m"
          mercury__string__V_9_9 = mercury__string__join_list_loop_2_f_0(mercury__string__Sep_1, mercury__string__T_7);
        }
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_list_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__H_6 ;
	S2 =  mercury__string__V_9_9 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 12563 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = S3;
#line 3128 "string.m"
}
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_list_loop_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__Sep_1 ;
	S2 =  mercury__string__V_8_8 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 12590 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__3_3  = S3;
#line 3128 "string.m"
}
#line 3407 "string.m"
      }
#line 3406 "string.m"
    return mercury__string__HeadVar__3_3;
#line 3406 "string.m"
  }
#line 3404 "string.m"
}

#line 3223 "string.m"
static void MR_CALL 
mercury__string__mercury_append_3_p_3_1(
#line 3223 "string.m"
  void * mercury__string__env_ptr_arg)
#line 3223 "string.m"
{
#line 3223 "string.m"
  {
#line 3223 "string.m"
    struct mercury__string__mercury_append_3_p_3_env_0_s * mercury__string__env_ptr = (struct mercury__string__mercury_append_3_p_3_env_0_s *) mercury__string__env_ptr_arg;

#line 3223 "string.m"
    {
#line 1421 "string.m"
      MR_String mercury__string__Str0_27;
#line 1421 "string.m"
      MR_String mercury__string__Str0_37;

#line 1419 "string.m"
      {
#line 1419 "string.m"
        (mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded = mercury__string__semidet_from_char_list_2_p_0((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__XList_7, &mercury__string__Str0_27);
      }
#line 1421 "string.m"
      if ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded)
#line 1420 "string.m"
        *((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__X_4) = mercury__string__Str0_27;
#line 1421 "string.m"
      else
#line 1422 "string.m"
        {
#line 1422 "string.m"
          {
#line 1422 "string.m"
            mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1422 "string.m"
            return;
          }
#line 1422 "string.m"
        }
#line 1419 "string.m"
      {
#line 1419 "string.m"
        (mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded = mercury__string__semidet_from_char_list_2_p_0((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__YList_8, &mercury__string__Str0_37);
      }
#line 1421 "string.m"
      if ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__succeeded)
#line 1420 "string.m"
        *((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__Y_5) = mercury__string__Str0_37;
#line 1421 "string.m"
      else
#line 1422 "string.m"
        {
#line 1422 "string.m"
          {
#line 1422 "string.m"
            mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1422 "string.m"
            return;
          }
#line 1422 "string.m"
        }
#line 1421 "string.m"
      {
#line 1421 "string.m"
        ((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__cont)((mercury__string__env_ptr)->mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr);
#line 1421 "string.m"
        return;
      }
#line 3223 "string.m"
    }
#line 3223 "string.m"
  }
#line 3223 "string.m"
}

#line 3221 "string.m"
void MR_CALL 
mercury__string__mercury_append_3_p_3(
#line 3221 "string.m"
  MR_String * mercury__string__X_4,
#line 3221 "string.m"
  MR_String * mercury__string__Y_5,
#line 3221 "string.m"
  MR_String mercury__string__Z_6,
#line 3221 "string.m"
  MR_Cont mercury__string__cont,
#line 3221 "string.m"
  void * mercury__string__cont_env_ptr)
#line 3221 "string.m"
{
#line 3221 "string.m"
  {
#line 3221 "string.m"
    struct mercury__string__mercury_append_3_p_3_env_0_s mercury__string__env;

#line 3221 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__X_4 = mercury__string__X_4;
#line 3221 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__Y_5 = mercury__string__Y_5;
#line 3221 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__cont = mercury__string__cont;
#line 3221 "string.m"
    (mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__cont_env_ptr = mercury__string__cont_env_ptr;
#line 3223 "string.m"
    {
#line 3223 "string.m"
      MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3223 "string.m"
      MR_Word mercury__string__ZList_9;

#line 1343 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_3

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
#line 1343 "string.m"
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
#line 12742 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
#line 1343 "string.m"
}
#line 12749 "string.c"
      mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3227 "string.m"
      {
#line 3227 "string.m"
        mercury__list__append_3_p_4(mercury__string__TypeCtorInfo_10_10, &(mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__XList_7, &(mercury__string__env).mercury__string__mercury_append_3_p_3_env_0__YList_8, mercury__string__ZList_9, mercury__string__mercury_append_3_p_3_1, &mercury__string__env);
      }
#line 3223 "string.m"
    }
#line 3221 "string.m"
  }
#line 3221 "string.m"
}

#line 3220 "string.m"
void MR_CALL 
mercury__string__mercury_append_3_p_2(
#line 3220 "string.m"
  MR_String mercury__string__X_4,
#line 3220 "string.m"
  MR_String mercury__string__Y_5,
#line 3220 "string.m"
  MR_String * mercury__string__Z_6)
#line 3220 "string.m"
{
#line 3223 "string.m"
  {
#line 3223 "string.m"
    MR_bool mercury__string__succeeded;
#line 3223 "string.m"
    MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3223 "string.m"
    MR_Word mercury__string__XList_7;
#line 3223 "string.m"
    MR_Word mercury__string__YList_8;
#line 3223 "string.m"
    MR_Word mercury__string__ZList_9;
#line 1421 "string.m"
    MR_String mercury__string__Str0_35;

#line 1343 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_2

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
#line 1343 "string.m"
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
#line 12813 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
#line 1343 "string.m"
}
#line 1343 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_2

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Y_5 ;
		{
#line 1343 "string.m"
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
#line 12844 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__YList_8  = CharList;
#line 1343 "string.m"
}
#line 12851 "string.c"
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3227 "string.m"
    {
#line 3227 "string.m"
      mercury__list__append_3_p_1(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, mercury__string__YList_8, &mercury__string__ZList_9);
    }
#line 1419 "string.m"
    {
#line 1419 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ZList_9, &mercury__string__Str0_35);
    }
#line 1421 "string.m"
    if (mercury__string__succeeded)
#line 1420 "string.m"
      *mercury__string__Z_6 = mercury__string__Str0_35;
#line 1421 "string.m"
    else
#line 1422 "string.m"
      {
#line 1422 "string.m"
        {
#line 1422 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1422 "string.m"
          return;
        }
#line 1422 "string.m"
      }
#line 3223 "string.m"
  }
#line 3220 "string.m"
}

#line 3219 "string.m"
MR_bool MR_CALL 
mercury__string__mercury_append_3_p_1(
#line 3219 "string.m"
  MR_String mercury__string__X_4,
#line 3219 "string.m"
  MR_String * mercury__string__Y_5,
#line 3219 "string.m"
  MR_String mercury__string__Z_6)
#line 3219 "string.m"
{
#line 3223 "string.m"
  {
#line 3223 "string.m"
    MR_bool mercury__string__succeeded;
#line 3223 "string.m"
    MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3223 "string.m"
    MR_Word mercury__string__XList_7;
#line 3223 "string.m"
    MR_Word mercury__string__YList_8;
#line 3223 "string.m"
    MR_Word mercury__string__ZList_9;
#line 1421 "string.m"
    MR_String mercury__string__Str0_35;

#line 1343 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
#line 1343 "string.m"
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
#line 12935 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
#line 1343 "string.m"
}
#line 1343 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
#line 1343 "string.m"
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
#line 12966 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
#line 1343 "string.m"
}
#line 12973 "string.c"
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3227 "string.m"
    {
#line 3227 "string.m"
      mercury__string__succeeded = mercury__list__append_3_p_3(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, &mercury__string__YList_8, mercury__string__ZList_9);
    }
#line 3223 "string.m"
    if (mercury__string__succeeded)
#line 3223 "string.m"
      {
#line 1419 "string.m"
        {
#line 1419 "string.m"
          mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__YList_8, &mercury__string__Str0_35);
        }
#line 1421 "string.m"
        if (mercury__string__succeeded)
#line 1420 "string.m"
          *mercury__string__Y_5 = mercury__string__Str0_35;
#line 1421 "string.m"
        else
#line 1422 "string.m"
          {
#line 1422 "string.m"
            {
#line 1422 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
            }
#line 1422 "string.m"
          }
#line 1421 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 3223 "string.m"
      }
#line 3223 "string.m"
    return mercury__string__succeeded;
#line 3223 "string.m"
  }
#line 3219 "string.m"
}

#line 3218 "string.m"
MR_bool MR_CALL 
mercury__string__mercury_append_3_p_0(
#line 3218 "string.m"
  MR_String mercury__string__X_4,
#line 3218 "string.m"
  MR_String mercury__string__Y_5,
#line 3218 "string.m"
  MR_String mercury__string__Z_6)
#line 3218 "string.m"
{
#line 3223 "string.m"
  {
#line 3223 "string.m"
    MR_bool mercury__string__succeeded;
#line 3223 "string.m"
    MR_Word mercury__string__TypeCtorInfo_10_10;
#line 3223 "string.m"
    MR_Word mercury__string__XList_7;
#line 3223 "string.m"
    MR_Word mercury__string__YList_8;
#line 3223 "string.m"
    MR_Word mercury__string__ZList_9;

#line 1343 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__X_4 ;
		{
#line 1343 "string.m"
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
#line 13063 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__XList_7  = CharList;
#line 1343 "string.m"
}
#line 1343 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Y_5 ;
		{
#line 1343 "string.m"
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
#line 13094 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__YList_8  = CharList;
#line 1343 "string.m"
}
#line 1343 "string.m"
{
#define MR_PROC_LABEL mercury__string__mercury_append_3_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Z_6 ;
		{
#line 1343 "string.m"
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
#line 13125 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__ZList_9  = CharList;
#line 1343 "string.m"
}
#line 13132 "string.c"
    mercury__string__TypeCtorInfo_10_10 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 3227 "string.m"
    {
#line 3227 "string.m"
      return mercury__string__succeeded = mercury__list__append_3_p_2(mercury__string__TypeCtorInfo_10_10, mercury__string__XList_7, mercury__string__YList_8, mercury__string__ZList_9);
    }
#line 3223 "string.m"
    return mercury__string__succeeded;
#line 3223 "string.m"
  }
#line 3218 "string.m"
}

#line 3179 "string.m"
void MR_CALL 
mercury__string__append_ooi_3_5_p_0(
#line 3179 "string.m"
  MR_Integer mercury__string__S1Len_1,
#line 3179 "string.m"
  MR_Integer mercury__string__S3Len_2,
#line 3179 "string.m"
  MR_String * mercury__string__S1_3,
#line 3179 "string.m"
  MR_String * mercury__string__S2_4,
#line 3179 "string.m"
  MR_String mercury__string__S3_5)
#line 3179 "string.m"
{
#line 3182 "string.m"
  {
#line 3182 "string.m"
    MR_bool mercury__string__succeeded;

#line 3186 "string.m"
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
#line 3186 "string.m"
{
    MR_allocate_aligned_string_msg(S1, S1Len, MR_ALLOC_ID);
    MR_memcpy(S1, S3, S1Len);
    S1[S1Len] = '\0';
    MR_allocate_aligned_string_msg(S2, S3Len - S1Len, MR_ALLOC_ID);
    strcpy(S2, S3 + S1Len);
}
#line 13188 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S1_3  = S1;
	 *mercury__string__S2_4  = S2;
#line 3186 "string.m"
}
#line 3182 "string.m"
  }
#line 3179 "string.m"
}

#line 3164 "string.m"
void MR_CALL 
mercury__string__append_ooi_2_5_p_0(
#line 3164 "string.m"
  MR_Integer mercury__string__NextS1Len_6,
#line 3164 "string.m"
  MR_Integer mercury__string__S3Len_7,
#line 3164 "string.m"
  MR_String * mercury__string__S1_8,
#line 3164 "string.m"
  MR_String * mercury__string__S2_9,
#line 3164 "string.m"
  MR_String mercury__string__S3_10,
#line 3164 "string.m"
  MR_Cont mercury__string__cont,
#line 3164 "string.m"
  void * mercury__string__cont_env_ptr)
#line 3164 "string.m"
{
#line 3170 "string.m"
  while (MR_TRUE)
#line 3170 "string.m"
    {
#line 3170 "string.m"
      /* tailcall optimized into a loop */
#line 3170 "string.m"
      {
#line 3170 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__NextS1Len_6 == mercury__string__S3Len_7);

#line 3170 "string.m"
        if (mercury__string__succeeded)
#line 3169 "string.m"
          {
#line 3169 "string.m"
            {
#line 3169 "string.m"
              mercury__string__append_ooi_3_5_p_0(mercury__string__NextS1Len_6, mercury__string__S3Len_7, mercury__string__S1_8, mercury__string__S2_9, mercury__string__S3_10);
            }
#line 3169 "string.m"
            {
#line 3169 "string.m"
              mercury__string__cont(mercury__string__cont_env_ptr);
#line 3169 "string.m"
              return;
            }
#line 3169 "string.m"
          }
#line 3170 "string.m"
        else
#line 3173 "string.m"
          {
#line 3172 "string.m"
            {
#line 3172 "string.m"
              mercury__string__append_ooi_3_5_p_0(mercury__string__NextS1Len_6, mercury__string__S3Len_7, mercury__string__S1_8, mercury__string__S2_9, mercury__string__S3_10);
            }
#line 3172 "string.m"
            {
#line 3172 "string.m"
              mercury__string__cont(mercury__string__cont_env_ptr);
            }
#line 3174 "string.m"
            {
#line 3174 "string.m"
              MR_Integer mercury__string__AdvS1Len_11;
#line 1919 "string.m"
              MR_Char mercury__string__V_12_12;

#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 13295 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__AdvS1Len_11  = NextIndex;
	 mercury__string__V_12_12  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3174 "string.m"
              if (mercury__string__succeeded)
#line 3175 "string.m"
                {
#line 3175 "string.m"
                  /* direct tailcall eliminated */
#line 3175 "string.m"
                  {
#line 3175 "string.m"
                    MR_Integer mercury__string__NextS1Len__tmp_copy_6 = mercury__string__AdvS1Len_11;

#line 3175 "string.m"
                    mercury__string__NextS1Len_6 = mercury__string__NextS1Len__tmp_copy_6;
#line 3175 "string.m"
                  }
#line 3175 "string.m"
                  continue;
#line 3175 "string.m"
                }
#line 3174 "string.m"
            }
#line 3173 "string.m"
          }
#line 3170 "string.m"
      }
#line 3170 "string.m"
      break;
#line 3170 "string.m"
    }
#line 3164 "string.m"
}

#line 3158 "string.m"
void MR_CALL 
mercury__string__append_ooi_3_p_0(
#line 3158 "string.m"
  MR_String * mercury__string__S1_4,
#line 3158 "string.m"
  MR_String * mercury__string__S2_5,
#line 3158 "string.m"
  MR_String mercury__string__S3_6,
#line 3158 "string.m"
  MR_Cont mercury__string__cont,
#line 3158 "string.m"
  void * mercury__string__cont_env_ptr)
#line 3158 "string.m"
{
#line 3160 "string.m"
  {
#line 3160 "string.m"
    MR_bool mercury__string__succeeded;
#line 3160 "string.m"
    MR_Integer mercury__string__S3Len_7;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_ooi_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S3_6 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 13373 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S3Len_7  = Length;
#line 2379 "string.m"
}
#line 3162 "string.m"
    {
#line 3162 "string.m"
      mercury__string__append_ooi_2_5_p_0((MR_Integer) 0, mercury__string__S3Len_7, mercury__string__S1_4, mercury__string__S2_5, mercury__string__S3_6, mercury__string__cont, mercury__string__cont_env_ptr);
#line 3162 "string.m"
      return;
    }
#line 3160 "string.m"
  }
#line 3158 "string.m"
}

#line 3122 "string.m"
void MR_CALL 
mercury__string__append_iio_3_p_0(
#line 3122 "string.m"
  MR_String mercury__string__S1_1,
#line 3122 "string.m"
  MR_String mercury__string__S2_2,
#line 3122 "string.m"
  MR_String * mercury__string__S3_3)
#line 3122 "string.m"
{
#line 3124 "string.m"
  {
#line 3124 "string.m"
    MR_bool mercury__string__succeeded;

#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_iio_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_1 ;
	S2 =  mercury__string__S2_2 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 13428 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S3_3  = S3;
#line 3128 "string.m"
}
#line 3124 "string.m"
  }
#line 3122 "string.m"
}

#line 3070 "string.m"
MR_bool MR_CALL 
mercury__string__append_ioi_3_p_0(
#line 3070 "string.m"
  MR_String mercury__string__S1_1,
#line 3070 "string.m"
  MR_String * mercury__string__S2_2,
#line 3070 "string.m"
  MR_String mercury__string__S3_3)
#line 3070 "string.m"
{
#line 3072 "string.m"
  {
#line 3072 "string.m"
    MR_bool mercury__string__succeeded;

#line 3076 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_ioi_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__S1_1 ;
	S3 =  mercury__string__S3_3 ;
		{
#line 3076 "string.m"
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
#line 13486 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__S2_2  = S2;
#line 3076 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3072 "string.m"
    return mercury__string__succeeded;
#line 3072 "string.m"
  }
#line 3070 "string.m"
}

#line 3027 "string.m"
MR_bool MR_CALL 
mercury__string__append_iii_3_p_0(
#line 3027 "string.m"
  MR_String mercury__string__S1_1,
#line 3027 "string.m"
  MR_String mercury__string__S2_2,
#line 3027 "string.m"
  MR_String mercury__string__S3_3)
#line 3027 "string.m"
{
#line 3029 "string.m"
  {
#line 3029 "string.m"
    MR_bool mercury__string__succeeded;

#line 3033 "string.m"
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
#line 3033 "string.m"
{
    size_t len_1 = strlen(S1);
    SUCCESS_INDICATOR = (
        strncmp(S1, S3, len_1) == 0 &&
        strcmp(S2, S3 + len_1) == 0
    );
}
#line 13540 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3033 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3029 "string.m"
    return mercury__string__succeeded;
#line 3029 "string.m"
  }
#line 3027 "string.m"
}

#line 2987 "string.m"
MR_bool MR_CALL 
mercury__string__sub_string_search_start_loop_6_p_0(
#line 2987 "string.m"
  MR_String mercury__string__String_7,
#line 2987 "string.m"
  MR_String mercury__string__SubString_8,
#line 2987 "string.m"
  MR_Integer mercury__string__I_9,
#line 2987 "string.m"
  MR_Integer mercury__string__Len_10,
#line 2987 "string.m"
  MR_Integer mercury__string__SubLen_11,
#line 2987 "string.m"
  MR_Integer * mercury__string__Index_12)
#line 2987 "string.m"
{
#line 2990 "string.m"
  while (MR_TRUE)
#line 2990 "string.m"
    {
#line 2990 "string.m"
      /* tailcall optimized into a loop */
#line 2990 "string.m"
      {
#line 2990 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__I_9 < mercury__string__Len_10);
#line 2998 "string.m"
        MR_Integer mercury__string__V_13_13;
#line 2998 "string.m"
        MR_String mercury__string__V_17_17;

#line 2990 "string.m"
        if (mercury__string__succeeded)
#line 2990 "string.m"
          {
#line 2998 "string.m"
            mercury__string__V_13_13 = (mercury__string__I_9 + mercury__string__SubLen_11);
#line 3862 "string.m"
            {
#line 3862 "string.m"
              mercury__string__between_4_p_0(mercury__string__String_7, mercury__string__I_9, mercury__string__V_13_13, &mercury__string__V_17_17);
            }
#line 2998 "string.m"
            mercury__string__succeeded = (strcmp(mercury__string__SubString_8, mercury__string__V_17_17) == 0);
#line 3001 "string.m"
            if (mercury__string__succeeded)
#line 3000 "string.m"
              {
#line 3000 "string.m"
                *mercury__string__Index_12 = mercury__string__I_9;
#line 3000 "string.m"
                mercury__string__succeeded = MR_TRUE;
#line 3000 "string.m"
              }
#line 3001 "string.m"
            else
#line 3002 "string.m"
              {
#line 3002 "string.m"
                MR_Integer mercury__string__V_14_14 = (mercury__string__I_9 + (MR_Integer) 1);

#line 3002 "string.m"
                /* direct tailcall eliminated */
#line 3002 "string.m"
                {
#line 3002 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_9 = mercury__string__V_14_14;

#line 3002 "string.m"
                  mercury__string__I_9 = mercury__string__I__tmp_copy_9;
#line 3002 "string.m"
                }
#line 3002 "string.m"
                continue;
#line 3002 "string.m"
              }
#line 2990 "string.m"
          }
#line 2990 "string.m"
        return mercury__string__succeeded;
#line 2990 "string.m"
      }
#line 2990 "string.m"
      break;
#line 2990 "string.m"
    }
#line 2987 "string.m"
}

#line 2897 "string.m"
void MR_CALL 
mercury__string__suffix_length_loop_4_p_0(
#line 2897 "string.m"
  MR_Word mercury__string__P_5,
#line 2897 "string.m"
  MR_String mercury__string__S_6,
#line 2897 "string.m"
  MR_Integer mercury__string__I_7,
#line 2897 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 2897 "string.m"
{
#line 2906 "string.m"
  while (MR_TRUE)
#line 2906 "string.m"
    {
#line 2906 "string.m"
      /* tailcall optimized into a loop */
#line 2906 "string.m"
      {
#line 2906 "string.m"
        MR_bool mercury__string__succeeded;
#line 2906 "string.m"
        MR_Integer mercury__string__J_9;
#line 2902 "string.m"
        MR_Char mercury__string__Char_10;
#line 2903 "string.m"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 2012 "string.m"
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
#line 2012 "string.m"

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

#line 13704 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = PrevIndex;
	 mercury__string__Char_10  = Ch;
#line 2012 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2902 "string.m"
        if (mercury__string__succeeded)
#line 2902 "string.m"
          {
#line 2903 "string.m"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_5, (MR_Integer) 1)));
#line 2903 "string.m"
            {
#line 2903 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 2902 "string.m"
          }
#line 2906 "string.m"
        if (mercury__string__succeeded)
#line 2905 "string.m"
          {
#line 2905 "string.m"
            /* direct tailcall eliminated */
#line 2905 "string.m"
            {
#line 2905 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 2905 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 2905 "string.m"
            }
#line 2905 "string.m"
            continue;
#line 2905 "string.m"
          }
#line 2906 "string.m"
        else
#line 2907 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 2906 "string.m"
      }
#line 2906 "string.m"
      break;
#line 2906 "string.m"
    }
#line 2897 "string.m"
}

#line 2880 "string.m"
void MR_CALL 
mercury__string__prefix_length_loop_4_p_0(
#line 2880 "string.m"
  MR_Word mercury__string__P_5,
#line 2880 "string.m"
  MR_String mercury__string__S_6,
#line 2880 "string.m"
  MR_Integer mercury__string__I_7,
#line 2880 "string.m"
  MR_Integer * mercury__string__Index_8)
#line 2880 "string.m"
{
#line 2889 "string.m"
  while (MR_TRUE)
#line 2889 "string.m"
    {
#line 2889 "string.m"
      /* tailcall optimized into a loop */
#line 2889 "string.m"
      {
#line 2889 "string.m"
        MR_bool mercury__string__succeeded;
#line 2889 "string.m"
        MR_Integer mercury__string__J_9;
#line 2885 "string.m"
        MR_Char mercury__string__Char_10;
#line 2886 "string.m"
        MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);

#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 13815 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__Char_10  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2885 "string.m"
        if (mercury__string__succeeded)
#line 2885 "string.m"
          {
#line 2886 "string.m"
            mercury__string__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_5, (MR_Integer) 1)));
#line 2886 "string.m"
            {
#line 2886 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_5), ((MR_Box) (MR_Word) (mercury__string__Char_10)));
            }
#line 2885 "string.m"
          }
#line 2889 "string.m"
        if (mercury__string__succeeded)
#line 2888 "string.m"
          {
#line 2888 "string.m"
            /* direct tailcall eliminated */
#line 2888 "string.m"
            {
#line 2888 "string.m"
              MR_Integer mercury__string__I__tmp_copy_7 = mercury__string__J_9;

#line 2888 "string.m"
              mercury__string__I_7 = mercury__string__I__tmp_copy_7;
#line 2888 "string.m"
            }
#line 2888 "string.m"
            continue;
#line 2888 "string.m"
          }
#line 2889 "string.m"
        else
#line 2890 "string.m"
          *mercury__string__Index_8 = mercury__string__I_7;
#line 2889 "string.m"
      }
#line 2889 "string.m"
      break;
#line 2889 "string.m"
    }
#line 2880 "string.m"
}

#line 2862 "string.m"
MR_bool MR_CALL 
mercury__string__contains_char_3_p_0(
#line 2862 "string.m"
  MR_String mercury__string__Str_4,
#line 2862 "string.m"
  MR_Char mercury__string__Char_5,
#line 2862 "string.m"
  MR_Integer mercury__string__I_6)
#line 2862 "string.m"
{
#line 2871 "string.m"
  while (MR_TRUE)
#line 2871 "string.m"
    {
#line 2871 "string.m"
      /* tailcall optimized into a loop */
#line 2871 "string.m"
      {
#line 2871 "string.m"
        MR_bool mercury__string__succeeded;
#line 2871 "string.m"
        MR_Integer mercury__string__J_7;
#line 2871 "string.m"
        MR_Char mercury__string__IndexChar_8;

#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 13922 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_7  = NextIndex;
	 mercury__string__IndexChar_8  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2871 "string.m"
        if (mercury__string__succeeded)
#line 2871 "string.m"
          {
#line 2866 "string.m"
            mercury__string__succeeded = (mercury__string__IndexChar_8 == mercury__string__Char_5);
#line 2868 "string.m"
            if (mercury__string__succeeded)
#line 2867 "string.m"
              mercury__string__succeeded = MR_TRUE;
#line 2868 "string.m"
            else
#line 2869 "string.m"
              {
#line 2869 "string.m"
                /* direct tailcall eliminated */
#line 2869 "string.m"
                {
#line 2869 "string.m"
                  MR_Integer mercury__string__I__tmp_copy_6 = mercury__string__J_7;

#line 2869 "string.m"
                  mercury__string__I_6 = mercury__string__I__tmp_copy_6;
#line 2869 "string.m"
                }
#line 2869 "string.m"
                continue;
#line 2869 "string.m"
              }
#line 2871 "string.m"
          }
#line 2871 "string.m"
        return mercury__string__succeeded;
#line 2871 "string.m"
      }
#line 2871 "string.m"
      break;
#line 2871 "string.m"
    }
#line 2862 "string.m"
}

#line 2808 "string.m"
MR_bool MR_CALL 
mercury__string__all_match_loop_3_p_0(
#line 2808 "string.m"
  MR_Word mercury__string__P_4,
#line 2808 "string.m"
  MR_String mercury__string__String_5,
#line 2808 "string.m"
  MR_Integer mercury__string__Cur_6)
#line 2808 "string.m"
{
#line 2815 "string.m"
  while (MR_TRUE)
#line 2815 "string.m"
    {
#line 2815 "string.m"
      /* tailcall optimized into a loop */
#line 2815 "string.m"
      {
#line 2815 "string.m"
        MR_bool mercury__string__succeeded;
#line 2815 "string.m"
        MR_Integer mercury__string__Next_7;
#line 2815 "string.m"
        MR_Char mercury__string__Char_8;

#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 14026 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Next_7  = NextIndex;
	 mercury__string__Char_8  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2815 "string.m"
        if (mercury__string__succeeded)
#line 2813 "string.m"
          {
#line 2813 "string.m"
            MR_bool MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__string__P_4, (MR_Integer) 1)));

#line 2813 "string.m"
            {
#line 2813 "string.m"
              mercury__string__succeeded = mercury__string__func_0(((MR_Box) mercury__string__P_4), ((MR_Box) (MR_Word) (mercury__string__Char_8)));
            }
#line 2813 "string.m"
            if (mercury__string__succeeded)
#line 2814 "string.m"
              {
#line 2814 "string.m"
                /* direct tailcall eliminated */
#line 2814 "string.m"
                {
#line 2814 "string.m"
                  MR_Integer mercury__string__Cur__tmp_copy_6 = mercury__string__Next_7;

#line 2814 "string.m"
                  mercury__string__Cur_6 = mercury__string__Cur__tmp_copy_6;
#line 2814 "string.m"
                }
#line 2814 "string.m"
                continue;
#line 2814 "string.m"
              }
#line 2813 "string.m"
          }
#line 2815 "string.m"
        else
#line 2816 "string.m"
          mercury__string__succeeded = MR_TRUE;
#line 2815 "string.m"
        return mercury__string__succeeded;
#line 2815 "string.m"
      }
#line 2815 "string.m"
      break;
#line 2815 "string.m"
    }
#line 2808 "string.m"
}

#line 2643 "string.m"
void MR_CALL 
mercury__string__hash3_loop_5_p_0(
#line 2643 "string.m"
  MR_String mercury__string__String_6,
#line 2643 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2643 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2643 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2643 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2643 "string.m"
{
#line 2652 "string.m"
  while (MR_TRUE)
#line 2652 "string.m"
    {
#line 2652 "string.m"
      /* tailcall optimized into a loop */
#line 2652 "string.m"
      {
#line 2652 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2652 "string.m"
        if (mercury__string__succeeded)
#line 2648 "string.m"
          {
#line 2648 "string.m"
            MR_Integer mercury__string__C_10;
#line 2648 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2648 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_15_15;
#line 2648 "string.m"
            MR_Integer mercury__string__V_16_16;

#line 2139 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash3_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2139 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 14140 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2139 "string.m"
}
#line 2649 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 49);
#line 2650 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_15_15 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
#line 2651 "string.m"
            mercury__string__V_16_16 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2651 "string.m"
            /* direct tailcall eliminated */
#line 2651 "string.m"
            {
#line 2651 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_16_16;
#line 2651 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_15_15;

#line 2651 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2651 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2651 "string.m"
            }
#line 2651 "string.m"
            continue;
#line 2648 "string.m"
          }
#line 2652 "string.m"
        else
#line 2651 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2652 "string.m"
      }
#line 2652 "string.m"
      break;
#line 2652 "string.m"
    }
#line 2643 "string.m"
}

#line 2625 "string.m"
void MR_CALL 
mercury__string__hash2_loop_5_p_0(
#line 2625 "string.m"
  MR_String mercury__string__String_6,
#line 2625 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2625 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2625 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2625 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2625 "string.m"
{
#line 2634 "string.m"
  while (MR_TRUE)
#line 2634 "string.m"
    {
#line 2634 "string.m"
      /* tailcall optimized into a loop */
#line 2634 "string.m"
      {
#line 2634 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2634 "string.m"
        if (mercury__string__succeeded)
#line 2630 "string.m"
          {
#line 2630 "string.m"
            MR_Integer mercury__string__C_10;
#line 2630 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2630 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_15_15;
#line 2630 "string.m"
            MR_Integer mercury__string__V_16_16;

#line 2139 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash2_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2139 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 14240 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2139 "string.m"
}
#line 2631 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 * (MR_Integer) 37);
#line 2632 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_15_15 = (mercury__string__STATE_VARIABLE_HashVal_13_13 + mercury__string__C_10);
#line 2633 "string.m"
            mercury__string__V_16_16 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2633 "string.m"
            /* direct tailcall eliminated */
#line 2633 "string.m"
            {
#line 2633 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_16_16;
#line 2633 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_15_15;

#line 2633 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2633 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2633 "string.m"
            }
#line 2633 "string.m"
            continue;
#line 2630 "string.m"
          }
#line 2634 "string.m"
        else
#line 2633 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2634 "string.m"
      }
#line 2634 "string.m"
      break;
#line 2634 "string.m"
    }
#line 2625 "string.m"
}

#line 2607 "string.m"
void MR_CALL 
mercury__string__hash_loop_5_p_0(
#line 2607 "string.m"
  MR_String mercury__string__String_6,
#line 2607 "string.m"
  MR_Integer mercury__string__Index_7,
#line 2607 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2607 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_HashVal_0_11,
#line 2607 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_HashVal_12)
#line 2607 "string.m"
{
#line 2616 "string.m"
  while (MR_TRUE)
#line 2616 "string.m"
    {
#line 2616 "string.m"
      /* tailcall optimized into a loop */
#line 2616 "string.m"
      {
#line 2616 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Index_7 < mercury__string__Length_8);

#line 2616 "string.m"
        if (mercury__string__succeeded)
#line 2612 "string.m"
          {
#line 2612 "string.m"
            MR_Integer mercury__string__C_10;
#line 2612 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_13_13;
#line 2612 "string.m"
            MR_Integer mercury__string__V_14_14;
#line 2612 "string.m"
            MR_Integer mercury__string__STATE_VARIABLE_HashVal_16_16;
#line 2612 "string.m"
            MR_Integer mercury__string__V_17_17;

#line 2139 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash_loop_5_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_6 ;
	Index =  mercury__string__Index_7 ;
		{
#line 2139 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 14342 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__C_10  = Code;
#line 2139 "string.m"
}
#line 2613 "string.m"
            mercury__string__V_14_14 = (mercury__string__STATE_VARIABLE_HashVal_0_11 << (MR_Integer) 5);
#line 2613 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_13_13 = (mercury__string__STATE_VARIABLE_HashVal_0_11 ^ mercury__string__V_14_14);
#line 2614 "string.m"
            mercury__string__STATE_VARIABLE_HashVal_16_16 = (mercury__string__STATE_VARIABLE_HashVal_13_13 ^ mercury__string__C_10);
#line 2615 "string.m"
            mercury__string__V_17_17 = (mercury__string__Index_7 + (MR_Integer) 1);
#line 2615 "string.m"
            /* direct tailcall eliminated */
#line 2615 "string.m"
            {
#line 2615 "string.m"
              MR_Integer mercury__string__Index__tmp_copy_7 = mercury__string__V_17_17;
#line 2615 "string.m"
              MR_Integer mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11 = mercury__string__STATE_VARIABLE_HashVal_16_16;

#line 2615 "string.m"
              mercury__string__STATE_VARIABLE_HashVal_0_11 = mercury__string__STATE_VARIABLE_HashVal_0__tmp_copy_11;
#line 2615 "string.m"
              mercury__string__Index_7 = mercury__string__Index__tmp_copy_7;
#line 2615 "string.m"
            }
#line 2615 "string.m"
            continue;
#line 2612 "string.m"
          }
#line 2616 "string.m"
        else
#line 2615 "string.m"
          *mercury__string__STATE_VARIABLE_HashVal_12 = mercury__string__STATE_VARIABLE_HashVal_0_11;
#line 2616 "string.m"
      }
#line 2616 "string.m"
      break;
#line 2616 "string.m"
    }
#line 2607 "string.m"
}

#line 2577 "string.m"
MR_bool MR_CALL 
mercury__string__codepoint_offset_loop_5_p_0(
#line 2577 "string.m"
  MR_String mercury__string__String_6,
#line 2577 "string.m"
  MR_Integer mercury__string__Offset_7,
#line 2577 "string.m"
  MR_Integer mercury__string__Length_8,
#line 2577 "string.m"
  MR_Integer mercury__string__N_9,
#line 2577 "string.m"
  MR_Integer * mercury__string__Index_10)
#line 2577 "string.m"
{
#line 2580 "string.m"
  while (MR_TRUE)
#line 2580 "string.m"
    {
#line 2580 "string.m"
      /* tailcall optimized into a loop */
#line 2580 "string.m"
      {
#line 2580 "string.m"
        MR_bool mercury__string__succeeded = (mercury__string__Offset_7 < mercury__string__Length_8);

#line 2580 "string.m"
        if (mercury__string__succeeded)
#line 2580 "string.m"
          {
#line 2582 "string.m"
            mercury__string__succeeded = (mercury__string__N_9 == (MR_Integer) 0);
#line 2584 "string.m"
            if (mercury__string__succeeded)
#line 2583 "string.m"
              {
#line 2583 "string.m"
                *mercury__string__Index_10 = mercury__string__Offset_7;
#line 2583 "string.m"
                mercury__string__succeeded = MR_TRUE;
#line 2583 "string.m"
              }
#line 2584 "string.m"
            else
#line 2585 "string.m"
              {
#line 2585 "string.m"
                MR_Integer mercury__string__NextOffset_11;
#line 2585 "string.m"
                MR_Integer mercury__string__V_13_13;
#line 2585 "string.m"
                MR_Integer mercury__string__V_14_14;
#line 1919 "string.m"
                MR_Char mercury__string__V_12_12;

#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 14469 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__NextOffset_11  = NextIndex;
	 mercury__string__V_12_12  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2585 "string.m"
                if (mercury__string__succeeded)
#line 2585 "string.m"
                  {
#line 2586 "string.m"
                    mercury__string__V_14_14 = (MR_Integer) 1;
#line 2586 "string.m"
                    mercury__string__V_13_13 = (mercury__string__N_9 - mercury__string__V_14_14);
#line 2586 "string.m"
                    /* direct tailcall eliminated */
#line 2586 "string.m"
                    {
#line 2586 "string.m"
                      MR_Integer mercury__string__Offset__tmp_copy_7 = mercury__string__NextOffset_11;
#line 2586 "string.m"
                      MR_Integer mercury__string__N__tmp_copy_9 = mercury__string__V_13_13;

#line 2586 "string.m"
                      mercury__string__N_9 = mercury__string__N__tmp_copy_9;
#line 2586 "string.m"
                      mercury__string__Offset_7 = mercury__string__Offset__tmp_copy_7;
#line 2586 "string.m"
                    }
#line 2586 "string.m"
                    continue;
#line 2585 "string.m"
                  }
#line 2585 "string.m"
              }
#line 2580 "string.m"
          }
#line 2580 "string.m"
        return mercury__string__succeeded;
#line 2580 "string.m"
      }
#line 2580 "string.m"
      break;
#line 2580 "string.m"
    }
#line 2577 "string.m"
}

#line 2507 "string.m"
void MR_CALL 
mercury__string__count_utf8_code_units_2_3_p_0(
#line 2507 "string.m"
  MR_Char mercury__string__Char_4,
#line 2507 "string.m"
  MR_Integer mercury__string__STATE_VARIABLE_Length_0_8,
#line 2507 "string.m"
  MR_Integer * mercury__string__STATE_VARIABLE_Length_9)
#line 2507 "string.m"
{
#line 2509 "string.m"
  {
#line 2509 "string.m"
    MR_bool mercury__string__succeeded;
#line 2509 "string.m"
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

#line 14553 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__CharInt_6  = Int;
#line 66 "char.opt"
}
#line 2511 "string.m"
    mercury__string__succeeded = (mercury__string__CharInt_6 <= (MR_Integer) 127);
#line 2513 "string.m"
    if (mercury__string__succeeded)
#line 2512 "string.m"
      {
#line 2512 "string.m"
        *mercury__string__STATE_VARIABLE_Length_9 = (mercury__string__STATE_VARIABLE_Length_0_8 + (MR_Integer) 1);
#line 2512 "string.m"
      }
#line 2513 "string.m"
    else
#line 2515 "string.m"
      {
#line 2515 "string.m"
        MR_Word mercury__string__UTF8_7;

#line 2513 "string.m"
        {
#line 2513 "string.m"
          mercury__string__succeeded = mercury__char__to_utf8_2_p_0(mercury__string__Char_4, &mercury__string__UTF8_7);
        }
#line 2515 "string.m"
        if (mercury__string__succeeded)
#line 2514 "string.m"
          {
#line 2514 "string.m"
            MR_Word mercury__string__TypeCtorInfo_17_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2514 "string.m"
            MR_Integer mercury__string__V_14_14;

#line 78 "list.opt"
            {
#line 78 "list.opt"
              mercury__list__length_2_3_p_0(mercury__string__TypeCtorInfo_17_17, mercury__string__UTF8_7, (MR_Integer) 0, &mercury__string__V_14_14);
            }
#line 2514 "string.m"
            *mercury__string__STATE_VARIABLE_Length_9 = (mercury__string__STATE_VARIABLE_Length_0_8 + mercury__string__V_14_14);
#line 2514 "string.m"
          }
#line 2515 "string.m"
        else
#line 2516 "string.m"
          {
#line 2516 "string.m"
            {
#line 2516 "string.m"
              mercury__require__error_2_p_0((MR_String) "predicate \140string.count_utf8_code_units_2\'/3", (MR_String) "char.to_utf8 failed");
#line 2516 "string.m"
              return;
            }
#line 2516 "string.m"
          }
#line 2515 "string.m"
      }
#line 2509 "string.m"
  }
#line 2507 "string.m"
}

#line 2480 "string.m"
void MR_CALL 
mercury__string__count_codepoints_loop_4_p_0(
#line 2480 "string.m"
  MR_String mercury__string__String_5,
#line 2480 "string.m"
  MR_Integer mercury__string__I_6,
#line 2480 "string.m"
  MR_Integer mercury__string__Count0_7,
#line 2480 "string.m"
  MR_Integer * mercury__string__Count_8)
#line 2480 "string.m"
{
#line 2485 "string.m"
  while (MR_TRUE)
#line 2485 "string.m"
    {
#line 2485 "string.m"
      /* tailcall optimized into a loop */
#line 2485 "string.m"
      {
#line 2485 "string.m"
        MR_bool mercury__string__succeeded;
#line 2485 "string.m"
        MR_Integer mercury__string__J_9;
#line 1919 "string.m"
        MR_Char mercury__string__V_10_10;

#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 14673 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__J_9  = NextIndex;
	 mercury__string__V_10_10  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2485 "string.m"
        if (mercury__string__succeeded)
#line 2484 "string.m"
          {
#line 2484 "string.m"
            MR_Integer mercury__string__V_11_11 = (mercury__string__Count0_7 + (MR_Integer) 1);

#line 2484 "string.m"
            /* direct tailcall eliminated */
#line 2484 "string.m"
            {
#line 2484 "string.m"
              MR_Integer mercury__string__I__tmp_copy_6 = mercury__string__J_9;
#line 2484 "string.m"
              MR_Integer mercury__string__Count0__tmp_copy_7 = mercury__string__V_11_11;

#line 2484 "string.m"
              mercury__string__Count0_7 = mercury__string__Count0__tmp_copy_7;
#line 2484 "string.m"
              mercury__string__I_6 = mercury__string__I__tmp_copy_6;
#line 2484 "string.m"
            }
#line 2484 "string.m"
            continue;
#line 2484 "string.m"
          }
#line 2485 "string.m"
        else
#line 2486 "string.m"
          *mercury__string__Count_8 = mercury__string__Count0_7;
#line 2485 "string.m"
      }
#line 2485 "string.m"
      break;
#line 2485 "string.m"
    }
#line 2480 "string.m"
}

#line 2299 "string.m"
void MR_CALL 
mercury__string__unsafe_set_char_non_null_4_p_0(
#line 2299 "string.m"
  MR_Char mercury__string__Ch_1,
#line 2299 "string.m"
  MR_Integer mercury__string__Index_2,
#line 2299 "string.m"
  MR_String mercury__string__Str0_3,
#line 2299 "string.m"
  MR_String * mercury__string__Str_4)
#line 2299 "string.m"
{
#line 2304 "string.m"
  {
#line 2304 "string.m"
    MR_bool mercury__string__succeeded;

#line 2308 "string.m"
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
#line 2308 "string.m"

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

#line 14776 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_4  = Str;
#line 2308 "string.m"
}
#line 2304 "string.m"
  }
#line 2299 "string.m"
}

#line 2175 "string.m"
MR_bool MR_CALL 
mercury__string__set_char_non_null_4_p_0(
#line 2175 "string.m"
  MR_Char mercury__string__Ch_1,
#line 2175 "string.m"
  MR_Integer mercury__string__Index_2,
#line 2175 "string.m"
  MR_String mercury__string__Str0_3,
#line 2175 "string.m"
  MR_String * mercury__string__Str_4)
#line 2175 "string.m"
{
#line 2180 "string.m"
  {
#line 2180 "string.m"
    MR_bool mercury__string__succeeded;

#line 2184 "string.m"
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
#line 2184 "string.m"

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

#line 14849 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_4  = Str;
#line 2184 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2180 "string.m"
    return mercury__string__succeeded;
#line 2180 "string.m"
  }
#line 2175 "string.m"
}

#line 2107 "string.m"
MR_bool MR_CALL 
mercury__string__index_check_2_p_0(
#line 2107 "string.m"
  MR_Integer mercury__string__Index_1,
#line 2107 "string.m"
  MR_Integer mercury__string__Length_2)
#line 2107 "string.m"
{
#line 2109 "string.m"
  {
#line 2109 "string.m"
    MR_bool mercury__string__succeeded;

#line 2113 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_check_2_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_1 ;
	Length =  mercury__string__Length_2 ;
		{
#line 2113 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 14902 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2113 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2109 "string.m"
    return mercury__string__succeeded;
#line 2109 "string.m"
  }
#line 2107 "string.m"
}

#line 1853 "string.m"
MR_bool MR_CALL 
mercury__string__unsafe_index_2_3_p_0(
#line 1853 "string.m"
  MR_String mercury__string__Str_1,
#line 1853 "string.m"
  MR_Integer mercury__string__Index_2,
#line 1853 "string.m"
  MR_Char * mercury__string__Ch_3)
#line 1853 "string.m"
{
#line 1855 "string.m"
  {
#line 1855 "string.m"
    MR_bool mercury__string__succeeded;

#line 1859 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_2_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Index =  mercury__string__Index_2 ;
		{
#line 1859 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 14955 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Ch_3  = Ch;
#line 1859 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1855 "string.m"
    return mercury__string__succeeded;
#line 1855 "string.m"
  }
#line 1853 "string.m"
}

#line 1666 "string.m"
void MR_CALL 
mercury__string__to_code_unit_list_loop_4_p_0(
#line 1666 "string.m"
  MR_String mercury__string__String_5,
#line 1666 "string.m"
  MR_Integer mercury__string__Index_6,
#line 1666 "string.m"
  MR_Integer mercury__string__End_7,
#line 1666 "string.m"
  MR_Word * mercury__string__List_8)
#line 1666 "string.m"
{
#line 1672 "string.m"
  {
#line 1672 "string.m"
    MR_bool mercury__string__succeeded = (mercury__string__Index_6 >= mercury__string__End_7);

#line 1672 "string.m"
    if (mercury__string__succeeded)
#line 1671 "string.m"
      *mercury__string__List_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1672 "string.m"
    else
#line 1673 "string.m"
      {
#line 1673 "string.m"
        MR_Integer mercury__string__Code_9;
#line 1673 "string.m"
        MR_Word mercury__string__Tail_10;
#line 1673 "string.m"
        MR_Integer mercury__string__V_11_11;

#line 2139 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_code_unit_list_loop_4_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__String_5 ;
	Index =  mercury__string__Index_6 ;
		{
#line 2139 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 15021 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Code_9  = Code;
#line 2139 "string.m"
}
#line 1674 "string.m"
        mercury__string__V_11_11 = (mercury__string__Index_6 + (MR_Integer) 1);
#line 1674 "string.m"
        {
#line 1674 "string.m"
          mercury__string__to_code_unit_list_loop_4_p_0(mercury__string__String_5, mercury__string__V_11_11, mercury__string__End_7, &mercury__string__Tail_10);
        }
#line 1675 "string.m"
        {
#line 1675 "string.m"
          MR_Word base;
#line 1675 "string.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1675 "string.m"
          *mercury__string__List_8 = base;
#line 1675 "string.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__string__Code_9));
#line 1675 "string.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__string__Tail_10));
#line 1675 "string.m"
        }
#line 1673 "string.m"
      }
#line 1672 "string.m"
  }
#line 1666 "string.m"
}

#line 1337 "string.m"
void MR_CALL 
mercury__string__to_char_list_forward_2_p_0(
#line 1337 "string.m"
  MR_String mercury__string__Str_1,
#line 1337 "string.m"
  MR_Word * mercury__string__CharList_2)
#line 1337 "string.m"
{
#line 1339 "string.m"
  {
#line 1339 "string.m"
    MR_bool mercury__string__succeeded;

#line 1343 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_char_list_forward_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_1 ;
		{
#line 1343 "string.m"
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
#line 15094 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__CharList_2  = CharList;
#line 1343 "string.m"
}
#line 1339 "string.m"
  }
#line 1337 "string.m"
}

#line 1287 "string.m"
void MR_CALL 
mercury__string__format_3_p_0(
#line 1287 "string.m"
  MR_String mercury__string__FormatString_4,
#line 1287 "string.m"
  MR_Word mercury__string__PolyList_5,
#line 1287 "string.m"
  MR_String * mercury__string__String_6)
#line 1287 "string.m"
{
#line 5308 "string.m"
  {
#line 5308 "string.m"
    MR_bool mercury__string__succeeded;

#line 5308 "string.m"
    {
#line 5308 "string.m"
      mercury__string__format__format_impl_3_p_0(mercury__string__FormatString_4, mercury__string__PolyList_5, mercury__string__String_6);
#line 5308 "string.m"
      return;
    }
#line 5308 "string.m"
  }
#line 1287 "string.m"
}

#line 1286 "string.m"
MR_String MR_CALL 
mercury__string__format_2_f_0(
#line 1286 "string.m"
  MR_String mercury__string__S1_4,
#line 1286 "string.m"
  MR_Word mercury__string__PT_5)
#line 1286 "string.m"
{
#line 5308 "string.m"
  {
#line 5308 "string.m"
    MR_bool mercury__string__succeeded;
#line 5308 "string.m"
    MR_String mercury__string__S2_6;

#line 5308 "string.m"
    {
#line 5308 "string.m"
      mercury__string__format__format_impl_3_p_0(mercury__string__S1_4, mercury__string__PT_5, &mercury__string__S2_6);
    }
#line 5308 "string.m"
    return mercury__string__S2_6;
#line 5308 "string.m"
  }
#line 1286 "string.m"
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
#line 15193 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15195 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 15198 "string.c"
    {
#line 15200 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15203 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_3(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__Priority_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__RevStrings_9_15);
    }
#line 15212 "string.c"
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
#line 15260 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15262 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 15265 "string.c"
    {
#line 15267 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15270 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_2(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__Priority_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__RevStrings_9_15);
    }
#line 15279 "string.c"
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
#line 15327 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15329 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 15332 "string.c"
    {
#line 15334 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15337 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__Priority_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__RevStrings_9_15);
    }
#line 15346 "string.c"
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
#line 15394 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_26, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15396 "string.c"
    MR_Box mercury__string__conv1_V_13_24;

#line 15399 "string.c"
    {
#line 15401 "string.c"
      mercury__string__conv1_V_13_24 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_26), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15404 "string.c"
    mercury__string__V_13_24 = ((MR_Integer) mercury__string__conv1_V_13_24);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_23 = (mercury__string__V_13_24 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_0(mercury__string__TypeInfo_for_T_9, mercury__string__NonCanon_5, mercury__string__Priority_10_23, mercury__string__X_7, mercury__string__V_10_14, &mercury__string__RevStrings_9_15);
    }
#line 15413 "string.c"
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
#line 15459 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_27, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15461 "string.c"
    MR_Box mercury__string__conv1_V_13_25;

#line 15464 "string.c"
    {
#line 15466 "string.c"
      mercury__string__conv1_V_13_25 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_27), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15469 "string.c"
    mercury__string__V_13_25 = ((MR_Integer) mercury__string__conv1_V_13_25);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_24 = (mercury__string__V_13_25 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_6, (MR_Integer) 1, mercury__string__Priority_10_24, mercury__string__X_5, mercury__string__V_10_15, &mercury__string__RevStrings_9_16);
    }
#line 15478 "string.c"
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
#line 15526 "string.c"
    MR_Box MR_CALL (* mercury__string__func_0)(MR_Box, MR_Box);
#line 15528 "string.c"
    MR_Box mercury__string__conv1_V_13_23;

#line 32 "ops.opt"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 22 "string.to_string.opt"
    mercury__string__V_10_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 15535 "string.c"
    mercury__string__TypeClassInfo_for_op_table_25 = (MR_Word) &mercury__string_scalar_common_1[1];
#line 15537 "string.c"
    mercury__string__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mercury__string__TypeClassInfo_for_op_table_25, (MR_Integer) 0)), (MR_Integer) 12)));
#line 15539 "string.c"
    {
#line 15541 "string.c"
      mercury__string__conv1_V_13_23 = mercury__string__func_0(((MR_Box) mercury__string__TypeClassInfo_for_op_table_25), ((MR_Box) ((MR_Integer) 0)));
    }
#line 15544 "string.c"
    mercury__string__V_13_23 = ((MR_Integer) mercury__string__conv1_V_13_23);
#line 27 "string.to_string.opt"
    mercury__string__Priority_10_22 = (mercury__string__V_13_23 + (MR_Integer) 1);
#line 30 "string.to_string.opt"
    {
#line 30 "string.to_string.opt"
      mercury__string__to_string__value_to_revstrings_prio_6_p_1(mercury__string__TypeInfo_for_T_4, (MR_Integer) 1, mercury__string__Priority_10_22, mercury__string__X_3, mercury__string__V_10_13, &mercury__string__RevStrings_9_14);
    }
#line 15553 "string.c"
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
#line 5281 "string.m"
  {
#line 5281 "string.m"
    MR_bool mercury__string__succeeded;
#line 5281 "string.m"
    MR_String mercury__string__S_4;
#line 5281 "string.m"
    MR_Integer mercury__string__Int_7 = (MR_Integer) mercury__string__P_3;
#line 5281 "string.m"
    MR_String mercury__string__V_9_9;
#line 5281 "string.m"
    MR_String mercury__string__V_10_10;

#line 5046 "string.m"
    {
#line 5046 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__Int_7, (MR_Integer) 16, &mercury__string__V_10_10);
    }
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_c_pointer_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_10_10 ;
	S2 =  (MR_String) ")" ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15617 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_9_9  = S3;
#line 3128 "string.m"
}
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_c_pointer_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__V_9_9 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15644 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S_4  = S3;
#line 3128 "string.m"
}
#line 5281 "string.m"
    return mercury__string__S_4;
#line 5281 "string.m"
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
#line 5281 "string.m"
  {
#line 5281 "string.m"
    MR_bool mercury__string__succeeded;
#line 5281 "string.m"
    MR_Integer mercury__string__Int_5 = (MR_Integer) mercury__string__C_Pointer_3;
#line 5281 "string.m"
    MR_String mercury__string__V_7_7;
#line 5281 "string.m"
    MR_String mercury__string__V_8_8;

#line 5046 "string.m"
    {
#line 5046 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__Int_5, (MR_Integer) 16, &mercury__string__V_8_8);
    }
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_2_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_8_8 ;
	S2 =  (MR_String) ")" ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15703 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = S3;
#line 3128 "string.m"
}
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_2_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__V_7_7 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15730 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_4  = S3;
#line 3128 "string.m"
}
#line 5281 "string.m"
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
#line 5281 "string.m"
  {
#line 5281 "string.m"
    MR_bool mercury__string__succeeded;
#line 5281 "string.m"
    MR_String mercury__string__S_4;
#line 5281 "string.m"
    MR_Integer mercury__string__Int_7 = (MR_Integer) mercury__string__P_3;
#line 5281 "string.m"
    MR_String mercury__string__V_9_9;
#line 5281 "string.m"
    MR_String mercury__string__V_10_10;

#line 5046 "string.m"
    {
#line 5046 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__Int_7, (MR_Integer) 16, &mercury__string__V_10_10);
    }
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__V_10_10 ;
	S2 =  (MR_String) ")" ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15787 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_9_9  = S3;
#line 3128 "string.m"
}
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__c_pointer_to_string_1_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  (MR_String) "c_pointer(0x" ;
	S2 =  mercury__string__V_9_9 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 15814 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S_4  = S3;
#line 3128 "string.m"
}
#line 5281 "string.m"
    return mercury__string__S_4;
#line 5281 "string.m"
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
#line 5153 "string.m"
  {
#line 5153 "string.m"
    MR_bool mercury__string__succeeded;
#line 5153 "string.m"
    MR_String mercury__string__HeadVar__2_2;

#line 5157 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_float_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Float_3 ;
		{
#line 5157 "string.m"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 15859 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__2_2  = Str;
#line 5157 "string.m"
}
#line 5153 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5153 "string.m"
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
#line 5153 "string.m"
  {
#line 5153 "string.m"
    MR_bool mercury__string__succeeded;

#line 5157 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_2_p_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Flt_1 ;
		{
#line 5157 "string.m"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 15904 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_2  = Str;
#line 5157 "string.m"
}
#line 5153 "string.m"
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
#line 5153 "string.m"
  {
#line 5153 "string.m"
    MR_bool mercury__string__succeeded;
#line 5153 "string.m"
    MR_String mercury__string__S2_4;

#line 5157 "string.m"
{
#define MR_PROC_LABEL mercury__string__float_to_string_1_f_0

	MR_Float Flt;
	MR_String Str;

	Flt =  mercury__string__Float_3 ;
		{
#line 5157 "string.m"
{
    /*
    ** For efficiency reasons we duplicate the C implementation
    ** of string.lowlevel_float_to_string.
    */
    MR_float_to_string(Flt, Str, MR_ALLOC_ID);
}
#line 15947 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_4  = Str;
#line 5157 "string.m"
}
#line 5153 "string.m"
    return mercury__string__S2_4;
#line 5153 "string.m"
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
#line 5092 "string.m"
  {
#line 5092 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 2 <= mercury__string__Base_7);
#line 5092 "string.m"
    MR_String mercury__string__Str_10;
#line 5093 "string.m"
    MR_Integer mercury__string__V_12_12;

#line 5093 "string.m"
    if (mercury__string__succeeded)
#line 5093 "string.m"
      {
#line 5093 "string.m"
        mercury__string__V_12_12 = (MR_Integer) 36;
#line 5093 "string.m"
        mercury__string__succeeded = (mercury__string__Base_7 <= mercury__string__V_12_12);
#line 5093 "string.m"
      }
#line 5095 "string.m"
    if (mercury__string__succeeded)
#line 5094 "string.m"
      {
#line 5094 "string.m"
      }
#line 5095 "string.m"
    else
#line 5096 "string.m"
      {
#line 5096 "string.m"
        {
#line 5096 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.int_to_base_string_group: invalid base");
        }
#line 5096 "string.m"
      }
#line 5098 "string.m"
    {
#line 5098 "string.m"
      mercury__string__int_to_base_string_group_1_5_p_0(mercury__string__N_6, mercury__string__Base_7, mercury__string__GroupLength_8, mercury__string__Sep_9, &mercury__string__Str_10);
    }
#line 5092 "string.m"
    return mercury__string__Str_10;
#line 5092 "string.m"
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
#line 5089 "string.m"
  {
#line 5089 "string.m"
    MR_bool mercury__string__succeeded;
#line 5089 "string.m"
    MR_String mercury__string__HeadVar__2_2;

#line 5090 "string.m"
    {
#line 5090 "string.m"
      return mercury__string__HeadVar__2_2 = mercury__string__int_to_base_string_group_4_f_0(mercury__string__N_3, (MR_Integer) 10, (MR_Integer) 3, (MR_String) ",");
    }
#line 5089 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5089 "string.m"
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
#line 5048 "string.m"
  {
#line 5048 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 2 <= mercury__string__Base_5);
#line 5049 "string.m"
    MR_Integer mercury__string__V_8_8;

#line 5049 "string.m"
    if (mercury__string__succeeded)
#line 5049 "string.m"
      {
#line 5049 "string.m"
        mercury__string__V_8_8 = (MR_Integer) 36;
#line 5049 "string.m"
        mercury__string__succeeded = (mercury__string__Base_5 <= mercury__string__V_8_8);
#line 5049 "string.m"
      }
#line 5051 "string.m"
    if (mercury__string__succeeded)
#line 5050 "string.m"
      {
#line 5050 "string.m"
      }
#line 5051 "string.m"
    else
#line 5052 "string.m"
      {
#line 5052 "string.m"
        {
#line 5052 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.int_to_base_string: invalid base");
#line 5052 "string.m"
          return;
        }
#line 5052 "string.m"
      }
#line 5054 "string.m"
    {
#line 5054 "string.m"
      mercury__string__int_to_base_string_1_3_p_0(mercury__string__N_4, mercury__string__Base_5, mercury__string__Str_6);
#line 5054 "string.m"
      return;
    }
#line 5048 "string.m"
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
#line 5046 "string.m"
  {
#line 5046 "string.m"
    MR_bool mercury__string__succeeded;
#line 5046 "string.m"
    MR_String mercury__string__S2_6;

#line 5046 "string.m"
    {
#line 5046 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N1_4, mercury__string__N2_5, &mercury__string__S2_6);
    }
#line 5046 "string.m"
    return mercury__string__S2_6;
#line 5046 "string.m"
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
#line 5037 "string.m"
  {
#line 5037 "string.m"
    MR_bool mercury__string__succeeded;
#line 5037 "string.m"
    MR_String mercury__string__HeadVar__2_2;

#line 5038 "string.m"
    {
#line 5038 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, &mercury__string__HeadVar__2_2);
    }
#line 5037 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5037 "string.m"
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
#line 5037 "string.m"
  {
#line 5037 "string.m"
    MR_bool mercury__string__succeeded;

#line 5038 "string.m"
    {
#line 5038 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, mercury__string__Str_4);
#line 5038 "string.m"
      return;
    }
#line 5037 "string.m"
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
#line 5037 "string.m"
  {
#line 5037 "string.m"
    MR_bool mercury__string__succeeded;
#line 5037 "string.m"
    MR_String mercury__string__S1_4;

#line 5038 "string.m"
    {
#line 5038 "string.m"
      mercury__string__int_to_base_string_3_p_0(mercury__string__N_3, (MR_Integer) 10, &mercury__string__S1_4);
    }
#line 5037 "string.m"
    return mercury__string__S1_4;
#line 5037 "string.m"
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
#line 5027 "string.m"
  {
#line 5027 "string.m"
    MR_bool mercury__string__succeeded;
#line 5027 "string.m"
    MR_String mercury__string__HeadVar__2_2;
#line 5027 "string.m"
    MR_Word mercury__string__V_8_8;
#line 5027 "string.m"
    MR_Word mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1421 "string.m"
    MR_String mercury__string__Str0_18;

#line 5028 "string.m"
    {
#line 5028 "string.m"
      mercury__string__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5028 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_8_8, 0) = ((MR_Box) (MR_Word) (mercury__string__Char_3));
#line 5028 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_8_8, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 5028 "string.m"
    }
#line 1419 "string.m"
    {
#line 1419 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_8_8, &mercury__string__Str0_18);
    }
#line 1421 "string.m"
    if (mercury__string__succeeded)
#line 1420 "string.m"
      mercury__string__HeadVar__2_2 = mercury__string__Str0_18;
#line 1421 "string.m"
    else
#line 1422 "string.m"
      {
#line 1422 "string.m"
        {
#line 1422 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1422 "string.m"
      }
#line 5027 "string.m"
    return mercury__string__HeadVar__2_2;
#line 5027 "string.m"
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
#line 5027 "string.m"
  {
#line 5027 "string.m"
    MR_bool mercury__string__succeeded;
#line 5027 "string.m"
    MR_Word mercury__string__TypeInfo_8_8;
#line 5027 "string.m"
    MR_Word mercury__string__V_5_5;
#line 5027 "string.m"
    MR_Word mercury__string__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 5027 "string.m"
    MR_Word mercury__string__V_7_7;

#line 1343 "string.m"
{
#define MR_PROC_LABEL mercury__string__char_to_string_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__String_4 ;
		{
#line 1343 "string.m"
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
#line 16316 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_5_5  = CharList;
#line 1343 "string.m"
}
#line 5028 "string.m"
    mercury__string__succeeded = ((MR_tag((MR_Word) mercury__string__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 5028 "string.m"
    if (mercury__string__succeeded)
#line 5028 "string.m"
      {
#line 5028 "string.m"
        *mercury__string__Char_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_5_5, (MR_Integer) 0)));
#line 5028 "string.m"
        mercury__string__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__V_5_5, (MR_Integer) 1)));
#line 16333 "string.c"
        mercury__string__TypeInfo_8_8 = (MR_Word) &mercury__string_scalar_common_1[2];
#line 5028 "string.m"
        {
#line 5028 "string.m"
          return mercury__string__succeeded = mercury__builtin__unify_2_p_0(mercury__string__TypeInfo_8_8, ((MR_Box) (mercury__string__V_6_6)), ((MR_Box) (mercury__string__V_7_7)));
        }
#line 5028 "string.m"
      }
#line 5027 "string.m"
    return mercury__string__succeeded;
#line 5027 "string.m"
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
#line 5027 "string.m"
  {
#line 5027 "string.m"
    MR_bool mercury__string__succeeded;
#line 5027 "string.m"
    MR_Word mercury__string__V_5_5;
#line 5027 "string.m"
    MR_Word mercury__string__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1421 "string.m"
    MR_String mercury__string__Str0_15;

#line 5028 "string.m"
    {
#line 5028 "string.m"
      mercury__string__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5028 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_5_5, 0) = ((MR_Box) (MR_Word) (mercury__string__Char_3));
#line 5028 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_5_5, 1) = ((MR_Box) (mercury__string__V_6_6));
#line 5028 "string.m"
    }
#line 1419 "string.m"
    {
#line 1419 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_5_5, &mercury__string__Str0_15);
    }
#line 1421 "string.m"
    if (mercury__string__succeeded)
#line 1420 "string.m"
      *mercury__string__String_4 = mercury__string__Str0_15;
#line 1421 "string.m"
    else
#line 1422 "string.m"
      {
#line 1422 "string.m"
        {
#line 1422 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1422 "string.m"
          return;
        }
#line 1422 "string.m"
      }
#line 5027 "string.m"
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
#line 5027 "string.m"
  {
#line 5027 "string.m"
    MR_bool mercury__string__succeeded;
#line 5027 "string.m"
    MR_String mercury__string__S1_4;
#line 5027 "string.m"
    MR_Word mercury__string__V_7_7;
#line 5027 "string.m"
    MR_Word mercury__string__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1421 "string.m"
    MR_String mercury__string__Str0_17;

#line 5028 "string.m"
    {
#line 5028 "string.m"
      mercury__string__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 5028 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 0) = ((MR_Box) (MR_Word) (mercury__string__C_3));
#line 5028 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 1) = ((MR_Box) (mercury__string__V_8_8));
#line 5028 "string.m"
    }
#line 1419 "string.m"
    {
#line 1419 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_7_7, &mercury__string__Str0_17);
    }
#line 1421 "string.m"
    if (mercury__string__succeeded)
#line 1420 "string.m"
      mercury__string__S1_4 = mercury__string__Str0_17;
#line 1421 "string.m"
    else
#line 1422 "string.m"
      {
#line 1422 "string.m"
        {
#line 1422 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1422 "string.m"
      }
#line 5027 "string.m"
    return mercury__string__S1_4;
#line 5027 "string.m"
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
#line 5018 "string.m"
  {
#line 5018 "string.m"
    MR_bool mercury__string__succeeded;
#line 5018 "string.m"
    MR_Float mercury__string__Float_4;
#line 5018 "string.m"
    MR_Float mercury__string__FloatPrime_5;

#line 4914 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_to_float_1_f_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__FloatString_3 ;
		{
#line 4914 "string.m"
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
#line 16501 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__FloatPrime_5  = FloatVal;
#line 4914 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 5018 "string.m"
    if (mercury__string__succeeded)
#line 5017 "string.m"
      mercury__string__Float_4 = mercury__string__FloatPrime_5;
#line 5018 "string.m"
    else
#line 5019 "string.m"
      {
#line 5019 "string.m"
        {
#line 5019 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_to_float/1: conversion failed.");
        }
#line 5019 "string.m"
      }
#line 5018 "string.m"
    return mercury__string__Float_4;
#line 5018 "string.m"
  }
#line 1111 "string.m"
}

#line 1106 "string.m"
MR_bool MR_CALL 
mercury__string__to_float_2_p_0(
#line 1106 "string.m"
  MR_String mercury__string__FloatString_1,
#line 1106 "string.m"
  MR_Float * mercury__string__FloatVal_2)
#line 1106 "string.m"
{
#line 4910 "string.m"
  {
#line 4910 "string.m"
    MR_bool mercury__string__succeeded;

#line 4914 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_float_2_p_0

	MR_String FloatString;
	MR_Float FloatVal;
	MR_bool SUCCESS_INDICATOR;

	FloatString =  mercury__string__FloatString_1 ;
		{
#line 4914 "string.m"
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
#line 16569 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__FloatVal_2  = FloatVal;
#line 4914 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4910 "string.m"
    return mercury__string__succeeded;
#line 4910 "string.m"
  }
#line 1106 "string.m"
}

#line 1101 "string.m"
MR_Integer MR_CALL 
mercury__string__det_base_string_to_int_2_f_0(
#line 1101 "string.m"
  MR_Integer mercury__string__Base_4,
#line 1101 "string.m"
  MR_String mercury__string__S_5)
#line 1101 "string.m"
{
#line 4884 "string.m"
  {
#line 4884 "string.m"
    MR_bool mercury__string__succeeded;
#line 4884 "string.m"
    MR_Integer mercury__string__N_6;
#line 4884 "string.m"
    MR_Integer mercury__string__N0_7;

#line 4882 "string.m"
    {
#line 4882 "string.m"
      mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0(mercury__string__Base_4, mercury__string__S_5, &mercury__string__N0_7);
    }
#line 4884 "string.m"
    if (mercury__string__succeeded)
#line 4883 "string.m"
      mercury__string__N_6 = mercury__string__N0_7;
#line 4884 "string.m"
    else
#line 4885 "string.m"
      {
#line 4885 "string.m"
        {
#line 4885 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_base_string_to_int: conversion failed");
        }
#line 4885 "string.m"
      }
#line 4884 "string.m"
    return mercury__string__N_6;
#line 4884 "string.m"
  }
#line 1101 "string.m"
}

#line 1094 "string.m"
MR_bool MR_CALL 
mercury__string__base_string_to_int_3_p_0(
#line 1094 "string.m"
  MR_Integer mercury__string__Base_4,
#line 1094 "string.m"
  MR_String mercury__string__String_5,
#line 1094 "string.m"
  MR_Integer * mercury__string__Int_6)
#line 1094 "string.m"
{
#line 4868 "string.m"
  {
#line 4868 "string.m"
    MR_bool mercury__string__succeeded;
#line 4868 "string.m"
    MR_Char mercury__string__Char_7;
#line 4868 "string.m"
    MR_Integer mercury__string__End_8;
#line 4868 "string.m"
    MR_Integer mercury__string__Len_36;
#line 1849 "string.m"
    MR_Char mercury__string__CharPrime_48;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 16668 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_36  = Length;
#line 2379 "string.m"
}
#line 2113 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__string__Len_36 ;
		{
#line 2113 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 16697 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2113 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4868 "string.m"
    if (mercury__string__succeeded)
#line 4868 "string.m"
      {
#line 1859 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_5 ;
	Index =  (MR_Integer) 0 ;
		{
#line 1859 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 16731 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_48  = Ch;
#line 1859 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1849 "string.m"
        if (mercury__string__succeeded)
#line 1848 "string.m"
          mercury__string__Char_7 = mercury__string__CharPrime_48;
#line 1849 "string.m"
        else
#line 1850 "string.m"
          {
#line 1850 "string.m"
            {
#line 1850 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
            }
#line 1850 "string.m"
          }
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 16769 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_8  = Length;
#line 2379 "string.m"
}
#line 4871 "string.m"
        mercury__string__succeeded = (mercury__string__Char_7 == (MR_Char) 45);
#line 4874 "string.m"
        if (mercury__string__succeeded)
#line 4872 "string.m"
          {
#line 4872 "string.m"
            MR_Integer mercury__string__V_12_12;
#line 4872 "string.m"
            MR_Integer mercury__string__V_13_13;
#line 4872 "string.m"
            MR_Integer mercury__string__Start_63;
#line 4872 "string.m"
            MR_Integer mercury__string__End_64;
#line 4872 "string.m"
            MR_Integer mercury__string__V_66_66;
#line 4539 "string.m"
            MR_Integer mercury__string__V_65_65;

#line 4872 "string.m"
            mercury__string__succeeded = (mercury__string__End_8 > (MR_Integer) 1);
#line 4872 "string.m"
            if (mercury__string__succeeded)
#line 4872 "string.m"
              {
#line 4873 "string.m"
                mercury__string__V_12_12 = (MR_Integer) 1;
#line 4873 "string.m"
                mercury__string__V_13_13 = (MR_Integer) 0;
#line 4539 "string.m"
                mercury__string__V_65_65 = (MR_Integer) 0;
#line 79 "int.opt"
                mercury__string__Start_63 = mercury__string__V_12_12;
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__base_string_to_int_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 16822 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_66_66  = Length;
#line 2379 "string.m"
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
#line 4541 "string.m"
                {
#line 4541 "string.m"
                  return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_50_95_95_91_50_93_95_48_6_p_0(mercury__string__Base_4, mercury__string__String_5, mercury__string__Start_63, mercury__string__End_64, mercury__string__V_13_13, mercury__string__Int_6);
                }
#line 4872 "string.m"
              }
#line 4872 "string.m"
          }
#line 4874 "string.m"
        else
#line 4877 "string.m"
          {
#line 4874 "string.m"
            mercury__string__succeeded = (mercury__string__Char_7 == (MR_Char) 43);
#line 4877 "string.m"
            if (mercury__string__succeeded)
#line 4875 "string.m"
              {
#line 4875 "string.m"
                MR_Integer mercury__string__V_16_16;
#line 4875 "string.m"
                MR_Integer mercury__string__V_17_17;

#line 4875 "string.m"
                mercury__string__succeeded = (mercury__string__End_8 > (MR_Integer) 1);
#line 4875 "string.m"
                if (mercury__string__succeeded)
#line 4875 "string.m"
                  {
#line 4876 "string.m"
                    mercury__string__V_16_16 = (MR_Integer) 1;
#line 4876 "string.m"
                    mercury__string__V_17_17 = (MR_Integer) 0;
#line 4876 "string.m"
                    {
#line 4876 "string.m"
                      return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(mercury__string__Base_4, mercury__string__String_5, mercury__string__V_16_16, mercury__string__End_8, mercury__string__V_17_17, mercury__string__Int_6);
                    }
#line 4875 "string.m"
                  }
#line 4875 "string.m"
              }
#line 4877 "string.m"
            else
#line 4878 "string.m"
              {
#line 4878 "string.m"
                {
#line 4878 "string.m"
                  return mercury__string__succeeded = mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_95_104_111_49_49_95_95_91_50_93_95_48_6_p_0(mercury__string__Base_4, mercury__string__String_5, (MR_Integer) 0, mercury__string__End_8, (MR_Integer) 0, mercury__string__Int_6);
                }
#line 4878 "string.m"
              }
#line 4877 "string.m"
          }
#line 4868 "string.m"
      }
#line 4868 "string.m"
    return mercury__string__succeeded;
#line 4868 "string.m"
  }
#line 1094 "string.m"
}

#line 1085 "string.m"
MR_Integer MR_CALL 
mercury__string__det_to_int_1_f_0(
#line 1085 "string.m"
  MR_String mercury__string__S_3)
#line 1085 "string.m"
{
#line 4866 "string.m"
  {
#line 4866 "string.m"
    MR_bool mercury__string__succeeded;
#line 4866 "string.m"
    MR_Integer mercury__string__HeadVar__2_2;
#line 4884 "string.m"
    MR_Integer mercury__string__N0_8;

#line 4882 "string.m"
    {
#line 4882 "string.m"
      mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, mercury__string__S_3, &mercury__string__N0_8);
    }
#line 4884 "string.m"
    if (mercury__string__succeeded)
#line 4883 "string.m"
      mercury__string__HeadVar__2_2 = mercury__string__N0_8;
#line 4884 "string.m"
    else
#line 4885 "string.m"
      {
#line 4885 "string.m"
        {
#line 4885 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_base_string_to_int: conversion failed");
        }
#line 4885 "string.m"
      }
#line 4866 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4866 "string.m"
  }
#line 1085 "string.m"
}

#line 1079 "string.m"
MR_bool MR_CALL 
mercury__string__to_int_2_p_0(
#line 1079 "string.m"
  MR_String mercury__string__String_3,
#line 1079 "string.m"
  MR_Integer * mercury__string__Int_4)
#line 1079 "string.m"
{
#line 4863 "string.m"
  {
#line 4863 "string.m"
    MR_bool mercury__string__succeeded;

#line 4864 "string.m"
    {
#line 4864 "string.m"
      return mercury__string__succeeded = mercury__string__base_string_to_int_3_p_0((MR_Integer) 10, mercury__string__String_3, mercury__string__Int_4);
    }
#line 4863 "string.m"
    return mercury__string__succeeded;
#line 4863 "string.m"
  }
#line 1079 "string.m"
}

#line 1067 "string.m"
MR_Word MR_CALL 
mercury__string__string_to_doc_1_f_0(
#line 1067 "string.m"
  MR_String mercury__string__S_3)
#line 1067 "string.m"
{
#line 4856 "string.m"
  {
#line 4856 "string.m"
    MR_bool mercury__string__succeeded;
#line 4856 "string.m"
    MR_Word mercury__string__HeadVar__2_2;
#line 4856 "string.m"
    MR_Word mercury__string__V_4_4;
#line 4856 "string.m"
    MR_Word mercury__string__V_5_5 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_5[0]);
#line 4856 "string.m"
    MR_Word mercury__string__V_7_7;
#line 4856 "string.m"
    MR_Word mercury__string__V_8_8;
#line 4856 "string.m"
    MR_Word mercury__string__V_9_9;
#line 4856 "string.m"
    MR_Word mercury__string__V_12_12;

#line 4856 "string.m"
    {
#line 4856 "string.m"
      mercury__string__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 4856 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_8_8, 0) = ((MR_Box) (mercury__string__S_3));
#line 4856 "string.m"
    }
#line 4856 "string.m"
    mercury__string__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4856 "string.m"
    mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__string_scalar_common_1[3]);
#line 4856 "string.m"
    {
#line 4856 "string.m"
      mercury__string__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4856 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 0) = ((MR_Box) (mercury__string__V_8_8));
#line 4856 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_7_7, 1) = ((MR_Box) (mercury__string__V_9_9));
#line 4856 "string.m"
    }
#line 4856 "string.m"
    {
#line 4856 "string.m"
      mercury__string__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4856 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_4_4, 0) = ((MR_Box) (mercury__string__V_5_5));
#line 4856 "string.m"
      MR_hl_field(MR_mktag(1), mercury__string__V_4_4, 1) = ((MR_Box) (mercury__string__V_7_7));
#line 4856 "string.m"
    }
#line 4856 "string.m"
    {
#line 4856 "string.m"
      mercury__string__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 4856 "string.m"
      MR_hl_field(MR_mktag(2), mercury__string__HeadVar__2_2, 0) = ((MR_Box) (mercury__string__V_4_4));
#line 4856 "string.m"
    }
#line 4856 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4856 "string.m"
  }
#line 1067 "string.m"
}

#line 1057 "string.m"
MR_String MR_CALL 
mercury__string__format_table_max_2_f_0(
#line 1057 "string.m"
  MR_Word mercury__string__ColumnsLimits_4,
#line 1057 "string.m"
  MR_String mercury__string__Separator_5)
#line 1057 "string.m"
{
#line 4699 "string.m"
  {
#line 4699 "string.m"
    MR_bool mercury__string__succeeded;
#line 4699 "string.m"
    MR_String mercury__string__Table_6;
#line 4699 "string.m"
    MR_Word mercury__string__TypeCtorInfo_23_23;
#line 4699 "string.m"
    MR_Word mercury__string__MaxWidthsSenses_7;
#line 4699 "string.m"
    MR_Word mercury__string__Columns_8;
#line 4699 "string.m"
    MR_Integer mercury__string__SepLen_9;
#line 4699 "string.m"
    MR_Word mercury__string__RevRows_10;
#line 4699 "string.m"
    MR_Word mercury__string__Rows_11;
#line 4699 "string.m"
    MR_Word mercury__string__V_14_14;

#line 4700 "string.m"
    {
#line 4700 "string.m"
      mercury__string__MaxWidthsSenses_7 = mercury__string__map__ho14_2_f_in__list_0(mercury__string__ColumnsLimits_4);
    }
#line 4701 "string.m"
    {
#line 4701 "string.m"
      mercury__string__Columns_8 = mercury__string__map__ho13_2_f_in__list_0(mercury__string__ColumnsLimits_4);
    }
#line 2439 "string.m"
    {
#line 2439 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__Separator_5, &mercury__string__SepLen_9);
    }
#line 4703 "string.m"
    mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4703 "string.m"
    {
#line 4703 "string.m"
      mercury__string__generate_rows_6_p_0(mercury__string__MaxWidthsSenses_7, mercury__string__Separator_5, mercury__string__SepLen_9, mercury__string__Columns_8, mercury__string__V_14_14, &mercury__string__RevRows_10);
    }
#line 17098 "string.c"
    mercury__string__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4704 "string.m"
    {
#line 4704 "string.m"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_23_23, mercury__string__RevRows_10, &mercury__string__Rows_11);
    }
#line 4705 "string.m"
    {
#line 4705 "string.m"
      return mercury__string__Table_6 = mercury__string__join_list_2_f_0((MR_String) "\n", mercury__string__Rows_11);
    }
#line 4699 "string.m"
    return mercury__string__Table_6;
#line 4699 "string.m"
  }
#line 1057 "string.m"
}

#line 1052 "string.m"
MR_String MR_CALL 
mercury__string__format_table_2_f_0(
#line 1052 "string.m"
  MR_Word mercury__string__Columns_4,
#line 1052 "string.m"
  MR_String mercury__string__Separator_5)
#line 1052 "string.m"
{
#line 4682 "string.m"
  {
#line 4682 "string.m"
    MR_bool mercury__string__succeeded;
#line 4682 "string.m"
    MR_String mercury__string__Table_6;
#line 4682 "string.m"
    MR_Word mercury__string__MaxWidths_7;
#line 4682 "string.m"
    MR_Word mercury__string__PaddedColumns_8;
#line 4682 "string.m"
    MR_Word mercury__string__Rows_11;

#line 4683 "string.m"
    {
#line 4683 "string.m"
      mercury__string__MaxWidths_7 = mercury__string__map__ho16_2_f_in__list_0(mercury__string__Columns_4);
    }
#line 4688 "string.m"
    {
#line 4688 "string.m"
      mercury__string__PaddedColumns_8 = mercury__string__map_corresponding__ho15_3_f_in__list_0(mercury__string__MaxWidths_7, mercury__string__Columns_4);
    }
#line 4693 "string.m"
    if ((mercury__string__PaddedColumns_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4695 "string.m"
      mercury__string__Rows_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4693 "string.m"
    else
#line 4690 "string.m"
      {
#line 4690 "string.m"
        MR_Word mercury__string__PaddedHead_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__PaddedColumns_8, (MR_Integer) 0)));
#line 4690 "string.m"
        MR_Word mercury__string__PaddedTail_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__string__PaddedColumns_8, (MR_Integer) 1)));

#line 395 "list.opt"
        {
#line 395 "list.opt"
          mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_49_95_95_91_49_44_32_50_44_32_52_93_95_48_4_p_in__list_0(mercury__string__Separator_5, mercury__string__PaddedTail_10, mercury__string__PaddedHead_9, &mercury__string__Rows_11);
        }
#line 4690 "string.m"
      }
#line 4697 "string.m"
    {
#line 4697 "string.m"
      return mercury__string__Table_6 = mercury__string__join_list_2_f_0((MR_String) "\n", mercury__string__Rows_11);
    }
#line 4682 "string.m"
    return mercury__string__Table_6;
#line 4682 "string.m"
  }
#line 1052 "string.m"
}

#line 1022 "string.m"
void MR_CALL 
mercury__string__foldr_substring_6_p_4(
#line 1022 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_17,
#line 1022 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1022 "string.m"
  MR_String mercury__string__String_8,
#line 1022 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1022 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1022 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1022 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 1022 "string.m"
  MR_Cont mercury__string__cont,
#line 1022 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1022 "string.m"
{
#line 4662 "string.m"
  {
#line 4662 "string.m"
    MR_bool mercury__string__succeeded;
#line 4662 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4662 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4663 "string.m"
    {
#line 4663 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4664 "string.m"
    {
#line 4664 "string.m"
      mercury__string__foldr_between_6_p_4(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4664 "string.m"
      return;
    }
#line 4662 "string.m"
  }
#line 1022 "string.m"
}

#line 1020 "string.m"
void MR_CALL 
mercury__string__foldr_substring_6_p_3(
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
#line 4662 "string.m"
  {
#line 4662 "string.m"
    MR_bool mercury__string__succeeded;
#line 4662 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4662 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4663 "string.m"
    {
#line 4663 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4664 "string.m"
    {
#line 4664 "string.m"
      mercury__string__foldr_between_6_p_3(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4664 "string.m"
      return;
    }
#line 4662 "string.m"
  }
#line 1020 "string.m"
}

#line 1018 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_substring_6_p_2(
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
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 1018 "string.m"
{
#line 4662 "string.m"
  {
#line 4662 "string.m"
    MR_bool mercury__string__succeeded;
#line 4662 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4662 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4663 "string.m"
    {
#line 4663 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4664 "string.m"
    {
#line 4664 "string.m"
      return mercury__string__succeeded = mercury__string__foldr_between_6_p_2(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4662 "string.m"
    return mercury__string__succeeded;
#line 4662 "string.m"
  }
#line 1018 "string.m"
}

#line 1016 "string.m"
void MR_CALL 
mercury__string__foldr_substring_6_p_1(
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
#line 4662 "string.m"
  {
#line 4662 "string.m"
    MR_bool mercury__string__succeeded;
#line 4662 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4662 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4663 "string.m"
    {
#line 4663 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4664 "string.m"
    {
#line 4664 "string.m"
      mercury__string__foldr_between_6_p_1(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4664 "string.m"
      return;
    }
#line 4662 "string.m"
  }
#line 1016 "string.m"
}

#line 1014 "string.m"
void MR_CALL 
mercury__string__foldr_substring_6_p_0(
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
#line 4662 "string.m"
  {
#line 4662 "string.m"
    MR_bool mercury__string__succeeded;
#line 4662 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4662 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4663 "string.m"
    {
#line 4663 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4664 "string.m"
    {
#line 4664 "string.m"
      mercury__string__foldr_between_6_p_0(mercury__string__TypeInfo_for_T_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4664 "string.m"
      return;
    }
#line 4662 "string.m"
  }
#line 1014 "string.m"
}

#line 1012 "string.m"
MR_Box MR_CALL 
mercury__string__foldr_substring_5_f_0(
#line 1012 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_15,
#line 1012 "string.m"
  MR_Word mercury__string__F_7,
#line 1012 "string.m"
  MR_String mercury__string__String_8,
#line 1012 "string.m"
  MR_Integer mercury__string__Start_9,
#line 1012 "string.m"
  MR_Integer mercury__string__Count_10,
#line 1012 "string.m"
  MR_Box mercury__string__Acc0_11)
#line 1012 "string.m"
{
#line 4658 "string.m"
  {
#line 4658 "string.m"
    MR_bool mercury__string__succeeded;
#line 4658 "string.m"
    MR_Box mercury__string__Acc_12;
#line 4658 "string.m"
    MR_Integer mercury__string__ClampStart_13;
#line 4658 "string.m"
    MR_Integer mercury__string__ClampEnd_14;

#line 4659 "string.m"
    {
#line 4659 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    }
#line 4660 "string.m"
    {
#line 4660 "string.m"
      return mercury__string__Acc_12 = mercury__string__foldr_between_5_f_0(mercury__string__TypeInfo_for_T_15, mercury__string__F_7, mercury__string__String_8, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, mercury__string__Acc0_11);
    }
#line 4658 "string.m"
    return mercury__string__Acc_12;
#line 4658 "string.m"
  }
#line 1012 "string.m"
}

#line 1004 "string.m"
void MR_CALL 
mercury__string__foldr_between_6_p_4(
#line 1004 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 1004 "string.m"
  MR_Word mercury__string__Closure_7,
#line 1004 "string.m"
  MR_String mercury__string__String_8,
#line 1004 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 1004 "string.m"
  MR_Integer mercury__string__End0_10,
#line 1004 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 1004 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 1004 "string.m"
  MR_Cont mercury__string__cont,
#line 1004 "string.m"
  void * mercury__string__cont_env_ptr)
#line 1004 "string.m"
{
#line 4629 "string.m"
  {
#line 4629 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4629 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4629 "string.m"
    MR_Integer mercury__string__End_13;
#line 4629 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 17514 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2379 "string.m"
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
#line 4632 "string.m"
    {
#line 4632 "string.m"
      mercury__string__foldr_between_2_6_p_4(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4632 "string.m"
      return;
    }
#line 4629 "string.m"
  }
#line 1004 "string.m"
}

#line 1002 "string.m"
void MR_CALL 
mercury__string__foldr_between_6_p_3(
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
#line 4629 "string.m"
  {
#line 4629 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4629 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4629 "string.m"
    MR_Integer mercury__string__End_13;
#line 4629 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 17598 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2379 "string.m"
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
#line 4632 "string.m"
    {
#line 4632 "string.m"
      mercury__string__foldr_between_2_6_p_3(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4632 "string.m"
      return;
    }
#line 4629 "string.m"
  }
#line 1002 "string.m"
}

#line 1000 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_between_6_p_2(
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
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 1000 "string.m"
{
#line 4629 "string.m"
  {
#line 4629 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4629 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4629 "string.m"
    MR_Integer mercury__string__End_13;
#line 4629 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 17678 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2379 "string.m"
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
#line 4632 "string.m"
    {
#line 4632 "string.m"
      return mercury__string__succeeded = mercury__string__foldr_between_2_6_p_2(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4629 "string.m"
    return mercury__string__succeeded;
#line 4629 "string.m"
  }
#line 1000 "string.m"
}

#line 998 "string.m"
void MR_CALL 
mercury__string__foldr_between_6_p_1(
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
#line 4629 "string.m"
  {
#line 4629 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4629 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4629 "string.m"
    MR_Integer mercury__string__End_13;
#line 4629 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 17758 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2379 "string.m"
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
#line 4632 "string.m"
    {
#line 4632 "string.m"
      mercury__string__foldr_between_2_6_p_1(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4632 "string.m"
      return;
    }
#line 4629 "string.m"
  }
#line 998 "string.m"
}

#line 996 "string.m"
void MR_CALL 
mercury__string__foldr_between_6_p_0(
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
#line 4629 "string.m"
  {
#line 4629 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4629 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4629 "string.m"
    MR_Integer mercury__string__End_13;
#line 4629 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 17838 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2379 "string.m"
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
#line 4632 "string.m"
    {
#line 4632 "string.m"
      mercury__string__foldr_between_2_6_p_0(mercury__string__TypeInfo_for_T_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4632 "string.m"
      return;
    }
#line 4629 "string.m"
  }
#line 996 "string.m"
}

#line 994 "string.m"
MR_Box MR_CALL 
mercury__string__foldr_between_5_f_0(
#line 994 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_23,
#line 994 "string.m"
  MR_Word mercury__string__F_7,
#line 994 "string.m"
  MR_String mercury__string__String_8,
#line 994 "string.m"
  MR_Integer mercury__string__Start_9,
#line 994 "string.m"
  MR_Integer mercury__string__Count_10,
#line 994 "string.m"
  MR_Box mercury__string__Acc0_11)
#line 994 "string.m"
{
#line 4625 "string.m"
  {
#line 4625 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_9);
#line 4625 "string.m"
    MR_Box mercury__string__Acc_12;
#line 4625 "string.m"
    MR_Integer mercury__string__Start_31;
#line 4625 "string.m"
    MR_Integer mercury__string__End_32;
#line 4625 "string.m"
    MR_Integer mercury__string__V_34_34;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_31 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_31 = mercury__string__Start_9;
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_between_5_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 17918 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_34_34  = Length;
#line 2379 "string.m"
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
#line 4632 "string.m"
    {
#line 4632 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_48_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_7, mercury__string__String_8, mercury__string__Start_31, mercury__string__End_32, mercury__string__Acc0_11, &mercury__string__Acc_12);
    }
#line 4625 "string.m"
    return mercury__string__Acc_12;
#line 4625 "string.m"
  }
#line 994 "string.m"
}

#line 986 "string.m"
void MR_CALL 
mercury__string__foldr_4_p_4(
#line 986 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 986 "string.m"
  MR_Word mercury__string__Closure_5,
#line 986 "string.m"
  MR_String mercury__string__String_6,
#line 986 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 986 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9,
#line 986 "string.m"
  MR_Cont mercury__string__cont,
#line 986 "string.m"
  void * mercury__string__cont_env_ptr)
#line 986 "string.m"
{
#line 4622 "string.m"
  {
#line 4622 "string.m"
    MR_bool mercury__string__succeeded;
#line 4622 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 17986 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2379 "string.m"
}
#line 4623 "string.m"
    {
#line 4623 "string.m"
      mercury__string__foldr_between_6_p_4(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4623 "string.m"
      return;
    }
#line 4622 "string.m"
  }
#line 986 "string.m"
}

#line 985 "string.m"
void MR_CALL 
mercury__string__foldr_4_p_3(
#line 985 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 985 "string.m"
  MR_Word mercury__string__Closure_5,
#line 985 "string.m"
  MR_String mercury__string__String_6,
#line 985 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 985 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9,
#line 985 "string.m"
  MR_Cont mercury__string__cont,
#line 985 "string.m"
  void * mercury__string__cont_env_ptr)
#line 985 "string.m"
{
#line 4622 "string.m"
  {
#line 4622 "string.m"
    MR_bool mercury__string__succeeded;
#line 4622 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 18044 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2379 "string.m"
}
#line 4623 "string.m"
    {
#line 4623 "string.m"
      mercury__string__foldr_between_6_p_3(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4623 "string.m"
      return;
    }
#line 4622 "string.m"
  }
#line 985 "string.m"
}

#line 984 "string.m"
MR_bool MR_CALL 
mercury__string__foldr_4_p_2(
#line 984 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 984 "string.m"
  MR_Word mercury__string__Closure_5,
#line 984 "string.m"
  MR_String mercury__string__String_6,
#line 984 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 984 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9)
#line 984 "string.m"
{
#line 4622 "string.m"
  {
#line 4622 "string.m"
    MR_bool mercury__string__succeeded;
#line 4622 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 18098 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2379 "string.m"
}
#line 4623 "string.m"
    {
#line 4623 "string.m"
      return mercury__string__succeeded = mercury__string__foldr_between_6_p_2(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
    }
#line 4622 "string.m"
    return mercury__string__succeeded;
#line 4622 "string.m"
  }
#line 984 "string.m"
}

#line 983 "string.m"
void MR_CALL 
mercury__string__foldr_4_p_1(
#line 983 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_13,
#line 983 "string.m"
  MR_Word mercury__string__Closure_5,
#line 983 "string.m"
  MR_String mercury__string__String_6,
#line 983 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_8,
#line 983 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_9)
#line 983 "string.m"
{
#line 4622 "string.m"
  {
#line 4622 "string.m"
    MR_bool mercury__string__succeeded;
#line 4622 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 18152 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2379 "string.m"
}
#line 4623 "string.m"
    {
#line 4623 "string.m"
      mercury__string__foldr_between_6_p_1(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
#line 4623 "string.m"
      return;
    }
#line 4622 "string.m"
  }
#line 983 "string.m"
}

#line 982 "string.m"
void MR_CALL 
mercury__string__foldr_4_p_0(
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
#line 4622 "string.m"
  {
#line 4622 "string.m"
    MR_bool mercury__string__succeeded;
#line 4622 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 18206 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2379 "string.m"
}
#line 4623 "string.m"
    {
#line 4623 "string.m"
      mercury__string__foldr_between_6_p_0(mercury__string__TypeInfo_for_T_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__V_11_11, mercury__string__STATE_VARIABLE_Acc_0_8, mercury__string__STATE_VARIABLE_Acc_9);
#line 4623 "string.m"
      return;
    }
#line 4622 "string.m"
  }
#line 982 "string.m"
}

#line 980 "string.m"
MR_Box MR_CALL 
mercury__string__foldr_3_f_0(
#line 980 "string.m"
  MR_Word mercury__string__TypeInfo_for_T_19,
#line 980 "string.m"
  MR_Word mercury__string__F_5,
#line 980 "string.m"
  MR_String mercury__string__String_6,
#line 980 "string.m"
  MR_Box mercury__string__Acc0_7)
#line 980 "string.m"
{
#line 4618 "string.m"
  {
#line 4618 "string.m"
    MR_bool mercury__string__succeeded;
#line 4618 "string.m"
    MR_Box mercury__string__Acc_8;
#line 4618 "string.m"
    MR_Integer mercury__string__V_26_26;
#line 4618 "string.m"
    MR_Integer mercury__string__End_41;
#line 4618 "string.m"
    MR_Integer mercury__string__V_43_43;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 18264 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_26_26  = Length;
#line 2379 "string.m"
}
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldr_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 18284 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_43_43  = Length;
#line 2379 "string.m"
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
#line 4632 "string.m"
    {
#line 4632 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_53_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__End_41, mercury__string__Acc0_7, &mercury__string__Acc_8);
    }
#line 4618 "string.m"
    return mercury__string__Acc_8;
#line 4618 "string.m"
  }
#line 980 "string.m"
}

#line 974 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_5(
#line 974 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 974 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_24,
#line 974 "string.m"
  MR_Word mercury__string__Closure_9,
#line 974 "string.m"
  MR_String mercury__string__String_10,
#line 974 "string.m"
  MR_Integer mercury__string__Start_11,
#line 974 "string.m"
  MR_Integer mercury__string__Count_12,
#line 974 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 974 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 974 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 974 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 974 "string.m"
  MR_Cont mercury__string__cont,
#line 974 "string.m"
  void * mercury__string__cont_env_ptr)
#line 974 "string.m"
{
#line 4611 "string.m"
  {
#line 4611 "string.m"
    MR_bool mercury__string__succeeded;
#line 4611 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4611 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4612 "string.m"
    {
#line 4612 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4613 "string.m"
    {
#line 4613 "string.m"
      mercury__string__foldl2_between_8_p_5(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4613 "string.m"
      return;
    }
#line 4611 "string.m"
  }
#line 974 "string.m"
}

#line 972 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_4(
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
#line 4611 "string.m"
  {
#line 4611 "string.m"
    MR_bool mercury__string__succeeded;
#line 4611 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4611 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4612 "string.m"
    {
#line 4612 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4613 "string.m"
    {
#line 4613 "string.m"
      mercury__string__foldl2_between_8_p_4(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4613 "string.m"
      return;
    }
#line 4611 "string.m"
  }
#line 972 "string.m"
}

#line 970 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_substring_8_p_3(
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
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 970 "string.m"
{
#line 4611 "string.m"
  {
#line 4611 "string.m"
    MR_bool mercury__string__succeeded;
#line 4611 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4611 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4612 "string.m"
    {
#line 4612 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4613 "string.m"
    {
#line 4613 "string.m"
      return mercury__string__succeeded = mercury__string__foldl2_between_8_p_3(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
    }
#line 4611 "string.m"
    return mercury__string__succeeded;
#line 4611 "string.m"
  }
#line 970 "string.m"
}

#line 968 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_2(
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
#line 4611 "string.m"
  {
#line 4611 "string.m"
    MR_bool mercury__string__succeeded;
#line 4611 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4611 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4612 "string.m"
    {
#line 4612 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4613 "string.m"
    {
#line 4613 "string.m"
      mercury__string__foldl2_between_8_p_2(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4613 "string.m"
      return;
    }
#line 4611 "string.m"
  }
#line 968 "string.m"
}

#line 966 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_1(
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
#line 4611 "string.m"
  {
#line 4611 "string.m"
    MR_bool mercury__string__succeeded;
#line 4611 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4611 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4612 "string.m"
    {
#line 4612 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4613 "string.m"
    {
#line 4613 "string.m"
      mercury__string__foldl2_between_8_p_1(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4613 "string.m"
      return;
    }
#line 4611 "string.m"
  }
#line 966 "string.m"
}

#line 964 "string.m"
void MR_CALL 
mercury__string__foldl2_substring_8_p_0(
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
#line 4611 "string.m"
  {
#line 4611 "string.m"
    MR_bool mercury__string__succeeded;
#line 4611 "string.m"
    MR_Integer mercury__string__ClampStart_15;
#line 4611 "string.m"
    MR_Integer mercury__string__ClampEnd_16;

#line 4612 "string.m"
    {
#line 4612 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_11, mercury__string__Count_12, &mercury__string__ClampStart_15, &mercury__string__ClampEnd_16);
    }
#line 4613 "string.m"
    {
#line 4613 "string.m"
      mercury__string__foldl2_between_8_p_0(mercury__string__TypeInfo_for_A_23, mercury__string__TypeInfo_for_B_24, mercury__string__Closure_9, mercury__string__String_10, mercury__string__ClampStart_15, mercury__string__ClampEnd_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4613 "string.m"
      return;
    }
#line 4611 "string.m"
  }
#line 964 "string.m"
}

#line 955 "string.m"
void MR_CALL 
mercury__string__foldl_substring_6_p_4(
#line 955 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_17,
#line 955 "string.m"
  MR_Word mercury__string__Closure_7,
#line 955 "string.m"
  MR_String mercury__string__String_8,
#line 955 "string.m"
  MR_Integer mercury__string__Start_9,
#line 955 "string.m"
  MR_Integer mercury__string__Count_10,
#line 955 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 955 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 955 "string.m"
  MR_Cont mercury__string__cont,
#line 955 "string.m"
  void * mercury__string__cont_env_ptr)
#line 955 "string.m"
{
#line 4607 "string.m"
  {
#line 4607 "string.m"
    MR_bool mercury__string__succeeded;
#line 4607 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4607 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4608 "string.m"
    {
#line 4608 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4609 "string.m"
    {
#line 4609 "string.m"
      mercury__string__foldl_between_6_p_4(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4609 "string.m"
      return;
    }
#line 4607 "string.m"
  }
#line 955 "string.m"
}

#line 953 "string.m"
void MR_CALL 
mercury__string__foldl_substring_6_p_3(
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
#line 4607 "string.m"
  {
#line 4607 "string.m"
    MR_bool mercury__string__succeeded;
#line 4607 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4607 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4608 "string.m"
    {
#line 4608 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4609 "string.m"
    {
#line 4609 "string.m"
      mercury__string__foldl_between_6_p_3(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4609 "string.m"
      return;
    }
#line 4607 "string.m"
  }
#line 953 "string.m"
}

#line 951 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_substring_6_p_2(
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
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 951 "string.m"
{
#line 4607 "string.m"
  {
#line 4607 "string.m"
    MR_bool mercury__string__succeeded;
#line 4607 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4607 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4608 "string.m"
    {
#line 4608 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4609 "string.m"
    {
#line 4609 "string.m"
      return mercury__string__succeeded = mercury__string__foldl_between_6_p_2(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4607 "string.m"
    return mercury__string__succeeded;
#line 4607 "string.m"
  }
#line 951 "string.m"
}

#line 949 "string.m"
void MR_CALL 
mercury__string__foldl_substring_6_p_1(
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
#line 4607 "string.m"
  {
#line 4607 "string.m"
    MR_bool mercury__string__succeeded;
#line 4607 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4607 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4608 "string.m"
    {
#line 4608 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4609 "string.m"
    {
#line 4609 "string.m"
      mercury__string__foldl_between_6_p_1(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4609 "string.m"
      return;
    }
#line 4607 "string.m"
  }
#line 949 "string.m"
}

#line 947 "string.m"
void MR_CALL 
mercury__string__foldl_substring_6_p_0(
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
#line 4607 "string.m"
  {
#line 4607 "string.m"
    MR_bool mercury__string__succeeded;
#line 4607 "string.m"
    MR_Integer mercury__string__ClampStart_12;
#line 4607 "string.m"
    MR_Integer mercury__string__ClampEnd_13;

#line 4608 "string.m"
    {
#line 4608 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_12, &mercury__string__ClampEnd_13);
    }
#line 4609 "string.m"
    {
#line 4609 "string.m"
      mercury__string__foldl_between_6_p_0(mercury__string__TypeInfo_for_A_17, mercury__string__Closure_7, mercury__string__String_8, mercury__string__ClampStart_12, mercury__string__ClampEnd_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4609 "string.m"
      return;
    }
#line 4607 "string.m"
  }
#line 947 "string.m"
}

#line 945 "string.m"
MR_Box MR_CALL 
mercury__string__foldl_substring_5_f_0(
#line 945 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_15,
#line 945 "string.m"
  MR_Word mercury__string__F_7,
#line 945 "string.m"
  MR_String mercury__string__String_8,
#line 945 "string.m"
  MR_Integer mercury__string__Start_9,
#line 945 "string.m"
  MR_Integer mercury__string__Count_10,
#line 945 "string.m"
  MR_Box mercury__string__Acc0_11)
#line 945 "string.m"
{
#line 4603 "string.m"
  {
#line 4603 "string.m"
    MR_bool mercury__string__succeeded;
#line 4603 "string.m"
    MR_Box mercury__string__Acc_12;
#line 4603 "string.m"
    MR_Integer mercury__string__ClampStart_13;
#line 4603 "string.m"
    MR_Integer mercury__string__ClampEnd_14;

#line 4604 "string.m"
    {
#line 4604 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_9, mercury__string__Count_10, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    }
#line 4605 "string.m"
    {
#line 4605 "string.m"
      return mercury__string__Acc_12 = mercury__string__foldl_between_5_f_0(mercury__string__TypeInfo_for_A_15, mercury__string__F_7, mercury__string__String_8, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, mercury__string__Acc0_11);
    }
#line 4603 "string.m"
    return mercury__string__Acc_12;
#line 4603 "string.m"
  }
#line 945 "string.m"
}

#line 937 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_5(
#line 937 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_25,
#line 937 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_26,
#line 937 "string.m"
  MR_Word mercury__string__Closure_9,
#line 937 "string.m"
  MR_String mercury__string__String_10,
#line 937 "string.m"
  MR_Integer mercury__string__Start0_11,
#line 937 "string.m"
  MR_Integer mercury__string__End0_12,
#line 937 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_17,
#line 937 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_18,
#line 937 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_19,
#line 937 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20,
#line 937 "string.m"
  MR_Cont mercury__string__cont,
#line 937 "string.m"
  void * mercury__string__cont_env_ptr)
#line 937 "string.m"
{
#line 4547 "string.m"
  {
#line 4547 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4547 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4547 "string.m"
    MR_Integer mercury__string__End_16;
#line 4547 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_5

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 18966 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2379 "string.m"
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
#line 4550 "string.m"
    {
#line 4550 "string.m"
      mercury__string__foldl2_between_2_8_p_5(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4550 "string.m"
      return;
    }
#line 4547 "string.m"
  }
#line 937 "string.m"
}

#line 935 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_4(
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
#line 4547 "string.m"
  {
#line 4547 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4547 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4547 "string.m"
    MR_Integer mercury__string__End_16;
#line 4547 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 19056 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2379 "string.m"
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
#line 4550 "string.m"
    {
#line 4550 "string.m"
      mercury__string__foldl2_between_2_8_p_4(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4550 "string.m"
      return;
    }
#line 4547 "string.m"
  }
#line 935 "string.m"
}

#line 933 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_between_8_p_3(
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
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_20)
#line 933 "string.m"
{
#line 4547 "string.m"
  {
#line 4547 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4547 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4547 "string.m"
    MR_Integer mercury__string__End_16;
#line 4547 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 19142 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2379 "string.m"
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
#line 4550 "string.m"
    {
#line 4550 "string.m"
      return mercury__string__succeeded = mercury__string__foldl2_between_2_8_p_3(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
    }
#line 4547 "string.m"
    return mercury__string__succeeded;
#line 4547 "string.m"
  }
#line 933 "string.m"
}

#line 931 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_2(
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
#line 4547 "string.m"
  {
#line 4547 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4547 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4547 "string.m"
    MR_Integer mercury__string__End_16;
#line 4547 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 19228 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2379 "string.m"
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
#line 4550 "string.m"
    {
#line 4550 "string.m"
      mercury__string__foldl2_between_2_8_p_2(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4550 "string.m"
      return;
    }
#line 4547 "string.m"
  }
#line 931 "string.m"
}

#line 929 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_1(
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
#line 4547 "string.m"
  {
#line 4547 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4547 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4547 "string.m"
    MR_Integer mercury__string__End_16;
#line 4547 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 19314 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2379 "string.m"
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
#line 4550 "string.m"
    {
#line 4550 "string.m"
      mercury__string__foldl2_between_2_8_p_1(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4550 "string.m"
      return;
    }
#line 4547 "string.m"
  }
#line 929 "string.m"
}

#line 927 "string.m"
void MR_CALL 
mercury__string__foldl2_between_8_p_0(
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
#line 4547 "string.m"
  {
#line 4547 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_11);
#line 4547 "string.m"
    MR_Integer mercury__string__Start_15;
#line 4547 "string.m"
    MR_Integer mercury__string__End_16;
#line 4547 "string.m"
    MR_Integer mercury__string__V_22_22;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_15 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_15 = mercury__string__Start0_11;
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_between_8_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_10 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 19400 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_22_22  = Length;
#line 2379 "string.m"
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
#line 4550 "string.m"
    {
#line 4550 "string.m"
      mercury__string__foldl2_between_2_8_p_0(mercury__string__TypeInfo_for_A_25, mercury__string__TypeInfo_for_B_26, mercury__string__Closure_9, mercury__string__String_10, mercury__string__Start_15, mercury__string__End_16, mercury__string__STATE_VARIABLE_Acc1_0_17, mercury__string__STATE_VARIABLE_Acc1_18, mercury__string__STATE_VARIABLE_Acc2_0_19, mercury__string__STATE_VARIABLE_Acc2_20);
#line 4550 "string.m"
      return;
    }
#line 4547 "string.m"
  }
#line 927 "string.m"
}

#line 917 "string.m"
void MR_CALL 
mercury__string__foldl_between_6_p_4(
#line 917 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 917 "string.m"
  MR_Word mercury__string__Closure_7,
#line 917 "string.m"
  MR_String mercury__string__String_8,
#line 917 "string.m"
  MR_Integer mercury__string__Start0_9,
#line 917 "string.m"
  MR_Integer mercury__string__End0_10,
#line 917 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_14,
#line 917 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15,
#line 917 "string.m"
  MR_Cont mercury__string__cont,
#line 917 "string.m"
  void * mercury__string__cont_env_ptr)
#line 917 "string.m"
{
#line 4538 "string.m"
  {
#line 4538 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4538 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4538 "string.m"
    MR_Integer mercury__string__End_13;
#line 4538 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 19484 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2379 "string.m"
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
#line 4541 "string.m"
    {
#line 4541 "string.m"
      mercury__string__foldl_between_2_6_p_4(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4541 "string.m"
      return;
    }
#line 4538 "string.m"
  }
#line 917 "string.m"
}

#line 915 "string.m"
void MR_CALL 
mercury__string__foldl_between_6_p_3(
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
#line 4538 "string.m"
  {
#line 4538 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4538 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4538 "string.m"
    MR_Integer mercury__string__End_13;
#line 4538 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 19568 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2379 "string.m"
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
#line 4541 "string.m"
    {
#line 4541 "string.m"
      mercury__string__foldl_between_2_6_p_3(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4541 "string.m"
      return;
    }
#line 4538 "string.m"
  }
#line 915 "string.m"
}

#line 913 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_between_6_p_2(
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
  MR_Box * mercury__string__STATE_VARIABLE_Acc_15)
#line 913 "string.m"
{
#line 4538 "string.m"
  {
#line 4538 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4538 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4538 "string.m"
    MR_Integer mercury__string__End_13;
#line 4538 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 19648 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2379 "string.m"
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
#line 4541 "string.m"
    {
#line 4541 "string.m"
      return mercury__string__succeeded = mercury__string__foldl_between_2_6_p_2(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
    }
#line 4538 "string.m"
    return mercury__string__succeeded;
#line 4538 "string.m"
  }
#line 913 "string.m"
}

#line 911 "string.m"
void MR_CALL 
mercury__string__foldl_between_6_p_1(
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
#line 4538 "string.m"
  {
#line 4538 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4538 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4538 "string.m"
    MR_Integer mercury__string__End_13;
#line 4538 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 19728 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2379 "string.m"
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
#line 4541 "string.m"
    {
#line 4541 "string.m"
      mercury__string__foldl_between_2_6_p_0(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4541 "string.m"
      return;
    }
#line 4538 "string.m"
  }
#line 911 "string.m"
}

#line 909 "string.m"
void MR_CALL 
mercury__string__foldl_between_6_p_0(
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
#line 4538 "string.m"
  {
#line 4538 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start0_9);
#line 4538 "string.m"
    MR_Integer mercury__string__Start_12;
#line 4538 "string.m"
    MR_Integer mercury__string__End_13;
#line 4538 "string.m"
    MR_Integer mercury__string__V_17_17;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_12 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_12 = mercury__string__Start0_9;
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 19808 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_17_17  = Length;
#line 2379 "string.m"
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
#line 4541 "string.m"
    {
#line 4541 "string.m"
      mercury__string__foldl_between_2_6_p_1(mercury__string__TypeInfo_for_A_19, mercury__string__Closure_7, mercury__string__String_8, mercury__string__Start_12, mercury__string__End_13, mercury__string__STATE_VARIABLE_Acc_0_14, mercury__string__STATE_VARIABLE_Acc_15);
#line 4541 "string.m"
      return;
    }
#line 4538 "string.m"
  }
#line 909 "string.m"
}

#line 907 "string.m"
MR_Box MR_CALL 
mercury__string__foldl_between_5_f_0(
#line 907 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_23,
#line 907 "string.m"
  MR_Word mercury__string__F_7,
#line 907 "string.m"
  MR_String mercury__string__S_8,
#line 907 "string.m"
  MR_Integer mercury__string__Start_9,
#line 907 "string.m"
  MR_Integer mercury__string__End_10,
#line 907 "string.m"
  MR_Box mercury__string__A_11)
#line 907 "string.m"
{
#line 4543 "string.m"
  {
#line 4543 "string.m"
    MR_bool mercury__string__succeeded = ((MR_Integer) 0 > mercury__string__Start_9);
#line 4543 "string.m"
    MR_Box mercury__string__B_12;
#line 4543 "string.m"
    MR_Integer mercury__string__Start_31;
#line 4543 "string.m"
    MR_Integer mercury__string__End_32;
#line 4543 "string.m"
    MR_Integer mercury__string__V_34_34;

#line 78 "int.opt"
    if (mercury__string__succeeded)
#line 77 "int.opt"
      mercury__string__Start_31 = (MR_Integer) 0;
#line 78 "int.opt"
    else
#line 79 "int.opt"
      mercury__string__Start_31 = mercury__string__Start_9;
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_between_5_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_8 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 19888 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_34_34  = Length;
#line 2379 "string.m"
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
#line 4541 "string.m"
    {
#line 4541 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_51_56_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_7, mercury__string__S_8, mercury__string__Start_31, mercury__string__End_32, mercury__string__A_11, &mercury__string__B_12);
    }
#line 4543 "string.m"
    return mercury__string__B_12;
#line 4543 "string.m"
  }
#line 907 "string.m"
}

#line 898 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_5(
#line 898 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 898 "string.m"
  MR_Word mercury__string__TypeInfo_for_B_20,
#line 898 "string.m"
  MR_Word mercury__string__Closure_7,
#line 898 "string.m"
  MR_String mercury__string__String_8,
#line 898 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc1_0_12,
#line 898 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc1_13,
#line 898 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc2_0_14,
#line 898 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15,
#line 898 "string.m"
  MR_Cont mercury__string__cont,
#line 898 "string.m"
  void * mercury__string__cont_env_ptr)
#line 898 "string.m"
{
#line 4534 "string.m"
  {
#line 4534 "string.m"
    MR_bool mercury__string__succeeded;
#line 4534 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_5

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 19962 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2379 "string.m"
}
#line 4536 "string.m"
    {
#line 4536 "string.m"
      mercury__string__foldl2_between_8_p_5(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4536 "string.m"
      return;
    }
#line 4534 "string.m"
  }
#line 898 "string.m"
}

#line 896 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_4(
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
#line 4534 "string.m"
  {
#line 4534 "string.m"
    MR_bool mercury__string__succeeded;
#line 4534 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 20026 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2379 "string.m"
}
#line 4536 "string.m"
    {
#line 4536 "string.m"
      mercury__string__foldl2_between_8_p_4(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4536 "string.m"
      return;
    }
#line 4534 "string.m"
  }
#line 896 "string.m"
}

#line 894 "string.m"
MR_bool MR_CALL 
mercury__string__foldl2_6_p_3(
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
  MR_Box * mercury__string__STATE_VARIABLE_Acc2_15)
#line 894 "string.m"
{
#line 4534 "string.m"
  {
#line 4534 "string.m"
    MR_bool mercury__string__succeeded;
#line 4534 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 20086 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2379 "string.m"
}
#line 4536 "string.m"
    {
#line 4536 "string.m"
      return mercury__string__succeeded = mercury__string__foldl2_between_8_p_3(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
    }
#line 4534 "string.m"
    return mercury__string__succeeded;
#line 4534 "string.m"
  }
#line 894 "string.m"
}

#line 892 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_2(
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
#line 4534 "string.m"
  {
#line 4534 "string.m"
    MR_bool mercury__string__succeeded;
#line 4534 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 20146 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2379 "string.m"
}
#line 4536 "string.m"
    {
#line 4536 "string.m"
      mercury__string__foldl2_between_8_p_2(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
#line 4536 "string.m"
      return;
    }
#line 4534 "string.m"
  }
#line 892 "string.m"
}

#line 890 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_1(
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
#line 4534 "string.m"
  {
#line 4534 "string.m"
    MR_bool mercury__string__succeeded;
#line 4534 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 20206 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2379 "string.m"
}
#line 4536 "string.m"
    {
#line 4536 "string.m"
      mercury__string__foldl2_between_8_p_1(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
#line 4536 "string.m"
      return;
    }
#line 4534 "string.m"
  }
#line 890 "string.m"
}

#line 888 "string.m"
void MR_CALL 
mercury__string__foldl2_6_p_0(
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
#line 4534 "string.m"
  {
#line 4534 "string.m"
    MR_bool mercury__string__succeeded;
#line 4534 "string.m"
    MR_Integer mercury__string__Length_11;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl2_6_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_8 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 20266 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_11  = Length;
#line 2379 "string.m"
}
#line 4536 "string.m"
    {
#line 4536 "string.m"
      mercury__string__foldl2_between_8_p_0(mercury__string__TypeInfo_for_A_19, mercury__string__TypeInfo_for_B_20, mercury__string__Closure_7, mercury__string__String_8, (MR_Integer) 0, mercury__string__Length_11, mercury__string__STATE_VARIABLE_Acc1_0_12, mercury__string__STATE_VARIABLE_Acc1_13, mercury__string__STATE_VARIABLE_Acc2_0_14, mercury__string__STATE_VARIABLE_Acc2_15);
#line 4536 "string.m"
      return;
    }
#line 4534 "string.m"
  }
#line 888 "string.m"
}

#line 882 "string.m"
void MR_CALL 
mercury__string__foldl_4_p_4(
#line 882 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 882 "string.m"
  MR_Word mercury__string__Closure_5,
#line 882 "string.m"
  MR_String mercury__string__String_6,
#line 882 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 882 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10,
#line 882 "string.m"
  MR_Cont mercury__string__cont,
#line 882 "string.m"
  void * mercury__string__cont_env_ptr)
#line 882 "string.m"
{
#line 4530 "string.m"
  {
#line 4530 "string.m"
    MR_bool mercury__string__succeeded;
#line 4530 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_4

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 20324 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2379 "string.m"
}
#line 4532 "string.m"
    {
#line 4532 "string.m"
      mercury__string__foldl_between_6_p_4(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4532 "string.m"
      return;
    }
#line 4530 "string.m"
  }
#line 882 "string.m"
}

#line 881 "string.m"
void MR_CALL 
mercury__string__foldl_4_p_3(
#line 881 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 881 "string.m"
  MR_Word mercury__string__Closure_5,
#line 881 "string.m"
  MR_String mercury__string__String_6,
#line 881 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 881 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10,
#line 881 "string.m"
  MR_Cont mercury__string__cont,
#line 881 "string.m"
  void * mercury__string__cont_env_ptr)
#line 881 "string.m"
{
#line 4530 "string.m"
  {
#line 4530 "string.m"
    MR_bool mercury__string__succeeded;
#line 4530 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 20382 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2379 "string.m"
}
#line 4532 "string.m"
    {
#line 4532 "string.m"
      mercury__string__foldl_between_6_p_3(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4532 "string.m"
      return;
    }
#line 4530 "string.m"
  }
#line 881 "string.m"
}

#line 880 "string.m"
MR_bool MR_CALL 
mercury__string__foldl_4_p_2(
#line 880 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 880 "string.m"
  MR_Word mercury__string__Closure_5,
#line 880 "string.m"
  MR_String mercury__string__String_6,
#line 880 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 880 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10)
#line 880 "string.m"
{
#line 4530 "string.m"
  {
#line 4530 "string.m"
    MR_bool mercury__string__succeeded;
#line 4530 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_2

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 20436 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2379 "string.m"
}
#line 4532 "string.m"
    {
#line 4532 "string.m"
      return mercury__string__succeeded = mercury__string__foldl_between_6_p_2(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
    }
#line 4530 "string.m"
    return mercury__string__succeeded;
#line 4530 "string.m"
  }
#line 880 "string.m"
}

#line 879 "string.m"
void MR_CALL 
mercury__string__foldl_4_p_1(
#line 879 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_13,
#line 879 "string.m"
  MR_Word mercury__string__Closure_5,
#line 879 "string.m"
  MR_String mercury__string__String_6,
#line 879 "string.m"
  MR_Box mercury__string__STATE_VARIABLE_Acc_0_9,
#line 879 "string.m"
  MR_Box * mercury__string__STATE_VARIABLE_Acc_10)
#line 879 "string.m"
{
#line 4530 "string.m"
  {
#line 4530 "string.m"
    MR_bool mercury__string__succeeded;
#line 4530 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 20490 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2379 "string.m"
}
#line 4532 "string.m"
    {
#line 4532 "string.m"
      mercury__string__foldl_between_6_p_0(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
#line 4532 "string.m"
      return;
    }
#line 4530 "string.m"
  }
#line 879 "string.m"
}

#line 878 "string.m"
void MR_CALL 
mercury__string__foldl_4_p_0(
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
#line 4530 "string.m"
  {
#line 4530 "string.m"
    MR_bool mercury__string__succeeded;
#line 4530 "string.m"
    MR_Integer mercury__string__Length_8;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_6 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 20544 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_8  = Length;
#line 2379 "string.m"
}
#line 4532 "string.m"
    {
#line 4532 "string.m"
      mercury__string__foldl_between_6_p_1(mercury__string__TypeInfo_for_A_13, mercury__string__Closure_5, mercury__string__String_6, (MR_Integer) 0, mercury__string__Length_8, mercury__string__STATE_VARIABLE_Acc_0_9, mercury__string__STATE_VARIABLE_Acc_10);
#line 4532 "string.m"
      return;
    }
#line 4530 "string.m"
  }
#line 878 "string.m"
}

#line 876 "string.m"
MR_Box MR_CALL 
mercury__string__foldl_3_f_0(
#line 876 "string.m"
  MR_Word mercury__string__TypeInfo_for_A_19,
#line 876 "string.m"
  MR_Word mercury__string__F_5,
#line 876 "string.m"
  MR_String mercury__string__S_6,
#line 876 "string.m"
  MR_Box mercury__string__A_7)
#line 876 "string.m"
{
#line 4526 "string.m"
  {
#line 4526 "string.m"
    MR_bool mercury__string__succeeded;
#line 4526 "string.m"
    MR_Box mercury__string__B_8;
#line 4526 "string.m"
    MR_Integer mercury__string__Length_25;
#line 4526 "string.m"
    MR_Integer mercury__string__End_39;
#line 4526 "string.m"
    MR_Integer mercury__string__V_41_41;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_6 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 20602 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_25  = Length;
#line 2379 "string.m"
}
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__foldl_3_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_6 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 20622 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_41_41  = Length;
#line 2379 "string.m"
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
#line 4541 "string.m"
    {
#line 4541 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_54_95_95_91_49_44_32_51_44_32_52_93_95_48_6_p_0(mercury__string__F_5, mercury__string__S_6, (MR_Integer) 0, mercury__string__End_39, mercury__string__A_7, &mercury__string__B_8);
    }
#line 4526 "string.m"
    return mercury__string__B_8;
#line 4526 "string.m"
  }
#line 876 "string.m"
}

#line 859 "string.m"
MR_String MR_CALL 
mercury__string__word_wrap_separator_3_f_0(
#line 859 "string.m"
  MR_String mercury__string__Str_5,
#line 859 "string.m"
  MR_Integer mercury__string__N_6,
#line 859 "string.m"
  MR_String mercury__string__WordSep0_7)
#line 859 "string.m"
{
#line 4399 "string.m"
  {
#line 4399 "string.m"
    MR_bool mercury__string__succeeded;
#line 4399 "string.m"
    MR_String mercury__string__Wrapped_8;
#line 4399 "string.m"
    MR_Word mercury__string__TypeCtorInfo_20_20;
#line 4399 "string.m"
    MR_Word mercury__string__Words_9;
#line 4399 "string.m"
    MR_Integer mercury__string__SepLen0_10;
#line 4399 "string.m"
    MR_String mercury__string__WordSep_11;
#line 4399 "string.m"
    MR_Integer mercury__string__SepLen_12;
#line 4399 "string.m"
    MR_Word mercury__string__RevWordsSpacesNls0_15;
#line 4399 "string.m"
    MR_Word mercury__string__RevWordsSpacesNls_16;
#line 4399 "string.m"
    MR_Word mercury__string__WordsSpacesNls_17;
#line 4399 "string.m"
    MR_Integer mercury__string__WordStart_25;

#line 4055 "string.m"
    {
#line 4055 "string.m"
      mercury__string__next_boundary__ho35_4_p_0(mercury__string__Str_5, (MR_Integer) 0, &mercury__string__WordStart_25);
    }
#line 4056 "string.m"
    {
#line 4056 "string.m"
      mercury__string__words_loop__ho36_4_p_0(mercury__string__Str_5, mercury__string__WordStart_25, &mercury__string__Words_9);
    }
#line 2439 "string.m"
    {
#line 2439 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__WordSep0_7, &mercury__string__SepLen0_10);
    }
#line 4402 "string.m"
    mercury__string__succeeded = (mercury__string__SepLen0_10 < mercury__string__N_6);
#line 4405 "string.m"
    if (mercury__string__succeeded)
#line 4403 "string.m"
      {
#line 4403 "string.m"
        mercury__string__WordSep_11 = mercury__string__WordSep0_7;
#line 4404 "string.m"
        mercury__string__SepLen_12 = mercury__string__SepLen0_10;
#line 4403 "string.m"
      }
#line 4405 "string.m"
    else
#line 4406 "string.m"
      {
#line 4406 "string.m"
        mercury__string__WordSep_11 = (MR_String) "";
#line 4407 "string.m"
        mercury__string__SepLen_12 = (MR_Integer) 0;
#line 4406 "string.m"
      }
#line 4411 "string.m"
    mercury__string__RevWordsSpacesNls0_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4412 "string.m"
    {
#line 4412 "string.m"
      mercury__string__word_wrap_loop_7_p_0(mercury__string__Words_9, mercury__string__WordSep_11, mercury__string__SepLen_12, (MR_Integer) 1, mercury__string__N_6, mercury__string__RevWordsSpacesNls0_15, &mercury__string__RevWordsSpacesNls_16);
    }
#line 20731 "string.c"
    mercury__string__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4414 "string.m"
    {
#line 4414 "string.m"
      mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_20_20, mercury__string__RevWordsSpacesNls_16, &mercury__string__WordsSpacesNls_17);
    }
#line 4415 "string.m"
    {
#line 4415 "string.m"
      return mercury__string__Wrapped_8 = mercury__string__append_list_1_f_0(mercury__string__WordsSpacesNls_17);
    }
#line 4399 "string.m"
    return mercury__string__Wrapped_8;
#line 4399 "string.m"
  }
#line 859 "string.m"
}

#line 850 "string.m"
MR_String MR_CALL 
mercury__string__word_wrap_2_f_0(
#line 850 "string.m"
  MR_String mercury__string__Str_4,
#line 850 "string.m"
  MR_Integer mercury__string__N_5)
#line 850 "string.m"
{
#line 4397 "string.m"
  {
#line 4397 "string.m"
    MR_bool mercury__string__succeeded;
#line 4397 "string.m"
    MR_String mercury__string__HeadVar__3_3;

#line 4397 "string.m"
    {
#line 4397 "string.m"
      return mercury__string__HeadVar__3_3 = mercury__string__word_wrap_separator_3_f_0(mercury__string__Str_4, mercury__string__N_5, (MR_String) "");
    }
#line 4397 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4397 "string.m"
  }
#line 850 "string.m"
}

#line 839 "string.m"
void MR_CALL 
mercury__string__replace_all_4_p_0(
#line 839 "string.m"
  MR_String mercury__string__Str_5,
#line 839 "string.m"
  MR_String mercury__string__Pat_6,
#line 839 "string.m"
  MR_String mercury__string__Subst_7,
#line 839 "string.m"
  MR_String * mercury__string__Result_8)
#line 839 "string.m"
{
#line 4373 "string.m"
  {
#line 4373 "string.m"
    MR_bool mercury__string__succeeded = (strcmp(mercury__string__Pat_6, (MR_String) "") == 0);

#line 4373 "string.m"
    if (mercury__string__succeeded)
#line 4370 "string.m"
      {
#line 4370 "string.m"
        MR_Word mercury__string__TypeCtorInfo_29_29;
#line 4370 "string.m"
        MR_Word mercury__string__Foldl_12;
#line 4370 "string.m"
        MR_Word mercury__string__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4370 "string.m"
        MR_Word mercury__string__V_22_22;
#line 4370 "string.m"
        MR_Word mercury__string__V_23_23;
#line 4370 "string.m"
        MR_Integer mercury__string__Length_51;
#line 4370 "string.m"
        MR_Integer mercury__string__End_67;
#line 4370 "string.m"
        MR_Integer mercury__string__V_69_69;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 20830 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_51  = Length;
#line 2379 "string.m"
}
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 20850 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_69_69  = Length;
#line 2379 "string.m"
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
#line 4541 "string.m"
        {
#line 4541 "string.m"
          mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_98_101_116_119_101_101_110_95_50_95_95_104_111_52_57_95_95_91_49_44_32_51_93_95_48_6_p_0(mercury__string__Subst_7, mercury__string__Str_5, (MR_Integer) 0, mercury__string__End_67, mercury__string__V_21_21, &mercury__string__Foldl_12);
        }
#line 20872 "string.c"
        mercury__string__TypeCtorInfo_29_29 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 118 "list.opt"
        {
#line 118 "list.opt"
          mercury__list__reverse_2_p_0(mercury__string__TypeCtorInfo_29_29, mercury__string__Foldl_12, &mercury__string__V_23_23);
        }
#line 4372 "string.m"
        {
#line 4372 "string.m"
          mercury__string__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4372 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_22_22, 0) = ((MR_Box) (mercury__string__Subst_7));
#line 4372 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_22_22, 1) = ((MR_Box) (mercury__string__V_23_23));
#line 4372 "string.m"
        }
#line 4372 "string.m"
        {
#line 4372 "string.m"
          *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__V_22_22);
        }
#line 4370 "string.m"
      }
#line 4373 "string.m"
    else
#line 4374 "string.m"
      {
#line 4374 "string.m"
        MR_Word mercury__string__TypeCtorInfo_30_30;
#line 4374 "string.m"
        MR_Integer mercury__string__PatLength_13;
#line 4374 "string.m"
        MR_Word mercury__string__ReversedChunks_14;
#line 4374 "string.m"
        MR_Word mercury__string__Chunks_15;
#line 4374 "string.m"
        MR_Word mercury__string__V_25_25;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_all_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Pat_6 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 20924 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PatLength_13  = Length;
#line 2379 "string.m"
}
#line 4375 "string.m"
        mercury__string__V_25_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4375 "string.m"
        {
#line 4375 "string.m"
          mercury__string__replace_all_loop_7_p_0(mercury__string__Str_5, mercury__string__Pat_6, mercury__string__Subst_7, mercury__string__PatLength_13, (MR_Integer) 0, mercury__string__V_25_25, &mercury__string__ReversedChunks_14);
        }
#line 20938 "string.c"
        mercury__string__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4376 "string.m"
        {
#line 4376 "string.m"
          mercury__string__Chunks_15 = mercury__list__reverse_1_f_0(mercury__string__TypeCtorInfo_30_30, mercury__string__ReversedChunks_14);
        }
#line 4377 "string.m"
        {
#line 4377 "string.m"
          *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__Chunks_15);
        }
#line 4374 "string.m"
      }
#line 4373 "string.m"
  }
#line 839 "string.m"
}

#line 838 "string.m"
MR_String MR_CALL 
mercury__string__replace_all_3_f_0(
#line 838 "string.m"
  MR_String mercury__string__S1_5,
#line 838 "string.m"
  MR_String mercury__string__S2_6,
#line 838 "string.m"
  MR_String mercury__string__S3_7)
#line 838 "string.m"
{
#line 4366 "string.m"
  {
#line 4366 "string.m"
    MR_bool mercury__string__succeeded;
#line 4366 "string.m"
    MR_String mercury__string__S4_8;

#line 4366 "string.m"
    {
#line 4366 "string.m"
      mercury__string__replace_all_4_p_0(mercury__string__S1_5, mercury__string__S2_6, mercury__string__S3_7, &mercury__string__S4_8);
    }
#line 4366 "string.m"
    return mercury__string__S4_8;
#line 4366 "string.m"
  }
#line 838 "string.m"
}

#line 831 "string.m"
MR_bool MR_CALL 
mercury__string__replace_4_p_0(
#line 831 "string.m"
  MR_String mercury__string__Str_5,
#line 831 "string.m"
  MR_String mercury__string__Pat_6,
#line 831 "string.m"
  MR_String mercury__string__Subst_7,
#line 831 "string.m"
  MR_String * mercury__string__Result_8)
#line 831 "string.m"
{
#line 4354 "string.m"
  {
#line 4354 "string.m"
    MR_bool mercury__string__succeeded;
#line 4354 "string.m"
    MR_Integer mercury__string__Index_9;
#line 4354 "string.m"
    MR_String mercury__string__Initial_10;
#line 4354 "string.m"
    MR_Integer mercury__string__BeginAt_11;
#line 4354 "string.m"
    MR_Integer mercury__string__EndAt_12;
#line 4354 "string.m"
    MR_String mercury__string__Final_13;
#line 4354 "string.m"
    MR_Integer mercury__string__V_14_14;
#line 4354 "string.m"
    MR_Integer mercury__string__V_15_15;
#line 4354 "string.m"
    MR_Word mercury__string__V_16_16;
#line 4354 "string.m"
    MR_Word mercury__string__V_17_17;
#line 4354 "string.m"
    MR_Word mercury__string__V_18_18;
#line 4354 "string.m"
    MR_Word mercury__string__V_19_19;

#line 2920 "string.m"
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
#line 2920 "string.m"
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
#line 21056 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Index_9  = Index;
#line 2920 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4354 "string.m"
    if (mercury__string__succeeded)
#line 4354 "string.m"
      {
#line 4357 "string.m"
        mercury__string__V_14_14 = (MR_Integer) 0;
#line 4018 "string.m"
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
#line 4018 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 21094 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Initial_10  = SubString;
#line 4018 "string.m"
}
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Pat_6 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 21114 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_15_15  = Length;
#line 2379 "string.m"
}
#line 4359 "string.m"
        mercury__string__BeginAt_11 = (mercury__string__Index_9 + mercury__string__V_15_15);
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__replace_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 21136 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__EndAt_12  = Length;
#line 2379 "string.m"
}
#line 4018 "string.m"
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
#line 4018 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 21165 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Final_13  = SubString;
#line 4018 "string.m"
}
#line 4363 "string.m"
        mercury__string__V_19_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4363 "string.m"
        {
#line 4363 "string.m"
          mercury__string__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4363 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 0) = ((MR_Box) (mercury__string__Final_13));
#line 4363 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_18_18, 1) = ((MR_Box) (mercury__string__V_19_19));
#line 4363 "string.m"
        }
#line 4363 "string.m"
        {
#line 4363 "string.m"
          mercury__string__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4363 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_17_17, 0) = ((MR_Box) (mercury__string__Subst_7));
#line 4363 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_17_17, 1) = ((MR_Box) (mercury__string__V_18_18));
#line 4363 "string.m"
        }
#line 4363 "string.m"
        {
#line 4363 "string.m"
          mercury__string__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 4363 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_16_16, 0) = ((MR_Box) (mercury__string__Initial_10));
#line 4363 "string.m"
          MR_hl_field(MR_mktag(1), mercury__string__V_16_16, 1) = ((MR_Box) (mercury__string__V_17_17));
#line 4363 "string.m"
        }
#line 4363 "string.m"
        {
#line 4363 "string.m"
          *mercury__string__Result_8 = mercury__string__append_list_1_f_0(mercury__string__V_16_16);
        }
#line 4363 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 4354 "string.m"
      }
#line 4354 "string.m"
    return mercury__string__succeeded;
#line 4354 "string.m"
  }
#line 831 "string.m"
}

#line 822 "string.m"
MR_String MR_CALL 
mercury__string__rstrip_pred_2_f_0(
#line 822 "string.m"
  MR_Word mercury__string__P_4,
#line 822 "string.m"
  MR_String mercury__string__S_5)
#line 822 "string.m"
{
#line 4348 "string.m"
  {
#line 4348 "string.m"
    MR_bool mercury__string__succeeded;
#line 4348 "string.m"
    MR_String mercury__string__HeadVar__3_3;
#line 4348 "string.m"
    MR_Integer mercury__string__V_6_6;
#line 4348 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4348 "string.m"
    MR_Integer mercury__string__V_8_8;
#line 4348 "string.m"
    MR_Integer mercury__string__End_16;
#line 4348 "string.m"
    MR_Integer mercury__string__Index_17;
#line 3835 "string.m"
    MR_String mercury__string___RightString_29;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 21261 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = Length;
#line 2379 "string.m"
}
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 21281 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_16  = Length;
#line 2379 "string.m"
}
#line 2895 "string.m"
    {
#line 2895 "string.m"
      mercury__string__suffix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, mercury__string__End_16, &mercury__string__Index_17);
    }
#line 2893 "string.m"
    mercury__string__V_8_8 = (mercury__string__End_16 - mercury__string__Index_17);
#line 4348 "string.m"
    mercury__string__V_6_6 = (mercury__string__V_7_7 - mercury__string__V_8_8);
#line 3835 "string.m"
    {
#line 3835 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_5, mercury__string__V_6_6, &mercury__string__HeadVar__3_3, &mercury__string___RightString_29);
    }
#line 4348 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4348 "string.m"
  }
#line 822 "string.m"
}

#line 814 "string.m"
MR_String MR_CALL 
mercury__string__lstrip_pred_2_f_0(
#line 814 "string.m"
  MR_Word mercury__string__P_4,
#line 814 "string.m"
  MR_String mercury__string__S_5)
#line 814 "string.m"
{
#line 4350 "string.m"
  {
#line 4350 "string.m"
    MR_bool mercury__string__succeeded;
#line 4350 "string.m"
    MR_String mercury__string__HeadVar__3_3;
#line 4350 "string.m"
    MR_Integer mercury__string__V_6_6;
#line 4350 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4350 "string.m"
    MR_Integer mercury__string__V_8_8;
#line 4350 "string.m"
    MR_Integer mercury__string__Length_24;
#line 4350 "string.m"
    MR_Integer mercury__string__LeftCount_25;
#line 3849 "string.m"
    MR_String mercury__string___LeftString_26;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 21350 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = Length;
#line 2379 "string.m"
}
#line 2878 "string.m"
    {
#line 2878 "string.m"
      mercury__string__prefix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, (MR_Integer) 0, &mercury__string__V_8_8);
    }
#line 4350 "string.m"
    mercury__string__V_6_6 = (mercury__string__V_7_7 - mercury__string__V_8_8);
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_pred_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 21377 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_24  = Length;
#line 2379 "string.m"
}
#line 3848 "string.m"
    mercury__string__LeftCount_25 = (mercury__string__Length_24 - mercury__string__V_6_6);
#line 3849 "string.m"
    {
#line 3849 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_5, mercury__string__LeftCount_25, &mercury__string___LeftString_26, &mercury__string__HeadVar__3_3);
    }
#line 4350 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4350 "string.m"
  }
#line 814 "string.m"
}

#line 807 "string.m"
MR_String MR_CALL 
mercury__string__strip_1_f_0(
#line 807 "string.m"
  MR_String mercury__string__S0_3)
#line 807 "string.m"
{
#line 4339 "string.m"
  {
#line 4339 "string.m"
    MR_bool mercury__string__succeeded;
#line 4339 "string.m"
    MR_String mercury__string__S_4;
#line 4339 "string.m"
    MR_Integer mercury__string__L_5;
#line 4339 "string.m"
    MR_Integer mercury__string__R_6;
#line 4339 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4339 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4339 "string.m"
    MR_Integer mercury__string__End_21;
#line 4339 "string.m"
    MR_Integer mercury__string__Index_22;

#line 2878 "string.m"
    {
#line 2878 "string.m"
      mercury__string__prefix_length_loop__ho32_4_p_0(mercury__string__S0_3, (MR_Integer) 0, &mercury__string__L_5);
    }
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__strip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S0_3 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 21442 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_21  = Length;
#line 2379 "string.m"
}
#line 2895 "string.m"
    {
#line 2895 "string.m"
      mercury__string__suffix_length_loop__ho33_4_p_0(mercury__string__S0_3, mercury__string__End_21, &mercury__string__Index_22);
    }
#line 2893 "string.m"
    mercury__string__R_6 = (mercury__string__End_21 - mercury__string__Index_22);
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__strip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S0_3 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 21469 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2379 "string.m"
}
#line 4342 "string.m"
    mercury__string__V_9_9 = (mercury__string__V_10_10 - mercury__string__R_6);
#line 3862 "string.m"
    {
#line 3862 "string.m"
      mercury__string__between_4_p_0(mercury__string__S0_3, mercury__string__L_5, mercury__string__V_9_9, &mercury__string__S_4);
    }
#line 4339 "string.m"
    return mercury__string__S_4;
#line 4339 "string.m"
  }
#line 807 "string.m"
}

#line 800 "string.m"
MR_String MR_CALL 
mercury__string__rstrip_1_f_0(
#line 800 "string.m"
  MR_String mercury__string__S_3)
#line 800 "string.m"
{
#line 4344 "string.m"
  {
#line 4344 "string.m"
    MR_bool mercury__string__succeeded;
#line 4344 "string.m"
    MR_String mercury__string__HeadVar__2_2;
#line 4344 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4344 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4344 "string.m"
    MR_Integer mercury__string__V_11_11;
#line 4344 "string.m"
    MR_Integer mercury__string__End_20;
#line 4344 "string.m"
    MR_Integer mercury__string__Index_21;
#line 3835 "string.m"
    MR_String mercury__string___RightString_33;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 21529 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2379 "string.m"
}
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__rstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 21549 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_20  = Length;
#line 2379 "string.m"
}
#line 2895 "string.m"
    {
#line 2895 "string.m"
      mercury__string__suffix_length_loop__ho33_4_p_0(mercury__string__S_3, mercury__string__End_20, &mercury__string__Index_21);
    }
#line 2893 "string.m"
    mercury__string__V_11_11 = (mercury__string__End_20 - mercury__string__Index_21);
#line 4348 "string.m"
    mercury__string__V_9_9 = (mercury__string__V_10_10 - mercury__string__V_11_11);
#line 3835 "string.m"
    {
#line 3835 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__V_9_9, &mercury__string__HeadVar__2_2, &mercury__string___RightString_33);
    }
#line 4344 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4344 "string.m"
  }
#line 800 "string.m"
}

#line 793 "string.m"
MR_String MR_CALL 
mercury__string__lstrip_1_f_0(
#line 793 "string.m"
  MR_String mercury__string__S_3)
#line 793 "string.m"
{
#line 4346 "string.m"
  {
#line 4346 "string.m"
    MR_bool mercury__string__succeeded;
#line 4346 "string.m"
    MR_String mercury__string__HeadVar__2_2;
#line 4346 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4346 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4346 "string.m"
    MR_Integer mercury__string__V_11_11;
#line 4346 "string.m"
    MR_Integer mercury__string__Length_28;
#line 4346 "string.m"
    MR_Integer mercury__string__LeftCount_29;
#line 3849 "string.m"
    MR_String mercury__string___LeftString_30;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 21616 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2379 "string.m"
}
#line 2878 "string.m"
    {
#line 2878 "string.m"
      mercury__string__prefix_length_loop__ho32_4_p_0(mercury__string__S_3, (MR_Integer) 0, &mercury__string__V_11_11);
    }
#line 4350 "string.m"
    mercury__string__V_9_9 = (mercury__string__V_10_10 - mercury__string__V_11_11);
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__lstrip_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 21643 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_28  = Length;
#line 2379 "string.m"
}
#line 3848 "string.m"
    mercury__string__LeftCount_29 = (mercury__string__Length_28 - mercury__string__V_9_9);
#line 3849 "string.m"
    {
#line 3849 "string.m"
      mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__LeftCount_29, &mercury__string___LeftString_30, &mercury__string__HeadVar__2_2);
    }
#line 4346 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4346 "string.m"
  }
#line 793 "string.m"
}

#line 786 "string.m"
MR_String MR_CALL 
mercury__string__chomp_1_f_0(
#line 786 "string.m"
  MR_String mercury__string__S_3)
#line 786 "string.m"
{
#line 4335 "string.m"
  {
#line 4335 "string.m"
    MR_bool mercury__string__succeeded;
#line 4335 "string.m"
    MR_String mercury__string__Chomp_4;
#line 4335 "string.m"
    MR_Integer mercury__string__Offset_5;
#line 4333 "string.m"
    MR_Integer mercury__string__V_6_6;
#line 4333 "string.m"
    MR_Char mercury__string__V_8_8;
#line 4333 "string.m"
    MR_Integer mercury__string__Len_18;
#line 4333 "string.m"
    MR_Integer mercury__string__V_19_19;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 21701 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_6_6  = Length;
#line 2379 "string.m"
}
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 21721 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_18  = Length;
#line 2379 "string.m"
}
#line 2002 "string.m"
    mercury__string__V_19_19 = (mercury__string__V_6_6 - (MR_Integer) 1);
#line 2113 "string.m"
{
#define MR_PROC_LABEL mercury__string__chomp_1_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__V_19_19 ;
	Length =  mercury__string__Len_18 ;
		{
#line 2113 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 21752 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2113 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4333 "string.m"
    if (mercury__string__succeeded)
#line 4333 "string.m"
      {
#line 2012 "string.m"
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
#line 2012 "string.m"

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

#line 21793 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Offset_5  = PrevIndex;
	 mercury__string__V_8_8  = Ch;
#line 2012 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4333 "string.m"
        if (mercury__string__succeeded)
#line 4333 "string.m"
          mercury__string__succeeded = ((MR_Char) 10 == mercury__string__V_8_8);
#line 4333 "string.m"
      }
#line 4335 "string.m"
    if (mercury__string__succeeded)
#line 3835 "string.m"
      {
#line 3835 "string.m"
        MR_String mercury__string___RightString_35;

#line 3835 "string.m"
        {
#line 3835 "string.m"
          mercury__string__split_4_p_0(mercury__string__S_3, mercury__string__Offset_5, &mercury__string__Chomp_4, &mercury__string___RightString_35);
        }
#line 3835 "string.m"
      }
#line 4335 "string.m"
    else
#line 4336 "string.m"
      mercury__string__Chomp_4 = mercury__string__S_3;
#line 4335 "string.m"
    return mercury__string__Chomp_4;
#line 4335 "string.m"
  }
#line 786 "string.m"
}

#line 780 "string.m"
void MR_CALL 
mercury__string__pad_right_4_p_0(
#line 780 "string.m"
  MR_String mercury__string__String0_5,
#line 780 "string.m"
  MR_Char mercury__string__PadChar_6,
#line 780 "string.m"
  MR_Integer mercury__string__Width_7,
#line 780 "string.m"
  MR_String * mercury__string__String_8)
#line 780 "string.m"
{
#line 4322 "string.m"
  {
#line 4322 "string.m"
    MR_bool mercury__string__succeeded;
#line 4322 "string.m"
    MR_Integer mercury__string__Length_9;

#line 4323 "string.m"
    {
#line 4323 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String0_5, &mercury__string__Length_9);
    }
#line 4324 "string.m"
    mercury__string__succeeded = (mercury__string__Length_9 < mercury__string__Width_7);
#line 4328 "string.m"
    if (mercury__string__succeeded)
#line 4325 "string.m"
      {
#line 4325 "string.m"
        MR_Integer mercury__string__Count_10 = (mercury__string__Width_7 - mercury__string__Length_9);
#line 4325 "string.m"
        MR_String mercury__string__PadString_11;

#line 4326 "string.m"
        {
#line 4326 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__PadChar_6, mercury__string__Count_10, &mercury__string__PadString_11);
        }
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_right_4_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__String0_5 ;
	S2 =  mercury__string__PadString_11 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 21896 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__String_8  = S3;
#line 3128 "string.m"
}
#line 4325 "string.m"
      }
#line 4328 "string.m"
    else
#line 4329 "string.m"
      *mercury__string__String_8 = mercury__string__String0_5;
#line 4322 "string.m"
  }
#line 780 "string.m"
}

#line 779 "string.m"
MR_String MR_CALL 
mercury__string__pad_right_3_f_0(
#line 779 "string.m"
  MR_String mercury__string__S1_5,
#line 779 "string.m"
  MR_Char mercury__string__C_6,
#line 779 "string.m"
  MR_Integer mercury__string__N_7)
#line 779 "string.m"
{
#line 4322 "string.m"
  {
#line 4322 "string.m"
    MR_bool mercury__string__succeeded;
#line 4322 "string.m"
    MR_String mercury__string__S2_8;
#line 4322 "string.m"
    MR_Integer mercury__string__Length_13;

#line 4323 "string.m"
    {
#line 4323 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__S1_5, &mercury__string__Length_13);
    }
#line 4324 "string.m"
    mercury__string__succeeded = (mercury__string__Length_13 < mercury__string__N_7);
#line 4328 "string.m"
    if (mercury__string__succeeded)
#line 4325 "string.m"
      {
#line 4325 "string.m"
        MR_Integer mercury__string__Count_14 = (mercury__string__N_7 - mercury__string__Length_13);
#line 4325 "string.m"
        MR_String mercury__string__PadString_15;

#line 4326 "string.m"
        {
#line 4326 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__C_6, mercury__string__Count_14, &mercury__string__PadString_15);
        }
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_right_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_5 ;
	S2 =  mercury__string__PadString_15 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 21975 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_8  = S3;
#line 3128 "string.m"
}
#line 4325 "string.m"
      }
#line 4328 "string.m"
    else
#line 4329 "string.m"
      mercury__string__S2_8 = mercury__string__S1_5;
#line 4322 "string.m"
    return mercury__string__S2_8;
#line 4322 "string.m"
  }
#line 779 "string.m"
}

#line 771 "string.m"
void MR_CALL 
mercury__string__pad_left_4_p_0(
#line 771 "string.m"
  MR_String mercury__string__String0_5,
#line 771 "string.m"
  MR_Char mercury__string__PadChar_6,
#line 771 "string.m"
  MR_Integer mercury__string__Width_7,
#line 771 "string.m"
  MR_String * mercury__string__String_8)
#line 771 "string.m"
{
#line 4309 "string.m"
  {
#line 4309 "string.m"
    MR_bool mercury__string__succeeded;
#line 4309 "string.m"
    MR_Integer mercury__string__Length_9;

#line 4310 "string.m"
    {
#line 4310 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String0_5, &mercury__string__Length_9);
    }
#line 4311 "string.m"
    mercury__string__succeeded = (mercury__string__Length_9 < mercury__string__Width_7);
#line 4315 "string.m"
    if (mercury__string__succeeded)
#line 4312 "string.m"
      {
#line 4312 "string.m"
        MR_Integer mercury__string__Count_10 = (mercury__string__Width_7 - mercury__string__Length_9);
#line 4312 "string.m"
        MR_String mercury__string__PadString_11;

#line 4313 "string.m"
        {
#line 4313 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__PadChar_6, mercury__string__Count_10, &mercury__string__PadString_11);
        }
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_left_4_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_11 ;
	S2 =  mercury__string__String0_5 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 22056 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__String_8  = S3;
#line 3128 "string.m"
}
#line 4312 "string.m"
      }
#line 4315 "string.m"
    else
#line 4316 "string.m"
      *mercury__string__String_8 = mercury__string__String0_5;
#line 4309 "string.m"
  }
#line 771 "string.m"
}

#line 770 "string.m"
MR_String MR_CALL 
mercury__string__pad_left_3_f_0(
#line 770 "string.m"
  MR_String mercury__string__S1_5,
#line 770 "string.m"
  MR_Char mercury__string__C_6,
#line 770 "string.m"
  MR_Integer mercury__string__N_7)
#line 770 "string.m"
{
#line 4309 "string.m"
  {
#line 4309 "string.m"
    MR_bool mercury__string__succeeded;
#line 4309 "string.m"
    MR_String mercury__string__S2_8;
#line 4309 "string.m"
    MR_Integer mercury__string__Length_13;

#line 4310 "string.m"
    {
#line 4310 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__S1_5, &mercury__string__Length_13);
    }
#line 4311 "string.m"
    mercury__string__succeeded = (mercury__string__Length_13 < mercury__string__N_7);
#line 4315 "string.m"
    if (mercury__string__succeeded)
#line 4312 "string.m"
      {
#line 4312 "string.m"
        MR_Integer mercury__string__Count_14 = (mercury__string__N_7 - mercury__string__Length_13);
#line 4312 "string.m"
        MR_String mercury__string__PadString_15;

#line 4313 "string.m"
        {
#line 4313 "string.m"
          mercury__string__duplicate_char_3_p_0(mercury__string__C_6, mercury__string__Count_14, &mercury__string__PadString_15);
        }
#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__pad_left_3_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__PadString_15 ;
	S2 =  mercury__string__S1_5 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 22135 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S2_8  = S3;
#line 3128 "string.m"
}
#line 4312 "string.m"
      }
#line 4315 "string.m"
    else
#line 4316 "string.m"
      mercury__string__S2_8 = mercury__string__S1_5;
#line 4309 "string.m"
    return mercury__string__S2_8;
#line 4309 "string.m"
  }
#line 770 "string.m"
}

#line 762 "string.m"
MR_bool MR_CALL 
mercury__string__to_lower_2_p_1(
#line 762 "string.m"
  MR_String mercury__string__StrIn_3,
#line 762 "string.m"
  MR_String mercury__string__StrOut_4)
#line 762 "string.m"
{
#line 4292 "string.m"
  {
#line 4292 "string.m"
    MR_bool mercury__string__succeeded;
#line 4292 "string.m"
    MR_Word mercury__string__List_5;
#line 4292 "string.m"
    MR_Word mercury__string__ListLow_6;
#line 4292 "string.m"
    MR_String mercury__string__V_7_7;
#line 1421 "string.m"
    MR_String mercury__string__Str0_20;

#line 1343 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1343 "string.m"
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
#line 22201 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1343 "string.m"
}
#line 4294 "string.m"
    {
#line 4294 "string.m"
      mercury__string__char_list_to_lower_2_p_0(mercury__string__List_5, &mercury__string__ListLow_6);
    }
#line 1419 "string.m"
    {
#line 1419 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListLow_6, &mercury__string__Str0_20);
    }
#line 1421 "string.m"
    if (mercury__string__succeeded)
#line 1420 "string.m"
      mercury__string__V_7_7 = mercury__string__Str0_20;
#line 1421 "string.m"
    else
#line 1422 "string.m"
      {
#line 1422 "string.m"
        {
#line 1422 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1422 "string.m"
      }
#line 4295 "string.m"
    mercury__string__succeeded = (strcmp(mercury__string__StrOut_4, mercury__string__V_7_7) == 0);
#line 4292 "string.m"
    return mercury__string__succeeded;
#line 4292 "string.m"
  }
#line 762 "string.m"
}

#line 761 "string.m"
void MR_CALL 
mercury__string__to_lower_2_p_0(
#line 761 "string.m"
  MR_String mercury__string__StrIn_3,
#line 761 "string.m"
  MR_String * mercury__string__StrOut_4)
#line 761 "string.m"
{
#line 4292 "string.m"
  {
#line 4292 "string.m"
    MR_bool mercury__string__succeeded;
#line 4292 "string.m"
    MR_Word mercury__string__List_5;
#line 4292 "string.m"
    MR_Word mercury__string__ListLow_6;
#line 1421 "string.m"
    MR_String mercury__string__Str0_19;

#line 1343 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_lower_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1343 "string.m"
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
#line 22286 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1343 "string.m"
}
#line 4294 "string.m"
    {
#line 4294 "string.m"
      mercury__string__char_list_to_lower_2_p_0(mercury__string__List_5, &mercury__string__ListLow_6);
    }
#line 1419 "string.m"
    {
#line 1419 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListLow_6, &mercury__string__Str0_19);
    }
#line 1421 "string.m"
    if (mercury__string__succeeded)
#line 1420 "string.m"
      *mercury__string__StrOut_4 = mercury__string__Str0_19;
#line 1421 "string.m"
    else
#line 1422 "string.m"
      {
#line 1422 "string.m"
        {
#line 1422 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1422 "string.m"
          return;
        }
#line 1422 "string.m"
      }
#line 4292 "string.m"
  }
#line 761 "string.m"
}

#line 759 "string.m"
MR_String MR_CALL 
mercury__string__to_lower_1_f_0(
#line 759 "string.m"
  MR_String mercury__string__S1_3)
#line 759 "string.m"
{
#line 4292 "string.m"
  {
#line 4292 "string.m"
    MR_bool mercury__string__succeeded;
#line 4292 "string.m"
    MR_String mercury__string__S2_4;
#line 4292 "string.m"
    MR_Word mercury__string__List_7;
#line 4292 "string.m"
    MR_Word mercury__string__ListLow_8;
#line 1421 "string.m"
    MR_String mercury__string__Str0_21;

#line 1343 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_lower_1_f_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__S1_3 ;
		{
#line 1343 "string.m"
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
#line 22369 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_7  = CharList;
#line 1343 "string.m"
}
#line 4294 "string.m"
    {
#line 4294 "string.m"
      mercury__string__char_list_to_lower_2_p_0(mercury__string__List_7, &mercury__string__ListLow_8);
    }
#line 1419 "string.m"
    {
#line 1419 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListLow_8, &mercury__string__Str0_21);
    }
#line 1421 "string.m"
    if (mercury__string__succeeded)
#line 1420 "string.m"
      mercury__string__S2_4 = mercury__string__Str0_21;
#line 1421 "string.m"
    else
#line 1422 "string.m"
      {
#line 1422 "string.m"
        {
#line 1422 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1422 "string.m"
      }
#line 4292 "string.m"
    return mercury__string__S2_4;
#line 4292 "string.m"
  }
#line 759 "string.m"
}

#line 754 "string.m"
MR_bool MR_CALL 
mercury__string__to_upper_2_p_1(
#line 754 "string.m"
  MR_String mercury__string__StrIn_3,
#line 754 "string.m"
  MR_String mercury__string__StrOut_4)
#line 754 "string.m"
{
#line 4277 "string.m"
  {
#line 4277 "string.m"
    MR_bool mercury__string__succeeded;
#line 4277 "string.m"
    MR_Word mercury__string__List_5;
#line 4277 "string.m"
    MR_Word mercury__string__ListUpp_6;
#line 4277 "string.m"
    MR_String mercury__string__V_7_7;
#line 1421 "string.m"
    MR_String mercury__string__Str0_20;

#line 1343 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1343 "string.m"
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
#line 22454 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1343 "string.m"
}
#line 4279 "string.m"
    {
#line 4279 "string.m"
      mercury__string__char_list_to_upper_2_p_0(mercury__string__List_5, &mercury__string__ListUpp_6);
    }
#line 1419 "string.m"
    {
#line 1419 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListUpp_6, &mercury__string__Str0_20);
    }
#line 1421 "string.m"
    if (mercury__string__succeeded)
#line 1420 "string.m"
      mercury__string__V_7_7 = mercury__string__Str0_20;
#line 1421 "string.m"
    else
#line 1422 "string.m"
      {
#line 1422 "string.m"
        {
#line 1422 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1422 "string.m"
      }
#line 4280 "string.m"
    mercury__string__succeeded = (strcmp(mercury__string__StrOut_4, mercury__string__V_7_7) == 0);
#line 4277 "string.m"
    return mercury__string__succeeded;
#line 4277 "string.m"
  }
#line 754 "string.m"
}

#line 753 "string.m"
void MR_CALL 
mercury__string__to_upper_2_p_0(
#line 753 "string.m"
  MR_String mercury__string__StrIn_3,
#line 753 "string.m"
  MR_String * mercury__string__StrOut_4)
#line 753 "string.m"
{
#line 4277 "string.m"
  {
#line 4277 "string.m"
    MR_bool mercury__string__succeeded;
#line 4277 "string.m"
    MR_Word mercury__string__List_5;
#line 4277 "string.m"
    MR_Word mercury__string__ListUpp_6;
#line 1421 "string.m"
    MR_String mercury__string__Str0_19;

#line 1343 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_upper_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__StrIn_3 ;
		{
#line 1343 "string.m"
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
#line 22539 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_5  = CharList;
#line 1343 "string.m"
}
#line 4279 "string.m"
    {
#line 4279 "string.m"
      mercury__string__char_list_to_upper_2_p_0(mercury__string__List_5, &mercury__string__ListUpp_6);
    }
#line 1419 "string.m"
    {
#line 1419 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListUpp_6, &mercury__string__Str0_19);
    }
#line 1421 "string.m"
    if (mercury__string__succeeded)
#line 1420 "string.m"
      *mercury__string__StrOut_4 = mercury__string__Str0_19;
#line 1421 "string.m"
    else
#line 1422 "string.m"
      {
#line 1422 "string.m"
        {
#line 1422 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1422 "string.m"
          return;
        }
#line 1422 "string.m"
      }
#line 4277 "string.m"
  }
#line 753 "string.m"
}

#line 751 "string.m"
MR_String MR_CALL 
mercury__string__to_upper_1_f_0(
#line 751 "string.m"
  MR_String mercury__string__S1_3)
#line 751 "string.m"
{
#line 4277 "string.m"
  {
#line 4277 "string.m"
    MR_bool mercury__string__succeeded;
#line 4277 "string.m"
    MR_String mercury__string__S2_4;
#line 4277 "string.m"
    MR_Word mercury__string__List_7;
#line 4277 "string.m"
    MR_Word mercury__string__ListUpp_8;
#line 1421 "string.m"
    MR_String mercury__string__Str0_21;

#line 1343 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_upper_1_f_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__S1_3 ;
		{
#line 1343 "string.m"
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
#line 22622 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__List_7  = CharList;
#line 1343 "string.m"
}
#line 4279 "string.m"
    {
#line 4279 "string.m"
      mercury__string__char_list_to_upper_2_p_0(mercury__string__List_7, &mercury__string__ListUpp_8);
    }
#line 1419 "string.m"
    {
#line 1419 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__ListUpp_8, &mercury__string__Str0_21);
    }
#line 1421 "string.m"
    if (mercury__string__succeeded)
#line 1420 "string.m"
      mercury__string__S2_4 = mercury__string__Str0_21;
#line 1421 "string.m"
    else
#line 1422 "string.m"
      {
#line 1422 "string.m"
        {
#line 1422 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1422 "string.m"
      }
#line 4277 "string.m"
    return mercury__string__S2_4;
#line 4277 "string.m"
  }
#line 751 "string.m"
}

#line 746 "string.m"
void MR_CALL 
mercury__string__uncapitalize_first_2_p_0(
#line 746 "string.m"
  MR_String mercury__string__S0_3,
#line 746 "string.m"
  MR_String * mercury__string__S_4)
#line 746 "string.m"
{
#line 4270 "string.m"
  {
#line 4270 "string.m"
    MR_bool mercury__string__succeeded;
#line 4270 "string.m"
    MR_Char mercury__string__C_5;
#line 4270 "string.m"
    MR_String mercury__string__S1_6;

#line 3606 "string.m"
{
#define MR_PROC_LABEL mercury__string__uncapitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S0_3 ;
		{
#line 3606 "string.m"
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
#line 22706 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__C_5  = First;
	 mercury__string__S1_6  = Rest;
#line 3606 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4270 "string.m"
    if (mercury__string__succeeded)
#line 4268 "string.m"
      {
#line 4268 "string.m"
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
#line 3678 "string.m"
{
#define MR_PROC_LABEL mercury__string__uncapitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__LowerC_7 ;
	Rest =  mercury__string__S1_6 ;
		{
#line 3678 "string.m"
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}
#line 22758 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S_4  = Str;
#line 3678 "string.m"
}
#line 4268 "string.m"
      }
#line 4270 "string.m"
    else
#line 4271 "string.m"
      *mercury__string__S_4 = mercury__string__S0_3;
#line 4270 "string.m"
  }
#line 746 "string.m"
}

#line 745 "string.m"
MR_String MR_CALL 
mercury__string__uncapitalize_first_1_f_0(
#line 745 "string.m"
  MR_String mercury__string__S1_3)
#line 745 "string.m"
{
#line 4264 "string.m"
  {
#line 4264 "string.m"
    MR_bool mercury__string__succeeded;
#line 4264 "string.m"
    MR_String mercury__string__S2_4;

#line 4264 "string.m"
    {
#line 4264 "string.m"
      mercury__string__uncapitalize_first_2_p_0(mercury__string__S1_3, &mercury__string__S2_4);
    }
#line 4264 "string.m"
    return mercury__string__S2_4;
#line 4264 "string.m"
  }
#line 745 "string.m"
}

#line 740 "string.m"
void MR_CALL 
mercury__string__capitalize_first_2_p_0(
#line 740 "string.m"
  MR_String mercury__string__S0_3,
#line 740 "string.m"
  MR_String * mercury__string__S_4)
#line 740 "string.m"
{
#line 4259 "string.m"
  {
#line 4259 "string.m"
    MR_bool mercury__string__succeeded;
#line 4259 "string.m"
    MR_Char mercury__string__C_5;
#line 4259 "string.m"
    MR_String mercury__string__S1_6;

#line 3606 "string.m"
{
#define MR_PROC_LABEL mercury__string__capitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S0_3 ;
		{
#line 3606 "string.m"
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
#line 22847 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__C_5  = First;
	 mercury__string__S1_6  = Rest;
#line 3606 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4259 "string.m"
    if (mercury__string__succeeded)
#line 4257 "string.m"
      {
#line 4257 "string.m"
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
#line 3678 "string.m"
{
#define MR_PROC_LABEL mercury__string__capitalize_first_2_p_0

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__UpperC_7 ;
	Rest =  mercury__string__S1_6 ;
		{
#line 3678 "string.m"
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}
#line 22899 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S_4  = Str;
#line 3678 "string.m"
}
#line 4257 "string.m"
      }
#line 4259 "string.m"
    else
#line 4260 "string.m"
      *mercury__string__S_4 = mercury__string__S0_3;
#line 4259 "string.m"
  }
#line 740 "string.m"
}

#line 739 "string.m"
MR_String MR_CALL 
mercury__string__capitalize_first_1_f_0(
#line 739 "string.m"
  MR_String mercury__string__S1_3)
#line 739 "string.m"
{
#line 4253 "string.m"
  {
#line 4253 "string.m"
    MR_bool mercury__string__succeeded;
#line 4253 "string.m"
    MR_String mercury__string__S2_4;

#line 4253 "string.m"
    {
#line 4253 "string.m"
      mercury__string__capitalize_first_2_p_0(mercury__string__S1_3, &mercury__string__S2_4);
    }
#line 4253 "string.m"
    return mercury__string__S2_4;
#line 4253 "string.m"
  }
#line 739 "string.m"
}

#line 729 "string.m"
MR_String MR_CALL 
mercury__string__remove_suffix_if_present_2_f_0(
#line 729 "string.m"
  MR_String mercury__string__Suffix_4,
#line 729 "string.m"
  MR_String mercury__string__String_5)
#line 729 "string.m"
{
#line 4238 "string.m"
  {
#line 4238 "string.m"
    MR_bool mercury__string__succeeded;
#line 4238 "string.m"
    MR_String mercury__string__Out_6;
#line 4238 "string.m"
    MR_Integer mercury__string__LeftCount_7;
#line 4238 "string.m"
    MR_String mercury__string__LeftString_8;
#line 4238 "string.m"
    MR_String mercury__string__RightString_9;
#line 4238 "string.m"
    MR_Integer mercury__string__V_10_10;
#line 4238 "string.m"
    MR_Integer mercury__string__V_11_11;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_if_present_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 22982 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_10_10  = Length;
#line 2379 "string.m"
}
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_if_present_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_4 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 23002 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_11_11  = Length;
#line 2379 "string.m"
}
#line 4239 "string.m"
    mercury__string__LeftCount_7 = (mercury__string__V_10_10 - mercury__string__V_11_11);
#line 4240 "string.m"
    {
#line 4240 "string.m"
      mercury__string__split_4_p_0(mercury__string__String_5, mercury__string__LeftCount_7, &mercury__string__LeftString_8, &mercury__string__RightString_9);
    }
#line 4241 "string.m"
    mercury__string__succeeded = (strcmp(mercury__string__RightString_9, mercury__string__Suffix_4) == 0);
#line 4243 "string.m"
    if (mercury__string__succeeded)
#line 4242 "string.m"
      mercury__string__Out_6 = mercury__string__LeftString_8;
#line 4243 "string.m"
    else
#line 4244 "string.m"
      mercury__string__Out_6 = mercury__string__String_5;
#line 4238 "string.m"
    return mercury__string__Out_6;
#line 4238 "string.m"
  }
#line 729 "string.m"
}

#line 724 "string.m"
MR_String MR_CALL 
mercury__string__det_remove_suffix_2_f_0(
#line 724 "string.m"
  MR_String mercury__string__String_4,
#line 724 "string.m"
  MR_String mercury__string__Suffix_5)
#line 724 "string.m"
{
#line 4234 "string.m"
  {
#line 4234 "string.m"
    MR_bool mercury__string__succeeded;
#line 4234 "string.m"
    MR_String mercury__string__StringWithoutSuffix_6;
#line 4234 "string.m"
    MR_String mercury__string__StringWithoutSuffixPrime_7;

#line 4232 "string.m"
    {
#line 4232 "string.m"
      mercury__string__succeeded = mercury__string__remove_suffix_3_p_0(mercury__string__String_4, mercury__string__Suffix_5, &mercury__string__StringWithoutSuffixPrime_7);
    }
#line 4234 "string.m"
    if (mercury__string__succeeded)
#line 4233 "string.m"
      mercury__string__StringWithoutSuffix_6 = mercury__string__StringWithoutSuffixPrime_7;
#line 4234 "string.m"
    else
#line 4235 "string.m"
      {
#line 4235 "string.m"
        {
#line 4235 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_remove_suffix: string does not have given suffix");
        }
#line 4235 "string.m"
      }
#line 4234 "string.m"
    return mercury__string__StringWithoutSuffix_6;
#line 4234 "string.m"
  }
#line 724 "string.m"
}

#line 719 "string.m"
MR_bool MR_CALL 
mercury__string__remove_suffix_3_p_0(
#line 719 "string.m"
  MR_String mercury__string__String_4,
#line 719 "string.m"
  MR_String mercury__string__Suffix_5,
#line 719 "string.m"
  MR_String * mercury__string__StringWithoutSuffix_6)
#line 719 "string.m"
{
#line 4227 "string.m"
  {
#line 4227 "string.m"
    MR_bool mercury__string__succeeded;
#line 4227 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4227 "string.m"
    MR_Integer mercury__string__V_8_8;
#line 4227 "string.m"
    MR_Integer mercury__string__V_9_9;
#line 4227 "string.m"
    MR_Integer mercury__string__Len_12;
#line 4227 "string.m"
    MR_Integer mercury__string__PreLen_13;
#line 4227 "string.m"
    MR_Integer mercury__string__V_14_14;
#line 4227 "string.m"
    MR_Integer mercury__string__V_15_15;
#line 3835 "string.m"
    MR_String mercury__string___RightString_43;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 23123 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_12  = Length;
#line 2379 "string.m"
}
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_5 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 23143 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_13  = Length;
#line 2379 "string.m"
}
#line 4187 "string.m"
    mercury__string__succeeded = (mercury__string__PreLen_13 <= mercury__string__Len_12);
#line 4227 "string.m"
    if (mercury__string__succeeded)
#line 4227 "string.m"
      {
#line 4188 "string.m"
        mercury__string__V_14_14 = (MR_Integer) 0;
#line 4188 "string.m"
        mercury__string__V_15_15 = (mercury__string__Len_12 - mercury__string__PreLen_13);
#line 4188 "string.m"
        {
#line 4188 "string.m"
          mercury__string__succeeded = mercury__string__suffix_2_iiii_5_p_0(mercury__string__String_4, mercury__string__Suffix_5, mercury__string__V_14_14, mercury__string__V_15_15, mercury__string__PreLen_13);
        }
#line 4227 "string.m"
        if (mercury__string__succeeded)
#line 4227 "string.m"
          {
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 23182 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_8_8  = Length;
#line 2379 "string.m"
}
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_suffix_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_5 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 23202 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_9_9  = Length;
#line 2379 "string.m"
}
#line 4229 "string.m"
            mercury__string__V_7_7 = (mercury__string__V_8_8 - mercury__string__V_9_9);
#line 3835 "string.m"
            {
#line 3835 "string.m"
              mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__V_7_7, mercury__string__StringWithoutSuffix_6, &mercury__string___RightString_43);
            }
#line 3835 "string.m"
            mercury__string__succeeded = MR_TRUE;
#line 4227 "string.m"
          }
#line 4227 "string.m"
      }
#line 4227 "string.m"
    return mercury__string__succeeded;
#line 4227 "string.m"
  }
#line 719 "string.m"
}

#line 712 "string.m"
MR_String MR_CALL 
mercury__string__remove_prefix_if_present_2_f_0(
#line 712 "string.m"
  MR_String mercury__string__Prefix_4,
#line 712 "string.m"
  MR_String mercury__string__String_5)
#line 712 "string.m"
{
#line 4223 "string.m"
  {
#line 4223 "string.m"
    MR_bool mercury__string__succeeded;
#line 4223 "string.m"
    MR_String mercury__string__Out_6;
#line 4223 "string.m"
    MR_String mercury__string__Suffix_7;

#line 3076 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_prefix_if_present_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__Prefix_4 ;
	S3 =  mercury__string__String_5 ;
		{
#line 3076 "string.m"
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
#line 23277 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__Suffix_7  = S2;
#line 3076 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 4223 "string.m"
    if (mercury__string__succeeded)
#line 4222 "string.m"
      mercury__string__Out_6 = mercury__string__Suffix_7;
#line 4223 "string.m"
    else
#line 4224 "string.m"
      mercury__string__Out_6 = mercury__string__String_5;
#line 4223 "string.m"
    return mercury__string__Out_6;
#line 4223 "string.m"
  }
#line 712 "string.m"
}

#line 707 "string.m"
MR_bool MR_CALL 
mercury__string__remove_prefix_3_p_0(
#line 707 "string.m"
  MR_String mercury__string__Prefix_4,
#line 707 "string.m"
  MR_String mercury__string__String_5,
#line 707 "string.m"
  MR_String * mercury__string__Suffix_6)
#line 707 "string.m"
{
#line 3072 "string.m"
  {
#line 3072 "string.m"
    MR_bool mercury__string__succeeded;

#line 3076 "string.m"
{
#define MR_PROC_LABEL mercury__string__remove_prefix_3_p_0

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__Prefix_4 ;
	S3 =  mercury__string__String_5 ;
		{
#line 3076 "string.m"
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
#line 23348 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Suffix_6  = S2;
#line 3076 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3072 "string.m"
    return mercury__string__succeeded;
#line 3072 "string.m"
  }
#line 707 "string.m"
}

#line 700 "string.m"
void MR_CALL 
mercury__string__suffix_2_p_1(
#line 700 "string.m"
  MR_String mercury__string__String_1,
#line 700 "string.m"
  MR_String * mercury__string__Suffix_2,
#line 700 "string.m"
  MR_Cont mercury__string__cont,
#line 700 "string.m"
  void * mercury__string__cont_env_ptr)
#line 700 "string.m"
{
#line 4189 "string.m"
  {
#line 4189 "string.m"
    MR_bool mercury__string__succeeded;
#line 4189 "string.m"
    MR_Integer mercury__string__Len_11;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 23398 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_11  = Length;
#line 2379 "string.m"
}
#line 4191 "string.m"
    {
#line 4191 "string.m"
      mercury__string__suffix_2_ioii_4_p_0(mercury__string__String_1, mercury__string__Suffix_2, mercury__string__Len_11, mercury__string__Len_11, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4191 "string.m"
      return;
    }
#line 4189 "string.m"
  }
#line 700 "string.m"
}

#line 699 "string.m"
MR_bool MR_CALL 
mercury__string__suffix_2_p_0(
#line 699 "string.m"
  MR_String mercury__string__String_1,
#line 699 "string.m"
  MR_String mercury__string__Suffix_2)
#line 699 "string.m"
{
#line 4184 "string.m"
  {
#line 4184 "string.m"
    MR_bool mercury__string__succeeded;
#line 4184 "string.m"
    MR_Integer mercury__string__Len_5;
#line 4184 "string.m"
    MR_Integer mercury__string__PreLen_6;
#line 4184 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4184 "string.m"
    MR_Integer mercury__string__V_8_8;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 23452 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_5  = Length;
#line 2379 "string.m"
}
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Suffix_2 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 23472 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_6  = Length;
#line 2379 "string.m"
}
#line 4187 "string.m"
    mercury__string__succeeded = (mercury__string__PreLen_6 <= mercury__string__Len_5);
#line 4184 "string.m"
    if (mercury__string__succeeded)
#line 4184 "string.m"
      {
#line 4188 "string.m"
        mercury__string__V_7_7 = (MR_Integer) 0;
#line 4188 "string.m"
        mercury__string__V_8_8 = (mercury__string__Len_5 - mercury__string__PreLen_6);
#line 4188 "string.m"
        {
#line 4188 "string.m"
          return mercury__string__succeeded = mercury__string__suffix_2_iiii_5_p_0(mercury__string__String_1, mercury__string__Suffix_2, mercury__string__V_7_7, mercury__string__V_8_8, mercury__string__PreLen_6);
        }
#line 4184 "string.m"
      }
#line 4184 "string.m"
    return mercury__string__succeeded;
#line 4184 "string.m"
  }
#line 699 "string.m"
}

#line 693 "string.m"
void MR_CALL 
mercury__string__prefix_2_p_1(
#line 693 "string.m"
  MR_String mercury__string__String_1,
#line 693 "string.m"
  MR_String * mercury__string__Prefix_2,
#line 693 "string.m"
  MR_Cont mercury__string__cont,
#line 693 "string.m"
  void * mercury__string__cont_env_ptr)
#line 693 "string.m"
{
#line 4158 "string.m"
  {
#line 4158 "string.m"
    MR_bool mercury__string__succeeded;

#line 4159 "string.m"
    {
#line 4159 "string.m"
      mercury__string__prefix_2_ioi_3_p_0(mercury__string__String_1, mercury__string__Prefix_2, (MR_Integer) 0, mercury__string__cont, mercury__string__cont_env_ptr);
#line 4159 "string.m"
      return;
    }
#line 4158 "string.m"
  }
#line 693 "string.m"
}

#line 692 "string.m"
MR_bool MR_CALL 
mercury__string__prefix_2_p_0(
#line 692 "string.m"
  MR_String mercury__string__String_1,
#line 692 "string.m"
  MR_String mercury__string__Prefix_2)
#line 692 "string.m"
{
#line 4153 "string.m"
  {
#line 4153 "string.m"
    MR_bool mercury__string__succeeded;
#line 4153 "string.m"
    MR_Integer mercury__string__Len_5;
#line 4153 "string.m"
    MR_Integer mercury__string__PreLen_6;
#line 4153 "string.m"
    MR_Integer mercury__string__V_7_7;
#line 4153 "string.m"
    MR_Integer mercury__string__V_8_8;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_1 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 23568 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_5  = Length;
#line 2379 "string.m"
}
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__prefix_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Prefix_2 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 23588 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__PreLen_6  = Length;
#line 2379 "string.m"
}
#line 4156 "string.m"
    mercury__string__succeeded = (mercury__string__PreLen_6 <= mercury__string__Len_5);
#line 4153 "string.m"
    if (mercury__string__succeeded)
#line 4153 "string.m"
      {
#line 4157 "string.m"
        mercury__string__V_8_8 = (MR_Integer) 1;
#line 4157 "string.m"
        mercury__string__V_7_7 = (mercury__string__PreLen_6 - mercury__string__V_8_8);
#line 4157 "string.m"
        {
#line 4157 "string.m"
          return mercury__string__succeeded = mercury__string__prefix_2_iii_3_p_0(mercury__string__String_1, mercury__string__Prefix_2, mercury__string__V_7_7);
        }
#line 4153 "string.m"
      }
#line 4153 "string.m"
    return mercury__string__succeeded;
#line 4153 "string.m"
  }
#line 692 "string.m"
}

#line 681 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_string_2_f_0(
#line 681 "string.m"
  MR_String mercury__string__Needle_4,
#line 681 "string.m"
  MR_String mercury__string__Total_5)
#line 681 "string.m"
{
#line 4130 "string.m"
  {
#line 4130 "string.m"
    MR_bool mercury__string__succeeded;
#line 4130 "string.m"
    MR_Word mercury__string__HeadVar__3_3;
#line 4130 "string.m"
    MR_Integer mercury__string__V_7_7;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_string_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Needle_4 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 23650 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_7_7  = Length;
#line 2379 "string.m"
}
#line 4131 "string.m"
    {
#line 4131 "string.m"
      return mercury__string__HeadVar__3_3 = mercury__string__split_at_string_loop_4_f_0((MR_Integer) 0, mercury__string__V_7_7, mercury__string__Needle_4, mercury__string__Total_5);
    }
#line 4130 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4130 "string.m"
  }
#line 681 "string.m"
}

#line 671 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_char_2_f_0(
#line 671 "string.m"
  MR_Char mercury__string__C_4,
#line 671 "string.m"
  MR_String mercury__string__String_5)
#line 671 "string.m"
{
#line 4127 "string.m"
  {
#line 4127 "string.m"
    MR_bool mercury__string__succeeded;
#line 4127 "string.m"
    MR_Word mercury__string__HeadVar__3_3;
#line 4127 "string.m"
    MR_Integer mercury__string__Len_12;
#line 4127 "string.m"
    MR_Word mercury__string__V_14_14;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_char_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 23702 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_12  = Length;
#line 2379 "string.m"
}
#line 4097 "string.m"
    mercury__string__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4097 "string.m"
    {
#line 4097 "string.m"
      mercury__string__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_97_116_95_115_101_112_97_114_97_116_111_114_95_108_111_111_112_95_95_104_111_51_49_95_95_91_50_93_95_48_6_p_0(mercury__string__C_4, mercury__string__String_5, mercury__string__Len_12, mercury__string__Len_12, mercury__string__V_14_14, &mercury__string__HeadVar__3_3);
    }
#line 4127 "string.m"
    return mercury__string__HeadVar__3_3;
#line 4127 "string.m"
  }
#line 671 "string.m"
}

#line 666 "string.m"
MR_Word MR_CALL 
mercury__string__split_at_separator_2_f_0(
#line 666 "string.m"
  MR_Word mercury__string__DelimP_4,
#line 666 "string.m"
  MR_String mercury__string__String_5)
#line 666 "string.m"
{
#line 4095 "string.m"
  {
#line 4095 "string.m"
    MR_bool mercury__string__succeeded;
#line 4095 "string.m"
    MR_Word mercury__string__Substrings_6;
#line 4095 "string.m"
    MR_Integer mercury__string__Len_7;
#line 4095 "string.m"
    MR_Word mercury__string__V_9_9;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_at_separator_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_5 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 23756 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_7  = Length;
#line 2379 "string.m"
}
#line 4097 "string.m"
    mercury__string__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4097 "string.m"
    {
#line 4097 "string.m"
      mercury__string__split_at_separator_loop_6_p_0(mercury__string__DelimP_4, mercury__string__String_5, mercury__string__Len_7, mercury__string__Len_7, mercury__string__V_9_9, &mercury__string__Substrings_6);
    }
#line 4095 "string.m"
    return mercury__string__Substrings_6;
#line 4095 "string.m"
  }
#line 666 "string.m"
}

#line 654 "string.m"
MR_Word MR_CALL 
mercury__string__words_1_f_0(
#line 654 "string.m"
  MR_String mercury__string__String_3)
#line 654 "string.m"
{
#line 4058 "string.m"
  {
#line 4058 "string.m"
    MR_bool mercury__string__succeeded;
#line 4058 "string.m"
    MR_Word mercury__string__HeadVar__2_2;
#line 4058 "string.m"
    MR_Integer mercury__string__WordStart_10;

#line 4055 "string.m"
    {
#line 4055 "string.m"
      mercury__string__next_boundary__ho35_4_p_0(mercury__string__String_3, (MR_Integer) 0, &mercury__string__WordStart_10);
    }
#line 4056 "string.m"
    {
#line 4056 "string.m"
      mercury__string__words_loop__ho36_4_p_0(mercury__string__String_3, mercury__string__WordStart_10, &mercury__string__HeadVar__2_2);
    }
#line 4058 "string.m"
    return mercury__string__HeadVar__2_2;
#line 4058 "string.m"
  }
#line 654 "string.m"
}

#line 649 "string.m"
MR_Word MR_CALL 
mercury__string__words_separator_2_f_0(
#line 649 "string.m"
  MR_Word mercury__string__SepP_4,
#line 649 "string.m"
  MR_String mercury__string__String_5)
#line 649 "string.m"
{
#line 4054 "string.m"
  {
#line 4054 "string.m"
    MR_bool mercury__string__succeeded;
#line 4054 "string.m"
    MR_Word mercury__string__Words_6;
#line 4054 "string.m"
    MR_Integer mercury__string__WordStart_7;

#line 4055 "string.m"
    {
#line 4055 "string.m"
      mercury__string__next_boundary_4_p_0(mercury__string__SepP_4, mercury__string__String_5, (MR_Integer) 0, &mercury__string__WordStart_7);
    }
#line 4056 "string.m"
    {
#line 4056 "string.m"
      mercury__string__words_loop_4_p_0(mercury__string__SepP_4, mercury__string__String_5, mercury__string__WordStart_7, &mercury__string__Words_6);
    }
#line 4054 "string.m"
    return mercury__string__Words_6;
#line 4054 "string.m"
  }
#line 649 "string.m"
}

#line 636 "string.m"
void MR_CALL 
mercury__string__unsafe_substring_4_p_0(
#line 636 "string.m"
  MR_String mercury__string__Str_5,
#line 636 "string.m"
  MR_Integer mercury__string__Start_6,
#line 636 "string.m"
  MR_Integer mercury__string__Count_7,
#line 636 "string.m"
  MR_String * mercury__string__SubString_8)
#line 636 "string.m"
{
#line 4049 "string.m"
  {
#line 4049 "string.m"
    MR_bool mercury__string__succeeded;
#line 4049 "string.m"
    MR_Integer mercury__string__V_9_9 = (mercury__string__Start_6 + mercury__string__Count_7);

#line 4018 "string.m"
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
#line 4018 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 23887 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_8  = SubString;
#line 4018 "string.m"
}
#line 4049 "string.m"
  }
#line 636 "string.m"
}

#line 635 "string.m"
MR_String MR_CALL 
mercury__string__unsafe_substring_3_f_0(
#line 635 "string.m"
  MR_String mercury__string__Str_5,
#line 635 "string.m"
  MR_Integer mercury__string__Start_6,
#line 635 "string.m"
  MR_Integer mercury__string__Count_7)
#line 635 "string.m"
{
#line 4046 "string.m"
  {
#line 4046 "string.m"
    MR_bool mercury__string__succeeded;
#line 4046 "string.m"
    MR_String mercury__string__SubString_8;
#line 4046 "string.m"
    MR_Integer mercury__string__V_9_9 = (mercury__string__Start_6 + mercury__string__Count_7);

#line 4018 "string.m"
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
#line 4018 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 23941 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__SubString_8  = SubString;
#line 4018 "string.m"
}
#line 4046 "string.m"
    return mercury__string__SubString_8;
#line 4046 "string.m"
  }
#line 635 "string.m"
}

#line 628 "string.m"
void MR_CALL 
mercury__string__unsafe_between_4_p_0(
#line 628 "string.m"
  MR_String mercury__string__Str_1,
#line 628 "string.m"
  MR_Integer mercury__string__Start_2,
#line 628 "string.m"
  MR_Integer mercury__string__End_3,
#line 628 "string.m"
  MR_String * mercury__string__SubString_4)
#line 628 "string.m"
{
#line 4014 "string.m"
  {
#line 4014 "string.m"
    MR_bool mercury__string__succeeded;

#line 4018 "string.m"
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
#line 4018 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 23995 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_4  = SubString;
#line 4018 "string.m"
}
#line 4014 "string.m"
  }
#line 628 "string.m"
}

#line 627 "string.m"
MR_String MR_CALL 
mercury__string__unsafe_between_3_f_0(
#line 627 "string.m"
  MR_String mercury__string__Str_5,
#line 627 "string.m"
  MR_Integer mercury__string__Start_6,
#line 627 "string.m"
  MR_Integer mercury__string__End_7)
#line 627 "string.m"
{
#line 4014 "string.m"
  {
#line 4014 "string.m"
    MR_bool mercury__string__succeeded;
#line 4014 "string.m"
    MR_String mercury__string__SubString_8;

#line 4018 "string.m"
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
#line 4018 "string.m"
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}
#line 24047 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__SubString_8  = SubString;
#line 4018 "string.m"
}
#line 4014 "string.m"
    return mercury__string__SubString_8;
#line 4014 "string.m"
  }
#line 627 "string.m"
}

#line 614 "string.m"
void MR_CALL 
mercury__string__between_codepoints_4_p_0(
#line 614 "string.m"
  MR_String mercury__string__Str_5,
#line 614 "string.m"
  MR_Integer mercury__string__Start_6,
#line 614 "string.m"
  MR_Integer mercury__string__End_7,
#line 614 "string.m"
  MR_String * mercury__string__SubString_8)
#line 614 "string.m"
{
#line 3996 "string.m"
  {
#line 3996 "string.m"
    MR_bool mercury__string__succeeded;
#line 3996 "string.m"
    MR_Integer mercury__string__StartOffset_10;
#line 3996 "string.m"
    MR_Integer mercury__string__EndOffset_12;
#line 3999 "string.m"
    MR_Integer mercury__string__StartOffset0_9;
#line 4004 "string.m"
    MR_Integer mercury__string__EndOffset0_11;

#line 2570 "string.m"
    {
#line 2570 "string.m"
      mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__Start_6, &mercury__string__StartOffset0_9);
    }
#line 3999 "string.m"
    if (mercury__string__succeeded)
#line 3998 "string.m"
      mercury__string__StartOffset_10 = mercury__string__StartOffset0_9;
#line 3999 "string.m"
    else
#line 4000 "string.m"
      mercury__string__StartOffset_10 = (MR_Integer) 0;
#line 2570 "string.m"
    {
#line 2570 "string.m"
      mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__End_7, &mercury__string__EndOffset0_11);
    }
#line 4004 "string.m"
    if (mercury__string__succeeded)
#line 4003 "string.m"
      mercury__string__EndOffset_12 = mercury__string__EndOffset0_11;
#line 4004 "string.m"
    else
#line 2375 "string.m"
      {
#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__between_codepoints_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 24126 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__EndOffset_12  = Length;
#line 2379 "string.m"
}
#line 2375 "string.m"
      }
#line 4007 "string.m"
    {
#line 4007 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__StartOffset_10, mercury__string__EndOffset_12, mercury__string__SubString_8);
#line 4007 "string.m"
      return;
    }
#line 3996 "string.m"
  }
#line 614 "string.m"
}

#line 612 "string.m"
MR_String MR_CALL 
mercury__string__between_codepoints_3_f_0(
#line 612 "string.m"
  MR_String mercury__string__Str_5,
#line 612 "string.m"
  MR_Integer mercury__string__Start_6,
#line 612 "string.m"
  MR_Integer mercury__string__End_7)
#line 612 "string.m"
{
#line 3994 "string.m"
  {
#line 3994 "string.m"
    MR_bool mercury__string__succeeded;
#line 3994 "string.m"
    MR_String mercury__string__SubString_8;

#line 3994 "string.m"
    {
#line 3994 "string.m"
      mercury__string__between_codepoints_4_p_0(mercury__string__Str_5, mercury__string__Start_6, mercury__string__End_7, &mercury__string__SubString_8);
    }
#line 3994 "string.m"
    return mercury__string__SubString_8;
#line 3994 "string.m"
  }
#line 612 "string.m"
}

#line 601 "string.m"
void MR_CALL 
mercury__string__substring_4_p_0(
#line 601 "string.m"
  MR_String mercury__string__Str_5,
#line 601 "string.m"
  MR_Integer mercury__string__Start_6,
#line 601 "string.m"
  MR_Integer mercury__string__Count_7,
#line 601 "string.m"
  MR_String * mercury__string__SubString_8)
#line 601 "string.m"
{
#line 3972 "string.m"
  {
#line 3972 "string.m"
    MR_bool mercury__string__succeeded;
#line 3972 "string.m"
    MR_Integer mercury__string__ClampStart_9;
#line 3972 "string.m"
    MR_Integer mercury__string__ClampEnd_10;

#line 3973 "string.m"
    {
#line 3973 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_6, mercury__string__Count_7, &mercury__string__ClampStart_9, &mercury__string__ClampEnd_10);
    }
#line 3974 "string.m"
    {
#line 3974 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__ClampStart_9, mercury__string__ClampEnd_10, mercury__string__SubString_8);
#line 3974 "string.m"
      return;
    }
#line 3972 "string.m"
  }
#line 601 "string.m"
}

#line 600 "string.m"
MR_String MR_CALL 
mercury__string__substring_3_f_0(
#line 600 "string.m"
  MR_String mercury__string__Str_5,
#line 600 "string.m"
  MR_Integer mercury__string__Start_6,
#line 600 "string.m"
  MR_Integer mercury__string__Count_7)
#line 600 "string.m"
{
#line 3972 "string.m"
  {
#line 3972 "string.m"
    MR_bool mercury__string__succeeded;
#line 3972 "string.m"
    MR_String mercury__string__SubString_8;
#line 3972 "string.m"
    MR_Integer mercury__string__ClampStart_13;
#line 3972 "string.m"
    MR_Integer mercury__string__ClampEnd_14;

#line 3973 "string.m"
    {
#line 3973 "string.m"
      mercury__string__convert_endpoints_4_p_0(mercury__string__Start_6, mercury__string__Count_7, &mercury__string__ClampStart_13, &mercury__string__ClampEnd_14);
    }
#line 3974 "string.m"
    {
#line 3974 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__ClampStart_13, mercury__string__ClampEnd_14, &mercury__string__SubString_8);
    }
#line 3972 "string.m"
    return mercury__string__SubString_8;
#line 3972 "string.m"
  }
#line 600 "string.m"
}

#line 593 "string.m"
void MR_CALL 
mercury__string__between_4_p_0(
#line 593 "string.m"
  MR_String mercury__string__Str_1,
#line 593 "string.m"
  MR_Integer mercury__string__Start_2,
#line 593 "string.m"
  MR_Integer mercury__string__End_3,
#line 593 "string.m"
  MR_String * mercury__string__SubString_4)
#line 593 "string.m"
{
#line 3864 "string.m"
  {
#line 3864 "string.m"
    MR_bool mercury__string__succeeded;

#line 3868 "string.m"
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
#line 3868 "string.m"
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
#line 24308 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__SubString_4  = SubString;
#line 3868 "string.m"
}
#line 3864 "string.m"
  }
#line 593 "string.m"
}

#line 592 "string.m"
MR_String MR_CALL 
mercury__string__between_3_f_0(
#line 592 "string.m"
  MR_String mercury__string__Str_5,
#line 592 "string.m"
  MR_Integer mercury__string__Start_6,
#line 592 "string.m"
  MR_Integer mercury__string__End_7)
#line 592 "string.m"
{
#line 3862 "string.m"
  {
#line 3862 "string.m"
    MR_bool mercury__string__succeeded;
#line 3862 "string.m"
    MR_String mercury__string__SubString_8;

#line 3862 "string.m"
    {
#line 3862 "string.m"
      mercury__string__between_4_p_0(mercury__string__Str_5, mercury__string__Start_6, mercury__string__End_7, &mercury__string__SubString_8);
    }
#line 3862 "string.m"
    return mercury__string__SubString_8;
#line 3862 "string.m"
  }
#line 592 "string.m"
}

#line 581 "string.m"
void MR_CALL 
mercury__string__right_by_codepoint_3_p_0(
#line 581 "string.m"
  MR_String mercury__string__String_4,
#line 581 "string.m"
  MR_Integer mercury__string__RightCount_5,
#line 581 "string.m"
  MR_String * mercury__string__RightString_6)
#line 581 "string.m"
{
#line 3854 "string.m"
  {
#line 3854 "string.m"
    MR_bool mercury__string__succeeded;
#line 3854 "string.m"
    MR_Integer mercury__string__TotalCount_7;
#line 3854 "string.m"
    MR_Integer mercury__string__LeftCount_8;
#line 3857 "string.m"
    MR_String mercury__string___LeftString_9;

#line 3855 "string.m"
    {
#line 3855 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String_4, &mercury__string__TotalCount_7);
    }
#line 3856 "string.m"
    mercury__string__LeftCount_8 = (mercury__string__TotalCount_7 - mercury__string__RightCount_5);
#line 3857 "string.m"
    {
#line 3857 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__LeftCount_8, &mercury__string___LeftString_9, mercury__string__RightString_6);
    }
#line 3854 "string.m"
  }
#line 581 "string.m"
}

#line 580 "string.m"
MR_String MR_CALL 
mercury__string__right_by_codepoint_2_f_0(
#line 580 "string.m"
  MR_String mercury__string__String_4,
#line 580 "string.m"
  MR_Integer mercury__string__RightCount_5)
#line 580 "string.m"
{
#line 3854 "string.m"
  {
#line 3854 "string.m"
    MR_bool mercury__string__succeeded;
#line 3854 "string.m"
    MR_String mercury__string__RightString_6;
#line 3854 "string.m"
    MR_Integer mercury__string__TotalCount_10;
#line 3854 "string.m"
    MR_Integer mercury__string__LeftCount_11;
#line 3857 "string.m"
    MR_String mercury__string___LeftString_12;

#line 3855 "string.m"
    {
#line 3855 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String_4, &mercury__string__TotalCount_10);
    }
#line 3856 "string.m"
    mercury__string__LeftCount_11 = (mercury__string__TotalCount_10 - mercury__string__RightCount_5);
#line 3857 "string.m"
    {
#line 3857 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__LeftCount_11, &mercury__string___LeftString_12, &mercury__string__RightString_6);
    }
#line 3854 "string.m"
    return mercury__string__RightString_6;
#line 3854 "string.m"
  }
#line 580 "string.m"
}

#line 571 "string.m"
void MR_CALL 
mercury__string__right_3_p_0(
#line 571 "string.m"
  MR_String mercury__string__String_4,
#line 571 "string.m"
  MR_Integer mercury__string__RightCount_5,
#line 571 "string.m"
  MR_String * mercury__string__RightString_6)
#line 571 "string.m"
{
#line 3846 "string.m"
  {
#line 3846 "string.m"
    MR_bool mercury__string__succeeded;
#line 3846 "string.m"
    MR_Integer mercury__string__Length_7;
#line 3846 "string.m"
    MR_Integer mercury__string__LeftCount_8;
#line 3849 "string.m"
    MR_String mercury__string___LeftString_9;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__right_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 24465 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_7  = Length;
#line 2379 "string.m"
}
#line 3848 "string.m"
    mercury__string__LeftCount_8 = (mercury__string__Length_7 - mercury__string__RightCount_5);
#line 3849 "string.m"
    {
#line 3849 "string.m"
      mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__LeftCount_8, &mercury__string___LeftString_9, mercury__string__RightString_6);
    }
#line 3846 "string.m"
  }
#line 571 "string.m"
}

#line 570 "string.m"
MR_String MR_CALL 
mercury__string__right_2_f_0(
#line 570 "string.m"
  MR_String mercury__string__S1_4,
#line 570 "string.m"
  MR_Integer mercury__string__N_5)
#line 570 "string.m"
{
#line 3846 "string.m"
  {
#line 3846 "string.m"
    MR_bool mercury__string__succeeded;
#line 3846 "string.m"
    MR_String mercury__string__S2_6;
#line 3846 "string.m"
    MR_Integer mercury__string__Length_10;
#line 3846 "string.m"
    MR_Integer mercury__string__LeftCount_11;
#line 3849 "string.m"
    MR_String mercury__string___LeftString_12;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__right_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S1_4 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 24519 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_10  = Length;
#line 2379 "string.m"
}
#line 3848 "string.m"
    mercury__string__LeftCount_11 = (mercury__string__Length_10 - mercury__string__N_5);
#line 3849 "string.m"
    {
#line 3849 "string.m"
      mercury__string__split_4_p_0(mercury__string__S1_4, mercury__string__LeftCount_11, &mercury__string___LeftString_12, &mercury__string__S2_6);
    }
#line 3846 "string.m"
    return mercury__string__S2_6;
#line 3846 "string.m"
  }
#line 570 "string.m"
}

#line 562 "string.m"
void MR_CALL 
mercury__string__left_by_codepoint_3_p_0(
#line 562 "string.m"
  MR_String mercury__string__String_4,
#line 562 "string.m"
  MR_Integer mercury__string__Count_5,
#line 562 "string.m"
  MR_String * mercury__string__LeftString_6)
#line 562 "string.m"
{
#line 3841 "string.m"
  {
#line 3841 "string.m"
    MR_bool mercury__string__succeeded;
#line 3841 "string.m"
    MR_String mercury__string___RightString_7;

#line 3841 "string.m"
    {
#line 3841 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__Count_5, mercury__string__LeftString_6, &mercury__string___RightString_7);
    }
#line 3841 "string.m"
  }
#line 562 "string.m"
}

#line 561 "string.m"
MR_String MR_CALL 
mercury__string__left_by_codepoint_2_f_0(
#line 561 "string.m"
  MR_String mercury__string__String_4,
#line 561 "string.m"
  MR_Integer mercury__string__Count_5)
#line 561 "string.m"
{
#line 3841 "string.m"
  {
#line 3841 "string.m"
    MR_bool mercury__string__succeeded;
#line 3841 "string.m"
    MR_String mercury__string__LeftString_6;
#line 3841 "string.m"
    MR_String mercury__string___RightString_10;

#line 3841 "string.m"
    {
#line 3841 "string.m"
      mercury__string__split_by_codepoint_4_p_0(mercury__string__String_4, mercury__string__Count_5, &mercury__string__LeftString_6, &mercury__string___RightString_10);
    }
#line 3841 "string.m"
    return mercury__string__LeftString_6;
#line 3841 "string.m"
  }
#line 561 "string.m"
}

#line 552 "string.m"
void MR_CALL 
mercury__string__left_3_p_0(
#line 552 "string.m"
  MR_String mercury__string__String_4,
#line 552 "string.m"
  MR_Integer mercury__string__Count_5,
#line 552 "string.m"
  MR_String * mercury__string__LeftString_6)
#line 552 "string.m"
{
#line 3835 "string.m"
  {
#line 3835 "string.m"
    MR_bool mercury__string__succeeded;
#line 3835 "string.m"
    MR_String mercury__string___RightString_7;

#line 3835 "string.m"
    {
#line 3835 "string.m"
      mercury__string__split_4_p_0(mercury__string__String_4, mercury__string__Count_5, mercury__string__LeftString_6, &mercury__string___RightString_7);
    }
#line 3835 "string.m"
  }
#line 552 "string.m"
}

#line 551 "string.m"
MR_String MR_CALL 
mercury__string__left_2_f_0(
#line 551 "string.m"
  MR_String mercury__string__S1_4,
#line 551 "string.m"
  MR_Integer mercury__string__N_5)
#line 551 "string.m"
{
#line 3835 "string.m"
  {
#line 3835 "string.m"
    MR_bool mercury__string__succeeded;
#line 3835 "string.m"
    MR_String mercury__string__S2_6;
#line 3835 "string.m"
    MR_String mercury__string___RightString_10;

#line 3835 "string.m"
    {
#line 3835 "string.m"
      mercury__string__split_4_p_0(mercury__string__S1_4, mercury__string__N_5, &mercury__string__S2_6, &mercury__string___RightString_10);
    }
#line 3835 "string.m"
    return mercury__string__S2_6;
#line 3835 "string.m"
  }
#line 551 "string.m"
}

#line 542 "string.m"
void MR_CALL 
mercury__string__split_by_codepoint_4_p_0(
#line 542 "string.m"
  MR_String mercury__string__Str_5,
#line 542 "string.m"
  MR_Integer mercury__string__Count_6,
#line 542 "string.m"
  MR_String * mercury__string__Left_7,
#line 542 "string.m"
  MR_String * mercury__string__Right_8)
#line 542 "string.m"
{
#line 3821 "string.m"
  {
#line 3821 "string.m"
    MR_bool mercury__string__succeeded;
#line 3821 "string.m"
    MR_Integer mercury__string__Offset_9;

#line 2570 "string.m"
    {
#line 2570 "string.m"
      mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__Str_5, (MR_Integer) 0, mercury__string__Count_6, &mercury__string__Offset_9);
    }
#line 3821 "string.m"
    if (mercury__string__succeeded)
#line 3820 "string.m"
      {
#line 3820 "string.m"
        mercury__string__split_4_p_0(mercury__string__Str_5, mercury__string__Offset_9, mercury__string__Left_7, mercury__string__Right_8);
#line 3820 "string.m"
        return;
      }
#line 3821 "string.m"
    else
#line 3824 "string.m"
      {
#line 3821 "string.m"
        mercury__string__succeeded = (mercury__string__Count_6 <= (MR_Integer) 0);
#line 3824 "string.m"
        if (mercury__string__succeeded)
#line 3822 "string.m"
          {
#line 3822 "string.m"
            *mercury__string__Left_7 = (MR_String) "";
#line 3823 "string.m"
            *mercury__string__Right_8 = mercury__string__Str_5;
#line 3822 "string.m"
          }
#line 3824 "string.m"
        else
#line 3825 "string.m"
          {
#line 3825 "string.m"
            *mercury__string__Left_7 = mercury__string__Str_5;
#line 3826 "string.m"
            *mercury__string__Right_8 = (MR_String) "";
#line 3825 "string.m"
          }
#line 3824 "string.m"
      }
#line 3821 "string.m"
  }
#line 542 "string.m"
}

#line 533 "string.m"
void MR_CALL 
mercury__string__split_4_p_0(
#line 533 "string.m"
  MR_String mercury__string__Str_1,
#line 533 "string.m"
  MR_Integer mercury__string__Count_2,
#line 533 "string.m"
  MR_String * mercury__string__Left_3,
#line 533 "string.m"
  MR_String * mercury__string__Right_4)
#line 533 "string.m"
{
#line 3717 "string.m"
  {
#line 3717 "string.m"
    MR_bool mercury__string__succeeded;

#line 3721 "string.m"
{
#define MR_PROC_LABEL mercury__string__split_4_p_0

	MR_String Str;
	MR_Integer Count;
	MR_String Left;
	MR_String Right;

	Str =  mercury__string__Str_1 ;
	Count =  mercury__string__Count_2 ;
		{
#line 3721 "string.m"
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
#line 24777 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Left_3  = Left;
	 *mercury__string__Right_4  = Right;
#line 3721 "string.m"
}
#line 3717 "string.m"
  }
#line 533 "string.m"
}

#line 525 "string.m"
void MR_CALL 
mercury__string__first_char_3_p_4(
#line 525 "string.m"
  MR_String * mercury__string__Str_1,
#line 525 "string.m"
  MR_Char mercury__string__First_2,
#line 525 "string.m"
  MR_String mercury__string__Rest_3)
#line 525 "string.m"
{
#line 3674 "string.m"
  {
#line 3674 "string.m"
    MR_bool mercury__string__succeeded;

#line 3678 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_4

	MR_String Str;
	MR_Char First;
	MR_String Rest;

	First =  mercury__string__First_2 ;
	Rest =  mercury__string__Rest_3 ;
		{
#line 3678 "string.m"
{
    size_t firstw = MR_utf8_width(First);
    size_t len = firstw + strlen(Rest);
    MR_allocate_aligned_string_msg(Str, len, MR_ALLOC_ID);
    MR_utf8_encode(Str, First);
    strcpy(Str + firstw, Rest);
}
#line 24825 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Str_1  = Str;
#line 3678 "string.m"
}
#line 3674 "string.m"
  }
#line 525 "string.m"
}

#line 524 "string.m"
MR_bool MR_CALL 
mercury__string__first_char_3_p_3(
#line 524 "string.m"
  MR_String mercury__string__Str_1,
#line 524 "string.m"
  MR_Char * mercury__string__First_2,
#line 524 "string.m"
  MR_String * mercury__string__Rest_3)
#line 524 "string.m"
{
#line 3602 "string.m"
  {
#line 3602 "string.m"
    MR_bool mercury__string__succeeded;

#line 3606 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_3

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
		{
#line 3606 "string.m"
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
#line 24880 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__First_2  = First;
	 *mercury__string__Rest_3  = Rest;
#line 3606 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3602 "string.m"
    return mercury__string__succeeded;
#line 3602 "string.m"
  }
#line 524 "string.m"
}

#line 523 "string.m"
MR_bool MR_CALL 
mercury__string__first_char_3_p_2(
#line 523 "string.m"
  MR_String mercury__string__Str_1,
#line 523 "string.m"
  MR_Char mercury__string__First_2,
#line 523 "string.m"
  MR_String * mercury__string__Rest_3)
#line 523 "string.m"
{
#line 3534 "string.m"
  {
#line 3534 "string.m"
    MR_bool mercury__string__succeeded;

#line 3538 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_2

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	First =  mercury__string__First_2 ;
		{
#line 3538 "string.m"
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
#line 24942 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Rest_3  = Rest;
#line 3538 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3534 "string.m"
    return mercury__string__succeeded;
#line 3534 "string.m"
  }
#line 523 "string.m"
}

#line 522 "string.m"
MR_bool MR_CALL 
mercury__string__first_char_3_p_1(
#line 522 "string.m"
  MR_String mercury__string__Str_1,
#line 522 "string.m"
  MR_Char * mercury__string__First_2,
#line 522 "string.m"
  MR_String mercury__string__Rest_3)
#line 522 "string.m"
{
#line 3471 "string.m"
  {
#line 3471 "string.m"
    MR_bool mercury__string__succeeded;

#line 3475 "string.m"
{
#define MR_PROC_LABEL mercury__string__first_char_3_p_1

	MR_String Str;
	MR_Char First;
	MR_String Rest;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Rest =  mercury__string__Rest_3 ;
		{
#line 3475 "string.m"

    MR_Integer pos = 0;
    First = MR_utf8_get_next(Str, &pos);
    SUCCESS_INDICATOR = (First > 0 && strcmp(Str + pos, Rest) == 0);

#line 24993 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__First_2  = First;
#line 3475 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3471 "string.m"
    return mercury__string__succeeded;
#line 3471 "string.m"
  }
#line 522 "string.m"
}

#line 521 "string.m"
MR_bool MR_CALL 
mercury__string__first_char_3_p_0(
#line 521 "string.m"
  MR_String mercury__string__Str_1,
#line 521 "string.m"
  MR_Char mercury__string__First_2,
#line 521 "string.m"
  MR_String mercury__string__Rest_3)
#line 521 "string.m"
{
#line 3414 "string.m"
  {
#line 3414 "string.m"
    MR_bool mercury__string__succeeded;

#line 3418 "string.m"
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
#line 3418 "string.m"

    MR_Integer pos = 0;
    int c = MR_utf8_get_next(Str, &pos);
    SUCCESS_INDICATOR = (
        c == First &&
        First != '\0' &&
        strcmp(Str + pos, Rest) == 0
    );

#line 25049 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3418 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3414 "string.m"
    return mercury__string__succeeded;
#line 3414 "string.m"
  }
#line 521 "string.m"
}

#line 503 "string.m"
MR_String MR_CALL 
mercury__string__join_list_2_f_0(
#line 503 "string.m"
  MR_String mercury__string__Sep_1,
#line 503 "string.m"
  MR_Word mercury__string__Strs_2)
#line 503 "string.m"
{
#line 3315 "string.m"
  {
#line 3315 "string.m"
    MR_bool mercury__string__succeeded;
#line 3315 "string.m"
    MR_String mercury__string__Str_3;

#line 3319 "string.m"
{
#define MR_PROC_LABEL mercury__string__join_list_2_f_0

	MR_String Sep;
	MR_Word Strs;
	MR_String Str;

	Sep =  mercury__string__Sep_1 ;
	Strs =  mercury__string__Strs_2 ;
		{
#line 3319 "string.m"
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
#line 25136 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Str_3  = Str;
#line 3319 "string.m"
}
#line 3315 "string.m"
    return mercury__string__Str_3;
#line 3315 "string.m"
  }
#line 503 "string.m"
}

#line 495 "string.m"
void MR_CALL 
mercury__string__append_list_2_p_0(
#line 495 "string.m"
  MR_Word mercury__string__Lists_3,
#line 495 "string.m"
  MR_String * mercury__string__HeadVar__2_2)
#line 495 "string.m"
{
#line 3307 "string.m"
  {
#line 3307 "string.m"
    MR_bool mercury__string__succeeded;

#line 3307 "string.m"
    {
#line 3307 "string.m"
      *mercury__string__HeadVar__2_2 = mercury__string__append_list_1_f_0(mercury__string__Lists_3);
    }
#line 3307 "string.m"
  }
#line 495 "string.m"
}

#line 494 "string.m"
MR_String MR_CALL 
mercury__string__append_list_1_f_0(
#line 494 "string.m"
  MR_Word mercury__string__Strs_1)
#line 494 "string.m"
{
#line 3235 "string.m"
  {
#line 3235 "string.m"
    MR_bool mercury__string__succeeded;
#line 3235 "string.m"
    MR_String mercury__string__Str_2;

#line 3239 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_list_1_f_0

	MR_Word Strs;
	MR_String Str;

	Strs =  mercury__string__Strs_1 ;
		{
#line 3239 "string.m"
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
#line 25223 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Str_2  = Str;
#line 3239 "string.m"
}
#line 3235 "string.m"
    return mercury__string__Str_2;
#line 3235 "string.m"
  }
#line 494 "string.m"
}

#line 490 "string.m"
MR_String MR_CALL 
mercury__string__f_43_43_2_f_0(
#line 490 "string.m"
  MR_String mercury__string__S1_4,
#line 490 "string.m"
  MR_String mercury__string__S2_5)
#line 490 "string.m"
{
#line 3124 "string.m"
  {
#line 3124 "string.m"
    MR_bool mercury__string__succeeded;
#line 3124 "string.m"
    MR_String mercury__string__HeadVar__3_3;

#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__f_43_43_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_4 ;
	S2 =  mercury__string__S2_5 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 25273 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__3_3  = S3;
#line 3128 "string.m"
}
#line 3124 "string.m"
    return mercury__string__HeadVar__3_3;
#line 3124 "string.m"
  }
#line 490 "string.m"
}

#line 478 "string.m"
void MR_CALL 
mercury__string__append_3_p_3(
#line 478 "string.m"
  MR_String * mercury__string__S1_1,
#line 478 "string.m"
  MR_String * mercury__string__S2_2,
#line 478 "string.m"
  MR_String mercury__string__S3_3,
#line 478 "string.m"
  MR_Cont mercury__string__cont,
#line 478 "string.m"
  void * mercury__string__cont_env_ptr)
#line 478 "string.m"
{
#line 3160 "string.m"
  {
#line 3160 "string.m"
    MR_bool mercury__string__succeeded;
#line 3160 "string.m"
    MR_Integer mercury__string__S3Len_19;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_3_p_3

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S3_3 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 25322 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S3Len_19  = Length;
#line 2379 "string.m"
}
#line 3162 "string.m"
    {
#line 3162 "string.m"
      mercury__string__append_ooi_2_5_p_0((MR_Integer) 0, mercury__string__S3Len_19, mercury__string__S1_1, mercury__string__S2_2, mercury__string__S3_3, mercury__string__cont, mercury__string__cont_env_ptr);
#line 3162 "string.m"
      return;
    }
#line 3160 "string.m"
  }
#line 478 "string.m"
}

#line 477 "string.m"
void MR_CALL 
mercury__string__append_3_p_2(
#line 477 "string.m"
  MR_String mercury__string__S1_1,
#line 477 "string.m"
  MR_String mercury__string__S2_2,
#line 477 "string.m"
  MR_String * mercury__string__S3_3)
#line 477 "string.m"
{
#line 3124 "string.m"
  {
#line 3124 "string.m"
    MR_bool mercury__string__succeeded;

#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_3_p_2

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_1 ;
	S2 =  mercury__string__S2_2 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 25377 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__S3_3  = S3;
#line 3128 "string.m"
}
#line 3124 "string.m"
  }
#line 477 "string.m"
}

#line 476 "string.m"
MR_bool MR_CALL 
mercury__string__append_3_p_1(
#line 476 "string.m"
  MR_String mercury__string__S1_1,
#line 476 "string.m"
  MR_String * mercury__string__S2_2,
#line 476 "string.m"
  MR_String mercury__string__S3_3)
#line 476 "string.m"
{
#line 3072 "string.m"
  {
#line 3072 "string.m"
    MR_bool mercury__string__succeeded;

#line 3076 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_3_p_1

	MR_String S1;
	MR_String S2;
	MR_String S3;
	MR_bool SUCCESS_INDICATOR;

	S1 =  mercury__string__S1_1 ;
	S3 =  mercury__string__S3_3 ;
		{
#line 3076 "string.m"
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
#line 25435 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__S2_2  = S2;
#line 3076 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3072 "string.m"
    return mercury__string__succeeded;
#line 3072 "string.m"
  }
#line 476 "string.m"
}

#line 475 "string.m"
MR_bool MR_CALL 
mercury__string__append_3_p_0(
#line 475 "string.m"
  MR_String mercury__string__S1_1,
#line 475 "string.m"
  MR_String mercury__string__S2_2,
#line 475 "string.m"
  MR_String mercury__string__S3_3)
#line 475 "string.m"
{
#line 3029 "string.m"
  {
#line 3029 "string.m"
    MR_bool mercury__string__succeeded;

#line 3033 "string.m"
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
#line 3033 "string.m"
{
    size_t len_1 = strlen(S1);
    SUCCESS_INDICATOR = (
        strncmp(S1, S3, len_1) == 0 &&
        strcmp(S2, S3 + len_1) == 0
    );
}
#line 25489 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 3033 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 3029 "string.m"
    return mercury__string__succeeded;
#line 3029 "string.m"
  }
#line 475 "string.m"
}

#line 472 "string.m"
MR_String MR_CALL 
mercury__string__append_2_f_0(
#line 472 "string.m"
  MR_String mercury__string__S1_4,
#line 472 "string.m"
  MR_String mercury__string__S2_5)
#line 472 "string.m"
{
#line 3124 "string.m"
  {
#line 3124 "string.m"
    MR_bool mercury__string__succeeded;
#line 3124 "string.m"
    MR_String mercury__string__S3_6;

#line 3128 "string.m"
{
#define MR_PROC_LABEL mercury__string__append_2_f_0

	MR_String S1;
	MR_String S2;
	MR_String S3;

	S1 =  mercury__string__S1_4 ;
	S2 =  mercury__string__S2_5 ;
		{
#line 3128 "string.m"
{
    size_t len_1, len_2;
    len_1 = strlen(S1);
    len_2 = strlen(S2);
    MR_allocate_aligned_string_msg(S3, len_1 + len_2, MR_ALLOC_ID);
    strcpy(S3, S1);
    strcpy(S3 + len_1, S2);
}
#line 25541 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S3_6  = S3;
#line 3128 "string.m"
}
#line 3124 "string.m"
    return mercury__string__S3_6;
#line 3124 "string.m"
  }
#line 472 "string.m"
}

#line 462 "string.m"
MR_bool MR_CALL 
mercury__string__sub_string_search_start_4_p_0(
#line 462 "string.m"
  MR_String mercury__string__WholeString_1,
#line 462 "string.m"
  MR_String mercury__string__Pattern_2,
#line 462 "string.m"
  MR_Integer mercury__string__BeginAt_3,
#line 462 "string.m"
  MR_Integer * mercury__string__Index_4)
#line 462 "string.m"
{
#line 2915 "string.m"
  {
#line 2915 "string.m"
    MR_bool mercury__string__succeeded;

#line 2920 "string.m"
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
#line 2920 "string.m"
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
#line 25602 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_4  = Index;
#line 2920 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2915 "string.m"
    return mercury__string__succeeded;
#line 2915 "string.m"
  }
#line 462 "string.m"
}

#line 454 "string.m"
MR_bool MR_CALL 
mercury__string__sub_string_search_3_p_0(
#line 454 "string.m"
  MR_String mercury__string__WholeString_4,
#line 454 "string.m"
  MR_String mercury__string__Pattern_5,
#line 454 "string.m"
  MR_Integer * mercury__string__Index_6)
#line 454 "string.m"
{
#line 2912 "string.m"
  {
#line 2912 "string.m"
    MR_bool mercury__string__succeeded;

#line 2920 "string.m"
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
#line 2920 "string.m"
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
#line 25664 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_6  = Index;
#line 2920 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2912 "string.m"
    return mercury__string__succeeded;
#line 2912 "string.m"
  }
#line 454 "string.m"
}

#line 445 "string.m"
MR_Integer MR_CALL 
mercury__string__suffix_length_2_f_0(
#line 445 "string.m"
  MR_Word mercury__string__P_4,
#line 445 "string.m"
  MR_String mercury__string__S_5)
#line 445 "string.m"
{
#line 2893 "string.m"
  {
#line 2893 "string.m"
    MR_bool mercury__string__succeeded;
#line 2893 "string.m"
    MR_Integer mercury__string__HeadVar__3_3;
#line 2893 "string.m"
    MR_Integer mercury__string__End_6;
#line 2893 "string.m"
    MR_Integer mercury__string__Index_7;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__suffix_length_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_5 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 25714 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__End_6  = Length;
#line 2379 "string.m"
}
#line 2895 "string.m"
    {
#line 2895 "string.m"
      mercury__string__suffix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, mercury__string__End_6, &mercury__string__Index_7);
    }
#line 2893 "string.m"
    mercury__string__HeadVar__3_3 = (mercury__string__End_6 - mercury__string__Index_7);
#line 2893 "string.m"
    return mercury__string__HeadVar__3_3;
#line 2893 "string.m"
  }
#line 445 "string.m"
}

#line 437 "string.m"
MR_Integer MR_CALL 
mercury__string__prefix_length_2_f_0(
#line 437 "string.m"
  MR_Word mercury__string__P_4,
#line 437 "string.m"
  MR_String mercury__string__S_5)
#line 437 "string.m"
{
#line 2877 "string.m"
  {
#line 2877 "string.m"
    MR_bool mercury__string__succeeded;
#line 2877 "string.m"
    MR_Integer mercury__string__Index_6;

#line 2878 "string.m"
    {
#line 2878 "string.m"
      mercury__string__prefix_length_loop_4_p_0(mercury__string__P_4, mercury__string__S_5, (MR_Integer) 0, &mercury__string__Index_6);
    }
#line 2877 "string.m"
    return mercury__string__Index_6;
#line 2877 "string.m"
  }
#line 437 "string.m"
}

#line 430 "string.m"
MR_bool MR_CALL 
mercury__string__contains_char_2_p_0(
#line 430 "string.m"
  MR_String mercury__string__Str_1,
#line 430 "string.m"
  MR_Char mercury__string__Ch_2)
#line 430 "string.m"
{
#line 2824 "string.m"
  {
#line 2824 "string.m"
    MR_bool mercury__string__succeeded;

#line 2828 "string.m"
{
#define MR_PROC_LABEL mercury__string__contains_char_2_p_0

	MR_String Str;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_1 ;
	Ch =  mercury__string__Ch_2 ;
		{
#line 2828 "string.m"

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

#line 25801 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2828 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2824 "string.m"
    return mercury__string__succeeded;
#line 2824 "string.m"
  }
#line 430 "string.m"
}

#line 424 "string.m"
MR_bool MR_CALL 
mercury__string__all_match_2_p_0(
#line 424 "string.m"
  MR_Word mercury__string__P_3,
#line 424 "string.m"
  MR_String mercury__string__String_4)
#line 424 "string.m"
{
#line 2805 "string.m"
  {
#line 2805 "string.m"
    MR_bool mercury__string__succeeded;

#line 2806 "string.m"
    {
#line 2806 "string.m"
      return mercury__string__succeeded = mercury__string__all_match_loop_3_p_0(mercury__string__P_3, mercury__string__String_4, (MR_Integer) 0);
    }
#line 2805 "string.m"
    return mercury__string__succeeded;
#line 2805 "string.m"
  }
#line 424 "string.m"
}

#line 417 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_digits_1_p_0(
#line 417 "string.m"
  MR_String mercury__string__S_1)
#line 417 "string.m"
{
#line 2779 "string.m"
  {
#line 2779 "string.m"
    MR_bool mercury__string__succeeded;

#line 2783 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_digits_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 2783 "string.m"

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

#line 25881 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2783 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2779 "string.m"
    return mercury__string__succeeded;
#line 2779 "string.m"
  }
#line 417 "string.m"
}

#line 413 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_alnum_or_underscore_1_p_0(
#line 413 "string.m"
  MR_String mercury__string__S_1)
#line 413 "string.m"
{
#line 2738 "string.m"
  {
#line 2738 "string.m"
    MR_bool mercury__string__succeeded;

#line 2742 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_alnum_or_underscore_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 2742 "string.m"

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

#line 25951 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2742 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2738 "string.m"
    return mercury__string__succeeded;
#line 2738 "string.m"
  }
#line 413 "string.m"
}

#line 408 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_alpha_or_underscore_1_p_0(
#line 408 "string.m"
  MR_String mercury__string__S_1)
#line 408 "string.m"
{
#line 2701 "string.m"
  {
#line 2701 "string.m"
    MR_bool mercury__string__succeeded;

#line 2705 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_alpha_or_underscore_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 2705 "string.m"

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

#line 26018 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2705 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2701 "string.m"
    return mercury__string__succeeded;
#line 2701 "string.m"
  }
#line 408 "string.m"
}

#line 403 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_alnum_1_p_0(
#line 403 "string.m"
  MR_String mercury__string__S_2)
#line 403 "string.m"
{
#line 2698 "string.m"
  {
#line 2698 "string.m"
    MR_bool mercury__string__succeeded;

#line 2806 "string.m"
    {
#line 2806 "string.m"
      return mercury__string__succeeded = mercury__string__all_match_loop__ho30_3_p_0(mercury__string__S_2, (MR_Integer) 0);
    }
#line 2698 "string.m"
    return mercury__string__succeeded;
#line 2698 "string.m"
  }
#line 403 "string.m"
}

#line 398 "string.m"
MR_bool MR_CALL 
mercury__string__is_all_alpha_1_p_0(
#line 398 "string.m"
  MR_String mercury__string__S_1)
#line 398 "string.m"
{
#line 2663 "string.m"
  {
#line 2663 "string.m"
    MR_bool mercury__string__succeeded;

#line 2667 "string.m"
{
#define MR_PROC_LABEL mercury__string__is_all_alpha_1_p_0

	MR_String S;
	MR_bool SUCCESS_INDICATOR;

	S =  mercury__string__S_1 ;
		{
#line 2667 "string.m"

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

#line 26107 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2667 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2663 "string.m"
    return mercury__string__succeeded;
#line 2663 "string.m"
  }
#line 398 "string.m"
}

#line 389 "string.m"
MR_Integer MR_CALL 
mercury__string__hash3_1_f_0(
#line 389 "string.m"
  MR_String mercury__string__String_3)
#line 389 "string.m"
{
#line 2638 "string.m"
  {
#line 2638 "string.m"
    MR_bool mercury__string__succeeded;
#line 2638 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2638 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2638 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash3_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 26154 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2379 "string.m"
}
#line 2640 "string.m"
    {
#line 2640 "string.m"
      mercury__string__hash3_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2641 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2638 "string.m"
    return mercury__string__HashVal_4;
#line 2638 "string.m"
  }
#line 389 "string.m"
}

#line 388 "string.m"
MR_Integer MR_CALL 
mercury__string__hash2_1_f_0(
#line 388 "string.m"
  MR_String mercury__string__String_3)
#line 388 "string.m"
{
#line 2620 "string.m"
  {
#line 2620 "string.m"
    MR_bool mercury__string__succeeded;
#line 2620 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2620 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2620 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash2_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 26206 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2379 "string.m"
}
#line 2622 "string.m"
    {
#line 2622 "string.m"
      mercury__string__hash2_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2623 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2620 "string.m"
    return mercury__string__HashVal_4;
#line 2620 "string.m"
  }
#line 388 "string.m"
}

#line 384 "string.m"
void MR_CALL 
mercury__string__hash_2_p_0(
#line 384 "string.m"
  MR_String mercury__string__String_3,
#line 384 "string.m"
  MR_Integer * mercury__string__HashVal_4)
#line 384 "string.m"
{
#line 2602 "string.m"
  {
#line 2602 "string.m"
    MR_bool mercury__string__succeeded;
#line 2602 "string.m"
    MR_Integer mercury__string__Length_7;
#line 2602 "string.m"
    MR_Integer mercury__string__HashVal1_8;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 26258 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_7  = Length;
#line 2379 "string.m"
}
#line 2604 "string.m"
    {
#line 2604 "string.m"
      mercury__string__hash_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_7, (MR_Integer) 0, &mercury__string__HashVal1_8);
    }
#line 2605 "string.m"
    *mercury__string__HashVal_4 = (mercury__string__HashVal1_8 ^ mercury__string__Length_7);
#line 2602 "string.m"
  }
#line 384 "string.m"
}

#line 383 "string.m"
MR_Integer MR_CALL 
mercury__string__hash_1_f_0(
#line 383 "string.m"
  MR_String mercury__string__String_3)
#line 383 "string.m"
{
#line 2602 "string.m"
  {
#line 2602 "string.m"
    MR_bool mercury__string__succeeded;
#line 2602 "string.m"
    MR_Integer mercury__string__HashVal_4;
#line 2602 "string.m"
    MR_Integer mercury__string__Length_5;
#line 2602 "string.m"
    MR_Integer mercury__string__HashVal1_6;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__hash_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 26308 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_5  = Length;
#line 2379 "string.m"
}
#line 2604 "string.m"
    {
#line 2604 "string.m"
      mercury__string__hash_loop_5_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__Length_5, (MR_Integer) 0, &mercury__string__HashVal1_6);
    }
#line 2605 "string.m"
    mercury__string__HashVal_4 = (mercury__string__HashVal1_6 ^ mercury__string__Length_5);
#line 2602 "string.m"
    return mercury__string__HashVal_4;
#line 2602 "string.m"
  }
#line 383 "string.m"
}

#line 374 "string.m"
MR_bool MR_CALL 
mercury__string__codepoint_offset_3_p_0(
#line 374 "string.m"
  MR_String mercury__string__String_4,
#line 374 "string.m"
  MR_Integer mercury__string__N_5,
#line 374 "string.m"
  MR_Integer * mercury__string__Index_6)
#line 374 "string.m"
{
#line 2567 "string.m"
  {
#line 2567 "string.m"
    MR_bool mercury__string__succeeded;

#line 2570 "string.m"
    {
#line 2570 "string.m"
      return mercury__string__succeeded = mercury__string__codepoint_offset_4_p_0(mercury__string__String_4, (MR_Integer) 0, mercury__string__N_5, mercury__string__Index_6);
    }
#line 2567 "string.m"
    return mercury__string__succeeded;
#line 2567 "string.m"
  }
#line 374 "string.m"
}

#line 368 "string.m"
MR_bool MR_CALL 
mercury__string__codepoint_offset_4_p_0(
#line 368 "string.m"
  MR_String mercury__string__String_1,
#line 368 "string.m"
  MR_Integer mercury__string__StartOffset_2,
#line 368 "string.m"
  MR_Integer mercury__string__N_3,
#line 368 "string.m"
  MR_Integer * mercury__string__Index_4)
#line 368 "string.m"
{
#line 2521 "string.m"
  {
#line 2521 "string.m"
    MR_bool mercury__string__succeeded;

#line 2524 "string.m"
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
#line 2524 "string.m"

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

#line 26406 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Index_4  = Index;
#line 2524 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2521 "string.m"
    return mercury__string__succeeded;
#line 2521 "string.m"
  }
#line 368 "string.m"
}

#line 360 "string.m"
MR_Integer MR_CALL 
mercury__string__count_utf8_code_units_1_f_0(
#line 360 "string.m"
  MR_String mercury__string__Str_1)
#line 360 "string.m"
{
#line 2491 "string.m"
  {
#line 2491 "string.m"
    MR_bool mercury__string__succeeded;
#line 2491 "string.m"
    MR_Integer mercury__string__Length_2;

#line 2494 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_utf8_code_units_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{
#line 2494 "string.m"

    Length = strlen(Str);

#line 26450 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Length_2  = Length;
#line 2494 "string.m"
}
#line 2491 "string.m"
    return mercury__string__Length_2;
#line 2491 "string.m"
  }
#line 360 "string.m"
}

#line 355 "string.m"
void MR_CALL 
mercury__string__count_codepoints_2_p_0(
#line 355 "string.m"
  MR_String mercury__string__String_1,
#line 355 "string.m"
  MR_Integer * mercury__string__Count_2)
#line 355 "string.m"
{
#line 2441 "string.m"
  {
#line 2441 "string.m"
    MR_bool mercury__string__succeeded;

#line 2444 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_codepoints_2_p_0

	MR_String String;
	MR_Integer Count;

	String =  mercury__string__String_1 ;
		{
#line 2444 "string.m"

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

#line 26503 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Count_2  = Count;
#line 2444 "string.m"
}
#line 2441 "string.m"
  }
#line 355 "string.m"
}

#line 354 "string.m"
MR_Integer MR_CALL 
mercury__string__count_codepoints_1_f_0(
#line 354 "string.m"
  MR_String mercury__string__String_3)
#line 354 "string.m"
{
#line 2439 "string.m"
  {
#line 2439 "string.m"
    MR_bool mercury__string__succeeded;
#line 2439 "string.m"
    MR_Integer mercury__string__Count_4;

#line 2439 "string.m"
    {
#line 2439 "string.m"
      mercury__string__count_codepoints_2_p_0(mercury__string__String_3, &mercury__string__Count_4);
    }
#line 2439 "string.m"
    return mercury__string__Count_4;
#line 2439 "string.m"
  }
#line 354 "string.m"
}

#line 346 "string.m"
void MR_CALL 
mercury__string__count_code_units_2_p_0(
#line 346 "string.m"
  MR_String mercury__string__Str_3,
#line 346 "string.m"
  MR_Integer * mercury__string__Length_4)
#line 346 "string.m"
{
#line 2375 "string.m"
  {
#line 2375 "string.m"
    MR_bool mercury__string__succeeded;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_code_units_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_3 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 26568 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_4  = Length;
#line 2379 "string.m"
}
#line 2375 "string.m"
  }
#line 346 "string.m"
}

#line 345 "string.m"
MR_Integer MR_CALL 
mercury__string__count_code_units_1_f_0(
#line 345 "string.m"
  MR_String mercury__string__Str_3)
#line 345 "string.m"
{
#line 2375 "string.m"
  {
#line 2375 "string.m"
    MR_bool mercury__string__succeeded;
#line 2375 "string.m"
    MR_Integer mercury__string__HeadVar__2_2;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__count_code_units_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_3 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 26607 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__HeadVar__2_2  = Length;
#line 2379 "string.m"
}
#line 2375 "string.m"
    return mercury__string__HeadVar__2_2;
#line 2375 "string.m"
  }
#line 345 "string.m"
}

#line 341 "string.m"
void MR_CALL 
mercury__string__length_2_p_1(
#line 341 "string.m"
  MR_String mercury__string__Str_1,
#line 341 "string.m"
  MR_Integer * mercury__string__Length_2)
#line 341 "string.m"
{
#line 2401 "string.m"
  {
#line 2401 "string.m"
    MR_bool mercury__string__succeeded;

#line 2405 "string.m"
{
#define MR_PROC_LABEL mercury__string__length_2_p_1

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{
#line 2405 "string.m"

    Length = strlen(Str);

#line 26648 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_2  = Length;
#line 2405 "string.m"
}
#line 2401 "string.m"
  }
#line 341 "string.m"
}

#line 340 "string.m"
void MR_CALL 
mercury__string__length_2_p_0(
#line 340 "string.m"
  MR_String mercury__string__Str_1,
#line 340 "string.m"
  MR_Integer * mercury__string__Length_2)
#line 340 "string.m"
{
#line 2375 "string.m"
  {
#line 2375 "string.m"
    MR_bool mercury__string__succeeded;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__length_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_1 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 26687 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Length_2  = Length;
#line 2379 "string.m"
}
#line 2375 "string.m"
  }
#line 340 "string.m"
}

#line 338 "string.m"
MR_Integer MR_CALL 
mercury__string__length_1_f_0(
#line 338 "string.m"
  MR_String mercury__string__S_3)
#line 338 "string.m"
{
#line 2375 "string.m"
  {
#line 2375 "string.m"
    MR_bool mercury__string__succeeded;
#line 2375 "string.m"
    MR_Integer mercury__string__L_4;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__length_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_3 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 26726 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__L_4  = Length;
#line 2379 "string.m"
}
#line 2375 "string.m"
    return mercury__string__L_4;
#line 2375 "string.m"
  }
#line 338 "string.m"
}

#line 322 "string.m"
void MR_CALL 
mercury__string__unsafe_set_char_4_p_0(
#line 322 "string.m"
  MR_Char mercury__string__Char_5,
#line 322 "string.m"
  MR_Integer mercury__string__Index_6,
#line 322 "string.m"
  MR_String mercury__string__STATE_VARIABLE_Str_0_8,
#line 322 "string.m"
  MR_String * mercury__string__STATE_VARIABLE_Str_9)
#line 322 "string.m"
{
#line 2294 "string.m"
  {
#line 2294 "string.m"
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

#line 26773 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 63 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2294 "string.m"
    if (mercury__string__succeeded)
#line 2293 "string.m"
      {
#line 2293 "string.m"
        {
#line 2293 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_set_char: null character");
#line 2293 "string.m"
          return;
        }
#line 2293 "string.m"
      }
#line 2294 "string.m"
    else
#line 2304 "string.m"
      {
#line 2308 "string.m"
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
#line 2308 "string.m"

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

#line 26834 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__STATE_VARIABLE_Str_9  = Str;
#line 2308 "string.m"
}
#line 2304 "string.m"
      }
#line 2294 "string.m"
  }
#line 322 "string.m"
}

#line 317 "string.m"
MR_String MR_CALL 
mercury__string__unsafe_set_char_3_f_0(
#line 317 "string.m"
  MR_Char mercury__string__C_5,
#line 317 "string.m"
  MR_Integer mercury__string__N_6,
#line 317 "string.m"
  MR_String mercury__string__S0_7)
#line 317 "string.m"
{
#line 2294 "string.m"
  {
#line 2294 "string.m"
    MR_bool mercury__string__succeeded;
#line 2294 "string.m"
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

#line 26881 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 63 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2294 "string.m"
    if (mercury__string__succeeded)
#line 2293 "string.m"
      {
#line 2293 "string.m"
        {
#line 2293 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_set_char: null character");
        }
#line 2293 "string.m"
      }
#line 2294 "string.m"
    else
#line 2304 "string.m"
      {
#line 2308 "string.m"
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
#line 2308 "string.m"

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

#line 26940 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__S_8  = Str;
#line 2308 "string.m"
}
#line 2304 "string.m"
      }
#line 2294 "string.m"
    return mercury__string__S_8;
#line 2294 "string.m"
  }
#line 317 "string.m"
}

#line 302 "string.m"
void MR_CALL 
mercury__string__det_set_char_4_p_0(
#line 302 "string.m"
  MR_Char mercury__string__Char_5,
#line 302 "string.m"
  MR_Integer mercury__string__Int_6,
#line 302 "string.m"
  MR_String mercury__string__String0_7,
#line 302 "string.m"
  MR_String * mercury__string__String_8)
#line 302 "string.m"
{
#line 2282 "string.m"
  {
#line 2282 "string.m"
    MR_bool mercury__string__succeeded;
#line 2282 "string.m"
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

#line 26991 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 63 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2170 "string.m"
    if (mercury__string__succeeded)
#line 2169 "string.m"
      {
#line 2169 "string.m"
        {
#line 2169 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.set_char: null character");
#line 2169 "string.m"
          return;
        }
#line 2169 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 2169 "string.m"
      }
#line 2170 "string.m"
    else
#line 2180 "string.m"
      {
#line 2184 "string.m"
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
#line 2184 "string.m"

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

#line 27062 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__String1_9  = Str;
#line 2184 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2180 "string.m"
      }
#line 2282 "string.m"
    if (mercury__string__succeeded)
#line 2281 "string.m"
      *mercury__string__String_8 = mercury__string__String1_9;
#line 2282 "string.m"
    else
#line 2283 "string.m"
      {
#line 2283 "string.m"
        {
#line 2283 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_set_char: index out of range");
#line 2283 "string.m"
          return;
        }
#line 2283 "string.m"
      }
#line 2282 "string.m"
  }
#line 302 "string.m"
}

#line 300 "string.m"
MR_String MR_CALL 
mercury__string__det_set_char_3_f_0(
#line 300 "string.m"
  MR_Char mercury__string__C_5,
#line 300 "string.m"
  MR_Integer mercury__string__N_6,
#line 300 "string.m"
  MR_String mercury__string__S0_7)
#line 300 "string.m"
{
#line 2277 "string.m"
  {
#line 2277 "string.m"
    MR_bool mercury__string__succeeded;
#line 2277 "string.m"
    MR_String mercury__string__S_8;

#line 2277 "string.m"
    {
#line 2277 "string.m"
      mercury__string__det_set_char_4_p_0(mercury__string__C_5, mercury__string__N_6, mercury__string__S0_7, &mercury__string__S_8);
    }
#line 2277 "string.m"
    return mercury__string__S_8;
#line 2277 "string.m"
  }
#line 300 "string.m"
}

#line 288 "string.m"
MR_bool MR_CALL 
mercury__string__set_char_4_p_0(
#line 288 "string.m"
  MR_Char mercury__string__Char_5,
#line 288 "string.m"
  MR_Integer mercury__string__Index_6,
#line 288 "string.m"
  MR_String mercury__string__STATE_VARIABLE_Str_0_8,
#line 288 "string.m"
  MR_String * mercury__string__STATE_VARIABLE_Str_9)
#line 288 "string.m"
{
#line 2170 "string.m"
  {
#line 2170 "string.m"
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

#line 27159 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 63 "char.opt"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2170 "string.m"
    if (mercury__string__succeeded)
#line 2169 "string.m"
      {
#line 2169 "string.m"
        {
#line 2169 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.set_char: null character");
        }
#line 2169 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 2169 "string.m"
      }
#line 2170 "string.m"
    else
#line 2180 "string.m"
      {
#line 2184 "string.m"
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
#line 2184 "string.m"

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

#line 27228 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__STATE_VARIABLE_Str_9  = Str;
#line 2184 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2180 "string.m"
      }
#line 2170 "string.m"
    return mercury__string__succeeded;
#line 2170 "string.m"
  }
#line 288 "string.m"
}

#line 273 "string.m"
void MR_CALL 
mercury__string__unsafe_index_code_unit_3_p_0(
#line 273 "string.m"
  MR_String mercury__string__Str_1,
#line 273 "string.m"
  MR_Integer mercury__string__Index_2,
#line 273 "string.m"
  MR_Integer * mercury__string__Code_3)
#line 273 "string.m"
{
#line 2136 "string.m"
  {
#line 2136 "string.m"
    MR_bool mercury__string__succeeded;

#line 2139 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_code_unit_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer Code;

	Str =  mercury__string__Str_1 ;
	Index =  mercury__string__Index_2 ;
		{
#line 2139 "string.m"

    const unsigned char *s = (const unsigned char *)Str;
    Code = s[Index];

#line 27279 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Code_3  = Code;
#line 2139 "string.m"
}
#line 2136 "string.m"
  }
#line 273 "string.m"
}

#line 265 "string.m"
MR_bool MR_CALL 
mercury__string__unsafe_prev_index_4_p_0(
#line 265 "string.m"
  MR_String mercury__string__Str_1,
#line 265 "string.m"
  MR_Integer mercury__string__Index_2,
#line 265 "string.m"
  MR_Integer * mercury__string__PrevIndex_3,
#line 265 "string.m"
  MR_Char * mercury__string__Ch_4)
#line 265 "string.m"
{
#line 2008 "string.m"
  {
#line 2008 "string.m"
    MR_bool mercury__string__succeeded;

#line 2012 "string.m"
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
#line 2012 "string.m"

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

#line 27337 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__PrevIndex_3  = PrevIndex;
	 *mercury__string__Ch_4  = Ch;
#line 2012 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2008 "string.m"
    return mercury__string__succeeded;
#line 2008 "string.m"
  }
#line 265 "string.m"
}

#line 255 "string.m"
MR_bool MR_CALL 
mercury__string__prev_index_4_p_0(
#line 255 "string.m"
  MR_String mercury__string__Str_5,
#line 255 "string.m"
  MR_Integer mercury__string__Index_6,
#line 255 "string.m"
  MR_Integer * mercury__string__CharIndex_7,
#line 255 "string.m"
  MR_Char * mercury__string__Char_8)
#line 255 "string.m"
{
#line 2000 "string.m"
  {
#line 2000 "string.m"
    MR_bool mercury__string__succeeded;
#line 2000 "string.m"
    MR_Integer mercury__string__Len_9;
#line 2000 "string.m"
    MR_Integer mercury__string__V_10_10;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 27390 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_9  = Length;
#line 2379 "string.m"
}
#line 2002 "string.m"
    mercury__string__V_10_10 = (mercury__string__Index_6 - (MR_Integer) 1);
#line 2113 "string.m"
{
#define MR_PROC_LABEL mercury__string__prev_index_4_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__V_10_10 ;
	Length =  mercury__string__Len_9 ;
		{
#line 2113 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 27421 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2113 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2000 "string.m"
    if (mercury__string__succeeded)
#line 2000 "string.m"
      {
#line 2012 "string.m"
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
#line 2012 "string.m"

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

#line 27462 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__CharIndex_7  = PrevIndex;
	 *mercury__string__Char_8  = Ch;
#line 2012 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 2000 "string.m"
      }
#line 2000 "string.m"
    return mercury__string__succeeded;
#line 2000 "string.m"
  }
#line 255 "string.m"
}

#line 247 "string.m"
MR_bool MR_CALL 
mercury__string__unsafe_index_next_4_p_0(
#line 247 "string.m"
  MR_String mercury__string__Str_1,
#line 247 "string.m"
  MR_Integer mercury__string__Index_2,
#line 247 "string.m"
  MR_Integer * mercury__string__NextIndex_3,
#line 247 "string.m"
  MR_Char * mercury__string__Ch_4)
#line 247 "string.m"
{
#line 1919 "string.m"
  {
#line 1919 "string.m"
    MR_bool mercury__string__succeeded;

#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 27525 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__NextIndex_3  = NextIndex;
	 *mercury__string__Ch_4  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1919 "string.m"
    return mercury__string__succeeded;
#line 1919 "string.m"
  }
#line 247 "string.m"
}

#line 237 "string.m"
MR_bool MR_CALL 
mercury__string__index_next_4_p_0(
#line 237 "string.m"
  MR_String mercury__string__Str_5,
#line 237 "string.m"
  MR_Integer mercury__string__Index_6,
#line 237 "string.m"
  MR_Integer * mercury__string__NextIndex_7,
#line 237 "string.m"
  MR_Char * mercury__string__Char_8)
#line 237 "string.m"
{
#line 1911 "string.m"
  {
#line 1911 "string.m"
    MR_bool mercury__string__succeeded;
#line 1911 "string.m"
    MR_Integer mercury__string__Len_9;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_5 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 27576 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_9  = Length;
#line 2379 "string.m"
}
#line 2113 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_next_4_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_6 ;
	Length =  mercury__string__Len_9 ;
		{
#line 2113 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 27605 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2113 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1911 "string.m"
    if (mercury__string__succeeded)
#line 1911 "string.m"
      {
#line 1923 "string.m"
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
#line 1923 "string.m"

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }

#line 27643 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__NextIndex_7  = NextIndex;
	 *mercury__string__Char_8  = Ch;
#line 1923 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1911 "string.m"
      }
#line 1911 "string.m"
    return mercury__string__succeeded;
#line 1911 "string.m"
  }
#line 237 "string.m"
}

#line 229 "string.m"
MR_Char MR_CALL 
mercury__string__unsafe_elem_2_f_0(
#line 229 "string.m"
  MR_Integer mercury__string__Index_5,
#line 229 "string.m"
  MR_String mercury__string__String_4)
#line 229 "string.m"
{
#line 1849 "string.m"
  {
#line 1849 "string.m"
    MR_bool mercury__string__succeeded;
#line 1849 "string.m"
    MR_Char mercury__string__HeadVar__3_3;
#line 1849 "string.m"
    MR_Char mercury__string__CharPrime_12;

#line 1859 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_elem_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__Index_5 ;
		{
#line 1859 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 27702 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_12  = Ch;
#line 1859 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1849 "string.m"
    if (mercury__string__succeeded)
#line 1848 "string.m"
      mercury__string__HeadVar__3_3 = mercury__string__CharPrime_12;
#line 1849 "string.m"
    else
#line 1850 "string.m"
      {
#line 1850 "string.m"
        {
#line 1850 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
        }
#line 1850 "string.m"
      }
#line 1849 "string.m"
    return mercury__string__HeadVar__3_3;
#line 1849 "string.m"
  }
#line 229 "string.m"
}

#line 224 "string.m"
MR_Char MR_CALL 
mercury__string__elem_2_f_0(
#line 224 "string.m"
  MR_Integer mercury__string__Index_5,
#line 224 "string.m"
  MR_String mercury__string__String_4)
#line 224 "string.m"
{
#line 1906 "string.m"
  {
#line 1906 "string.m"
    MR_bool mercury__string__succeeded;
#line 1906 "string.m"
    MR_Char mercury__string__HeadVar__3_3;

#line 1906 "string.m"
    {
#line 1906 "string.m"
      return mercury__string__HeadVar__3_3 = mercury__string__det_index_2_f_0(mercury__string__String_4, mercury__string__Index_5);
    }
#line 1906 "string.m"
    return mercury__string__HeadVar__3_3;
#line 1906 "string.m"
  }
#line 224 "string.m"
}

#line 219 "string.m"
void MR_CALL 
mercury__string__unsafe_index_3_p_0(
#line 219 "string.m"
  MR_String mercury__string__Str_4,
#line 219 "string.m"
  MR_Integer mercury__string__Index_5,
#line 219 "string.m"
  MR_Char * mercury__string__Char_6)
#line 219 "string.m"
{
#line 1849 "string.m"
  {
#line 1849 "string.m"
    MR_bool mercury__string__succeeded;
#line 1849 "string.m"
    MR_Char mercury__string__CharPrime_7;

#line 1859 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_4 ;
	Index =  mercury__string__Index_5 ;
		{
#line 1859 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 27801 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_7  = Ch;
#line 1859 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1849 "string.m"
    if (mercury__string__succeeded)
#line 1848 "string.m"
      *mercury__string__Char_6 = mercury__string__CharPrime_7;
#line 1849 "string.m"
    else
#line 1850 "string.m"
      {
#line 1850 "string.m"
        {
#line 1850 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
#line 1850 "string.m"
          return;
        }
#line 1850 "string.m"
      }
#line 1849 "string.m"
  }
#line 219 "string.m"
}

#line 218 "string.m"
MR_Char MR_CALL 
mercury__string__unsafe_index_2_f_0(
#line 218 "string.m"
  MR_String mercury__string__S_4,
#line 218 "string.m"
  MR_Integer mercury__string__N_5)
#line 218 "string.m"
{
#line 1849 "string.m"
  {
#line 1849 "string.m"
    MR_bool mercury__string__succeeded;
#line 1849 "string.m"
    MR_Char mercury__string__C_6;
#line 1849 "string.m"
    MR_Char mercury__string__CharPrime_10;

#line 1859 "string.m"
{
#define MR_PROC_LABEL mercury__string__unsafe_index_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_4 ;
	Index =  mercury__string__N_5 ;
		{
#line 1859 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 27872 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_10  = Ch;
#line 1859 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1849 "string.m"
    if (mercury__string__succeeded)
#line 1848 "string.m"
      mercury__string__C_6 = mercury__string__CharPrime_10;
#line 1849 "string.m"
    else
#line 1850 "string.m"
      {
#line 1850 "string.m"
        {
#line 1850 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
        }
#line 1850 "string.m"
      }
#line 1849 "string.m"
    return mercury__string__C_6;
#line 1849 "string.m"
  }
#line 218 "string.m"
}

#line 207 "string.m"
void MR_CALL 
mercury__string__det_index_3_p_0(
#line 207 "string.m"
  MR_String mercury__string__String_4,
#line 207 "string.m"
  MR_Integer mercury__string__Int_5,
#line 207 "string.m"
  MR_Char * mercury__string__Char_6)
#line 207 "string.m"
{
#line 1839 "string.m"
  {
#line 1839 "string.m"
    MR_bool mercury__string__succeeded;
#line 1839 "string.m"
    MR_Char mercury__string__Char0_7;
#line 1825 "string.m"
    MR_Integer mercury__string__Len_12;
#line 1849 "string.m"
    MR_Char mercury__string__CharPrime_24;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_4 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 27939 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_12  = Length;
#line 2379 "string.m"
}
#line 2113 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Int_5 ;
	Length =  mercury__string__Len_12 ;
		{
#line 2113 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 27968 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2113 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1825 "string.m"
    if (mercury__string__succeeded)
#line 1825 "string.m"
      {
#line 1859 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__String_4 ;
	Index =  mercury__string__Int_5 ;
		{
#line 1859 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 28002 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_24  = Ch;
#line 1859 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1849 "string.m"
        if (mercury__string__succeeded)
#line 1848 "string.m"
          mercury__string__Char0_7 = mercury__string__CharPrime_24;
#line 1849 "string.m"
        else
#line 1850 "string.m"
          {
#line 1850 "string.m"
            {
#line 1850 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
#line 1850 "string.m"
              return;
            }
#line 1850 "string.m"
          }
#line 1849 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 1825 "string.m"
      }
#line 1839 "string.m"
    if (mercury__string__succeeded)
#line 1838 "string.m"
      *mercury__string__Char_6 = mercury__string__Char0_7;
#line 1839 "string.m"
    else
#line 1840 "string.m"
      {
#line 1840 "string.m"
        {
#line 1840 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_index: index out of range");
#line 1840 "string.m"
          return;
        }
#line 1840 "string.m"
      }
#line 1839 "string.m"
  }
#line 207 "string.m"
}

#line 206 "string.m"
MR_Char MR_CALL 
mercury__string__det_index_2_f_0(
#line 206 "string.m"
  MR_String mercury__string__S_4,
#line 206 "string.m"
  MR_Integer mercury__string__N_5)
#line 206 "string.m"
{
#line 1839 "string.m"
  {
#line 1839 "string.m"
    MR_bool mercury__string__succeeded;
#line 1839 "string.m"
    MR_Char mercury__string__C_6;
#line 1839 "string.m"
    MR_Char mercury__string__Char0_10;
#line 1825 "string.m"
    MR_Integer mercury__string__Len_15;
#line 1849 "string.m"
    MR_Char mercury__string__CharPrime_27;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__S_4 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 28090 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_15  = Length;
#line 2379 "string.m"
}
#line 2113 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__N_5 ;
	Length =  mercury__string__Len_15 ;
		{
#line 2113 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 28119 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2113 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1825 "string.m"
    if (mercury__string__succeeded)
#line 1825 "string.m"
      {
#line 1859 "string.m"
{
#define MR_PROC_LABEL mercury__string__det_index_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__S_4 ;
	Index =  mercury__string__N_5 ;
		{
#line 1859 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 28153 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_27  = Ch;
#line 1859 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1849 "string.m"
        if (mercury__string__succeeded)
#line 1848 "string.m"
          mercury__string__Char0_10 = mercury__string__CharPrime_27;
#line 1849 "string.m"
        else
#line 1850 "string.m"
          {
#line 1850 "string.m"
            {
#line 1850 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
            }
#line 1850 "string.m"
          }
#line 1849 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 1825 "string.m"
      }
#line 1839 "string.m"
    if (mercury__string__succeeded)
#line 1838 "string.m"
      mercury__string__C_6 = mercury__string__Char0_10;
#line 1839 "string.m"
    else
#line 1840 "string.m"
      {
#line 1840 "string.m"
        {
#line 1840 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.det_index: index out of range");
        }
#line 1840 "string.m"
      }
#line 1839 "string.m"
    return mercury__string__C_6;
#line 1839 "string.m"
  }
#line 206 "string.m"
}

#line 196 "string.m"
MR_bool MR_CALL 
mercury__string__index_3_p_0(
#line 196 "string.m"
  MR_String mercury__string__Str_4,
#line 196 "string.m"
  MR_Integer mercury__string__Index_5,
#line 196 "string.m"
  MR_Char * mercury__string__Char_6)
#line 196 "string.m"
{
#line 1825 "string.m"
  {
#line 1825 "string.m"
    MR_bool mercury__string__succeeded;
#line 1825 "string.m"
    MR_Integer mercury__string__Len_7;
#line 1849 "string.m"
    MR_Char mercury__string__CharPrime_19;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__Str_4 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 28237 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Len_7  = Length;
#line 2379 "string.m"
}
#line 2113 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  mercury__string__Index_5 ;
	Length =  mercury__string__Len_7 ;
		{
#line 2113 "string.m"

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);

#line 28266 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 2113 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1825 "string.m"
    if (mercury__string__succeeded)
#line 1825 "string.m"
      {
#line 1859 "string.m"
{
#define MR_PROC_LABEL mercury__string__index_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__string__Str_4 ;
	Index =  mercury__string__Index_5 ;
		{
#line 1859 "string.m"

    Ch = Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
    }
    SUCCESS_INDICATOR = (Ch > 0);

#line 28300 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mercury__string__CharPrime_19  = Ch;
#line 1859 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1849 "string.m"
        if (mercury__string__succeeded)
#line 1848 "string.m"
          *mercury__string__Char_6 = mercury__string__CharPrime_19;
#line 1849 "string.m"
        else
#line 1850 "string.m"
          {
#line 1850 "string.m"
            {
#line 1850 "string.m"
              mercury__require__error_1_p_0((MR_String) "string.unsafe_index: illegal sequence");
            }
#line 1850 "string.m"
          }
#line 1849 "string.m"
        mercury__string__succeeded = MR_TRUE;
#line 1825 "string.m"
      }
#line 1825 "string.m"
    return mercury__string__succeeded;
#line 1825 "string.m"
  }
#line 196 "string.m"
}

#line 181 "string.m"
void MR_CALL 
mercury__string__duplicate_char_3_p_0(
#line 181 "string.m"
  MR_Char mercury__string__Char_4,
#line 181 "string.m"
  MR_Integer mercury__string__Count_5,
#line 181 "string.m"
  MR_String * mercury__string__String_6)
#line 181 "string.m"
{
#line 1808 "string.m"
  {
#line 1808 "string.m"
    MR_bool mercury__string__succeeded;
#line 1808 "string.m"
    MR_Word mercury__string__TypeCtorInfo_8_8 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
#line 1808 "string.m"
    MR_Word mercury__string__V_7_7;
#line 1808 "string.m"
    MR_Word mercury__string__V_6_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1421 "string.m"
    MR_String mercury__string__Str0_23;

#line 145 "list.opt"
    {
#line 145 "list.opt"
      mercury__string__V_7_7 = mercury__list__duplicate_2_3_f_0(mercury__string__TypeCtorInfo_8_8, mercury__string__Count_5, ((MR_Box) (MR_Word) (mercury__string__Char_4)), mercury__string__V_6_15);
    }
#line 1419 "string.m"
    {
#line 1419 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__V_7_7, &mercury__string__Str0_23);
    }
#line 1421 "string.m"
    if (mercury__string__succeeded)
#line 1420 "string.m"
      *mercury__string__String_6 = mercury__string__Str0_23;
#line 1421 "string.m"
    else
#line 1422 "string.m"
      {
#line 1422 "string.m"
        {
#line 1422 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1422 "string.m"
          return;
        }
#line 1422 "string.m"
      }
#line 1808 "string.m"
  }
#line 181 "string.m"
}

#line 180 "string.m"
MR_String MR_CALL 
mercury__string__duplicate_char_2_f_0(
#line 180 "string.m"
  MR_Char mercury__string__C_4,
#line 180 "string.m"
  MR_Integer mercury__string__N_5)
#line 180 "string.m"
{
#line 1806 "string.m"
  {
#line 1806 "string.m"
    MR_bool mercury__string__succeeded;
#line 1806 "string.m"
    MR_String mercury__string__S_6;

#line 1806 "string.m"
    {
#line 1806 "string.m"
      mercury__string__duplicate_char_3_p_0(mercury__string__C_4, mercury__string__N_5, &mercury__string__S_6);
    }
#line 1806 "string.m"
    return mercury__string__S_6;
#line 1806 "string.m"
  }
#line 180 "string.m"
}

#line 173 "string.m"
MR_bool MR_CALL 
mercury__string__from_code_unit_list_2_p_0(
#line 173 "string.m"
  MR_Word mercury__string__CodeList_1,
#line 173 "string.m"
  MR_String * mercury__string__Str_2)
#line 173 "string.m"
{
#line 1680 "string.m"
  {
#line 1680 "string.m"
    MR_bool mercury__string__succeeded;

#line 1684 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_code_unit_list_2_p_0

	MR_Word CodeList;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	CodeList =  mercury__string__CodeList_1 ;
		{
#line 1684 "string.m"

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

#line 28481 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
#line 1684 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1680 "string.m"
    return mercury__string__succeeded;
#line 1680 "string.m"
  }
#line 173 "string.m"
}

#line 167 "string.m"
void MR_CALL 
mercury__string__to_code_unit_list_2_p_0(
#line 167 "string.m"
  MR_String mercury__string__String_3,
#line 167 "string.m"
  MR_Word * mercury__string__List_4)
#line 167 "string.m"
{
#line 1663 "string.m"
  {
#line 1663 "string.m"
    MR_bool mercury__string__succeeded;
#line 1663 "string.m"
    MR_Integer mercury__string__V_6_6;

#line 2379 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_code_unit_list_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__string__String_3 ;
		{
#line 2379 "string.m"

    Length = strlen(Str);

#line 28527 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__V_6_6  = Length;
#line 2379 "string.m"
}
#line 1664 "string.m"
    {
#line 1664 "string.m"
      mercury__string__to_code_unit_list_loop_4_p_0(mercury__string__String_3, (MR_Integer) 0, mercury__string__V_6_6, mercury__string__List_4);
#line 1664 "string.m"
      return;
    }
#line 1663 "string.m"
  }
#line 167 "string.m"
}

#line 163 "string.m"
MR_bool MR_CALL 
mercury__string__semidet_from_rev_char_list_2_p_0(
#line 163 "string.m"
  MR_Word mercury__string__Chars_1,
#line 163 "string.m"
  MR_String * mercury__string__Str_2)
#line 163 "string.m"
{
#line 1563 "string.m"
  {
#line 1563 "string.m"
    MR_bool mercury__string__succeeded;

#line 1567 "string.m"
{
#define MR_PROC_LABEL mercury__string__semidet_from_rev_char_list_2_p_0

	MR_Word Chars;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	Chars =  mercury__string__Chars_1 ;
		{
#line 1567 "string.m"
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
#line 28624 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
#line 1567 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1563 "string.m"
    return mercury__string__succeeded;
#line 1563 "string.m"
  }
#line 163 "string.m"
}

#line 155 "string.m"
void MR_CALL 
mercury__string__from_rev_char_list_2_p_0(
#line 155 "string.m"
  MR_Word mercury__string__Chars_3,
#line 155 "string.m"
  MR_String * mercury__string__Str_4)
#line 155 "string.m"
{
#line 1559 "string.m"
  {
#line 1559 "string.m"
    MR_bool mercury__string__succeeded;
#line 1559 "string.m"
    MR_String mercury__string__Str0_5;

#line 1557 "string.m"
    {
#line 1557 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__Chars_3, &mercury__string__Str0_5);
    }
#line 1559 "string.m"
    if (mercury__string__succeeded)
#line 1558 "string.m"
      *mercury__string__Str_4 = mercury__string__Str0_5;
#line 1559 "string.m"
    else
#line 1560 "string.m"
      {
#line 1560 "string.m"
        {
#line 1560 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
#line 1560 "string.m"
          return;
        }
#line 1560 "string.m"
      }
#line 1559 "string.m"
  }
#line 155 "string.m"
}

#line 154 "string.m"
MR_String MR_CALL 
mercury__string__from_rev_char_list_1_f_0(
#line 154 "string.m"
  MR_Word mercury__string__Cs_3)
#line 154 "string.m"
{
#line 1559 "string.m"
  {
#line 1559 "string.m"
    MR_bool mercury__string__succeeded;
#line 1559 "string.m"
    MR_String mercury__string__S_4;
#line 1559 "string.m"
    MR_String mercury__string__Str0_7;

#line 1557 "string.m"
    {
#line 1557 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_rev_char_list_2_p_0(mercury__string__Cs_3, &mercury__string__Str0_7);
    }
#line 1559 "string.m"
    if (mercury__string__succeeded)
#line 1558 "string.m"
      mercury__string__S_4 = mercury__string__Str0_7;
#line 1559 "string.m"
    else
#line 1560 "string.m"
      {
#line 1560 "string.m"
        {
#line 1560 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_rev_char_list: null character in list");
        }
#line 1560 "string.m"
      }
#line 1559 "string.m"
    return mercury__string__S_4;
#line 1559 "string.m"
  }
#line 154 "string.m"
}

#line 145 "string.m"
MR_bool MR_CALL 
mercury__string__semidet_from_char_list_2_p_0(
#line 145 "string.m"
  MR_Word mercury__string__CharList_1,
#line 145 "string.m"
  MR_String * mercury__string__Str_2)
#line 145 "string.m"
{
#line 1425 "string.m"
  {
#line 1425 "string.m"
    MR_bool mercury__string__succeeded;

#line 1429 "string.m"
{
#define MR_PROC_LABEL mercury__string__semidet_from_char_list_2_p_0

	MR_Word CharList;
	MR_String Str;
	MR_bool SUCCESS_INDICATOR;

	CharList =  mercury__string__CharList_1 ;
		{
#line 1429 "string.m"
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
#line 28806 "string.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mercury__string__Str_2  = Str;
#line 1429 "string.m"
	}
mercury__string__succeeded  = SUCCESS_INDICATOR;
}
#line 1425 "string.m"
    return mercury__string__succeeded;
#line 1425 "string.m"
  }
#line 145 "string.m"
}

#line 137 "string.m"
void MR_CALL 
mercury__string__from_char_list_2_p_1(
#line 137 "string.m"
  MR_Word * mercury__string__Chars_1,
#line 137 "string.m"
  MR_String mercury__string__Str_2)
#line 137 "string.m"
{
#line 1339 "string.m"
  {
#line 1339 "string.m"
    MR_bool mercury__string__succeeded;

#line 1343 "string.m"
{
#define MR_PROC_LABEL mercury__string__from_char_list_2_p_1

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_2 ;
		{
#line 1343 "string.m"
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
#line 28861 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__Chars_1  = CharList;
#line 1343 "string.m"
}
#line 1339 "string.m"
  }
#line 137 "string.m"
}

#line 136 "string.m"
void MR_CALL 
mercury__string__from_char_list_2_p_0(
#line 136 "string.m"
  MR_Word mercury__string__Chars_1,
#line 136 "string.m"
  MR_String * mercury__string__Str_2)
#line 136 "string.m"
{
#line 1421 "string.m"
  {
#line 1421 "string.m"
    MR_bool mercury__string__succeeded;
#line 1421 "string.m"
    MR_String mercury__string__Str0_7;

#line 1419 "string.m"
    {
#line 1419 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__Chars_1, &mercury__string__Str0_7);
    }
#line 1421 "string.m"
    if (mercury__string__succeeded)
#line 1420 "string.m"
      *mercury__string__Str_2 = mercury__string__Str0_7;
#line 1421 "string.m"
    else
#line 1422 "string.m"
      {
#line 1422 "string.m"
        {
#line 1422 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1422 "string.m"
          return;
        }
#line 1422 "string.m"
      }
#line 1421 "string.m"
  }
#line 136 "string.m"
}

#line 134 "string.m"
MR_String MR_CALL 
mercury__string__from_char_list_1_f_0(
#line 134 "string.m"
  MR_Word mercury__string__Cs_3)
#line 134 "string.m"
{
#line 1421 "string.m"
  {
#line 1421 "string.m"
    MR_bool mercury__string__succeeded;
#line 1421 "string.m"
    MR_String mercury__string__S_4;
#line 1421 "string.m"
    MR_String mercury__string__Str0_9;

#line 1419 "string.m"
    {
#line 1419 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__Cs_3, &mercury__string__Str0_9);
    }
#line 1421 "string.m"
    if (mercury__string__succeeded)
#line 1420 "string.m"
      mercury__string__S_4 = mercury__string__Str0_9;
#line 1421 "string.m"
    else
#line 1422 "string.m"
      {
#line 1422 "string.m"
        {
#line 1422 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
        }
#line 1422 "string.m"
      }
#line 1421 "string.m"
    return mercury__string__S_4;
#line 1421 "string.m"
  }
#line 134 "string.m"
}

#line 126 "string.m"
void MR_CALL 
mercury__string__to_char_list_2_p_1(
#line 126 "string.m"
  MR_String * mercury__string__Str_1,
#line 126 "string.m"
  MR_Word mercury__string__CharList_2)
#line 126 "string.m"
{
#line 1421 "string.m"
  {
#line 1421 "string.m"
    MR_bool mercury__string__succeeded;
#line 1421 "string.m"
    MR_String mercury__string__Str0_11;

#line 1419 "string.m"
    {
#line 1419 "string.m"
      mercury__string__succeeded = mercury__string__semidet_from_char_list_2_p_0(mercury__string__CharList_2, &mercury__string__Str0_11);
    }
#line 1421 "string.m"
    if (mercury__string__succeeded)
#line 1420 "string.m"
      *mercury__string__Str_1 = mercury__string__Str0_11;
#line 1421 "string.m"
    else
#line 1422 "string.m"
      {
#line 1422 "string.m"
        {
#line 1422 "string.m"
          mercury__require__error_1_p_0((MR_String) "string.from_char_list: null character in list");
#line 1422 "string.m"
          return;
        }
#line 1422 "string.m"
      }
#line 1421 "string.m"
  }
#line 126 "string.m"
}

#line 125 "string.m"
void MR_CALL 
mercury__string__to_char_list_2_p_0(
#line 125 "string.m"
  MR_String mercury__string__Str_1,
#line 125 "string.m"
  MR_Word * mercury__string__CharList_2)
#line 125 "string.m"
{
#line 1339 "string.m"
  {
#line 1339 "string.m"
    MR_bool mercury__string__succeeded;

#line 1343 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_char_list_2_p_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__Str_1 ;
		{
#line 1343 "string.m"
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
#line 29040 "string.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__string__CharList_2  = CharList;
#line 1343 "string.m"
}
#line 1339 "string.m"
  }
#line 125 "string.m"
}

#line 123 "string.m"
MR_Word MR_CALL 
mercury__string__to_char_list_1_f_0(
#line 123 "string.m"
  MR_String mercury__string__S_3)
#line 123 "string.m"
{
#line 1339 "string.m"
  {
#line 1339 "string.m"
    MR_bool mercury__string__succeeded;
#line 1339 "string.m"
    MR_Word mercury__string__Cs_4;

#line 1343 "string.m"
{
#define MR_PROC_LABEL mercury__string__to_char_list_1_f_0

	MR_String Str;
	MR_Word CharList;

	Str =  mercury__string__S_3 ;
		{
#line 1343 "string.m"
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
#line 29090 "string.c"

		;}
#undef MR_PROC_LABEL
	 mercury__string__Cs_4  = CharList;
#line 1343 "string.m"
}
#line 1339 "string.m"
    return mercury__string__Cs_4;
#line 1339 "string.m"
  }
#line 123 "string.m"
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
